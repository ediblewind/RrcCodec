/* ============================================================================
 * types/rrc_types_part000.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART000_H
#define RRC_CODEC_TYPES_PART000_H

#include <stdbool.h>
#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief BIT STRING 值（库分配字节缓冲，MSB first）。
 *
 * @note 编码时由调用方提供；解码时由库 malloc，FreeMessage 释放。
 *       bitLength 为有效位数；bytes 中的未用低位补 0。
 */
typedef struct BitString {
    uint8_t* bytes;    /**< 字节缓冲；bitLength==0 时可为 NULL。 */
    uint32_t bitLength;/**< 有效比特数。 */
} BitString;

/**
 * @brief OCTET STRING 值（库分配字节缓冲）。
 *
 * @note 编码时由调用方提供；解码时由库 malloc，FreeMessage 释放。
 */
typedef struct OctetString {
    uint8_t* bytes;   /**< 字节缓冲；length==0 时可为 NULL。 */
    uint32_t length;  /**< 字节数。 */
} OctetString;

/**
 * @brief ASN.1 NULL 的占位类型（编码 0 bit）。
 */
typedef struct Null {
    uint8_t _dummy;   /**< 占位字段；C 不允许空结构体。 */
} Null;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART000_H */
