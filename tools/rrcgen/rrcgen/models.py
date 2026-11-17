"""Resolved IR data model shared by the statistics, IR serializer and emitters."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Dict, List, Optional

# Type kind strings used by the IR.
KIND_SEQUENCE = "Sequence"
KIND_CHOICE = "Choice"
KIND_ENUMERATED = "Enumerated"
KIND_INTEGER = "Integer"
KIND_BIT_STRING = "BitString"
KIND_OCTET_STRING = "OctetString"
KIND_BOOLEAN = "Boolean"
KIND_NULL = "Null"
KIND_SEQUENCE_OF = "SequenceOf"
KIND_ALIAS = "Alias"

STRUCTURAL_KINDS = (KIND_SEQUENCE, KIND_CHOICE, KIND_ENUMERATED)
PRIMITIVE_KINDS = (KIND_INTEGER, KIND_BIT_STRING, KIND_OCTET_STRING, KIND_BOOLEAN, KIND_NULL)

PRESENCE_MANDATORY = "Mandatory"
PRESENCE_OPTIONAL = "Optional"
PRESENCE_DEFAULT = "Default"


@dataclass
class IntegerConstraint:
    """Evaluated INTEGER constraint."""

    kind: str = "None"  # None | ValueRange | SingleValue | ExtensibleRange
    lower: int = 0
    upper: int = 0
    bit_width: int = 0
    is_extensible: bool = False

    def to_json(self) -> dict:
        return {
            "Kind": self.kind,
            "Lower": self.lower,
            "Upper": self.upper,
            "BitWidth": self.bit_width,
            "IsExtensible": self.is_extensible,
        }


@dataclass
class SizeConstraint:
    """Evaluated SIZE constraint."""

    kind: str = "None"  # None | SizeRange | SizeFixed | ExtensibleRange
    lower: int = 0
    upper: int = 0
    length_bit_width: int = 0
    is_extensible: bool = False

    def to_json(self) -> dict:
        return {
            "Kind": self.kind,
            "Lower": self.lower,
            "Upper": self.upper,
            "LengthBitWidth": self.length_bit_width,
            "IsExtensible": self.is_extensible,
        }


@dataclass
class FieldModel:
    """A flattened SEQUENCE field or CHOICE alternative."""

    asn_name: str
    cpp_name: str
    type_id: int
    presence: str = PRESENCE_MANDATORY
    in_extension: bool = False
    is_group_member: bool = False
    extension_addition_index: int = 0
    extension_group_index: int = 0
    has_default: bool = False
    default_value: Optional[int] = None
    default_is_boolean: bool = False
    default_cpp_expr: str = ""
    default_enum_cpp: str = ""
    comment: str = ""
    line: int = 0
    type_asn: str = ""

    def to_json(self) -> dict:
        return {
            "AsnName": self.asn_name,
            "CppName": self.cpp_name,
            "TypeId": self.type_id,
            "Presence": self.presence,
            "InExtension": self.in_extension,
            "IsGroupMember": self.is_group_member,
            "ExtensionAdditionIndex": self.extension_addition_index,
            "ExtensionGroupIndex": self.extension_group_index,
            "HasDefault": self.has_default,
            "DefaultValue": self.default_value,
            "Comment": self.comment,
            "Line": self.line,
        }


@dataclass
class ExtensionGroupModel:
    """One ``[[ ... ]]`` extension addition group."""

    addition_index: int
    members: List[FieldModel] = field(default_factory=list)
    line: int = 0

    def to_json(self) -> dict:
        return {
            "AdditionIndex": self.addition_index,
            "Members": [member.to_json() for member in self.members],
            "Line": self.line,
        }


@dataclass
class EnumValueModel:
    """One ENUMERATED value."""

    asn_name: str
    cpp_name: str
    value: int
    is_extension: bool = False
    line: int = 0

    def to_json(self) -> dict:
        return {
            "AsnName": self.asn_name,
            "CppName": self.cpp_name,
            "Value": self.value,
            "IsExtension": self.is_extension,
        }


@dataclass
class TypeModel:
    """One IR type (named, anonymous, parameterized instance or inline type)."""

    id: int
    kind: str
    cpp_name: str
    asn_name: Optional[str] = None
    synthetic_name: Optional[str] = None
    asn_path: str = ""
    module: str = ""
    line: int = 0
    tag: str = ""
    extensible: bool = False
    # SEQUENCE / CHOICE
    fields: List[FieldModel] = field(default_factory=list)
    groups: List[ExtensionGroupModel] = field(default_factory=list)
    root_field_count: int = 0
    # CHOICE / ENUMERATED
    root_count: int = 0
    extension_count: int = 0
    enum_values: List[EnumValueModel] = field(default_factory=list)
    # constraints
    integer: Optional[IntegerConstraint] = None
    size: Optional[SizeConstraint] = None
    # relationships
    element_type_id: int = 0
    contained_type_id: int = 0
    alias_of_id: int = 0
    # classification
    emits_cpp: bool = False        # definition emitted into a TypesPart header
    emits_traits: bool = False     # TypeTraits specialization emitted
    has_descriptor: bool = True    # TypeDescriptor emitted
    is_parameterized_definition: bool = False
    anonymous: bool = False
    asn_summary: str = ""

    # -- derived helpers ---------------------------------------------------

    @property
    def field_count(self) -> int:
        return len(self.fields)

    @property
    def extension_addition_count(self) -> int:
        if self.kind == KIND_CHOICE:
            return self.extension_count
        if self.kind in (KIND_SEQUENCE, KIND_ENUMERATED):
            return self.extension_count
        return 0

    @property
    def is_structural(self) -> bool:
        return self.kind in STRUCTURAL_KINDS

    def to_json(self) -> dict:
        payload: dict = {
            "Id": self.id,
            "Name": self.asn_name,
            "CppName": self.cpp_name,
            "SyntheticName": self.synthetic_name,
            "AsnPath": self.asn_path,
            "Module": self.module,
            "Line": self.line,
            "Kind": self.kind,
            "Extensible": self.extensible,
            "TypeParam": None,
            "AliasOf": self.alias_of_id or None,
            "ContainedTypeId": self.contained_type_id,
            "ElementTypeId": self.element_type_id,
        }
        if self.is_parameterized_definition:
            payload["TypeParam"] = "ElementTypeParam"
        if self.kind in (KIND_SEQUENCE, KIND_CHOICE):
            payload["Fields"] = [field.to_json() for field in self.fields]
            payload["ChoiceAlternatives"] = (
                [field.to_json() for field in self.fields] if self.kind == KIND_CHOICE else []
            )
            payload["ExtensionGroups"] = [group.to_json() for group in self.groups]
        else:
            payload["Fields"] = []
            payload["ChoiceAlternatives"] = []
            payload["ExtensionGroups"] = []
        payload["Integer"] = self.integer.to_json() if self.integer is not None else None
        payload["Size"] = self.size.to_json() if self.size is not None else None
        payload["Enumerated"] = [value.to_json() for value in self.enum_values]
        return payload


@dataclass
class ConstantModel:
    """One resolved ASN.1 integer constant."""

    asn_name: str
    cpp_name: str
    value: int
    line: int

    def to_json(self) -> dict:
        return {
            "Name": self.asn_name,
            "CppName": self.cpp_name,
            "Value": self.value,
            "Line": self.line,
        }


@dataclass
class MessageModel:
    """One registered message entry point."""

    message_type: str  # MessageType enumerator, e.g. "BcchBchMessage"
    value: int
    asn_name: str
    cpp_name: str
    access_point: str
    direction: str
    root_type_id: int
    root_cpp_name: str = ""

    def to_json(self) -> dict:
        return {
            "Type": self.message_type,
            "Value": self.value,
            "AsnName": self.asn_name,
            "CppName": self.cpp_name,
            "AccessPoint": self.access_point,
            "Direction": self.direction,
            "RootTypeId": self.root_type_id,
        }


@dataclass
class ModuleModel:
    """One ASN.1 module found in the input file."""

    name: str
    start_line: int
    end_line: int
    type_count: int = 0
    parsed: bool = False

    def to_json(self) -> dict:
        return {
            "Name": self.name,
            "StartLine": self.start_line,
            "TypeCount": self.type_count,
        }


@dataclass
class ResolvedModel:
    """The complete resolved program."""

    types: List[TypeModel] = field(default_factory=list)
    constants: List[ConstantModel] = field(default_factory=list)
    messages: List[MessageModel] = field(default_factory=list)
    modules: List[ModuleModel] = field(default_factory=list)
    input_file: str = ""
    input_sha256: str = ""
    asn_version: str = ""
    stats: dict = field(default_factory=dict)
    topological_types: List[TypeModel] = field(default_factory=list)
    using_types: List[TypeModel] = field(default_factory=list)

    def type_by_id(self) -> Dict[int, TypeModel]:
        return {model.id: model for model in self.types}

    def named_type_by_asn_name(self) -> Dict[str, TypeModel]:
        result: Dict[str, TypeModel] = {}
        for model in self.types:
            if model.asn_name is not None:
                result[model.asn_name] = model
        return result


__all__ = [
    "KIND_SEQUENCE",
    "KIND_CHOICE",
    "KIND_ENUMERATED",
    "KIND_INTEGER",
    "KIND_BIT_STRING",
    "KIND_OCTET_STRING",
    "KIND_BOOLEAN",
    "KIND_NULL",
    "KIND_SEQUENCE_OF",
    "KIND_ALIAS",
    "STRUCTURAL_KINDS",
    "PRIMITIVE_KINDS",
    "PRESENCE_MANDATORY",
    "PRESENCE_OPTIONAL",
    "PRESENCE_DEFAULT",
    "IntegerConstraint",
    "SizeConstraint",
    "FieldModel",
    "ExtensionGroupModel",
    "EnumValueModel",
    "TypeModel",
    "ConstantModel",
    "MessageModel",
    "ModuleModel",
    "ResolvedModel",
]
