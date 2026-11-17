"""Per-type codec emitter（方案 5.4/5.5）。

为每个结构体/SEQUENCE OF 类型生成：

* ``ErrorCode Encode_<T>(Encoder&, const <T>&)``
* ``ErrorCode Decode_<T>(Decoder&, <T>&)``（失败时内部释放并清零）
* ``void Free_<T>(<T>&)``（递归释放 malloc 内存并清零）

以及 53 个消息入口的 ``EncodeMessage_<Kind>`` / ``DecodeMessage_<Kind>`` /
``FreeMessage_<Kind>``（先写/读信道包装位，再调用消息体类型函数）。
"""

from __future__ import annotations

from typing import Dict, List, Optional, Sequence, Set, Tuple

from ..cmodel import (
    Addition,
    CModel,
    EnumDef,
    FieldLayout,
    GroupDef,
    MessageInfo,
    StructDef,
    TypeRef,
    UINT32_MAX,
)
from .c_common import generated_banner, sanitize_comment

INTERNAL_HEADER = "codec_internal.h"


class CodecEmitter:
    def __init__(self, cmodel: CModel, chunk_size: int = 120) -> None:
        self.cm = cmodel
        self.chunk_size = chunk_size
        self.containing_targets: Dict[int, str] = {}
        self._collect_containing_targets()

    # -- 公共入口 -----------------------------------------------------------

    def emit_internal_header(self) -> str:
        cm = self.cm
        lines: List[str] = []
        lines.extend(
            generated_banner(
                "codec_internal.h — 生成的编解码函数声明（内部头，不安装）",
                cm.input_sha256,
                cm.asn_version,
            )
        )
        lines.extend(
            [
                "",
                "#ifndef RRC_CODEC_GENERATED_CODEC_INTERNAL_H",
                "#define RRC_CODEC_GENERATED_CODEC_INTERNAL_H",
                "",
                '#include "rrc_codec/rrc_codec.h"',
                '#include "../core/bitstream.hpp"',
                "",
                "namespace rrc {",
                "namespace v1810 {",
                "",
                "/* ---------- 类型三件套 ---------- */",
            ]
        )
        for struct in cm.ordered_structs:
            name = struct.cname
            lines.append(f"ErrorCode Encode_{name}(Encoder& enc, const {name}& value);")
            lines.append(f"ErrorCode Decode_{name}(Decoder& dec, {name}& value);")
            lines.append(f"void Free_{name}({name}& value);")
            lines.append("")
        if self.containing_targets:
            lines.append("/* ---------- CONTAINING 目标（开放类型包装 + 深度计数） ---------- */")
            for target_id, cname in sorted(self.containing_targets.items()):
                lines.append(
                    f"ErrorCode EncodeContained_{cname}(Encoder& enc, const {cname}& value);"
                )
                lines.append(
                    f"ErrorCode DecodeContained_{cname}(Decoder& dec, {cname}*& out);"
                )
                lines.append("")
        lines.append("/* ---------- 53 个消息入口 ---------- */")
        for message in cm.messages:
            cname = message.struct_cname
            suffix = message.kind_suffix
            lines.append(
                f"ErrorCode EncodeMessage_{suffix}(Encoder& enc, const {cname}& value);"
            )
            lines.append(
                f"ErrorCode DecodeMessage_{suffix}(Decoder& dec, {cname}& value);"
            )
            lines.append(f"void FreeMessage_{suffix}({cname}& value);")
            lines.append("")
        lines.extend(
            [
                "}  // namespace v1810",
                "}  // namespace rrc",
                "",
                "#endif /* RRC_CODEC_GENERATED_CODEC_INTERNAL_H */",
            ]
        )
        return "\n".join(lines) + "\n"

    def emit_parts(self) -> Dict[str, str]:
        chunks = self.cm.chunks(self.chunk_size)
        files: Dict[str, str] = {}
        message_functions: Optional[List[str]] = None
        for index, chunk in enumerate(chunks, start=1):
            lines: List[str] = []
            lines.extend(
                generated_banner(
                    f"src/generated/codec_part{index:03d}.cpp — 生成的编解码函数",
                    self.cm.input_sha256,
                    self.cm.asn_version,
                )
            )
            lines.extend(
                [
                    "",
                    '#include "codec_internal.h"',
                    "",
                    "#include <cstdlib>",
                    "#include <cstring>",
                    "#include <vector>",
                    "",
                    "namespace rrc {",
                    "namespace v1810 {",
                    "",
                ]
            )
            if message_functions is None:
                message_functions = self._emit_message_functions()
                lines.extend(message_functions)
                lines.append("")
                lines.extend(self._emit_containing_functions())
                lines.append("")
            for struct in chunk:
                lines.extend(self._emit_struct_functions(struct))
                lines.append("")
            lines.extend(
                [
                    "}  // namespace v1810",
                    "}  // namespace rrc",
                ]
            )
            files[f"codec_part{index:03d}.cpp"] = "\n".join(lines) + "\n"
        if message_functions is None:
            files["codec_part001.cpp"] = ""
        return files

    def emit_sources_cmake(self, part_names: Sequence[str]) -> str:
        lines = [
            "# 生成源列表（由 rrcgen 生成；入库，请勿手工修改）",
            "# 每个 codec_partNNN.cpp 为一个独立编译单元（方案 5.5）。",
            "set(RRC_CODEC_GENERATED_SOURCES",
        ]
        for name in part_names:
            lines.append(
                '  "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/' + name + '"'
            )
        lines.append(")")
        return "\n".join(lines) + "\n"

    # -- 名称/所有权工具 -----------------------------------------------------

    def _collect_containing_targets(self) -> None:
        for struct in self.cm.ordered_structs:
            fields: List[FieldLayout] = []
            if struct.kind in ("sequence", "group"):
                fields = list(struct.root_fields) + list(struct.direct_additions)
                if struct.kind == "group":
                    group = self.cm.group_by_key[struct.key]
                    fields = list(group.fields)
            elif struct.kind == "choice":
                fields = list(struct.alternatives)
            elif struct.kind == "seqof" and struct.element is not None:
                fields = []
                self._collect_target_from_ref(struct.element)
            for layout in fields:
                self._collect_target_from_ref(layout.ref)

    def _collect_target_from_ref(self, ref: TypeRef) -> None:
        if ref.kind == "containing":
            assert ref.target is not None
            target_id = ref.target.type_id
            self.containing_targets[target_id] = ref.target.cname
        elif ref.kind in ("seqof", "inline_seqof") and ref.element is not None:
            self._collect_target_from_ref(ref.element)

    def _struct_of(self, ref: TypeRef) -> Optional[StructDef]:
        return ref.struct

    def _cname_of(self, ref: TypeRef) -> str:
        if ref.kind == "containing":
            assert ref.target is not None
            return ref.target.cname
        return ref.cname

    # == 结构体函数 =========================================================

    def _emit_struct_functions(self, struct: StructDef) -> List[str]:
        lines: List[str] = []
        if struct.kind == "empty":
            lines.extend(self._emit_empty_functions(struct))
        elif struct.kind == "group":
            group = self.cm.group_by_key[struct.key]
            lines.extend(
                self._emit_sequence_functions(
                    struct.cname,
                    group.fields,
                    extensible=False,
                    group_defs=[],
                    direct_additions=[],
                    additions=[],
                )
            )
        elif struct.kind == "sequence":
            lines.extend(
                self._emit_sequence_functions(
                    struct.cname,
                    struct.root_fields,
                    extensible=struct.extensible,
                    group_defs=struct.group_defs,
                    direct_additions=struct.direct_additions,
                    additions=struct.additions,
                )
            )
        elif struct.kind == "choice":
            lines.extend(self._emit_choice_functions(struct))
        elif struct.kind == "seqof":
            lines.extend(self._emit_seqof_functions(struct))
        return lines

    # -- 空 SEQUENCE ---------------------------------------------------------

    def _emit_empty_functions(self, struct: StructDef) -> List[str]:
        name = struct.cname
        lines = [
            f"ErrorCode Encode_{name}(Encoder& enc, const {name}& value)",
            "{",
            "    (void)value;",
        ]
        if struct.extensible:
            lines.append("    enc.WriteBit(false);")
        lines.extend(
            [
                "    return enc.Error();",
                "}",
                "",
                f"ErrorCode Decode_{name}(Decoder& dec, {name}& value)",
                "{",
                "    std::memset(&value, 0, sizeof(value));",
            ]
        )
        if struct.extensible:
            lines.extend(
                [
                    "    bool extension = false;",
                    "    if (!dec.ReadBit(extension)) {",
                    "        dec.Fail(dec.Error());",
                    "        return dec.Error();",
                    "    }",
                    "    if (extension) {",
                    "        dec.Fail(ErrorCode_UnsupportedExtension);",
                    "        return dec.Error();",
                    "    }",
                ]
            )
        lines.extend(
            [
                "    return dec.Error();",
                "}",
                "",
                f"void Free_{name}({name}& value)",
                "{",
                "    std::memset(&value, 0, sizeof(value));",
                "}",
            ]
        )
        return lines

    # -- SEQUENCE / 扩展组 ---------------------------------------------------

    def _emit_sequence_functions(
        self,
        name: str,
        root_fields: List[FieldLayout],
        extensible: bool,
        group_defs: List[GroupDef],
        direct_additions: List[FieldLayout],
        additions: List[Addition],
    ) -> List[str]:
        encode = self._emit_sequence_encode(
            name, root_fields, extensible, additions
        )
        decode = self._emit_sequence_decode(
            name, root_fields, extensible, additions
        )
        free = self._emit_sequence_free(name, root_fields, extensible, additions)
        return encode + [""] + decode + [""] + free

    def _bitmap_fields(self, root_fields: List[FieldLayout]) -> List[FieldLayout]:
        return [f for f in root_fields if f.optional or f.default_expr is not None]

    def _addition_presence(self, addition: Addition, value: str = "value") -> str:
        if addition.kind == "group":
            assert addition.group is not None
            return f"{value}.has_extGroup{addition.group.ordinal}"
        assert addition.field_layout is not None
        layout = addition.field_layout
        if layout.optional:
            if layout.is_containing:
                return f"{value}.{layout.cname} != nullptr"
            return f"{value}.has_{layout.cname}"
        return "true"

    def _emit_sequence_encode(
        self,
        name: str,
        root_fields: List[FieldLayout],
        extensible: bool,
        additions: List[Addition],
    ) -> List[str]:
        lines = [f"ErrorCode Encode_{name}(Encoder& enc, const {name}& value)", "{"]
        lines.append("    (void)value;")
        any_extension = ""
        if extensible:
            if additions:
                terms = [self._addition_presence(addition) for addition in additions]
                any_extension = " || ".join(terms) or "false"
                lines.append(f"    const bool any_extension = {any_extension};")
            else:
                lines.append("    const bool any_extension = false;")
            lines.append("    enc.WriteBit(any_extension);")
        # 根位图
        for index, layout in enumerate(root_fields):
            if layout.optional and not layout.is_containing:
                lines.append(f"    enc.WriteBit(value.{layout.has_name});")
            elif layout.is_containing and layout.optional:
                lines.append(f"    enc.WriteBit(value.{layout.cname} != nullptr);")
            elif layout.default_expr is not None:
                lines.append(
                    f"    enc.WriteBit(value.{layout.cname} != {layout.default_expr});"
                )
        # 根字段
        for layout in root_fields:
            lines.extend(self._encode_field_guarded(layout))
        # 扩展
        if extensible and additions:
            lines.append("    if (any_extension) {")
            lines.append(
                f"        enc.WriteNormallySmallLength({len(additions)}u);"
            )
            for addition in additions:
                lines.append(
                    f"        enc.WriteBit({self._addition_presence(addition)});"
                )
            for addition in additions:
                lines.append(
                    f"        if ({self._addition_presence(addition)}) {{"
                )
                for line in self._encode_addition(addition):
                    lines.append("    " + line)
                lines.append("        }")
            lines.append("    }")
        lines.append("    return enc.Error();")
        lines.append("}")
        return lines

    def _encode_field_guarded(self, layout: FieldLayout) -> List[str]:
        lines: List[str] = []
        if layout.optional:
            condition = (
                f"value.{layout.cname} != nullptr"
                if layout.is_containing
                else f"value.{layout.has_name}"
            )
            lines.append(f"    if ({condition}) {{")
            for line in self._encode_field_value(layout, "value." + layout.cname, 8):
                lines.append(line)
            lines.append("    }")
        elif layout.default_expr is not None:
            lines.append(
                f"    if (value.{layout.cname} != {layout.default_expr}) {{"
            )
            for line in self._encode_field_value(layout, "value." + layout.cname, 8):
                lines.append(line)
            lines.append("    }")
        else:
            lines.extend(self._encode_field_value(layout, "value." + layout.cname, 4))
        return lines

    def _encode_field_value(
        self, layout: FieldLayout, expr: str, indent: int, encoder: str = "enc"
    ) -> List[str]:
        pad = " " * indent
        if layout.is_inline_seqof:
            return self._encode_inline_seqof(layout, indent, encoder)
        return [
            pad + line
            for line in self._encode_ref(layout.ref, expr, indent, encoder)
        ]

    def _encode_addition(self, addition: Addition) -> List[str]:
        if addition.kind == "group":
            assert addition.group is not None
            group = addition.group
            lines = [
                "Encoder sub;",
                f"Encode_{group.cname}(sub, value.extGroup{group.ordinal});",
                "if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }",
                "enc.WriteOpenType(sub.Finish());",
            ]
            return lines
        assert addition.field_layout is not None
        layout = addition.field_layout
        lines = ["Encoder sub;"]
        lines.extend(self._encode_ref(layout.ref, "value." + layout.cname, 0, "sub"))
        lines.extend(
            [
                "if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }",
                "enc.WriteOpenType(sub.Finish());",
            ]
        )
        return lines

    def _encode_ref(
        self, ref: TypeRef, expr: str, indent: int, encoder: str = "enc"
    ) -> List[str]:
        pad = " " * indent
        kind = ref.kind
        if kind == "integer":
            return [
                f"{encoder}.WriteConstrainedInteger((std::int64_t)({expr}), "
                f"{ref.integer_lb}, {ref.integer_ub});"
            ]
        if kind == "bool":
            return [f"{encoder}.WriteBool({expr});"]
        if kind == "enum":
            enum_def = ref.enum
            assert enum_def is not None
            if not enum_def.extensible:
                count = max(1, len(enum_def.constants))
                return [
                    f"{encoder}.WriteConstrainedInteger((std::int64_t)({expr}), 0, "
                    f"{count - 1});"
                ]
            root = enum_def.root_count
            lines = [
                "{",
                f"    const std::int64_t enum_value = (std::int64_t)({expr});",
                "    if (enum_value < 0) {",
                f"        return {encoder}.Fail(ErrorCode_InvalidEnumValue);",
                "    }",
            ]
            if root > 0:
                lines.extend(
                    [
                        f"    if (enum_value < {root}) {{",
                        f"        {encoder}.WriteBit(false);",
                        f"        {encoder}.WriteConstrainedInteger(enum_value, 0, {root - 1});",
                        "    } else {",
                        f"        {encoder}.WriteBit(true);",
                        f"        {encoder}.WriteNormallySmallNonNegative("
                        f"(std::uint32_t)(enum_value - {root}));",
                        "    }",
                    ]
                )
            else:
                lines.extend(
                    [
                        f"    {encoder}.WriteBit(true);",
                        f"    {encoder}.WriteNormallySmallNonNegative("
                        "(std::uint32_t)enum_value);",
                    ]
                )
            lines.append("}")
            return lines
        if kind in ("bitstring", "octet"):
            return self._encode_string_ref(ref, expr, encoder)
        if kind == "struct":
            return [f"Encode_{ref.cname}({encoder}, {expr});"]
        if kind == "seqof":
            return [f"Encode_{ref.cname}({encoder}, {expr});"]
        if kind == "containing":
            assert ref.target is not None
            return [
                f"if ({expr} == nullptr) {{",
                f"    {encoder}.Fail(ErrorCode_MissingMandatoryField);",
                "} else {",
                f"    EncodeContained_{ref.target.cname}({encoder}, *{expr});",
                "}",
            ]
        if kind == "null":
            return ["(void)0;"]
        raise ValueError(f"cannot encode ref kind {kind}")

    def _encode_string_ref(
        self, ref: TypeRef, expr: str, encoder: str = "enc"
    ) -> List[str]:
        if ref.kind == "bitstring":
            member_bytes = f"{expr}.bytes"
            member_len = f"{expr}.bitLength"
            if ref.size_fixed:
                return [
                    f"{encoder}.WriteFixedBitString({member_bytes}, {member_len}, "
                    f"{ref.size_lb}, {ref.size_ub});"
                ]
            if ref.size_unbounded:
                upper = 0xFFFFFFFF
                return [
                    f"{encoder}.WriteSemiConstrainedBitString({member_bytes}, "
                    f"{member_len}, {ref.size_lb}, {upper}u);"
                ]
            return [
                f"{encoder}.WriteConstrainedBitString({member_bytes}, {member_len}, "
                f"{ref.size_lb}, {ref.size_ub});"
            ]
        member_bytes = f"{expr}.bytes"
        member_len = f"{expr}.length"
        if ref.size_fixed:
            return [
                f"{encoder}.WriteFixedOctetString({member_bytes}, {member_len}, "
                f"{ref.size_lb}, {ref.size_ub});"
            ]
        if ref.size_unbounded:
            return [
                f"{encoder}.WriteSemiConstrainedOctetString({member_bytes}, "
                f"{member_len}, {ref.size_lb}, 0xFFFFFFFFu);"
            ]
        return [
            f"{encoder}.WriteConstrainedOctetString({member_bytes}, {member_len}, "
            f"{ref.size_lb}, {ref.size_ub});"
        ]

    def _emit_sequence_decode(
        self,
        name: str,
        root_fields: List[FieldLayout],
        extensible: bool,
        additions: List[Addition],
    ) -> List[str]:
        lines = [
            f"ErrorCode Decode_{name}(Decoder& dec, {name}& value)",
            "{",
            "    std::memset(&value, 0, sizeof(value));",
            "    do {",
        ]
        if extensible:
            lines.append("    bool extension = false;")
        bitmap_index = 0
        for layout in root_fields:
            if layout.optional and not layout.is_containing:
                lines.append(f"    bool present_{bitmap_index} = false;")
                bitmap_index += 1
            elif layout.is_containing and layout.optional:
                lines.append(f"    bool present_{bitmap_index} = false;")
                bitmap_index += 1
            elif layout.default_expr is not None:
                lines.append(f"    bool present_{bitmap_index} = false;")
                bitmap_index += 1
        if extensible:
            lines.append("    if (!dec.ReadBit(extension)) { goto fail; }")
            if not additions:
                lines.append("    if (extension) {")
                lines.append(
                    "        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;"
                )
                lines.append("    }")
        bitmap_index = 0
        for layout in root_fields:
            is_bitmap = (
                (layout.optional and not layout.is_containing)
                or (layout.is_containing and layout.optional)
                or layout.default_expr is not None
            )
            if is_bitmap:
                lines.append(
                    f"    if (!dec.ReadBit(present_{bitmap_index})) {{ goto fail; }}"
                )
                bitmap_index += 1
        # 根字段
        bitmap_index = 0
        for layout in root_fields:
            is_bitmap = (
                (layout.optional and not layout.is_containing)
                or (layout.is_containing and layout.optional)
                or layout.default_expr is not None
            )
            present_name = f"present_{bitmap_index}" if is_bitmap else ""
            if is_bitmap:
                bitmap_index += 1
            expr = "value." + layout.cname
            if layout.optional:
                lines.append(f"    if ({present_name}) {{")
                for line in self._decode_field_value(layout, expr, 8, "fail"):
                    lines.append(line)
                lines.append("    }")
            elif layout.default_expr is not None:
                lines.append(f"    if ({present_name}) {{")
                for line in self._decode_field_value(layout, expr, 8, "fail"):
                    lines.append(line)
                lines.append("    } else {")
                lines.append(f"        {expr} = {layout.default_expr};")
                lines.append("    }")
            else:
                lines.append("    {")
                for line in self._decode_field_value(layout, expr, 8, "fail"):
                    lines.append(line)
                lines.append("    }")
        # 扩展
        if extensible and additions:
            lines.append("    if (extension) {")
            lines.append("        std::uint32_t addition_count = 0;")
            lines.append(
                "        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }"
            )
            lines.append(f"        if (addition_count > {len(additions)}u) {{")
            lines.append(
                "            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;"
            )
            lines.append("        }")
            lines.append(f"        bool addition_present[{len(additions)}] = {{false}};")
            lines.append(
                "        for (std::uint32_t i = 0; i < addition_count; ++i) {"
            )
            lines.append(
                "            bool bit = false;"
            )
            lines.append(
                "            if (!dec.ReadBit(bit)) { goto fail; }"
            )
            lines.append("            addition_present[i] = bit;")
            lines.append("        }")
            for index, addition in enumerate(additions):
                lines.append(f"        if (addition_present[{index}]) {{")
                for line in self._decode_addition(addition, index):
                    lines.append("    " + line)
                lines.append("        }")
            lines.append("    }")
        lines.extend(
            [
                "    return dec.Error();",
                "    } while (false);",
                "fail:",
                f"    Free_{name}(value);",
                "    std::memset(&value, 0, sizeof(value));",
                "    return dec.Error();",
                "}",
            ]
        )
        return lines

    def _decode_addition(self, addition: Addition, index: int) -> List[str]:
        lines = [
            "std::vector<std::uint8_t> open_bytes;",
            "if (!dec.ReadOpenType(open_bytes)) { goto fail; }",
            "Decoder sub(open_bytes.data(), open_bytes.size());",
        ]
        if addition.kind == "group":
            assert addition.group is not None
            group = addition.group
            lines.append(
                f"if (Decode_{group.cname}(sub, value.extGroup{group.ordinal}) "
                "!= ErrorCode_Ok) {"
            )
            lines.append("    dec.Fail(sub.Error()); goto fail;")
            lines.append("}")
            lines.append(f"value.has_extGroup{group.ordinal} = true;")
        else:
            assert addition.field_layout is not None
            layout = addition.field_layout
            lines.extend(
                self._decode_ref(
                    layout.ref, "value." + layout.cname, 0, "fail", decoder="sub"
                )
            )
        lines.extend(
            [
                "if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }",
                "if (!sub.CheckOpenTypeEnd()) {",
                "    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;",
                "}",
            ]
        )
        return lines

    def _decode_field_value(
        self, layout: FieldLayout, expr: str, indent: int, fail_label: str
    ) -> List[str]:
        pad = " " * indent
        if layout.is_inline_seqof:
            return self._decode_inline_seqof(layout, indent, fail_label)
        body = self._decode_ref(layout.ref, expr, indent, fail_label)
        return [pad + line if line and not line.startswith(" ") else line for line in body]

    def _decode_ref(
        self,
        ref: TypeRef,
        expr: str,
        indent: int,
        fail_label: str,
        decoder: str = "dec",
    ) -> List[str]:
        pad = " " * indent
        kind = ref.kind
        if kind == "integer":
            return [
                f"std::int64_t tmp_value = 0;",
                f"if (!{decoder}.ReadConstrainedInteger({ref.integer_lb}, "
                f"{ref.integer_ub}, tmp_value)) {{ goto {fail_label}; }}",
                f"{expr} = ({ref.decl_type()})tmp_value;",
            ]
        if kind == "bool":
            return [
                "bool tmp_value = false;",
                f"if (!{decoder}.ReadBool(tmp_value)) {{ goto {fail_label}; }}",
                f"{expr} = tmp_value;",
            ]
        if kind == "enum":
            enum_def = ref.enum
            assert enum_def is not None
            if not enum_def.extensible:
                count = max(1, len(enum_def.constants))
                if count > 1:
                    return [
                        "std::int64_t tmp_value = 0;",
                        f"if (!{decoder}.ReadConstrainedInteger(0, {count - 1}, "
                        f"tmp_value)) {{ goto {fail_label}; }}",
                        f"{expr} = ({enum_def.cname})tmp_value;",
                    ]
                return [f"{expr} = ({enum_def.cname})0;"]
            root = enum_def.root_count
            lines = [
                "bool enum_extension = false;",
                f"if (!{decoder}.ReadBit(enum_extension)) {{ goto {fail_label}; }}",
                "std::int64_t enum_value = 0;",
                "if (!enum_extension) {",
            ]
            if root > 1:
                lines.extend(
                    [
                        "    std::int64_t root_index = 0;",
                        f"    if (!{decoder}.ReadConstrainedInteger(0, {root - 1}, "
                        f"root_index)) {{ goto {fail_label}; }}",
                        "    enum_value = root_index;",
                    ]
                )
            else:
                lines.append("    enum_value = 0;")
            lines.extend(
                [
                    "} else {",
                    "    std::uint32_t extension_index = 0;",
                    f"    if (!{decoder}.ReadNormallySmallNonNegative("
                    f"extension_index)) {{ goto {fail_label}; }}",
                    f"    enum_value = (std::int64_t){root} + "
                    "(std::int64_t)extension_index;",
                    "}",
                    f"{expr} = ({enum_def.cname})enum_value;",
                ]
            )
            return lines
        if kind in ("bitstring", "octet"):
            return self._decode_string_ref(ref, expr, fail_label, decoder)
        if kind == "struct":
            return [
                f"if (Decode_{ref.cname}({decoder}, {expr}) != ErrorCode_Ok) "
                f"{{ goto {fail_label}; }}"
            ]
        if kind == "seqof":
            return [
                f"if (Decode_{ref.cname}({decoder}, {expr}) != ErrorCode_Ok) "
                f"{{ goto {fail_label}; }}"
            ]
        if kind == "containing":
            return self._decode_containing(ref, expr, fail_label, decoder)
        if kind == "null":
            return ["(void)0;"]
        raise ValueError(f"cannot decode ref kind {kind}")

    def _decode_string_ref(
        self, ref: TypeRef, expr: str, fail_label: str, decoder: str
    ) -> List[str]:
        kind = ref.kind
        out_bytes = "string_bytes"
        out_len = "string_length"
        if kind == "bitstring":
            lines = [
                "std::uint8_t* string_bytes = nullptr;",
                "std::uint32_t string_length = 0;",
            ]
            if ref.size_fixed:
                lines.append(
                    f"if (!{decoder}.ReadFixedBitString(string_bytes, {ref.size_lb})) "
                    f"{{ goto {fail_label}; }}"
                )
                lines.append(f"string_length = {ref.size_lb};")
            elif ref.size_unbounded:
                lines.append(
                    f"if (!{decoder}.ReadSemiConstrainedBitString(string_bytes, "
                    f"string_length, {ref.size_lb}, 0xFFFFFFFFu)) "
                    f"{{ goto {fail_label}; }}"
                )
            else:
                lines.append(
                    f"if (!{decoder}.ReadConstrainedBitString(string_bytes, "
                    f"string_length, {ref.size_lb}, {ref.size_ub})) "
                    f"{{ goto {fail_label}; }}"
                )
            lines.append(f"{expr}.bytes = string_bytes;")
            lines.append(f"{expr}.bitLength = string_length;")
            return lines
        lines = [
            "std::uint8_t* string_bytes = nullptr;",
            "std::uint32_t string_length = 0;",
        ]
        if ref.size_fixed:
            lines.append(
                f"if (!{decoder}.ReadFixedOctetString(string_bytes, {ref.size_lb})) "
                f"{{ goto {fail_label}; }}"
            )
            lines.append(f"string_length = {ref.size_lb};")
        elif ref.size_unbounded:
            lines.append(
                f"if (!{decoder}.ReadSemiConstrainedOctetString(string_bytes, "
                f"string_length, {ref.size_lb}, 0xFFFFFFFFu)) "
                f"{{ goto {fail_label}; }}"
            )
        else:
            lines.append(
                f"if (!{decoder}.ReadConstrainedOctetString(string_bytes, "
                f"string_length, {ref.size_lb}, {ref.size_ub})) "
                f"{{ goto {fail_label}; }}"
            )
        lines.append(f"{expr}.bytes = string_bytes;")
        lines.append(f"{expr}.length = string_length;")
        return lines

    def _decode_containing(
        self, ref: TypeRef, expr: str, fail_label: str, decoder: str
    ) -> List[str]:
        assert ref.target is not None
        target = ref.target
        target_cname = target.cname
        lines = [
            f"if ({decoder}.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {{",
            "    " + f"{decoder}.Fail(ErrorCode_ContainingDepthExceeded); "
            f"goto {fail_label};",
            "}",
            "std::vector<std::uint8_t> containing_bytes;",
            f"if (!{decoder}.ReadOpenType(containing_bytes)) {{ goto {fail_label}; }}",
            "Decoder containing_sub(containing_bytes.data(), containing_bytes.size());",
            f"containing_sub.SetContainingDepth("
            f"{decoder}.ContainingDepth() + 1);",
            f"{target_cname}* containing_value = "
            f"({target_cname}*)std::malloc(sizeof({target_cname}));",
            "if (containing_value == nullptr) {",
            f"    {decoder}.Fail(ErrorCode_OutOfMemory); goto {fail_label};",
            "}",
            "std::memset(containing_value, 0, sizeof(*containing_value));",
            f"if (Decode_{target_cname}(containing_sub, *containing_value) "
            "!= ErrorCode_Ok) {",
            f"    Free_{target_cname}(*containing_value);",
            "    std::free(containing_value);",
            f"    {decoder}.Fail(containing_sub.Error()); goto {fail_label};",
            "}",
            "if (!containing_sub.CheckOpenTypeEnd()) {",
            f"    Free_{target_cname}(*containing_value);",
            "    std::free(containing_value);",
            f"    {decoder}.Fail(ErrorCode_OpenTypeOverrun); goto {fail_label};",
            "}",
            f"{expr} = containing_value;",
        ]
        return lines

    def _emit_sequence_free(
        self,
        name: str,
        root_fields: List[FieldLayout],
        extensible: bool,
        additions: List[Addition],
    ) -> List[str]:
        lines = [f"void Free_{name}({name}& value)", "{"]
        for layout in root_fields:
            lines.extend(self._free_field_guarded(layout))
        for addition in additions:
            if addition.kind == "group":
                assert addition.group is not None
                group = addition.group
                lines.append(f"    if (value.has_extGroup{group.ordinal}) {{")
                lines.append(f"        Free_{group.cname}(value.extGroup{group.ordinal});")
                lines.append("    }")
            else:
                assert addition.field_layout is not None
                lines.extend(self._free_field_guarded(addition.field_layout))
        lines.append("    std::memset(&value, 0, sizeof(value));")
        lines.append("}")
        return lines

    def _free_field_guarded(self, layout: FieldLayout) -> List[str]:
        lines: List[str] = []
        if layout.optional:
            condition = (
                f"value.{layout.cname} != nullptr"
                if layout.is_containing
                else f"value.{layout.has_name}"
            )
            lines.append(f"    if ({condition}) {{")
            for line in self._free_field_value(layout, "value." + layout.cname, 8):
                lines.append(line)
            lines.append("    }")
        else:
            lines.extend(self._free_field_value(layout, "value." + layout.cname, 4))
        return lines

    def _free_field_value(
        self, layout: FieldLayout, expr: str, indent: int
    ) -> List[str]:
        pad = " " * indent
        if layout.is_inline_seqof:
            return [pad + line for line in self._free_inline_seqof(layout)]
        return [pad + line for line in self._free_ref(layout.ref, expr)]

    def _free_ref(self, ref: TypeRef, expr: str) -> List[str]:
        if ref.kind == "struct":
            return [f"Free_{ref.cname}({expr});"]
        if ref.kind == "seqof":
            return [f"Free_{ref.cname}({expr});"]
        if ref.kind == "bitstring":
            return [
                f"std::free({expr}.bytes);",
                f"{expr}.bytes = nullptr;",
                f"{expr}.bitLength = 0;",
            ]
        if ref.kind == "octet":
            return [
                f"std::free({expr}.bytes);",
                f"{expr}.bytes = nullptr;",
                f"{expr}.length = 0;",
            ]
        if ref.kind == "containing":
            assert ref.target is not None
            return [
                f"if ({expr} != nullptr) {{",
                f"    Free_{ref.target.cname}(*{expr});",
                f"    std::free({expr});",
                f"    {expr} = nullptr;",
                "}",
            ]
        return []

    # -- 内联 SEQUENCE OF ----------------------------------------------------

    def _encode_inline_seqof(
        self, layout: FieldLayout, indent: int, encoder: str = "enc"
    ) -> List[str]:
        ref = layout.ref
        assert ref.element is not None
        element = ref.element
        count_expr = f"value.{layout.cname}_count"
        items_expr = f"value.{layout.cname}_items"
        lines: List[str] = []
        if ref.size_fixed:
            lines.append(f"if ({count_expr} != {ref.size_lb}u) {{")
            lines.append(f"    {encoder}.Fail(ErrorCode_ValueOutOfRange);")
            lines.append("} else {")
            lines.append(f"    for (std::uint32_t i = 0; i < {count_expr}; ++i) {{")
            lines.extend(self._encode_element(element, f"{items_expr}[i]", 8, encoder))
            lines.append("    }")
            lines.append("}")
        elif not ref.size_unbounded:
            lines.append(
                f"{encoder}.WriteConstrainedLength({count_expr}, {ref.size_lb}u, "
                f"{ref.size_ub}u);"
            )
            lines.append(f"for (std::uint32_t i = 0; i < {count_expr}; ++i) {{")
            lines.extend(self._encode_element(element, f"{items_expr}[i]", 4, encoder))
            lines.append("}")
        else:
            lines.extend(
                self._encode_seqof_semi(
                    count_expr, items_expr, element, "value", encoder
                )
            )
        return lines

    def _encode_element(
        self, element: TypeRef, expr: str, indent: int, encoder: str = "enc"
    ) -> List[str]:
        return [
            (" " * indent) + line
            for line in self._encode_ref(element, expr, indent, encoder)
        ]

    def _encode_seqof_semi(
        self,
        count_expr: str,
        items_expr: str,
        element: TypeRef,
        _unused: str,
        encoder: str = "enc",
    ) -> List[str]:
        lines = [
            f"if ({count_expr} > {UINT32_MAX}u) {{ "
            f"{encoder}.Fail(ErrorCode_ValueOutOfRange); }}",
            f"std::uint32_t remaining = {count_expr};",
            "std::uint32_t element_index = 0;",
            "while (remaining >= kPerFragmentUnit) {",
            "    std::uint32_t blocks = remaining / kPerFragmentUnit;",
            "    if (blocks > kPerMaxFragmentBlocks) { blocks = kPerMaxFragmentBlocks; }",
            f"    {encoder}.WriteFragmentHeader(blocks);",
            "    const std::uint32_t chunk = blocks * kPerFragmentUnit;",
            "    for (std::uint32_t i = 0; i < chunk; ++i) {",
        ]
        lines.extend(
            self._encode_element(element, f"{items_expr}[element_index + i]", 8, encoder)
        )
        lines.extend(
            [
                "    }",
                "    element_index += chunk;",
                "    remaining -= chunk;",
                "}",
                f"{encoder}.WriteLengthDeterminant(remaining);",
                "for (std::uint32_t i = 0; i < remaining; ++i) {",
            ]
        )
        lines.extend(
            self._encode_element(element, f"{items_expr}[element_index + i]", 4, encoder)
        )
        lines.append("}")
        return lines

    def _decode_inline_seqof(
        self, layout: FieldLayout, indent: int, fail_label: str
    ) -> List[str]:
        ref = layout.ref
        assert ref.element is not None
        element = ref.element
        items = f"value.{layout.cname}_items"
        count = f"value.{layout.cname}_count"
        lines: List[str] = []
        if ref.size_fixed:
            lines.extend(
                self._decode_seqof_alloc_fixed(
                    ref, items, count, element, fail_label
                )
            )
        elif not ref.size_unbounded:
            lines.extend(
                self._decode_seqof_alloc_constrained(
                    ref, items, count, element, fail_label
                )
            )
        else:
            lines.extend(
                self._decode_seqof_alloc_semi(ref, items, count, element, fail_label)
            )
        return lines

    def _decode_seqof_alloc_fixed(
        self,
        ref: TypeRef,
        items: str,
        count: str,
        element: TypeRef,
        fail_label: str,
    ) -> List[str]:
        element_decl = element.decl_type()
        lines = [
            f"{count} = {ref.size_lb}u;",
            f"if ({count} > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {{",
            f"    dec.Fail(ErrorCode_LengthOutOfRange); goto {fail_label};",
            "}",
            f"if ({count} > 0u) {{",
            f"    {items} = ({element_decl}*)std::malloc("
            f"(std::size_t){count} * sizeof({element_decl}));",
            f"    if ({items} == nullptr) {{ dec.Fail(ErrorCode_OutOfMemory); "
            f"goto {fail_label}; }}",
            f"    std::memset({items}, 0, (std::size_t){count} * sizeof({element_decl}));",
            "}",
            f"for (std::uint32_t i = 0; i < {count}; ++i) {{",
        ]
        lines.extend(self._decode_element(element, f"{items}[i]", 4, fail_label))
        lines.append("}")
        return lines

    def _decode_seqof_alloc_constrained(
        self,
        ref: TypeRef,
        items: str,
        count: str,
        element: TypeRef,
        fail_label: str,
    ) -> List[str]:
        element_decl = element.decl_type()
        return [
            f"if (!dec.ReadConstrainedLength({ref.size_lb}u, {ref.size_ub}u, {count})) "
            f"{{ goto {fail_label}; }}",
            f"if ({count} > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || {count} > {ref.size_ub}u) {{",
            f"    dec.Fail(ErrorCode_LengthOutOfRange); goto {fail_label};",
            "}",
            f"if ({count} > 0u) {{",
            f"    {items} = ({element_decl}*)std::malloc("
            f"(std::size_t){count} * sizeof({element_decl}));",
            f"    if ({items} == nullptr) {{ dec.Fail(ErrorCode_OutOfMemory); "
            f"goto {fail_label}; }}",
            f"    std::memset({items}, 0, (std::size_t){count} * sizeof({element_decl}));",
            "}",
            f"for (std::uint32_t i = 0; i < {count}; ++i) {{",
            *self._decode_element(element, f"{items}[i]", 4, fail_label),
            "}",
        ]

    def _decode_seqof_alloc_semi(
        self,
        ref: TypeRef,
        items: str,
        count: str,
        element: TypeRef,
        fail_label: str,
    ) -> List[str]:
        element_decl = element.decl_type()
        cap = min(ref.size_ub, 65536)
        lines = [
            f"if ({ref.size_lb} > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {{",
            f"    dec.Fail(ErrorCode_LengthOutOfRange); goto {fail_label};",
            "}",
            f"std::uint32_t total_count = 0;",
            "for (;;) {",
            "    std::uint32_t fragment_count = 0;",
            "    bool fragmented = false;",
            "    if (!dec.ReadLengthDeterminant(fragment_count, fragmented)) {",
            f"        goto {fail_label};",
            "    }",
            f"    if (fragment_count > {cap}u || "
            f"fragment_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || "
            f"total_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT - fragment_count) {{",
            f"        dec.Fail(ErrorCode_LengthOutOfRange); goto {fail_label};",
            "    }",
            "    const std::uint32_t new_total = total_count + fragment_count;",
            f"    {element_decl}* grown = ({element_decl}*)std::realloc("
            f"{items}, (std::size_t)new_total * sizeof({element_decl}));",
            "    if (grown == nullptr) {",
            f"        dec.Fail(ErrorCode_OutOfMemory); goto {fail_label};",
            "    }",
            f"    {items} = grown;",
            f"    std::memset({items} + total_count, 0, "
            f"(std::size_t)fragment_count * sizeof({element_decl}));",
            f"    {count} = new_total;",
            "    for (std::uint32_t i = 0; i < fragment_count; ++i) {",
        ]
        lines.extend(
            self._decode_element(element, f"{items}[total_count + i]", 8, fail_label)
        )
        lines.extend(
            [
                "    }",
                "    total_count = new_total;",
                "    if (!fragmented) { break; }",
                "}",
                f"if (total_count < {ref.size_lb}u) {{",
                f"    dec.Fail(ErrorCode_LengthOutOfRange); goto {fail_label};",
                "}",
            ]
        )
        return lines

    def _decode_element(
        self, element: TypeRef, expr: str, indent: int, fail_label: str
    ) -> List[str]:
        return [
            (" " * indent) + line
            for line in self._decode_ref(element, expr, indent, fail_label)
        ]

    def _free_inline_seqof(self, layout: FieldLayout) -> List[str]:
        ref = layout.ref
        assert ref.element is not None
        element = ref.element
        lines = [
            f"if (value.{layout.cname}_items != nullptr) {{",
            f"    for (std::uint32_t i = 0; i < value.{layout.cname}_count; ++i) {{",
        ]
        for line in self._free_ref(element, f"value.{layout.cname}_items[i]"):
            lines.append("        " + line)
        lines.extend(
            [
                "    }",
                f"    std::free(value.{layout.cname}_items);",
                f"    value.{layout.cname}_items = nullptr;",
                "}",
                f"value.{layout.cname}_count = 0;",
            ]
        )
        return lines

    # -- CHOICE --------------------------------------------------------------

    def _emit_choice_functions(self, struct: StructDef) -> List[str]:
        name = struct.cname
        enum_def = EnumDef(
            key=struct.key,
            cname=struct.tag_cname,
            asn_name=name,
            line=struct.line,
            extensible=struct.extensible,
            root_count=struct.root_count,
            constants=struct.tag_constants,
        )
        lines: List[str] = []
        lines.extend(self._emit_choice_encode(struct, enum_def))
        lines.append("")
        lines.extend(self._emit_choice_decode(struct, enum_def))
        lines.append("")
        lines.extend(self._emit_choice_free(struct, enum_def))
        return lines

    def _emit_choice_encode(self, struct: StructDef, enum_def: EnumDef) -> List[str]:
        name = struct.cname
        total = len(struct.alternatives)
        root = struct.root_count
        lines = [f"ErrorCode Encode_{name}(Encoder& enc, const {name}& value)", "{"]
        if not struct.alternatives:
            lines.append("    (void)value;")
            lines.append("    return enc.Fail(ErrorCode_InvalidChoiceTag);")
            lines.append("}")
            return lines
        if struct.extensible:
            lines.extend(
                [
                    f"    const std::int64_t choice_index = "
                    f"(std::int64_t)(value.tag);",
                    "    if (choice_index < 0) {",
                    "        return enc.Fail(ErrorCode_InvalidChoiceTag);",
                    "    }",
                    f"    if (choice_index >= {root}) {{",
                    f"        if (choice_index >= {total}) {{",
                    "            return enc.Fail(ErrorCode_InvalidChoiceTag);",
                    "        }",
                    "        enc.WriteBit(true);",
                    f"        enc.WriteNormallySmallNonNegative("
                    f"(std::uint32_t)(choice_index - {root}));",
                    "        Encoder sub;",
                    "        switch (value.tag) {",
                ]
            )
            for layout in struct.alternatives[root:]:
                lines.append(f"        case {layout.tag_constant}:")
                for line in self._encode_choice_alt(layout, "sub", "value.u." + layout.cname, 12):
                    lines.append(line)
                lines.append("            break;")
            lines.extend(
                [
                    "        default:",
                    "            return enc.Fail(ErrorCode_InvalidChoiceTag);",
                    "        }",
                    "        if (sub.Error() != ErrorCode_Ok) {",
                    "            return enc.Fail(sub.Error());",
                    "        }",
                    "        enc.WriteOpenType(sub.Finish());",
                    "        return enc.Error();",
                    "    }",
                    "    enc.WriteBit(false);",
                ]
            )
        if root > 1:
            lines.append(
                f"    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, {root - 1});"
            )
            lines.extend(
                [
                    "    switch (value.tag) {",
                ]
            )
            for layout in struct.alternatives[:root]:
                lines.append(f"    case {layout.tag_constant}:")
                for line in self._encode_choice_alt(layout, "enc", "value.u." + layout.cname, 8):
                    lines.append(line)
                lines.append("        break;")
            lines.extend(
                [
                    "    default:",
                    "        return enc.Fail(ErrorCode_InvalidChoiceTag);",
                    "    }",
                ]
            )
        else:
            lines.append("    switch (value.tag) {")
            lines.append(f"    case {struct.alternatives[0].tag_constant}:")
            for line in self._encode_choice_alt(
                struct.alternatives[0], "enc", "value.u." + struct.alternatives[0].cname, 8
            ):
                lines.append(line)
            lines.append("        break;")
            lines.extend(
                [
                    "    default:",
                    "        return enc.Fail(ErrorCode_InvalidChoiceTag);",
                    "    }",
                ]
            )
        lines.extend(["    return enc.Error();", "}"])
        return lines

    def _encode_choice_alt(
        self, layout: FieldLayout, encoder: str, expr: str, indent: int
    ) -> List[str]:
        if layout.is_containing:
            assert layout.ref.target is not None
            body = [
                f"if ({expr} == nullptr) {{",
                f"    {encoder}.Fail(ErrorCode_MissingMandatoryField);",
                "} else {",
                f"    EncodeContained_{layout.ref.target.cname}({encoder}, *{expr});",
                "}",
            ]
        else:
            body = self._encode_ref(layout.ref, expr, 0, encoder)
        pad = " " * indent
        return [pad + line for line in body]

    def _emit_choice_decode(self, struct: StructDef, enum_def: EnumDef) -> List[str]:
        name = struct.cname
        total = len(struct.alternatives)
        root = struct.root_count
        lines = [
            f"ErrorCode Decode_{name}(Decoder& dec, {name}& value)",
            "{",
            "    std::memset(&value, 0, sizeof(value));",
            "    do {",
        ]
        if not struct.alternatives:
            lines.extend(
                [
                    "    dec.Fail(ErrorCode_InvalidChoiceIndex);",
                    "    return dec.Error();",
                    "}",
                ]
            )
            return lines
        if struct.extensible:
            lines.extend(
                [
                    "    bool choice_extension = false;",
                    "    if (!dec.ReadBit(choice_extension)) { goto fail; }",
                    "    if (choice_extension) {",
                    "        std::uint32_t extension_index = 0;",
                    "        if (!dec.ReadNormallySmallNonNegative(extension_index)) {",
                    "            goto fail;",
                    "        }",
                ]
            )
            if total - root > 0:
                lines.extend(
                    [
                        f"        if (extension_index >= {total - root}u) {{",
                        "            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;",
                        "        }",
                    ]
                )
            else:
                lines.extend(
                    [
                        "        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;",
                    ]
                )
            lines.extend(
                [
                    f"        value.tag = ({struct.tag_cname})({root} + extension_index);",
                    "        std::vector<std::uint8_t> open_bytes;",
                    "        if (!dec.ReadOpenType(open_bytes)) { goto fail; }",
                    "        Decoder sub(open_bytes.data(), open_bytes.size());",
                    "        switch (value.tag) {",
                ]
            )
            for layout in struct.alternatives[root:]:
                lines.append(f"        case {layout.tag_constant}: {{")
                for line in self._decode_choice_alt(
                    layout, "sub", "value.u." + layout.cname, 12, "fail"
                ):
                    lines.append(line)
                lines.append("            break;")
                lines.append("        }")
            lines.extend(
                [
                    "        default:",
                    "            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;",
                    "        }",
                    "        if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }",
                    "        if (!sub.CheckOpenTypeEnd()) {",
                    "            dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;",
                    "        }",
                    "        return dec.Error();",
                    "    }",
                ]
            )
        if root > 1:
            lines.extend(
                [
                    "    std::int64_t root_index = 0;",
                    f"    if (!dec.ReadConstrainedInteger(0, {root - 1}, root_index)) {{",
                    "        goto fail;",
                    "    }",
                    f"    value.tag = ({struct.tag_cname})root_index;",
                ]
            )
        else:
            lines.append(f"    value.tag = ({struct.tag_cname})0;")
        lines.append("    switch (value.tag) {")
        for layout in struct.alternatives[:root]:
            lines.append(f"    case {layout.tag_constant}: {{")
            for line in self._decode_choice_alt(
                layout, "dec", "value.u." + layout.cname, 8, "fail"
            ):
                lines.append(line)
            lines.append("        break;")
            lines.append("    }")
        lines.extend(
            [
                "    default:",
                "        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;",
                "    }",
                "    return dec.Error();",
                "    } while (false);",
                "fail:",
                f"    Free_{name}(value);",
                "    std::memset(&value, 0, sizeof(value));",
                "    return dec.Error();",
                "}",
            ]
        )
        return lines

    def _decode_choice_alt(
        self, layout: FieldLayout, decoder: str, expr: str, indent: int, fail_label: str
    ) -> List[str]:
        pad = " " * indent
        if layout.is_containing:
            body = self._decode_containing(layout.ref, expr, fail_label, decoder)
        else:
            body = self._decode_ref(layout.ref, expr, 0, fail_label, decoder)
        return [pad + line for line in body]

    def _emit_choice_free(self, struct: StructDef, enum_def: EnumDef) -> List[str]:
        name = struct.cname
        lines = [f"void Free_{name}({name}& value)", "{"]
        if struct.alternatives:
            lines.append("    switch (value.tag) {")
            for layout in struct.alternatives:
                lines.append(f"    case {layout.tag_constant}:")
                if layout.is_containing:
                    assert layout.ref.target is not None
                    lines.append(f"        if (value.u.{layout.cname} != nullptr) {{")
                    lines.append(
                        f"            Free_{layout.ref.target.cname}"
                        f"(*value.u.{layout.cname});"
                    )
                    lines.append(f"            std::free(value.u.{layout.cname});")
                    lines.append("        }")
                elif layout.ref.kind in ("struct", "seqof"):
                    lines.append(
                        f"        Free_{layout.ref.cname}(value.u.{layout.cname});"
                    )
                elif layout.ref.kind == "bitstring":
                    lines.append(f"        std::free(value.u.{layout.cname}.bytes);")
                elif layout.ref.kind == "octet":
                    lines.append(f"        std::free(value.u.{layout.cname}.bytes);")
                lines.append("        break;")
            lines.extend(
                [
                    "    default:",
                    "        break;",
                    "    }",
                ]
            )
        lines.append("    std::memset(&value, 0, sizeof(value));")
        lines.append("}")
        return lines

    # -- SEQUENCE OF ---------------------------------------------------------

    def _emit_seqof_functions(self, struct: StructDef) -> List[str]:
        name = struct.cname
        assert struct.element is not None
        ref = TypeRef(
            kind="seqof",
            cname=name,
            type_id=struct.key,
            struct=struct,
            element=struct.element,
            size_lb=struct.size_lb,
            size_ub=struct.size_ub,
            size_fixed=struct.size_fixed,
            size_unbounded=struct.size_unbounded,
        )
        items = "value.items"
        count = "value.count"
        element = struct.element
        lines: List[str] = []
        # encode
        lines.extend([f"ErrorCode Encode_{name}(Encoder& enc, const {name}& value)", "{"])
        lines.append("    (void)value;")
        if struct.size_fixed:
            lines.append(f"    if ({count} != {struct.size_lb}u) {{")
            lines.append("        enc.Fail(ErrorCode_ValueOutOfRange);")
            lines.append("    } else {")
            lines.append(f"        for (std::uint32_t i = 0; i < {count}; ++i) {{")
            lines.extend(self._encode_element(element, f"{items}[i]", 12))
            lines.append("        }")
            lines.append("    }")
        elif not struct.size_unbounded:
            lines.append(
                f"    enc.WriteConstrainedLength({count}, {struct.size_lb}u, "
                f"{struct.size_ub}u);"
            )
            lines.append(f"    for (std::uint32_t i = 0; i < {count}; ++i) {{")
            lines.extend(self._encode_element(element, f"{items}[i]", 8))
            lines.append("    }")
        else:
            lines.extend(
                self._encode_seqof_semi(count, items, element, "value")
            )
        lines.extend(["    return enc.Error();", "}"])
        lines.append("")
        # decode
        lines.extend(
            [
                f"ErrorCode Decode_{name}(Decoder& dec, {name}& value)",
                "{",
                "    std::memset(&value, 0, sizeof(value));",
                "    do {",
            ]
        )
        if struct.size_fixed:
            lines.extend(
                self._decode_seqof_alloc_fixed(
                    ref, items, count, element, "fail"
                )
            )
        elif not struct.size_unbounded:
            lines.extend(
                self._decode_seqof_alloc_constrained(
                    ref, items, count, element, "fail"
                )
            )
        else:
            lines.extend(
                self._decode_seqof_alloc_semi(ref, items, count, element, "fail")
            )
        lines.extend(
            [
                "    return dec.Error();",
                "    } while (false);",
                "fail:",
                f"    Free_{name}(value);",
                "    std::memset(&value, 0, sizeof(value));",
                "    return dec.Error();",
                "}",
            ]
        )
        lines.append("")
        # free
        lines.extend([f"void Free_{name}({name}& value)", "{"])
        lines.append(f"    if ({items} != nullptr) {{")
        lines.append(f"        for (std::uint32_t i = 0; i < {count}; ++i) {{")
        for line in self._free_ref(element, f"{items}[i]"):
            lines.append("            " + line)
        lines.extend(
            [
                "        }",
                f"        std::free({items});",
                "    }",
                "    std::memset(&value, 0, sizeof(value));",
                "}",
            ]
        )
        return lines

    # -- CONTAINING 包装函数 --------------------------------------------------

    def _emit_containing_functions(self) -> List[str]:
        lines: List[str] = []
        for target_id, cname in sorted(self.containing_targets.items()):
            lines.extend(self._emit_one_containing(cname))
            lines.append("")
        return lines

    def _emit_one_containing(self, cname: str) -> List[str]:
        return [
            f"ErrorCode EncodeContained_{cname}(Encoder& enc, const {cname}& value)",
            "{",
            "    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {",
            "        return enc.Fail(ErrorCode_ContainingDepthExceeded);",
            "    }",
            "    Encoder sub;",
            "    sub.SetContainingDepth(enc.ContainingDepth() + 1);",
            f"    Encode_{cname}(sub, value);",
            "    if (sub.Error() != ErrorCode_Ok) {",
            "        return enc.Fail(sub.Error());",
            "    }",
            "    enc.WriteOpenType(sub.Finish());",
            "    return enc.Error();",
            "}",
            "",
            f"ErrorCode DecodeContained_{cname}(Decoder& dec, {cname}*& out)",
            "{",
            "    out = nullptr;",
            "    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {",
            "        return dec.Fail(ErrorCode_ContainingDepthExceeded);",
            "    }",
            "    std::vector<std::uint8_t> open_bytes;",
            "    if (!dec.ReadOpenType(open_bytes)) {",
            "        return dec.Error();",
            "    }",
            "    Decoder sub(open_bytes.data(), open_bytes.size());",
            "    sub.SetContainingDepth(dec.ContainingDepth() + 1);",
            f"    {cname}* value = ({cname}*)std::malloc(sizeof({cname}));",
            "    if (value == nullptr) {",
            "        return dec.Fail(ErrorCode_OutOfMemory);",
            "    }",
            "    std::memset(value, 0, sizeof(*value));",
            f"    const ErrorCode decode_result = Decode_{cname}(sub, *value);",
            "    if (decode_result != ErrorCode_Ok) {",
            f"        Free_{cname}(*value);",
            "        std::free(value);",
            "        return dec.Fail(decode_result);",
            "    }",
            "    if (!sub.CheckOpenTypeEnd()) {",
            f"        Free_{cname}(*value);",
            "        std::free(value);",
            "        return dec.Fail(ErrorCode_OpenTypeOverrun);",
            "    }",
            "    out = value;",
            "    return dec.Error();",
            "}",
        ]

    # -- 消息入口 ------------------------------------------------------------

    def _emit_message_functions(self) -> List[str]:
        lines: List[str] = []
        for message in self.cm.messages:
            lines.extend(self._emit_message_encode(message))
            lines.append("")
            lines.extend(self._emit_message_decode(message))
            lines.append("")
            lines.extend(self._emit_message_free(message))
            lines.append("")
        return lines

    def _emit_message_encode(self, message: MessageInfo) -> List[str]:
        suffix = message.kind_suffix
        cname = message.struct_cname
        lines = [
            f"ErrorCode EncodeMessage_{suffix}(Encoder& enc, const {cname}& value)",
            "{",
        ]
        for level in message.path:
            lines.append(
                f"    enc.WriteConstrainedInteger({level.index}, 0, "
                f"{level.count - 1});"
            )
        lines.append(f"    Encode_{cname}(enc, value);")
        lines.append("    return enc.Error();")
        lines.append("}")
        return lines

    def _emit_message_decode(self, message: MessageInfo) -> List[str]:
        suffix = message.kind_suffix
        cname = message.struct_cname
        lines = [
            f"ErrorCode DecodeMessage_{suffix}(Decoder& dec, {cname}& value)",
            "{",
            "    std::memset(&value, 0, sizeof(value));",
        ]
        for level_index, level in enumerate(message.path):
            lines.append("    {")
            lines.append("    std::int64_t selector = 0;")
            lines.append(
                f"    if (!dec.ReadConstrainedInteger(0, {level.count - 1}, "
                "selector)) {"
            )
            lines.append("        return dec.Error();")
            lines.append("    }")
            lines.append(f"    if (selector != {level.index}) {{")
            unsupported = [
                index
                for index, label in enumerate(level.alternatives)
                if label in ("spare", "placeholder")
            ]
            if unsupported:
                lines.append("        switch (selector) {")
                for index in unsupported:
                    lines.append(f"        case {index}:")
                lines.append(
                    "            dec.Fail(ErrorCode_UnsupportedMessage); "
                    "return dec.Error();"
                )
                lines.append("        default: break;")
                lines.append("        }")
            lines.append(
                "        dec.Fail(ErrorCode_MessageKindMismatch); "
                "return dec.Error();"
            )
            lines.append("    }")
            lines.append("    }")
            _ = level_index
        lines.extend(
            [
                f"    const ErrorCode body_result = Decode_{cname}(dec, value);",
                "    if (body_result != ErrorCode_Ok) {",
                "        return body_result;",
                "    }",
                "    return dec.Error();",
                "}",
            ]
        )
        return lines

    def _emit_message_free(self, message: MessageInfo) -> List[str]:
        suffix = message.kind_suffix
        cname = message.struct_cname
        return [
            f"void FreeMessage_{suffix}({cname}& value)",
            "{",
            f"    Free_{cname}(value);",
            "}",
        ]


__all__ = ["CodecEmitter", "INTERNAL_HEADER"]
