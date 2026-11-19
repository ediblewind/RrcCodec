/* ============================================================================
 * codec_api.cpp — 公共 C ABI 编解码入口
 *
 * 实现 include/rrc_codec/rrc_codec.h 中的 4 个编解码函数：
 *   EncodeMessage / FreeEncodedMessage / DecodeMessage / FreeMessage
 *
 * 职责：
 *   1. 参数校验：kind 1–RRC_CODEC_MESSAGE_KIND_COUNT、指针非空、解码输入 size 不超过
 *      RRC_CODEC_MAX_INPUT_BYTES；
 *   2. 解码前校验 channel 合法性及 ChannelOfMessageKind(kind) == channel；
 *   3. 按 MessageKind 调用 dispatch.hpp 的分派函数（void* ↔ 具体结构体转换由
 *      dispatch.cpp 完成）；
 *   4. 异常兜底：std::bad_alloc → OutOfMemory，其它异常 → InternalError；
 *   5. 记录线程局部 last error（dispatch 在能拿到 Encoder/Decoder 的位置记录
 *      精确 bitOffset；本文件记录参数/信道类错误，二者对一次失败只写一次）。
 *
 * 所有权：编码输出 encoded->data、解码输出中的变长数据均由库 malloc 分配，
 * 分别由 FreeEncodedMessage / FreeMessage 释放。
 * ========================================================================== */
#include <cstdlib>
#include <cstring>
#include <new>

#include "dispatch.hpp"
#include "error_internal.hpp"
#include "rrc_codec/rrc_codec.h"

namespace {

/** kind 是否为实际消息类型（数值连续 1..RRC_CODEC_MESSAGE_KIND_COUNT）。 */
bool IsValidMessageKind(MessageKind kind) {
  return kind >= MessageKind_MIB &&
         static_cast<int>(kind) <
             static_cast<int>(MessageKind_MIB) + RRC_CODEC_MESSAGE_KIND_COUNT;
}

/** channel 是否为 1–10 中的合法信道；0/越界均非法。 */
bool IsValidChannel(ChannelType channel) {
  return channel >= ChannelType_BCCH_BCH && channel <= ChannelType_UL_DCCH;
}

/** 把 EncodedMessage 置为“无输出”状态（data = NULL，size/bitLength = 0）。 */
void ClearEncodedMessage(EncodedMessage* encoded) {
  encoded->data = nullptr;
  encoded->size = 0;
  encoded->bitLength = 0;
}

}  // namespace

/* ============================================================================
 * 公共 C ABI
 * ========================================================================== */
extern "C" {

void FreeEncodedMessage(EncodedMessage* encoded) {
  if (encoded == nullptr) {
    return; /* 空操作 */
  }
  std::free(encoded->data); /* free(NULL) 合法 */
  ClearEncodedMessage(encoded);
}

ErrorCode EncodeMessage(MessageKind kind, const void* message,
                        EncodedMessage* encoded) {
  using namespace rrc::v1810;

  /* 无论后续校验是否通过，输出先清零，保证失败路径 encoded 干净。 */
  if (encoded != nullptr) {
    ClearEncodedMessage(encoded);
  }

  if (encoded == nullptr || message == nullptr || !IsValidMessageKind(kind)) {
    StoreLastError(ErrorCode_InvalidArgument, static_cast<ChannelType>(0), 0);
    return ErrorCode_InvalidArgument;
  }

  const ChannelType channel = ChannelOfMessageKind(kind);

  try {
    const ErrorCode rc = EncodeByKind(kind, message, encoded);
    if (rc != ErrorCode_Ok) {
      /* 分派层已在失败时清零；这里再兜底一次，避免任何路径留下半成品。 */
      ClearEncodedMessage(encoded);
    }
    return rc;
  } catch (const std::bad_alloc&) {
    ClearEncodedMessage(encoded);
    StoreLastError(ErrorCode_OutOfMemory, channel, 0);
    return ErrorCode_OutOfMemory;
  } catch (...) {
    ClearEncodedMessage(encoded);
    StoreLastError(ErrorCode_InternalError, channel, 0);
    return ErrorCode_InternalError;
  }
}

ErrorCode DecodeMessage(ChannelType channel, MessageKind kind,
                        const uint8_t* data, size_t size, void* message) {
  using namespace rrc::v1810;

  /* ---- 参数与信道校验（顺序固定，先报最具体的错误） ---------------------- */
  if (!IsValidMessageKind(kind)) {
    StoreLastError(ErrorCode_InvalidArgument, static_cast<ChannelType>(0), 0);
    return ErrorCode_InvalidArgument;
  }
  if (!IsValidChannel(channel)) {
    StoreLastError(ErrorCode_UnsupportedChannel, channel, 0);
    return ErrorCode_UnsupportedChannel;
  }
  if (ChannelOfMessageKind(kind) != channel) {
    StoreLastError(ErrorCode_ChannelMismatch, channel, 0);
    return ErrorCode_ChannelMismatch;
  }
  if (message == nullptr) {
    StoreLastError(ErrorCode_InvalidArgument, channel, 0);
    return ErrorCode_InvalidArgument;
  }
  if (size > static_cast<size_t>(RRC_CODEC_MAX_INPUT_BYTES)) {
    StoreLastError(ErrorCode_InvalidArgument, channel, 0);
    return ErrorCode_InvalidArgument;
  }
  if (data == nullptr && size != 0) {
    StoreLastError(ErrorCode_InvalidArgument, channel, 0);
    return ErrorCode_InvalidArgument;
  }

  /* 输出清零由分派层按具体结构体大小完成（解码入口 memset）。 */

  try {
    return DecodeByKind(kind, data, size, message);
  } catch (const std::bad_alloc&) {
    StoreLastError(ErrorCode_OutOfMemory, channel, 0);
    return ErrorCode_OutOfMemory;
  } catch (...) {
    StoreLastError(ErrorCode_InternalError, channel, 0);
    return ErrorCode_InternalError;
  }
}

void FreeMessage(MessageKind kind, void* message) {
  if (message == nullptr || !IsValidMessageKind(kind)) {
    return; /* 空操作 / 非法 kind 无法确定结构体类型 */
  }
  try {
    rrc::v1810::FreeByKind(kind, message);
  } catch (...) {
    /* 释放路径不允许异常跨越 C ABI；生成 Free_* 不分配、理论上不抛异常，
     * 这里只做形式上的兜底（不记录错误，因为函数无返回值）。 */
  }
}

}  // extern "C"
