"""Hand-written recursive-descent parser for the supported ASN.1 subset.

The parser covers the subset actually used by 38.331 (design document 4.2).
Anything outside the subset is reported as ``RRCGEN_UNSUPPORTED_CONSTRUCT`` or
``RRCGEN_PARSE_ERROR`` with a source location; unsupported constructs are never
silently skipped.
"""

from __future__ import annotations

from typing import Dict, List, Optional

from . import ast
from .diagnostics import DiagnosticCode, DiagnosticCollector
from .lexer import (
    ASSIGN,
    COMMA,
    DOTDOT,
    ELLIPSIS,
    EOF,
    IDENT,
    LBRACE,
    LBRACKET,
    LDBRACKET,
    LPAREN,
    NUMBER,
    RBRACE,
    RBRACKET,
    RDBRACKET,
    RPAREN,
    SEMICOLON,
    STRING,
    Token,
    tokenize,
)
from .normalize import NormalizedSource

_TAG_PREFIX = "TAG-"


class ParseAbort(Exception):
    """Abort the current assignment and recover at the next top-level one."""


class Parser:
    """Recursive-descent parser."""

    def __init__(
        self,
        source: NormalizedSource,
        diagnostics: DiagnosticCollector,
        target_module: str,
    ) -> None:
        self._source = source
        self._diagnostics = diagnostics
        self._target_module = target_module
        self._tokens: List[Token] = tokenize(source, diagnostics)
        self._index = 0
        self._depth = 0
        self._comments: Dict[int, List[str]] = {}
        for comment in source.comments:
            text = comment.text.strip()
            if text.startswith(_TAG_PREFIX):
                continue
            self._comments.setdefault(comment.line, []).append(text)

    # -- token helpers -----------------------------------------------------

    def peek(self, lookahead: int = 0) -> Token:
        position = self._index + lookahead
        if position >= len(self._tokens):
            return self._tokens[-1]
        return self._tokens[position]

    def previous(self) -> Token:
        return self._tokens[max(0, self._index - 1)]

    def advance(self) -> Token:
        token = self._tokens[self._index]
        if token.kind != EOF:
            self._index += 1
            if token.kind in (LBRACE, LPAREN, LDBRACKET, LBRACKET):
                self._depth += 1
            elif token.kind in (RBRACE, RPAREN, RDBRACKET, RBRACKET):
                self._depth = max(0, self._depth - 1)
        return token

    def _describe(self, token: Token) -> str:
        if token.kind == EOF:
            return "end of file"
        if token.kind == IDENT:
            return f"'{token.text}'"
        return f"'{token.text}'"

    def expect(self, kind: str, context: str) -> Token:
        token = self.peek()
        if token.kind != kind:
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"expected {kind} while parsing {context}, found {self._describe(token)}",
                token.loc,
            )
            raise ParseAbort()
        return self.advance()

    def expect_ident(self, context: str, value: Optional[str] = None) -> Token:
        token = self.peek()
        if token.kind != IDENT or (value is not None and token.text != value):
            expected = "identifier" if value is None else f"'{value}'"
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"expected {expected} while parsing {context}, found {self._describe(token)}",
                token.loc,
            )
            raise ParseAbort()
        return self.advance()

    def _skip_commas(self) -> None:
        while self.peek().kind in (COMMA, SEMICOLON):
            self.advance()

    # -- comments ----------------------------------------------------------

    def _take_comments(self, first_line: int, last_line: int) -> str:
        parts: List[str] = []
        line = first_line - 1
        while line >= 1 and line in self._comments:
            parts.insert(0, " ".join(self._comments.pop(line)))
            line -= 1
        if last_line in self._comments:
            parts.append(" ".join(self._comments.pop(last_line)))
        return " ".join(part for part in parts if part).strip()

    # -- module ------------------------------------------------------------

    def parse(self) -> List[ast.ModuleDefinition]:
        modules: List[ast.ModuleDefinition] = []
        while self.peek().kind != EOF:
            modules.append(self._parse_module())
        return modules

    def _parse_module(self) -> ast.ModuleDefinition:
        name_token = self.expect_ident("module name")
        module = ast.ModuleDefinition(
            name=name_token.text,
            start_line=name_token.loc.line,
            end_line=name_token.loc.line,
        )
        self.expect_ident("module header", "DEFINITIONS")
        while self.peek().kind not in (ASSIGN, EOF):
            self.advance()
        self.expect(ASSIGN, "module header")
        self.expect_ident("module header", "BEGIN")

        if module.name != self._target_module:
            while self.peek().kind != EOF:
                token = self.advance()
                if token.is_ident("END"):
                    module.end_line = token.loc.line
                    return module
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"module '{module.name}' has no END",
                name_token.loc,
            )
            return module

        while True:
            token = self.peek()
            if token.kind == EOF:
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    f"module '{module.name}' has no END",
                    name_token.loc,
                )
                module.end_line = token.loc.line
                return module
            if token.is_ident("END"):
                self.advance()
                module.end_line = token.loc.line
                return module
            if token.kind != IDENT:
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    f"expected top-level assignment, found {self._describe(token)}",
                    token.loc,
                )
                self.advance()
                continue
            if token.is_ident("IMPORTS") or token.is_ident("EXPORTS"):
                self._diagnostics.error(
                    DiagnosticCode.UNSUPPORTED_CONSTRUCT,
                    f"'{token.text}' is not supported for module '{module.name}'",
                    token.loc,
                )
                self._skip_statement()
                continue
            try:
                module.assignments.append(self._parse_assignment())
            except ParseAbort:
                self._recover()
        return module

    def _skip_statement(self) -> None:
        while self.peek().kind not in (SEMICOLON, EOF):
            self.advance()
        if self.peek().kind == SEMICOLON:
            self.advance()

    def _recover(self) -> None:
        self._depth = 0
        while self.peek().kind != EOF:
            token = self.peek()
            if token.kind == IDENT and token.text == "END":
                return
            if token.kind == IDENT:
                lookahead = self.peek(1)
                if lookahead.kind in (ASSIGN, LBRACE):
                    return
            self.advance()

    # -- assignments -------------------------------------------------------

    def _parse_assignment(self) -> ast.Assignment:
        name_token = self.peek()
        if name_token.kind != IDENT:
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"expected assignment name, found {self._describe(name_token)}",
                name_token.loc,
            )
            raise ParseAbort()
        self.advance()

        if self.peek().kind == LBRACE:
            self.advance()
            parameter = self.expect_ident("parameter list")
            self.expect(RBRACE, "parameter list")
            self.expect(ASSIGN, "parameterized type assignment")
            type_expr = self._parse_type()
            return ast.ParamTypeAssignment(
                loc=self._loc(name_token),
                name=name_token.text,
                param_name=parameter.text,
                type=type_expr,
            )

        if self.peek().kind == ASSIGN:
            self.advance()
            type_expr = self._parse_type()
            return ast.TypeAssignment(
                loc=self._loc(name_token),
                name=name_token.text,
                type=type_expr,
            )

        # Value assignment: ``name Type ::= value``.
        type_expr = self._parse_type()
        self.expect(ASSIGN, "value assignment")
        value_token = self.peek()
        if value_token.kind != NUMBER:
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"expected integer value, found {self._describe(value_token)}",
                value_token.loc,
            )
            raise ParseAbort()
        self.advance()
        return ast.ValueAssignment(
            loc=self._loc(name_token),
            name=name_token.text,
            type=type_expr,
            value=int(value_token.text),
        )

    @staticmethod
    def _loc(token: Token) -> ast.Loc:
        return ast.Loc(
            line=token.loc.line,
            column=token.loc.column,
            byte_offset=token.loc.byte_offset,
        )

    # -- types -------------------------------------------------------------

    def _parse_type(self) -> ast.TypeExpr:
        token = self.peek()
        if token.kind != IDENT:
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"expected type, found {self._describe(token)}",
                token.loc,
            )
            raise ParseAbort()
        keyword = token.text
        loc = self._loc(token)

        if keyword == "SEQUENCE":
            self.advance()
            size: Optional[ast.Constraint] = None
            if self.peek().kind == LPAREN:
                size = self._parse_constraint()
                if size.kind not in ("size_range", "size_fixed"):
                    self._diagnostics.error(
                        DiagnosticCode.PARSE_ERROR,
                        "SEQUENCE constraint must be a SIZE constraint",
                        loc,
                    )
                    raise ParseAbort()
            if self.peek().is_ident("OF"):
                self.advance()
                element = self._parse_type()
                return ast.SequenceOfType(loc=loc, size=size, element=element)
            if size is not None:
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    "SEQUENCE with SIZE must be a SEQUENCE OF",
                    loc,
                )
                raise ParseAbort()
            return ast.SequenceType(loc=loc, items=self._parse_component_list())

        if keyword == "CHOICE":
            self.advance()
            return ast.ChoiceType(loc=loc, items=self._parse_component_list())

        if keyword == "ENUMERATED":
            self.advance()
            return ast.EnumeratedType(loc=loc, items=self._parse_enumeration())

        if keyword == "INTEGER":
            self.advance()
            if self.peek().kind == LBRACE:
                self._unsupported("named INTEGER values are not supported", loc)
            constraint = None
            if self.peek().kind == LPAREN:
                constraint = self._parse_constraint()
            return ast.IntegerType(loc=loc, constraint=constraint)

        if keyword == "BIT":
            self.advance()
            self.expect_ident("BIT STRING", "STRING")
            if self.peek().kind == LBRACE:
                self._unsupported("named BIT STRING bits are not supported", loc)
            constraint = None
            if self.peek().kind == LPAREN:
                constraint = self._parse_constraint()
            return ast.BitStringType(loc=loc, constraint=constraint)

        if keyword == "OCTET":
            self.advance()
            self.expect_ident("OCTET STRING", "STRING")
            size = None
            containing = None
            if self.peek().kind == LPAREN:
                parsed = self._parse_constraint_or_containing()
                if isinstance(parsed, ast.ContainingConstraint):
                    containing = parsed.target
                else:
                    size = parsed
            return ast.OctetStringType(loc=loc, size=size, containing=containing)

        if keyword == "BOOLEAN":
            self.advance()
            return ast.BooleanType(loc=loc)

        if keyword == "NULL":
            self.advance()
            return ast.NullType(loc=loc)

        if keyword == "SET":
            self._unsupported("SET / SET OF are not supported", loc)

        if keyword in ("ANY", "DEFINED"):
            self._unsupported(f"'{keyword}' is not supported", loc)

        if keyword in ("OBJECT", "CLASS", "UNIVERSAL", "APPLICATION", "PRIVATE"):
            self._unsupported(f"'{keyword}' is not supported", loc)

        return self._parse_reference()

    def _parse_reference(self) -> ast.RefType:
        name_token = self.expect_ident("type reference")
        loc = self._loc(name_token)
        args: List[ast.TypeExpr] = []
        if self.peek().kind == LBRACE:
            self.advance()
            while True:
                self._skip_commas()
                if self.peek().kind == RBRACE:
                    break
                args.append(self._parse_type())
            self.expect(RBRACE, "parameterized type arguments")
        return ast.RefType(loc=loc, name=name_token.text, args=args)

    def _unsupported(self, message: str, loc: ast.Loc) -> None:
        self._diagnostics.error(
            DiagnosticCode.UNSUPPORTED_CONSTRUCT,
            message,
            loc_to_location(self._source, loc),
        )
        raise ParseAbort()

    def _parse_constraint(self) -> ast.Constraint:
        parsed = self._parse_constraint_or_containing()
        if isinstance(parsed, ast.ContainingConstraint):
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                "CONTAINING is only valid for OCTET STRING",
                loc_to_location(self._source, parsed.loc),
            )
            raise ParseAbort()
        return parsed

    def _parse_constraint_or_containing(
        self,
    ) -> ast.Constraint | ast.ContainingConstraint:
        open_token = self.expect(LPAREN, "constraint")
        loc = self._loc(open_token)
        if self.peek().is_ident("SIZE"):
            self.advance()
            self.expect(LPAREN, "SIZE constraint")
            lower = self._parse_bound()
            upper: Optional[ast.Bound] = None
            kind = "size_fixed"
            if self.peek().kind == DOTDOT:
                self.advance()
                upper = self._parse_bound()
                kind = "size_range"
            self.expect(RPAREN, "SIZE constraint")
            extensible = False
            if self.peek().kind == COMMA:
                self.advance()
                if self.peek().kind == ELLIPSIS:
                    self.advance()
                    extensible = True
            self.expect(RPAREN, "SIZE constraint")
            return ast.Constraint(
                loc=loc,
                kind=kind,
                lower=lower,
                upper=upper,
                extensible=extensible,
            )
        if self.peek().is_ident("CONTAINING"):
            self.advance()
            target = self._parse_type()
            self.expect(RPAREN, "CONTAINING constraint")
            return ast.ContainingConstraint(loc=loc, target=target)

        lower = self._parse_bound()
        if self.peek().kind == DOTDOT:
            self.advance()
            upper = self._parse_bound()
            kind = "range"
        else:
            upper = None
            kind = "single"
        extensible = False
        if self.peek().kind == COMMA:
            self.advance()
            if self.peek().kind == ELLIPSIS:
                self.advance()
                extensible = True
        self.expect(RPAREN, "constraint")
        return ast.Constraint(
            loc=loc,
            kind=kind,
            lower=lower,
            upper=upper,
            extensible=extensible,
        )

    def _parse_bound(self) -> ast.Bound:
        token = self.peek()
        if token.kind == NUMBER:
            self.advance()
            return ast.Bound(kind="int", value=int(token.text))
        if token.kind == IDENT:
            self.advance()
            if token.text == "MIN":
                return ast.Bound(kind="min", value=None)
            if token.text == "MAX":
                return ast.Bound(kind="max", value=None)
            return ast.Bound(kind="ref", value=token.text)
        self._diagnostics.error(
            DiagnosticCode.PARSE_ERROR,
            f"expected constraint bound, found {self._describe(token)}",
            token.loc,
        )
        raise ParseAbort()

    # -- component lists ---------------------------------------------------

    def _parse_component_list(self) -> List[ast.ComponentItem]:
        self.expect(LBRACE, "component list")
        items: List[ast.ComponentItem] = []
        while True:
            self._skip_commas()
            token = self.peek()
            if token.kind == RBRACE:
                self.advance()
                return items
            if token.kind == EOF:
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    "unterminated component list",
                    token.loc,
                )
                raise ParseAbort()
            if token.kind == ELLIPSIS:
                self.advance()
                items.append(ast.ExtensionMarker(loc=self._loc(token)))
                continue
            if token.kind == LDBRACKET:
                items.append(self._parse_extension_group())
                continue
            items.append(self._parse_component())
            self._skip_commas()

    def _parse_extension_group(self) -> ast.ExtensionGroup:
        open_token = self.advance()
        group = ast.ExtensionGroup(loc=self._loc(open_token))
        while True:
            self._skip_commas()
            token = self.peek()
            if token.kind == RDBRACKET:
                self.advance()
                return group
            if token.kind == EOF:
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    "unterminated extension addition group",
                    token.loc,
                )
                raise ParseAbort()
            if token.kind == LDBRACKET:
                self._unsupported("nested extension addition groups are not supported", self._loc(token))
            if token.kind == ELLIPSIS:
                self._unsupported(
                    "extension marker inside an extension addition group is not supported",
                    self._loc(token),
                )
            group.members.append(self._parse_component())
            self._skip_commas()

    def _parse_component(self) -> ast.Component:
        name_token = self.peek()
        if name_token.kind != IDENT:
            self._diagnostics.error(
                DiagnosticCode.PARSE_ERROR,
                f"expected component name, found {self._describe(name_token)}",
                name_token.loc,
            )
            raise ParseAbort()
        self.advance()
        type_expr = self._parse_type()
        presence = "Mandatory"
        default = None
        if self.peek().is_ident("OPTIONAL"):
            self.advance()
            presence = "Optional"
        elif self.peek().is_ident("DEFAULT"):
            self.advance()
            default = self._parse_default_value()
            presence = "Default"
        end_token = self.previous()
        comment = self._take_comments(name_token.loc.line, end_token.loc.line)
        return ast.Component(
            loc=self._loc(name_token),
            name=name_token.text,
            type=type_expr,
            presence=presence,
            default=default,
            comment=comment,
        )

    def _parse_default_value(self) -> ast.DefaultValue:
        token = self.peek()
        if token.kind == NUMBER:
            self.advance()
            return ast.DefaultValue(kind="int", value=int(token.text))
        if token.kind == IDENT:
            self.advance()
            if token.text == "TRUE":
                return ast.DefaultValue(kind="bool", value=True)
            if token.text == "FALSE":
                return ast.DefaultValue(kind="bool", value=False)
            return ast.DefaultValue(kind="ref", value=token.text)
        if token.kind == STRING:  # pragma: no cover - not used by 38.331
            self.advance()
            return ast.DefaultValue(kind="ref", value=token.text)
        self._diagnostics.error(
            DiagnosticCode.PARSE_ERROR,
            f"expected DEFAULT value, found {self._describe(token)}",
            token.loc,
        )
        raise ParseAbort()

    # -- enumerated --------------------------------------------------------

    def _parse_enumeration(self) -> List[ast.EnumValue | ast.ExtensionMarker]:
        self.expect(LBRACE, "ENUMERATED body")
        items: List[ast.EnumValue | ast.ExtensionMarker] = []
        while True:
            self._skip_commas()
            token = self.peek()
            if token.kind == RBRACE:
                self.advance()
                return items
            if token.kind == EOF:
                self._diagnostics.error(
                    DiagnosticCode.PARSE_ERROR,
                    "unterminated ENUMERATED body",
                    token.loc,
                )
                raise ParseAbort()
            if token.kind == ELLIPSIS:
                self.advance()
                items.append(ast.ExtensionMarker(loc=self._loc(token)))
                continue
            name_token = self.expect_ident("enumeration value")
            number: Optional[int] = None
            if self.peek().kind == LPAREN:
                self.advance()
                number_token = self.expect(NUMBER, "enumeration value number")
                number = int(number_token.text)
                self.expect(RPAREN, "enumeration value number")
            items.append(
                ast.EnumValue(loc=self._loc(name_token), name=name_token.text, number=number)
            )
            self._skip_commas()


def loc_to_location(source: NormalizedSource, loc: ast.Loc):
    """Convert an AST :class:`ast.Loc` into a :class:`SourceLocation`."""
    from .diagnostics import SourceLocation

    return SourceLocation(
        file=source.file_name,
        line=loc.line,
        column=loc.column,
        byte_offset=loc.byte_offset,
    )


def parse_source(
    source: NormalizedSource,
    diagnostics: DiagnosticCollector,
    target_module: str,
) -> List[ast.ModuleDefinition]:
    """Parse all module headers, fully parsing *target_module*."""
    return Parser(source, diagnostics, target_module).parse()


__all__ = ["Parser", "ParseAbort", "parse_source", "loc_to_location"]
