add_executable(rrc_message_tests
  MessageRoundTripTests.cpp
  "${CMAKE_SOURCE_DIR}/tests/generated/message_samples.cpp")

target_include_directories(rrc_message_tests PRIVATE
  "${CMAKE_SOURCE_DIR}/tests/generated"
  "${CMAKE_SOURCE_DIR}/src/generated"
  "${CMAKE_SOURCE_DIR}/src/core")

target_link_libraries(rrc_message_tests PRIVATE RrcCodec::rrc_codec)
target_compile_features(rrc_message_tests PRIVATE cxx_std_17)
add_test(NAME messages.roundtrip_53 COMMAND rrc_message_tests)
