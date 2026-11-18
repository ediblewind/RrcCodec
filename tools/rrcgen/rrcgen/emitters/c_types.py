"""``types/rrc_types.h`` emitter (方案 3.2/3.4/3.5/3.6)."""

from __future__ import annotations

from typing import Dict, List, Optional, Tuple

from ..cmodel import (
    CModel,
    EnumDef,
    FieldLayout,
    GroupDef,
    MessageInfo,
    StructDef,
    TypeRef,
)
from ..models import (
    KIND_BIT_STRING,
    KIND_BOOLEAN,
    KIND_INTEGER,
    KIND_OCTET_STRING,
)
from .c_common import (
    generated_banner,
    integer_constraint_text,
    sanitize_comment,
    size_constraint_text,
    type_summary,
)

_HEADER = "rrc_types.h"

#: 单个生成头分块的目标大小（字节）。CLion/ReSharper 的默认“分析文件大小阈值”
#: 为 300,000 字节、PSI 构建阈值为 2,000,000 字节；分块后每个头都能被 IDE 正常
#: 解析，Go to Declaration 可用（方案 Q-10 的“实测不佳再拆”）。
TYPE_PART_LIMIT = 240_000


def emit_types_headers(
    cmodel: CModel, part_limit: int = TYPE_PART_LIMIT
) -> Dict[str, str]:
    """生成 ``types/rrc_types.h``（umbrella）+ 若干 ``rrc_types_partNNN.h``。

    返回 {相对文件名: 内容}；所有文件安装到 ``include/rrc_codec/types/``。
    分块只改变头文件布局，不改变公开包含路径、类型名与 ABI。
    """
    blocks = _definition_blocks(cmodel)
    part_blocks = _pack_blocks(blocks, part_limit)
    part_names = [f"rrc_types_part{index:03d}.h" for index in range(len(part_blocks))]
    files: Dict[str, str] = {}
    files[_HEADER] = _render_umbrella(cmodel, part_names)
    for index, blocks_in_part in enumerate(part_blocks):
        files[part_names[index]] = _render_part(
            cmodel, index, part_names[index], blocks_in_part, part_names[:index]
        )
    return files


def _definition_blocks(cmodel: CModel) -> List[Tuple[List[str], bool]]:
    """按声明依赖顺序返回 (行块, 是否可跨分块拆分) 列表。"""
    blocks: List[Tuple[List[str], bool]] = []
    blocks.append((_base_types(), False))
    blocks.append(([""] + _forward_declarations(cmodel), True))
    # 枚举先于顶层基本类型/别名输出：别名可能指向顶层枚举（如 RangeToBestCell）。
    for key in sorted(cmodel.enum_defs):
        enum_def = cmodel.enum_defs[key]
        blocks.append((_emit_enum(enum_def) + [""], False))
    blocks.append(([""] + _named_primitive_typedefs(cmodel), True))
    blocks.append(([""] + _alias_typedefs(cmodel), True))
    for struct in cmodel.ordered_structs:
        blocks.append((_render_struct_definition(cmodel, struct) + [""], False))
    return blocks


def _block_size(lines: List[str]) -> int:
    return sum(len(line) + 1 for line in lines) + 1


def _split_lines(lines: List[str], limit: int) -> List[List[str]]:
    chunks: List[List[str]] = []
    current: List[str] = []
    size = 0
    for line in lines:
        line_size = len(line) + 1
        if current and size + line_size > limit:
            chunks.append(current)
            current = []
            size = 0
        current.append(line)
        size += line_size
    if current:
        chunks.append(current)
    return chunks


def _pack_blocks(
    blocks: List[Tuple[List[str], bool]], limit: int
) -> List[List[List[str]]]:
    parts: List[List[List[str]]] = []
    current: List[List[str]] = []
    size = 0
    for lines, splittable in blocks:
        block_size = _block_size(lines)
        if block_size > limit and splittable:
            if current:
                parts.append(current)
                current = []
                size = 0
            for chunk in _split_lines(lines, limit):
                parts.append([chunk])
            continue
        if current and size + block_size > limit:
            parts.append(current)
            current = []
            size = 0
        current.append(lines)
        size += block_size
    if current:
        parts.append(current)
    return parts


def _render_umbrella(cmodel: CModel, part_names: List[str]) -> str:
    lines: List[str] = []
    lines.extend(
        generated_banner(
            "types/rrc_types.h — 消息/IE 的 C 结构体与枚举（公开伞头）",
            cmodel.input_sha256,
            cmodel.asn_version,
        )
    )
    lines.extend(
        [
            "",
            "/*",
            " * 本文件为公开入口；实际定义按拓扑序拆分在 rrc_types_partNNN.h 中，",
            " * 以控制单文件体积（生成物仍为单一声明集合，类型名/ABI 不变）。",
            " * 请包含本文件，不要直接包含 part 文件。",
            " */",
            "",
            "#ifndef RRC_CODEC_TYPES_RRC_TYPES_H",
            "#define RRC_CODEC_TYPES_RRC_TYPES_H",
            "",
            "#include <stdbool.h>",
            "#include <stdint.h>",
        ]
    )
    for name in part_names:
        lines.append(f'#include "{name}"')
    lines.extend(["", "#endif /* RRC_CODEC_TYPES_RRC_TYPES_H */"])
    return "\n".join(lines) + "\n"


def _render_part(
    cmodel: CModel,
    index: int,
    name: str,
    blocks: List[List[str]],
    previous_names: List[str],
) -> str:
    guard = f"RRC_CODEC_TYPES_PART{index:03d}_H"
    lines: List[str] = []
    lines.extend(
        generated_banner(
            f"types/{name} — rrc_types.h 的分块定义（自动生成）",
            cmodel.input_sha256,
            cmodel.asn_version,
        )
    )
    lines.extend(["", f"#ifndef {guard}", f"#define {guard}", ""])
    if index == 0:
        lines.extend(["#include <stdbool.h>", "#include <stdint.h>", ""])
    for previous in previous_names:
        lines.append(f'#include "{previous}"')
    lines.extend(["", "#ifdef __cplusplus", 'extern "C" {', "#endif", ""])
    for block in blocks:
        lines.extend(block)
        lines.append("")
    lines.extend(
        [
            "#ifdef __cplusplus",
            '} /* extern "C" */',
            "#endif",
            "",
            f"#endif /* {guard} */",
        ]
    )
    return "\n".join(lines) + "\n"


def _base_types() -> List[str]:
    return [
        "/**",
        " * @brief BIT STRING 值（库分配字节缓冲，MSB first）。",
        " *",
        " * @note 编码时由调用方提供；解码时由库 malloc，FreeMessage 释放。",
        " *       bitLength 为有效位数；bytes 中的未用低位补 0。",
        " */",
        "typedef struct BitString {",
        "    uint8_t* bytes;    /**< 字节缓冲；bitLength==0 时可为 NULL。 */",
        "    uint32_t bitLength;/**< 有效比特数。 */",
        "} BitString;",
        "",
        "/**",
        " * @brief OCTET STRING 值（库分配字节缓冲）。",
        " *",
        " * @note 编码时由调用方提供；解码时由库 malloc，FreeMessage 释放。",
        " */",
        "typedef struct OctetString {",
        "    uint8_t* bytes;   /**< 字节缓冲；length==0 时可为 NULL。 */",
        "    uint32_t length;  /**< 字节数。 */",
        "} OctetString;",
        "",
        "/**",
        " * @brief ASN.1 NULL 的占位类型（编码 0 bit）。",
        " */",
        "typedef struct Null {",
        "    uint8_t _dummy;   /**< 占位字段；C 不允许空结构体。 */",
        "} Null;",
    ]


def _forward_declarations(cmodel: CModel) -> List[str]:
    lines = ["/* ---------- 结构体前向声明（使 CONTAINING 指针可引用尚未定义的类型） ---------- */"]
    for struct in cmodel.ordered_structs:
        lines.append(f"typedef struct {struct.cname} {struct.cname};")
    return lines


def _enum_definitions(cmodel: CModel) -> List[str]:
    lines = ["/* ---------- 枚举定义 ---------- */"]
    for key in sorted(cmodel.enum_defs):
        enum_def = cmodel.enum_defs[key]
        lines.extend(_emit_enum(enum_def))
        lines.append("")
    return lines


def _emit_enum(enum_def: EnumDef) -> List[str]:
    lines: List[str] = []
    lines.append("/**")
    lines.append(
        f" * @brief 枚举 {enum_def.cname}（ASN.1 {sanitize_comment(enum_def.asn_name)}，"
        f"源文件第 {enum_def.line} 行）。"
    )
    lines.append(
        f" * @note {'可扩展 ENUMERATED：int32_t 别名 + 常量宏，未知值原样保留' if enum_def.extensible else '不可扩展 ENUMERATED：C enum，序号即编码索引'}。"
    )
    lines.append(" */")
    if enum_def.extensible:
        lines.append(f"typedef int32_t {enum_def.cname};")
        for constant in enum_def.constants:
            marker = "（扩展添加项）" if constant.is_extension else ""
            lines.append(
                f"#define {constant.cname} {constant.value}"
                f" /**< ASN.1 {sanitize_comment(constant.asn_name)}{marker} */"
            )
    else:
        lines.append(f"typedef enum {enum_def.cname} {{")
        for constant in enum_def.constants:
            lines.append(
                f"    {constant.cname} = {constant.value},"
                f" /**< ASN.1 {sanitize_comment(constant.asn_name)} */"
            )
        lines.append(f"}} {enum_def.cname};")
    return lines


def _named_primitive_typedefs(cmodel: CModel) -> List[str]:
    lines = ["/* ---------- 顶层基本类型 typedef ---------- */"]
    messages_by_type = {message.type_id: message for message in cmodel.messages}
    for type_model, cname in sorted(cmodel.named_primitives, key=lambda item: item[0].id):
        message = messages_by_type.get(type_model.id)
        suffix = f"；消息 {message.kind_name}" if message else ""
        if type_model.kind == KIND_INTEGER:
            lines.append(
                f"typedef int64_t {cname};"
                f" /**< {integer_constraint_text(type_model.integer)}{suffix} */"
            )
        elif type_model.kind == KIND_BOOLEAN:
            lines.append(f"typedef bool {cname}; /**< BOOLEAN */")
        elif type_model.kind == KIND_BIT_STRING:
            lines.append(
                f"typedef BitString {cname};"
                f" /**< BIT STRING {size_constraint_text(type_model.size)} */"
            )
        elif type_model.kind == KIND_OCTET_STRING:
            if type_model.contained_type_id:
                target_cname = cmodel.type_cnames[type_model.contained_type_id]
                lines.append(
                    f"typedef {target_cname} {cname};"
                    f" /**< OCTET STRING (CONTAINING {target_cname})：字段使用 {cname}* */"
                )
            else:
                lines.append(
                    f"typedef OctetString {cname};"
                    f" /**< OCTET STRING {size_constraint_text(type_model.size)} */"
                )
    return lines


def _alias_typedefs(cmodel: CModel) -> List[str]:
    lines = ["/* ---------- 顶层类型别名 ---------- */"]
    for type_model, cname in sorted(cmodel.named_aliases, key=lambda item: item[0].id):
        target = cmodel.ref(type_model.alias_of_id)
        lines.append(
            f"typedef {target.decl_type()} {cname};"
            f" /**< ASN.1 {sanitize_comment(type_model.asn_name or '')} ::= "
            f"{sanitize_comment(str(type_model.asn_name or ''))} */"
        )
    return lines


def _struct_definitions(cmodel: CModel) -> List[str]:
    lines = ["/* ---------- 结构体定义（依赖拓扑序） ---------- */"]
    for struct in cmodel.ordered_structs:
        lines.extend(_render_struct_definition(cmodel, struct))
        lines.append("")
    return lines


def _render_struct_definition(cmodel: CModel, struct: StructDef) -> List[str]:
    """渲染单个结构体的完整定义（供分块生成复用）。"""
    message = next(
        (item for item in cmodel.messages if item.type_id == struct.key), None
    )
    lines = _emit_struct_header(struct, message)
    if struct.kind == "empty":
        lines.append(f"struct {struct.cname} {{")
        lines.append("    uint8_t _dummy; /**< 占位；编码 0 bit。 */")
        lines.append("};")
    elif struct.kind == "group":
        group = cmodel.group_by_key[struct.key]
        lines.extend(_emit_group_body(group))
    elif struct.kind == "seqof":
        lines.extend(_emit_seqof_body(struct))
    elif struct.kind == "choice":
        lines.extend(_emit_choice_body(struct))
    else:
        lines.extend(_emit_sequence_body(struct))
    return lines


def _emit_struct_header(
    struct: StructDef, message: Optional[MessageInfo]
) -> List[str]:
    lines: List[str] = []
    lines.append("/**")
    lines.append(f" * @brief {struct.cname}")
    if struct.asn_name:
        lines.append(f" * @note ASN.1：{sanitize_comment(struct.asn_name)}；源文件第 {struct.line} 行。")
    if message is not None:
        lines.append(
            f" * @note 实际消息：{message.channel_name}；{message.kind_name}"
            f"（包装位 {len(message.path)} 级，入口 {sum(1 for _ in message.path)} 个 CHOICE）。"
        )
    if struct.model is not None:
        summary = type_summary(struct.model)
        if summary:
            lines.append(f" * @note {summary}")
    lines.append(" */")
    return lines


def _emit_sequence_body(struct: StructDef) -> List[str]:
    lines = [f"struct {struct.cname} {{"]
    lines.extend(_emit_field_list(struct.root_fields, struct.cname))
    if struct.direct_additions:
        lines.append("    /* 直接扩展添加项（标准 PER：每项各自一个位图位 + 开放类型） */")
        lines.extend(_emit_field_list(struct.direct_additions, struct.cname))
    if struct.group_defs:
        lines.append("    /* [[ ]] 扩展添加组（每组一个开放类型） */")
        for group in struct.group_defs:
            lines.append(
                f"    bool has_extGroup{group.ordinal};"
                f" /**< 第 {group.ordinal} 组是否出现。 */"
            )
            lines.append(
                f"    {group.cname} extGroup{group.ordinal};"
                f" /**< 组内容；has_ 为 true 时有效。 */"
            )
    lines.append("};")
    return lines


def _emit_group_body(group: GroupDef) -> List[str]:
    lines = [f"struct {group.cname} {{"]
    lines.extend(_emit_field_list(group.fields, group.cname))
    lines.append("};")
    return lines


def _emit_seqof_body(struct: StructDef) -> List[str]:
    assert struct.element is not None
    element = struct.element
    element_decl = _element_decl(element)
    lines = [f"struct {struct.cname} {{"]
    lines.append(
        f"    {element_decl}* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */"
    )
    lines.append("    uint32_t count; /**< 元素个数。 */")
    lines.append("};")
    return lines


def _emit_choice_body(struct: StructDef) -> List[str]:
    lines: List[str] = []
    lines.append("/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */")
    lines.append(f"typedef enum {struct.tag_cname} {{")
    for constant in struct.tag_constants:
        marker = "（扩展备选）" if constant.is_extension else ""
        lines.append(
            f"    {constant.cname} = {constant.value},"
            f" /**< ASN.1 {sanitize_comment(constant.asn_name)}{marker} */"
        )
    lines.append(f"}} {struct.tag_cname};")
    lines.append("")
    lines.append(f"struct {struct.cname} {{")
    lines.append(f"    {struct.tag_cname} tag; /**< 必须与 u 中实际成员一致。 */")
    lines.append("    union {")
    for layout in struct.alternatives:
        if layout.is_containing:
            assert layout.ref.target is not None
            decl = f"{layout.ref.target.cname}*"
        elif layout.is_inline_seqof:
            raise ValueError(
                f"CHOICE alternative '{layout.asn_name}' of {struct.cname} is an "
                "anonymous SEQUENCE OF without a named wrapper"
            )
        else:
            decl = layout.ref.decl_type()
        lines.append(
            f"        {decl} {layout.cname};"
            f" /**< ASN.1 {sanitize_comment(layout.asn_name)} */"
        )
    lines.append("    } u;")
    lines.append("};")
    return lines


def _emit_field_list(fields: List[FieldLayout], parent_cname: str) -> List[str]:
    lines: List[str] = []
    for layout in fields:
        ref = layout.ref
        note_parts: List[str] = []
        note_parts.append(f"ASN.1 {sanitize_comment(layout.asn_name)}")
        if ref.kind == "integer":
            note_parts.append(integer_constraint_text(_integer_of(layout)))
        elif ref.kind in ("bitstring", "octet", "seqof", "inline_seqof"):
            note_parts.append(_size_text(ref))
        elif ref.kind == "containing":
            assert ref.target is not None
            note_parts.append(f"OCTET STRING (CONTAINING {ref.target.cname})")
        elif ref.kind == "null":
            note_parts.append("NULL，0 bit")
        elif ref.kind == "bool":
            note_parts.append("BOOLEAN，1 bit")
        elif ref.kind == "enum":
            note_parts.append("枚举")
        elif ref.kind == "struct":
            note_parts.append("结构体")
        if layout.optional and not layout.is_containing:
            note_parts.append("OPTIONAL")
        if layout.default_expr is not None:
            note_parts.append(f"DEFAULT {layout.default_expr}")
        if layout.is_containing:
            note_parts.append("NULL 表示未出现；解码由库 malloc，FreeMessage 释放")
        note = "；".join(note_parts)
        if layout.optional and not layout.is_containing:
            lines.append(
                f"    bool {layout.has_name}; /**< {sanitize_comment(layout.asn_name)} 是否存在。 */"
            )
        if layout.is_inline_seqof:
            assert ref.element is not None
            element_decl = _element_decl(ref.element)
            lines.append(
                f"    {element_decl}* {layout.cname}_items; /**< {note}；元素数组（库 malloc）。 */"
            )
            lines.append(
                f"    uint32_t {layout.cname}_count; /**< {sanitize_comment(layout.asn_name)} 元素个数。 */"
            )
        elif layout.is_containing:
            assert ref.target is not None
            lines.append(f"    {ref.target.cname}* {layout.cname}; /**< {note}。 */")
        else:
            lines.append(f"    {ref.decl_type()} {layout.cname}; /**< {note}。 */")
    return lines


def _integer_of(layout: FieldLayout):
    # FieldLayout 不直接保存 IntegerConstraint；由 CModel 的 ref 保存边界，
    # 这里用文本形式还原（与 TypeRef 一致）。
    ref = layout.ref
    from ..models import IntegerConstraint

    if ref.integer_single:
        return IntegerConstraint(
            kind="SingleValue", lower=ref.integer_lb, upper=ref.integer_ub, bit_width=0
        )
    width = 0
    if ref.integer_ub >= ref.integer_lb:
        value_range = ref.integer_ub - ref.integer_lb + 1
        width = max(0, (value_range - 1).bit_length())
    return IntegerConstraint(
        kind="ValueRange",
        lower=ref.integer_lb,
        upper=ref.integer_ub,
        bit_width=width,
    )


def _size_text(ref: TypeRef) -> str:
    from ..models import SizeConstraint

    if ref.kind == "inline_seqof":
        assert ref.element is not None
        element = ref.element.decl_type()
        return f"SEQUENCE OF {element}，{_size_text_from_bounds(ref)}"
    if ref.kind == "seqof":
        element = ref.element.decl_type() if ref.element is not None else "?"
        return f"SEQUENCE OF {element}，{_size_text_from_bounds(ref)}"
    return _size_text_from_bounds(ref)


def _size_text_from_bounds(ref: TypeRef) -> str:
    if ref.size_unbounded:
        return "SIZE 无上界（半约束长度）"
    if ref.size_fixed:
        return f"SIZE ({ref.size_lb})，定长"
    return f"SIZE ({ref.size_lb}..{ref.size_ub})"


def _element_decl(ref: TypeRef) -> str:
    return ref.decl_type()
