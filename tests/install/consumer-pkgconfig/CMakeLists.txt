# ============================================================================
# tests/install/consumer-pkgconfig — pkg-config 消费者（C 源码）
#
# 不直接使用 CMake 的 find_package，而是显式调用 pkg-config 取得
# --cflags/--libs，再据此编译并链接纯 C 程序。使用 --static 以同时获得
# Libs.private 中静态库所需的 C++ 运行时（-lstdc++）。
#
# 由 RunInstallTest.cmake 传入：
#   -DRRC_CODEC_PREFIX=<prefix>             安装前缀
#   -DRRC_CODEC_INSTALL_PKGCONFIG_DIR=lib/pkgconfig
#   -DPKG_CONFIG_EXECUTABLE=<path>          可选，驱动探测后传入
# ============================================================================
cmake_minimum_required(VERSION 3.20)

project(rrc_codec_consumer_pkgconfig LANGUAGES C)

if(DEFINED PKG_CONFIG_EXECUTABLE AND EXISTS "${PKG_CONFIG_EXECUTABLE}")
  set(_pkg_config "${PKG_CONFIG_EXECUTABLE}")
else()
  find_program(_pkg_config NAMES pkg-config pkg-config.exe REQUIRED)
endif()

# 由安装前缀推导 PKG_CONFIG_PATH，并保留调用方已有的搜索路径。
if(DEFINED RRC_CODEC_PREFIX AND NOT RRC_CODEC_PREFIX STREQUAL "")
  if(DEFINED RRC_CODEC_INSTALL_PKGCONFIG_DIR AND
     NOT RRC_CODEC_INSTALL_PKGCONFIG_DIR STREQUAL "")
    set(_pc_dir "${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_PKGCONFIG_DIR}")
  else()
    set(_pc_dir "${RRC_CODEC_PREFIX}/lib/pkgconfig")
  endif()
  if(WIN32)
    set(_path_sep ";")
  else()
    set(_path_sep ":")
  endif()
  if(DEFINED ENV{PKG_CONFIG_PATH} AND NOT "$ENV{PKG_CONFIG_PATH}" STREQUAL "")
    set(ENV{PKG_CONFIG_PATH} "${_pc_dir}${_path_sep}$ENV{PKG_CONFIG_PATH}")
  else()
    set(ENV{PKG_CONFIG_PATH} "${_pc_dir}")
  endif()
endif()

execute_process(
  COMMAND "${_pkg_config}" --static --cflags rrc_codec
  RESULT_VARIABLE _pc_cflags_rc
  OUTPUT_VARIABLE _pc_cflags
  ERROR_VARIABLE _pc_err
  OUTPUT_STRIP_TRAILING_WHITESPACE)
if(NOT _pc_cflags_rc EQUAL 0)
  message(FATAL_ERROR "pkg-config --cflags rrc_codec 失败: ${_pc_err}")
endif()

execute_process(
  COMMAND "${_pkg_config}" --static --libs rrc_codec
  RESULT_VARIABLE _pc_libs_rc
  OUTPUT_VARIABLE _pc_libs
  ERROR_VARIABLE _pc_err
  OUTPUT_STRIP_TRAILING_WHITESPACE)
if(NOT _pc_libs_rc EQUAL 0)
  message(FATAL_ERROR "pkg-config --libs rrc_codec 失败: ${_pc_err}")
endif()

message(STATUS "pkg-config cflags: ${_pc_cflags}")
message(STATUS "pkg-config libs  : ${_pc_libs}")

separate_arguments(_pc_cflags UNIX_COMMAND "${_pc_cflags}")
separate_arguments(_pc_libs UNIX_COMMAND "${_pc_libs}")

add_executable(consumer_pkgconfig main.c)
target_include_directories(consumer_pkgconfig PRIVATE
  "${CMAKE_CURRENT_SOURCE_DIR}/../common")

# 把 pkg-config 输出拆成编译/包含/链接目录/库，避免把 -l 放在目标文件之前。
foreach(_flag IN LISTS _pc_cflags)
  if(_flag MATCHES "^-I(.+)$")
    target_include_directories(consumer_pkgconfig PRIVATE "${CMAKE_MATCH_1}")
  else()
    target_compile_options(consumer_pkgconfig PRIVATE "${_flag}")
  endif()
endforeach()

foreach(_flag IN LISTS _pc_libs)
  if(_flag MATCHES "^-L(.+)$")
    target_link_directories(consumer_pkgconfig PRIVATE "${CMAKE_MATCH_1}")
  elseif(_flag MATCHES "^-l(.+)$")
    target_link_libraries(consumer_pkgconfig PRIVATE "${CMAKE_MATCH_1}")
  else()
    target_link_options(consumer_pkgconfig PRIVATE "${_flag}")
  endif()
endforeach()

set_target_properties(consumer_pkgconfig PROPERTIES
  C_STANDARD 99
  C_STANDARD_REQUIRED ON
  C_EXTENSIONS OFF)
