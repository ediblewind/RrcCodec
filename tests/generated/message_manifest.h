/* ============================================================================
 * tests/generated/message_manifest.h — 测试用消息清单（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TESTS_GENERATED_MESSAGE_MANIFEST_H
#define RRC_CODEC_TESTS_GENERATED_MESSAGE_MANIFEST_H

#include <cstddef>

#include "rrc_codec/rrc_codec.h"

namespace rrc {
namespace v1810 {
namespace test {

/* 消息数量（= MessageKind 的最大值）；测试循环的上界。 */
constexpr std::size_t kMessageKindCount = 53;

/* 按 MessageKind - 1 索引。 */
extern const char* const kMessageKindNames[kMessageKindCount];
extern const ChannelType kMessageKindChannels[kMessageKindCount];
extern const std::size_t kMessageKindWrapperBits[kMessageKindCount];

}  // namespace test
}  // namespace v1810
}  // namespace rrc

#endif
