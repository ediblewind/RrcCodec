"""C naming rules for the v2 emitter (N1–N10).

与旧 v1 的 C++ 命名不同：v2 直接使用 ASN.1 原名，只做必要转义，不加 `Rrc_` 前缀。
本模块只负责“名字”，不依赖 IR 类型模型，便于单独测试。

规则摘要：

* N1 顶层类型：ASN.1 原名，`-` -> `_`，其余字符与大小写不变；
* N2 匿名类型：父类型名 + `_` + 字段/备选名首字母大写；若字段名以父类型名
  最后一段为前缀，则合并（如 `RRCReconfiguration_CriticalExtensionsFuture`）；
* N3 字段名：ASN.1 原名，`-` -> `_`；
* N4 枚举常量：`<枚举类型名>_<ASN.1 值名>`；
* N7 冲突：追加 `_2`、`_3` …；
* N8 关键字：追加 `_` 后缀。
"""

from __future__ import annotations

import hashlib
from typing import Iterable, List, Optional

MAX_NAME_LENGTH = 120
TRUNCATE_LENGTH = 100

#: C99 + C++17 关键字（生成的标识符与它们冲突时追加 `_`）。
C_KEYWORDS = frozenset(
    {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor",
        "bool", "break", "case", "catch", "char", "char16_t", "char32_t",
        "class", "compl", "const", "constexpr", "const_cast", "continue",
        "decltype", "default", "delete", "do", "double", "dynamic_cast", "else",
        "enum", "explicit", "export", "extern", "false", "float", "for",
        "friend", "goto", "if", "inline", "int", "long", "mutable", "namespace",
        "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or",
        "or_eq", "private", "protected", "public", "register",
        "reinterpret_cast", "restrict", "return", "short", "signed", "sizeof",
        "static", "static_assert", "static_cast", "struct", "switch",
        "template", "this", "thread_local", "throw", "true", "try", "typedef",
        "typeid", "typename", "union", "unsigned", "using", "virtual", "void",
        "volatile", "wchar_t", "while", "xor", "xor_eq",
        "_Alignas", "_Alignof", "_Atomic", "_Bool", "_Complex", "_Generic",
        "_Imaginary", "_Noreturn", "_Static_assert", "_Thread_local",
    }
)

#: 公共 ABI / 库保留标识符（避免生成类型与公共头冲突）。
RESERVED_IDENTIFIERS = frozenset(
    {
        "BitString", "OctetString", "Null", "EncodedMessage", "ErrorCode",
        "ErrorInfo", "ErrorHandler", "ChannelType", "MessageKind",
        "EncodeMessage", "DecodeMessage", "FreeMessage", "FreeEncodedMessage",
        "GetLastErrorInfo", "SetErrorHandler", "GetVersionString",
        "GetAsn1VersionString", "RRC_CODEC_API", "RRC_CODEC_STATIC",
        "ChannelOfMessageKind",
        # 常用 C 标准库/macro 名（生成的类型名不应遮蔽它们）
        "stdin", "stdout", "stderr", "errno", "assert", "offsetof", "NULL",
        "EOF", "BUFSIZ", "CHAR_BIT", "INT_MAX", "INT_MIN", "UINT_MAX",
        "INT64_MAX", "INT64_MIN", "UINT32_MAX", "SIZE_MAX", "true", "false",
    }
)

_BLOCKED = C_KEYWORDS | RESERVED_IDENTIFIERS


def limit_name(name: str) -> str:
    """超长名字的确定性截断（与 v1 相同的 SHA-256 规则）。"""
    if len(name) <= MAX_NAME_LENGTH:
        return name
    digest = hashlib.sha256(name.encode("utf-8")).hexdigest()[:8]
    return name[:TRUNCATE_LENGTH] + "_" + digest


def escape_identifier(name: str) -> str:
    """ASN.1 标识符 -> C 标识符（`-`->`_`，关键字/保留名追加 `_`）。"""
    result = name.replace("-", "_")
    if not result:
        result = "Unnamed"
    if result in _BLOCKED:
        result += "_"
    return limit_name(result)


def type_name(asn_name: str) -> str:
    """顶层类型名（N1）：直接使用 ASN.1 原名并做必要转义。"""
    return escape_identifier(asn_name)


def field_name(asn_name: str) -> str:
    """字段名（N3）。"""
    return escape_identifier(asn_name)


def _capitalize_first(text: str) -> str:
    return text[:1].upper() + text[1:]


def child_type_name(parent: str, field_asn_name: str) -> str:
    """匿名类型名（N2）：父类型名 + `_` + 字段名首字母大写，重叠时合并。"""
    segment = field_asn_name.replace("-", "_")
    capitalized = _capitalize_first(segment)
    parent_tail = parent.rsplit("_", 1)[-1]
    if parent_tail and capitalized.startswith(parent_tail):
        merged = parent + capitalized[len(parent_tail):]
    else:
        merged = parent + "_" + capitalized
    return limit_name(merged)


def item_type_name(base: str) -> str:
    """`SEQUENCE OF` 匿名元素类型名：`<base>_Item`。"""
    return limit_name(base + "_Item")


def setup_release_name(target_cname: str) -> str:
    """参数化类型实例名：`SetupRelease { X }` -> `SetupRelease_X`。"""
    return limit_name("SetupRelease_" + target_cname)


def enum_constant_name(enum_cname: str, value_asn_name: str) -> str:
    """枚举常量名（N4）：`<枚举类型名>_<值名>`。"""
    return limit_name(enum_cname + "_" + escape_identifier(value_asn_name))


class NameRegistry:
    """全局 C 标识符注册表，冲突时按出现顺序追加 `_2`、`_3` …（N7）。"""

    def __init__(self, reserved: Optional[Iterable[str]] = None) -> None:
        self._used: set[str] = set(reserved or ())
        self.renames: List[tuple[str, str]] = []

    def is_used(self, name: str) -> bool:
        return name in self._used

    def register(self, name: str) -> str:
        """注册 *name*；冲突时返回追加后缀后的名字并记录重命名。"""
        if name not in self._used:
            self._used.add(name)
            return name
        counter = 2
        while f"{name}_{counter}" in self._used:
            counter += 1
        candidate = f"{name}_{counter}"
        self._used.add(candidate)
        self.renames.append((name, candidate))
        return candidate


__all__ = [
    "C_KEYWORDS",
    "RESERVED_IDENTIFIERS",
    "MAX_NAME_LENGTH",
    "limit_name",
    "escape_identifier",
    "type_name",
    "field_name",
    "child_type_name",
    "item_type_name",
    "setup_release_name",
    "enum_constant_name",
    "NameRegistry",
]
