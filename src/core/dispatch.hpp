/* ============================================================================
 * dispatch.hpp — 按 MessageKind 分派的内部接口（不安装、不导出）
 *
 * 实现位于 src/core/dispatch.cpp：手写 switch(kind)（53 个消息入口），
 * 将公共 C ABI 的 void* 转换为生成代码的具体结构体类型，调用
 * EncodeMessage_<Kind> / DecodeMessage_<Kind> / FreeMessage_<Kind>。
 *
 * 生成函数声明位于生成头 src/generated/codec_internal.h，命名规则：
 *   MessageKind_MIB              → EncodeMessage_MIB / DecodeMessage_MIB / FreeMessage_MIB
 *   MessageKind_RRCReconfiguration → EncodeMessage_RRCReconfiguration / ...
 * ========================================================================== */
#ifndef RRC_CODEC_CORE_DISPATCH_HPP
#define RRC_CODEC_CORE_DISPATCH_HPP

#include <cstddef>
#include <cstdint>

#include "rrc_codec/rrc_codec.h"

namespace rrc {
namespace v1810 {

/**
 * @brief 按消息类型编码；message 必须指向 kind 对应的结构体。
 * @param[out] encoded 成功时写入库分配的缓冲；失败时清零。
 */
ErrorCode EncodeByKind(MessageKind kind, const void* message,
                       EncodedMessage* encoded);

/**
 * @brief 按信道 + 消息类型解码；channel 已由公共 API 校验，此处只做分派。
 * @param[out] message 成功时填充；失败时清零。
 */
ErrorCode DecodeByKind(MessageKind kind, const std::uint8_t* data,
                       std::size_t size, void* message);

/** 释放解码得到的消息（按 kind 分派到 FreeMessage_<Kind>）。 */
void FreeByKind(MessageKind kind, void* message);

}  // namespace v1810
}  // namespace rrc

#endif /* RRC_CODEC_CORE_DISPATCH_HPP */
