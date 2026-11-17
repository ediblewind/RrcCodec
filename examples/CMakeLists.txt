# ============================================================================
# examples/CMakeLists.txt — C99 与 C++17 示例
#
# 两个可执行文件都只链接公共目标 RrcCodec::rrc_codec：
#   rrc_codec_example_c   纯 C99，验证 C ABI 可直接从 C 调用
#   rrc_codec_example_cpp C++17，同一套 C ABI 头
# ============================================================================

add_executable(rrc_codec_example_c c_encode_decode/main.c)
target_link_libraries(rrc_codec_example_c PRIVATE RrcCodec::rrc_codec)
set_target_properties(rrc_codec_example_c PROPERTIES
  C_STANDARD 99
  C_STANDARD_REQUIRED ON
  C_EXTENSIONS OFF)

add_executable(rrc_codec_example_cpp cpp_encode_decode/main.cpp)
target_link_libraries(rrc_codec_example_cpp PRIVATE RrcCodec::rrc_codec)
target_compile_features(rrc_codec_example_cpp PRIVATE cxx_std_17)
set_target_properties(rrc_codec_example_cpp PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF)

# 把示例注册为测试（若当前目录在 CTest 环境中）；运行时打印编码结果并返回 0/1。
if(BUILD_TESTING)
  add_test(NAME rrc_codec_example_c COMMAND rrc_codec_example_c)
  add_test(NAME rrc_codec_example_cpp COMMAND rrc_codec_example_cpp)
endif()
