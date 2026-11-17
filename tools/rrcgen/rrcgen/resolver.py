"""Semantic resolution: symbol tables, type ids, anonymous type naming,
parameterized instance expansion, constraint evaluation, DEFAULT resolution,
cycle detection and AST statistics.
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import Dict, List, Optional, Sequence, Set, Tuple

from . import V1_MODULE, ast, models, names
from .diagnostics import DiagnosticCode, DiagnosticCollector
from .normalize import NormalizedSource
from .parser import loc_to_location

#: Registered message entry points (design document appendix A).
MESSAGE_ENTRIES: Sequence[Tuple[str, int, str, str, str]] = (
    # (MessageType enumerator, numeric value, ASN.1 type, access point, direction)
    ("BcchBchMessage", 1, "BCCH-BCH-Message", "BCCH-BCH", "Downlink"),
    ("BcchDlSchMessage", 2, "BCCH-DL-SCH-Message", "BCCH-DL-SCH", "Downlink"),
    ("DlCcchMessage", 3, "DL-CCCH-Message", "DL-CCCH", "Downlink"),
    ("DlDcchMessage", 4, "DL-DCCH-Message", "DL-DCCH", "Downlink"),
    ("McchMessageR17", 5, "MCCH-Message-r17", "MCCH", "Downlink"),
    ("MulticastMcchMessageR18", 6, "MulticastMCCH-Message-r18", "MulticastMCCH", "Downlink"),
    ("PcchMessage", 7, "PCCH-Message", "PCCH", "Downlink"),
    ("UlCcchMessage", 8, "UL-CCCH-Message", "UL-CCCH", "Uplink"),
    ("UlCcch1Message", 9, "UL-CCCH1-Message", "UL-CCCH1", "Uplink"),
    ("UlDcchMessage", 10, "UL-DCCH-Message", "UL-DCCH", "Uplink"),
)

#: Expected figures from design document appendix B (for the statistics report).
EXPECTED_STATS: Dict[str, object] = {
    "TopLevelTypeDefinitions": 2297,
    "Constants": 430,
    "AnonymousSequence": 728,
    "AnonymousChoice": 315,
    "AnonymousEnumerated": 3244,
    "AnonymousTotal": 4287,
    "SetupReleaseReferences": 318,
    "SetupReleaseDistinctArguments": 247,
    "GeneratedTypes": 6831,
    "ComponentCount": 10983,
    "OptionalComponents": 6675,
    "DefaultComponents": 19,
    "ContainingOpenTypes": 33,
    "ExtensionGroups": 535,
    "ExtensionGroupMembers": 1961,
    "DirectExtensionAdditions": 63,
    "ExtensionMarkers": 652,
    "SingleValueIntegers": 9,
    "SizeConstraints": 1653,
    "FixedSizeConstraints": 396,
    "SizeUpper65536": 50,
    "EnumValues": 11678,
    "SingleRootValueEnumerated": 1848,
    "SingleRootAlternativeChoices": 9,
    "EmptySequences": 110,
    "MaxConstant": 3279165,
    "MaxIntegerBitWidth": 40,
    "MaxSizeUpper": 65536,
    "TypeReferences": 4033,
    "ParameterizedTypeReferences": 318,
    "Messages": 10,
    "MinimumGroupMembers": None,
}


@dataclass
class _PendingDefault:
    field: models.FieldModel
    value: ast.DefaultValue
    type_id: int
    line: int


class Resolver:
    """Resolves the parsed AST into :class:`models.ResolvedModel`."""

    def __init__(
        self,
        source: NormalizedSource,
        modules: Sequence[ast.ModuleDefinition],
        diagnostics: DiagnosticCollector,
        module_name: str,
        asn_version: str,
    ) -> None:
        self._source = source
        self._modules = list(modules)
        self._diagnostics = diagnostics
        self._module_name = module_name
        self._asn_version = asn_version
        self._module: Optional[ast.ModuleDefinition] = None
        self._types_by_asn: Dict[str, models.TypeModel] = {}
        self._type_by_id: Dict[int, models.TypeModel] = {}
        self._types: List[models.TypeModel] = []  # insertion order == id order
        self._next_id = 1
        self._name_registry = names.NameRegistry()
        self._top_level_type_names: Set[str] = set()
        self._owner_shadowed_names: Dict[int, Set[str]] = {}
        self._field_names: Dict[int, Set[str]] = {}
        self._shadow_renames = 0
        self._param_defs: Dict[str, ast.ParamTypeAssignment] = {}
        self._constants: Dict[str, ast.ValueAssignment] = {}
        self._constant_order: List[ast.ValueAssignment] = []
        self._constant_models: List[models.ConstantModel] = []
        self._instances: Dict[str, models.TypeModel] = {}
        self._setup_references = 0
        self._pending_defaults: List[_PendingDefault] = []
        self._ast_stats: Dict[str, int] = {}
        self._message_models: List[models.MessageModel] = []

    # -- public API --------------------------------------------------------

    @staticmethod
    def _join_path(base: str, segment: str) -> str:
        return f"{base}.{segment}" if base else segment

    def resolve(self) -> models.ResolvedModel:
        self._find_module()
        self._collect_symbols()
        self._assign_top_level_types()
        self._populate_all_types()
        self._resolve_aliases()
        self._finalize_summaries()
        self._resolve_pending_defaults()
        self._collect_ast_statistics()
        self._check_structural_recursion()
        self._build_messages()
        result = models.ResolvedModel(
            types=self._types,
            constants=self._constant_models,
            messages=self._message_models,
            modules=self._build_modules(),
            input_file=self._source.file_name,
            input_sha256=self._source.sha256,
            asn_version=self._asn_version,
        )
        result.stats = self._compute_statistics()
        result.topological_types = self.topological_order()
        result.using_types = self.alias_using_order()
        return result

    # -- module / symbols --------------------------------------------------

    def _find_module(self) -> None:
        for module in self._modules:
            if module.name == self._module_name:
                self._module = module
                return
        self._diagnostics.error(
            DiagnosticCode.INPUT_INVALID,
            f"module '{self._module_name}' not found in input file",
        )
        self._module = ast.ModuleDefinition(name=self._module_name, start_line=0, end_line=0)

    def _collect_symbols(self) -> None:
        assert self._module is not None
        for assignment in self._module.assignments:
            if isinstance(assignment, ast.TypeAssignment):
                if assignment.name in self._types_by_asn or assignment.name in self._constants:
                    self._diagnostics.error(
                        DiagnosticCode.DUPLICATE_SYMBOL,
                        f"duplicate top-level symbol '{assignment.name}'",
                        loc_to_location(self._source, assignment.loc),
                    )
                    continue
                self._types_by_asn[assignment.name] = None  # reserved, filled later
            elif isinstance(assignment, ast.ParamTypeAssignment):
                if assignment.name in self._param_defs:
                    self._diagnostics.error(
                        DiagnosticCode.DUPLICATE_SYMBOL,
                        f"duplicate parameterized type '{assignment.name}'",
                        loc_to_location(self._source, assignment.loc),
                    )
                    continue
                self._param_defs[assignment.name] = assignment
            elif isinstance(assignment, ast.ValueAssignment):
                if assignment.name in self._types_by_asn or assignment.name in self._constants:
                    self._diagnostics.error(
                        DiagnosticCode.DUPLICATE_SYMBOL,
                        f"duplicate value symbol '{assignment.name}'",
                        loc_to_location(self._source, assignment.loc),
                    )
                    continue
                self._constants[assignment.name] = assignment
                self._constant_order.append(assignment)
            else:  # pragma: no cover - defensive
                self._diagnostics.error(
                    DiagnosticCode.INTERNAL,
                    f"unsupported assignment node {type(assignment).__name__}",
                )

        if self._param_defs and "SetupRelease" not in self._param_defs:
            for name in self._param_defs:
                self._diagnostics.warning(
                    DiagnosticCode.PARAM_INSTANTIATION,
                    f"parameterized type '{name}' is not supported by the resolver",
                )

        for assignment in self._constant_order:
            if not isinstance(assignment.type, ast.IntegerType):
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    f"constant '{assignment.name}' must have INTEGER type",
                    loc_to_location(self._source, assignment.loc),
                )
            self._constant_models.append(
                models.ConstantModel(
                    asn_name=assignment.name,
                    cpp_name=names.constant_name(assignment.name),
                    value=assignment.value,
                    line=assignment.loc.line,
                )
            )

    # -- top level types ---------------------------------------------------

    def _assign_top_level_types(self) -> None:
        assert self._module is not None
        # Register all top-level type names first so anonymous types can never
        # steal a name that belongs to a top-level definition.
        for assignment in self._module.assignments:
            if isinstance(assignment, ast.TypeAssignment):
                registered = self._name_registry.register(names.type_name(assignment.name))
                self._top_level_type_names.add(registered)

        for assignment in self._module.assignments:
            if isinstance(assignment, ast.TypeAssignment):
                model = self._new_type_model(
                    kind=self._kind_of(assignment.type),
                    cpp_name=names.type_name(assignment.name),
                    asn_name=assignment.name,
                    line=assignment.loc.line,
                    asn_path="",
                    anonymous=False,
                    reserve_name=False,
                )
                self._types_by_asn[assignment.name] = model
        # Constant names share the C++ namespace with type names.
        for constant in self._constant_models:
            if self._name_registry.is_used(constant.cpp_name):
                self._diagnostics.error(
                    DiagnosticCode.NAME_COLLISION,
                    f"constant '{constant.asn_name}' maps to already used name "
                    f"'{constant.cpp_name}'",
                )
                constant.cpp_name = names.limit_name(constant.cpp_name + "Constant")
            self._name_registry.register(constant.cpp_name)

    def _kind_of(self, expr: ast.TypeExpr) -> str:
        if isinstance(expr, ast.SequenceType):
            return models.KIND_SEQUENCE
        if isinstance(expr, ast.SequenceOfType):
            return models.KIND_SEQUENCE_OF
        if isinstance(expr, ast.ChoiceType):
            return models.KIND_CHOICE
        if isinstance(expr, ast.EnumeratedType):
            return models.KIND_ENUMERATED
        if isinstance(expr, ast.IntegerType):
            return models.KIND_INTEGER
        if isinstance(expr, ast.BitStringType):
            return models.KIND_BIT_STRING
        if isinstance(expr, ast.OctetStringType):
            return models.KIND_OCTET_STRING
        if isinstance(expr, ast.BooleanType):
            return models.KIND_BOOLEAN
        if isinstance(expr, ast.NullType):
            return models.KIND_NULL
        if isinstance(expr, ast.RefType):
            return models.KIND_ALIAS
        raise AssertionError(f"unknown AST type {type(expr).__name__}")

    def _new_type_model(
        self,
        kind: str,
        cpp_name: str,
        asn_name: Optional[str],
        line: int,
        asn_path: str,
        anonymous: bool,
        reserve_name: bool = True,
        synthetic_name: Optional[str] = None,
    ) -> models.TypeModel:
        if reserve_name:
            cpp_name = self._name_registry.register(cpp_name)
        model = models.TypeModel(
            id=self._next_id,
            kind=kind,
            cpp_name=cpp_name,
            asn_name=asn_name,
            synthetic_name=synthetic_name,
            asn_path=asn_path,
            module=self._module_name,
            line=line,
            tag=self._source.tag_for_line(line) or "",
            anonymous=anonymous,
            emits_cpp=kind in models.STRUCTURAL_KINDS,
            emits_traits=kind in models.STRUCTURAL_KINDS,
        )
        self._next_id += 1
        self._type_by_id[model.id] = model
        self._types.append(model)
        return model

    # -- body population ---------------------------------------------------

    def _populate_all_types(self) -> None:
        assert self._module is not None
        for assignment in self._module.assignments:
            if not isinstance(assignment, ast.TypeAssignment):
                continue
            model = self._types_by_asn.get(assignment.name)
            if model is None:
                continue
            self._populate_model(model, assignment.type)

    def _populate_model(self, model: models.TypeModel, expr: ast.TypeExpr) -> None:
        if isinstance(expr, ast.SequenceType):
            self._populate_sequence(model, expr)
        elif isinstance(expr, ast.ChoiceType):
            self._populate_choice(model, expr)
        elif isinstance(expr, ast.EnumeratedType):
            self._populate_enumerated(model, expr)
        elif isinstance(expr, ast.IntegerType):
            model.integer = self._eval_integer_constraint(model, expr.constraint)
        elif isinstance(expr, ast.BitStringType):
            model.size = self._eval_size_constraint(model, expr.constraint)
        elif isinstance(expr, ast.OctetStringType):
            model.size = self._eval_size_constraint(model, expr.size)
            if expr.containing is not None:
                model.contained_type_id = self._build_type(
                    expr.containing,
                    cpp_base=model.cpp_name + "Contained",
                    asn_path=self._join_path(model.asn_path, "Contained"),
                    line=model.line,
                )
        elif isinstance(expr, ast.SequenceOfType):
            model.size = self._eval_size_constraint(model, expr.size)
            if expr.size is None:
                self._diagnostics.warning(
                    DiagnosticCode.SIZE_MISSING,
                    f"SEQUENCE OF type '{model.cpp_name}' has no SIZE constraint",
                    loc_to_location(self._source, ast_loc(expr)),
                )
            model.element_type_id = self._build_type(
                expr.element,
                cpp_base=model.cpp_name + "Item",
                asn_path=self._join_path(model.asn_path, "Item"),
                line=model.line,
            )
        elif isinstance(expr, ast.BooleanType):
            model.integer = None
        elif isinstance(expr, ast.NullType):
            model.integer = None
        elif isinstance(expr, ast.RefType):
            # Alias: resolved later (target ids are already assigned).
            model.alias_of_id = 0
        else:  # pragma: no cover - defensive
            self._diagnostics.error(
                DiagnosticCode.INTERNAL,
                f"cannot populate model for {type(expr).__name__}",
            )

    def _populate_sequence(self, model: models.TypeModel, expr: ast.SequenceType) -> None:
        root_items, tail_items, marker_present = _split_extension_items(
            model, expr.items, self._source, self._diagnostics
        )
        shadowed: Set[str] = {model.cpp_name}
        for item in list(root_items) + list(tail_items):
            if isinstance(item, ast.Component):
                shadowed |= _collect_type_names(item.type, self._param_defs)
            elif isinstance(item, ast.ExtensionGroup):
                for member in item.members:
                    shadowed |= _collect_type_names(member.type, self._param_defs)
        self._owner_shadowed_names[model.id] = shadowed
        root_fields: List[models.FieldModel] = []
        for item in root_items:
            if isinstance(item, ast.Component):
                root_fields.append(
                    self._make_field(
                        model,
                        item,
                        in_extension=False,
                        is_group_member=False,
                        addition_index=0,
                        group_index=0,
                    )
                )
            elif isinstance(item, ast.ExtensionGroup):
                self._diagnostics.error(
                    DiagnosticCode.EXTENSION_ORDER,
                    f"extension addition group before extension marker in '{model.cpp_name}'",
                    loc_to_location(self._source, item.loc),
                )
            else:
                self._diagnostics.error(
                    DiagnosticCode.EXTENSION_ORDER,
                    f"unexpected extension marker order in '{model.cpp_name}'",
                    loc_to_location(self._source, item.loc),
                )

        addition_fields: List[models.FieldModel] = []
        groups: List[models.ExtensionGroupModel] = []
        group_ordinal = 0
        for addition_index, item in enumerate(tail_items):
            if isinstance(item, ast.Component):
                addition_fields.append(
                    self._make_field(
                        model,
                        item,
                        in_extension=True,
                        is_group_member=False,
                        addition_index=addition_index,
                        group_index=0,
                    )
                )
            elif isinstance(item, ast.ExtensionGroup):
                group_ordinal += 1
                members: List[models.FieldModel] = []
                for member in item.members:
                    field = self._make_field(
                        model,
                        member,
                        in_extension=True,
                        is_group_member=True,
                        addition_index=addition_index,
                        group_index=group_ordinal,
                    )
                    members.append(field)
                    addition_fields.append(field)
                groups.append(
                    models.ExtensionGroupModel(
                        addition_index=addition_index,
                        members=members,
                        line=item.loc.line,
                    )
                )
            else:  # pragma: no cover - parser never emits markers in the tail
                self._diagnostics.error(
                    DiagnosticCode.EXTENSION_ORDER,
                    f"nested extension marker in '{model.cpp_name}'",
                    loc_to_location(self._source, item.loc),
                )

        model.fields = root_fields + addition_fields
        model.groups = groups
        model.root_field_count = len(root_fields)
        model.extension_count = len(tail_items)
        model.extensible = marker_present

    def _populate_choice(self, model: models.TypeModel, expr: ast.ChoiceType) -> None:
        root_items, tail_items, marker_present = _split_extension_items(
            model, expr.items, self._source, self._diagnostics
        )
        root_fields: List[models.FieldModel] = []
        for item in root_items:
            if isinstance(item, ast.Component):
                root_fields.append(
                    self._make_field(
                        model,
                        item,
                        in_extension=False,
                        is_group_member=False,
                        addition_index=0,
                        group_index=0,
                    )
                )
            elif isinstance(item, ast.ExtensionGroup):
                self._diagnostics.error(
                    DiagnosticCode.EXTENSION_ORDER,
                    f"extension addition group before extension marker in '{model.cpp_name}'",
                    loc_to_location(self._source, item.loc),
                )
        extension_fields: List[models.FieldModel] = []
        for item in tail_items:
            if isinstance(item, ast.Component):
                extension_fields.append(
                    self._make_field(
                        model,
                        item,
                        in_extension=True,
                        is_group_member=False,
                        addition_index=len(extension_fields),
                        group_index=0,
                    )
                )
            elif isinstance(item, ast.ExtensionGroup):
                # Version brackets do not affect CHOICE encoding: flatten.
                for member in item.members:
                    extension_fields.append(
                        self._make_field(
                            model,
                            member,
                            in_extension=True,
                            is_group_member=False,
                            addition_index=len(extension_fields),
                            group_index=0,
                        )
                    )
        model.fields = root_fields + extension_fields
        model.root_count = len(root_fields)
        model.extension_count = len(extension_fields)
        model.root_field_count = 0
        model.extensible = marker_present

    def _populate_enumerated(self, model: models.TypeModel, expr: ast.EnumeratedType) -> None:
        marker_present = False
        root_items: List[ast.EnumValue] = []
        extension_items: List[ast.EnumValue] = []
        for item in expr.items:
            if isinstance(item, ast.ExtensionMarker):
                if marker_present:
                    self._diagnostics.error(
                        DiagnosticCode.EXTENSION_ORDER,
                        f"multiple extension markers in ENUMERATED '{model.cpp_name}'",
                        loc_to_location(self._source, item.loc),
                    )
                marker_present = True
                continue
            if marker_present:
                extension_items.append(item)
            else:
                root_items.append(item)

        root_count = len(root_items)
        used: Set[str] = set()
        values: List[models.EnumValueModel] = []
        for index, item in enumerate(root_items):
            cpp = names.enum_value_name(item.name)
            if cpp in used:
                self._diagnostics.error(
                    DiagnosticCode.NAME_COLLISION,
                    f"duplicate enumerated value '{item.name}' in '{model.cpp_name}'",
                    loc_to_location(self._source, item.loc),
                )
                cpp = f"{cpp}_2"
            used.add(cpp)
            values.append(
                models.EnumValueModel(
                    asn_name=item.name,
                    cpp_name=cpp,
                    value=item.number if item.number is not None else index,
                    is_extension=False,
                    line=item.loc.line,
                )
            )
        for index, item in enumerate(extension_items):
            cpp = names.enum_value_name(item.name)
            if cpp in used:
                self._diagnostics.error(
                    DiagnosticCode.NAME_COLLISION,
                    f"duplicate enumerated value '{item.name}' in '{model.cpp_name}'",
                    loc_to_location(self._source, item.loc),
                )
                cpp = f"{cpp}_2"
            used.add(cpp)
            values.append(
                models.EnumValueModel(
                    asn_name=item.name,
                    cpp_name=cpp,
                    value=item.number if item.number is not None else root_count + index,
                    is_extension=True,
                    line=item.loc.line,
                )
            )
        model.enum_values = values
        model.root_count = root_count
        model.extension_count = len(extension_items)
        model.extensible = marker_present

    def _make_field(
        self,
        owner: models.TypeModel,
        component: ast.Component,
        in_extension: bool,
        is_group_member: bool,
        addition_index: int,
        group_index: int,
    ) -> models.FieldModel:
        cpp_name = names.member_name(component.name)
        used = self._field_names.setdefault(owner.id, set())
        if owner.kind == models.KIND_SEQUENCE and (
            cpp_name == owner.cpp_name
            or cpp_name in self._owner_shadowed_names.get(owner.id, frozenset())
        ):
            # A data member hides the namespace-scope type of the same name for
            # every later declaration inside the struct; suffix it to keep the
            # generated struct valid C++.
            cpp_name = cpp_name + "Field"
            self._shadow_renames += 1
        if cpp_name in used:
            self._diagnostics.error(
                DiagnosticCode.NAME_COLLISION,
                f"duplicate field name '{component.name}' in '{owner.cpp_name}'",
                loc_to_location(self._source, component.loc),
            )
            counter = 2
            while f"{cpp_name}_{counter}" in used:
                counter += 1
            cpp_name = f"{cpp_name}_{counter}"
        used.add(cpp_name)
        if owner.kind == models.KIND_CHOICE and component.presence != models.PRESENCE_MANDATORY:
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"CHOICE alternative '{component.name}' cannot be OPTIONAL/DEFAULT",
                loc_to_location(self._source, component.loc),
            )
        child_cpp_base = owner.cpp_name + cpp_name
        child_type_id = self._build_type(
            component.type,
            cpp_base=child_cpp_base,
            asn_path=self._join_path(owner.asn_path, component.name),
            line=component.loc.line,
        )
        field = models.FieldModel(
            asn_name=component.name,
            cpp_name=cpp_name,
            type_id=child_type_id,
            presence=component.presence,
            in_extension=in_extension,
            is_group_member=is_group_member,
            extension_addition_index=addition_index,
            extension_group_index=group_index,
            comment=component.comment,
            line=component.loc.line,
            type_asn=_describe_type(component.type),
        )
        if component.default is not None:
            field.has_default = True
            self._pending_defaults.append(
                _PendingDefault(
                    field=field,
                    value=component.default,
                    type_id=child_type_id,
                    line=component.loc.line,
                )
            )
        return field

    def _build_type(
        self,
        expr: ast.TypeExpr,
        cpp_base: str,
        asn_path: str,
        line: int,
    ) -> int:
        if isinstance(expr, ast.RefType):
            return self._resolve_reference(expr, line)
        kind = self._kind_of(expr)
        model = self._new_type_model(
            kind=kind,
            cpp_name=cpp_base,
            asn_name=None,
            line=line,
            asn_path=asn_path,
            anonymous=kind in models.STRUCTURAL_KINDS,
            synthetic_name=("" if asn_path == "" else asn_path.replace(".", "/")),
        )
        self._populate_model(model, expr)
        return model.id

    def _resolve_reference(self, expr: ast.RefType, line: int) -> int:
        if expr.name in self._param_defs:
            return self._instantiate_parameterized(expr, line)
        target = self._types_by_asn.get(expr.name)
        if target is None:
            self._diagnostics.error(
                DiagnosticCode.UNRESOLVED_REFERENCE,
                f"unresolved type reference '{expr.name}'",
                loc_to_location(self._source, ast_loc(expr)),
            )
            return 0
        return target.id

    # -- parameterized SetupRelease ---------------------------------------

    def _instantiate_parameterized(self, expr: ast.RefType, line: int) -> int:
        self._setup_references += 1
        if len(expr.args) != 1:
            self._diagnostics.error(
                DiagnosticCode.PARAM_INSTANTIATION,
                f"parameterized type '{expr.name}' requires exactly one type argument",
                loc_to_location(self._source, ast_loc(expr)),
            )
            return 0
        argument = expr.args[0]
        key = _type_key(argument)
        cached = self._instances.get(key)
        if cached is not None:
            return cached.id
        argument_cpp = _argument_cpp_name(argument)
        model = self._new_type_model(
            kind=models.KIND_CHOICE,
            cpp_name="SetupReleaseOf" + argument_cpp,
            asn_name=None,
            line=line,
            asn_path="",
            anonymous=False,
            synthetic_name="SetupRelease" + argument_cpp,
        )
        setup_type_id = self._build_type(
            argument,
            cpp_base=model.cpp_name + "Setup",
            asn_path="",
            line=line,
        )
        release_type_id = self._new_type_model(
            kind=models.KIND_NULL,
            cpp_name=self._name_registry.register(model.cpp_name + "Release"),
            asn_name=None,
            line=line,
            asn_path="",
            anonymous=False,
        ).id
        model.fields = [
            models.FieldModel(
                asn_name="release",
                cpp_name="Release",
                type_id=release_type_id,
                presence=models.PRESENCE_MANDATORY,
                line=line,
            ),
            models.FieldModel(
                asn_name="setup",
                cpp_name="Setup",
                type_id=setup_type_id,
                presence=models.PRESENCE_MANDATORY,
                line=line,
            ),
        ]
        model.root_count = 2
        model.extension_count = 0
        model.root_field_count = 0
        self._instances[key] = model
        return model.id

    # -- constraints -------------------------------------------------------

    def _constant_value(self, name: str, loc: ast.Loc) -> Optional[int]:
        assignment = self._constants.get(name)
        if assignment is None:
            self._diagnostics.error(
                DiagnosticCode.CONSTRAINT_INVALID,
                f"unknown constant '{name}' in constraint",
                loc_to_location(self._source, loc),
            )
            return None
        return assignment.value

    def _eval_bound(self, bound: ast.Bound, loc: ast.Loc) -> Optional[int]:
        if bound.kind == "int":
            assert isinstance(bound.value, int)
            return bound.value
        if bound.kind == "ref":
            assert isinstance(bound.value, str)
            return self._constant_value(bound.value, loc)
        self._diagnostics.error(
            DiagnosticCode.CONSTRAINT_INVALID,
            f"MIN/MAX constraint bounds are not supported by the v1 descriptor model",
            loc_to_location(self._source, loc),
        )
        return None

    def _eval_integer_constraint(
        self,
        model: models.TypeModel,
        constraint: Optional[ast.Constraint],
    ) -> models.IntegerConstraint:
        if constraint is None:
            return models.IntegerConstraint(kind="None")
        if constraint.kind == "single":
            value = self._eval_bound(constraint.lower, constraint.loc)
            if value is None:
                return models.IntegerConstraint(kind="None")
            return models.IntegerConstraint(
                kind="SingleValue",
                lower=value,
                upper=value,
                bit_width=0,
            )
        if constraint.kind not in ("range", "size_range", "size_fixed"):
            return models.IntegerConstraint(kind="None")
        lower = self._eval_bound(constraint.lower, constraint.loc)
        upper = self._eval_bound(constraint.upper, constraint.loc) if constraint.upper else None
        if lower is None or upper is None:
            return models.IntegerConstraint(kind="None")
        if upper < lower:
            self._diagnostics.error(
                DiagnosticCode.CONSTRAINT_INVALID,
                f"integer constraint for '{model.cpp_name}' has upper < lower",
                loc_to_location(self._source, constraint.loc),
            )
            return models.IntegerConstraint(kind="None")
        kind = "ExtensibleRange" if constraint.extensible else "ValueRange"
        return models.IntegerConstraint(
            kind=kind,
            lower=lower,
            upper=upper,
            bit_width=(upper - lower).bit_length(),
            is_extensible=constraint.extensible,
        )

    def _eval_size_constraint(
        self,
        model: models.TypeModel,
        constraint: Optional[ast.Constraint],
    ) -> models.SizeConstraint:
        if constraint is None:
            return models.SizeConstraint(kind="None")
        if constraint.kind in ("single", "size_fixed"):
            value = self._eval_bound(constraint.lower, constraint.loc)
            if value is None:
                return models.SizeConstraint(kind="None")
            if value < 0:
                self._diagnostics.error(
                    DiagnosticCode.CONSTRAINT_INVALID,
                    f"negative SIZE bound for '{model.cpp_name}'",
                    loc_to_location(self._source, constraint.loc),
                )
                return models.SizeConstraint(kind="None")
            return models.SizeConstraint(
                kind="SizeFixed",
                lower=value,
                upper=value,
                length_bit_width=0,
                is_extensible=constraint.extensible,
            )
        lower = self._eval_bound(constraint.lower, constraint.loc)
        upper = self._eval_bound(constraint.upper, constraint.loc) if constraint.upper else None
        if lower is None or upper is None:
            return models.SizeConstraint(kind="None")
        if upper < lower:
            self._diagnostics.error(
                DiagnosticCode.CONSTRAINT_INVALID,
                f"SIZE constraint for '{model.cpp_name}' has upper < lower",
                loc_to_location(self._source, constraint.loc),
            )
            return models.SizeConstraint(kind="None")
        if upper >= 65536:
            length_bit_width = 0
        else:
            length_bit_width = (upper - lower).bit_length()
        kind = "ExtensibleRange" if constraint.extensible else "SizeRange"
        return models.SizeConstraint(
            kind=kind,
            lower=lower,
            upper=upper,
            length_bit_width=length_bit_width,
            is_extensible=constraint.extensible,
        )

    # -- aliases / defaults ------------------------------------------------

    def _resolve_aliases(self) -> None:
        for model in self._types:
            if model.kind != models.KIND_ALIAS:
                continue
            assert model.asn_name is not None
            ast_assignment = self._find_assignment(model.asn_name)
            if ast_assignment is None or not isinstance(ast_assignment.type, ast.RefType):
                self._diagnostics.error(
                    DiagnosticCode.INTERNAL,
                    f"alias '{model.asn_name}' has no reference target",
                )
                continue
            target = self._types_by_asn.get(ast_assignment.type.name)
            if target is None:
                self._diagnostics.error(
                    DiagnosticCode.UNRESOLVED_REFERENCE,
                    f"unresolved alias target '{ast_assignment.type.name}'",
                    loc_to_location(self._source, ast_loc(ast_assignment.type)),
                )
                continue
            model.alias_of_id = target.id

    def _find_assignment(self, name: str) -> Optional[ast.TypeAssignment]:
        assert self._module is not None
        for assignment in self._module.assignments:
            if isinstance(assignment, ast.TypeAssignment) and assignment.name == name:
                return assignment
        return None

    def _finalize_summaries(self) -> None:
        for model in self._types:
            model.asn_summary = _summarize_model(model, self._type_by_id)

    def ultimate_type(self, model: models.TypeModel) -> models.TypeModel:
        """Follow alias targets to the concrete type."""
        seen: Set[int] = set()
        current = model
        while current.kind == models.KIND_ALIAS and current.alias_of_id != 0:
            if current.id in seen:  # pragma: no cover - cyclic alias guard
                return current
            seen.add(current.id)
            current = self._type_by_id[current.alias_of_id]
        return current

    def _resolve_pending_defaults(self) -> None:
        for pending in self._pending_defaults:
            field = pending.field
            value = pending.value
            target = self._type_by_id.get(pending.type_id)
            if target is None:
                continue
            concrete = self.ultimate_type(target)
            if value.kind == "int":
                if concrete.kind != models.KIND_INTEGER:
                    self._diagnostics.error(
                        DiagnosticCode.DEFAULT_INVALID,
                        f"DEFAULT integer for field '{field.asn_name}' of "
                        f"'{concrete.cpp_name}' which is not INTEGER",
                    )
                    continue
                field.default_value = int(value.value)  # type: ignore[arg-type]
                field.default_is_boolean = False
                field.default_cpp_expr = str(field.default_value)
                continue
            if value.kind == "bool":
                if concrete.kind != models.KIND_BOOLEAN:
                    self._diagnostics.error(
                        DiagnosticCode.DEFAULT_INVALID,
                        f"DEFAULT boolean for field '{field.asn_name}' of "
                        f"'{concrete.cpp_name}' which is not BOOLEAN",
                    )
                    continue
                field.default_value = 1 if value.value else 0
                field.default_is_boolean = True
                field.default_cpp_expr = "true" if value.value else "false"
                continue
            # Reference (enumeration literal).
            literal = str(value.value)
            if concrete.kind != models.KIND_ENUMERATED:
                self._diagnostics.error(
                    DiagnosticCode.DEFAULT_INVALID,
                    f"DEFAULT literal '{literal}' for field '{field.asn_name}' of "
                    f"'{concrete.cpp_name}' which is not ENUMERATED",
                )
                continue
            matched = None
            for enum_value in concrete.enum_values:
                if enum_value.asn_name == literal:
                    matched = enum_value
                    break
            if matched is None:
                self._diagnostics.error(
                    DiagnosticCode.DEFAULT_INVALID,
                    f"DEFAULT literal '{literal}' is not a value of '{concrete.cpp_name}'",
                )
                continue
            field.default_value = matched.value
            field.default_is_boolean = False
            field.default_cpp_expr = _enum_default_cpp_expr(concrete, matched)
            field.default_enum_cpp = concrete.cpp_name

    # -- messages ----------------------------------------------------------

    def _build_messages(self) -> None:
        if self._module_name != V1_MODULE:
            # The message registry is fixed for the real 38.331 module; synthetic
            # test modules do not have to define the 10 Uu message wrappers.
            return
        for message_type, value, asn_name, access_point, direction in MESSAGE_ENTRIES:
            model = self._types_by_asn.get(asn_name)
            if model is None:
                self._diagnostics.error(
                    DiagnosticCode.UNRESOLVED_REFERENCE,
                    f"message entry '{asn_name}' not found",
                )
                continue
            self._message_models.append(
                models.MessageModel(
                    message_type=message_type,
                    value=value,
                    asn_name=asn_name,
                    cpp_name=model.cpp_name,
                    access_point=access_point,
                    direction=direction,
                    root_type_id=model.id,
                    root_cpp_name=model.cpp_name,
                )
            )

    # -- modules -----------------------------------------------------------

    def _build_modules(self) -> List[models.ModuleModel]:
        result: List[models.ModuleModel] = []
        for module in self._modules:
            parsed = module.name == self._module_name
            count = 0
            if parsed:
                count = sum(
                    1 for a in module.assignments if isinstance(a, ast.TypeAssignment)
                ) + sum(
                    1 for a in module.assignments if isinstance(a, ast.ParamTypeAssignment)
                )
            result.append(
                models.ModuleModel(
                    name=module.name,
                    start_line=module.start_line,
                    end_line=module.end_line,
                    type_count=count,
                    parsed=parsed,
                )
            )
        return result

    # -- statistics --------------------------------------------------------

    def _collect_ast_statistics(self) -> None:
        stats: Dict[str, int] = {}

        def bump(key: str, amount: int = 1) -> None:
            stats[key] = stats.get(key, 0) + amount

        def walk_type(expr: ast.TypeExpr) -> None:
            if isinstance(expr, ast.SequenceType):
                bump("SequenceNodes")
                if not expr.items:
                    bump("EmptySequences")
                walk_components(expr.items, "Sequence")
            elif isinstance(expr, ast.ChoiceType):
                bump("ChoiceNodes")
                root_alternatives = 0
                marker_seen = False
                for item in expr.items:
                    if isinstance(item, ast.ExtensionMarker):
                        marker_seen = True
                        break
                    if isinstance(item, ast.Component):
                        root_alternatives += 1
                if root_alternatives == 1:
                    bump("SingleRootAlternativeChoicesAll")
                    if marker_seen:
                        bump("SingleRootAlternativeChoices")
                walk_components(expr.items, "Choice")
            elif isinstance(expr, ast.EnumeratedType):
                bump("EnumeratedNodes")
                marker_seen = False
                root_values = 0
                extension_values = 0
                for item in expr.items:
                    if isinstance(item, ast.ExtensionMarker):
                        marker_seen = True
                        bump("ExtensionMarkers")
                    else:
                        bump("EnumValues")
                        if marker_seen:
                            extension_values += 1
                        else:
                            root_values += 1
                if marker_seen:
                    bump("ExtensibleEnumerated")
                if root_values == 1:
                    bump("SingleRootValueEnumerated")
            elif isinstance(expr, ast.IntegerType):
                bump("IntegerNodes")
                if expr.constraint is not None:
                    if expr.constraint.kind == "single":
                        bump("SingleValueIntegersWritten")
            elif isinstance(expr, ast.SequenceOfType):
                bump("SequenceOfNodes")
                if expr.size is not None:
                    bump("SizeConstraints")
                    bounds = self._resolved_bounds(expr.size)
                    if bounds is not None:
                        lower, upper = bounds
                        if lower == upper:
                            bump("FixedSizeConstraints")
                        if upper == 65536:
                            bump("SizeUpper65536")
                            bump("SizeUpper65536SequenceOf")
                        stats["MaxSizeUpper"] = max(stats.get("MaxSizeUpper", 0), upper)
                walk_type(expr.element)
            elif isinstance(expr, ast.BitStringType):
                bump("BitStringNodes")
                if expr.constraint is not None:
                    bump("SizeConstraints")
                    bounds = self._resolved_bounds(expr.constraint)
                    if bounds is not None:
                        lower, upper = bounds
                        if lower == upper:
                            bump("FixedSizeConstraints")
                        if upper == 65536:
                            bump("SizeUpper65536")
                            bump("SizeUpper65536BitString")
                        stats["MaxSizeUpper"] = max(stats.get("MaxSizeUpper", 0), upper)
            elif isinstance(expr, ast.OctetStringType):
                bump("OctetStringNodes")
                if expr.containing is not None:
                    bump("ContainingOpenTypes")
                if expr.size is not None:
                    bump("SizeConstraints")
                    bounds = self._resolved_bounds(expr.size)
                    if bounds is not None:
                        lower, upper = bounds
                        if lower == upper:
                            bump("FixedSizeConstraints")
                        if upper == 65536:
                            bump("SizeUpper65536")
                            bump("SizeUpper65536OctetString")
                        stats["MaxSizeUpper"] = max(stats.get("MaxSizeUpper", 0), upper)
            elif isinstance(expr, ast.BooleanType):
                bump("BooleanNodes")
            elif isinstance(expr, ast.NullType):
                bump("NullNodes")
            elif isinstance(expr, ast.RefType):
                if expr.name in self._param_defs:
                    bump("ParameterizedTypeReferences")
                else:
                    bump("TypeReferences")

        def walk_components(items: Sequence[ast.ComponentItem], container: str) -> None:
            marker_seen = False
            for item in items:
                if isinstance(item, ast.ExtensionMarker):
                    marker_seen = True
                    bump("ExtensionMarkers")
                    if container == "Sequence":
                        bump("ExtensibleSequences")
                    elif container == "Choice":
                        bump("ExtensibleChoices")
                    continue
                if isinstance(item, ast.ExtensionGroup):
                    bump("ExtensionGroups")
                    bump("ExtensionGroupMembers", len(item.members))
                    for member in item.members:
                        walk_component(member, container)
                    continue
                if marker_seen:
                    bump("DirectExtensionAdditions")
                walk_component(item, container)

        def walk_component(component: ast.Component, container: str) -> None:
            bump("ComponentCount")
            if component.presence == models.PRESENCE_OPTIONAL:
                bump("OptionalComponents")
            elif component.presence == models.PRESENCE_DEFAULT:
                bump("DefaultComponents")
            walk_type(component.type)

        assert self._module is not None
        for assignment in self._module.assignments:
            if isinstance(assignment, ast.TypeAssignment):
                walk_type(assignment.type)
            elif isinstance(assignment, ast.ParamTypeAssignment):
                walk_type(assignment.type)
        # Maximum integer bit width (computed from resolved constraints).
        max_bit_width = 0
        max_bit_width_appendix = 0
        single_value_after_evaluation = 0
        for model in self._types:
            if model.integer is None or model.integer.kind == "None":
                continue
            max_bit_width = max(max_bit_width, model.integer.bit_width)
            max_bit_width_appendix = max(
                max_bit_width_appendix,
                (model.integer.upper - model.integer.lower + 1).bit_length(),
            )
            if (
                model.integer.kind in ("ValueRange", "ExtensibleRange")
                and model.integer.lower == model.integer.upper
            ):
                single_value_after_evaluation += 1
        stats["MaxIntegerBitWidth"] = max_bit_width
        stats["MaxIntegerBitWidthAppendixFormula"] = max_bit_width_appendix
        stats["SingleValueIntegersWritten"] = stats.get("SingleValueIntegersWritten", 0)
        stats["SingleValueIntegers"] = (
            stats.get("SingleValueIntegersWritten", 0) + single_value_after_evaluation
        )
        stats["SingleValueIntegersAfterEvaluation"] = single_value_after_evaluation
        max_constant = max((c.value for c in self._constant_models), default=0)
        stats["MaxConstant"] = max_constant
        stats["MaxConstantName"] = max(
            self._constant_models, key=lambda c: c.value, default=models.ConstantModel("", "", 0, 0)
        ).asn_name
        self._ast_stats = stats

    # -- cycles ------------------------------------------------------------

    def _resolved_bounds(
        self,
        constraint: ast.Constraint,
    ) -> Optional[Tuple[int, int]]:
        """Resolve a SIZE constraint to integer bounds (constants substituted)."""
        if constraint.lower.kind == "int":
            lower: Optional[int] = int(constraint.lower.value)  # type: ignore[arg-type]
        elif constraint.lower.kind == "ref":
            assignment = self._constants.get(str(constraint.lower.value))
            lower = assignment.value if assignment is not None else None
        else:
            lower = None
        if constraint.upper is None:
            upper = lower
        elif constraint.upper.kind == "int":
            upper = int(constraint.upper.value)  # type: ignore[arg-type]
        elif constraint.upper.kind == "ref":
            assignment = self._constants.get(str(constraint.upper.value))
            upper = assignment.value if assignment is not None else None
        else:
            upper = None
        if lower is None or upper is None:
            return None
        return lower, upper

    def _check_structural_recursion(self) -> None:
        by_value_edges = self._dependency_graph(include_containing=False)
        cycles = _find_cycle_nodes(by_value_edges)
        if cycles:
            self._diagnostics.error(
                DiagnosticCode.STRUCTURAL_RECURSION,
                f"structural recursion detected in types: {sorted(cycles)[:10]}",
            )
        self._stats_cycles_without_containing = len(cycles)
        with_containing = self._dependency_graph(include_containing=True)
        self._stats_cycles_with_containing = _count_strongly_connected(with_containing)

    def _type_edges(
        self,
        type_id: int,
        include_containing: bool,
        seen: Optional[Set[int]] = None,
        follow_sequences: bool = False,
    ) -> Set[int]:
        """Structural types embedded by *type_id* (recursively through aliases).

        ``SEQUENCE OF`` elements are only followed when *follow_sequences* is
        true: a ``std::vector<T>`` member is an indirection, so recursive
        ASN.1 types through ``SEQUENCE OF`` are valid C++ and are not reported
        as structural recursion.
        """
        if type_id == 0:
            return set()
        if seen is None:
            seen = set()
        if type_id in seen:
            return set()
        seen.add(type_id)
        model = self._type_by_id.get(type_id)
        if model is None:
            return set()
        if model.kind == models.KIND_ALIAS:
            return self._type_edges(
                model.alias_of_id, include_containing, seen, follow_sequences
            )
        if model.kind == models.KIND_SEQUENCE_OF:
            if not follow_sequences:
                return set()
            return self._type_edges(
                model.element_type_id, include_containing, seen, follow_sequences
            )
        if model.kind == models.KIND_OCTET_STRING:
            if include_containing and model.contained_type_id:
                return self._type_edges(
                    model.contained_type_id, include_containing, seen, follow_sequences
                )
            return set()
        if model.kind in models.STRUCTURAL_KINDS:
            return {model.id}
        return set()

    def _dependency_graph(self, include_containing: bool) -> Dict[int, Set[int]]:
        graph: Dict[int, Set[int]] = {}
        for model in self._types:
            if model.kind not in models.STRUCTURAL_KINDS:
                continue
            edges: Set[int] = set()
            for type_id in self._embedded_type_ids(model):
                for target in self._type_edges(type_id, include_containing):
                    if target != model.id:
                        edges.add(target)
            graph[model.id] = edges
        return graph

    # -- statistics / topological order -----------------------------------

    def _compute_statistics(self) -> dict:
        stats = dict(self._ast_stats)
        anonymous_sequence = sum(
            1
            for m in self._types
            if m.anonymous and m.kind == models.KIND_SEQUENCE
        )
        anonymous_choice = sum(
            1 for m in self._types if m.anonymous and m.kind == models.KIND_CHOICE
        )
        anonymous_enum = sum(
            1 for m in self._types if m.anonymous and m.kind == models.KIND_ENUMERATED
        )
        top_level_types = sum(
            1 for m in self._types if m.asn_name is not None and not m.anonymous
        )
        top_level_by_kind: Dict[str, int] = {}
        for model in self._types:
            if model.asn_name is None:
                continue
            top_level_by_kind[model.kind] = top_level_by_kind.get(model.kind, 0) + 1
        generated_types = sum(1 for m in self._types if m.has_descriptor)
        generated_cpp_types = sum(1 for m in self._types if m.emits_cpp)
        named_structural = sum(
            1
            for m in self._types
            if m.emits_traits
        )
        result = {
            "InputFile": self._source.file_name,
            "InputSha256": self._source.sha256,
            "AsnVersion": self._asn_version,
            "Module": self._module_name,
            "TopLevelTypeDefinitions": top_level_types
            + (1 if self._param_defs else 0),
            "TopLevelTypesByKind": dict(sorted(top_level_by_kind.items())),
            "ParameterizedTypeDefinitions": len(self._param_defs),
            "Constants": len(self._constant_models),
            "AnonymousSequence": anonymous_sequence,
            "AnonymousChoice": anonymous_choice,
            "AnonymousEnumerated": anonymous_enum,
            "AnonymousTotal": anonymous_sequence + anonymous_choice + anonymous_enum,
            "SetupReleaseReferences": self._setup_references,
            "SetupReleaseDistinctArguments": len(self._instances),
            "GeneratedTypes": generated_types,
            "GeneratedCppTypes": generated_cpp_types,
            "TypeTraitSpecializations": named_structural,
            "FieldTypeShadowRenames": getattr(self, "_shadow_renames", 0),
            "Messages": len(self._message_models),
            "CyclesIncludingContaining": getattr(
                self, "_stats_cycles_with_containing", 0
            ),
            "ValueCyclesWithoutContaining": getattr(
                self, "_stats_cycles_without_containing", 0
            ),
        }
        result.update(
            {
                key: value
                for key, value in stats.items()
                if key not in result
            }
        )
        # Comparison with design document appendix B.
        comparison: Dict[str, dict] = {}
        for key, expected in EXPECTED_STATS.items():
            if expected is None:
                continue
            actual = result.get(key)
            if actual is None:
                continue
            comparison[key] = {
                "Expected": expected,
                "Actual": actual,
                "Delta": actual - expected if isinstance(actual, int) else None,
            }
        result["AppendixBComparison"] = comparison
        return result

    def topological_order(self) -> List[models.TypeModel]:
        """Topologically order C++-emitting types (dependencies first)."""
        nodes = [m for m in self._types if m.emits_cpp]
        node_ids = {m.id for m in nodes}
        dependencies: Dict[int, Set[int]] = {}
        for model in nodes:
            deps: Set[int] = set()
            for value_type_id in self._embedded_type_ids(model):
                for dep in self._type_edges(value_type_id, False, follow_sequences=True):
                    if dep in node_ids and dep != model.id:
                        deps.add(dep)
            dependencies[model.id] = deps
        ordered: List[models.TypeModel] = []
        remaining = {m.id: set(dependencies[m.id]) for m in nodes}
        by_id = {m.id: m for m in nodes}
        while remaining:
            ready = sorted(node_id for node_id, deps in remaining.items() if not deps)
            if not ready:
                self._diagnostics.error(
                    DiagnosticCode.STRUCTURAL_RECURSION,
                    "cannot topologically order types (structural recursion)",
                )
                ordered.extend(by_id[node_id] for node_id in sorted(remaining))
                return ordered
            for node_id in ready:
                ordered.append(by_id[node_id])
                del remaining[node_id]
            for deps in remaining.values():
                deps.difference_update(ready)
        return ordered

    def _embedded_type_ids(self, model: models.TypeModel) -> List[int]:
        if model.kind in (models.KIND_SEQUENCE, models.KIND_CHOICE):
            return [field.type_id for field in model.fields]
        if model.kind == models.KIND_SEQUENCE_OF:
            return [model.element_type_id]
        return []

    def alias_using_order(self) -> List[models.TypeModel]:
        """Order the ``using`` declarations emitted into Schema.hpp."""
        usings = [
            m
            for m in self._types
            if m.emits_cpp and not m.emits_traits and m.kind != models.KIND_SEQUENCE_OF
        ]
        usings.extend(
            m for m in self._types if m.kind == models.KIND_SEQUENCE_OF and m.emits_cpp
        )
        by_id = {m.id: m for m in self._types}
        pending = {m.id: m for m in usings}
        ordered: List[models.TypeModel] = []
        while pending:
            progressed = False
            for node_id in sorted(pending):
                model = pending[node_id]
                dependency = self._using_dependency(model, by_id)
                if dependency is None or dependency not in pending:
                    ordered.append(model)
                    del pending[node_id]
                    progressed = True
                    break
            if not progressed:  # pragma: no cover - cycle guard
                ordered.extend(pending[node_id] for node_id in sorted(pending))
                break
        return ordered

    def _using_dependency(
        self,
        model: models.TypeModel,
        by_id: Dict[int, models.TypeModel],
    ) -> Optional[int]:
        if model.kind == models.KIND_ALIAS and model.alias_of_id:
            target = by_id.get(model.alias_of_id)
            if target is None:
                return None
            if not target.emits_traits:
                return target.id
            return None
        if model.kind == models.KIND_SEQUENCE_OF and model.element_type_id:
            element = by_id.get(model.element_type_id)
            if element is None:
                return None
            if not element.emits_traits:
                return element.id
            return None
        return None


# ---------------------------------------------------------------------------
# helpers
# ---------------------------------------------------------------------------


def ast_loc(expr: ast.TypeExpr) -> ast.Loc:
    return expr.loc


_ASN_KIND_TEXT = {
    models.KIND_SEQUENCE: "SEQUENCE",
    models.KIND_CHOICE: "CHOICE",
    models.KIND_ENUMERATED: "ENUMERATED",
    models.KIND_INTEGER: "INTEGER",
    models.KIND_BIT_STRING: "BIT STRING",
    models.KIND_OCTET_STRING: "OCTET STRING",
    models.KIND_BOOLEAN: "BOOLEAN",
    models.KIND_NULL: "NULL",
    models.KIND_SEQUENCE_OF: "SEQUENCE OF",
}


def _describe_type(expr: ast.TypeExpr, depth: int = 0) -> str:
    """Produce a compact one-line ASN.1 description for doc comments."""
    if depth > 2:
        return "..."
    if isinstance(expr, ast.RefType):
        if expr.args:
            return f"{expr.name} {{ {', '.join(_describe_type(a, depth + 1) for a in expr.args)} }}"
        return expr.name
    if isinstance(expr, ast.SequenceType):
        names = _component_names(expr.items)
        return _truncate(f"SEQUENCE {{ {', '.join(names)} }}")
    if isinstance(expr, ast.ChoiceType):
        names = _component_names(expr.items)
        return _truncate(f"CHOICE {{ {', '.join(names)} }}")
    if isinstance(expr, ast.EnumeratedType):
        names = [item.name for item in expr.items if isinstance(item, ast.EnumValue)]
        return _truncate(f"ENUMERATED {{ {', '.join(names)} }}")
    if isinstance(expr, ast.IntegerType):
        if expr.constraint is None:
            return "INTEGER"
        return _truncate(f"INTEGER {_describe_constraint(expr.constraint)}")
    if isinstance(expr, ast.BitStringType):
        if expr.constraint is None:
            return "BIT STRING"
        return _truncate(f"BIT STRING {_describe_constraint(expr.constraint)}")
    if isinstance(expr, ast.OctetStringType):
        if expr.containing is not None:
            return _truncate(f"OCTET STRING (CONTAINING {_describe_type(expr.containing, depth + 1)})")
        if expr.size is not None:
            return _truncate(f"OCTET STRING {_describe_constraint(expr.size)}")
        return "OCTET STRING"
    if isinstance(expr, ast.SequenceOfType):
        size = f" {_describe_constraint(expr.size)}" if expr.size is not None else ""
        return _truncate(f"SEQUENCE{size} OF {_describe_type(expr.element, depth + 1)}")
    if isinstance(expr, ast.BooleanType):
        return "BOOLEAN"
    if isinstance(expr, ast.NullType):
        return "NULL"
    return "?"


def _component_names(items: Sequence[ast.ComponentItem]) -> List[str]:
    names: List[str] = []
    for item in items:
        if isinstance(item, ast.Component):
            names.append(item.name)
        elif isinstance(item, ast.ExtensionGroup):
            names.append("[[...]]")
        else:
            names.append("...")
    return names


def _describe_constraint(constraint: ast.Constraint) -> str:
    if constraint.kind in ("single", "size_fixed"):
        return f"({constraint.lower})"
    upper = constraint.upper if constraint.upper is not None else ""
    if constraint.kind.startswith("size"):
        return f"(SIZE ({constraint.lower}..{upper}))"
    return f"({constraint.lower}..{upper})"


def _truncate(text: str, limit: int = 90) -> str:
    return text if len(text) <= limit else text[: limit - 3] + "..."


def _summarize_model(
    model: models.TypeModel,
    by_id: Dict[int, models.TypeModel],
) -> str:
    """One-line ASN.1 summary used by the generated doc comments."""
    kind_text = _ASN_KIND_TEXT.get(model.kind, model.kind)
    if model.kind == models.KIND_ALIAS:
        target = by_id.get(model.alias_of_id)
        target_name = "?" if target is None else (target.asn_name or target.cpp_name)
        detail = target_name
    elif model.kind == models.KIND_SEQUENCE:
        names = [field.asn_name for field in model.fields]
        detail = _truncate(f"{kind_text} {{ {', '.join(names)} }}", 80)
    elif model.kind == models.KIND_CHOICE:
        names = [field.asn_name for field in model.fields]
        detail = _truncate(f"{kind_text} {{ {', '.join(names)} }}", 80)
    elif model.kind == models.KIND_ENUMERATED:
        names = [value.asn_name for value in model.enum_values]
        detail = _truncate(f"{kind_text} {{ {', '.join(names)} }}", 80)
    elif model.kind == models.KIND_SEQUENCE_OF:
        element = by_id.get(model.element_type_id)
        element_name = "?" if element is None else (element.asn_name or element.cpp_name)
        detail = f"{kind_text} (size {model.size.lower}..{model.size.upper}) OF {element_name}" if model.size is not None else f"{kind_text} OF {element_name}"
    elif model.kind in (models.KIND_INTEGER, models.KIND_BIT_STRING, models.KIND_OCTET_STRING):
        if model.integer is not None and model.integer.kind != "None":
            lower = model.integer.lower
            upper = model.integer.upper
            detail = f"{kind_text} ({lower}..{upper})"
        elif model.size is not None and model.size.kind != "None":
            detail = f"{kind_text} (SIZE ({model.size.lower}..{model.size.upper}))"
        elif model.contained_type_id:
            target = by_id.get(model.contained_type_id)
            target_name = "?" if target is None else (target.asn_name or target.cpp_name)
            detail = f"OCTET STRING (CONTAINING {target_name})"
        else:
            detail = kind_text
    else:
        detail = kind_text
    if model.asn_name is not None:
        return f"{model.asn_name} ::= {detail}"
    return detail


def _collect_type_names(
    expr: ast.TypeExpr,
    param_defs: Dict[str, "ast.ParamTypeAssignment"],
) -> Set[str]:
    """Collect the C++ type names referenced by a type expression."""
    result: Set[str] = set()
    if isinstance(expr, ast.RefType):
        if expr.name in param_defs and len(expr.args) == 1:
            result.add("SetupReleaseOf" + _argument_cpp_name(expr.args[0]))
        else:
            result.add(names.type_name(expr.name))
        for argument in expr.args:
            result |= _collect_type_names(argument, param_defs)
        return result
    if isinstance(expr, ast.SequenceType):
        for item in expr.items:
            if isinstance(item, ast.Component):
                result |= _collect_type_names(item.type, param_defs)
            elif isinstance(item, ast.ExtensionGroup):
                for member in item.members:
                    result |= _collect_type_names(member.type, param_defs)
        return result
    if isinstance(expr, ast.ChoiceType):
        for item in expr.items:
            if isinstance(item, ast.Component):
                result |= _collect_type_names(item.type, param_defs)
            elif isinstance(item, ast.ExtensionGroup):
                for member in item.members:
                    result |= _collect_type_names(member.type, param_defs)
        return result
    if isinstance(expr, ast.SequenceOfType):
        return _collect_type_names(expr.element, param_defs)
    if isinstance(expr, ast.OctetStringType) and expr.containing is not None:
        return _collect_type_names(expr.containing, param_defs)
    return result


def _split_extension_items(
    model: models.TypeModel,
    items: Sequence[ast.ComponentItem],
    source: NormalizedSource,
    diagnostics: DiagnosticCollector,
) -> Tuple[List[ast.ComponentItem], List[ast.ComponentItem], bool]:
    marker_index = -1
    for index, item in enumerate(items):
        if isinstance(item, ast.ExtensionMarker):
            marker_index = index
            break
    if marker_index < 0:
        return list(items), [], False
    for item in items[marker_index + 1 :]:
        if isinstance(item, ast.ExtensionMarker):
            diagnostics.error(
                DiagnosticCode.EXTENSION_ORDER,
                f"multiple extension markers in '{model.cpp_name}'",
                loc_to_location(source, item.loc),
            )
    return list(items[:marker_index]), list(items[marker_index + 1 :]), True


def _literal_bounds(
    constraint: ast.Constraint,
    resolver: Resolver,
) -> Optional[Tuple[int, int]]:
    if constraint.lower.kind != "int":
        return None
    lower = int(constraint.lower.value)  # type: ignore[arg-type]
    if constraint.upper is not None:
        if constraint.upper.kind != "int":
            return None
        upper = int(constraint.upper.value)  # type: ignore[arg-type]
    else:
        upper = lower
    return lower, upper


def _type_key(expr: ast.TypeExpr) -> str:
    """Canonical key for parameterized instance deduplication."""
    if isinstance(expr, ast.RefType):
        if expr.args:
            return expr.name + "{" + ",".join(_type_key(arg) for arg in expr.args) + "}"
        return expr.name
    return repr(expr)


def _argument_cpp_name(expr: ast.TypeExpr) -> str:
    if isinstance(expr, ast.RefType):
        return names.type_name(expr.name)
    if isinstance(expr, ast.SequenceType):
        return "Sequence"
    if isinstance(expr, ast.ChoiceType):
        return "Choice"
    if isinstance(expr, ast.EnumeratedType):
        return "Enumerated"
    if isinstance(expr, ast.IntegerType):
        return "Integer"
    if isinstance(expr, ast.BitStringType):
        return "BitString"
    if isinstance(expr, ast.OctetStringType):
        return "OctetString"
    if isinstance(expr, ast.SequenceOfType):
        return "SequenceOf"
    if isinstance(expr, ast.BooleanType):
        return "Boolean"
    return "Null"


def _enum_default_cpp_expr(
    concrete: models.TypeModel,
    value: models.EnumValueModel,
) -> str:
    if concrete.extensible:
        return f"{concrete.cpp_name}({concrete.cpp_name}::Value::{value.cpp_name})"
    return f"{concrete.cpp_name}::{value.cpp_name}"


def _find_cycle_nodes(graph: Dict[int, Set[int]]) -> Set[int]:
    """Return the set of nodes participating in at least one directed cycle."""
    visiting: Set[int] = set()
    visited: Set[int] = set()
    cycle_nodes: Set[int] = set()

    def visit(node: int, stack: List[int]) -> None:
        if node in visited:
            return
        if node in visiting:
            # Mark the whole cycle portion of the stack.
            try:
                start = stack.index(node)
            except ValueError:  # pragma: no cover - defensive
                start = 0
            cycle_nodes.update(stack[start:])
            return
        visiting.add(node)
        stack.append(node)
        for successor in graph.get(node, ()):
            if successor in graph:
                visit(successor, stack)
        stack.pop()
        visiting.discard(node)
        visited.add(node)

    for node in sorted(graph):
        visit(node, [])
    return cycle_nodes


def _count_strongly_connected(graph: Dict[int, Set[int]]) -> int:
    """Count SCCs with more than one node (Tarjan)."""
    index_counter = [0]
    indices: Dict[int, int] = {}
    lowlinks: Dict[int, int] = {}
    on_stack: Set[int] = set()
    stack: List[int] = []
    count = 0

    def strongconnect(node: int) -> None:
        nonlocal count
        indices[node] = index_counter[0]
        lowlinks[node] = index_counter[0]
        index_counter[0] += 1
        stack.append(node)
        on_stack.add(node)
        for successor in graph.get(node, ()):
            if successor not in graph:
                continue
            if successor not in indices:
                strongconnect(successor)
                lowlinks[node] = min(lowlinks[node], lowlinks[successor])
            elif successor in on_stack:
                lowlinks[node] = min(lowlinks[node], indices[successor])
        if lowlinks[node] == indices[node]:
            component: List[int] = []
            while True:
                member = stack.pop()
                on_stack.discard(member)
                component.append(member)
                if member == node:
                    break
            if len(component) > 1:
                count += 1

    for node in sorted(graph):
        if node not in indices:
            strongconnect(node)
    return count


def resolve_source(
    source: NormalizedSource,
    modules: Sequence[ast.ModuleDefinition],
    diagnostics: DiagnosticCollector,
    module_name: str,
    asn_version: str,
) -> models.ResolvedModel:
    """Resolve a parsed module into the IR model."""
    return Resolver(source, modules, diagnostics, module_name, asn_version).resolve()
