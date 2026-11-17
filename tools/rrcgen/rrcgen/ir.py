"""Deterministic IR serialization (design document 4.5 / DESIGN.md section 2).

The serializer writes a fixed key order with two-space indentation, LF line
endings and a trailing newline.  No timestamps or absolute paths are included.
"""

from __future__ import annotations

import json
from pathlib import Path
from typing import Any, Dict, List

from . import IR_VERSION, VERSION
from .models import ResolvedModel

#: Top-level IR key order.
IR_KEYS = (
    "IrVersion",
    "AsnVersion",
    "InputFile",
    "InputSha256",
    "GeneratorVersion",
    "Modules",
    "Constants",
    "Messages",
    "Types",
)


def build_ir(model: ResolvedModel) -> Dict[str, Any]:
    """Build the JSON-serializable IR document (insertion order is key order)."""
    types = sorted(model.types, key=lambda item: item.id)
    constants = sorted(model.constants, key=lambda item: item.line)
    messages = sorted(model.messages, key=lambda item: item.value)
    modules = [
        {
            "Name": module.name,
            "StartLine": module.start_line,
            "TypeCount": module.type_count,
        }
        for module in model.modules
    ]
    return {
        "IrVersion": IR_VERSION,
        "AsnVersion": model.asn_version,
        "InputFile": model.input_file,
        "InputSha256": model.input_sha256,
        "GeneratorVersion": VERSION,
        "Modules": modules,
        "Constants": [constant.to_json() for constant in constants],
        "Messages": [message.to_json() for message in messages],
        "Types": [type_model.to_json() for type_model in types],
    }


def dumps_json(document: Any) -> str:
    """Render *document* deterministically."""
    return json.dumps(document, indent=2, ensure_ascii=False) + "\n"


def write_ir(model: ResolvedModel, path: Path) -> str:
    """Write the IR file and return its SHA-256 digest."""
    import hashlib

    text = dumps_json(build_ir(model))
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8", newline="\n")
    return hashlib.sha256(text.encode("utf-8")).hexdigest()


def write_manifest(
    path: Path,
    model: ResolvedModel,
    files: Dict[str, bytes],
) -> str:
    """Write the generation manifest (file list with digests) and return its hash."""
    import hashlib

    entries = []
    for name in sorted(files):
        content = files[name]
        entries.append(
            {
                "Path": name.replace("\\", "/"),
                "Sha256": hashlib.sha256(content).hexdigest(),
                "Bytes": len(content),
            }
        )
    document = {
        "GeneratorVersion": VERSION,
        "IrVersion": IR_VERSION,
        "AsnVersion": model.asn_version,
        "InputSha256": model.input_sha256,
        "TypeCount": len(model.types),
        "Namespace": "RrcCodec::V1810",
        "Files": entries,
    }
    text = dumps_json(document)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8", newline="\n")
    return hashlib.sha256(text.encode("utf-8")).hexdigest()


__all__ = ["IR_KEYS", "build_ir", "dumps_json", "write_ir", "write_manifest"]
