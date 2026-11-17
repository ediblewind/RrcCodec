# ============================================================================
# tests/install/consumer-subdir — add_subdirectory（源码内嵌）消费者
#
# 把 RrcCodec 源码目录作为子工程加入，再链接 RrcCodec::rrc_codec。
# 由 RunInstallTest.cmake 传入 -DRRC_CODEC_SOURCE_DIR=<repo root>。
# ============================================================================
cmake_minimum_required(VERSION 3.20)

project(rrc_codec_consumer_subdir LANGUAGES C CXX)

if(NOT DEFINED RRC_CODEC_SOURCE_DIR OR RRC_CODEC_SOURCE_DIR STREQUAL "")
  message(FATAL_ERROR "需要 -DRRC_CODEC_SOURCE_DIR=<RrcCodec 源码根目录>")
endif()

# 子工程只构建库本身：关闭测试/示例，避免重复注册测试。
set(RRC_CODEC_BUILD_TESTS OFF CACHE BOOL "Build tests" FORCE)
set(RRC_CODEC_BUILD_EXAMPLES OFF CACHE BOOL "Build examples" FORCE)
set(RRC_CODEC_BUILD_SHARED OFF CACHE BOOL "Build shared library" FORCE)

add_subdirectory("${RRC_CODEC_SOURCE_DIR}" "${CMAKE_CURRENT_BINARY_DIR}/rrc_codec")

add_executable(consumer_subdir main.c)
target_link_libraries(consumer_subdir PRIVATE RrcCodec::rrc_codec)
target_include_directories(consumer_subdir PRIVATE
  "${CMAKE_CURRENT_SOURCE_DIR}/../common")
set_target_properties(consumer_subdir PROPERTIES
  C_STANDARD 99
  C_STANDARD_REQUIRED ON
  C_EXTENSIONS OFF)
