# ============================================================================
# tests/unit/CMakeLists.txt — PER 运行时原语单元测试
#
# 不依赖生成代码：直接编译 src/core/bitstream.cpp，避免测试被生成器产物阻塞
# （同一源文件即库内实现，不会与 rrc_codec 目标重复链接）。
# 由 tests/CMakeLists.txt 以 add_subdirectory(unit) 接入（Lead 负责）。
# ============================================================================

set(RRC_UNIT_REPO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../..")

add_executable(rrc_unit_tests
  TestMain.cpp
  BitStreamTests.cpp
  PerPrimitiveTests.cpp
  "${RRC_UNIT_REPO_ROOT}/src/core/bitstream.cpp")

target_include_directories(rrc_unit_tests PRIVATE
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${RRC_UNIT_REPO_ROOT}/src/core"
  "${RRC_UNIT_REPO_ROOT}/include")

target_compile_features(rrc_unit_tests PRIVATE cxx_std_17)
set_target_properties(rrc_unit_tests PROPERTIES CXX_EXTENSIONS OFF)

if(MSVC)
  target_compile_options(rrc_unit_tests PRIVATE /W4)
else()
  target_compile_options(rrc_unit_tests PRIVATE -Wall -Wextra -Wpedantic)
endif()

add_test(NAME unit.per_runtime COMMAND rrc_unit_tests)
