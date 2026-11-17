# ============================================================================
# RrcCodec — 3GPP TS 38.331 v18.10.0 RRC UPER 编解码库（v2 简化方案）
#
# 方案：docs/RRC编解码库简化方案.md（v0.5）
# 实现契约：docs/实现契约.md
#
# 默认构建静态库；-DRRC_CODEC_BUILD_SHARED=ON 构建动态库。
# ============================================================================
cmake_minimum_required(VERSION 3.20)

project(RrcCodec VERSION 2.0.0 LANGUAGES C CXX)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
include(CTest)

# ---------------------------------------------------------------------------
# 选项
# ---------------------------------------------------------------------------
option(RRC_CODEC_BUILD_TESTS "Build tests" ${PROJECT_IS_TOP_LEVEL})
option(RRC_CODEC_BUILD_EXAMPLES "Build examples" ${PROJECT_IS_TOP_LEVEL})
option(RRC_CODEC_BUILD_SHARED "Build shared library" OFF)
option(RRC_CODEC_REGENERATE "Enable generator target (requires Python 3)" OFF)
option(RRC_CODEC_WARNINGS_AS_ERRORS "Treat warnings as errors" OFF)
option(RRC_CODEC_ENABLE_SANITIZERS "Enable ASan/UBSan (GCC/Clang)" OFF)

# 安全上限（方案 4.5；可在此覆盖，库与消费者看到的取值保持一致）
set(RRC_CODEC_MAX_INPUT_BYTES 16777216 CACHE STRING "Max decode input bytes")
set(RRC_CODEC_MAX_OPEN_TYPE_BYTES 8388608 CACHE STRING "Max open type bytes")
set(RRC_CODEC_MAX_SEQUENCE_OF_COUNT 65536 CACHE STRING "Max SEQUENCE OF elements")
set(RRC_CODEC_MAX_BITSTRING_BITS 65536 CACHE STRING "Max BIT STRING bits")
set(RRC_CODEC_MAX_CONTAINING_DEPTH 16 CACHE STRING "Max CONTAINING nesting depth")

# ---------------------------------------------------------------------------
# 生成源列表（由生成器写入；入库）
# ---------------------------------------------------------------------------
include("${CMAKE_CURRENT_SOURCE_DIR}/generated/Sources.cmake")

# ---------------------------------------------------------------------------
# 库目标
# ---------------------------------------------------------------------------
if(RRC_CODEC_BUILD_SHARED)
  add_library(rrc_codec SHARED)
  target_compile_definitions(rrc_codec PRIVATE RRC_CODEC_BUILDING_LIBRARY)
else()
  add_library(rrc_codec STATIC)
  target_compile_definitions(rrc_codec PUBLIC RRC_CODEC_STATIC)
endif()
add_library(RrcCodec::rrc_codec ALIAS rrc_codec)

target_sources(rrc_codec PRIVATE
  src/core/bitstream.cpp
  src/core/error.cpp
  src/core/codec_api.cpp
  src/core/dispatch.cpp
  ${RRC_CODEC_GENERATED_SOURCES})

target_compile_features(rrc_codec PRIVATE cxx_std_17)

target_include_directories(rrc_codec
  PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
    "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/core")

set_target_properties(rrc_codec PROPERTIES
  OUTPUT_NAME             rrc_codec
  VERSION                 ${PROJECT_VERSION}
  SOVERSION               ${PROJECT_VERSION_MAJOR}
  CXX_VISIBILITY_PRESET   hidden
  VISIBILITY_INLINES_HIDDEN ON
  POSITION_INDEPENDENT_CODE ON
  CXX_EXTENSIONS          OFF)

# 安全上限通过 PUBLIC 定义传给消费者，保证头文件与库一致
target_compile_definitions(rrc_codec PUBLIC
  RRC_CODEC_MAX_INPUT_BYTES=${RRC_CODEC_MAX_INPUT_BYTES}
  RRC_CODEC_MAX_OPEN_TYPE_BYTES=${RRC_CODEC_MAX_OPEN_TYPE_BYTES}
  RRC_CODEC_MAX_SEQUENCE_OF_COUNT=${RRC_CODEC_MAX_SEQUENCE_OF_COUNT}
  RRC_CODEC_MAX_BITSTRING_BITS=${RRC_CODEC_MAX_BITSTRING_BITS}
  RRC_CODEC_MAX_CONTAINING_DEPTH=${RRC_CODEC_MAX_CONTAINING_DEPTH})

# ---------------------------------------------------------------------------
# 编译选项
# ---------------------------------------------------------------------------
if(MSVC)
  target_compile_options(rrc_codec PRIVATE /W4)
  if(RRC_CODEC_WARNINGS_AS_ERRORS)
    target_compile_options(rrc_codec PRIVATE /WX)
  endif()
else()
  target_compile_options(rrc_codec PRIVATE -Wall -Wextra -Wpedantic)
  if(RRC_CODEC_WARNINGS_AS_ERRORS)
    target_compile_options(rrc_codec PRIVATE -Werror)
  endif()
  if(RRC_CODEC_ENABLE_SANITIZERS)
    target_compile_options(rrc_codec PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
    target_link_options(rrc_codec PRIVATE -fsanitize=address,undefined)
  endif()
endif()

# 生成代码优先编译速度与体积（方案 5.5）
if(NOT MSVC AND RRC_CODEC_GENERATED_SOURCES)
  set_source_files_properties(${RRC_CODEC_GENERATED_SOURCES} PROPERTIES
    COMPILE_OPTIONS "-O0;-g0")
endif()

# ---------------------------------------------------------------------------
# 生成器目标（开发期，需要 Python 3；不安装）
# ---------------------------------------------------------------------------
if(RRC_CODEC_REGENERATE)
  find_package(Python3 3.8 REQUIRED COMPONENTS Interpreter)
  add_custom_target(rrc_codec_regenerate
    COMMAND ${Python3_EXECUTABLE} -m rrcgen
            --input "${CMAKE_CURRENT_SOURCE_DIR}/data/38.331_v18.10.0.asn"
            --check-input-sha256 "${CMAKE_CURRENT_SOURCE_DIR}/data/asn-input.sha256"
            --repo-root "${CMAKE_CURRENT_SOURCE_DIR}"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/tools/rrcgen"
    COMMENT "Regenerating RRC codec sources (rrcgen)")
endif()

# ---------------------------------------------------------------------------
# 测试与示例
# ---------------------------------------------------------------------------
if(RRC_CODEC_BUILD_TESTS AND PROJECT_IS_TOP_LEVEL)
  enable_testing()
  add_subdirectory(tests)
endif()

if(RRC_CODEC_BUILD_EXAMPLES AND PROJECT_IS_TOP_LEVEL)
  add_subdirectory(examples)
endif()

# ---------------------------------------------------------------------------
# 安装：库 + 头文件 + CMake 包 + pkg-config
# ---------------------------------------------------------------------------
install(TARGETS rrc_codec EXPORT RrcCodecTargets
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(DIRECTORY include/rrc_codec
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h")

set(RRC_CODEC_CMAKE_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/RrcCodec")
install(EXPORT RrcCodecTargets
  FILE RrcCodecTargets.cmake
  NAMESPACE RrcCodec::
  DESTINATION ${RRC_CODEC_CMAKE_DIR})

configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/RrcCodecConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfig.cmake"
  INSTALL_DESTINATION ${RRC_CODEC_CMAKE_DIR})
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfigVersion.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion)
install(FILES
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfig.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/RrcCodecConfigVersion.cmake"
  DESTINATION ${RRC_CODEC_CMAKE_DIR})

# pkg-config（可重定位：用 pcfiledir 反推 prefix）
if(IS_ABSOLUTE "${CMAKE_INSTALL_LIBDIR}")
  set(RRC_CODEC_PC_PREFIX "${CMAKE_INSTALL_PREFIX}")
  set(RRC_CODEC_PC_LIBDIR "${CMAKE_INSTALL_LIBDIR}")
  set(RRC_CODEC_PC_INCLUDEDIR "${CMAKE_INSTALL_INCLUDEDIR}")
else()
  file(RELATIVE_PATH RRC_CODEC_PC_LIBDIR_FROM_PREFIX
       "${CMAKE_INSTALL_PREFIX}" "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}")
  set(RRC_CODEC_PC_PREFIX "\${pcfiledir}/../..")
  set(RRC_CODEC_PC_LIBDIR "\${prefix}/${CMAKE_INSTALL_LIBDIR}")
  set(RRC_CODEC_PC_INCLUDEDIR "\${prefix}/${CMAKE_INSTALL_INCLUDEDIR}")
endif()
if(RRC_CODEC_BUILD_SHARED)
  set(RRC_CODEC_PC_LIBS_PRIVATE "")
else()
  if(MSVC)
    set(RRC_CODEC_PC_LIBS_PRIVATE "")
  else()
    set(RRC_CODEC_PC_LIBS_PRIVATE "-lstdc++")
  endif()
endif()
configure_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/rrc_codec.pc.in"
  "${CMAKE_CURRENT_BINARY_DIR}/rrc_codec.pc" @ONLY)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/rrc_codec.pc"
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig")

install(FILES LICENSE README.md
  DESTINATION "${CMAKE_INSTALL_DATAROOTDIR}/doc/rrc_codec")
