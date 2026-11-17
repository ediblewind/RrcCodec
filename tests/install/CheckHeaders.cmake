# ============================================================================
# tests/install/CheckHeaders.cmake — 公共头纯 C99 / C++17 包含检查（cmake -P）
#
# 独立编译每个公共头与伞头，验证：
#   - C99：cc -std=c99 -pedantic-errors -fsyntax-only（无 C11/C++ 依赖）；
#   - C++17：c++ -std=c++17 -pedantic-errors -fsyntax-only。
#
# 必需输入：
#   RRC_CODEC_SOURCE_DIR     仓库根目录（用其 include/ 下的头，未安装也可检查）
#   RRC_CODEC_WORK_DIR       临时文件目录
# 可选输入：
#   RRC_CODEC_C_COMPILER / RRC_CODEC_CXX_COMPILER / RRC_CODEC_C_COMPILER_ID
# ============================================================================
cmake_minimum_required(VERSION 3.20)

foreach(_required RRC_CODEC_SOURCE_DIR RRC_CODEC_WORK_DIR)
  if(NOT DEFINED ${_required} OR "${${_required}}" STREQUAL "")
    message(FATAL_ERROR "CheckHeaders.cmake 缺少输入：-D${_required}=...")
  endif()
endforeach()

set(_include_dir "${RRC_CODEC_SOURCE_DIR}/include")
if(NOT IS_DIRECTORY "${_include_dir}")
  message(FATAL_ERROR "找不到公共头目录：${_include_dir}")
endif()

if(NOT DEFINED RRC_CODEC_C_COMPILER OR "${RRC_CODEC_C_COMPILER}" STREQUAL "")
  find_program(RRC_CODEC_C_COMPILER NAMES cc gcc clang)
endif()
if(NOT DEFINED RRC_CODEC_CXX_COMPILER OR "${RRC_CODEC_CXX_COMPILER}" STREQUAL "")
  find_program(RRC_CODEC_CXX_COMPILER NAMES c++ g++ clang++)
endif()
if(NOT DEFINED RRC_CODEC_C_COMPILER_ID)
  set(RRC_CODEC_C_COMPILER_ID "")
endif()

if("${RRC_CODEC_C_COMPILER_ID}" STREQUAL "MSVC")
  message(STATUS
    "[headers-test] 跳过严格 C99 语法检查：MSVC 不支持 -std=c99 -pedantic-errors（由 GCC/Clang CI 覆盖）")
  return()
endif()

if(NOT RRC_CODEC_C_COMPILER)
  message(FATAL_ERROR "[headers-test] 未找到 C 编译器")
endif()

file(MAKE_DIRECTORY "${RRC_CODEC_WORK_DIR}")

# 每个公共头单独包含，外加伞头组合使用场景。
set(_header_list
  "rrc_codec/rrc_export.h"
  "rrc_codec/rrc_version.h"
  "rrc_codec/rrc_channel.h"
  "rrc_codec/rrc_error.h"
  "rrc_codec/rrc_codec.h")

function(rrc_check_one _compiler _std_flag _suffix _header)
  get_filename_component(_stem "${_header}" NAME_WE)
  set(_source "${RRC_CODEC_WORK_DIR}/include_${_stem}${_suffix}")
  file(WRITE "${_source}"
    "/* 自动生成：公共头独立包含检查 */\n#include <${_header}>\nint main(void) { return 0; }\n")
  execute_process(
    COMMAND "${_compiler}" ${_std_flag} -pedantic-errors -fsyntax-only
            "-I${_include_dir}" "${_source}"
    RESULT_VARIABLE _result
    OUTPUT_VARIABLE _stdout
    ERROR_VARIABLE _stderr)
  if(NOT _result EQUAL 0)
    message(FATAL_ERROR
      "[headers-test] ${_compiler} ${_std_flag} 包含 <${_header}> 失败\n"
      "--- stdout ---\n${_stdout}\n--- stderr ---\n${_stderr}")
  endif()
  message(STATUS "[headers-test] C99 OK: <${_header}>")
endfunction()

# C99 检查（含伞头整体包含）。
foreach(_header IN LISTS _header_list)
  rrc_check_one("${RRC_CODEC_C_COMPILER}" "-std=c99" ".c" "${_header}")
endforeach()
rrc_check_one("${RRC_CODEC_C_COMPILER}" "-std=c99" "_umbrella.c" "rrc_codec/rrc_codec.h")

# C++17 检查：同一套头在 C++ 下必须可直接包含（extern "C" 生效）。
if(RRC_CODEC_CXX_COMPILER)
  file(WRITE "${RRC_CODEC_WORK_DIR}/include_all.cpp"
    "/* 自动生成：公共头 C++17 包含检查 */\n#include <rrc_codec/rrc_codec.h>\nint main() { return 0; }\n")
  execute_process(
    COMMAND "${RRC_CODEC_CXX_COMPILER}" -std=c++17 -pedantic-errors -fsyntax-only
            "-I${_include_dir}" "${RRC_CODEC_WORK_DIR}/include_all.cpp"
    RESULT_VARIABLE _cxx_result
    OUTPUT_VARIABLE _cxx_stdout
    ERROR_VARIABLE _cxx_stderr)
  if(NOT _cxx_result EQUAL 0)
    message(FATAL_ERROR
      "[headers-test] C++17 包含公共头失败\n"
      "--- stdout ---\n${_cxx_stdout}\n--- stderr ---\n${_cxx_stderr}")
  endif()
  message(STATUS "[headers-test] C++17 OK: <rrc_codec/rrc_codec.h>")
else()
  message(STATUS "[headers-test] 跳过 C++17 检查：未找到 C++ 编译器")
endif()

message(STATUS "[headers-test] 公共头包含检查全部通过")
