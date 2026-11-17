"""Statistics report: write ``build/rrc.stats.json`` and render a human summary.

The numbers are *measured*; deviations from design document appendix B are
reported explicitly (the generator never adjusts counters to match the design
figures).
"""

from __future__ import annotations

import json
from pathlib import Path
from typing import Dict, List, Tuple

from . import VERSION
from .models import ResolvedModel


def build_stats(model: ResolvedModel) -> Dict[str, object]:
    """Return the statistics document for *model*."""
    stats: Dict[str, object] = {
        "GeneratorVersion": VERSION,
        "Module": model.stats.get("Module", ""),
        "InputFile": model.stats.get("InputFile", ""),
        "InputSha256": model.stats.get("InputSha256", ""),
        "AsnVersion": model.stats.get("AsnVersion", ""),
    }
    for key, value in model.stats.items():
        if key == "AppendixBComparison":
            continue
        stats[key] = value
    comparison = model.stats.get("AppendixBComparison", {})
    stats["AppendixBComparison"] = comparison
    deviations: List[str] = []
    for key, row in comparison.items():  # type: ignore[union-attr]
        delta = row.get("Delta")
        if delta not in (0, None):
            deviations.append(f"{key}: expected {row['Expected']}, actual {row['Actual']} (delta {delta:+d})")
    stats["Deviations"] = deviations
    return stats


def write_stats(model: ResolvedModel, path: Path) -> None:
    """Write the statistics JSON document."""
    path.parent.mkdir(parents=True, exist_ok=True)
    text = json.dumps(build_stats(model), indent=2, ensure_ascii=False) + "\n"
    path.write_text(text, encoding="utf-8", newline="\n")


def render_summary(model: ResolvedModel) -> str:
    """Render a compact human-readable statistics summary."""
    stats = build_stats(model)
    lines: List[str] = []
    lines.append(f"rrcgen {VERSION} - generation summary")
    lines.append(
        f"  input              : {stats['InputFile']} (sha256 {stats['InputSha256']})"
    )
    lines.append(f"  module             : {stats['Module']} (ASN.1 {stats['AsnVersion']})")
    lines.append(
        "  top-level types    : {0} (parameterized definitions: {1})".format(
            stats.get("TopLevelTypeDefinitions", 0),
            stats.get("ParameterizedTypeDefinitions", 0),
        )
    )
    lines.append(f"  constants          : {stats.get('Constants', 0)}")
    lines.append(
        "  anonymous types    : {0} = {1} SEQUENCE + {2} CHOICE + {3} ENUMERATED".format(
            stats.get("AnonymousTotal", 0),
            stats.get("AnonymousSequence", 0),
            stats.get("AnonymousChoice", 0),
            stats.get("AnonymousEnumerated", 0),
        )
    )
    lines.append(
        "  SetupRelease       : {0} references / {1} distinct arguments".format(
            stats.get("SetupReleaseReferences", 0),
            stats.get("SetupReleaseDistinctArguments", 0),
        )
    )
    lines.append(
        "  generated types    : {0} descriptors ({1} with generated C++ definitions)".format(
            stats.get("GeneratedTypes", 0),
            stats.get("GeneratedCppTypes", 0),
        )
    )
    lines.append(
        "  components         : {0} total, {1} OPTIONAL, {2} DEFAULT".format(
            stats.get("ComponentCount", 0),
            stats.get("OptionalComponents", 0),
            stats.get("DefaultComponents", 0),
        )
    )
    lines.append(
        "  extensions         : {0} markers, {1} groups ({2} members), {3} direct additions".format(
            stats.get("ExtensionMarkers", 0),
            stats.get("ExtensionGroups", 0),
            stats.get("ExtensionGroupMembers", 0),
            stats.get("DirectExtensionAdditions", 0),
        )
    )
    lines.append(
        "  open types         : {0} CONTAINING, size constraints: {1}".format(
            stats.get("ContainingOpenTypes", 0), stats.get("SizeConstraints", 0)
        )
    )
    lines.append(
        "  messages           : {0}, max constant: {1} = {2}".format(
            stats.get("Messages", 0),
            stats.get("MaxConstantName", ""),
            stats.get("MaxConstant", 0),
        )
    )
    lines.append(
        "  structural cycles  : {0} value cycles, {1} SCCs including CONTAINING".format(
            stats.get("ValueCyclesWithoutContaining", 0),
            stats.get("CyclesIncludingContaining", 0),
        )
    )
    deviations: List[str] = stats.get("Deviations", [])  # type: ignore[assignment]
    if deviations:
        lines.append("  deviations from appendix B:")
        for deviation in deviations:
            lines.append(f"    - {deviation}")
    else:
        lines.append("  deviations from appendix B: none")
    return "\n".join(lines)


__all__ = ["build_stats", "write_stats", "render_summary"]
