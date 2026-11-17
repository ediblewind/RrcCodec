"""rrcgen - ASN.1 (38.331) front-end and C++ code generator for RrcCodec.

The generator parses the subset of ASN.1 used by 3GPP TS 38.331 v18.10.0,
resolves it into a deterministic intermediate representation (IR) and emits
the ``RrcCodec::V1810`` typed model, descriptors, converters and registry.
"""

from __future__ import annotations

GENERATOR_NAME = "rrcgen"
VERSION = "1.0.0"
IR_VERSION = 1
DEFAULT_ASN_VERSION = "18.10.0"
V1_MODULE = "NR-RRC-Definitions"

__all__ = [
    "GENERATOR_NAME",
    "VERSION",
    "IR_VERSION",
    "DEFAULT_ASN_VERSION",
    "V1_MODULE",
]
