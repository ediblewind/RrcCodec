# 消息级测试通过生成器的内部函数构造样例；共享库构建时生成符号按方案隐藏
# （只导出 8 个 C ABI 函数），因此该测试仅在静态库构建时启用。
if(RRC_CODEC_BUILD_SHARED)
  message(STATUS "rrc_codec: skip messages.roundtrip_all in shared library build")
  return()
endif()

add_executable(rrc_message_tests
  MessageRoundTripTests.cpp
  "${CMAKE_SOURCE_DIR}/tests/generated/message_samples.cpp"
  "${CMAKE_SOURCE_DIR}/tests/generated/message_manifest.cpp")

target_include_directories(rrc_message_tests PRIVATE
  "${CMAKE_SOURCE_DIR}/tests/generated"
  "${CMAKE_SOURCE_DIR}/src/generated"
  "${CMAKE_SOURCE_DIR}/src/core")

target_link_libraries(rrc_message_tests PRIVATE RrcCodec::rrc_codec)
target_compile_features(rrc_message_tests PRIVATE cxx_std_17)
add_test(NAME messages.roundtrip_all COMMAND rrc_message_tests)
