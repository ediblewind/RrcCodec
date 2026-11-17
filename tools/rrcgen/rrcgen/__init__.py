"""rrcgen - ASN.1 (38.331) front-end and C code generator for RrcCodec v2.

The generator parses the subset of ASN.1 used by 3GPP TS 38.331 v18.10.0,
resolves it into a deterministic intermediate representation (IR) and emits the
v2 C ABI artifacts described by ``docs/RRC编解码库简化方案.md``:

* ``include/rrc_codec/types/rrc_types.h``      — 消息/IE 的 C 结构体与枚举
* ``include/rrc_codec/messages/rrc_messages.h`` — MessageKind 与信道映射
* ``src/generated/codec_internal.h``            — 内部编解码函数声明
* ``src/generated/codec_partNNN.cpp``           — 按类型生成的编解码函数
* ``generated/``                                — 统计、消息索引、源文件列表
* ``tests/generated/``                          — 53 个消息的测试样例构造器
"""

from __future__ import annotations

GENERATOR_NAME = "rrcgen"
VERSION = "2.0.0"
IR_VERSION = 2
DEFAULT_ASN_VERSION = "18.10.0"
V1_MODULE = "NR-RRC-Definitions"

__all__ = [
    "GENERATOR_NAME",
    "VERSION",
    "IR_VERSION",
    "DEFAULT_ASN_VERSION",
    "V1_MODULE",
]
