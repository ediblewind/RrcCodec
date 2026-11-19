"""机器可读元数据与"派生清单"发射器（单一来源 → 多消费方）。

一次生成：

* ``include/rrc_codec/rrc_version.h``       — 版本宏（公共头，来自 data/version.txt）
* ``generated/rrc_manifest.json``           — 机器可读清单（CI/脚本/文档工具消费）
* ``generated/message_dispatch.inc``        — ``dispatch.cpp`` 的 X-macro 消息清单
* ``tests/generated/message_manifest.h/.cpp`` — 测试用消息计数/名称/信道/包装位数表

这样"消息清单/数量/版本号"在仓库里只保留一份来源（``data/`` 或生成模型），
不再需要手工同步 ``dispatch.cpp``、测试 switch 与文档常量。
"""

from __future__ import annotations

import json
from typing import List

from .. import VERSION
from ..cmodel import CModel
from ..metadata import parse_semver
from .c_common import generated_banner

MODULE = "NR-RRC-Definitions"


def _c_string(text: str) -> str:
    return '"' + text.replace("\\", "\\\\").replace('"', '\\"') + '"'


def emit_version_header(
    *,
    library_version: str,
    api_version: int,
    asn_version: str,
    input_sha256: str,
) -> str:
    major, minor, patch = parse_semver(library_version, "library version")
    asn_major, asn_minor, asn_patch = parse_semver(asn_version, "ASN.1 version")
    lines: List[str] = [
        "/* ============================================================================",
        " * rrc_version.h — 库版本、C API 版本与 ASN.1 版本",
        " *",
        " * 自动生成，请勿手工修改；单一来源：data/version.txt + data/asn-version.txt。",
        f" * Generator      : rrcgen {VERSION}",
        f" * ASN.1          : 3GPP TS 38.331 v{asn_version}（module {MODULE}）",
        f" * Input SHA-256  : {input_sha256}",
        " * 重生成命令     :",
        " *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate",
        " *",
        " * 版本策略（方案 7.4）：",
        f" *   - 库语义版本：{library_version}，SOVERSION {major}；",
        f" *   - 结构体 ABI 与 ASN.1 v{asn_version} 绑定，ASN.1 升级视为 ABI 破坏；",
        f" *   - {major}.x 内已有函数签名不变，新增消息只追加 MessageKind 数值。",
        " * ========================================================================== */",
        "#ifndef RRC_CODEC_VERSION_H",
        "#define RRC_CODEC_VERSION_H",
        "",
        "/* 库版本（语义版本）。 */",
        f"#define RRC_CODEC_VERSION_MAJOR {major}",
        f"#define RRC_CODEC_VERSION_MINOR {minor}",
        f"#define RRC_CODEC_VERSION_PATCH {patch}",
        f"#define RRC_CODEC_VERSION_STRING {_c_string(library_version)}",
        "",
        "/* C API 版本：签名/ABI 兼容性只在本值不变时保证。 */",
        f"#define RRC_CODEC_C_API_VERSION {api_version}",
        "",
        f"/* 生成代码绑定的 ASN.1 版本（3GPP TS 38.331 v{asn_version}）。 */",
        f"#define RRC_CODEC_ASN1_VERSION_MAJOR {asn_major}",
        f"#define RRC_CODEC_ASN1_VERSION_MINOR {asn_minor}",
        f"#define RRC_CODEC_ASN1_VERSION_PATCH {asn_patch}",
        f"#define RRC_CODEC_ASN1_VERSION_STRING {_c_string(asn_version)}",
        "",
        "/* 把版本号编码为单个整数，便于编译期比较：0xMMmmpp。 */",
        "#define RRC_CODEC_VERSION_ENCODE(major, minor, patch) \\",
        "    (((major) << 16) | ((minor) << 8) | (patch))",
        "#define RRC_CODEC_VERSION_NUMBER \\",
        "    RRC_CODEC_VERSION_ENCODE(RRC_CODEC_VERSION_MAJOR, RRC_CODEC_VERSION_MINOR, \\",
        "                             RRC_CODEC_VERSION_PATCH)",
        "#define RRC_CODEC_ASN1_VERSION_NUMBER \\",
        "    RRC_CODEC_VERSION_ENCODE(RRC_CODEC_ASN1_VERSION_MAJOR, \\",
        "                             RRC_CODEC_ASN1_VERSION_MINOR, \\",
        "                             RRC_CODEC_ASN1_VERSION_PATCH)",
        "",
        "#endif /* RRC_CODEC_VERSION_H */",
    ]
    return "\n".join(lines) + "\n"


def _wrapper_bits(message) -> int:
    bits = 0
    for level in message.path:
        value = level.count - 1
        while value > 0:
            bits += 1
            value >>= 1
    return bits


def _message_records(cmodel: CModel) -> List[dict]:
    return [
        {
            "Kind": message.kind_value,
            "KindName": message.kind_name,
            "AsnName": message.asn_name,
            "Struct": message.struct_cname,
            "Channel": message.channel_name,
            "ChannelValue": message.channel_value,
            "WrapperBits": _wrapper_bits(message),
            "Path": [
                {"Index": level.index, "Count": level.count}
                for level in message.path
            ],
        }
        for message in cmodel.messages
    ]


def emit_manifest_json(
    cmodel: CModel,
    *,
    library_version: str,
    api_version: int,
    input_file: str,
    chunk_size: int,
) -> str:
    chunk_count = (
        len(cmodel.ordered_structs) + chunk_size - 1
    ) // chunk_size
    manifest = {
        "GeneratorVersion": VERSION,
        "LibraryVersion": library_version,
        "CApiVersion": api_version,
        "Module": MODULE,
        "AsnVersion": cmodel.asn_version,
        "InputFile": input_file,
        "InputSha256": cmodel.input_sha256,
        "ChunkSize": chunk_size,
        "ChunkCount": chunk_count,
        "MessageCount": len(cmodel.messages),
        "TypeCounts": cmodel.stats,
        "Messages": _message_records(cmodel),
    }
    return json.dumps(manifest, indent=2, ensure_ascii=False) + "\n"


def emit_dispatch_include(cmodel: CModel) -> str:
    """``dispatch.cpp`` 的 X-macro 消息清单（由生成器写入，不再是手写代码）。"""
    lines: List[str] = [
        "/* ============================================================================",
        " * message_dispatch.inc — dispatch.cpp 的消息清单（X-macro，自动生成）",
        " *",
        " * 自动生成，请勿手工修改；生成源为 data/38.331 的 10 个 Uu 口包装层。",
        f" * Generator      : rrcgen {VERSION}",
        f" * ASN.1          : 3GPP TS 38.331 v{cmodel.asn_version}（module {MODULE}）",
        f" * Input SHA-256  : {cmodel.input_sha256}",
        " *",
        " * 每个 X(suffix) 同时用作：",
        " *   - MessageKind 枚举名的一部分：MessageKind_##suffix",
        " *   - 生成结构体类型名：suffix（附录 A 中与 KindSuffix 完全一致）",
        " *   - 生成入口函数名的一部分：EncodeMessage_##suffix 等",
        " * ========================================================================== */",
        "#define RRC_CODEC_MESSAGE_TYPE_LIST(X) \\",
    ]
    for index, message in enumerate(cmodel.messages):
        suffix = message.kind_name[len("MessageKind_") :]
        terminator = "" if index == len(cmodel.messages) - 1 else " \\"
        lines.append(f"  X({suffix}){terminator}")
    return "\n".join(lines) + "\n"


def emit_test_manifest_header(cmodel: CModel) -> str:
    count = len(cmodel.messages)
    lines: List[str] = generated_banner(
        "tests/generated/message_manifest.h — 测试用消息清单（自动生成）",
        cmodel.input_sha256,
        cmodel.asn_version,
    )
    lines.extend(
        [
            "",
            "#ifndef RRC_CODEC_TESTS_GENERATED_MESSAGE_MANIFEST_H",
            "#define RRC_CODEC_TESTS_GENERATED_MESSAGE_MANIFEST_H",
            "",
            "#include <cstddef>",
            "",
            '#include "rrc_codec/rrc_codec.h"',
            "",
            "namespace rrc {",
            "namespace v1810 {",
            "namespace test {",
            "",
            "/* 消息数量（= MessageKind 的最大值）；测试循环的上界。 */",
            f"constexpr std::size_t kMessageKindCount = {count};",
            "",
            "/* 按 MessageKind - 1 索引。 */",
            "extern const char* const kMessageKindNames[kMessageKindCount];",
            "extern const ChannelType kMessageKindChannels[kMessageKindCount];",
            "extern const std::size_t kMessageKindWrapperBits[kMessageKindCount];",
            "",
            "}  // namespace test",
            "}  // namespace v1810",
            "}  // namespace rrc",
            "",
            "#endif",
        ]
    )
    return "\n".join(lines) + "\n"


def emit_test_manifest_source(cmodel: CModel) -> str:
    lines: List[str] = generated_banner(
        "tests/generated/message_manifest.cpp — 测试用消息清单（自动生成）",
        cmodel.input_sha256,
        cmodel.asn_version,
    )
    lines.extend(
        [
            "",
            '#include "message_manifest.h"',
            "",
            "namespace rrc {",
            "namespace v1810 {",
            "namespace test {",
            "",
            "const char* const kMessageKindNames[kMessageKindCount] = {",
        ]
    )
    for message in cmodel.messages:
        lines.append(f"    {_c_string(message.asn_name)},")
    lines.extend(
        [
            "};",
            "",
            "const ChannelType kMessageKindChannels[kMessageKindCount] = {",
        ]
    )
    for message in cmodel.messages:
        lines.append(f"    {message.channel_name},")
    lines.extend(
        [
            "};",
            "",
            "const std::size_t kMessageKindWrapperBits[kMessageKindCount] = {",
        ]
    )
    for message in cmodel.messages:
        lines.append(f"    {_wrapper_bits(message)},")
    lines.extend(
        [
            "};",
            "",
            "}  // namespace test",
            "}  // namespace v1810",
            "}  // namespace rrc",
        ]
    )
    return "\n".join(lines) + "\n"
