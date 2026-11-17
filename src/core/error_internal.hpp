/* ============================================================================
 * error_internal.hpp — 错误记录的内部接口（不安装、不导出）
 *
 * 公共接口见 rrc_codec/rrc_error.h。首版只记录 code/channel/bitOffset，
 * fieldPath/message 恒为 NULL；线程局部存储由 error.cpp 实现。
 * ========================================================================== */
#ifndef RRC_CODEC_CORE_ERROR_INTERNAL_HPP
#define RRC_CODEC_CORE_ERROR_INTERNAL_HPP

#include <cstdint>

#include "rrc_codec/rrc_error.h"

namespace rrc {
namespace v1810 {

/** 记录当前线程最近一次失败；成功调用不会清空已记录的旧错误。 */
void StoreLastError(ErrorCode code, ChannelType channel, std::uint64_t bit_offset);

/** 取当前线程最近一次错误码（无错误返回 ErrorCode_Ok）。 */
ErrorCode LoadLastError();

/** 预留：首版不触发回调（只保存 handler），保留内部入口以便未来启用。 */
void NotifyErrorHandler(const ErrorInfo& info);

}  // namespace v1810
}  // namespace rrc

#endif /* RRC_CODEC_CORE_ERROR_INTERNAL_HPP */
