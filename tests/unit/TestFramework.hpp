/* ============================================================================
 * TestFramework.hpp — tests/unit 自建的极简 C++ 单元测试框架（无第三方依赖）
 *
 * 用法：
 *   RRC_TEST(test_name) { CHECK(condition); CHECK_EQ(actual, expected); }
 *
 * - 每个测试注册到全局 Registry；
 * - CHECK 失败抛出 TestFailure，由 RunAllTests（TestMain.cpp）捕获并报告；
 * - 测试可执行文件返回 0 表示全部通过，非 0 表示存在失败。
 * ========================================================================== */
#ifndef RRC_CODEC_TESTS_UNIT_TEST_FRAMEWORK_HPP
#define RRC_CODEC_TESTS_UNIT_TEST_FRAMEWORK_HPP

#include <cstdint>
#include <cstdio>
#include <exception>
#include <initializer_list>
#include <sstream>
#include <string>
#include <vector>

namespace rrc {
namespace test {

/** 单个测试失败（CHECK 失败或未预期异常）。 */
struct TestFailure {
  std::string message;
  const char* file;
  int line;
};

/** 一个测试用例：名字 + 函数指针。 */
struct TestCase {
  const char* name;
  void (*function)();
};

/** 全局测试注册表（函数内静态，避免静态初始化顺序问题）。 */
inline std::vector<TestCase>& Registry() {
  static std::vector<TestCase> registry;
  return registry;
}

/** RRC_TEST 宏使用的静态注册器。 */
struct Registrar {
  Registrar(const char* name, void (*function)()) {
    Registry().push_back(TestCase{name, function});
  }
};

/** 报告失败并终止当前测试。 */
[[noreturn]] inline void Fail(const char* file, int line,
                              const std::string& message) {
  throw TestFailure{message, file, line};
}

/** CHECK(cond)。 */
#define RRC_CHECK(condition)                                                 \
  do {                                                                       \
    if (!(condition)) {                                                      \
      ::rrc::test::Fail(__FILE__, __LINE__,                                  \
                        std::string("CHECK failed: ") + #condition);         \
    }                                                                        \
  } while (0)

/** 检查 actual == expected，失败时打印双方取值。 */
template <typename Actual, typename Expected>
void CheckEq(const char* file, int line, const char* expression,
             const Actual& actual, const Expected& expected) {
  if (actual == expected) {
    return;
  }
  std::ostringstream stream;
  stream << expression << " — expected: " << expected
         << ", actual: " << actual;
  Fail(file, line, stream.str());
}

/** 检查字节缓冲完全相等，失败时打印十六进制内容。 */
inline void CheckBytes(const char* file, int line, const char* expression,
                       const std::vector<std::uint8_t>& actual,
                       std::initializer_list<std::uint8_t> expected) {
  const std::vector<std::uint8_t> expected_bytes(expected);
  if (actual == expected_bytes) {
    return;
  }
  std::ostringstream stream;
  stream << expression << " — expected bytes:";
  for (const std::uint8_t byte : expected_bytes) {
    char buffer[8];
    std::snprintf(buffer, sizeof(buffer), " %02X",
                  static_cast<unsigned>(byte));
    stream << buffer;
  }
  stream << ", actual bytes:";
  for (const std::uint8_t byte : actual) {
    char buffer[8];
    std::snprintf(buffer, sizeof(buffer), " %02X",
                  static_cast<unsigned>(byte));
    stream << buffer;
  }
  Fail(file, line, stream.str());
}

/** 运行全部已注册测试，返回进程退出码（0 = 全部通过）。 */
int RunAllTests();

#define CHECK(condition) RRC_CHECK(condition)
#define CHECK_EQ(actual, expected)                                           \
  ::rrc::test::CheckEq(__FILE__, __LINE__, #actual " == " #expected,         \
                       (actual), (expected))
#define CHECK_BYTES(actual, ...)                                             \
  ::rrc::test::CheckBytes(__FILE__, __LINE__, #actual, (actual), __VA_ARGS__)

/** 定义一个测试用例（函数体紧跟在宏之后）。 */
#define RRC_TEST(name)                                                       \
  static void name();                                                        \
  static ::rrc::test::Registrar name##_registrar(#name, &name);              \
  static void name()

}  // namespace test
}  // namespace rrc

#endif /* RRC_CODEC_TESTS_UNIT_TEST_FRAMEWORK_HPP */
