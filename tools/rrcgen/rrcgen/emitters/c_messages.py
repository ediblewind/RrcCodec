"""``messages/rrc_messages.h`` emitter（MessageKind + 信道映射）。"""

from __future__ import annotations

from typing import List

from ..cmodel import CModel
from .c_common import generated_banner, sanitize_comment


def emit_messages_header(cmodel: CModel) -> str:
    lines: List[str] = []
    lines.extend(
        generated_banner(
            "messages/rrc_messages.h — 实际 RRC 消息类型与信道映射（公开头）",
            cmodel.input_sha256,
            cmodel.asn_version,
        )
    )
    lines.extend(
        [
            "",
            "#ifndef RRC_CODEC_MESSAGES_RRC_MESSAGES_H",
            "#define RRC_CODEC_MESSAGES_RRC_MESSAGES_H",
            "",
            '#include "../rrc_channel.h"',
            "",
            "#ifdef __cplusplus",
            'extern "C" {',
            "#endif",
            "",
            "/**",
            " * @brief 实际 RRC 消息类型（53 个；不含 spare/扩展占位分支）。",
            " *",
            " * 每个值对应一个顶层结构体（见 types/rrc_types.h）与一个所属信道。",
            " * 消息类型由 EncodeMessage / DecodeMessage / FreeMessage 的 kind 参数显式传入。",
            " *",
            " * @note 数值稳定：1–53，按方案附录 A 顺序分配；新增消息只追加。",
            " */",
            "typedef enum MessageKind {",
        ]
    )
    for message in cmodel.messages:
        lines.append(
            f"    {message.kind_name} = {message.kind_value},"
            f" /**< {sanitize_comment(message.asn_name)}（{message.channel_name}）；"
            f"结构体 {message.struct_cname} */"
        )
    lines.extend(
        [
            "} MessageKind;",
            "",
            "/**",
            " * @brief 返回消息类型所属信道。",
            " *",
            " * @param[in] kind 实际消息类型。",
            " * @return 对应信道；kind 不在 1–53 范围内时返回 (ChannelType)0。",
            " * @note 纯头文件实现（C99 static inline），不新增导出符号。",
            " */",
            "static inline ChannelType ChannelOfMessageKind(MessageKind kind)",
            "{",
            "    switch (kind) {",
        ]
    )
    for message in cmodel.messages:
        lines.append(
            f"    case {message.kind_name}: return {message.channel_name};"
        )
    lines.extend(
        [
            "    default: break;",
            "    }",
            "    return (ChannelType)0;",
            "}",
            "",
            "#ifdef __cplusplus",
            '} /* extern "C" */',
            "#endif",
            "",
            "#endif /* RRC_CODEC_MESSAGES_RRC_MESSAGES_H */",
        ]
    )
    return "\n".join(lines) + "\n"
