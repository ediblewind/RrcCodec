#!/usr/bin/env python3
"""一键 ASN.1 迁移：更新 data/ 单一来源、重生成、输出迁移报告。

用法（仓库根目录）::

    python tools/update_asn.py path/to/38.331_v18.11.0.asn
    python tools/update_asn.py new.asn --module-version 18.11.0
    python tools/update_asn.py new.asn --library-version 3.0.0

脚本自动完成（失败时回滚 data/ 并提示 git 恢复）：

1. 把新输入复制为 ``data/38.331_v<版本>.asn``，删除旧的 38.331 输入；
2. 更新 ``data/asn-input.sha256``、``data/asn-version.txt``（可选 ``data/version.txt``）；
3. 以 ``--update-baseline`` 重跑生成器（消息集基线自动维护）；
4. 对比迁移前后的 ``generated/rrc_manifest.json``，写出
   ``generated/MIGRATION_NOTES.md``：消息集/结构/统计变化、生成物变更清单、
   自动检索到的受影响手写文件、仍需人工 review 的清单。

前置条件：git 工作区干净（便于 diff 与回滚），除非显式 ``--allow-dirty``。
"""

from __future__ import annotations

import argparse
import hashlib
import re
import shutil
import subprocess
import sys
from datetime import datetime
from pathlib import Path
from typing import Dict, List, Optional, Sequence, Tuple

REPO_ROOT = Path(__file__).resolve().parents[1]
RRGEN_DIR = REPO_ROOT / "tools" / "rrcgen"

# 复用生成器包（数据读取/版本解析/生成入口）。
if str(RRGEN_DIR) not in sys.path:
    sys.path.insert(0, str(RRGEN_DIR))

from rrcgen import VERSION as GENERATOR_VERSION  # noqa: E402
from rrcgen.cli import main as rrcgen_main  # noqa: E402
from rrcgen.metadata import parse_semver  # noqa: E402

DATA_DIR = REPO_ROOT / "data"
SHA_FILE = DATA_DIR / "asn-input.sha256"
ASN_VERSION_FILE = DATA_DIR / "asn-version.txt"
VERSION_FILE = DATA_DIR / "version.txt"
MESSAGE_SET_FILE = DATA_DIR / "message-set.txt"
MANIFEST_FILE = REPO_ROOT / "generated" / "rrc_manifest.json"
NOTES_FILE = REPO_ROOT / "generated" / "MIGRATION_NOTES.md"

ASN_GLOB = "38.331_v*.asn"

#: 自动检索“受影响手写文件”的范围（生成物目录排除在外）。
SCAN_DIRS = ("tests", "examples", "src/core", "include/rrc_codec")
SCAN_EXCLUDE_PREFIXES = (
    "tests/generated/",
    "include/rrc_codec/types/",
    "include/rrc_codec/messages/",
    "include/rrc_codec/rrc_version.h",
    "src/generated/",
)
SCAN_SUFFIXES = (".c", ".h", ".cpp", ".hpp", ".cmake", ".txt")


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def read_text(path: Path) -> str:
    return path.read_text(encoding="utf-8")


def write_text(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8", newline="\n")


def read_first_value(path: Path, what: str) -> str:
    for raw in read_text(path).splitlines():
        line = raw.strip()
        if line and not line.startswith("#"):
            return line
    raise SystemExit(f"error: {path} 中找不到{what}")


def read_manifest(path: Path) -> Optional[dict]:
    if not path.is_file():
        return None
    import json

    try:
        return json.loads(read_text(path))
    except ValueError:
        return None


def replace_first_value(path: Path, value: str) -> None:
    """替换数据文件中第一个非注释行（保持注释与其余行不变）。"""
    lines = read_text(path).splitlines()
    replaced = False
    for index, raw in enumerate(lines):
        stripped = raw.strip()
        if stripped and not stripped.startswith("#"):
            lines[index] = value
            replaced = True
            break
    if not replaced:
        lines.append(value)
    write_text(path, "\n".join(lines) + "\n")


def write_asn_version_file(version: str) -> None:
    """保持注释不变，只替换版本行。"""
    replace_first_value(ASN_VERSION_FILE, version)


def detect_module_version(path: Path, explicit: Optional[str]) -> str:
    if explicit:
        parse_semver(explicit, "--module-version")
        return explicit
    match = re.search(r"(\d+\.\d+\.\d+)", path.name)
    if match is None:
        raise SystemExit(
            f"error: 无法从文件名 '{path.name}' 推断 ASN.1 版本，"
            "请用 --module-version 指定（如 18.11.0）"
        )
    value = match.group(1)
    parse_semver(value, "ASN.1 version")
    return value


def git(*args: str) -> subprocess.CompletedProcess:
    return subprocess.run(
        ["git", "-C", str(REPO_ROOT), *args],
        capture_output=True,
        text=True,
        encoding="utf-8",
        errors="replace",
    )


def worktree_is_clean() -> bool:
    result = git("status", "--porcelain")
    return result.returncode == 0 and not result.stdout.strip()


def snapshot_data_state() -> Dict[Path, Optional[bytes]]:
    snapshot: Dict[Path, Optional[bytes]] = {}
    for path in (SHA_FILE, ASN_VERSION_FILE, VERSION_FILE, MESSAGE_SET_FILE):
        snapshot[path] = path.read_bytes() if path.is_file() else None
    for path in DATA_DIR.glob(ASN_GLOB):
        snapshot[path] = path.read_bytes()
    return snapshot


def restore_snapshot(snapshot: Dict[Path, Optional[bytes]]) -> None:
    for path, content in snapshot.items():
        if content is None:
            if path.is_file():
                path.unlink()
        else:
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(content)
    # 迁移过程中新落盘的 38.331 输入也要清掉。
    for path in DATA_DIR.glob(ASN_GLOB):
        if path not in snapshot:
            path.unlink()


def format_path(path: List[dict]) -> str:
    return " → ".join(f"{level['Index']}/{level['Count']}" for level in path)


def diff_messages(old: dict, new: dict) -> dict:
    old_messages = {item["AsnName"]: item for item in old.get("Messages", [])}
    new_messages = {item["AsnName"]: item for item in new.get("Messages", [])}
    added = [new_messages[name] for name in new_messages if name not in old_messages]
    removed = [old_messages[name] for name in old_messages if name not in new_messages]
    changed: List[Tuple[dict, List[str]]] = []
    kind_shifted: List[dict] = []
    for name in new_messages:
        if name not in old_messages:
            continue
        before = old_messages[name]
        after = new_messages[name]
        fields: List[str] = []
        if before["Kind"] != after["Kind"]:
            fields.append(f"Kind {before['Kind']} → {after['Kind']}")
            kind_shifted.append(after)
        if before["KindName"] != after["KindName"]:
            fields.append(f"KindName {before['KindName']} → {after['KindName']}")
        if before["Struct"] != after["Struct"]:
            fields.append(f"结构体 {before['Struct']} → {after['Struct']}")
        if before["Channel"] != after["Channel"]:
            fields.append(f"信道 {before['Channel']} → {after['Channel']}")
        if before["WrapperBits"] != after["WrapperBits"]:
            fields.append(
                f"包装位数 {before['WrapperBits']} → {after['WrapperBits']}"
            )
        if format_path(before["Path"]) != format_path(after["Path"]):
            fields.append(
                f"包装路径 {format_path(before['Path'])} → {format_path(after['Path'])}"
            )
        if before.get("SchemaHash") and after.get("SchemaHash") and (
            before["SchemaHash"] != after["SchemaHash"]
        ):
            fields.append("结构布局（SchemaHash）变化")
        if fields:
            changed.append((after, fields))
    return {
        "added": added,
        "removed": removed,
        "changed": changed,
        "kind_shifted": kind_shifted,
        "old_count": len(old_messages),
        "new_count": len(new_messages),
    }


def diff_stats(old: dict, new: dict) -> List[Tuple[str, object, object]]:
    old_counts = old.get("TypeCounts", {})
    new_counts = new.get("TypeCounts", {})
    keys = sorted(set(old_counts) | set(new_counts))
    return [
        (key, old_counts.get(key), new_counts.get(key))
        for key in keys
        if old_counts.get(key) != new_counts.get(key)
    ]


def changed_files() -> List[str]:
    result = git("status", "--porcelain")
    paths: List[str] = []
    if result.returncode != 0:
        return paths
    for line in result.stdout.splitlines():
        if len(line) < 4:
            continue
        path = line[3:].strip()
        if " -> " in path:  # rename 条目
            path = path.split(" -> ", 1)[1]
        paths.append(path)
    return paths


def categorize_changes(paths: Sequence[str]) -> Dict[str, List[str]]:
    groups: Dict[str, List[str]] = {}
    for path in paths:
        if path.startswith("data/"):
            group = "data/（单一来源）"
        elif path.startswith("src/generated/"):
            group = "src/generated/（生成代码）"
        elif path.startswith("include/rrc_codec/"):
            group = "include/rrc_codec/（生成头）"
        elif path.startswith("tests/generated/"):
            group = "tests/generated/（测试生成物）"
        elif path.startswith("generated/"):
            group = "generated/（统计/清单）"
        else:
            group = "其他"
        groups.setdefault(group, []).append(path)
    return groups


def _iter_scan_files() -> List[Path]:
    files: List[Path] = []
    for directory in SCAN_DIRS:
        root = REPO_ROOT / directory
        if not root.is_dir():
            continue
        for path in root.rglob("*"):
            if not path.is_file():
                continue
            relative = path.relative_to(REPO_ROOT).as_posix()
            if any(relative.startswith(prefix) for prefix in SCAN_EXCLUDE_PREFIXES):
                continue
            if path.suffix not in SCAN_SUFFIXES:
                continue
            files.append(path)
    for name in ("CMakeLists.txt", "README.md"):
        path = REPO_ROOT / name
        if path.is_file():
            files.append(path)
    return files


def find_references(terms: Sequence[str]) -> List[str]:
    """在手写代码/文档中检索旧消息名/结构体名，返回 ``path:line: text``。"""
    if not terms:
        return []
    pattern = re.compile(
        r"\b(" + "|".join(re.escape(term) for term in terms) + r")\b"
    )
    hits: List[str] = []
    for path in _iter_scan_files():
        try:
            text = path.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        for number, line in enumerate(text.splitlines(), start=1):
            if pattern.search(line):
                hits.append(
                    f"{path.relative_to(REPO_ROOT).as_posix()}:{number}: "
                    f"{line.strip()}"
                )
                if len(hits) >= 40:
                    return hits
    return hits


def render_notes(
    *,
    args: argparse.Namespace,
    old_sha: str,
    new_sha: str,
    old_version: str,
    new_version: str,
    library_version: str,
    old_manifest: Optional[dict],
    new_manifest: dict,
    message_diff: Optional[dict],
    stats_diff: List[Tuple[str, object, object]],
    groups: Dict[str, List[str]],
    references: List[str],
    check_passed: bool,
) -> str:
    stamp = datetime.now().astimezone().strftime("%Y-%m-%d %H:%M:%S %Z")
    old_input = old_manifest.get("InputFile", "?") if old_manifest else "?"
    new_input = new_manifest.get("InputFile", "?")
    lines: List[str] = [
        "# ASN.1 迁移报告（自动生成）",
        "",
        f"- 时间：{stamp}",
        f"- 生成器：rrcgen {GENERATOR_VERSION}",
        f"- 输入：`data/{old_input}`（SHA-256 `{old_sha[:12]}…`）→ "
        f"`data/{new_input}`（SHA-256 `{new_sha[:12]}…`）",
        f"- ASN.1 版本：{old_version} → {new_version}",
        f"- 库版本：{library_version}"
        + ("（已由 --library-version 更新）" if args.library_version else "（未变）"),
        f"- 消息数：{message_diff['old_count'] if message_diff else '?'} → "
        f"{message_diff['new_count'] if message_diff else new_manifest.get('MessageCount')}",
        "",
        "## 1. 自动完成",
        "",
        "- [x] 更新 `data/asn-input.sha256`、`data/asn-version.txt`"
        + ("、`data/version.txt`" if args.library_version else ""),
        "- [x] 删除旧 38.331 输入（git 可恢复），新输入落盘",
        "- [x] 重生成全部生成物（`--update-baseline` 维护 `data/message-set.txt`）",
        "- [x] 生成物一致性检查："
        + ("通过" if check_passed else "**未通过，请检查**"),
        "",
    ]

    lines.extend(["## 2. 消息集变化", ""])
    if message_diff is None or old_manifest is None:
        lines.append("旧 `generated/rrc_manifest.json` 不可读，无法比对消息集。")
    else:
        added = message_diff["added"]
        removed = message_diff["removed"]
        changed = message_diff["changed"]
        lines.append(
            f"- 新增 {len(added)} 个" if added else "- 新增：无"
        )
        for item in added:
            lines.append(
                f"  - `{item['KindName']}`（{item['AsnName']}，"
                f"Kind {item['Kind']}，{item['Channel']}）"
            )
        lines.append(f"- 删除 {len(removed)} 个" if removed else "- 删除：无")
        for item in removed:
            lines.append(
                f"  - `{item['KindName']}`（{item['AsnName']}，Kind {item['Kind']}）"
            )
        if message_diff["kind_shifted"]:
            lines.append(
                f"- MessageKind 数值漂移：{len(message_diff['kind_shifted'])} 个消息"
                "（插入/删除导致，属于 ABI 变化）"
            )
            for item in message_diff["kind_shifted"][:10]:
                lines.append(f"  - `{item['KindName']}` → Kind {item['Kind']}")
        if changed:
            lines.append(f"- 结构/信道/包装位变化：{len(changed)} 个")
            lines.extend(["", "| 消息 | 变化 |", "|---|---|"])
            for item, fields in changed:
                lines.append(
                    f"| `{item['KindName']}` | {'；'.join(fields)} |"
                )
        if not (added or removed or changed):
            lines.append("- 消息集与消息级元数据无变化。")
    lines.append("")

    lines.extend(["## 3. 生成统计变化", ""])
    if stats_diff:
        lines.extend(["| 统计项 | 迁移前 | 迁移后 |", "|---|---:|---:|"])
        for key, before, after in stats_diff:
            lines.append(f"| `{key}` | {before} | {after} |")
    else:
        lines.append("统计项无变化。")
    lines.append("")

    lines.extend(["## 4. 生成物变更", ""])
    total = sum(len(paths) for paths in groups.values())
    lines.append(f"共 {total} 个文件发生变化：")
    lines.append("")
    for group in sorted(groups):
        paths = groups[group]
        lines.append(f"- **{group}**：{len(paths)} 个")
        if len(paths) <= 15:
            for path in paths:
                lines.append(f"  - `{path}`")
    lines.append("")

    lines.extend(["## 5. 受影响的手写文件（自动检索）", ""])
    if references:
        lines.append(
            "以下手写代码/文档仍引用迁移前出现的消息名或结构体名，需人工确认："
        )
        lines.append("")
        for reference in references:
            lines.append(f"- `{reference}`")
    else:
        lines.append(
            "未在手写代码中发现对变更/删除消息名的直接引用"
            "（字段级变化会在编译期或 golden 测试中暴露）。"
        )
    lines.append("")

    lines.extend(["## 6. 仍需人工 review", ""])
    manual_items: List[str] = []
    if old_version != new_version:
        manual_items.append(
            f"ASN.1 版本 {old_version} → {new_version} 视为 ABI 破坏：确认 "
            "`data/version.txt` 是否需要升主版本（可用 `--library-version`）、"
            "更新 `CHANGELOG.md`"
        )
        manual_items.append(
            "更新文档/脚本中的 ASN.1 版本引用（`grep` 旧版本号：README、ci 注释）"
        )
    if message_diff and (
        message_diff["added"]
        or message_diff["removed"]
        or message_diff["kind_shifted"]
    ):
        manual_items.append(
            "消息集/MessageKind 变化属于 ABI 破坏：评估并更新 `data/version.txt` "
            "主版本、`CHANGELOG.md` 与文档中的消息数"
        )
    if message_diff and message_diff["changed"]:
        manual_items.append(
            "消息结构/信道/包装位变化：复核手写字段引用（见第 5 节）与 "
            "`generated/rrc_message_index.md` 的包装位表"
        )
    if message_diff and any(
        item["AsnName"] == "MIB" for item, _ in message_diff["changed"]
    ):
        manual_items.append(
            "MIB 结构变化：`tests/golden/GoldenVectorTests.cpp` 的黄金字节 "
            "`5471ac` 需用参考实现重新计算，examples/tests/install 的 MIB 断言同步"
        )
    if stats_diff:
        manual_items.append(
            "更新文档中的统计数字（`README.md`；"
            "`generated/rrc_message_index.md` 已自动更新）"
        )
    if references:
        manual_items.append(
            "处理第 5 节列出的手写文件引用（删除/重命名的消息或结构体）"
        )
    manual_items.extend(
        [
            "运行全量验证：`pwsh ci/ci-windows.ps1`（或 `bash ci/ci-linux.sh`）",
            "确认 `python -m rrcgen --input \"../../data/38.331_v*.asn\" "
            "--check-input-sha256 ../../data/asn-input.sha256 --repo-root ../.. --check` 通过",
            "review 本报告与 `git diff`，把生成物与数据文件一起提交",
        ]
    )
    for item in manual_items:
        lines.append(f"- [ ] {item}")
    lines.append("")

    lines.extend(
        [
            "## 7. 回滚",
            "",
            "```powershell",
            "git restore .",
            "git clean -fd data generated include src tests   # 删除新增的未跟踪文件",
            "```",
            "",
            "（本报告由 `tools/update_asn.py` 生成，可随迁移提交或删除。）",
            "",
        ]
    )
    return "\n".join(lines)


def run_generator(update_baseline: bool) -> int:
    argv = [
        "--input",
        str(DATA_DIR / ASN_GLOB),
        "--check-input-sha256",
        str(SHA_FILE),
        "--repo-root",
        str(REPO_ROOT),
    ]
    if update_baseline:
        argv.append("--update-baseline")
    return rrcgen_main(argv)


def run_check() -> bool:
    argv = [
        "--input",
        str(DATA_DIR / ASN_GLOB),
        "--check-input-sha256",
        str(SHA_FILE),
        "--repo-root",
        str(REPO_ROOT),
        "--check",
    ]
    return rrcgen_main(argv) == 0


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        prog="update_asn.py",
        description="一键 ASN.1 迁移：更新 data/、重生成并输出 MIGRATION_NOTES.md",
    )
    parser.add_argument("asn", help="新的 38.331 ASN.1 文件路径")
    parser.add_argument(
        "--module-version",
        default=None,
        help="新的 ASN.1 版本（默认从文件名推断，如 38.331_v18.11.0.asn）",
    )
    parser.add_argument(
        "--library-version",
        default=None,
        help="同时更新库语义版本（data/version.txt），如 3.0.0",
    )
    parser.add_argument(
        "--allow-dirty",
        action="store_true",
        help="允许工作区不干净（不自动 git 回滚生成物）",
    )
    return parser


def main(argv: Optional[Sequence[str]] = None) -> int:
    args = build_parser().parse_args(argv)
    new_input = Path(args.asn).resolve()
    if not new_input.is_file():
        print(f"error: 输入文件不存在：{new_input}", file=sys.stderr)
        return 2

    clean = worktree_is_clean()
    if not clean and not args.allow_dirty:
        print(
            "error: git 工作区不干净。请先提交/暂存改动，或加 --allow-dirty。",
            file=sys.stderr,
        )
        print(git("status", "--short").stdout, file=sys.stderr)
        return 2

    old_sha = read_first_value(SHA_FILE, "SHA-256")
    old_version = read_first_value(ASN_VERSION_FILE, "ASN.1 版本")
    library_version = read_first_value(VERSION_FILE, "库版本")
    new_version = detect_module_version(new_input, args.module_version)
    if args.library_version:
        parse_semver(args.library_version, "--library-version")
    old_manifest = read_manifest(MANIFEST_FILE)

    new_sha = sha256_file(new_input)
    target = DATA_DIR / f"38.331_v{new_version}.asn"
    old_inputs = [
        path for path in DATA_DIR.glob(ASN_GLOB) if path != target
    ]
    snapshot = snapshot_data_state()

    if clean:
        print(f"rrcgen update: {old_version} → {new_version}")
        print(f"  输入：{new_input.name} → data/{target.name}")
        print(f"  SHA-256：{old_sha[:12]}… → {new_sha[:12]}…")
        if old_inputs:
            print("  删除旧输入：" + ", ".join(path.name for path in old_inputs))

    try:
        new_input_bytes = new_input.read_bytes()
        if not target.is_file() or target.read_bytes() != new_input_bytes:
            target.write_bytes(new_input_bytes)
        for path in old_inputs:
            path.unlink()
        write_text(SHA_FILE, f"{new_sha}  data/{target.name}\n")
        write_asn_version_file(new_version)
        if args.library_version:
            replace_first_value(VERSION_FILE, args.library_version)

        rc = run_generator(update_baseline=True)
        if rc != 0:
            raise RuntimeError(f"生成器失败（退出码 {rc}）")
    except Exception as error:  # noqa: BLE001 - CLI 边界需要回滚后报告
        detail = str(error) or type(error).__name__
        print(f"error: {detail}", file=sys.stderr)
        restore_snapshot(snapshot)
        if clean:
            restore = git("restore", "--worktree", "--", ".")
            if restore.returncode != 0:
                print(restore.stderr, file=sys.stderr)
        print("已回滚 data/ 文件；请检查生成物并用 git 恢复未跟踪文件。", file=sys.stderr)
        return 1

    new_manifest = read_manifest(MANIFEST_FILE) or {}
    message_diff = (
        diff_messages(old_manifest, new_manifest) if old_manifest else None
    )
    stats_diff = diff_stats(old_manifest, new_manifest) if old_manifest else []
    paths = changed_files()
    groups = categorize_changes(paths)

    terms: List[str] = []
    if message_diff:
        for item in message_diff["removed"]:
            terms.extend([item["AsnName"], item["KindName"], item["Struct"]])
        for item, _ in message_diff["changed"]:
            terms.extend([item["AsnName"], item["Struct"]])
    references = find_references(sorted(set(terms)))

    check_passed = run_check()
    notes = render_notes(
        args=args,
        old_sha=old_sha,
        new_sha=new_sha,
        old_version=old_version,
        new_version=new_version,
        library_version=args.library_version or library_version,
        old_manifest=old_manifest,
        new_manifest=new_manifest,
        message_diff=message_diff,
        stats_diff=stats_diff,
        groups=groups,
        references=references,
        check_passed=check_passed,
    )
    write_text(NOTES_FILE, notes)

    print("")
    if message_diff:
        print(
            f"消息集：{message_diff['old_count']} → {message_diff['new_count']}"
            f"（新增 {len(message_diff['added'])}，删除 {len(message_diff['removed'])}，"
            f"变化 {len(message_diff['changed'])}）"
        )
    print(f"生成物一致性：{'通过' if check_passed else '未通过'}")
    print(f"迁移报告：{NOTES_FILE.relative_to(REPO_ROOT).as_posix()}")
    print("下一步：按报告第 6 节人工 review，然后运行全量 CI 并提交。")
    return 0 if check_passed else 1


if __name__ == "__main__":
    sys.exit(main())
