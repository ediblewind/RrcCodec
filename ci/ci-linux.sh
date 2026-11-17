#!/usr/bin/env bash
# ============================================================================
# ci-linux.sh — Linux CI 等价脚本（方案 7.8 / 9.4）
#
# 依次执行：
#   1. Release + -Werror 构建 + ctest
#   2. ASan/UBSan 构建 + ctest（可选，失败不阻断时可注释）
#   3. 共享库构建 + ctest
#   4. 生成物一致性检查（python -m rrcgen --check）
#   5. 安装消费 + 公共头检查（由 ctest 中的 install/headers 测试覆盖）
# ============================================================================
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_ROOT="${REPO_ROOT}/build"
JOBS="$(nproc 2>/dev/null || echo 4)"
CC="${CC:-gcc}"
CXX="${CXX:-g++}"

cd "${REPO_ROOT}"

configure_and_build() {
  local dir="$1"; shift
  cmake -S "${REPO_ROOT}" -B "${dir}" -G Ninja \
    -DCMAKE_C_COMPILER="${CC}" -DCMAKE_CXX_COMPILER="${CXX}" "$@"
  cmake --build "${dir}" --parallel "${JOBS}"
}

echo "== Release + -Werror build + ctest =="
configure_and_build "${BUILD_ROOT}/ci-release" \
  -DCMAKE_BUILD_TYPE=Release -DRRC_CODEC_WARNINGS_AS_ERRORS=ON
ctest --test-dir "${BUILD_ROOT}/ci-release" --output-on-failure

echo "== ASan/UBSan build + ctest =="
configure_and_build "${BUILD_ROOT}/ci-sanitize" \
  -DCMAKE_BUILD_TYPE=Debug -DRRC_CODEC_WARNINGS_AS_ERRORS=ON \
  -DRRC_CODEC_ENABLE_SANITIZERS=ON
ctest --test-dir "${BUILD_ROOT}/ci-sanitize" --output-on-failure

echo "== Shared library build + ctest =="
configure_and_build "${BUILD_ROOT}/ci-shared" \
  -DCMAKE_BUILD_TYPE=Release -DRRC_CODEC_BUILD_SHARED=ON \
  -DRRC_CODEC_WARNINGS_AS_ERRORS=ON
ctest --test-dir "${BUILD_ROOT}/ci-shared" --output-on-failure

echo "== Generator unit tests =="
python3 -m unittest discover -s "${REPO_ROOT}/tools/rrcgen/tests"

echo "== Generated code consistency =="
(
  cd "${REPO_ROOT}/tools/rrcgen"
  python3 -m rrcgen --input "${REPO_ROOT}/data/38.331_v18.10.0.asn" \
    --check-input-sha256 "${REPO_ROOT}/data/asn-input.sha256" \
    --repo-root "${REPO_ROOT}" --check
)

echo "== Baseline =="
ls -lh "${REPO_ROOT}/include/rrc_codec/types/rrc_types.h"
ls -lh "${BUILD_ROOT}/ci-release/librrc_codec.a" || true
echo "CI PASSED"
