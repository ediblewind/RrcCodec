# ============================================================================
# tests/install/CMakeLists.txt — 安装消费测试与公共头检查
#
# 接线方式：在 tests/CMakeLists.txt 中执行
#   add_subdirectory(install)
# 本文件立即注册两个 CTest 测试（无需额外函数调用）：
#
#   rrc_codec_install_consumers
#       cmake --install 到临时前缀后，依次构建/运行：
#         - consumer-cmake      find_package(RrcCodec 2 CONFIG REQUIRED)，C 与 C++ 各一
#         - consumer-pkgconfig  pkg-config --cflags/--libs（无 pkg-config 时跳过并说明）
#         - consumer-subdir     add_subdirectory 源码内嵌
#       详情见 RunInstallTest.cmake（每次运行前清空临时前缀与消费者构建目录）。
#
#   rrc_codec_headers_c99
#       公共头纯 C99（-std=c99 -pedantic-errors -fsyntax-only）与 C++17 包含检查，
#       详情见 CheckHeaders.cmake。
#
# 如父目录不希望自动注册，可在 add_subdirectory 前设置：
#   set(RRC_CODEC_INSTALL_TESTS OFF)
# ============================================================================

if(NOT TARGET rrc_codec)
  message(FATAL_ERROR
    "tests/install 必须在 rrc_codec 目标定义之后 add_subdirectory（请检查 tests/CMakeLists.txt 顺序）")
endif()

if(DEFINED RRC_CODEC_INSTALL_TESTS AND NOT RRC_CODEC_INSTALL_TESTS)
  return()
endif()

# ---------------------------------------------------------------------------
# 注册所需路径（安装布局由根 CMakeLists 的 GNUInstallDirs 决定）
# ---------------------------------------------------------------------------
set(_install_test_root "${CMAKE_CURRENT_BINARY_DIR}")
set(_install_prefix "${_install_test_root}/install-prefix")
set(_install_work "${_install_test_root}/consumers")
set(_headers_work "${_install_test_root}/headers")

# 单配置生成器传 CMAKE_BUILD_TYPE；多配置生成器传 $<CONFIG> 并在驱动里用 --config。
set(_multi_config_arg "-DRRC_CODEC_MULTI_CONFIG=OFF")
set(_config_arg "-DRRC_CODEC_BUILD_CONFIG=${CMAKE_BUILD_TYPE}")
if(CMAKE_CONFIGURATION_TYPES)
  set(_multi_config_arg "-DRRC_CODEC_MULTI_CONFIG=ON")
  set(_config_arg "-DRRC_CODEC_BUILD_CONFIG=$<CONFIG>")
endif()

if(RRC_CODEC_BUILD_SHARED)
  set(_shared_arg "-DRRC_CODEC_EXPECT_SHARED=ON")
else()
  set(_shared_arg "-DRRC_CODEC_EXPECT_SHARED=OFF")
endif()

find_program(RRC_CODEC_PKG_CONFIG_EXECUTABLE NAMES pkg-config pkg-config.exe)
if(RRC_CODEC_PKG_CONFIG_EXECUTABLE)
  set(_pkg_config_arg "-DRRC_CODEC_PKG_CONFIG=${RRC_CODEC_PKG_CONFIG_EXECUTABLE}")
else()
  set(_pkg_config_arg "")
endif()

# ---------------------------------------------------------------------------
# 测试 1：安装 + 三种消费方式
# ---------------------------------------------------------------------------
add_test(NAME rrc_codec_install_consumers
  COMMAND "${CMAKE_COMMAND}"
    "-DRRC_CODEC_SOURCE_DIR=${PROJECT_SOURCE_DIR}"
    "-DRRC_CODEC_BINARY_DIR=${PROJECT_BINARY_DIR}"
    "-DRRC_CODEC_PREFIX=${_install_prefix}"
    "-DRRC_CODEC_WORK_DIR=${_install_work}"
    "-DRRC_CODEC_INSTALL_INCLUDEDIR=${CMAKE_INSTALL_INCLUDEDIR}"
    "-DRRC_CODEC_INSTALL_LIBDIR=${CMAKE_INSTALL_LIBDIR}"
    "-DRRC_CODEC_INSTALL_BINDIR=${CMAKE_INSTALL_BINDIR}"
    "-DRRC_CODEC_INSTALL_PKGCONFIG_DIR=${CMAKE_INSTALL_LIBDIR}/pkgconfig"
    "-DRRC_CODEC_GENERATOR=${CMAKE_GENERATOR}"
    "-DRRC_CODEC_C_COMPILER=${CMAKE_C_COMPILER}"
    "-DRRC_CODEC_CXX_COMPILER=${CMAKE_CXX_COMPILER}"
    "${_config_arg}"
    "${_multi_config_arg}"
    "${_shared_arg}"
    ${_pkg_config_arg}
    -P "${CMAKE_CURRENT_SOURCE_DIR}/RunInstallTest.cmake")

set_tests_properties(rrc_codec_install_consumers PROPERTIES
  TIMEOUT 1800
  RUN_SERIAL TRUE
  LABELS "install;integration"
  FAIL_REGULAR_EXPRESSION "FAILED at check")

# ---------------------------------------------------------------------------
# 测试 2：公共头纯 C99 / C++17 包含检查（源码树，不依赖安装）
# ---------------------------------------------------------------------------
add_test(NAME rrc_codec_headers_c99
  COMMAND "${CMAKE_COMMAND}"
    "-DRRC_CODEC_SOURCE_DIR=${PROJECT_SOURCE_DIR}"
    "-DRRC_CODEC_WORK_DIR=${_headers_work}"
    "-DRRC_CODEC_C_COMPILER=${CMAKE_C_COMPILER}"
    "-DRRC_CODEC_CXX_COMPILER=${CMAKE_CXX_COMPILER}"
    "-DRRC_CODEC_C_COMPILER_ID=${CMAKE_C_COMPILER_ID}"
    -P "${CMAKE_CURRENT_SOURCE_DIR}/CheckHeaders.cmake")

set_tests_properties(rrc_codec_headers_c99 PROPERTIES
  TIMEOUT 120
  LABELS "install;headers")
