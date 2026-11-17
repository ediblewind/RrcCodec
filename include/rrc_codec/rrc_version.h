/* ============================================================================
 * rrc_version.h — 库版本、C API 版本与 ASN.1 版本
 *
 * 版本策略（方案 7.4）：
 *   - 库语义版本：2.0.0，SOVERSION 2；
 *   - 结构体 ABI 与 ASN.1 v18.10.0 绑定，ASN.1 升级视为 ABI 破坏；
 *   - 2.x 内已有函数签名不变，新增消息只追加 MessageKind 数值。
 * ========================================================================== */
#ifndef RRC_CODEC_VERSION_H
#define RRC_CODEC_VERSION_H

/* 库版本（语义版本）。 */
#define RRC_CODEC_VERSION_MAJOR 2
#define RRC_CODEC_VERSION_MINOR 0
#define RRC_CODEC_VERSION_PATCH 0
#define RRC_CODEC_VERSION_STRING "2.0.0"

/* C API 版本：签名/A BI 兼容性只在本值不变时保证。 */
#define RRC_CODEC_C_API_VERSION 1

/* 生成代码绑定的 ASN.1 版本（3GPP TS 38.331）。 */
#define RRC_CODEC_ASN1_VERSION_MAJOR 18
#define RRC_CODEC_ASN1_VERSION_MINOR 10
#define RRC_CODEC_ASN1_VERSION_PATCH 0
#define RRC_CODEC_ASN1_VERSION_STRING "18.10.0"

/* 把版本号编码为单个整数，便于编译期比较：0xMMmmpp。 */
#define RRC_CODEC_VERSION_ENCODE(major, minor, patch) \
    (((major) << 16) | ((minor) << 8) | (patch))
#define RRC_CODEC_VERSION_NUMBER \
    RRC_CODEC_VERSION_ENCODE(RRC_CODEC_VERSION_MAJOR, RRC_CODEC_VERSION_MINOR, \
                             RRC_CODEC_VERSION_PATCH)
#define RRC_CODEC_ASN1_VERSION_NUMBER \
    RRC_CODEC_VERSION_ENCODE(RRC_CODEC_ASN1_VERSION_MAJOR, \
                             RRC_CODEC_ASN1_VERSION_MINOR, \
                             RRC_CODEC_ASN1_VERSION_PATCH)

#endif /* RRC_CODEC_VERSION_H */
