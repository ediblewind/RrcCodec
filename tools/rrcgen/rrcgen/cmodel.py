"""C emission model for the v2 generator.

把解析/解析后的 :class:`ResolvedModel` 转换为“发射模型”：

* 从 10 个信道 ``*-Message`` 入口提取 53 个实际消息、所属信道与包装位路径；
* 按方案第 3 章为顶层类型、匿名类型、``SetupRelease`` 实例、扩展组分配 C 名；
* 生成结构体布局（OPTIONAL/DEFAULT/CONTAINING/扩展组/直接扩展添加项）；
* 计算类型定义拓扑序与生成分块。

本模块不输出文本；文本由 ``emitters/`` 下的发射器产生。
"""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Dict, List, Optional, Sequence, Set, Tuple

from . import cnames
from .models import (
    KIND_ALIAS,
    KIND_BIT_STRING,
    KIND_BOOLEAN,
    KIND_CHOICE,
    KIND_ENUMERATED,
    KIND_INTEGER,
    KIND_NULL,
    KIND_OCTET_STRING,
    KIND_SEQUENCE,
    KIND_SEQUENCE_OF,
    PRESENCE_DEFAULT,
    PRESENCE_MANDATORY,
    PRESENCE_OPTIONAL,
    FieldModel,
    ResolvedModel,
    TypeModel,
)

UINT32_MAX = 0xFFFFFFFF

#: 信道入口顺序（38.331 的 10 个 *-Message）与方案附录 A 的包装位映射。
CHANNEL_BY_ACCESS_POINT: Dict[str, Tuple[int, str]] = {
    "BCCH-BCH": (1, "ChannelType_BCCH_BCH"),
    "BCCH-DL-SCH": (2, "ChannelType_BCCH_DL_SCH"),
    "DL-CCCH": (3, "ChannelType_DL_CCCH"),
    "DL-DCCH": (4, "ChannelType_DL_DCCH"),
    "MCCH": (5, "ChannelType_MCCH_r17"),
    "MulticastMCCH": (6, "ChannelType_MulticastMCCH_r18"),
    "PCCH": (7, "ChannelType_PCCH"),
    "UL-CCCH": (8, "ChannelType_UL_CCCH"),
    "UL-CCCH1": (9, "ChannelType_UL_CCCH1"),
    "UL-DCCH": (10, "ChannelType_UL_DCCH"),
}

#: 53 个实际消息（方案附录 A 的顺序；用于校验提取结果）。
EXPECTED_MESSAGES: List[str] = [
    "MIB",
    "SystemInformation",
    "SIB1",
    "RRCReject",
    "RRCSetup",
    "RRCReconfiguration",
    "RRCResume",
    "RRCRelease",
    "RRCReestablishment",
    "SecurityModeCommand",
    "DLInformationTransfer",
    "UECapabilityEnquiry",
    "CounterCheck",
    "MobilityFromNRCommand",
    "DLDedicatedMessageSegment-r16",
    "UEInformationRequest-r16",
    "DLInformationTransferMRDC-r16",
    "LoggedMeasurementConfiguration-r16",
    "MBSBroadcastConfiguration-r17",
    "MBSMulticastConfiguration-r18",
    "Paging",
    "RRCSetupRequest",
    "RRCResumeRequest",
    "RRCReestablishmentRequest",
    "RRCSystemInfoRequest",
    "RRCResumeRequest1",
    "MeasurementReport",
    "RRCReconfigurationComplete",
    "RRCSetupComplete",
    "RRCReestablishmentComplete",
    "RRCResumeComplete",
    "SecurityModeComplete",
    "SecurityModeFailure",
    "ULInformationTransfer",
    "LocationMeasurementIndication",
    "UECapabilityInformation",
    "CounterCheckResponse",
    "UEAssistanceInformation",
    "FailureInformation",
    "ULInformationTransferMRDC",
    "SCGFailureInformation",
    "SCGFailureInformationEUTRA",
    "ULDedicatedMessageSegment-r16",
    "DedicatedSIBRequest-r16",
    "MCGFailureInformation-r16",
    "UEInformationResponse-r16",
    "SidelinkUEInformationNR-r16",
    "ULInformationTransferIRAT-r16",
    "IABOtherInformation-r16",
    "MBSInterestIndication-r17",
    "UEPositioningAssistanceInfo-r17",
    "MeasurementReportAppLayer-r17",
    "IndirectPathFailureInformation-r18",
]


# ============================================================================
# 发射模型数据结构
# ============================================================================


@dataclass
class PathLevel:
    """包装层一级 CHOICE：期望索引、备选个数、各备选分类。"""

    index: int
    count: int
    #: 每个备选分类：'message:<ASN 名>' / 'spare' / 'placeholder' / 'wrapper'
    alternatives: List[str]


@dataclass
class MessageInfo:
    kind_value: int
    kind_name: str
    struct_cname: str
    asn_name: str
    channel_value: int
    channel_name: str
    type_id: int
    path: List[PathLevel] = field(default_factory=list)

    @property
    def kind_suffix(self) -> str:
        return self.kind_name[len("MessageKind_") :]


@dataclass
class EnumConstant:
    cname: str
    asn_name: str
    value: int
    is_extension: bool


@dataclass
class EnumDef:
    key: int
    cname: str
    asn_name: str
    line: int
    extensible: bool
    root_count: int
    constants: List[EnumConstant] = field(default_factory=list)

    @property
    def total_count(self) -> int:
        return len(self.constants)


@dataclass
class TypeRef:
    """字段/备选的 C 类型引用与编码约束。"""

    kind: str  # struct/enum/integer/bool/bitstring/octet/containing/seqof/inline_seqof/null
    cname: str = ""
    type_id: int = 0
    # INTEGER
    integer_lb: int = 0
    integer_ub: int = 0
    integer_single: bool = False
    # SIZE（BIT/OCTET STRING、SEQUENCE OF）
    size_lb: int = 0
    size_ub: int = 0
    size_fixed: bool = False
    size_unbounded: bool = False
    # 结构化
    enum: Optional[EnumDef] = None
    struct: Optional["StructDef"] = None
    target: Optional["TypeRef"] = None
    element: Optional["TypeRef"] = None

    def decl_type(self) -> str:
        """C 声明类型名（不含指针/数组；containing 返回内层类型）。"""
        if self.kind == "containing":
            assert self.target is not None
            return self.target.cname
        if self.kind == "null":
            return "Null"
        return self.cname


@dataclass
class FieldLayout:
    asn_name: str
    cname: str
    ref: TypeRef
    optional: bool = False
    has_name: str = ""
    default_expr: Optional[str] = None
    is_direct_addition: bool = False
    addition_index: Optional[int] = None
    group_ordinal: int = 0
    line: int = 0
    tag_constant: str = ""

    @property
    def is_containing(self) -> bool:
        return self.ref.kind == "containing"

    @property
    def is_inline_seqof(self) -> bool:
        return self.ref.kind == "inline_seqof"

    def value_decl(self) -> str:
        """值字段的 C 声明（不含 has_、不含行尾分号）。"""
        if self.is_containing:
            assert self.ref.target is not None
            return f"{self.ref.target.cname}* {self.cname}"
        if self.is_inline_seqof:
            assert self.ref.element is not None
            element_decl = self.ref.element.decl_type()
            return f"{element_decl}* {self.cname}_items; uint32_t {self.cname}_count"
        return f"{self.ref.decl_type()} {self.cname}"


@dataclass
class Addition:
    """一个扩展添加项（``[[ ]]`` 组或直接添加项）。"""

    index: int
    kind: str  # 'group' | 'field'
    group: Optional["GroupDef"] = None
    field_layout: Optional[FieldLayout] = None


@dataclass
class GroupDef:
    key: int
    cname: str
    parent_cname: str
    ordinal: int  # 1-based
    addition_index: int
    asn_name: str = ""
    line: int = 0
    model: Optional[object] = None
    parent_struct: Optional["StructDef"] = None
    topo_index: int = -1
    fields: List[FieldLayout] = field(default_factory=list)


@dataclass
class StructDef:
    key: int
    cname: str
    kind: str  # 'sequence' | 'choice' | 'empty' | 'seqof' | 'group'
    asn_name: str
    line: int
    model: Optional[TypeModel] = None
    extensible: bool = False
    # sequence
    root_fields: List[FieldLayout] = field(default_factory=list)
    group_defs: List[GroupDef] = field(default_factory=list)
    direct_additions: List[FieldLayout] = field(default_factory=list)
    additions: List[Addition] = field(default_factory=list)
    # choice
    alternatives: List[FieldLayout] = field(default_factory=list)
    root_count: int = 0
    extension_count: int = 0
    # seqof
    element: Optional[TypeRef] = None
    size_lb: int = 0
    size_ub: int = 0
    size_fixed: bool = False
    size_unbounded: bool = False
    # group
    group_ordinal: int = 0
    group_parent: Optional["StructDef"] = None
    tag_cname: str = ""
    tag_constants: List["EnumConstant"] = field(default_factory=list)
    # 排序键（越小越先定义/编码）
    sort_key: int = 0
    # 拓扑序（由 build_order 填充）
    topo_index: int = -1

    @property
    def is_empty_sequence(self) -> bool:
        return self.kind == "empty"


# ============================================================================
# 主构建器
# ============================================================================


class CModel:
    """把 ResolvedModel 转换为 C 发射模型。"""

    def __init__(self, model: ResolvedModel) -> None:
        self.model = model
        self.by_id: Dict[int, TypeModel] = {item.id: item for item in model.types}
        self.registry = cnames.NameRegistry()
        # 生成的名字映射
        self.type_cnames: Dict[int, str] = {}
        self.enum_defs: Dict[int, EnumDef] = {}
        self.struct_defs: Dict[int, StructDef] = {}
        self.group_defs: List[GroupDef] = []
        self.group_by_key: Dict[int, GroupDef] = {}
        # 顶层（命名）类型分类
        self.named_seqof: List[StructDef] = []
        self.named_primitives: List[Tuple[TypeModel, str]] = []
        self.named_aliases: List[Tuple[TypeModel, str]] = []
        self.named_structs: List[StructDef] = []
        self.named_enums: List[EnumDef] = []
        # SetupRelease 实例
        self.setup_release_ids: Set[int] = set()
        # 消息与包装层
        self.messages: List[MessageInfo] = []
        self.wrapper_type_ids: Set[int] = set()
        self.wrapper_closure: Set[int] = set()
        # 类型定义顺序
        self.ordered_structs: List[StructDef] = []
        # 生成统计
        self.stats: Dict[str, int] = {}
        self.renames: List[Tuple[str, str]] = []

        self._message_type_names: Dict[str, TypeModel] = {}
        self._cname_registered: Dict[int, str] = {}
        self._anon_visited: Set[int] = set()
        self._resolver = _TypeResolver(self)
        self._build()

    # -- 构建步骤 -----------------------------------------------------------

    def _build(self) -> None:
        self._extract_messages()
        self._register_named_types()
        self._register_setup_release_instances()
        self._assign_anonymous_names()
        self._validate_anonymous_coverage()
        self._build_layouts()
        self._compute_order()
        self.renames = list(self.registry.renames)
        self.stats = self._collect_stats()

    # ---- 消息提取 ---------------------------------------------------------

    def _classify_wrapper_alt(self, field: FieldModel) -> str:
        target = self.by_id[field.type_id]
        if target.asn_name in self._message_type_names:
            return "message:" + target.asn_name
        if target.kind == KIND_NULL:
            return "spare"
        if (
            target.kind == KIND_SEQUENCE
            and not target.fields
            and not target.extensible
        ):
            return "placeholder"
        if target.kind in (KIND_CHOICE, KIND_SEQUENCE):
            return "wrapper"
        raise ValueError(
            f"unsupported wrapper alternative '{field.asn_name}' ({target.kind})"
        )

    def _own_name(self, type_model: TypeModel) -> str:
        if type_model.asn_name:
            return type_model.asn_name
        if type_model.synthetic_name:
            return type_model.synthetic_name
        return f"anon<{type_model.id}>"

    def _extract_messages(self) -> None:
        self._message_type_names = {
            type_model.asn_name: type_model
            for type_model in self.model.types
            if type_model.asn_name in EXPECTED_MESSAGES
        }
        # 按 IR messages 顺序（Value 1..10，对应方案附录 A 的信道顺序）遍历。
        ordered_messages = sorted(self.model.messages, key=lambda item: item.value)
        for entry in ordered_messages:
            if entry.access_point not in CHANNEL_BY_ACCESS_POINT:
                raise ValueError(f"unknown access point {entry.access_point}")
            channel_value, channel_name = CHANNEL_BY_ACCESS_POINT[entry.access_point]
            root = self.by_id[entry.root_type_id]
            self._walk_wrapper(root, [], channel_value, channel_name)
        if [m.asn_name for m in self.messages] != EXPECTED_MESSAGES:
            actual = [m.asn_name for m in self.messages]
            raise ValueError(
                "message extraction mismatch:\n"
                f"  expected {EXPECTED_MESSAGES}\n  actual   {actual}"
            )
        for value, message in enumerate(self.messages, start=1):
            message.kind_value = value
            message.kind_name = "MessageKind_" + cnames.type_name(message.asn_name)

    def _walk_wrapper(
        self,
        type_model: TypeModel,
        path: List[PathLevel],
        channel_value: int,
        channel_name: str,
    ) -> None:
        if type_model.asn_name in self._message_type_names:
            self.messages.append(
                MessageInfo(
                    kind_value=0,
                    kind_name="",
                    struct_cname=self.type_cnames.get(type_model.id, "")
                    or cnames.type_name(type_model.asn_name or ""),
                    asn_name=type_model.asn_name or "",
                    channel_value=channel_value,
                    channel_name=channel_name,
                    type_id=type_model.id,
                    path=[
                        PathLevel(
                            index=level.index,
                            count=level.count,
                            alternatives=list(level.alternatives),
                        )
                        for level in path
                    ],
                )
            )
            return
        if type_model.kind == KIND_NULL:
            return
        if type_model.kind == KIND_SEQUENCE:
            self.wrapper_type_ids.add(type_model.id)
            if type_model.extensible:
                raise ValueError(
                    f"wrapper SEQUENCE '{self._own_name(type_model)}' must not be extensible"
                )
            for alt in type_model.fields:
                if alt.presence != PRESENCE_MANDATORY or alt.in_extension:
                    raise ValueError(
                        f"wrapper SEQUENCE '{self._own_name(type_model)}' has "
                        "non-mandatory field"
                    )
                child = self.by_id[alt.type_id]
                self._walk_wrapper(child, path, channel_value, channel_name)
            return
        if type_model.kind == KIND_CHOICE:
            self.wrapper_type_ids.add(type_model.id)
            if type_model.extensible:
                raise ValueError(
                    f"wrapper CHOICE '{self._own_name(type_model)}' must not be extensible"
                )
            count = len(type_model.fields)
            labels = [self._classify_wrapper_alt(alt) for alt in type_model.fields]
            for index, alt in enumerate(type_model.fields):
                child = self.by_id[alt.type_id]
                self._walk_wrapper(
                    child,
                    path + [PathLevel(index=index, count=count, alternatives=list(labels))],
                    channel_value,
                    channel_name,
                )
            return
        raise ValueError(
            f"unexpected wrapper type '{self._own_name(type_model)}' ({type_model.kind})"
        )

    # ---- 命名 -------------------------------------------------------------

    def _register_named_types(self) -> None:
        for type_model in sorted(self.model.types, key=lambda item: item.id):
            if not type_model.asn_name:
                continue
            if type_model.id in self.wrapper_type_ids:
                continue
            if type_model.is_parameterized_definition:
                continue
            cname = self.registry.register(cnames.type_name(type_model.asn_name))
            self.type_cnames[type_model.id] = cname
            if type_model.kind in (KIND_SEQUENCE, KIND_CHOICE):
                struct = StructDef(
                    key=type_model.id,
                    cname=cname,
                    kind="sequence" if type_model.kind == KIND_SEQUENCE else "choice",
                    asn_name=type_model.asn_name,
                    line=type_model.line,
                    model=type_model,
                    extensible=type_model.extensible,
                    sort_key=type_model.id * 4,
                )
                self.struct_defs[type_model.id] = struct
                self.named_structs.append(struct)
            elif type_model.kind == KIND_ENUMERATED:
                self._make_enum_def(type_model, cname)
            elif type_model.kind == KIND_SEQUENCE_OF:
                struct = StructDef(
                    key=type_model.id,
                    cname=cname,
                    kind="seqof",
                    asn_name=type_model.asn_name,
                    line=type_model.line,
                    model=type_model,
                    sort_key=type_model.id * 4,
                )
                self.struct_defs[type_model.id] = struct
                self.named_seqof.append(struct)
                self.named_structs.append(struct)
            elif type_model.kind == KIND_ALIAS:
                self.named_aliases.append((type_model, cname))
            else:
                self.named_primitives.append((type_model, cname))

    def _register_setup_release_instances(self) -> None:
        candidates = [
            item
            for item in self.model.types
            if item.synthetic_name
            and item.synthetic_name.startswith("SetupRelease")
            and not item.asn_name
            and not item.anonymous
            and item.kind == KIND_CHOICE
        ]
        for type_model in sorted(candidates, key=lambda item: item.id):
            setup_field = next(
                (f for f in type_model.fields if f.asn_name == "setup"), None
            )
            if setup_field is None:
                raise ValueError(
                    f"SetupRelease instance {type_model.id} without setup alternative"
                )
            target = self._resolve_alias_target(setup_field.type_id)
            target_cname = self.type_cnames.get(target.id)
            if target_cname is None:
                raise ValueError(
                    f"SetupRelease argument type {target.id} has no C name"
                )
            cname = self.registry.register(cnames.setup_release_name(target_cname))
            self.type_cnames[type_model.id] = cname
            self.setup_release_ids.add(type_model.id)
            struct = StructDef(
                key=type_model.id,
                cname=cname,
                kind="choice",
                asn_name=f"SetupRelease<{target.asn_name or target.id}>",
                line=type_model.line,
                model=type_model,
                extensible=False,
                sort_key=type_model.id * 4,
            )
            self.struct_defs[type_model.id] = struct
            self.named_structs.append(struct)

    def _resolve_alias_target(self, type_id: int) -> TypeModel:
        current = self.by_id[type_id]
        seen: Set[int] = set()
        while current.kind == KIND_ALIAS and current.alias_of_id:
            if current.id in seen:
                break
            seen.add(current.id)
            current = self.by_id[current.alias_of_id]
        return current

    def _make_enum_def(self, type_model: TypeModel, cname: str) -> EnumDef:
        constants: List[EnumConstant] = []
        local_used: Set[str] = set()
        for value in type_model.enum_values:
            constant = cnames.enum_constant_name(cname, value.asn_name)
            if constant in local_used:
                suffix = 2
                while f"{constant}_{suffix}" in local_used:
                    suffix += 1
                constant = f"{constant}_{suffix}"
            local_used.add(constant)
            self.registry.register(constant)
            constants.append(
                EnumConstant(
                    cname=constant,
                    asn_name=value.asn_name,
                    value=value.value,
                    is_extension=value.is_extension,
                )
            )
        enum_def = EnumDef(
            key=type_model.id,
            cname=cname,
            asn_name=type_model.asn_name or type_model.synthetic_name or "",
            line=type_model.line,
            extensible=type_model.extensible,
            root_count=type_model.root_count,
            constants=constants,
        )
        self.enum_defs[type_model.id] = enum_def
        return enum_def

    def _assign_anonymous_names(self) -> None:
        # 顶层命名结构体与 SetupRelease 实例：按 id 顺序遍历其字段。
        for struct in sorted(
            self.named_structs, key=lambda item: item.model.id if item.model else item.key
        ):
            if struct.model is None:
                continue
            self._visit_children(struct.model, struct.cname)

    def _visit_children(self, type_model: TypeModel, parent_cname: str) -> None:
        visited_key = type_model.id
        if visited_key in self._anon_visited:
            return
        self._anon_visited.add(visited_key)
        if type_model.kind == KIND_SEQUENCE:
            groups = self._make_group_defs(type_model, parent_cname)
            group_by_ordinal = {group.ordinal: group for group in groups}
            for alt in type_model.fields:
                if alt.is_group_member:
                    group = group_by_ordinal.get(alt.extension_group_index)
                    if group is None:
                        raise ValueError(
                            f"group member '{alt.asn_name}' without [[ ]] group in "
                            f"{parent_cname}"
                        )
                    self._visit_type_ref(
                        alt.type_id, group.cname, alt.asn_name, context="field"
                    )
                else:
                    self._visit_type_ref(
                        alt.type_id, parent_cname, alt.asn_name, context="field"
                    )
        elif type_model.kind == KIND_CHOICE:
            for alt in type_model.fields:
                self._visit_type_ref(
                    alt.type_id, parent_cname, alt.asn_name, context="choice_alt"
                )
        elif type_model.kind == KIND_SEQUENCE_OF:
            element = self.by_id[type_model.element_type_id]
            self._visit_element(element, parent_cname)

    def _make_group_defs(
        self, type_model: TypeModel, parent_cname: str
    ) -> List[GroupDef]:
        if not type_model.groups:
            return []
        struct = self.struct_defs.get(type_model.id)
        groups: List[GroupDef] = []
        for ordinal, group_model in enumerate(type_model.groups, start=1):
            key = type_model.id * 1000 + ordinal
            cname = self.registry.register(f"{parent_cname}_ExtGroup{ordinal}")
            group = GroupDef(
                key=key,
                cname=cname,
                parent_cname=parent_cname,
                ordinal=ordinal,
                addition_index=group_model.addition_index,
                asn_name=f"{parent_cname}_ExtGroup{ordinal}",
                line=group_model.line,
                model=group_model,
                parent_struct=struct,
            )
            self.group_defs.append(group)
            self.group_by_key[key] = group
            groups.append(group)
        if struct is not None:
            struct.group_defs = groups
        return groups

    def _visit_element(self, element: TypeModel, parent_cname: str) -> None:
        target = self._resolve_alias_target(element.id)
        if target.kind in (KIND_SEQUENCE, KIND_CHOICE, KIND_ENUMERATED):
            if target.asn_name or target.id in self.setup_release_ids:
                return
            if target.id in self.type_cnames:
                return
            cname = self.registry.register(cnames.item_type_name(parent_cname))
            self.type_cnames[target.id] = cname
            self._register_anonymous_structural(target, cname)
            self._visit_children(target, cname)
        elif target.kind == KIND_SEQUENCE_OF:
            if target.asn_name:
                return
            if target.id not in self.type_cnames:
                cname = self.registry.register(cnames.item_type_name(parent_cname))
                self._register_anonymous_seqof(target, cname)
                element_of = self.by_id[target.element_type_id]
                self._visit_element(element_of, cname)

    def _visit_type_ref(
        self,
        type_id: int,
        parent_cname: str,
        field_asn_name: str,
        context: str,
    ) -> None:
        target = self._resolve_alias_target(type_id)
        if target.kind in (KIND_SEQUENCE, KIND_CHOICE, KIND_ENUMERATED):
            if target.asn_name or target.id in self.setup_release_ids:
                if target.id in self.setup_release_ids:
                    self._visit_children(target, self.type_cnames[target.id])
                return
            if target.id in self.type_cnames:
                return
            cname = self.registry.register(
                cnames.child_type_name(parent_cname, field_asn_name)
            )
            self.type_cnames[target.id] = cname
            self._register_anonymous_structural(target, cname)
            self._visit_children(target, cname)
            return
        if target.kind == KIND_SEQUENCE_OF and not target.asn_name:
            base = cnames.child_type_name(parent_cname, field_asn_name)
            if context == "field":
                # 方案 3.4：匿名内联 SEQUENCE OF 字段展开为 items + count，
                # 不生成额外类型；但元素类型本身仍需 C 名。
                element = self.by_id[target.element_type_id]
                self._visit_element(element, base)
                return
            # CHOICE 备选/元素位置需要具名包装结构体（union 成员/数组元素必须有类型）。
            if target.id in self.type_cnames:
                return
            cname = self.registry.register(base)
            self._register_anonymous_seqof(target, cname)
            element = self.by_id[target.element_type_id]
            self._visit_element(element, cname)
            return

    def _register_anonymous_seqof(self, type_model: TypeModel, cname: str) -> None:
        if type_model.id in self.struct_defs:
            return
        struct = StructDef(
            key=type_model.id,
            cname=cname,
            kind="seqof",
            asn_name=type_model.synthetic_name or "",
            line=type_model.line,
            model=type_model,
            sort_key=type_model.id * 4,
        )
        self.type_cnames[type_model.id] = cname
        self.struct_defs[type_model.id] = struct
        self.named_structs.append(struct)

    def _register_anonymous_structural(
        self, type_model: TypeModel, cname: str
    ) -> None:
        if type_model.kind == KIND_ENUMERATED:
            self._make_enum_def(type_model, cname)
            return
        kind = "sequence" if type_model.kind == KIND_SEQUENCE else "choice"
        struct = StructDef(
            key=type_model.id,
            cname=cname,
            kind=kind,
            asn_name=type_model.synthetic_name or "",
            line=type_model.line,
            model=type_model,
            extensible=type_model.extensible,
            sort_key=type_model.id * 4,
        )
        self.struct_defs[type_model.id] = struct
        self.named_structs.append(struct)

    def _validate_anonymous_coverage(self) -> None:
        allowed = set(self.wrapper_type_ids)
        allowed.update(message.type_id for message in self.messages)
        leftovers: List[TypeModel] = []
        for type_model in self.model.types:
            if type_model.kind not in (
                KIND_SEQUENCE,
                KIND_CHOICE,
                KIND_ENUMERATED,
            ):
                continue
            if type_model.id in self.type_cnames:
                continue
            if type_model.id in allowed:
                continue
            leftovers.append(type_model)
        if leftovers:
            sample = ", ".join(
                f"{item.id}:{item.synthetic_name or item.asn_name}" for item in leftovers[:10]
            )
            raise ValueError(
                f"{len(leftovers)} anonymous structural types were not named: {sample}"
            )

    # ---- 布局 -------------------------------------------------------------

    def _build_layouts(self) -> None:
        for struct in self.named_structs:
            self._populate_struct(struct)
        for group in self.group_defs:
            if group.model is None:
                raise ValueError(f"extension group {group.cname} has no source model")
            group.fields = [
                self._make_field(member, group.cname, group_ordinal=group.ordinal)
                for member in group.model.members
            ]

    def _populate_struct(self, struct: StructDef) -> None:
        if struct.model is None:
            return
        type_model = struct.model
        if struct.kind == "sequence":
            if not type_model.fields:
                # 空 SEQUENCE{}（可能带扩展标记）：只保留 _dummy 占位，编码扩展位。
                struct.kind = "empty"
                struct.extensible = type_model.extensible
                return
            struct.root_fields = [
                self._make_field(field, struct.cname)
                for field in type_model.fields
                if not field.in_extension
            ]
            struct.direct_additions = [
                self._make_field(field, struct.cname)
                for field in type_model.fields
                if field.in_extension and not field.is_group_member
            ]
            for layout, model_field in zip(
                struct.root_fields,
                [f for f in type_model.fields if not f.in_extension],
            ):
                self._assign_children_for_field(model_field, layout, struct.cname)
            for layout, model_field in zip(
                struct.direct_additions,
                [
                    f
                    for f in type_model.fields
                    if f.in_extension and not f.is_group_member
                ],
            ):
                self._assign_children_for_field(model_field, layout, struct.cname)
                layout.is_direct_addition = True
                layout.addition_index = model_field.extension_addition_index
                layout.optional = layout.optional or (
                    model_field.presence != PRESENCE_MANDATORY
                )
            additions: List[Addition] = []
            for group in struct.group_defs:
                additions.append(Addition(index=group.addition_index, kind="group", group=group))
            for direct in struct.direct_additions:
                additions.append(
                    Addition(
                        index=direct.addition_index or 0,
                        kind="field",
                        field_layout=direct,
                    )
                )
            additions.sort(key=lambda item: item.index)
            struct.additions = additions
            expected = list(range(len(additions)))
            if [item.index for item in additions] != expected:
                raise ValueError(
                    f"extension additions of {struct.cname} are not contiguous: "
                    f"{[item.index for item in additions]}"
                )
        elif struct.kind == "choice":
            struct.alternatives = [
                self._make_field(field, struct.cname, is_choice_alt=True)
                for field in type_model.fields
            ]
            struct.root_count = sum(1 for f in type_model.fields if not f.in_extension)
            struct.extension_count = len(type_model.fields) - struct.root_count
            for layout, model_field in zip(struct.alternatives, type_model.fields):
                self._assign_children_for_field(model_field, layout, struct.cname)
            if struct.alternatives:
                struct.tag_cname = self.registry.register(struct.cname + "_Tag")
                for index, layout in enumerate(struct.alternatives):
                    constant = self.registry.register(
                        f"{struct.tag_cname}_{layout.cname}"
                    )
                    layout.tag_constant = constant
                    struct.tag_constants.append(
                        EnumConstant(
                            cname=constant,
                            asn_name=layout.asn_name,
                            value=index,
                            is_extension=index >= struct.root_count,
                        )
                    )
        elif struct.kind == "seqof":
            element = self.by_id[type_model.element_type_id]
            struct.element = self._resolver.ref(element.id)
            self._fill_size(struct, type_model)

    def _assign_children_for_field(
        self, model_field: FieldModel, layout: FieldLayout, parent_cname: str
    ) -> None:
        # 子结构命名在匿名命名阶段已完成；这里只确保 SetupRelease 子结构已建立。
        _ = (model_field, layout, parent_cname)

    def _fill_size(self, struct: StructDef, type_model: TypeModel) -> None:
        lb, ub, fixed, unbounded = self._size_spec(type_model)
        struct.size_lb = lb
        struct.size_ub = ub
        struct.size_fixed = fixed
        struct.size_unbounded = unbounded

    def _size_spec(self, type_model: TypeModel) -> Tuple[int, int, bool, bool]:
        size = type_model.size
        if size is None or size.kind == "None":
            return 0, UINT32_MAX, False, True
        if size.kind == "SizeFixed":
            return size.upper, size.upper, True, False
        lb = size.lower
        ub = size.upper
        if ub >= 65536:
            return lb, ub, False, True
        return lb, ub, lb == ub, False

    def _make_field(
        self,
        model_field: FieldModel,
        parent_cname: str,
        group_ordinal: int = 0,
        is_choice_alt: bool = False,
    ) -> FieldLayout:
        cname = cnames.field_name(model_field.asn_name)
        ref = self._resolver.ref(model_field.type_id)
        layout = FieldLayout(
            asn_name=model_field.asn_name,
            cname=cname,
            ref=ref,
            line=model_field.line,
            group_ordinal=group_ordinal,
        )
        if is_choice_alt:
            layout.optional = False
        elif ref.kind == "containing":
            layout.optional = model_field.presence != PRESENCE_MANDATORY
        elif model_field.presence == PRESENCE_OPTIONAL:
            layout.optional = True
            layout.has_name = "has_" + cname
        elif model_field.presence == PRESENCE_DEFAULT:
            layout.default_expr = self._default_expr(model_field, ref)
        return layout

    def _default_expr(self, model_field: FieldModel, ref: TypeRef) -> str:
        value = model_field.default_value
        if ref.kind == "enum" and ref.enum is not None:
            for constant in ref.enum.constants:
                if constant.value == value:
                    return constant.cname
            raise ValueError(
                f"no enum constant with value {value} for default of "
                f"'{model_field.asn_name}'"
            )
        if ref.kind == "bool":
            return "true" if value else "false"
        if ref.kind == "integer":
            return str(value)
        if ref.kind == "null":
            return "Null{0}"
        raise ValueError(
            f"unsupported DEFAULT for field '{model_field.asn_name}' ({ref.kind})"
        )

    # ---- 定义顺序 ---------------------------------------------------------

    def _compute_order(self) -> None:
        nodes: Dict[int, StructDef] = {}
        for struct in self.named_structs:
            nodes[struct.key] = struct
        for group in self.group_defs:
            nodes[group.key] = StructDef(
                key=group.key,
                cname=group.cname,
                kind="group",
                asn_name=group.asn_name,
                line=group.line,
                group_ordinal=group.ordinal,
                group_parent=group.parent_struct,
                sort_key=(group.parent_struct.sort_key + 1
                          if group.parent_struct is not None
                          else group.key * 4 + 1),
            )
        # 依赖边：A 依赖 B（B 必须先定义）
        deps: Dict[int, Set[int]] = {key: set() for key in nodes}
        def add_dep(owner: StructDef, ref: TypeRef) -> None:
            target_struct = ref.struct
            if target_struct is not None and target_struct.key in nodes:
                deps[owner.key].add(target_struct.key)

        for struct in list(nodes.values()):
            if struct.kind == "group":
                group = self.group_by_key[struct.key]
                for layout in group.fields:
                    add_dep(struct, layout.ref)
            elif struct.kind == "sequence":
                for layout in struct.root_fields:
                    add_dep(struct, layout.ref)
                for group in struct.group_defs:
                    deps[struct.key].add(group.key)
                for layout in struct.direct_additions:
                    add_dep(struct, layout.ref)
            elif struct.kind == "choice":
                for layout in struct.alternatives:
                    add_dep(struct, layout.ref)
            elif struct.kind == "seqof":
                pass  # 元素以指针存储
        ordered: List[StructDef] = []
        temporary: Set[int] = set()
        permanent: Set[int] = set()
        cycle: List[int] = []

        def visit(key: int) -> None:
            if key in permanent:
                return
            if key in temporary:
                cycle.append(key)
                return
            temporary.add(key)
            for dep in sorted(deps[key], key=lambda item: nodes[item].sort_key):
                visit(dep)
            temporary.discard(key)
            permanent.add(key)
            ordered.append(nodes[key])

        for key in sorted(nodes, key=lambda item: nodes[item].sort_key):
            visit(key)
        if cycle:
            names = ", ".join(nodes[key].cname for key in cycle[:8])
            raise ValueError(f"type definition cycle (non-CONTAINING): {names}")
        for index, struct in enumerate(ordered):
            struct.topo_index = index
        self.ordered_structs = ordered
        # 把顺序回填到 group_defs 便于发射（group 的 StructDef 与 GroupDef 分开存储）
        for struct in ordered:
            if struct.kind == "group":
                self.group_by_key[struct.key].topo_index = struct.topo_index
        # 回填到自结构
        self.ordered_structs = ordered

    # ---- 统计 -------------------------------------------------------------

    def _collect_stats(self) -> Dict[str, int]:
        return {
            "GeneratedTypes": len(self.model.types),
            "StructDefinitions": sum(
                1 for struct in self.ordered_structs if struct.kind != "empty"
            ),
            "EmptySequences": sum(
                1 for struct in self.ordered_structs if struct.kind == "empty"
            ),
            "EnumDefinitions": len(self.enum_defs),
            "SequenceDefinitions": sum(
                1 for struct in self.ordered_structs if struct.kind == "sequence"
            ),
            "ChoiceDefinitions": sum(
                1 for struct in self.ordered_structs if struct.kind == "choice"
            ),
            "SequenceOfDefinitions": sum(
                1 for struct in self.ordered_structs if struct.kind == "seqof"
            ),
            "GroupDefinitions": len(self.group_defs),
            "Messages": len(self.messages),
            "Channels": 10,
            "NamedPrimitives": len(self.named_primitives),
            "NamedAliases": len(self.named_aliases),
            "NameConflicts": len(self.renames),
            "ContainingFields": sum(
                1
                for struct in self.ordered_structs
                for layout in struct.root_fields + struct.alternatives
                if layout.is_containing
            ),
        }

    # ---- 便捷访问 ---------------------------------------------------------

    @property
    def input_sha256(self) -> str:
        return self.model.input_sha256

    @property
    def asn_version(self) -> str:
        return self.model.asn_version

    def struct_by_id(self, type_id: int) -> Optional[StructDef]:
        return self.struct_defs.get(type_id)

    def ref(self, type_id: int) -> TypeRef:
        return self._resolver.ref(type_id)

    def chunks(self, chunk_size: int) -> List[List[StructDef]]:
        return [
            self.ordered_structs[index : index + chunk_size]
            for index in range(0, len(self.ordered_structs), chunk_size)
        ]


class _TypeResolver:
    """缓存 TypeModel -> TypeRef 的解析（含别名展开、约束提取）。"""

    def __init__(self, cmodel: CModel) -> None:
        self.cmodel = cmodel
        self.cache: Dict[int, TypeRef] = {}

    def ref(self, type_id: int) -> TypeRef:
        cached = self.cache.get(type_id)
        if cached is not None:
            return cached
        type_model = self.cmodel.by_id[type_id]
        result = self._build(type_model)
        self.cache[type_id] = result
        return result

    def _build(self, type_model: TypeModel) -> TypeRef:
        if type_model.kind == KIND_ALIAS:
            if not type_model.alias_of_id:
                raise ValueError(f"alias {type_model.id} without target")
            return self.ref(type_model.alias_of_id)
        cname = self.cmodel.type_cnames.get(type_model.id, "")
        if type_model.kind in (KIND_SEQUENCE, KIND_CHOICE):
            struct = self.cmodel.struct_defs.get(type_model.id)
            if struct is None:
                raise ValueError(f"structural type {type_model.id} has no definition")
            return TypeRef(
                kind="struct",
                cname=struct.cname,
                type_id=type_model.id,
                struct=struct,
            )
        if type_model.kind == KIND_ENUMERATED:
            enum_def = self.cmodel.enum_defs.get(type_model.id)
            if enum_def is None:
                raise ValueError(f"enum type {type_model.id} has no definition")
            return TypeRef(
                kind="enum",
                cname=enum_def.cname,
                type_id=type_model.id,
                enum=enum_def,
            )
        if type_model.kind == KIND_INTEGER:
            integer = type_model.integer
            if integer is None:
                raise ValueError(f"INTEGER {type_model.id} without constraint")
            single = integer.kind == "SingleValue" or integer.lower == integer.upper
            return TypeRef(
                kind="integer",
                cname=cname or "int64_t",
                type_id=type_model.id,
                integer_lb=integer.lower,
                integer_ub=integer.upper,
                integer_single=single,
            )
        if type_model.kind == KIND_BOOLEAN:
            return TypeRef(kind="bool", cname=cname or "bool", type_id=type_model.id)
        if type_model.kind == KIND_NULL:
            return TypeRef(kind="null", cname="Null", type_id=type_model.id)
        if type_model.kind in (KIND_BIT_STRING, KIND_OCTET_STRING):
            lb, ub, fixed, unbounded = self.cmodel._size_spec(type_model)
            if type_model.kind == KIND_OCTET_STRING and type_model.contained_type_id:
                target = self.ref(type_model.contained_type_id)
                return TypeRef(
                    kind="containing",
                    cname=target.cname,
                    type_id=type_model.id,
                    target=target,
                )
            base = "BitString" if type_model.kind == KIND_BIT_STRING else "OctetString"
            return TypeRef(
                kind="bitstring" if type_model.kind == KIND_BIT_STRING else "octet",
                cname=cname or base,
                type_id=type_model.id,
                size_lb=lb,
                size_ub=ub,
                size_fixed=fixed,
                size_unbounded=unbounded,
            )
        if type_model.kind == KIND_SEQUENCE_OF:
            if type_model.asn_name or type_model.id in self.cmodel.struct_defs:
                struct = self.cmodel.struct_defs.get(type_model.id)
                if struct is None:
                    raise ValueError(f"SEQUENCE OF {type_model.id} has no definition")
                if struct.element is None:
                    struct.element = self.ref(type_model.element_type_id)
                    self.cmodel._fill_size(struct, type_model)
                return TypeRef(
                    kind="seqof",
                    cname=struct.cname,
                    type_id=type_model.id,
                    struct=struct,
                    element=struct.element,
                    size_lb=struct.size_lb,
                    size_ub=struct.size_ub,
                    size_fixed=struct.size_fixed,
                    size_unbounded=struct.size_unbounded,
                )
            element = self.ref(type_model.element_type_id)
            return TypeRef(
                kind="inline_seqof",
                type_id=type_model.id,
                element=element,
            )
        raise ValueError(f"unsupported type kind {type_model.kind} (id {type_model.id})")


def declaration_type(ref: TypeRef) -> str:
    """TypeRef 的 C 声明类型名（不含指针/数组）。"""
    if ref.kind == "containing":
        assert ref.target is not None
        return ref.target.cname
    return ref.cname


__all__ = [
    "UINT32_MAX",
    "CHANNEL_BY_ACCESS_POINT",
    "EXPECTED_MESSAGES",
    "PathLevel",
    "MessageInfo",
    "EnumConstant",
    "EnumDef",
    "TypeRef",
    "FieldLayout",
    "Addition",
    "GroupDef",
    "StructDef",
    "CModel",
    "declaration_type",
]
