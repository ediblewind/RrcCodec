"""测试样例构造器发射器（仅用于 tests/，不安装）。

为每个结构体生成 ``BuildSample_<T>(T&, int depth)``：把全部必填字段填入
约束范围内的最小值、必填 CONTAINING 指针指向递归构造的内层对象、必填
CHOICE 选择第 0 个备选；OPTIONAL 字段留空（depth==0 时的 optional CONTAINING
会填一个样例以覆盖开放类型解码）。生成结果供 53 个消息的
“构造 → 编码 → 解码 → 再编码”比特一致性测试使用。
"""

from __future__ import annotations

from typing import List, Optional

from ..cmodel import CModel, FieldLayout, StructDef, TypeRef
from .c_common import generated_banner

HEADER_NAME = "message_samples.h"
SOURCE_NAME = "message_samples.cpp"


def emit_samples_header(cmodel: CModel) -> str:
    lines: List[str] = []
    lines.extend(
        generated_banner(
            "tests/generated/message_samples.h — 测试样例构造器声明（自动生成）",
            cmodel.input_sha256,
            cmodel.asn_version,
        )
    )
    lines.extend(
        [
            "",
            "#ifndef RRC_CODEC_TESTS_GENERATED_MESSAGE_SAMPLES_H",
            "#define RRC_CODEC_TESTS_GENERATED_MESSAGE_SAMPLES_H",
            "",
            "#include <cstddef>",
            "#include <cstdint>",
            "",
            '#include "rrc_codec/rrc_codec.h"',
            "",
            "namespace rrc {",
            "namespace v1810 {",
            "namespace test {",
            "",
            "/* 每个结构体一个样例构造器（depth 用于限制 CONTAINING/递归深度）。 */",
        ]
    )
    for struct in cmodel.ordered_structs:
        if struct.kind == "group":
            continue
        lines.append(
            f"void BuildSample_{struct.cname}({struct.cname}& value, int depth);"
        )
    lines.extend(
        [
            "",
            "/* 53 个消息的样例入口。 */",
            "bool BuildSampleByKind(MessageKind kind, void* message);",
            "void FreeSampleByKind(MessageKind kind, void* message);",
            "std::size_t MessageStructSize(MessageKind kind);",
            "std::size_t MessageStructAlignment(MessageKind kind);",
            "",
            "}  // namespace test",
            "}  // namespace v1810",
            "}  // namespace rrc",
            "",
            "#endif",
        ]
    )
    return "\n".join(lines) + "\n"


def emit_samples_source(cmodel: CModel) -> str:
    lines: List[str] = []
    lines.extend(
        generated_banner(
            "tests/generated/message_samples.cpp — 测试样例构造器（自动生成）",
            cmodel.input_sha256,
            cmodel.asn_version,
        )
    )
    lines.extend(
        [
            "",
            '#include "message_samples.h"',
            "",
            '#include "codec_internal.h"',
            "",
            "#include <cstdlib>",
            "#include <cstring>",
            "#include <new>",
            "",
            "namespace rrc {",
            "namespace v1810 {",
            "namespace test {",
            "",
        ]
    )
    builder = _SampleBuilder()
    for struct in cmodel.ordered_structs:
        if struct.kind == "group":
            continue
        lines.extend(builder.build_struct(struct))
        lines.append("")
    lines.extend(_emit_dispatch(cmodel))
    lines.extend(
        [
            "}  // namespace test",
            "}  // namespace v1810",
            "}  // namespace rrc",
        ]
    )
    return "\n".join(lines) + "\n"


class _SampleBuilder:
    def build_struct(self, struct: StructDef) -> List[str]:
        name = struct.cname
        lines = [
            f"void BuildSample_{name}({name}& value, int depth)",
            "{",
            "    std::memset(&value, 0, sizeof(value));",
        ]
        if struct.kind == "empty":
            lines.append("    (void)depth;")
        elif struct.kind == "seqof":
            assert struct.element is not None
            lines.extend(
                self._fill_named_seqof(
                    struct.element, struct.size_lb, "value.items", "value.count", 4
                )
            )
        elif struct.kind == "choice":
            lines.extend(self._fill_choice(struct, 4))
        else:
            lines.extend(self._fill_sequence(struct, 4))
        lines.append("}")
        return lines

    def _fill_sequence(self, struct: StructDef, indent: int) -> List[str]:
        lines: List[str] = []
        pad = " " * indent
        for layout in struct.root_fields:
            if layout.optional:
                if layout.is_containing and layout.ref.target is not None:
                    # 只在前两层填 optional CONTAINING，避免循环类型无限递归；
                    # 更深层仍填写必填字段，保证样例可编码。
                    lines.append(f"{pad}if (depth < 2) {{")
                    lines.extend(
                        self._fill_containing(
                            layout.ref, "value." + layout.cname, indent + 4
                        )
                    )
                    lines.append(f"{pad}}}")
                continue
            if layout.default_expr is not None:
                lines.append(f"{pad}value.{layout.cname} = {layout.default_expr};")
                continue
            if layout.is_containing:
                lines.extend(
                    self._fill_containing(
                        layout.ref, "value." + layout.cname, indent
                    )
                )
            elif layout.is_inline_seqof:
                lines.extend(self._fill_inline_seqof(layout, indent))
            else:
                lines.extend(
                    self._fill_ref(layout.ref, "value." + layout.cname, indent)
                )
        _ = struct
        return lines

    def _fill_choice(self, struct: StructDef, indent: int) -> List[str]:
        if not struct.alternatives:
            return []
        pad = " " * indent
        layout = struct.alternatives[0]
        lines = [f"{pad}value.tag = {layout.tag_constant};"]
        if layout.is_containing:
            lines.extend(
                self._fill_containing(layout.ref, "value.u." + layout.cname, indent)
            )
        elif layout.is_inline_seqof:
            lines.extend(self._fill_inline_seqof(layout, indent, value_prefix="value.u."))
        else:
            lines.extend(
                self._fill_ref(layout.ref, "value.u." + layout.cname, indent)
            )
        return lines

    def _fill_ref(self, ref: TypeRef, expr: str, indent: int) -> List[str]:
        pad = " " * indent
        kind = ref.kind
        if kind == "integer":
            return [f"{pad}{expr} = {ref.integer_lb};"]
        if kind == "bool":
            return [f"{pad}{expr} = true;"]
        if kind == "enum":
            enum_def = ref.enum
            assert enum_def is not None
            if enum_def.constants:
                return [f"{pad}{expr} = {enum_def.constants[0].cname};"]
            return []
        if kind == "bitstring":
            return self._fill_bitstring(ref, expr, pad)
        if kind == "octet":
            return self._fill_octet(ref, expr, pad)
        if kind == "struct":
            return [f"{pad}BuildSample_{ref.cname}({expr}, depth + 1);"]
        if kind == "seqof":
            assert ref.element is not None
            return [f"{pad}BuildSample_{ref.cname}({expr}, depth + 1);"]
        if kind == "containing":
            return self._fill_containing(ref, expr, indent)
        if kind == "null":
            return []
        raise ValueError(f"cannot build sample for ref kind {kind}")

    def _fill_bitstring(self, ref: TypeRef, expr: str, pad: str) -> List[str]:
        if ref.size_fixed:
            bit_length = ref.size_lb
        elif ref.size_unbounded:
            bit_length = ref.size_lb
        else:
            bit_length = ref.size_lb
        lines = [f"{pad}{expr}.bitLength = {bit_length}u;"]
        if bit_length > 0:
            byte_count = (bit_length + 7) // 8
            lines.append(
                f"{pad}{expr}.bytes = (std::uint8_t*)std::malloc({byte_count}u);"
            )
            lines.append(f"{pad}if ({expr}.bytes != nullptr) {{")
            lines.append(
                f"{pad}    std::memset({expr}.bytes, 0, {byte_count}u);"
            )
            lines.append(f"{pad}}}")
        return lines

    def _fill_octet(self, ref: TypeRef, expr: str, pad: str) -> List[str]:
        length = ref.size_lb
        lines = [f"{pad}{expr}.length = {length}u;"]
        if length > 0:
            lines.append(
                f"{pad}{expr}.bytes = (std::uint8_t*)std::malloc({length}u);"
            )
            lines.append(f"{pad}if ({expr}.bytes != nullptr) {{")
            lines.append(f"{pad}    std::memset({expr}.bytes, 0, {length}u);")
            lines.append(f"{pad}}}")
        return lines

    def _fill_containing(
        self, ref: TypeRef, expr: str, indent: int
    ) -> List[str]:
        assert ref.target is not None
        pad = " " * indent
        target = ref.target.cname
        target_id = ref.target.type_id
        # 有值类型（结构体/SEQUENCE OF）才有 BuildSample_ 函数
        return [
            f"{pad}{expr} = ({target}*)std::malloc(sizeof({target}));",
            f"{pad}if ({expr} != nullptr) {{",
            f"{pad}    BuildSample_{target}(*{expr}, depth + 1);",
            f"{pad}}}",
        ]

    def _fill_named_seqof(
        self,
        element: TypeRef,
        count_value: int,
        items: str,
        count: str,
        indent: int,
    ) -> List[str]:
        element_decl = element.decl_type()
        pad = " " * indent
        lines = [f"{pad}{count} = {count_value}u;"]
        if count_value > 0:
            lines.append(
                f"{pad}{items} = ({element_decl}*)std::malloc("
                f"(std::size_t){count} * sizeof({element_decl}));"
            )
            lines.append(f"{pad}if ({items} != nullptr) {{")
            lines.append(
                f"{pad}    std::memset({items}, 0, "
                f"(std::size_t){count} * sizeof({element_decl}));"
            )
            lines.append(f"{pad}    for (std::uint32_t i = 0; i < {count}; ++i) {{")
            lines.extend(self._fill_element(element, f"{items}[i]", indent + 8))
            lines.append(f"{pad}    }}")
            lines.append(f"{pad}}}")
        return lines

    def _fill_seqof_value(
        self, element: TypeRef, expr: str, indent: int
    ) -> List[str]:
        # 保留接口：具名 SEQUENCE OF 的填充见 _fill_named_seqof。
        _ = (element, expr, indent)
        return []

    def _fill_inline_seqof(
        self,
        layout: FieldLayout,
        indent: int,
        value_prefix: str = "value.",
    ) -> List[str]:
        ref = layout.ref
        assert ref.element is not None
        element = ref.element
        pad = " " * indent
        items = f"{value_prefix}{layout.cname}_items"
        count = f"{value_prefix}{layout.cname}_count"
        count_value = ref.size_lb
        element_decl = element.decl_type()
        lines = [f"{pad}{count} = {count_value}u;"]
        if count_value > 0:
            lines.append(
                f"{pad}{items} = ({element_decl}*)std::malloc("
                f"(std::size_t){count} * sizeof({element_decl}));"
            )
            lines.append(f"{pad}if ({items} != nullptr) {{")
            lines.append(
                f"{pad}    std::memset({items}, 0, "
                f"(std::size_t){count} * sizeof({element_decl}));"
            )
            lines.append(f"{pad}    for (std::uint32_t i = 0; i < {count}; ++i) {{")
            lines.extend(
                self._fill_element(element, f"{items}[i]", indent + 8)
            )
            lines.append(f"{pad}    }}")
            lines.append(f"{pad}}}")
        return lines

    def _fill_element(
        self, element: TypeRef, expr: str, indent: int
    ) -> List[str]:
        return self._fill_ref(element, expr, indent)


def _emit_dispatch(cmodel: CModel) -> List[str]:
    lines: List[str] = [
        "bool BuildSampleByKind(MessageKind kind, void* message)",
        "{",
        "    if (message == nullptr) { return false; }",
        "    switch (kind) {",
    ]
    for message in cmodel.messages:
        cname = message.struct_cname
        lines.append(
            f"    case {message.kind_name}: "
            f"BuildSample_{cname}(*static_cast<{cname}*>(message), 0); return true;"
        )
    lines.extend(
        [
            "    default: break;",
            "    }",
            "    return false;",
            "}",
            "",
            "void FreeSampleByKind(MessageKind kind, void* message)",
            "{",
            "    if (message == nullptr) { return; }",
            "    switch (kind) {",
        ]
    )
    for message in cmodel.messages:
        cname = message.struct_cname
        lines.append(
            f"    case {message.kind_name}: "
            f"Free_{cname}(*static_cast<{cname}*>(message)); return;"
        )
    lines.extend(
        [
            "    default: break;",
            "    }",
            "}",
            "",
            "std::size_t MessageStructSize(MessageKind kind)",
            "{",
            "    switch (kind) {",
        ]
    )
    for message in cmodel.messages:
        cname = message.struct_cname
        lines.append(
            f"    case {message.kind_name}: return sizeof({cname});"
        )
    lines.extend(
        [
            "    default: break;",
            "    }",
            "    return 0;",
            "}",
            "",
            "std::size_t MessageStructAlignment(MessageKind kind)",
            "{",
            "    switch (kind) {",
        ]
    )
    for message in cmodel.messages:
        cname = message.struct_cname
        lines.append(
            f"    case {message.kind_name}: return alignof({cname});"
        )
    lines.extend(
        [
            "    default: break;",
            "    }",
            "    return 0;",
            "}",
        ]
    )
    return lines
