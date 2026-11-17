"""Naming rules (design document 4.6 and DESIGN.md section 3).

Two mappings exist:

* type names are *faithful*: only hyphens are removed, every hyphen separated
  segment keeps its spelling but gets an upper-case first character
  (``UE-NR-Capability`` -> ``UENRCapability``, ``X-r16`` -> ``XR16``);
* field / alternative / enum value / constant names are PascalCase: split on
  ``-``, upper-case the first character of each segment and keep the rest
  verbatim.  A segment starting with a digit is prefixed with ``Num`` so that
  ``dB-3`` and ``dB3`` stay distinct (``DBNum3`` vs ``DB3``).
"""

from __future__ import annotations

import hashlib
from typing import Dict, Iterable, List, Optional

MAX_NAME_LENGTH = 120
TRUNCATE_LENGTH = 100

#: Explicit spellings required by design document 4.6.3.
_ENUM_VALUE_SPECIALS = {
    "true": "True",
    "false": "False",
    "trueVal": "TrueVal",
    "falseVal": "FalseVal",
}

_CPP_KEYWORDS = frozenset(
    {
        "alignas",
        "alignof",
        "and",
        "and_eq",
        "asm",
        "auto",
        "bitand",
        "bitor",
        "bool",
        "break",
        "case",
        "catch",
        "char",
        "char16_t",
        "char32_t",
        "class",
        "compl",
        "const",
        "constexpr",
        "const_cast",
        "continue",
        "decltype",
        "default",
        "delete",
        "do",
        "double",
        "dynamic_cast",
        "else",
        "enum",
        "explicit",
        "export",
        "extern",
        "false",
        "float",
        "for",
        "friend",
        "goto",
        "if",
        "inline",
        "int",
        "long",
        "mutable",
        "namespace",
        "new",
        "noexcept",
        "not",
        "not_eq",
        "nullptr",
        "operator",
        "or",
        "or_eq",
        "private",
        "protected",
        "public",
        "register",
        "reinterpret_cast",
        "return",
        "short",
        "signed",
        "sizeof",
        "static",
        "static_assert",
        "static_cast",
        "struct",
        "switch",
        "template",
        "this",
        "thread_local",
        "throw",
        "true",
        "try",
        "typedef",
        "typeid",
        "typename",
        "union",
        "unsigned",
        "using",
        "virtual",
        "void",
        "volatile",
        "wchar_t",
        "while",
        "xor",
        "xor_eq",
    }
)


def split_segments(identifier: str) -> List[str]:
    """Split an ASN.1 identifier on hyphens."""
    return [segment for segment in identifier.split("-") if segment != ""]


def _capitalize(segment: str) -> str:
    return segment[:1].upper() + segment[1:]


def _segment_to_pascal(segment: str) -> str:
    if segment and segment[0].isdigit():
        return "Num" + segment
    return _capitalize(segment)


def limit_name(name: str) -> str:
    """Apply the >120 character truncation rule (deterministic, SHA-256 based)."""
    if len(name) <= MAX_NAME_LENGTH:
        return name
    digest = hashlib.sha256(name.encode("utf-8")).hexdigest()[:8]
    return name[:TRUNCATE_LENGTH] + "_" + digest


def type_name(asn_name: str) -> str:
    """Map an ASN.1 *type* identifier to its C++ spelling."""
    segments = split_segments(asn_name)
    joined = "".join(_capitalize(segment) for segment in segments)
    if not joined:
        joined = "Unnamed"
    return limit_name(joined)


def member_name(asn_name: str) -> str:
    """Map a field / alternative / enum value / constant identifier."""
    segments = split_segments(asn_name)
    joined = "".join(_segment_to_pascal(segment) for segment in segments)
    if not joined:
        joined = "Unnamed"
    if joined in _CPP_KEYWORDS:  # pragma: no cover - PascalCase avoids this
        joined += "Value"
    return limit_name(joined)


def enum_value_name(asn_name: str) -> str:
    """Map an ENUMERATED value identifier (special spellings preserved)."""
    special = _ENUM_VALUE_SPECIALS.get(asn_name)
    if special is not None:
        return special
    return member_name(asn_name)


def constant_name(asn_name: str) -> str:
    """Map an ASN.1 value (constant) identifier to its C++ spelling."""
    return member_name(asn_name)


def synthetic_type_name(base: str, segments: Iterable[str]) -> str:
    """Build a flat synthetic name for an anonymous type."""
    parts = [base]
    parts.extend(_segment_to_pascal(segment) for segment in segments)
    return limit_name("".join(parts))


class NameRegistry:
    """Global registry of generated C++ names with deterministic de-duplication."""

    def __init__(self) -> None:
        self._used: Dict[str, int] = {}

    def is_used(self, name: str) -> bool:
        return name in self._used

    def register(self, name: str) -> str:
        """Reserve *name*; on collision append ``_2``, ``_3`` ..."""
        if name not in self._used:
            self._used[name] = 1
            return name
        counter = self._used[name] + 1
        while True:
            candidate = f"{name}_{counter}"
            if candidate not in self._used:
                self._used[name] = counter
                self._used[candidate] = 1
                return candidate
            counter += 1

    def try_register(self, name: str) -> Optional[str]:
        """Reserve *name* if free; otherwise return ``None``."""
        if name in self._used:
            return None
        self._used[name] = 1
        return name


__all__ = [
    "MAX_NAME_LENGTH",
    "TRUNCATE_LENGTH",
    "split_segments",
    "limit_name",
    "type_name",
    "member_name",
    "enum_value_name",
    "constant_name",
    "synthetic_type_name",
    "NameRegistry",
]
