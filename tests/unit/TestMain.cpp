/* ============================================================================
 * TestMain.cpp — tests/unit 测试入口：运行全部注册测试并汇总结果
 * ========================================================================== */
#include <cstdio>

#include "TestFramework.hpp"

namespace rrc {
namespace test {

int RunAllTests() {
  int passed = 0;
  int failed = 0;
  for (const TestCase& test_case : Registry()) {
    try {
      test_case.function();
      ++passed;
      std::printf("[ PASS ] %s\n", test_case.name);
    } catch (const TestFailure& failure) {
      ++failed;
      std::printf("[ FAIL ] %s\n         %s:%d: %s\n", test_case.name,
                  failure.file, failure.line, failure.message.c_str());
    } catch (const std::exception& exception) {
      ++failed;
      std::printf("[ FAIL ] %s\n         unexpected exception: %s\n",
                  test_case.name, exception.what());
    } catch (...) {
      ++failed;
      std::printf("[ FAIL ] %s\n         unexpected unknown exception\n",
                  test_case.name);
    }
  }
  std::printf("\n%d passed, %d failed (%d total)\n", passed, failed,
              passed + failed);
  return failed == 0 ? 0 : 1;
}

}  // namespace test
}  // namespace rrc

int main() { return rrc::test::RunAllTests(); }
