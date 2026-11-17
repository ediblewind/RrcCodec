# ============================================================================
# tests/install/consumer-cmake — find_package(RrcCodec 2 CONFIG REQUIRED) 消费者
#
# 由 RunInstallTest.cmake 用安装前缀配置并构建；C 与 C++ 各一个可执行文件。
# 本工程启用 C 与 CXX：rrc_codec 是 C++17 静态库，CMake 需要 C++ 语言可用才能
# 为 C 目标选择 C++ 链接器（库自身的公共头对 C 只要求 C99）。
# ============================================================================
cmake_minimum_required(VERSION 3.20)

project(rrc_codec_consumer_cmake LANGUAGES C CXX)

find_package(RrcCodec 2 CONFIG REQUIRED)

set(_common_include_dir "${CMAKE_CURRENT_SOURCE_DIR}/../common")

add_executable(consumer_c main_c.c)
target_link_libraries(consumer_c PRIVATE RrcCodec::rrc_codec)
target_include_directories(consumer_c PRIVATE "${_common_include_dir}")
set_target_properties(consumer_c PROPERTIES
  C_STANDARD 99
  C_STANDARD_REQUIRED ON
  C_EXTENSIONS OFF)

add_executable(consumer_cpp main_cpp.cpp)
target_link_libraries(consumer_cpp PRIVATE RrcCodec::rrc_codec)
target_include_directories(consumer_cpp PRIVATE "${_common_include_dir}")
set_target_properties(consumer_cpp PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF)
