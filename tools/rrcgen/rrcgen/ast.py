"""Abstract syntax tree for the supported ASN.1 subset."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import List, Optional, Sequence, Union


@dataclass(frozen=True)
class Loc:
    """Source location of an AST node (1-based line/column)."""

    line: int
    column: int
    byte_offset: int


# ---------------------------------------------------------------------------
# Constraints
# ---------------------------------------------------------------------------


@dataclass(frozen=True)
class Bound:
    """A constraint bound: integer literal, constant reference, MIN or MAX."""

    kind: str  # "int" | "ref" | "min" | "max"
    value: int | str | None

    def __str__(self) -> str:  # pragma: no cover - diagnostics only
        if self.kind == "int":
            return str(self.value)
        return str(self.value).upper()


@dataclass(frozen=True)
class Constraint:
    """A parsed constraint.

    ``kind`` is one of ``range`` / ``single`` / ``size_range`` / ``size_fixed``.
    """

    loc: Loc
    kind: str
    lower: Bound
    upper: Optional[Bound] = None
    extensible: bool = False


@dataclass(frozen=True)
class ContainingConstraint:
    """``OCTET STRING (CONTAINING T)``."""

    loc: Loc
    target: "TypeExpr"


# ---------------------------------------------------------------------------
# Default values
# ---------------------------------------------------------------------------


@dataclass(frozen=True)
class DefaultValue:
    """A DEFAULT value: integer literal, constant reference or boolean."""

    kind: str  # "int" | "ref" | "bool"
    value: int | str | bool


# ---------------------------------------------------------------------------
# Type expressions
# ---------------------------------------------------------------------------


class TypeExpr:
    """Base class for parsed type expressions."""

    loc: Loc

    @property
    def kind_name(self) -> str:  # pragma: no cover - overridden
        raise NotImplementedError


@dataclass
class SequenceType(TypeExpr):
    loc: Loc
    items: List["ComponentItem"] = field(default_factory=list)

    @property
    def kind_name(self) -> str:
        return "Sequence"


@dataclass
class SequenceOfType(TypeExpr):
    loc: Loc
    size: Optional[Constraint]
    element: "TypeExpr"

    @property
    def kind_name(self) -> str:
        return "SequenceOf"


@dataclass
class ChoiceType(TypeExpr):
    loc: Loc
    items: List["ComponentItem"] = field(default_factory=list)

    @property
    def kind_name(self) -> str:
        return "Choice"


@dataclass
class EnumeratedType(TypeExpr):
    loc: Loc
    items: List[Union["EnumValue", "ExtensionMarker"]] = field(default_factory=list)

    @property
    def kind_name(self) -> str:
        return "Enumerated"


@dataclass
class IntegerType(TypeExpr):
    loc: Loc
    constraint: Optional[Constraint] = None

    @property
    def kind_name(self) -> str:
        return "Integer"


@dataclass
class BitStringType(TypeExpr):
    loc: Loc
    constraint: Optional[Constraint] = None

    @property
    def kind_name(self) -> str:
        return "BitString"


@dataclass
class OctetStringType(TypeExpr):
    loc: Loc
    size: Optional[Constraint] = None
    containing: Optional[TypeExpr] = None

    @property
    def kind_name(self) -> str:
        return "OctetString"


@dataclass
class BooleanType(TypeExpr):
    loc: Loc

    @property
    def kind_name(self) -> str:
        return "Boolean"


@dataclass
class NullType(TypeExpr):
    loc: Loc

    @property
    def kind_name(self) -> str:
        return "Null"


@dataclass
class RefType(TypeExpr):
    loc: Loc
    name: str
    args: List[TypeExpr] = field(default_factory=list)

    @property
    def kind_name(self) -> str:
        return "Reference"


# ---------------------------------------------------------------------------
# SEQUENCE / CHOICE component list items
# ---------------------------------------------------------------------------


@dataclass
class Component:
    """A SEQUENCE field / CHOICE alternative."""

    loc: Loc
    name: str
    type: TypeExpr
    presence: str = "Mandatory"  # Mandatory | Optional | Default
    default: Optional[DefaultValue] = None
    comment: str = ""


@dataclass(frozen=True)
class ExtensionMarker:
    """The ``...`` extension marker."""

    loc: Loc


@dataclass
class ExtensionGroup:
    """A ``[[ ... ]]`` extension addition group."""

    loc: Loc
    members: List[Component] = field(default_factory=list)


ComponentItem = Union[Component, ExtensionMarker, ExtensionGroup]


@dataclass
class EnumValue:
    """An ENUMERATED value."""

    loc: Loc
    name: str
    number: Optional[int] = None


# ---------------------------------------------------------------------------
# Assignments / module
# ---------------------------------------------------------------------------


@dataclass
class TypeAssignment:
    loc: Loc
    name: str
    type: TypeExpr


@dataclass
class ParamTypeAssignment:
    """``SetupRelease { ElementTypeParam } ::= Type``."""

    loc: Loc
    name: str
    param_name: str
    type: TypeExpr


@dataclass
class ValueAssignment:
    """``name INTEGER ::= value``."""

    loc: Loc
    name: str
    type: TypeExpr
    value: int


Assignment = Union[TypeAssignment, ParamTypeAssignment, ValueAssignment]


@dataclass
class ModuleDefinition:
    """One parsed module definition."""

    name: str
    start_line: int
    end_line: int
    assignments: List[Assignment] = field(default_factory=list)

    def type_assignments(self) -> Sequence[TypeAssignment]:
        return [a for a in self.assignments if isinstance(a, TypeAssignment)]


__all__ = [
    "Loc",
    "Bound",
    "Constraint",
    "ContainingConstraint",
    "DefaultValue",
    "TypeExpr",
    "SequenceType",
    "SequenceOfType",
    "ChoiceType",
    "EnumeratedType",
    "IntegerType",
    "BitStringType",
    "OctetStringType",
    "BooleanType",
    "NullType",
    "RefType",
    "Component",
    "ExtensionMarker",
    "ExtensionGroup",
    "ComponentItem",
    "EnumValue",
    "TypeAssignment",
    "ParamTypeAssignment",
    "ValueAssignment",
    "Assignment",
    "ModuleDefinition",
]
