"""rrcgen 命名规则单元测试（N1–N10）。"""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

_PACKAGE_ROOT = Path(__file__).resolve().parents[1]
if str(_PACKAGE_ROOT) not in sys.path:
    sys.path.insert(0, str(_PACKAGE_ROOT))

from rrcgen import cnames  # noqa: E402


class TypeNamingTest(unittest.TestCase):
    def test_n1_keeps_asn_original_name(self) -> None:
        self.assertEqual(cnames.type_name("MIB"), "MIB")
        self.assertEqual(cnames.type_name("SIB1"), "SIB1")
        self.assertEqual(cnames.type_name("SI-SchedulingInfo"), "SI_SchedulingInfo")
        self.assertEqual(cnames.type_name("Q-RxLevMin"), "Q_RxLevMin")
        self.assertEqual(
            cnames.type_name("RRCReconfiguration"), "RRCReconfiguration"
        )

    def test_n3_field_name_keeps_spelling(self) -> None:
        self.assertEqual(
            cnames.field_name("ssb-SubcarrierOffset"), "ssb_SubcarrierOffset"
        )
        self.assertEqual(
            cnames.field_name("q-RxLevMinOffset"), "q_RxLevMinOffset"
        )

    def test_n8_keyword_escape(self) -> None:
        self.assertEqual(cnames.field_name("short"), "short_")
        self.assertEqual(cnames.field_name("long"), "long_")
        self.assertEqual(cnames.type_name("switch"), "switch_")

    def test_n2_anonymous_name(self) -> None:
        self.assertEqual(
            cnames.child_type_name("MIB", "subCarrierSpacingCommon"),
            "MIB_SubCarrierSpacingCommon",
        )
        self.assertEqual(
            cnames.child_type_name("RRCReconfiguration", "criticalExtensions"),
            "RRCReconfiguration_CriticalExtensions",
        )
        # 重叠合并：第二个示例。
        self.assertEqual(
            cnames.child_type_name(
                "RRCReconfiguration_CriticalExtensions", "criticalExtensionsFuture"
            ),
            "RRCReconfiguration_CriticalExtensionsFuture",
        )
        self.assertEqual(
            cnames.child_type_name(
                "SIB1_UAC_BarringInfo", "uac-AccessCategory1-SelectionAssistanceInfo"
            ),
            "SIB1_UAC_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo",
        )

    def test_item_and_setup_release_names(self) -> None:
        self.assertEqual(
            cnames.item_type_name("PagingRecordList"), "PagingRecordList_Item"
        )
        self.assertEqual(
            cnames.setup_release_name("SDT_Config_r17"),
            "SetupRelease_SDT_Config_r17",
        )

    def test_n4_enum_constant(self) -> None:
        self.assertEqual(
            cnames.enum_constant_name(
                "MIB_SubCarrierSpacingCommon", "scs15or60"
            ),
            "MIB_SubCarrierSpacingCommon_scs15or60",
        )
        self.assertEqual(
            cnames.enum_constant_name("X", "short"), "X_short_"
        )

    def test_name_registry_conflict_suffix(self) -> None:
        registry = cnames.NameRegistry()
        self.assertEqual(registry.register("Foo"), "Foo")
        self.assertEqual(registry.register("Foo"), "Foo_2")
        self.assertEqual(registry.register("Foo"), "Foo_3")
        self.assertEqual(registry.register("Foo_2"), "Foo_2_2")


if __name__ == "__main__":
    unittest.main()
