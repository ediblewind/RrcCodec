/* ============================================================================
 * error.cpp — 错误摘要与错误回调的内部实现
 *
 * 公共接口见 include/rrc_codec/rrc_error.h、include/rrc_codec/rrc_version.h：
 *   GetLastErrorInfo / SetErrorHandler / GetVersionString / GetAsn1VersionString
 *
 * 设计（方案 4.4、4.6、实现契约 §3）：
 *   - 最近一次错误按线程保存（thread_local），线程之间互不干扰；
 *   - 首版只填 code/channel/bitOffset，fieldPath/message 恒为 NULL；
 *   - 成功调用不会清空已记录的旧错误；
 *   - SetErrorHandler 只保存 handler/userData，不触发回调（库不做任何 I/O）；
 *   - 版本字符串为进程生命期的静态字符串。
 * ========================================================================== */
#include "error_internal.hpp"

#include <cstddef>

#include "rrc_codec/rrc_codec.h"
#include "rrc_codec/rrc_version.h"

namespace {

/* ----------------------------------------------------------------------------
 * 线程局部错误槽
 *
 * 零初始化等价状态：code = ErrorCode_Ok，channel = (ChannelType)0，
 * bitOffset = 0，fieldPath/message = NULL，即“无错误”。
 * ------------------------------------------------------------------------- */
thread_local ErrorInfo g_last_error = {
    ErrorCode_Ok,                 /* code */
    static_cast<ChannelType>(0),  /* channel：0 表示未涉及信道 */
    0,                            /* bitOffset */
    nullptr,                      /* fieldPath（首版恒为 NULL） */
    nullptr                       /* message（首版恒为 NULL） */
};

/* ----------------------------------------------------------------------------
 * 错误回调（接口预留）
 *
 * 首版只保存、不触发，因此正常路径上不会读取这两个值。SetErrorHandler 的
 * 调用约定（方案 4.6）是初始化阶段单线程调用，这里不加锁。
 * ------------------------------------------------------------------------- */
ErrorHandler g_error_handler = nullptr;
void* g_error_handler_user_data = nullptr;

}  // namespace

namespace rrc {
namespace v1810 {

void StoreLastError(ErrorCode code, ChannelType channel, std::uint64_t bit_offset) {
  /* 约定：只记录失败；成功调用不清空旧错误。 */
  if (code == ErrorCode_Ok) {
    return;
  }
  g_last_error.code = code;
  g_last_error.channel = channel;
  g_last_error.bitOffset = bit_offset;
  g_last_error.fieldPath = nullptr; /* 接口预留：恒为 NULL */
  g_last_error.message = nullptr;   /* 接口预留：恒为 NULL */
}

ErrorCode LoadLastError() { return g_last_error.code; }

void NotifyErrorHandler(const ErrorInfo& info) {
  /* 首版不触发回调（方案 4.4：接口预留）。保留入口形状，未来版本在此调用
   * g_error_handler(&info, g_error_handler_user_data)。当前只读取保存值，
   * 以避免“未使用变量”告警并保持 ABI/行为稳定。 */
  (void)info;
  (void)g_error_handler;
  (void)g_error_handler_user_data;
}

/* ----------------------------------------------------------------------------
 * 以下两个 getter 只在本翻译单元内、供公共 getter / setter 使用；
 * 不写入 error_internal.hpp（该头为内部契约，不扩展）。
 * ------------------------------------------------------------------------- */
static ErrorInfo LastErrorInfoSnapshot() { return g_last_error; }

static void SetErrorHandlerState(ErrorHandler handler, void* user_data) {
  g_error_handler = handler;
  g_error_handler_user_data = user_data;
}

}  // namespace v1810
}  // namespace rrc

/* ============================================================================
 * 公共 C ABI
 * ========================================================================== */
extern "C" {

ErrorCode GetLastErrorInfo(ErrorInfo* info) {
  if (info == nullptr) {
    /* 参数错误：不写任何线程局部状态，直接返回具体错误码。 */
    return ErrorCode_InvalidArgument;
  }
  *info = rrc::v1810::LastErrorInfoSnapshot();
  /* 首版保证：接口预留字段恒为 NULL。 */
  info->fieldPath = nullptr;
  info->message = nullptr;
  return info->code;
}

void SetErrorHandler(ErrorHandler handler, void* userData) {
  rrc::v1810::SetErrorHandlerState(handler, userData);
}

const char* GetVersionString(void) { return RRC_CODEC_VERSION_STRING; }

const char* GetAsn1VersionString(void) { return RRC_CODEC_ASN1_VERSION_STRING; }

}  // extern "C"
