/* ============================================================================
 * tests/install/consumer-cmake/main_cpp.cpp — find_package 消费者的 C++17 入口
 * ========================================================================== */
#include <rrc_codec/rrc_codec.h>

#include <cstdio>

#include "mib_roundtrip.h"

int main() {
  std::printf("RrcCodec %s (ASN.1 %s), C++ consumer\n", GetVersionString(),
              GetAsn1VersionString());
  return rrc_install_report();
}
