"""Lexer for the 38.331 ASN.1 subset.

The lexer runs on the comment-blanked normalized text, so comments never reach
it.  Every token carries a :class:`SourceLocation` (file, line, column,
byte offset).
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import List

from .diagnostics import DiagnosticCode, DiagnosticCollector, SourceLocation
from .normalize import NormalizedSource

# Token kinds.
IDENT = "IDENT"
NUMBER = "NUMBER"
STRING = "STRING"
ASSIGN = "::="
ELLIPSIS = "..."
DOTDOT = ".."
LDBRACKET = "[["
RDBRACKET = "]]"
LBRACE = "{"
RBRACE = "}"
LPAREN = "("
RPAREN = ")"
LBRACKET = "["
RBRACKET = "]"
COMMA = ","
SEMICOLON = ";"
EOF = "EOF"

_SINGLE_CHAR_TOKENS = {
    "{": LBRACE,
    "}": RBRACE,
    "(": LPAREN,
    ")": RPAREN,
    "[": LBRACKET,
    "]": RBRACKET,
    ",": COMMA,
    ";": SEMICOLON,
}


@dataclass(frozen=True)
class Token:
    """A lexical token."""

    kind: str
    text: str
    loc: SourceLocation

    def is_ident(self, value: str | None = None) -> bool:
        if self.kind != IDENT:
            return False
        return value is None or self.text == value

    def is_keyword(self, value: str) -> bool:
        return self.kind == IDENT and self.text == value

    def __str__(self) -> str:  # pragma: no cover - debugging aid
        return f"{self.kind}({self.text!r})@{self.loc.line}:{self.loc.column}"


def _is_ident_start(char: str) -> bool:
    return ("A" <= char <= "Z") or ("a" <= char <= "z")


def _is_ident_continue(char: str) -> bool:
    return _is_ident_start(char) or ("0" <= char <= "9")


def tokenize(
    source: NormalizedSource,
    diagnostics: DiagnosticCollector,
) -> List[Token]:
    """Tokenize *source*.

    A lexical error is reported and the offending character skipped so that
    parsing can continue and report further errors.
    """
    text = source.stripped
    tokens: List[Token] = []
    index = 0
    line = 1
    column = 1
    length = len(text)

    def make_location(offset: int, at_line: int, at_column: int) -> SourceLocation:
        return SourceLocation(
            file=source.file_name,
            line=at_line,
            column=at_column,
            byte_offset=offset,
        )

    while index < length:
        char = text[index]

        if char == "\n":
            index += 1
            line += 1
            column = 1
            continue
        if char in " \t":
            index += 1
            column += 1
            continue

        start_offset = index
        start_line = line
        start_column = column

        if char == ":":
            if text.startswith("::=", index):
                tokens.append(Token(ASSIGN, "::=", make_location(start_offset, line, column)))
                index += 3
                column += 3
                continue
            diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"unexpected character ':' (expected '::=')",
                make_location(start_offset, line, column),
            )
            index += 1
            column += 1
            continue

        if char == ".":
            if text.startswith("...", index):
                tokens.append(Token(ELLIPSIS, "...", make_location(start_offset, line, column)))
                index += 3
                column += 3
                continue
            if text.startswith("..", index):
                tokens.append(Token(DOTDOT, "..", make_location(start_offset, line, column)))
                index += 2
                column += 2
                continue
            diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"unexpected character '.'",
                make_location(start_offset, line, column),
            )
            index += 1
            column += 1
            continue

        if text.startswith("[[", index):
            tokens.append(Token(LDBRACKET, "[[", make_location(start_offset, line, column)))
            index += 2
            column += 2
            continue
        if text.startswith("]]", index):
            tokens.append(Token(RDBRACKET, "]]", make_location(start_offset, line, column)))
            index += 2
            column += 2
            continue

        if char in _SINGLE_CHAR_TOKENS:
            tokens.append(
                Token(_SINGLE_CHAR_TOKENS[char], char, make_location(start_offset, line, column))
            )
            index += 1
            column += 1
            continue

        if char == '"':
            cursor = index + 1
            buffer: List[str] = []
            closed = False
            while cursor < length:
                current = text[cursor]
                if current == "\n":
                    break
                if current == '"':
                    if cursor + 1 < length and text[cursor + 1] == '"':
                        buffer.append('"')
                        cursor += 2
                        continue
                    closed = True
                    cursor += 1
                    break
                buffer.append(current)
                cursor += 1
            if not closed:
                diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    "unterminated string literal",
                    make_location(start_offset, line, column),
                )
            value = "".join(buffer)
            tokens.append(Token(STRING, value, make_location(start_offset, line, column)))
            column += cursor - index
            index = cursor
            continue

        if char == "-" and index + 1 < length and "0" <= text[index + 1] <= "9":
            cursor = index + 1
            while cursor < length and "0" <= text[cursor] <= "9":
                cursor += 1
            tokens.append(
                Token(NUMBER, text[index:cursor], make_location(start_offset, line, column))
            )
            column += cursor - index
            index = cursor
            continue

        if "0" <= char <= "9":
            cursor = index + 1
            while cursor < length and "0" <= text[cursor] <= "9":
                cursor += 1
            tokens.append(
                Token(NUMBER, text[index:cursor], make_location(start_offset, line, column))
            )
            column += cursor - index
            index = cursor
            continue

        if _is_ident_start(char):
            cursor = index + 1
            while cursor < length:
                current = text[cursor]
                if _is_ident_continue(current):
                    cursor += 1
                    continue
                if (
                    current == "-"
                    and cursor + 1 < length
                    and _is_ident_continue(text[cursor + 1])
                ):
                    cursor += 1
                    continue
                break
            tokens.append(
                Token(IDENT, text[index:cursor], make_location(start_offset, line, column))
            )
            column += cursor - index
            index = cursor
            continue

        diagnostics.error(
            DiagnosticCode.PARSE_ERROR,
            f"unexpected character {char!r}",
            make_location(start_offset, line, column),
        )
        index += 1
        column += 1

    tokens.append(
        Token(
            EOF,
            "",
            SourceLocation(
                file=source.file_name,
                line=line,
                column=column,
                byte_offset=index,
            ),
        )
    )
    return tokens


__all__ = [
    "Token",
    "tokenize",
    "IDENT",
    "NUMBER",
    "STRING",
    "ASSIGN",
    "ELLIPSIS",
    "DOTDOT",
    "LDBRACKET",
    "RDBRACKET",
    "LBRACE",
    "RBRACE",
    "LPAREN",
    "RPAREN",
    "LBRACKET",
    "RBRACKET",
    "COMMA",
    "SEMICOLON",
    "EOF",
]
