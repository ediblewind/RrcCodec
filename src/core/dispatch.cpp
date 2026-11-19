/* ============================================================================
 * dispatch.cpp — 按 MessageKind 分派到生成代码的内部实现（53 路 switch）
 *
 * 生成函数声明位于 src/generated/codec_internal.h（由生成器产出）：
 *   ErrorCode EncodeMessage_<KindSuffix>(Encoder&, const <MsgType>&);
 *   ErrorCode DecodeMessage_<KindSuffix>(Decoder&, <MsgType>&);
 *   void      FreeMessage_<KindSuffix>(<MsgType>&);
 * 命名见 docs/实现契约.md §2.3；53 个 MessageKind ↔ 结构体名见
 * docs/RRC编解码库简化方案.md 附录 A（结构体名 = “MessageKind_”之后的拼写）。
 *
 * 本文件职责（实现契约 §3）：
 *   1. 完成 void* ↔ 具体结构体指针的类型转换（本文件是唯一需要知道全部 53 个
 *      消息结构体类型的地方）；
 *   2. 构造 Encoder/Decoder、调用生成入口、取得编码字节/UPPER 有效位长；
 *   3. 编码成功时按“malloc + 复制”产出 EncodedMessage（所有权归 FreeEncodedMessage）；
 *   4. 解码入口按具体结构体大小清零；失败时调用生成 FreeMessage_<Kind> 清理并清零；
 *   5. 在能取得 Encoder::BitLength()/Decoder::BitOffset() 的位置记录 last error
 *      （公共 API codec_api.cpp 负责参数/信道类错误；一次失败只记录一次）。
 *
 * 异常：std::vector 的分配可能抛 std::bad_alloc，由 codec_api.cpp 的 C ABI
 * 边界兜底转换为 OutOfMemory，不跨越 C ABI。
 * ========================================================================== */
#include "../generated/codec_internal.h"

#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <vector>

#include "dispatch.hpp"
#include "error_internal.hpp"

/* ----------------------------------------------------------------------------
 * 消息类型清单：由生成器写入 generated/message_dispatch.inc（单一来源）。
 * X(suffix) 的语义见该文件头；本文件只保留编解码/释放的分派逻辑。
 * ------------------------------------------------------------------------- */
#include "../../generated/message_dispatch.inc"

namespace rrc {
namespace v1810 {
namespace {

/* ----------------------------------------------------------------------------
 * 编码：一个类型的完整处理
 *
 * 成功：malloc 复制编码字节，填 size/bitLength；
 * 失败：encoded 清零，记录 (code, channel, enc.BitLength())。
 * ------------------------------------------------------------------------- */
template <typename MessageType>
ErrorCode EncodeAs(MessageKind kind, const void* message, EncodedMessage* encoded,
                   ErrorCode (*encode)(Encoder&, const MessageType&)) {
  Encoder encoder;
  const MessageType& value = *static_cast<const MessageType*>(message);
  ErrorCode rc = encode(encoder, value);
  if (rc == ErrorCode_Ok) {
    /* 错误粘滞：即使生成函数漏返回，也以 Encoder 的首个错误为准。 */
    rc = encoder.Error();
  }
  if (rc != ErrorCode_Ok) {
    std::memset(encoded, 0, sizeof(*encoded));
    StoreLastError(rc, ChannelOfMessageKind(kind),
                   static_cast<std::uint64_t>(encoder.BitLength()));
    return rc;
  }

  /* 先取补零前的有效位长，再 Finish() 补零到字节边界。 */
  const std::uint64_t bit_length = encoder.BitLength();
  std::vector<std::uint8_t> bytes = encoder.Finish();
  const std::size_t size = bytes.size();
  if (size == 0) {
    /* 理论上不会发生（每个消息至少写 1 位包装层），防御性处理。 */
    std::memset(encoded, 0, sizeof(*encoded));
    return ErrorCode_Ok;
  }

  std::uint8_t* buffer = static_cast<std::uint8_t*>(std::malloc(size));
  if (buffer == nullptr) {
    std::memset(encoded, 0, sizeof(*encoded));
    StoreLastError(ErrorCode_OutOfMemory, ChannelOfMessageKind(kind), bit_length);
    return ErrorCode_OutOfMemory;
  }
  std::memcpy(buffer, bytes.data(), size);
  encoded->data = buffer;
  encoded->size = size;
  encoded->bitLength = bit_length;
  return ErrorCode_Ok;
}

/* ----------------------------------------------------------------------------
 * 解码：一个类型的完整处理
 *
 * 入口 memset 整个结构体；失败时调用生成 FreeMessage_* 清理已分配内存并清零，
 * 记录 (code, channel, dec.BitOffset())。
 * ------------------------------------------------------------------------- */
template <typename MessageType>
ErrorCode DecodeAs(MessageKind kind, const std::uint8_t* data, std::size_t size,
                   void* message,
                   ErrorCode (*decode)(Decoder&, MessageType&),
                   void (*free_message)(MessageType&)) {
  MessageType& value = *static_cast<MessageType*>(message);
  std::memset(&value, 0, sizeof(value)); /* 解码入口清零（契约 §3/§5） */

  Decoder decoder(data, size);
  ErrorCode rc = decode(decoder, value);
  if (rc == ErrorCode_Ok) {
    rc = decoder.Error(); /* 错误粘滞兜底 */
  }
  if (rc != ErrorCode_Ok) {
    /* 生成解码函数按契约已在失败路径清理；这里再调用一次 FreeMessage_* 作为
     * 防御（生成的 Free_* 幂等且会清零，重复调用安全），随后再次清零。 */
    free_message(value);
    std::memset(&value, 0, sizeof(value));
    StoreLastError(rc, ChannelOfMessageKind(kind),
                   static_cast<std::uint64_t>(decoder.BitOffset()));
    return rc;
  }
  return ErrorCode_Ok;
}

}  // namespace
}  // namespace v1810
}  // namespace rrc

namespace rrc {
namespace v1810 {

ErrorCode EncodeByKind(MessageKind kind, const void* message,
                       EncodedMessage* encoded) {
  switch (kind) {
#define RRC_CODEC_ENCODE_CASE(suffix)                                     \
  case MessageKind_##suffix:                                              \
    return EncodeAs<suffix>(kind, message, encoded, &EncodeMessage_##suffix);
    RRC_CODEC_MESSAGE_TYPE_LIST(RRC_CODEC_ENCODE_CASE)
#undef RRC_CODEC_ENCODE_CASE
    default:
      break;
  }
  std::memset(encoded, 0, sizeof(*encoded));
  StoreLastError(ErrorCode_InvalidArgument, static_cast<ChannelType>(0), 0);
  return ErrorCode_InvalidArgument;
}

ErrorCode DecodeByKind(MessageKind kind, const std::uint8_t* data,
                       std::size_t size, void* message) {
  switch (kind) {
#define RRC_CODEC_DECODE_CASE(suffix)                                    \
  case MessageKind_##suffix:                                             \
    return DecodeAs<suffix>(kind, data, size, message,                    \
                            &DecodeMessage_##suffix, &FreeMessage_##suffix);
    RRC_CODEC_MESSAGE_TYPE_LIST(RRC_CODEC_DECODE_CASE)
#undef RRC_CODEC_DECODE_CASE
    default:
      break;
  }
  StoreLastError(ErrorCode_InvalidArgument, static_cast<ChannelType>(0), 0);
  return ErrorCode_InvalidArgument;
}

void FreeByKind(MessageKind kind, void* message) {
  if (message == nullptr) {
    return;
  }
  switch (kind) {
#define RRC_CODEC_FREE_CASE(suffix)                                      \
  case MessageKind_##suffix:                                             \
    FreeMessage_##suffix(*static_cast<suffix*>(message));                \
    return;
    RRC_CODEC_MESSAGE_TYPE_LIST(RRC_CODEC_FREE_CASE)
#undef RRC_CODEC_FREE_CASE
    default:
      return;
  }
}

}  // namespace v1810
}  // namespace rrc
