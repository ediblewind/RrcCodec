"""rrcgen package root.

The implementation lives in the ``rrcgen.rrcgen`` subpackage.  This marker
module exists so that ``python -m rrcgen`` works both from ``tools/`` (the
working directory used by the CMake custom targets) and from
``tools/rrcgen/`` (the working directory used by the unit tests).
"""

from __future__ import annotations

__all__ = ["rrcgen"]
