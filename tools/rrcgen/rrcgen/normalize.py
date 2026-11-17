"""Input normalization: UTF-8 validation, newline unification, comment
blanking (positions preserved) and TAG span extraction.

The normalized text keeps every byte of the original file at the same
*line/column* position, except that line endings are unified to ``\\n`` and a
UTF-8 BOM is removed.  Comments are replaced by spaces (comments never contain
newlines) so the lexer sees pure ASN.1 without having to re-implement comment
semantics; the original comment text is kept aside for documentation output.
"""

from __future__ import annotations

import hashlib
import re
from dataclasses import dataclass
from pathlib import Path
from typing import List, Optional, Tuple

from .diagnostics import DiagnosticCode, DiagnosticCollector, SourceLocation

_TAG_RE = re.compile(r"^TAG-(?P<name>[A-Za-z0-9-]+)-(?P<kind>START|STOP)\s*$")


@dataclass(frozen=True)
class Comment:
    """A ``--`` comment found in the input (text excludes the leading ``--``)."""

    line: int
    column: int
    text: str
    byte_offset: int


@dataclass(frozen=True)
class TagSpan:
    """A ``-- TAG-<NAME>-START`` / ``-- TAG-<NAME>-STOP`` region."""

    name: str
    start_line: int
    stop_line: int


@dataclass(frozen=True)
class NormalizedSource:
    """Result of :func:`normalize_source`."""

    file_name: str
    text: str
    stripped: str
    comments: Tuple[Comment, ...]
    tags: Tuple[TagSpan, ...]
    sha256: str

    def comment_lines(self) -> dict[int, List[str]]:
        """Map 1-based line number to the list of comment texts on that line."""
        result: dict[int, List[str]] = {}
        for comment in self.comments:
            result.setdefault(comment.line, []).append(comment.text)
        return result

    def tag_for_line(self, line: int) -> Optional[str]:
        """Return the TAG span name that contains *line* (innermost), if any."""
        found: Optional[str] = None
        for span in self.tags:
            if span.start_line <= line <= span.stop_line:
                found = span.name
        return found


def sha256_of_file(path: Path) -> str:
    """Return the lower-case hex SHA-256 digest of *path*."""
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1 << 20), b""):
            digest.update(block)
    return digest.hexdigest()


def _blank_comment(line: str, start: int) -> str:
    """Return *line* with the range [start, len) replaced by spaces."""
    return line[:start] + " " * (len(line) - start)


def normalize_source(
    path: Path,
    diagnostics: DiagnosticCollector,
    file_name: Optional[str] = None,
) -> Optional[NormalizedSource]:
    """Read, validate and normalize the ASN.1 input file.

    Returns ``None`` when the file cannot be read or is not valid UTF-8 (an
    error diagnostic is emitted in that case).
    """
    display_name = file_name or path.name
    try:
        raw = path.read_bytes()
    except OSError as exc:  # pragma: no cover - environment dependent
        diagnostics.error(
            DiagnosticCode.INPUT_INVALID,
            f"cannot read input file: {exc}",
        )
        return None

    digest = hashlib.sha256(raw).hexdigest()
    offset = 0
    if raw.startswith(b"\xef\xbb\xbf"):
        offset = 3
        raw = raw[offset:]
    try:
        decoded = raw.decode("utf-8")
    except UnicodeDecodeError as exc:
        diagnostics.error(
            DiagnosticCode.INPUT_INVALID,
            f"input is not valid UTF-8: {exc}",
        )
        return None

    # Unify line endings (CRLF / lone CR -> LF).  Byte offsets are relative to
    # the normalized text; that is documented in the generated IR.
    text = decoded.replace("\r\n", "\n").replace("\r", "\n")

    comments: List[Comment] = []
    stripped_lines: List[str] = []
    for index, line in enumerate(text.split("\n")):
        stripped = line
        quote = -1
        position = 0
        while position < len(line) - 1:
            char = line[position]
            if char == '"':
                quote = -1 if quote >= 0 else position
                position += 1
                continue
            if quote < 0 and char == "-" and line[position + 1] == "-":
                text_part = line[position + 2 :].rstrip()
                comments.append(
                    Comment(
                        line=index + 1,
                        column=position + 1,
                        text=text_part,
                        byte_offset=0,
                    )
                )
                stripped = _blank_comment(line, position)
                break
            position += 1
        stripped_lines.append(stripped)
    stripped_text = "\n".join(stripped_lines)

    # Recompute byte offsets for comments (offset of the first '-' character).
    comment_offsets: List[Comment] = []
    offset = 0
    for index, line in enumerate(stripped_lines):
        comment = None
        for candidate in comments:
            if candidate.line == index + 1:
                comment = candidate
                break
        if comment is not None:
            comment_offsets.append(
                Comment(
                    line=comment.line,
                    column=comment.column,
                    text=comment.text,
                    byte_offset=offset + comment.column - 1,
                )
            )
        offset += len(line) + 1
    comments = comment_offsets

    tags = _collect_tags(comments)
    return NormalizedSource(
        file_name=display_name,
        text=text,
        stripped=stripped_text,
        comments=tuple(comments),
        tags=tuple(tags),
        sha256=digest,
    )


def _collect_tags(comments: List[Comment]) -> List[TagSpan]:
    """Pair up ``TAG-<NAME>-START`` / ``TAG-<NAME>-STOP`` comments."""
    open_spans: dict[str, int] = {}
    spans: List[TagSpan] = []
    for comment in comments:
        match = _TAG_RE.match(comment.text.strip())
        if not match:
            continue
        name = match.group("name")
        if match.group("kind") == "START":
            open_spans.setdefault(name, comment.line)
        else:
            start = open_spans.pop(name, None)
            if start is not None and comment.line >= start:
                spans.append(TagSpan(name=name, start_line=start, stop_line=comment.line))
    # Unclosed spans extend to the end of the file (defensive).
    for name, start in sorted(open_spans.items(), key=lambda item: item[1]):
        spans.append(TagSpan(name=name, start_line=start, stop_line=1 << 30))
    spans.sort(key=lambda span: (span.start_line, span.stop_line))
    return spans


def location_at(
    source: NormalizedSource,
    line: int,
    column: int,
    byte_offset: int,
) -> SourceLocation:
    """Build a :class:`SourceLocation` for the given position."""
    return SourceLocation(
        file=source.file_name,
        line=line,
        column=column,
        byte_offset=byte_offset,
    )


__all__ = [
    "Comment",
    "TagSpan",
    "NormalizedSource",
    "normalize_source",
    "sha256_of_file",
    "location_at",
]
