"""Diagnostics collection for rrcgen.

Diagnostics use stable machine-readable codes (``RRCGEN_*``) and carry an
optional source location.  The CLI renders them as::

    <file>:<line>:<col>: error: <CODE>: <message>

or as a JSON array with ``--diagnostics-format json``.
"""

from __future__ import annotations

import json
from dataclasses import dataclass
from enum import Enum
from typing import List, Optional, Sequence


class Severity(Enum):
    """Diagnostic severity."""

    INFO = "info"
    WARNING = "warning"
    ERROR = "error"


@dataclass(frozen=True)
class SourceLocation:
    """A position inside the (normalized) input file."""

    file: str
    line: int
    column: int
    byte_offset: int

    def format(self) -> str:
        return f"{self.file}:{self.line}:{self.column}"


class DiagnosticCode:
    """Stable diagnostic codes (mirroring the design document)."""

    PARSE_ERROR = "RRCGEN_PARSE_ERROR"
    UNSUPPORTED_CONSTRUCT = "RRCGEN_UNSUPPORTED_CONSTRUCT"
    DUPLICATE_MODULE = "RRCGEN_DUPLICATE_MODULE"
    DUPLICATE_SYMBOL = "RRCGEN_DUPLICATE_SYMBOL"
    UNRESOLVED_IMPORT = "RRCGEN_UNRESOLVED_IMPORT"
    UNRESOLVED_REFERENCE = "RRCGEN_UNRESOLVED_REFERENCE"
    PARAM_INSTANTIATION = "RRCGEN_PARAM_INSTANTIATION"
    CONSTRAINT_INVALID = "RRCGEN_CONSTRAINT_INVALID"
    SIZE_MISSING = "RRCGEN_SIZE_MISSING"
    DEFAULT_INVALID = "RRCGEN_DEFAULT_INVALID"
    EXTENSION_ORDER = "RRCGEN_EXTENSION_ORDER"
    NAME_COLLISION = "RRCGEN_NAME_COLLISION"
    STRUCTURAL_RECURSION = "RRCGEN_STRUCTURAL_RECURSION"
    LIMIT_EXCEEDED = "RRCGEN_LIMIT_EXCEEDED"
    INPUT_INVALID = "RRCGEN_INPUT_INVALID"
    INPUT_SHA256_MISMATCH = "RRCGEN_INPUT_SHA256_MISMATCH"
    INTERNAL = "RRCGEN_INTERNAL_ERROR"
    CHECK_MISMATCH = "RRCGEN_CHECK_MISMATCH"


@dataclass(frozen=True)
class Diagnostic:
    """A single diagnostic message."""

    severity: Severity
    code: str
    message: str
    location: Optional[SourceLocation] = None

    def render(self) -> str:
        prefix = ""
        if self.location is not None:
            prefix = f"{self.location.format()}: "
        return f"{prefix}{self.severity.value}: {self.code}: {self.message}"

    def to_json(self) -> dict:
        return {
            "severity": self.severity.value,
            "code": self.code,
            "message": self.message,
            "file": self.location.file if self.location else None,
            "line": self.location.line if self.location else None,
            "column": self.location.column if self.location else None,
        }


class DiagnosticCollector:
    """Accumulates diagnostics and answers aggregate queries."""

    def __init__(self) -> None:
        self._diagnostics: List[Diagnostic] = []

    def add(
        self,
        severity: Severity,
        code: str,
        message: str,
        location: Optional[SourceLocation] = None,
    ) -> None:
        self._diagnostics.append(Diagnostic(severity, code, message, location))

    def error(
        self,
        code: str,
        message: str,
        location: Optional[SourceLocation] = None,
    ) -> None:
        self.add(Severity.ERROR, code, message, location)

    def warning(
        self,
        code: str,
        message: str,
        location: Optional[SourceLocation] = None,
    ) -> None:
        self.add(Severity.WARNING, code, message, location)

    def info(
        self,
        code: str,
        message: str,
        location: Optional[SourceLocation] = None,
    ) -> None:
        self.add(Severity.INFO, code, message, location)

    @property
    def diagnostics(self) -> Sequence[Diagnostic]:
        return tuple(self._diagnostics)

    def error_count(self) -> int:
        return sum(1 for d in self._diagnostics if d.severity is Severity.ERROR)

    def warning_count(self) -> int:
        return sum(1 for d in self._diagnostics if d.severity is Severity.WARNING)

    def has_errors(self) -> bool:
        return self.error_count() > 0

    def clear(self) -> None:
        self._diagnostics.clear()

    def render(self) -> str:
        return "\n".join(d.render() for d in self._diagnostics)

    def render_json(self) -> str:
        return json.dumps([d.to_json() for d in self._diagnostics], indent=2)
