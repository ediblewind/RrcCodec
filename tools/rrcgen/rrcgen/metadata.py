"""``data/`` 下单一来源元数据的读取与校验。

仓库里与 ASN.1 版本相关的"事实"只保留在 ``data/``：

* ``data/version.txt``      — 库语义版本 + C API 版本（CMake 与生成器共用）；
* ``data/asn-version.txt``  — 生成代码绑定的 ASN.1 版本；
* ``data/message-set.txt``  — 实际消息集合基线（仅用于一致性校验，不参与提取）；
* ``data/asn-input.sha256`` — 输入文件校验和（``sha256sum`` 格式）。

生成器与 CI 都从这里读，避免版本号/消息清单在多处手写。
"""

from __future__ import annotations

import re
from pathlib import Path
from typing import List, Tuple

SEMVER_RE = re.compile(r"^(\d+)\.(\d+)\.(\d+)$")

VERSION_FILE = "data/version.txt"
ASN_VERSION_FILE = "data/asn-version.txt"
MESSAGE_SET_FILE = "data/message-set.txt"


def _read_data_lines(path: Path) -> List[str]:
    try:
        text = path.read_text(encoding="utf-8")
    except OSError as error:
        raise ValueError(f"cannot read {path}: {error}") from error
    lines: List[str] = []
    for raw in text.splitlines():
        line = raw.strip()
        if not line or line.startswith("#"):
            continue
        lines.append(line)
    return lines


def parse_semver(text: str, what: str) -> Tuple[int, int, int]:
    match = SEMVER_RE.match(text.strip())
    if match is None:
        raise ValueError(f"invalid {what} '{text}' (expected major.minor.patch)")
    return int(match.group(1)), int(match.group(2)), int(match.group(3))


def read_versions(repo_root: Path) -> Tuple[str, int]:
    """返回 ``(库语义版本, C API 版本)``。"""
    lines = _read_data_lines(repo_root / VERSION_FILE)
    if not lines:
        raise ValueError(f"{VERSION_FILE} is empty")
    library_version = lines[0]
    parse_semver(library_version, "library version")
    api_version = 1
    if len(lines) > 1:
        try:
            api_version = int(lines[1], 10)
        except ValueError as error:
            raise ValueError(
                f"invalid C API version '{lines[1]}' in {VERSION_FILE}"
            ) from error
        if api_version < 1:
            raise ValueError(f"C API version must be >= 1 in {VERSION_FILE}")
    return library_version, api_version


def read_asn_version(repo_root: Path) -> str:
    lines = _read_data_lines(repo_root / ASN_VERSION_FILE)
    if not lines:
        raise ValueError(f"{ASN_VERSION_FILE} is empty")
    value = lines[0]
    parse_semver(value, "ASN.1 version")
    return value


def read_message_set(repo_root: Path) -> List[str]:
    lines = _read_data_lines(repo_root / MESSAGE_SET_FILE)
    if not lines:
        raise ValueError(f"{MESSAGE_SET_FILE} is empty")
    return lines


def write_message_set(repo_root: Path, message_names: List[str]) -> Path:
    """重写消息集基线（``--update-baseline``）；人工只需 review diff。"""
    path = repo_root / MESSAGE_SET_FILE
    text = (
        "# 38.331 附录 A 的实际消息（ASN.1 名，按 MessageKind 1..N 顺序）。\n"
        "# 由 `python -m rrcgen ... --update-baseline` 自动维护；请 review diff 后提交。\n"
        + "\n".join(message_names)
        + "\n"
    )
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="utf-8", newline="\n")
    return path
