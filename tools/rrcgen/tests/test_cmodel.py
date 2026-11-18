"""rrcgen v2 发射模型（CModel）单元测试（方案第 3/5/12 章）。

首次运行会解析完整 38.331（约 5–10 s），随后多个用例复用同一模型。
"""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

_REPO_ROOT = Path(__file__).resolve().parents[3]
_PACKAGE_ROOT = Path(__file__).resolve().parents[1]
if str(_PACKAGE_ROOT) not in sys.path:
    sys.path.insert(0, str(_PACKAGE_ROOT))

from rrcgen.cmodel import CModel, EXPECTED_MESSAGES  # noqa: E402
from rrcgen.diagnostics import DiagnosticCollector  # noqa: E402
from rrcgen.normalize import normalize_source  # noqa: E402
from rrcgen.parser import parse_source  # noqa: E402
from rrcgen.resolver import resolve_source  # noqa: E402

_ASN_PATH = _REPO_ROOT / "data" / "38.331_v18.10.0.asn"


class CModelTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        if not _ASN_PATH.is_file():
            raise unittest.SkipTest(f"ASN.1 input not found: {_ASN_PATH}")
        diagnostics = DiagnosticCollector()
        source = normalize_source(_ASN_PATH, diagnostics)
        assert source is not None
        parsed = parse_source(source, diagnostics, "NR-RRC-Definitions")
        resolved = resolve_source(
            source, parsed, diagnostics, "NR-RRC-Definitions", "18.10.0"
        )
        cls.diagnostics = diagnostics
        cls.model = resolved
        cls.cmodel = CModel(resolved)
        cls.by_cname = {
            struct.cname: struct for struct in cls.cmodel.ordered_structs
            if struct.kind != "group"
        }

    def test_no_diagnostics(self) -> None:
        self.assertEqual(self.diagnostics.error_count(), 0)

    def test_message_extraction_matches_appendix_a(self) -> None:
        messages = self.cmodel.messages
        self.assertEqual(len(messages), 53)
        self.assertEqual([item.asn_name for item in messages], EXPECTED_MESSAGES)
        self.assertEqual([item.kind_value for item in messages], list(range(1, 54)))
        self.assertEqual(
            [item.kind_name for item in messages],
            ["MessageKind_" + name.replace("-", "_") for name in EXPECTED_MESSAGES],
        )
        channels = {item.channel_value for item in messages}
        self.assertEqual(channels, set(range(1, 11)))

    def test_wrapper_paths(self) -> None:
        by_kind = {item.kind_name: item for item in self.cmodel.messages}
        mib = by_kind["MessageKind_MIB"]
        self.assertEqual([(level.index, level.count) for level in mib.path], [(0, 2)])
        sib1 = by_kind["MessageKind_SIB1"]
        self.assertEqual(
            [(level.index, level.count) for level in sib1.path], [(0, 2), (1, 2)]
        )
        scg = by_kind["MessageKind_UECapabilityEnquiry"]
        self.assertEqual(
            [(level.index, level.count) for level in scg.path], [(0, 2), (6, 16)]
        )
        # UL-DCCH 的 c2 路径：message=1 → messageClassExtension: c2=0 → c2 索引。
        c2 = by_kind["MessageKind_IndirectPathFailureInformation_r18"]
        self.assertEqual(
            [(level.index, level.count) for level in c2.path],
            [(1, 2), (0, 2), (10, 16)],
        )
        # spare/占位分支的分类必须存在，用于解码错误码分类。
        dl_ccch = by_kind["MessageKind_RRCReject"]
        self.assertIn("spare", dl_ccch.path[1].alternatives)

    def test_naming_examples_from_plan(self) -> None:
        enum_names = {enum.cname for enum in self.cmodel.enum_defs.values()}
        primitive_names = {cname for _, cname in self.cmodel.named_primitives}
        alias_names = {cname for _, cname in self.cmodel.named_aliases}
        all_names = set(self.by_cname) | enum_names | primitive_names | alias_names
        expected = [
            "MIB",
            "SIB1",
            "RRCReconfiguration",
            "SI_SchedulingInfo",
            "RRCReconfiguration_CriticalExtensions",
            "RRCReconfiguration_CriticalExtensionsFuture",
            "MIB_SubCarrierSpacingCommon",
            "SetupRelease_SDT_Config_r17",
            "PagingRecordList",
            "SIB1_Uac_BarringInfo",
            "SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo",
        ]
        for name in expected:
            self.assertIn(name, all_names, f"missing generated type {name}")
        self.assertNotIn("BCCH_BCH_Message", all_names)
        self.assertNotIn("DL_DCCH_Message", all_names)

    def test_group_and_containing_definitions(self) -> None:
        suspend = self.by_cname["SuspendConfig"]
        self.assertEqual(len(suspend.group_defs), 3)
        self.assertEqual(
            [group.cname for group in suspend.group_defs],
            [
                "SuspendConfig_ExtGroup1",
                "SuspendConfig_ExtGroup2",
                "SuspendConfig_ExtGroup3",
            ],
        )
        self.assertIn(
            "CellGroupConfig",
            self.by_cname["RRCReconfiguration_IEs"].root_fields[1].ref.cname,
        )
        self.assertEqual(
            self.by_cname["RRCReconfiguration_IEs"].root_fields[1].ref.kind,
            "containing",
        )

    def test_topological_order_respects_by_value_dependencies(self) -> None:
        position = {
            struct.key: index
            for index, struct in enumerate(self.cmodel.ordered_structs)
        }
        for struct in self.cmodel.ordered_structs:
            fields = []
            if struct.kind == "sequence":
                fields = list(struct.root_fields) + list(struct.direct_additions)
            elif struct.kind == "choice":
                fields = list(struct.alternatives)
            elif struct.kind == "group":
                fields = list(self.cmodel.group_by_key[struct.key].fields)
            for field in fields:
                target = field.ref.struct
                if target is not None and not field.is_containing:
                    # 指针/内联 SEQUENCE OF 不要求目标先定义
                    if field.ref.kind == "struct":
                        self.assertLess(
                            position[target.key],
                            position[struct.key],
                            f"{target.cname} must precede {struct.cname}",
                        )

    def test_no_duplicate_type_names(self) -> None:
        names = [struct.cname for struct in self.cmodel.ordered_structs]
        self.assertEqual(len(names), len(set(names)))
        enum_names = [enum.cname for enum in self.cmodel.enum_defs.values()]
        self.assertEqual(len(enum_names), len(set(enum_names)))

    def test_stable_counts(self) -> None:
        stats = self.cmodel.stats
        self.assertEqual(stats["Messages"], 53)
        self.assertEqual(stats["Channels"], 10)
        self.assertGreater(stats["EnumDefinitions"], 3000)
        self.assertEqual(stats["NamedAliases"], 3)
        self.assertEqual(len(self.cmodel.chunks(120)), 32)
    def test_type_headers_are_split_for_ides(self) -> None:
        # CLion/ReSharper 的默认分析阈值为 300KB、PSI 阈值为 2MB；单文件 6MB
        # 会暂停分析并导致 Go to Declaration 失效，因此类型头必须分块。
        from rrcgen.emitters.c_types import emit_types_headers

        files = emit_types_headers(self.cmodel)
        umbrella = files["rrc_types.h"]
        parts = sorted(name for name in files if name.startswith("rrc_types_part"))
        self.assertGreater(len(parts), 1)
        for name in parts:
            self.assertIn(f'#include "{name}"', umbrella)
            self.assertLess(len(files[name].encode("utf-8")), 300_000,
                            f"{name} exceeds IDE analysis threshold")
        # 第一部分必须包含基础类型；前向声明允许被拆分到后续 part。
        self.assertIn("typedef struct BitString", files["rrc_types_part000.h"])
        combined = "\n".join(files[name] for name in parts)
        self.assertIn("typedef struct MIB MIB;", combined)
        # part 文件按序 include 前面的部分，保证单独打开时也能解析依赖。
        for name in parts[1:]:
            self.assertIn('"rrc_types_part000.h"', files[name])



if __name__ == "__main__":
    unittest.main()
