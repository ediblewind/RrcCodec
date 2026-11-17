"""Shared helpers for the v2 C emitters (file headers, comments, constraints)."""

from __future__ import annotations

from typing import List, Optional

from .. import VERSION
from ..models import IntegerConstraint, SizeConstraint, TypeModel

ASN_SPEC = "3GPP TS 38.331 v18.10.0"
MODULE = "NR-RRC-Definitions"


def generated_banner(
    title: str, input_sha256: str, asn_version: str, generator_version: str = VERSION
) -> List[str]:
    """生成文件头注释（方案 5.6：版本/输入哈希/重生成命令，无时间戳）。"""
    return [
        "/* ============================================================================",
        f" * {title}",
        " *",
        " * 自动生成，请勿手工修改。",
        f" * Generator      : rrcgen {generator_version}",
        f" * ASN.1          : {ASN_SPEC}（module {MODULE}）",
        f" * Input SHA-256  : {input_sha256}",
        " * 重生成命令     :",
        " *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate",
        " * ========================================================================== */",
    ]


def sanitize_comment(text: str) -> str:
    """把任意文本压成单行并转义 `*/`，可直接放进 Doxygen 注释。"""
    cleaned = " ".join(text.split())
    return cleaned.replace("*/", "* /")


def integer_constraint_text(constraint: Optional[IntegerConstraint]) -> str:
    if constraint is None:
        return "无约束（38.331 不出现）"
    if constraint.kind == "SingleValue":
        return f"INTEGER ({constraint.lower})，单值 0 bit"
    if constraint.kind == "ValueRange":
        return f"INTEGER ({constraint.lower}..{constraint.upper})，位宽 {constraint.bit_width} bit"
    if constraint.kind == "ExtensibleRange":
        return (
            f"INTEGER ({constraint.lower}..{constraint.upper}, ...)，"
            f"根内 {constraint.bit_width} bit"
        )
    return "INTEGER"


def size_constraint_text(constraint: Optional[SizeConstraint]) -> str:
    if constraint is None or constraint.kind == "None":
        return "无 SIZE 约束（半约束长度）"
    if constraint.kind == "SizeFixed":
        return f"SIZE ({constraint.upper})，定长"
    text = f"SIZE ({constraint.lower}..{constraint.upper})"
    if constraint.upper >= 65536:
        text += "，ub>=64K 按半约束长度处理"
    if constraint.is_extensible:
        text += "，可扩展"
    return text


def type_summary(type_model: Optional[TypeModel]) -> str:
    if type_model is None:
        return ""
    summary = type_model.asn_summary or ""
    return sanitize_comment(summary)


def presence_text(presence: str, default_expr: Optional[str]) -> str:
    if presence == "Optional":
        return "OPTIONAL"
    if presence == "Default":
        return f"DEFAULT {default_expr or ''}".strip()
    return "必填"


def write_lines(lines: List[str]) -> str:
    return "\n".join(lines) + "\n"
