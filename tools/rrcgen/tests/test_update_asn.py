"""``tools/update_asn.py`` 纯函数单元测试（不触发真实迁移）。"""

from __future__ import annotations

import importlib.util
import unittest
from pathlib import Path

_REPO_ROOT = Path(__file__).resolve().parents[3]
_SCRIPT = _REPO_ROOT / "tools" / "update_asn.py"


def _load_tool():
    spec = importlib.util.spec_from_file_location("update_asn_tool", _SCRIPT)
    module = importlib.util.module_from_spec(spec)
    assert spec.loader is not None
    spec.loader.exec_module(module)
    return module


class UpdateAsnToolTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        cls.tool = _load_tool()

    @staticmethod
    def _message(kind, name, schema="00" * 8):
        return {
            "Kind": kind,
            "KindName": "MessageKind_" + name.replace("-", "_"),
            "AsnName": name,
            "Struct": name.replace("-", "_"),
            "Channel": "ChannelType_DL_DCCH",
            "ChannelValue": 4,
            "WrapperBits": 5,
            "SchemaHash": schema,
            "Path": [{"Index": 0, "Count": 2}, {"Index": 0, "Count": 16}],
        }

    def test_diff_messages_reports_add_remove_and_changes(self) -> None:
        old = {
            "Messages": [
                self._message(1, "MIB"),
                self._message(2, "SIB1"),
                self._message(3, "OldMessage"),
            ]
        }
        new = {
            "Messages": [
                self._message(1, "MIB", schema="11" * 8),
                self._message(2, "SIB1"),
                self._message(3, "NewMessage"),
            ]
        }
        diff = self.tool.diff_messages(old, new)
        self.assertEqual(diff["old_count"], 3)
        self.assertEqual(diff["new_count"], 3)
        self.assertEqual([item["AsnName"] for item in diff["added"]], ["NewMessage"])
        self.assertEqual([item["AsnName"] for item in diff["removed"]], ["OldMessage"])
        self.assertEqual([item["AsnName"] for item, _ in diff["changed"]], ["MIB"])
        self.assertIn("结构布局（SchemaHash）变化", diff["changed"][0][1])

    def test_diff_messages_detects_kind_shift(self) -> None:
        old = {"Messages": [self._message(1, "MIB"), self._message(2, "SIB1")]}
        new = {
            "Messages": [
                self._message(1, "MIB"),
                self._message(2, "Inserted"),
                self._message(3, "SIB1"),
            ]
        }
        diff = self.tool.diff_messages(old, new)
        self.assertEqual(len(diff["kind_shifted"]), 1)
        self.assertEqual(diff["kind_shifted"][0]["AsnName"], "SIB1")

    def test_detect_module_version(self) -> None:
        version = self.tool.detect_module_version(
            Path("38.331_v18.11.0.asn"), None
        )
        self.assertEqual(version, "18.11.0")
        self.assertEqual(
            self.tool.detect_module_version(Path("input.asn"), "19.0.0"),
            "19.0.0",
        )
        with self.assertRaises(SystemExit):
            self.tool.detect_module_version(Path("input.asn"), None)

    def test_categorize_changes(self) -> None:
        groups = self.tool.categorize_changes(
            [
                "data/asn-version.txt",
                "include/rrc_codec/rrc_version.h",
                "src/generated/codec_part001.cpp",
                "generated/rrc_manifest.json",
                "tests/generated/message_manifest.cpp",
            ]
        )
        self.assertIn("data/（单一来源）", groups)
        self.assertIn("src/generated/（生成代码）", groups)
        self.assertIn("include/rrc_codec/（生成头）", groups)
        self.assertIn("generated/（统计/清单）", groups)
        self.assertIn("tests/generated/（测试生成物）", groups)


if __name__ == "__main__":
    unittest.main()
