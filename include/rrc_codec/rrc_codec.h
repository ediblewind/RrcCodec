/* ============================================================================
 * rrc_codec.h — RRC 编解码库公共头（C99 基线，伞头）
 *
 * 3GPP TS 38.331 v18.10.0（NR-RRC-Definitions）UPER 编解码。
 *
 * 基本用法：
 *   编码（传消息类型）：填消息结构体
 *                       → EncodeMessage(kind, message, &encoded)
 *                       → 使用 encoded.data / encoded.size / encoded.bitLength
 *                       → FreeEncodedMessage(&encoded)
 *   解码（传信道 + 消息类型）：DecodeMessage(channel, kind, data, size, &message)
 *                       → 使用 message 字段
 *                       → FreeMessage(kind, &message)
 *
 * 位流读写为内部实现，不对外暴露。
 * 字段名含 bitLength/bitOffset 的单位为比特；size/length 为字节；count 为元素个数。
 *
 * 所有权（AB6）：
 *   - 编码输入结构体及其指针、解码输入 data 字节缓冲均归调用方，库只读；
 *   - 编码输出 encoded.data、解码输出中的变长数据与 CONTAINING 内层结构体由库
 *     malloc 分配，分别用 FreeEncodedMessage / FreeMessage 释放。
 *
 * 线程安全（AB8）：函数无共享可变状态；GetLastErrorInfo 为线程局部；
 * 同一编码结果/消息对象不得并发读写。
 * ========================================================================== */
#ifndef RRC_CODEC_H
#define RRC_CODEC_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rrc_export.h"
#include "rrc_version.h"
#include "rrc_channel.h"
#include "rrc_error.h"
#include "types/rrc_types.h"
#include "messages/rrc_messages.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------------------
 * 固定安全限制（编译期常量，可在 CMake 配置阶段覆盖；方案 4.5）
 *
 * 这些上限同时用于编码校验与解码分配前校验，防止超长输入触发大分配。
 * ------------------------------------------------------------------------- */

/** 单次解码输入上限（字节）。默认 16 MiB。 */
#ifndef RRC_CODEC_MAX_INPUT_BYTES
#define RRC_CODEC_MAX_INPUT_BYTES (16u * 1024u * 1024u)
#endif

/** 单个开放类型长度上限（字节）。默认 8 MiB。 */
#ifndef RRC_CODEC_MAX_OPEN_TYPE_BYTES
#define RRC_CODEC_MAX_OPEN_TYPE_BYTES (8u * 1024u * 1024u)
#endif

/** SEQUENCE OF 最大元素数；与 ASN.1 最大 SIZE 上界一致。默认 65,536。 */
#ifndef RRC_CODEC_MAX_SEQUENCE_OF_COUNT
#define RRC_CODEC_MAX_SEQUENCE_OF_COUNT 65536u
#endif

/** BIT STRING 最大 bit 数；与 ASN.1 最大 SIZE 上界一致。默认 65,536。 */
#ifndef RRC_CODEC_MAX_BITSTRING_BITS
#define RRC_CODEC_MAX_BITSTRING_BITS 65536u
#endif

/** CONTAINING/开放类型最大嵌套层数（编码与解码共用）。默认 16。 */
#ifndef RRC_CODEC_MAX_CONTAINING_DEPTH
#define RRC_CODEC_MAX_CONTAINING_DEPTH 16
#endif

/* ----------------------------------------------------------------------------
 * 编码输出缓冲
 * ------------------------------------------------------------------------- */

/**
 * @brief 编码结果（库分配）。
 *
 * 编码成功后：
 *   - data 指向库 malloc 分配的字节缓冲，按 MSB first 排列；
 *   - size 为有效字节数（补零到字节边界后的字节数）；
 *   - bitLength 为补零前的有效比特数，通常等于 size*8，仅最后一个字节可能
 *     包含补零位。
 * 调用方使用（或复制）数据后必须调用 FreeEncodedMessage 释放，不得直接 free。
 */
typedef struct EncodedMessage {
    uint8_t* data;    /**< 库分配；成功时非 NULL，失败时为 NULL。 */
    size_t size;      /**< 字节数（含末尾补零字节）。 */
    size_t bitLength; /**< 有效比特数（补零前）。 */
} EncodedMessage;

/**
 * @brief 释放编码结果缓冲并清零结构体。
 *
 * @param[in,out] encoded 编码结果；可为 NULL（空操作）。
 *
 * @note 只释放 data（库分配），不释放调用方传入的 message。
 * @note 重复调用安全；编码失败后也可安全调用。
 */
RRC_CODEC_API void FreeEncodedMessage(EncodedMessage* encoded);

/* ----------------------------------------------------------------------------
 * 编解码入口（只有一对通用接口；消息类型由 kind 参数显式确定）
 * ------------------------------------------------------------------------- */

/**
 * @brief 按消息类型编码为 UPER 字节缓冲。
 *
 * @param[in]  kind    实际消息类型（如 MessageKind_MIB），见 rrc_messages.h。
 * @param[in]  message 消息结构体指针，类型必须与 kind 对应；不能为 NULL。
 *                     编码只读取结构体，不接管任何指针的所有权。
 * @param[out] encoded 输出编码结果；不能为 NULL。成功后由库分配 data，
 *                     调用方必须用 FreeEncodedMessage 释放。
 * @return 成功返回 ErrorCode_Ok；失败返回具体编码错误。
 *
 * 编码规则：
 *  - 先写入该消息所属信道的包装层固定选择位（如 BCCH-BCH 的 `mib` 分支、
 *    DL-DCCH 的 `c1` + 备选索引），再按 ASN.1 声明顺序写消息体；
 *  - OPTIONAL 由 has_ 标志决定位图；DEFAULT 字段写位图位，等于默认值时位为 0
 *    且不编码值；所有整数/枚举/长度在写入前做约束校验；
 *  - 采用 UPER，位序 MSB first；完成后补 0 到字节边界；
 *  - `CONTAINING` 字段：先编码内层类型，再按开放类型（长度行列式 + 字节）写入；
 *  - 成功时 encoded->size 为字节数，encoded->bitLength 为有效比特数；
 *  - 失败时 encoded 被清零（data = NULL, size = bitLength = 0），无内存泄漏。
 *
 * @note 所有权：message 中的指针全部由调用方持有，库不释放、不复制；
 *                encoded->data 由库分配，必须 FreeEncodedMessage。
 * @note 线程安全：不同 encoded/message 可并发；同一对象不得并发。
 * @warning 编码完成后不得对同一个 message 调用 FreeMessage——该函数只用于
 *          释放解码产生的内存，对调用方自建消息调用会导致 free 非法指针。
 */
RRC_CODEC_API ErrorCode
EncodeMessage(MessageKind kind, const void* message, EncodedMessage* encoded);

/**
 * @brief 按消息类型与信道解码 UPER 字节缓冲。
 *
 * @param[in]  channel 信道类型，用于校验消息类型与信道一致（映射见 rrc_messages.h）。
 * @param[in]  kind    期望的实际消息类型（如 MessageKind_MIB）。
 * @param[in]  data    输入字节缓冲；size 非 0 时不能为 NULL。库只读、不接管所有权。
 * @param[in]  size    输入字节数；库按 size*8 位读取，末尾补零位忽略。
 * @param[out] message 输出消息结构体指针，类型必须与 kind 对应；
 *                     不能为 NULL。库会先清零再填充；失败时保证结构体全零。
 * @return 成功返回 ErrorCode_Ok；失败返回具体解码错误。
 *
 * 解码规则：
 *  - 先校验 ChannelOfMessageKind(kind) == channel，否则返回 ChannelMismatch；
 *  - 读取包装层选择位并校验与 kind 一致；若码流是 spare/扩展占位分支，
 *    返回 UnsupportedMessage；若是另一条实际消息，返回 MessageKindMismatch；
 *  - 消息体按 ASN.1 规则解码，所有长度/索引/位图做边界校验；
 *  - `CONTAINING` 字段：读开放类型长度后递归解码内层类型，malloc 内层结构体并
 *    挂到指针；嵌套深度超过 RRC_CODEC_MAX_CONTAINING_DEPTH 返回
 *    ContainingDepthExceeded；
 *  - 变长数据（SEQUENCE OF、BIT/OCTET STRING）通过 malloc 分配；
 *  - 解码失败时内部释放已分配内存并把输出结构体清零，无内存泄漏；
 *  - 不要求输入字节数恰好等于消息实际长度，消息末尾之后的位被忽略。
 *
 * @note 所有权：成功时输出结构体中的指针归库分配，必须调用 FreeMessage。
 * @note 线程安全：不同 data/message 可并发。
 */
RRC_CODEC_API ErrorCode
DecodeMessage(ChannelType channel, MessageKind kind, const uint8_t* data,
              size_t size, void* message);

/**
 * @brief 释放解码得到的消息结构体所持有的动态内存。
 *
 * @param[in] kind 解码时使用的消息类型，用于确定结构体类型。
 * @param[in,out] message 解码输出结构体；可为 NULL（空操作）。
 *
 * 释放规则：递归释放所有由解码分配的 SEQUENCE OF 数组、BIT/OCTET STRING
 * 缓冲区、`CONTAINING` 内层结构体及其内部数据，最后清零整个结构体。
 * 重复调用安全。
 *
 * @warning 只能用于 DecodeMessage 成功返回的 message；
 *          不得用于调用方为编码自行构造的消息（其中的指针可能指向栈或静态内存）。
 * @note 线程安全：同一消息不得与解码/读取并发。
 */
RRC_CODEC_API void FreeMessage(MessageKind kind, void* message);

/* ----------------------------------------------------------------------------
 * 版本
 * ------------------------------------------------------------------------- */

/**
 * @brief 返回库版本字符串（语义版本，如 "2.0.0"）。
 * @return 静态字符串，生命周期为进程，调用方不得释放。
 * @note 线程安全。
 */
RRC_CODEC_API const char* GetVersionString(void);

/**
 * @brief 返回生成代码所绑定的 ASN.1 版本字符串（如 "18.10.0"）。
 * @return 静态字符串，生命周期为进程，调用方不得释放。
 * @note 线程安全。
 */
RRC_CODEC_API const char* GetAsn1VersionString(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_H */
