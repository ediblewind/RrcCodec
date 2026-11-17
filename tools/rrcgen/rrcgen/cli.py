"""rrcgen v2 command line interface.

从 38.331 ASN.1 生成 v2 C ABI 产物（方案第 5 章）：

* ``include/rrc_codec/types/rrc_types.h``
* ``include/rrc_codec/messages/rrc_messages.h``
* ``src/generated/codec_internal.h``
* ``src/generated/codec_partNNN.cpp``
* ``generated/Sources.cmake``、``generated/rrc_stats.json``、``generated/rrc_message_index.md``
* ``tests/generated/message_samples.{h,cpp}``

用法（在 ``tools/rrcgen`` 下）::

    python -m rrcgen --input ../../data/38.331_v18.10.0.asn \
        --check-input-sha256 ../../data/asn-input.sha256 \
        --repo-root ../..

``--check`` 只生成到临时目录并与仓库现有文件逐字节比较（CI 用）。
"""

from __future__ import annotations

import argparse
import hashlib
import json
import sys
import tempfile
from pathlib import Path
from typing import Dict, List, Optional, Sequence, Tuple

from . import VERSION
from .cmodel import CModel
from .diagnostics import DiagnosticCollector
from .emitters.c_codec import CodecEmitter
from .emitters.c_messages import emit_messages_header
from .emitters.c_samples import emit_samples_header, emit_samples_source
from .emitters.c_types import emit_types_header
from .normalize import normalize_source
from .parser import parse_source
from .resolver import resolve_source

EXIT_SUCCESS = 0
EXIT_GENERATION_FAILED = 1
EXIT_USAGE = 2

DEFAULT_MODULE = "NR-RRC-Definitions"

#: 输出文件（相对 repo-root）。
PATH_TYPES = "include/rrc_codec/types/rrc_types.h"
PATH_MESSAGES = "include/rrc_codec/messages/rrc_messages.h"
PATH_INTERNAL = "src/generated/codec_internal.h"
PATH_SOURCES_CMAKE = "generated/Sources.cmake"
PATH_STATS = "generated/rrc_stats.json"
PATH_MESSAGE_INDEX = "generated/rrc_message_index.md"
PATH_SAMPLES_HEADER = "tests/generated/message_samples.h"
PATH_SAMPLES_SOURCE = "tests/generated/message_samples.cpp"


def build_argument_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        prog="rrcgen",
        description=(
            "ASN.1 (3GPP TS 38.331) front-end and C generator for RrcCodec v2 "
            f"(generator version {VERSION})."
        ),
    )
    parser.add_argument("--input", required=True, help="path to the ASN.1 input file")
    parser.add_argument(
        "--repo-root",
        default=".",
        help="repository root for generated products (default: current directory)",
    )
    parser.add_argument(
        "--check-input-sha256",
        default=None,
        help="file with expected SHA-256 of the input (sha256sum format)",
    )
    parser.add_argument(
        "--chunk-size",
        type=int,
        default=120,
        help="number of type definitions per codec_partNNN.cpp (default 120)",
    )
    parser.add_argument(
        "--check",
        action="store_true",
        help="generate into a temporary directory and compare with the repository",
    )
    parser.add_argument(
        "--module-version",
        default="18.10.0",
        help="ASN.1 version string (default 18.10.0)",
    )
    parser.add_argument(
        "--diagnostics-format",
        choices=("text", "json"),
        default="text",
    )
    return parser


def main(argv: Optional[Sequence[str]] = None) -> int:
    parser = build_argument_parser()
    args = parser.parse_args(argv)
    if args.chunk_size <= 0:
        print("rrcgen: error: --chunk-size must be positive", file=sys.stderr)
        return EXIT_USAGE
    try:
        files = _generate(args)
    except _GenerationError as error:
        print(f"rrcgen: generation failed: {error}", file=sys.stderr)
        return EXIT_GENERATION_FAILED
    repo_root = Path(args.repo_root).resolve()
    if args.check:
        return _check_outputs(repo_root, files)
    _write_outputs(repo_root, files)
    print(f"rrcgen {VERSION}: generated {len(files)} files under {repo_root}")
    return EXIT_SUCCESS


class _GenerationError(Exception):
    pass


def _generate(args) -> Dict[str, str]:
    diagnostics = DiagnosticCollector()
    input_path = Path(args.input)
    if not input_path.is_file():
        raise _GenerationError(f"input file not found: {input_path}")
    source = normalize_source(input_path, diagnostics)
    if source is None:
        raise _GenerationError(_render_diagnostics(diagnostics))
    if args.check_input_sha256:
        expected = _read_expected_sha256(Path(args.check_input_sha256))
        if expected is None:
            raise _GenerationError(
                f"cannot read SHA-256 reference: {args.check_input_sha256}"
            )
        if expected.lower() != source.sha256.lower():
            raise _GenerationError(
                f"input SHA-256 mismatch: expected {expected}, got {source.sha256}"
            )
    parsed = parse_source(source, diagnostics, DEFAULT_MODULE)
    resolved = resolve_source(
        source, parsed, diagnostics, DEFAULT_MODULE, args.module_version
    )
    if diagnostics.error_count():
        raise _GenerationError(_render_diagnostics(diagnostics))
    cmodel = CModel(resolved)
    codec = CodecEmitter(cmodel, chunk_size=args.chunk_size)

    files: Dict[str, str] = {
        PATH_TYPES: emit_types_header(cmodel),
        PATH_MESSAGES: emit_messages_header(cmodel),
        PATH_INTERNAL: codec.emit_internal_header(),
        PATH_STATS: _emit_stats(cmodel, args),
        PATH_MESSAGE_INDEX: _emit_message_index(cmodel),
        PATH_SAMPLES_HEADER: emit_samples_header(cmodel),
        PATH_SAMPLES_SOURCE: emit_samples_source(cmodel),
    }
    parts = codec.emit_parts()
    part_names: List[str] = []
    for name, content in parts.items():
        files[f"src/generated/{name}"] = content
        part_names.append(name)
    part_names.sort()
    files[PATH_SOURCES_CMAKE] = codec.emit_sources_cmake(part_names)
    if diagnostics.warning_count():
        print(_render_diagnostics(diagnostics), file=sys.stderr)
    return files


def _render_diagnostics(diagnostics: DiagnosticCollector) -> str:
    return diagnostics.render() or "unknown generation error"


def _read_expected_sha256(path: Path) -> Optional[str]:
    try:
        text = path.read_text(encoding="utf-8")
    except OSError:
        return None
    for line in text.splitlines():
        candidate = line.strip().split(" ")[0]
        if len(candidate) >= 64:
            return candidate
    return None


def _emit_stats(cmodel: CModel, args) -> str:
    stats = {
        "GeneratorVersion": VERSION,
        "Module": DEFAULT_MODULE,
        "InputFile": "38.331_v18.10.0.asn",
        "InputSha256": cmodel.input_sha256,
        "AsnVersion": cmodel.asn_version,
        "ChunkSize": args.chunk_size,
    }
    stats.update(cmodel.stats)
    stats["Chunks"] = (len(cmodel.ordered_structs) + args.chunk_size - 1) // args.chunk_size
    stats["MessageKinds"] = [
        {
            "Value": message.kind_value,
            "Kind": message.kind_name,
            "AsnName": message.asn_name,
            "Struct": message.struct_cname,
            "Channel": message.channel_name,
            "ChannelValue": message.channel_value,
            "WrapperBits": _wrapper_bits(message),
            "Path": [
                {"Index": level.index, "Count": level.count}
                for level in message.path
            ],
        }
        for message in cmodel.messages
    ]
    stats["NameRenames"] = [
        {"Original": original, "Renamed": renamed}
        for original, renamed in cmodel.renames
    ]
    return json.dumps(stats, indent=2, ensure_ascii=False) + "\n"


def _wrapper_bits(message) -> int:
    bits = 0
    for level in message.path:
        value = level.count - 1
        while value > 0:
            bits += 1
            value >>= 1
    return bits


def _emit_message_index(cmodel: CModel) -> str:
    lines = [
        "# 生成消息索引（53 个实际消息）",
        "",
        "> 自动生成，请勿手工修改。",
        f"> 生成器：rrcgen {VERSION}；ASN.1：{cmodel.asn_version}；"
        f"输入 SHA-256：`{cmodel.input_sha256}`",
        "",
        "| # | MessageKind | ASN.1 消息 | 结构体 | 信道 | 包装位路径（索引/备选数） | 入口位数 |",
        "|---:|---|---|---|---|---|---:|",
    ]
    for message in cmodel.messages:
        path = " → ".join(
            f"{level.index}/{level.count}" for level in message.path
        )
        lines.append(
            f"| {message.kind_value} | `{message.kind_name}` | `{message.asn_name}` | "
            f"`{message.struct_cname}` | `{message.channel_name}` | {path} | "
            f"{_wrapper_bits(message)} |"
        )
    lines.append("")
    return "\n".join(lines)


def _write_outputs(repo_root: Path, files: Dict[str, str]) -> None:
    expected = set(files)
    generated_dir = repo_root / "src/generated"
    if generated_dir.is_dir():
        for entry in generated_dir.glob("codec_part*.cpp"):
            relative = entry.relative_to(repo_root).as_posix()
            if relative not in expected:
                entry.unlink()
    for relative, content in files.items():
        path = repo_root / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(content, encoding="utf-8", newline="\n")


def _check_outputs(repo_root: Path, files: Dict[str, str]) -> int:
    mismatch: List[str] = []
    missing: List[str] = []
    for relative, content in files.items():
        path = repo_root / relative
        if not path.is_file():
            missing.append(relative)
            continue
        if path.read_text(encoding="utf-8") != content:
            mismatch.append(relative)
    expected = set(files)
    unexpected: List[str] = []
    generated_dir = repo_root / "src/generated"
    if generated_dir.is_dir():
        for entry in sorted(generated_dir.glob("codec_part*.cpp")):
            relative = entry.relative_to(repo_root).as_posix()
            if relative not in expected:
                unexpected.append(relative)
    if missing or mismatch or unexpected:
        for name in missing:
            print(f"rrcgen: missing generated file: {name}", file=sys.stderr)
        for name in mismatch:
            print(f"rrcgen: generated file differs: {name}", file=sys.stderr)
        for name in unexpected:
            print(f"rrcgen: unexpected generated file: {name}", file=sys.stderr)
        print("rrcgen: regeneration check FAILED", file=sys.stderr)
        return EXIT_GENERATION_FAILED
    print("rrcgen: regeneration check passed: generated code is up to date")
    return EXIT_SUCCESS


if __name__ == "__main__":  # pragma: no cover
    sys.exit(main())
