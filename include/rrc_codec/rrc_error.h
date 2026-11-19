/* ============================================================================
 * rrc_error.h — 错误码、错误摘要与错误接口
 *
 * 首版实现范围：
 *   - 每个可失败函数返回具体 ErrorCode；
 *   - GetLastErrorInfo 返回线程局部错误摘要，只填 code/channel/bitOffset；
 *   - fieldPath/message 为接口预留，恒为 NULL；
 *   - SetErrorHandler 只保存参数，不触发回调；库不做任何 I/O。
 * ========================================================================== */
#ifndef RRC_CODEC_ERROR_H
#define RRC_CODEC_ERROR_H

#include <stdint.h>

#include "rrc_channel.h"
#include "rrc_export.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 错误码。0 为成功，其余为失败原因。
 *
 * @note 数值在 2.x 内稳定；新增错误码只追加，不复用。
 */
typedef enum ErrorCode {
    ErrorCode_Ok = 0, /**< 成功 */

    /* 参数与状态错误 */
    ErrorCode_InvalidArgument = 1001,    /**< 空指针、非法枚举值、非法大小等 */
    ErrorCode_UnsupportedChannel = 1002, /**< channel 不在 1–10 范围内 */
    ErrorCode_OutOfMemory = 1003,        /**< 内存分配失败 */
    ErrorCode_NotImplemented = 1004,     /**< 预留接口在首版未实现 */

    /* 编码错误（输入结构体不合法） */
    ErrorCode_ValueOutOfRange = 2001,       /**< INTEGER 超出 ASN.1 约束范围 */
    ErrorCode_InvalidBitString = 2002,      /**< BIT STRING 长度/指针非法 */
    ErrorCode_InvalidOctetString = 2003,    /**< OCTET STRING 长度/指针非法 */
    ErrorCode_InvalidEnumValue = 2004,      /**< 枚举值不在允许集合 */
    ErrorCode_InvalidChoiceTag = 2005,      /**< CHOICE tag 与 ASN.1 不匹配 */
    ErrorCode_MissingMandatoryField = 2006, /**< 必填字段缺失（如 SEQUENCE OF 指针为空） */

    /* 解码错误（输入码流不合法或不支持） */
    ErrorCode_TruncatedInput = 3001,         /**< 码流不足 */
    ErrorCode_InvalidLength = 3002,          /**< 长度行列式非法 */
    ErrorCode_LengthOutOfRange = 3003,       /**< 长度超出 ASN.1 约束 */
    ErrorCode_IntegerOutOfRange = 3004,      /**< 整数编码超出约束 */
    ErrorCode_InvalidEnumeratedIndex = 3005, /**< 枚举索引非法 */
    ErrorCode_InvalidChoiceIndex = 3006,     /**< CHOICE 索引非法 */
    ErrorCode_InvalidOptionalBitmap = 3007,  /**< OPTIONAL 位图越界 */
    ErrorCode_InvalidExtensionBitmap = 3008, /**< 扩展位图非法 */
    ErrorCode_UnsupportedExtension = 3009,   /**< 出现 v18.10.0 之外的扩展内容 */
    ErrorCode_OpenTypeOverrun = 3010,        /**< 开放类型长度越界 */
    ErrorCode_ChannelMismatch = 3011,        /**< 解码 channel 与消息类型所属信道不一致 */
    ErrorCode_MessageKindMismatch = 3012,    /**< 码流中的包装选择位与期望消息类型不一致 */
    ErrorCode_UnsupportedMessage = 3013,     /**< 码流为 spare/扩展占位等未映射分支 */
    ErrorCode_ContainingDepthExceeded = 3014, /**< CONTAINING/开放类型嵌套超过深度上限 */

    ErrorCode_InternalError = 9001 /**< 内部错误（兜底） */
} ErrorCode;

/**
 * @brief 最近一次错误的摘要信息。
 *
 * 首版只填 code/channel/bitOffset；fieldPath 与 message 恒为 NULL（接口预留）。
 * 结构体按值返回，不使用版本化布局；新增字段只在主版本升级时进行。
 */
typedef struct ErrorInfo {
    ErrorCode code;        /**< 错误码；与函数返回值一致 */
    ChannelType channel;   /**< 出错时的 channel；未涉及信道时为 0 */
    uint64_t bitOffset;    /**< 出错位置（相对于本次编解码起点的比特偏移） */
    const char* fieldPath; /**< 预留：首版恒为 NULL */
    const char* message;   /**< 预留：首版恒为 NULL */
} ErrorInfo;

/**
 * @brief 错误回调类型（接口预留）。
 *
 * @param info 错误摘要（库内部临时对象，回调返回后失效）。
 * @param userData 调用方在 SetErrorHandler 注册的上下文指针。
 *
 * @note 首版只保存回调，不会调用；未来版本启用。不得在回调中重入编解码函数。
 */
typedef void (*ErrorHandler)(const ErrorInfo* info, void* userData);

/**
 * @brief 返回当前线程最近一次失败的错误摘要。
 *
 * @param[out] info 输出结构体；不能为 NULL。
 * @return 最近一次错误码；无错误时返回 ErrorCode_Ok。
 *
 * @note 线程安全：每个线程独立保存；上一次调用成功不会清空已记录的错误。
 * @note 首版仅保证 code/channel/bitOffset 有效，fieldPath/message 为 NULL。
 */
RRC_CODEC_API ErrorCode GetLastErrorInfo(ErrorInfo* info);

/**
 * @brief 注册错误回调（接口预留）。
 *
 * @param handler 回调函数；传 NULL 表示注销。
 * @param userData 回调上下文指针，库不接管所有权。
 *
 * @note 首版只保存参数、不会触发回调；保留接口以便未来版本二进制兼容地启用日志。
 */
RRC_CODEC_API void SetErrorHandler(ErrorHandler handler, void* userData);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_ERROR_H */
