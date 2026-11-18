/* ============================================================================
 * types/rrc_types_part012.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART012_H
#define RRC_CODEC_TYPES_PART012_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"
#include "rrc_types_part005.h"
#include "rrc_types_part006.h"
#include "rrc_types_part007.h"
#include "rrc_types_part008.h"
#include "rrc_types_part009.h"
#include "rrc_types_part010.h"
#include "rrc_types_part011.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief IAB_IP_AddressAndTraffic_r16
 * @note ASN.1：IAB-IP-AddressAndTraffic-r16；源文件第 463 行。
 * @note IAB-IP-AddressAndTraffic-r16 ::= SEQUENCE { all-Traffic-IAB-IP-Address-r16, f1-C-Traffic-IP-Address-r16, f1-U-...
 */
struct IAB_IP_AddressAndTraffic_r16 {
    bool has_all_Traffic_IAB_IP_Address_r16; /**< all-Traffic-IAB-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16* all_Traffic_IAB_IP_Address_r16_items; /**< ASN.1 all-Traffic-IAB-IP-Address-r16；SEQUENCE OF IAB_IP_Address_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t all_Traffic_IAB_IP_Address_r16_count; /**< all-Traffic-IAB-IP-Address-r16 元素个数。 */
    bool has_f1_C_Traffic_IP_Address_r16; /**< f1-C-Traffic-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16* f1_C_Traffic_IP_Address_r16_items; /**< ASN.1 f1-C-Traffic-IP-Address-r16；SEQUENCE OF IAB_IP_Address_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t f1_C_Traffic_IP_Address_r16_count; /**< f1-C-Traffic-IP-Address-r16 元素个数。 */
    bool has_f1_U_Traffic_IP_Address_r16; /**< f1-U-Traffic-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16* f1_U_Traffic_IP_Address_r16_items; /**< ASN.1 f1-U-Traffic-IP-Address-r16；SEQUENCE OF IAB_IP_Address_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t f1_U_Traffic_IP_Address_r16_count; /**< f1-U-Traffic-IP-Address-r16 元素个数。 */
    bool has_non_F1_Traffic_IP_Address_r16; /**< non-F1-Traffic-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16* non_F1_Traffic_IP_Address_r16_items; /**< ASN.1 non-F1-Traffic-IP-Address-r16；SEQUENCE OF IAB_IP_Address_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t non_F1_Traffic_IP_Address_r16_count; /**< non-F1-Traffic-IP-Address-r16 元素个数。 */
};


/**
 * @brief IAB_IP_Address_r16
 * @note ASN.1：IAB-IP-Address-r16；源文件第 21495 行。
 * @note IAB-IP-Address-r16 ::= CHOICE { iPv4-Address-r16, iPv6-Address-r16, iPv6-Prefix-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IAB_IP_Address_r16_Tag {
    IAB_IP_Address_r16_Tag_iPv4_Address_r16 = 0, /**< ASN.1 iPv4-Address-r16 */
    IAB_IP_Address_r16_Tag_iPv6_Address_r16 = 1, /**< ASN.1 iPv6-Address-r16 */
    IAB_IP_Address_r16_Tag_iPv6_Prefix_r16 = 2, /**< ASN.1 iPv6-Prefix-r16 */
} IAB_IP_Address_r16_Tag;

struct IAB_IP_Address_r16 {
    IAB_IP_Address_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString iPv4_Address_r16; /**< ASN.1 iPv4-Address-r16 */
        BitString iPv6_Address_r16; /**< ASN.1 iPv6-Address-r16 */
        BitString iPv6_Prefix_r16; /**< ASN.1 iPv6-Prefix-r16 */
    } u;
};


/**
 * @brief IAB_IP_PrefixAndTraffic_r16
 * @note ASN.1：IAB-IP-PrefixAndTraffic-r16；源文件第 470 行。
 * @note IAB-IP-PrefixAndTraffic-r16 ::= SEQUENCE { all-Traffic-IAB-IP-Address-r16, f1-C-Traffic-IP-Address-r16, f1-U-...
 */
struct IAB_IP_PrefixAndTraffic_r16 {
    bool has_all_Traffic_IAB_IP_Address_r16; /**< all-Traffic-IAB-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16 all_Traffic_IAB_IP_Address_r16; /**< ASN.1 all-Traffic-IAB-IP-Address-r16；结构体；OPTIONAL。 */
    bool has_f1_C_Traffic_IP_Address_r16; /**< f1-C-Traffic-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16 f1_C_Traffic_IP_Address_r16; /**< ASN.1 f1-C-Traffic-IP-Address-r16；结构体；OPTIONAL。 */
    bool has_f1_U_Traffic_IP_Address_r16; /**< f1-U-Traffic-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16 f1_U_Traffic_IP_Address_r16; /**< ASN.1 f1-U-Traffic-IP-Address-r16；结构体；OPTIONAL。 */
    bool has_non_F1_Traffic_IP_Address_r16; /**< non-F1-Traffic-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16 non_F1_Traffic_IP_Address_r16; /**< ASN.1 non-F1-Traffic-IP-Address-r16；结构体；OPTIONAL。 */
};


/**
 * @brief IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16
 * @note ASN.1：ip-InfoType-r16/iab-IP-Report-r16/iab-IPv6-Report-r16；源文件第 435 行。
 * @note CHOICE { iab-IPv6-AddressReport-r16, iab-IPv6-PrefixReport-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_AddressReport_r16 = 0, /**< ASN.1 iab-IPv6-AddressReport-r16 */
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_PrefixReport_r16 = 1, /**< ASN.1 iab-IPv6-PrefixReport-r16 */
} IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag;

struct IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16 {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        IAB_IP_AddressAndTraffic_r16 iab_IPv6_AddressReport_r16; /**< ASN.1 iab-IPv6-AddressReport-r16 */
        IAB_IP_PrefixAndTraffic_r16 iab_IPv6_PrefixReport_r16; /**< ASN.1 iab-IPv6-PrefixReport-r16 */
    } u;
};


/**
 * @brief IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16
 * @note ASN.1：ip-InfoType-r16/iab-IP-Report-r16；源文件第 433 行。
 * @note SEQUENCE { iab-IPv4-AddressReport-r16, iab-IPv6-Report-r16 }
 */
struct IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16 {
    bool has_iab_IPv4_AddressReport_r16; /**< iab-IPv4-AddressReport-r16 是否存在。 */
    IAB_IP_AddressAndTraffic_r16 iab_IPv4_AddressReport_r16; /**< ASN.1 iab-IPv4-AddressReport-r16；结构体；OPTIONAL。 */
    bool has_iab_IPv6_Report_r16; /**< iab-IPv6-Report-r16 是否存在。 */
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16 iab_IPv6_Report_r16; /**< ASN.1 iab-IPv6-Report-r16；结构体；OPTIONAL。 */
};


/**
 * @brief IABOtherInformation_r16_IEs_Ip_InfoType_r16
 * @note ASN.1：ip-InfoType-r16；源文件第 424 行。
 * @note CHOICE { iab-IP-Request-r16, iab-IP-Report-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Request_r16 = 0, /**< ASN.1 iab-IP-Request-r16 */
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Report_r16 = 1, /**< ASN.1 iab-IP-Report-r16 */
} IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag;

struct IABOtherInformation_r16_IEs_Ip_InfoType_r16 {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16 iab_IP_Request_r16; /**< ASN.1 iab-IP-Request-r16 */
        IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16 iab_IP_Report_r16; /**< ASN.1 iab-IP-Report-r16 */
    } u;
};


/**
 * @brief IABOtherInformation_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 444 行。
 * @note SEQUENCE { }
 */
struct IABOtherInformation_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief IABOtherInformation_r16_IEs
 * @note ASN.1：IABOtherInformation-r16-IEs；源文件第 423 行。
 * @note IABOtherInformation-r16-IEs ::= SEQUENCE { ip-InfoType-r16, lateNonCriticalExtension, nonCriticalExtension }
 */
struct IABOtherInformation_r16_IEs {
    IABOtherInformation_r16_IEs_Ip_InfoType_r16 ip_InfoType_r16; /**< ASN.1 ip-InfoType-r16；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    IABOtherInformation_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief IABOtherInformation_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 419 行。
 * @note SEQUENCE { }
 */
struct IABOtherInformation_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief IABOtherInformation_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 417 行。
 * @note CHOICE { iabOtherInformation-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IABOtherInformation_r16_CriticalExtensions_Tag {
    IABOtherInformation_r16_CriticalExtensions_Tag_iabOtherInformation_r16 = 0, /**< ASN.1 iabOtherInformation-r16 */
    IABOtherInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} IABOtherInformation_r16_CriticalExtensions_Tag;

struct IABOtherInformation_r16_CriticalExtensions {
    IABOtherInformation_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        IABOtherInformation_r16_IEs iabOtherInformation_r16; /**< ASN.1 iabOtherInformation-r16 */
        IABOtherInformation_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief IABOtherInformation_r16
 * @note ASN.1：IABOtherInformation-r16；源文件第 415 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_IABOtherInformation_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note IABOtherInformation-r16 ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct IABOtherInformation_r16 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    IABOtherInformation_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief FailureReportIndirectPath_r18
 * @note ASN.1：FailureReportIndirectPath-r18；源文件第 493 行。
 * @note FailureReportIndirectPath-r18 ::= SEQUENCE { failureTypeIndirectPath-r18, sl-MeasResultServingRelay-r18, sl-Mea...
 */
struct FailureReportIndirectPath_r18 {
    bool has_failureTypeIndirectPath_r18; /**< failureTypeIndirectPath-r18 是否存在。 */
    FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18 failureTypeIndirectPath_r18; /**< ASN.1 failureTypeIndirectPath-r18；枚举；OPTIONAL。 */
    bool has_sl_MeasResultServingRelay_r18; /**< sl-MeasResultServingRelay-r18 是否存在。 */
    OctetString sl_MeasResultServingRelay_r18; /**< ASN.1 sl-MeasResultServingRelay-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sl_MeasResultsCandRelay_r18; /**< sl-MeasResultsCandRelay-r18 是否存在。 */
    OctetString sl_MeasResultsCandRelay_r18; /**< ASN.1 sl-MeasResultsCandRelay-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_n3c_RelayUE_InfoList_r18; /**< n3c-RelayUE-InfoList-r18 是否存在。 */
    N3C_RelayUE_Info_r18* n3c_RelayUE_InfoList_r18_items; /**< ASN.1 n3c-RelayUE-InfoList-r18；SEQUENCE OF N3C_RelayUE_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t n3c_RelayUE_InfoList_r18_count; /**< n3c-RelayUE-InfoList-r18 元素个数。 */
};


/**
 * @brief IndirectPathFailureInformation_r18_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 490 行。
 * @note SEQUENCE { }
 */
struct IndirectPathFailureInformation_r18_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief IndirectPathFailureInformation_r18_IEs
 * @note ASN.1：IndirectPathFailureInformation-r18-IEs；源文件第 487 行。
 * @note IndirectPathFailureInformation-r18-IEs ::= SEQUENCE { failureReportIndirectPath-r18, lateNonCriticalExtension, nonCritic...
 */
struct IndirectPathFailureInformation_r18_IEs {
    bool has_failureReportIndirectPath_r18; /**< failureReportIndirectPath-r18 是否存在。 */
    FailureReportIndirectPath_r18 failureReportIndirectPath_r18; /**< ASN.1 failureReportIndirectPath-r18；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    IndirectPathFailureInformation_r18_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief IndirectPathFailureInformation_r18_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 483 行。
 * @note SEQUENCE { }
 */
struct IndirectPathFailureInformation_r18_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief IndirectPathFailureInformation_r18_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 481 行。
 * @note CHOICE { indirectPathFailureInformation-r18, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IndirectPathFailureInformation_r18_CriticalExtensions_Tag {
    IndirectPathFailureInformation_r18_CriticalExtensions_Tag_indirectPathFailureInformation_r18 = 0, /**< ASN.1 indirectPathFailureInformation-r18 */
    IndirectPathFailureInformation_r18_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} IndirectPathFailureInformation_r18_CriticalExtensions_Tag;

struct IndirectPathFailureInformation_r18_CriticalExtensions {
    IndirectPathFailureInformation_r18_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        IndirectPathFailureInformation_r18_IEs indirectPathFailureInformation_r18; /**< ASN.1 indirectPathFailureInformation-r18 */
        IndirectPathFailureInformation_r18_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief IndirectPathFailureInformation_r18
 * @note ASN.1：IndirectPathFailureInformation-r18；源文件第 480 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_IndirectPathFailureInformation_r18（包装位 3 级，入口 3 个 CHOICE）。
 * @note IndirectPathFailureInformation-r18 ::= SEQUENCE { criticalExtensions }
 */
struct IndirectPathFailureInformation_r18 {
    IndirectPathFailureInformation_r18_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief EUTRA_RSTD_InfoList
 * @note ASN.1：EUTRA-RSTD-InfoList；源文件第 7078 行。
 * @note EUTRA-RSTD-InfoList ::= SEQUENCE OF (size 1..3) OF EUTRA-RSTD-Info
 */
struct EUTRA_RSTD_InfoList {
    EUTRA_RSTD_Info* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NR_PRS_MeasurementInfoList_r16
 * @note ASN.1：NR-PRS-MeasurementInfoList-r16；源文件第 7086 行。
 * @note NR-PRS-MeasurementInfoList-r16 ::= SEQUENCE OF (size 1..4) OF NR-PRS-MeasurementInfo-r16
 */
struct NR_PRS_MeasurementInfoList_r16 {
    NR_PRS_MeasurementInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief LocationMeasurementInfo
 * @note ASN.1：LocationMeasurementInfo；源文件第 7071 行。
 * @note LocationMeasurementInfo ::= CHOICE { eutra-RSTD, eutra-FineTimingDetection, nr-PRS-Measurement-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LocationMeasurementInfo_Tag {
    LocationMeasurementInfo_Tag_eutra_RSTD = 0, /**< ASN.1 eutra-RSTD */
    LocationMeasurementInfo_Tag_eutra_FineTimingDetection = 1, /**< ASN.1 eutra-FineTimingDetection（扩展备选） */
    LocationMeasurementInfo_Tag_nr_PRS_Measurement_r16 = 2, /**< ASN.1 nr-PRS-Measurement-r16（扩展备选） */
} LocationMeasurementInfo_Tag;

struct LocationMeasurementInfo {
    LocationMeasurementInfo_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        EUTRA_RSTD_InfoList eutra_RSTD; /**< ASN.1 eutra-RSTD */
        Null eutra_FineTimingDetection; /**< ASN.1 eutra-FineTimingDetection */
        NR_PRS_MeasurementInfoList_r16 nr_PRS_Measurement_r16; /**< ASN.1 nr-PRS-Measurement-r16 */
    } u;
};


/**
 * @brief SetupRelease_LocationMeasurementInfo
 * @note ASN.1：SetupRelease<LocationMeasurementInfo>；源文件第 515 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_LocationMeasurementInfo_Tag {
    SetupRelease_LocationMeasurementInfo_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_LocationMeasurementInfo_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_LocationMeasurementInfo_Tag;

struct SetupRelease_LocationMeasurementInfo {
    SetupRelease_LocationMeasurementInfo_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        LocationMeasurementInfo setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief LocationMeasurementIndication_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 517 行。
 * @note SEQUENCE { }
 */
struct LocationMeasurementIndication_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief LocationMeasurementIndication_IEs
 * @note ASN.1：LocationMeasurementIndication-IEs；源文件第 514 行。
 * @note LocationMeasurementIndication-IEs ::= SEQUENCE { measurementIndication, lateNonCriticalExtension, nonCriticalExtens...
 */
struct LocationMeasurementIndication_IEs {
    SetupRelease_LocationMeasurementInfo measurementIndication; /**< ASN.1 measurementIndication；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    LocationMeasurementIndication_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief LocationMeasurementIndication_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 510 行。
 * @note SEQUENCE { }
 */
struct LocationMeasurementIndication_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief LocationMeasurementIndication_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 508 行。
 * @note CHOICE { locationMeasurementIndication, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LocationMeasurementIndication_CriticalExtensions_Tag {
    LocationMeasurementIndication_CriticalExtensions_Tag_locationMeasurementIndication = 0, /**< ASN.1 locationMeasurementIndication */
    LocationMeasurementIndication_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} LocationMeasurementIndication_CriticalExtensions_Tag;

struct LocationMeasurementIndication_CriticalExtensions {
    LocationMeasurementIndication_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        LocationMeasurementIndication_IEs locationMeasurementIndication; /**< ASN.1 locationMeasurementIndication */
        LocationMeasurementIndication_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief LocationMeasurementIndication
 * @note ASN.1：LocationMeasurementIndication；源文件第 507 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_LocationMeasurementIndication（包装位 2 级，入口 2 个 CHOICE）。
 * @note LocationMeasurementIndication ::= SEQUENCE { criticalExtensions }
 */
struct LocationMeasurementIndication {
    LocationMeasurementIndication_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief CAG_ConfigList_r18
 * @note ASN.1：CAG-ConfigList-r18；源文件第 21363 行。
 * @note CAG-ConfigList-r18 ::= SEQUENCE OF (size 1..12) OF CAG-Config-r18
 */
struct CAG_ConfigList_r18 {
    CAG_Config_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SNPN_ConfigCellIdList_r18
 * @note ASN.1：SNPN-ConfigCellIdList-r18；源文件第 21376 行。
 * @note SNPN-ConfigCellIdList-r18 ::= SEQUENCE OF (size 1..32) OF SNPN-ConfigCellId-r18
 */
struct SNPN_ConfigCellIdList_r18 {
    SNPN_ConfigCellId_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SNPN_ConfigTAIList_r18
 * @note ASN.1：SNPN-ConfigTAIList-r18；源文件第 21383 行。
 * @note SNPN-ConfigTAIList-r18 ::= SEQUENCE OF (size 1..8) OF SNPN-ConfigTAI-r18
 */
struct SNPN_ConfigTAIList_r18 {
    SNPN_ConfigTAI_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SNPN_ConfigIDList_r18
 * @note ASN.1：SNPN-ConfigIDList-r18；源文件第 21390 行。
 * @note SNPN-ConfigIDList-r18 ::= SEQUENCE OF (size 1..16) OF SNPN-ConfigID-r18
 */
struct SNPN_ConfigIDList_r18 {
    SNPN_ConfigID_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SNPN_ConfigList_r18
 * @note ASN.1：SNPN-ConfigList-r18；源文件第 21370 行。
 * @note SNPN-ConfigList-r18 ::= CHOICE { snpn-ConfigCellIdList-r18, snpn-ConfigTAIList-r18, snpn-ConfigIDList...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SNPN_ConfigList_r18_Tag {
    SNPN_ConfigList_r18_Tag_snpn_ConfigCellIdList_r18 = 0, /**< ASN.1 snpn-ConfigCellIdList-r18 */
    SNPN_ConfigList_r18_Tag_snpn_ConfigTAIList_r18 = 1, /**< ASN.1 snpn-ConfigTAIList-r18 */
    SNPN_ConfigList_r18_Tag_snpn_ConfigIDList_r18 = 2, /**< ASN.1 snpn-ConfigIDList-r18 */
} SNPN_ConfigList_r18_Tag;

struct SNPN_ConfigList_r18 {
    SNPN_ConfigList_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SNPN_ConfigCellIdList_r18 snpn_ConfigCellIdList_r18; /**< ASN.1 snpn-ConfigCellIdList-r18 */
        SNPN_ConfigTAIList_r18 snpn_ConfigTAIList_r18; /**< ASN.1 snpn-ConfigTAIList-r18 */
        SNPN_ConfigIDList_r18 snpn_ConfigIDList_r18; /**< ASN.1 snpn-ConfigIDList-r18 */
    } u;
};


/**
 * @brief AreaConfiguration_v1800
 * @note ASN.1：AreaConfiguration-v1800；源文件第 21337 行。
 * @note AreaConfiguration-v1800 ::= SEQUENCE { cag-ConfigList-r18, snpn-ConfigList-r18 }
 */
struct AreaConfiguration_v1800 {
    bool has_cag_ConfigList_r18; /**< cag-ConfigList-r18 是否存在。 */
    CAG_ConfigList_r18 cag_ConfigList_r18; /**< ASN.1 cag-ConfigList-r18；SEQUENCE OF CAG_Config_r18，SIZE (1..12)；OPTIONAL。 */
    bool has_snpn_ConfigList_r18; /**< snpn-ConfigList-r18 是否存在。 */
    SNPN_ConfigList_r18 snpn_ConfigList_r18; /**< ASN.1 snpn-ConfigList-r18；结构体；OPTIONAL。 */
};


/**
 * @brief LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 559 行。
 * @note SEQUENCE { }
 */
struct LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief LoggedMeasurementConfiguration_v1800_IEs
 * @note ASN.1：LoggedMeasurementConfiguration-v1800-IEs；源文件第 557 行。
 * @note LoggedMeasurementConfiguration-v1800-IEs ::= SEQUENCE { areaConfiguration-v1800, nonCriticalExtension }
 */
struct LoggedMeasurementConfiguration_v1800_IEs {
    bool has_areaConfiguration_v1800; /**< areaConfiguration-v1800 是否存在。 */
    AreaConfiguration_v1800 areaConfiguration_v1800; /**< ASN.1 areaConfiguration-v1800；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief CellGlobalIdList_r16
 * @note ASN.1：CellGlobalIdList-r16；源文件第 21353 行。
 * @note CellGlobalIdList-r16 ::= SEQUENCE OF (size 1..32) OF CGI-Info-Logging-r16
 */
struct CellGlobalIdList_r16 {
    CGI_Info_Logging_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TrackingAreaCodeList_r16
 * @note ASN.1：TrackingAreaCodeList-r16；源文件第 21355 行。
 * @note TrackingAreaCodeList-r16 ::= SEQUENCE OF (size 1..8) OF TrackingAreaCode
 */
struct TrackingAreaCodeList_r16 {
    TrackingAreaCode* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TrackingAreaIdentityList_r16
 * @note ASN.1：TrackingAreaIdentityList-r16；源文件第 21357 行。
 * @note TrackingAreaIdentityList-r16 ::= SEQUENCE OF (size 1..8) OF TrackingAreaIdentity-r16
 */
struct TrackingAreaIdentityList_r16 {
    TrackingAreaIdentity_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief AreaConfig_r16
 * @note ASN.1：AreaConfig-r16；源文件第 21342 行。
 * @note AreaConfig-r16 ::= CHOICE { cellGlobalIdList-r16, trackingAreaCodeList-r16, trackingAreaIdentity...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum AreaConfig_r16_Tag {
    AreaConfig_r16_Tag_cellGlobalIdList_r16 = 0, /**< ASN.1 cellGlobalIdList-r16 */
    AreaConfig_r16_Tag_trackingAreaCodeList_r16 = 1, /**< ASN.1 trackingAreaCodeList-r16 */
    AreaConfig_r16_Tag_trackingAreaIdentityList_r16 = 2, /**< ASN.1 trackingAreaIdentityList-r16 */
} AreaConfig_r16_Tag;

struct AreaConfig_r16 {
    AreaConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CellGlobalIdList_r16 cellGlobalIdList_r16; /**< ASN.1 cellGlobalIdList-r16 */
        TrackingAreaCodeList_r16 trackingAreaCodeList_r16; /**< ASN.1 trackingAreaCodeList-r16 */
        TrackingAreaIdentityList_r16 trackingAreaIdentityList_r16; /**< ASN.1 trackingAreaIdentityList-r16 */
    } u;
};


/**
 * @brief AreaConfiguration_r17
 * @note ASN.1：AreaConfiguration-r17；源文件第 21332 行。
 * @note AreaConfiguration-r17 ::= SEQUENCE { areaConfig-r17, interFreqTargetList-r17 }
 */
struct AreaConfiguration_r17 {
    bool has_areaConfig_r17; /**< areaConfig-r17 是否存在。 */
    AreaConfig_r16 areaConfig_r17; /**< ASN.1 areaConfig-r17；结构体；OPTIONAL。 */
    bool has_interFreqTargetList_r17; /**< interFreqTargetList-r17 是否存在。 */
    InterFreqTargetInfo_r16* interFreqTargetList_r17_items; /**< ASN.1 interFreqTargetList-r17；SEQUENCE OF InterFreqTargetInfo_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t interFreqTargetList_r17_count; /**< interFreqTargetList-r17 元素个数。 */
};


/**
 * @brief LoggedMeasurementConfiguration_v1700_IEs
 * @note ASN.1：LoggedMeasurementConfiguration-v1700-IEs；源文件第 550 行。
 * @note LoggedMeasurementConfiguration-v1700-IEs ::= SEQUENCE { sigLoggedMeasType-r17, earlyMeasIndication-r17, areaConfiguration-...
 */
struct LoggedMeasurementConfiguration_v1700_IEs {
    bool has_sigLoggedMeasType_r17; /**< sigLoggedMeasType-r17 是否存在。 */
    LoggedMeasurementConfiguration_v1700_IEs_SigLoggedMeasType_r17 sigLoggedMeasType_r17; /**< ASN.1 sigLoggedMeasType-r17；枚举；OPTIONAL。 */
    bool has_earlyMeasIndication_r17; /**< earlyMeasIndication-r17 是否存在。 */
    LoggedMeasurementConfiguration_v1700_IEs_EarlyMeasIndication_r17 earlyMeasIndication_r17; /**< ASN.1 earlyMeasIndication-r17；枚举；OPTIONAL。 */
    bool has_areaConfiguration_r17; /**< areaConfiguration-r17 是否存在。 */
    AreaConfiguration_r17 areaConfiguration_r17; /**< ASN.1 areaConfiguration-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    LoggedMeasurementConfiguration_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief PLMN_IdentityList2_r16
 * @note ASN.1：PLMN-IdentityList2-r16；源文件第 9879 行。
 * @note PLMN-IdentityList2-r16 ::= SEQUENCE OF (size 1..16) OF PLMN-Identity
 */
struct PLMN_IdentityList2_r16 {
    PLMN_Identity* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief AreaConfiguration_r16
 * @note ASN.1：AreaConfiguration-r16；源文件第 21327 行。
 * @note AreaConfiguration-r16 ::= SEQUENCE { areaConfig-r16, interFreqTargetList-r16 }
 */
struct AreaConfiguration_r16 {
    AreaConfig_r16 areaConfig_r16; /**< ASN.1 areaConfig-r16；结构体。 */
    bool has_interFreqTargetList_r16; /**< interFreqTargetList-r16 是否存在。 */
    InterFreqTargetInfo_r16* interFreqTargetList_r16_items; /**< ASN.1 interFreqTargetList-r16；SEQUENCE OF InterFreqTargetInfo_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t interFreqTargetList_r16_count; /**< interFreqTargetList-r16 元素个数。 */
};


/**
 * @brief MCC
 * @note ASN.1：MCC；源文件第 9847 行。
 * @note MCC ::= SEQUENCE OF (size 3..3) OF MCC-MNC-Digit
 */
struct MCC {
    MCC_MNC_Digit* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MNC
 * @note ASN.1：MNC；源文件第 9849 行。
 * @note MNC ::= SEQUENCE OF (size 2..3) OF MCC-MNC-Digit
 */
struct MNC {
    MCC_MNC_Digit* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PLMN_Identity
 * @note ASN.1：PLMN-Identity；源文件第 9842 行。
 * @note PLMN-Identity ::= SEQUENCE { mcc, mnc }
 */
struct PLMN_Identity {
    bool has_mcc; /**< mcc 是否存在。 */
    MCC mcc; /**< ASN.1 mcc；SEQUENCE OF MCC_MNC_Digit，SIZE (3)，定长；OPTIONAL。 */
    MNC mnc; /**< ASN.1 mnc；SEQUENCE OF MCC_MNC_Digit，SIZE (2..3)。 */
};


/**
 * @brief TraceReference_r16
 * @note ASN.1：TraceReference-r16；源文件第 21809 行。
 * @note TraceReference-r16 ::= SEQUENCE { plmn-Identity-r16, traceId-r16 }
 */
struct TraceReference_r16 {
    PLMN_Identity plmn_Identity_r16; /**< ASN.1 plmn-Identity-r16；结构体。 */
    OctetString traceId_r16; /**< ASN.1 traceId-r16；SIZE (3)，定长。 */
};


/**
 * @brief BT_NameList_r16
 * @note ASN.1：BT-NameList-r16；源文件第 21400 行。
 * @note BT-NameList-r16 ::= SEQUENCE OF (size 1..4) OF BT-Name-r16
 */
struct BT_NameList_r16 {
    BT_Name_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_BT_NameList_r16
 * @note ASN.1：SetupRelease<BT-NameList-r16>；源文件第 537 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BT_NameList_r16_Tag {
    SetupRelease_BT_NameList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BT_NameList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BT_NameList_r16_Tag;

struct SetupRelease_BT_NameList_r16 {
    SetupRelease_BT_NameList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BT_NameList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief WLAN_NameList_r16
 * @note ASN.1：WLAN-NameList-r16；源文件第 21887 行。
 * @note WLAN-NameList-r16 ::= SEQUENCE OF (size 1..4) OF WLAN-Name-r16
 */
struct WLAN_NameList_r16 {
    WLAN_Name_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_WLAN_NameList_r16
 * @note ASN.1：SetupRelease<WLAN-NameList-r16>；源文件第 538 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_WLAN_NameList_r16_Tag {
    SetupRelease_WLAN_NameList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_WLAN_NameList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_WLAN_NameList_r16_Tag;

struct SetupRelease_WLAN_NameList_r16 {
    SetupRelease_WLAN_NameList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        WLAN_NameList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief Sensor_NameList_r16
 * @note ASN.1：Sensor-NameList-r16；源文件第 21799 行。
 * @note Sensor-NameList-r16 ::= SEQUENCE { measUncomBarPre-r16, measUeSpeed, measUeOrientation }
 */
struct Sensor_NameList_r16 {
    bool has_measUncomBarPre_r16; /**< measUncomBarPre-r16 是否存在。 */
    Sensor_NameList_r16_MeasUncomBarPre_r16 measUncomBarPre_r16; /**< ASN.1 measUncomBarPre-r16；枚举；OPTIONAL。 */
    bool has_measUeSpeed; /**< measUeSpeed 是否存在。 */
    Sensor_NameList_r16_MeasUeSpeed measUeSpeed; /**< ASN.1 measUeSpeed；枚举；OPTIONAL。 */
    bool has_measUeOrientation; /**< measUeOrientation 是否存在。 */
    Sensor_NameList_r16_MeasUeOrientation measUeOrientation; /**< ASN.1 measUeOrientation；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_Sensor_NameList_r16
 * @note ASN.1：SetupRelease<Sensor-NameList-r16>；源文件第 539 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_Sensor_NameList_r16_Tag {
    SetupRelease_Sensor_NameList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_Sensor_NameList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_Sensor_NameList_r16_Tag;

struct SetupRelease_Sensor_NameList_r16 {
    SetupRelease_Sensor_NameList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        Sensor_NameList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief LoggedPeriodicalReportConfig_r16
 * @note ASN.1：LoggedPeriodicalReportConfig-r16；源文件第 562 行。
 * @note LoggedPeriodicalReportConfig-r16 ::= SEQUENCE { loggingInterval-r16 }
 */
struct LoggedPeriodicalReportConfig_r16 {
    LoggingInterval_r16 loggingInterval_r16; /**< ASN.1 loggingInterval-r16；枚举。 */
};


/**
 * @brief MeasTriggerQuantity
 * @note ASN.1：MeasTriggerQuantity；源文件第 11694 行。
 * @note MeasTriggerQuantity ::= CHOICE { rsrp, rsrq, sinr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasTriggerQuantity_Tag {
    MeasTriggerQuantity_Tag_rsrp = 0, /**< ASN.1 rsrp */
    MeasTriggerQuantity_Tag_rsrq = 1, /**< ASN.1 rsrq */
    MeasTriggerQuantity_Tag_sinr = 2, /**< ASN.1 sinr */
} MeasTriggerQuantity_Tag;

struct MeasTriggerQuantity {
    MeasTriggerQuantity_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RSRP_Range rsrp; /**< ASN.1 rsrp */
        RSRQ_Range rsrq; /**< ASN.1 rsrq */
        SINR_Range sinr; /**< ASN.1 sinr */
    } u;
};


/**
 * @brief EventType_r16_EventL1
 * @note ASN.1：eventL1；源文件第 575 行。
 * @note SEQUENCE { l1-Threshold, hysteresis, timeToTrigger }
 */
struct EventType_r16_EventL1 {
    MeasTriggerQuantity l1_Threshold; /**< ASN.1 l1-Threshold；结构体。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief EventType_r16
 * @note ASN.1：EventType-r16；源文件第 573 行。
 * @note EventType-r16 ::= CHOICE { outOfCoverage, eventL1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EventType_r16_Tag {
    EventType_r16_Tag_outOfCoverage = 0, /**< ASN.1 outOfCoverage */
    EventType_r16_Tag_eventL1 = 1, /**< ASN.1 eventL1 */
} EventType_r16_Tag;

struct EventType_r16 {
    EventType_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null outOfCoverage; /**< ASN.1 outOfCoverage */
        EventType_r16_EventL1 eventL1; /**< ASN.1 eventL1 */
    } u;
};


/**
 * @brief LoggedEventTriggerConfig_r16
 * @note ASN.1：LoggedEventTriggerConfig-r16；源文件第 567 行。
 * @note LoggedEventTriggerConfig-r16 ::= SEQUENCE { eventType-r16, loggingInterval-r16 }
 */
struct LoggedEventTriggerConfig_r16 {
    EventType_r16 eventType_r16; /**< ASN.1 eventType-r16；结构体。 */
    LoggingInterval_r16 loggingInterval_r16; /**< ASN.1 loggingInterval-r16；枚举。 */
};


/**
 * @brief LoggedMeasurementConfiguration_r16_IEs_ReportType
 * @note ASN.1：reportType；源文件第 541 行。
 * @note CHOICE { periodical, eventTriggered }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag {
    LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_periodical = 0, /**< ASN.1 periodical */
    LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_eventTriggered = 1, /**< ASN.1 eventTriggered */
} LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag;

struct LoggedMeasurementConfiguration_r16_IEs_ReportType {
    LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        LoggedPeriodicalReportConfig_r16 periodical; /**< ASN.1 periodical */
        LoggedEventTriggerConfig_r16 eventTriggered; /**< ASN.1 eventTriggered */
    } u;
};


/**
 * @brief LoggedMeasurementConfiguration_r16_IEs
 * @note ASN.1：LoggedMeasurementConfiguration-r16-IEs；源文件第 530 行。
 * @note LoggedMeasurementConfiguration-r16-IEs ::= SEQUENCE { traceReference-r16, traceRecordingSessionRef-r16, tce-Id-r16, abso...
 */
struct LoggedMeasurementConfiguration_r16_IEs {
    TraceReference_r16 traceReference_r16; /**< ASN.1 traceReference-r16；结构体。 */
    OctetString traceRecordingSessionRef_r16; /**< ASN.1 traceRecordingSessionRef-r16；SIZE (2)，定长。 */
    OctetString tce_Id_r16; /**< ASN.1 tce-Id-r16；SIZE (1)，定长。 */
    AbsoluteTimeInfo_r16 absoluteTimeInfo_r16; /**< ASN.1 absoluteTimeInfo-r16；SIZE (48)，定长。 */
    bool has_areaConfiguration_r16; /**< areaConfiguration-r16 是否存在。 */
    AreaConfiguration_r16 areaConfiguration_r16; /**< ASN.1 areaConfiguration-r16；结构体；OPTIONAL。 */
    bool has_plmn_IdentityList_r16; /**< plmn-IdentityList-r16 是否存在。 */
    PLMN_IdentityList2_r16 plmn_IdentityList_r16; /**< ASN.1 plmn-IdentityList-r16；SEQUENCE OF PLMN_Identity，SIZE (1..16)；OPTIONAL。 */
    bool has_bt_NameList_r16; /**< bt-NameList-r16 是否存在。 */
    SetupRelease_BT_NameList_r16 bt_NameList_r16; /**< ASN.1 bt-NameList-r16；结构体；OPTIONAL。 */
    bool has_wlan_NameList_r16; /**< wlan-NameList-r16 是否存在。 */
    SetupRelease_WLAN_NameList_r16 wlan_NameList_r16; /**< ASN.1 wlan-NameList-r16；结构体；OPTIONAL。 */
    bool has_sensor_NameList_r16; /**< sensor-NameList-r16 是否存在。 */
    SetupRelease_Sensor_NameList_r16 sensor_NameList_r16; /**< ASN.1 sensor-NameList-r16；结构体；OPTIONAL。 */
    LoggingDuration_r16 loggingDuration_r16; /**< ASN.1 loggingDuration-r16；枚举。 */
    LoggedMeasurementConfiguration_r16_IEs_ReportType reportType; /**< ASN.1 reportType；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    LoggedMeasurementConfiguration_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 526 行。
 * @note SEQUENCE { }
 */
struct LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief LoggedMeasurementConfiguration_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 524 行。
 * @note CHOICE { loggedMeasurementConfiguration-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag {
    LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_loggedMeasurementConfiguration_r16 = 0, /**< ASN.1 loggedMeasurementConfiguration-r16 */
    LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag;

struct LoggedMeasurementConfiguration_r16_CriticalExtensions {
    LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        LoggedMeasurementConfiguration_r16_IEs loggedMeasurementConfiguration_r16; /**< ASN.1 loggedMeasurementConfiguration-r16 */
        LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief LoggedMeasurementConfiguration_r16
 * @note ASN.1：LoggedMeasurementConfiguration-r16；源文件第 523 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_LoggedMeasurementConfiguration_r16（包装位 2 级，入口 2 个 CHOICE）。
 * @note LoggedMeasurementConfiguration-r16 ::= SEQUENCE { criticalExtensions }
 */
struct LoggedMeasurementConfiguration_r16 {
    LoggedMeasurementConfiguration_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief MBS_NeighbourCellList_r17
 * @note ASN.1：MBS-NeighbourCellList-r17；源文件第 23498 行。
 * @note MBS-NeighbourCellList-r17 ::= SEQUENCE OF (size 0..8) OF MBS-NeighbourCell-r17
 */
struct MBS_NeighbourCellList_r17 {
    MBS_NeighbourCell_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBS_SessionInfoList_r17
 * @note ASN.1：MBS-SessionInfoList-r17；源文件第 23542 行。
 * @note MBS-SessionInfoList-r17 ::= SEQUENCE OF (size 1..1024) OF MBS-SessionInfo-r17
 */
struct MBS_SessionInfoList_r17 {
    MBS_SessionInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MTCH_SSB_MappingWindowList_r17
 * @note ASN.1：MTCH-SSB-MappingWindowList-r17；源文件第 23645 行。
 * @note MTCH-SSB-MappingWindowList-r17 ::= SEQUENCE OF (size 1..16) OF MTCH-SSB-MappingWindowCycleOffset-r17
 */
struct MTCH_SSB_MappingWindowList_r17 {
    MTCH_SSB_MappingWindowCycleOffset_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDSCH_TimeDomainResourceAllocationList_r16
 * @note ASN.1：PDSCH-TimeDomainResourceAllocationList-r16；源文件第 9598 行。
 * @note PDSCH-TimeDomainResourceAllocationList-r16 ::= SEQUENCE OF (size 1..16) OF PDSCH-TimeDomainResourceAllocation-r16
 */
struct PDSCH_TimeDomainResourceAllocationList_r16 {
    PDSCH_TimeDomainResourceAllocation_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief EUTRA_MBSFN_SubframeConfigList
 * @note ASN.1：EUTRA-MBSFN-SubframeConfigList；源文件第 21417 行。
 * @note EUTRA-MBSFN-SubframeConfigList ::= SEQUENCE OF (size 1..8) OF EUTRA-MBSFN-SubframeConfig
 */
struct EUTRA_MBSFN_SubframeConfigList {
    EUTRA_MBSFN_SubframeConfig* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RateMatchPatternLTE_CRS
 * @note ASN.1：RateMatchPatternLTE-CRS；源文件第 11156 行。
 * @note RateMatchPatternLTE-CRS ::= SEQUENCE { carrierFreqDL, carrierBandwidthDL, mbsfn-SubframeConfigList, nrofC...
 */
struct RateMatchPatternLTE_CRS {
    int64_t carrierFreqDL; /**< ASN.1 carrierFreqDL；INTEGER (0..16383)，位宽 14 bit。 */
    RateMatchPatternLTE_CRS_CarrierBandwidthDL carrierBandwidthDL; /**< ASN.1 carrierBandwidthDL；枚举。 */
    bool has_mbsfn_SubframeConfigList; /**< mbsfn-SubframeConfigList 是否存在。 */
    EUTRA_MBSFN_SubframeConfigList mbsfn_SubframeConfigList; /**< ASN.1 mbsfn-SubframeConfigList；SEQUENCE OF EUTRA_MBSFN_SubframeConfig，SIZE (1..8)；OPTIONAL。 */
    RateMatchPatternLTE_CRS_NrofCRS_Ports nrofCRS_Ports; /**< ASN.1 nrofCRS-Ports；枚举。 */
    RateMatchPatternLTE_CRS_V_Shift v_Shift; /**< ASN.1 v-Shift；枚举。 */
};


/**
 * @brief PDSCH_ConfigBroadcast_r17
 * @note ASN.1：PDSCH-ConfigBroadcast-r17；源文件第 23659 行。
 * @note PDSCH-ConfigBroadcast-r17 ::= SEQUENCE { pdschConfigList-r17, pdsch-TimeDomainAllocationList-r17, rateMatch...
 */
struct PDSCH_ConfigBroadcast_r17 {
    PDSCH_ConfigPTM_r17* pdschConfigList_r17_items; /**< ASN.1 pdschConfigList-r17；SEQUENCE OF PDSCH_ConfigPTM_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pdschConfigList_r17_count; /**< pdschConfigList-r17 元素个数。 */
    bool has_pdsch_TimeDomainAllocationList_r17; /**< pdsch-TimeDomainAllocationList-r17 是否存在。 */
    PDSCH_TimeDomainResourceAllocationList_r16 pdsch_TimeDomainAllocationList_r17; /**< ASN.1 pdsch-TimeDomainAllocationList-r17；SEQUENCE OF PDSCH_TimeDomainResourceAllocation_r16，SIZE (1..16)；OPTIONAL。 */
    bool has_rateMatchPatternToAddModList_r17; /**< rateMatchPatternToAddModList-r17 是否存在。 */
    RateMatchPattern* rateMatchPatternToAddModList_r17_items; /**< ASN.1 rateMatchPatternToAddModList-r17；SEQUENCE OF RateMatchPattern，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToAddModList_r17_count; /**< rateMatchPatternToAddModList-r17 元素个数。 */
    bool has_lte_CRS_ToMatchAround_r17; /**< lte-CRS-ToMatchAround-r17 是否存在。 */
    RateMatchPatternLTE_CRS lte_CRS_ToMatchAround_r17; /**< ASN.1 lte-CRS-ToMatchAround-r17；结构体；OPTIONAL。 */
    bool has_mcs_Table_r17; /**< mcs-Table-r17 是否存在。 */
    PDSCH_ConfigBroadcast_r17_Mcs_Table_r17 mcs_Table_r17; /**< ASN.1 mcs-Table-r17；枚举；OPTIONAL。 */
    bool has_xOverhead_r17; /**< xOverhead-r17 是否存在。 */
    PDSCH_ConfigBroadcast_r17_XOverhead_r17 xOverhead_r17; /**< ASN.1 xOverhead-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 600 行。
 * @note SEQUENCE { }
 */
struct MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MBSBroadcastConfiguration_r17_IEs
 * @note ASN.1：MBSBroadcastConfiguration-r17-IEs；源文件第 593 行。
 * @note MBSBroadcastConfiguration-r17-IEs ::= SEQUENCE { mbs-SessionInfoList-r17, mbs-NeighbourCellList-r17, drx-ConfigPTM-...
 */
struct MBSBroadcastConfiguration_r17_IEs {
    bool has_mbs_SessionInfoList_r17; /**< mbs-SessionInfoList-r17 是否存在。 */
    MBS_SessionInfoList_r17 mbs_SessionInfoList_r17; /**< ASN.1 mbs-SessionInfoList-r17；SEQUENCE OF MBS_SessionInfo_r17，SIZE (1..1024)；OPTIONAL。 */
    bool has_mbs_NeighbourCellList_r17; /**< mbs-NeighbourCellList-r17 是否存在。 */
    MBS_NeighbourCellList_r17 mbs_NeighbourCellList_r17; /**< ASN.1 mbs-NeighbourCellList-r17；SEQUENCE OF MBS_NeighbourCell_r17，SIZE (0..8)；OPTIONAL。 */
    bool has_drx_ConfigPTM_List_r17; /**< drx-ConfigPTM-List-r17 是否存在。 */
    DRX_ConfigPTM_r17* drx_ConfigPTM_List_r17_items; /**< ASN.1 drx-ConfigPTM-List-r17；SEQUENCE OF DRX_ConfigPTM_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t drx_ConfigPTM_List_r17_count; /**< drx-ConfigPTM-List-r17 元素个数。 */
    bool has_pdsch_ConfigMTCH_r17; /**< pdsch-ConfigMTCH-r17 是否存在。 */
    PDSCH_ConfigBroadcast_r17 pdsch_ConfigMTCH_r17; /**< ASN.1 pdsch-ConfigMTCH-r17；结构体；OPTIONAL。 */
    bool has_mtch_SSB_MappingWindowList_r17; /**< mtch-SSB-MappingWindowList-r17 是否存在。 */
    MTCH_SSB_MappingWindowList_r17 mtch_SSB_MappingWindowList_r17; /**< ASN.1 mtch-SSB-MappingWindowList-r17；SEQUENCE OF MTCH_SSB_MappingWindowCycleOffset_r17，SIZE (1..16)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MBSBroadcastConfiguration_r17_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 589 行。
 * @note SEQUENCE { }
 */
struct MBSBroadcastConfiguration_r17_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MBSBroadcastConfiguration_r17_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 587 行。
 * @note CHOICE { mbsBroadcastConfiguration-r17, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MBSBroadcastConfiguration_r17_CriticalExtensions_Tag {
    MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_mbsBroadcastConfiguration_r17 = 0, /**< ASN.1 mbsBroadcastConfiguration-r17 */
    MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MBSBroadcastConfiguration_r17_CriticalExtensions_Tag;

struct MBSBroadcastConfiguration_r17_CriticalExtensions {
    MBSBroadcastConfiguration_r17_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MBSBroadcastConfiguration_r17_IEs mbsBroadcastConfiguration_r17; /**< ASN.1 mbsBroadcastConfiguration-r17 */
        MBSBroadcastConfiguration_r17_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MBSBroadcastConfiguration_r17
 * @note ASN.1：MBSBroadcastConfiguration-r17；源文件第 586 行。
 * @note 实际消息：ChannelType_MCCH_r17；MessageKind_MBSBroadcastConfiguration_r17（包装位 2 级，入口 2 个 CHOICE）。
 * @note MBSBroadcastConfiguration-r17 ::= SEQUENCE { criticalExtensions }
 */
struct MBSBroadcastConfiguration_r17 {
    MBSBroadcastConfiguration_r17_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief MBS_NonServingInfoList_r18
 * @note ASN.1：MBS-NonServingInfoList-r18；源文件第 23508 行。
 * @note MBS-NonServingInfoList-r18 ::= SEQUENCE OF (size 1..16) OF NonServingInfo-r18
 */
struct MBS_NonServingInfoList_r18 {
    NonServingInfo_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBSInterestIndication_v1800_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 623 行。
 * @note SEQUENCE { }
 */
struct MBSInterestIndication_v1800_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MBSInterestIndication_v1800
 * @note ASN.1：MBSInterestIndication-v1800；源文件第 621 行。
 * @note MBSInterestIndication-v1800 ::= SEQUENCE { mbs-NonServingInfoList-r18, nonCriticalExtension }
 */
struct MBSInterestIndication_v1800 {
    bool has_mbs_NonServingInfoList_r18; /**< mbs-NonServingInfoList-r18 是否存在。 */
    MBS_NonServingInfoList_r18 mbs_NonServingInfoList_r18; /**< ASN.1 mbs-NonServingInfoList-r18；SEQUENCE OF NonServingInfo_r18，SIZE (1..16)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MBSInterestIndication_v1800_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief CarrierFreqListMBS_r17
 * @note ASN.1：CarrierFreqListMBS-r17；源文件第 23431 行。
 * @note CarrierFreqListMBS-r17 ::= SEQUENCE OF (size 1..16) OF ARFCN-ValueNR
 */
struct CarrierFreqListMBS_r17 {
    ARFCN_ValueNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBS_ServiceList_r17
 * @note ASN.1：MBS-ServiceList-r17；源文件第 23533 行。
 * @note MBS-ServiceList-r17 ::= SEQUENCE OF (size 1..16) OF MBS-ServiceInfo-r17
 */
struct MBS_ServiceList_r17 {
    MBS_ServiceInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBSInterestIndication_r17_IEs
 * @note ASN.1：MBSInterestIndication-r17-IEs；源文件第 613 行。
 * @note MBSInterestIndication-r17-IEs ::= SEQUENCE { mbs-FreqList-r17, mbs-Priority-r17, mbs-ServiceList-r17, lateNonCr...
 */
struct MBSInterestIndication_r17_IEs {
    bool has_mbs_FreqList_r17; /**< mbs-FreqList-r17 是否存在。 */
    CarrierFreqListMBS_r17 mbs_FreqList_r17; /**< ASN.1 mbs-FreqList-r17；SEQUENCE OF ARFCN_ValueNR，SIZE (1..16)；OPTIONAL。 */
    bool has_mbs_Priority_r17; /**< mbs-Priority-r17 是否存在。 */
    MBSInterestIndication_r17_IEs_Mbs_Priority_r17 mbs_Priority_r17; /**< ASN.1 mbs-Priority-r17；枚举；OPTIONAL。 */
    bool has_mbs_ServiceList_r17; /**< mbs-ServiceList-r17 是否存在。 */
    MBS_ServiceList_r17 mbs_ServiceList_r17; /**< ASN.1 mbs-ServiceList-r17；SEQUENCE OF MBS_ServiceInfo_r17，SIZE (1..16)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MBSInterestIndication_v1800 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MBSInterestIndication_r17_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 609 行。
 * @note SEQUENCE { }
 */
struct MBSInterestIndication_r17_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MBSInterestIndication_r17_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 607 行。
 * @note CHOICE { mbsInterestIndication-r17, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MBSInterestIndication_r17_CriticalExtensions_Tag {
    MBSInterestIndication_r17_CriticalExtensions_Tag_mbsInterestIndication_r17 = 0, /**< ASN.1 mbsInterestIndication-r17 */
    MBSInterestIndication_r17_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MBSInterestIndication_r17_CriticalExtensions_Tag;

struct MBSInterestIndication_r17_CriticalExtensions {
    MBSInterestIndication_r17_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MBSInterestIndication_r17_IEs mbsInterestIndication_r17; /**< ASN.1 mbsInterestIndication-r17 */
        MBSInterestIndication_r17_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MBSInterestIndication_r17
 * @note ASN.1：MBSInterestIndication-r17；源文件第 606 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_MBSInterestIndication_r17（包装位 3 级，入口 3 个 CHOICE）。
 * @note MBSInterestIndication-r17 ::= SEQUENCE { criticalExtensions }
 */
struct MBSInterestIndication_r17 {
    MBSInterestIndication_r17_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief MBS_SessionInfoListMulticast_r18
 * @note ASN.1：MBS-SessionInfoListMulticast-r18；源文件第 23593 行。
 * @note MBS-SessionInfoListMulticast-r18 ::= SEQUENCE OF (size 1..1024) OF MBS-SessionInfoMulticast-r18
 */
struct MBS_SessionInfoListMulticast_r18 {
    MBS_SessionInfoMulticast_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBSMulticastConfiguration_r18_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 644 行。
 * @note SEQUENCE { }
 */
struct MBSMulticastConfiguration_r18_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MBSMulticastConfiguration_r18_IEs
 * @note ASN.1：MBSMulticastConfiguration-r18-IEs；源文件第 636 行。
 * @note MBSMulticastConfiguration-r18-IEs ::= SEQUENCE { mbs-SessionInfoListMulticast-r18, mbs-NeighbourCellList-r18, drx-C...
 */
struct MBSMulticastConfiguration_r18_IEs {
    bool has_mbs_SessionInfoListMulticast_r18; /**< mbs-SessionInfoListMulticast-r18 是否存在。 */
    MBS_SessionInfoListMulticast_r18 mbs_SessionInfoListMulticast_r18; /**< ASN.1 mbs-SessionInfoListMulticast-r18；SEQUENCE OF MBS_SessionInfoMulticast_r18，SIZE (1..1024)；OPTIONAL。 */
    bool has_mbs_NeighbourCellList_r18; /**< mbs-NeighbourCellList-r18 是否存在。 */
    MBS_NeighbourCellList_r17 mbs_NeighbourCellList_r18; /**< ASN.1 mbs-NeighbourCellList-r18；SEQUENCE OF MBS_NeighbourCell_r17，SIZE (0..8)；OPTIONAL。 */
    bool has_drx_ConfigPTM_List_r18; /**< drx-ConfigPTM-List-r18 是否存在。 */
    DRX_ConfigPTM_r17* drx_ConfigPTM_List_r18_items; /**< ASN.1 drx-ConfigPTM-List-r18；SEQUENCE OF DRX_ConfigPTM_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t drx_ConfigPTM_List_r18_count; /**< drx-ConfigPTM-List-r18 元素个数。 */
    bool has_pdsch_ConfigMTCH_r18; /**< pdsch-ConfigMTCH-r18 是否存在。 */
    PDSCH_ConfigBroadcast_r17 pdsch_ConfigMTCH_r18; /**< ASN.1 pdsch-ConfigMTCH-r18；结构体；OPTIONAL。 */
    bool has_mtch_SSB_MappingWindowList_r18; /**< mtch-SSB-MappingWindowList-r18 是否存在。 */
    MTCH_SSB_MappingWindowList_r17 mtch_SSB_MappingWindowList_r18; /**< ASN.1 mtch-SSB-MappingWindowList-r18；SEQUENCE OF MTCH_SSB_MappingWindowCycleOffset_r17，SIZE (1..16)；OPTIONAL。 */
    bool has_thresholdMBS_List_r18; /**< thresholdMBS-List-r18 是否存在。 */
    ThresholdMBS_r18* thresholdMBS_List_r18_items; /**< ASN.1 thresholdMBS-List-r18；SEQUENCE OF ThresholdMBS_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t thresholdMBS_List_r18_count; /**< thresholdMBS-List-r18 元素个数。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MBSMulticastConfiguration_r18_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MBSMulticastConfiguration_r18_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 632 行。
 * @note SEQUENCE { }
 */
struct MBSMulticastConfiguration_r18_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MBSMulticastConfiguration_r18_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 630 行。
 * @note CHOICE { mbsMulticastConfiguration-r18, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MBSMulticastConfiguration_r18_CriticalExtensions_Tag {
    MBSMulticastConfiguration_r18_CriticalExtensions_Tag_mbsMulticastConfiguration_r18 = 0, /**< ASN.1 mbsMulticastConfiguration-r18 */
    MBSMulticastConfiguration_r18_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MBSMulticastConfiguration_r18_CriticalExtensions_Tag;

struct MBSMulticastConfiguration_r18_CriticalExtensions {
    MBSMulticastConfiguration_r18_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MBSMulticastConfiguration_r18_IEs mbsMulticastConfiguration_r18; /**< ASN.1 mbsMulticastConfiguration-r18 */
        MBSMulticastConfiguration_r18_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MBSMulticastConfiguration_r18
 * @note ASN.1：MBSMulticastConfiguration-r18；源文件第 629 行。
 * @note 实际消息：ChannelType_MulticastMCCH_r18；MessageKind_MBSMulticastConfiguration_r18（包装位 2 级，入口 2 个 CHOICE）。
 * @note MBSMulticastConfiguration-r18 ::= SEQUENCE { criticalExtensions }
 */
struct MBSMulticastConfiguration_r18 {
    MBSMulticastConfiguration_r18_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ThresholdMBS_r18
 * @note ASN.1：ThresholdMBS-r18；源文件第 647 行。
 * @note ThresholdMBS-r18 ::= SEQUENCE { rsrp-r18, rsrq-r18 }
 */
struct ThresholdMBS_r18 {
    bool has_rsrp_r18; /**< rsrp-r18 是否存在。 */
    RSRP_Range rsrp_r18; /**< ASN.1 rsrp-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrq_r18; /**< rsrq-r18 是否存在。 */
    RSRQ_Range rsrq_r18; /**< ASN.1 rsrq-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultList2UTRA
 * @note ASN.1：MeasResultList2UTRA；源文件第 680 行。
 * @note MeasResultList2UTRA ::= SEQUENCE OF (size 1..8) OF MeasResult2UTRA-FDD-r16
 */
struct MeasResultList2UTRA {
    MeasResult2UTRA_FDD_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultList2EUTRA
 * @note ASN.1：MeasResultList2EUTRA；源文件第 687 行。
 * @note MeasResultList2EUTRA ::= SEQUENCE OF (size 1..8) OF MeasResult2EUTRA-r16
 */
struct MeasResultList2EUTRA {
    MeasResult2EUTRA_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultList2NR
 * @note ASN.1：MeasResultList2NR；源文件第 8246 行。
 * @note MeasResultList2NR ::= SEQUENCE OF (size 1..8) OF MeasResult2NR
 */
struct MeasResultList2NR {
    MeasResult2NR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FailureReportMCG_r16
 * @note ASN.1：FailureReportMCG-r16；源文件第 668 行。
 * @note FailureReportMCG-r16 ::= SEQUENCE { failureType-r16, measResultFreqList-r16, measResultFreqListEUTRA-r...
 */
struct FailureReportMCG_r16 {
    bool has_failureType_r16; /**< failureType-r16 是否存在。 */
    FailureReportMCG_r16_FailureType_r16 failureType_r16; /**< ASN.1 failureType-r16；枚举；OPTIONAL。 */
    bool has_measResultFreqList_r16; /**< measResultFreqList-r16 是否存在。 */
    MeasResultList2NR measResultFreqList_r16; /**< ASN.1 measResultFreqList-r16；SEQUENCE OF MeasResult2NR，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultFreqListEUTRA_r16; /**< measResultFreqListEUTRA-r16 是否存在。 */
    MeasResultList2EUTRA measResultFreqListEUTRA_r16; /**< ASN.1 measResultFreqListEUTRA-r16；SEQUENCE OF MeasResult2EUTRA_r16，SIZE (1..8)；OPTIONAL。 */
    MeasResultSCG_Failure* measResultSCG_r16; /**< ASN.1 measResultSCG-r16；OCTET STRING (CONTAINING MeasResultSCG_Failure)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_measResultSCG_EUTRA_r16; /**< measResultSCG-EUTRA-r16 是否存在。 */
    OctetString measResultSCG_EUTRA_r16; /**< ASN.1 measResultSCG-EUTRA-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_measResultFreqListUTRA_FDD_r16; /**< measResultFreqListUTRA-FDD-r16 是否存在。 */
    MeasResultList2UTRA measResultFreqListUTRA_FDD_r16; /**< ASN.1 measResultFreqListUTRA-FDD-r16；SEQUENCE OF MeasResult2UTRA_FDD_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief MCGFailureInformation_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 665 行。
 * @note SEQUENCE { }
 */
struct MCGFailureInformation_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MCGFailureInformation_r16_IEs
 * @note ASN.1：MCGFailureInformation-r16-IEs；源文件第 662 行。
 * @note MCGFailureInformation-r16-IEs ::= SEQUENCE { failureReportMCG-r16, lateNonCriticalExtension, nonCriticalExtensi...
 */
struct MCGFailureInformation_r16_IEs {
    bool has_failureReportMCG_r16; /**< failureReportMCG-r16 是否存在。 */
    FailureReportMCG_r16 failureReportMCG_r16; /**< ASN.1 failureReportMCG-r16；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MCGFailureInformation_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MCGFailureInformation_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 658 行。
 * @note SEQUENCE { }
 */
struct MCGFailureInformation_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MCGFailureInformation_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 656 行。
 * @note CHOICE { mcgFailureInformation-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MCGFailureInformation_r16_CriticalExtensions_Tag {
    MCGFailureInformation_r16_CriticalExtensions_Tag_mcgFailureInformation_r16 = 0, /**< ASN.1 mcgFailureInformation-r16 */
    MCGFailureInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MCGFailureInformation_r16_CriticalExtensions_Tag;

struct MCGFailureInformation_r16_CriticalExtensions {
    MCGFailureInformation_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MCGFailureInformation_r16_IEs mcgFailureInformation_r16; /**< ASN.1 mcgFailureInformation-r16 */
        MCGFailureInformation_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MCGFailureInformation_r16
 * @note ASN.1：MCGFailureInformation-r16；源文件第 655 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_MCGFailureInformation_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note MCGFailureInformation-r16 ::= SEQUENCE { criticalExtensions }
 */
struct MCGFailureInformation_r16 {
    MCGFailureInformation_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief MeasResultListUTRA_FDD_r16
 * @note ASN.1：MeasResultListUTRA-FDD-r16；源文件第 8088 行。
 * @note MeasResultListUTRA-FDD-r16 ::= SEQUENCE OF (size 1..8) OF MeasResultUTRA-FDD-r16
 */
struct MeasResultListUTRA_FDD_r16 {
    MeasResultUTRA_FDD_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResult2UTRA_FDD_r16
 * @note ASN.1：MeasResult2UTRA-FDD-r16；源文件第 682 行。
 * @note MeasResult2UTRA-FDD-r16 ::= SEQUENCE { carrierFreq-r16, measResultNeighCellList-r16 }
 */
struct MeasResult2UTRA_FDD_r16 {
    ARFCN_ValueUTRA_FDD_r16 carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..16383)，位宽 14 bit。 */
    MeasResultListUTRA_FDD_r16 measResultNeighCellList_r16; /**< ASN.1 measResultNeighCellList-r16；SEQUENCE OF MeasResultUTRA_FDD_r16，SIZE (1..8)。 */
};


/**
 * @brief MeasResultCellSFTD_NR
 * @note ASN.1：MeasResultCellSFTD-NR；源文件第 7949 行。
 * @note MeasResultCellSFTD-NR ::= SEQUENCE { physCellId, sfn-OffsetResult, frameBoundaryOffsetResult, rsrp-Resu...
 */
struct MeasResultCellSFTD_NR {
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit。 */
    int64_t sfn_OffsetResult; /**< ASN.1 sfn-OffsetResult；INTEGER (0..1023)，位宽 10 bit。 */
    int64_t frameBoundaryOffsetResult; /**< ASN.1 frameBoundaryOffsetResult；INTEGER (-30720..30719)，位宽 16 bit。 */
    bool has_rsrp_Result; /**< rsrp-Result 是否存在。 */
    RSRP_Range rsrp_Result; /**< ASN.1 rsrp-Result；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultSFTD_EUTRA
 * @note ASN.1：MeasResultSFTD-EUTRA；源文件第 7961 行。
 * @note MeasResultSFTD-EUTRA ::= SEQUENCE { eutra-PhysCellId, sfn-OffsetResult, frameBoundaryOffsetResult, rsr...
 */
struct MeasResultSFTD_EUTRA {
    EUTRA_PhysCellId eutra_PhysCellId; /**< ASN.1 eutra-PhysCellId；INTEGER (0..503)，位宽 9 bit。 */
    int64_t sfn_OffsetResult; /**< ASN.1 sfn-OffsetResult；INTEGER (0..1023)，位宽 10 bit。 */
    int64_t frameBoundaryOffsetResult; /**< ASN.1 frameBoundaryOffsetResult；INTEGER (-30720..30719)，位宽 16 bit。 */
    bool has_rsrp_Result; /**< rsrp-Result 是否存在。 */
    RSRP_Range rsrp_Result; /**< ASN.1 rsrp-Result；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultServFreqListEUTRA_SCG
 * @note ASN.1：MeasResultServFreqListEUTRA-SCG；源文件第 8084 行。
 * @note MeasResultServFreqListEUTRA-SCG ::= SEQUENCE OF (size 1..32) OF MeasResult2EUTRA
 */
struct MeasResultServFreqListEUTRA_SCG {
    MeasResult2EUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultServFreqListNR_SCG
 * @note ASN.1：MeasResultServFreqListNR-SCG；源文件第 8086 行。
 * @note MeasResultServFreqListNR-SCG ::= SEQUENCE OF (size 1..32) OF MeasResult2NR
 */
struct MeasResultServFreqListNR_SCG {
    MeasResult2NR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResults_ExtGroup1
 * @note ASN.1：MeasResults_ExtGroup1；源文件第 7982 行。
 */
struct MeasResults_ExtGroup1 {
    bool has_measResultServFreqListEUTRA_SCG; /**< measResultServFreqListEUTRA-SCG 是否存在。 */
    MeasResultServFreqListEUTRA_SCG measResultServFreqListEUTRA_SCG; /**< ASN.1 measResultServFreqListEUTRA-SCG；SEQUENCE OF MeasResult2EUTRA，SIZE (1..32)；OPTIONAL。 */
    bool has_measResultServFreqListNR_SCG; /**< measResultServFreqListNR-SCG 是否存在。 */
    MeasResultServFreqListNR_SCG measResultServFreqListNR_SCG; /**< ASN.1 measResultServFreqListNR-SCG；SEQUENCE OF MeasResult2NR，SIZE (1..32)；OPTIONAL。 */
    bool has_measResultSFTD_EUTRA; /**< measResultSFTD-EUTRA 是否存在。 */
    MeasResultSFTD_EUTRA measResultSFTD_EUTRA; /**< ASN.1 measResultSFTD-EUTRA；结构体；OPTIONAL。 */
    bool has_measResultSFTD_NR; /**< measResultSFTD-NR 是否存在。 */
    MeasResultCellSFTD_NR measResultSFTD_NR; /**< ASN.1 measResultSFTD-NR；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultCellListSFTD_NR
 * @note ASN.1：MeasResultCellListSFTD-NR；源文件第 7947 行。
 * @note MeasResultCellListSFTD-NR ::= SEQUENCE OF (size 1..3) OF MeasResultCellSFTD-NR
 */
struct MeasResultCellListSFTD_NR {
    MeasResultCellSFTD_NR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResults_ExtGroup2
 * @note ASN.1：MeasResults_ExtGroup2；源文件第 7988 行。
 */
struct MeasResults_ExtGroup2 {
    bool has_measResultCellListSFTD_NR; /**< measResultCellListSFTD-NR 是否存在。 */
    MeasResultCellListSFTD_NR measResultCellListSFTD_NR; /**< ASN.1 measResultCellListSFTD-NR；SEQUENCE OF MeasResultCellSFTD_NR，SIZE (1..3)；OPTIONAL。 */
};


/**
 * @brief CommonLocationInfo_r16
 * @note ASN.1：CommonLocationInfo-r16；源文件第 5424 行。
 * @note CommonLocationInfo-r16 ::= SEQUENCE { gnss-TOD-msec-r16, locationTimestamp-r16, locationCoordinate-r16, ...
 */
struct CommonLocationInfo_r16 {
    bool has_gnss_TOD_msec_r16; /**< gnss-TOD-msec-r16 是否存在。 */
    OctetString gnss_TOD_msec_r16; /**< ASN.1 gnss-TOD-msec-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_locationTimestamp_r16; /**< locationTimestamp-r16 是否存在。 */
    OctetString locationTimestamp_r16; /**< ASN.1 locationTimestamp-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_locationCoordinate_r16; /**< locationCoordinate-r16 是否存在。 */
    OctetString locationCoordinate_r16; /**< ASN.1 locationCoordinate-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_locationError_r16; /**< locationError-r16 是否存在。 */
    OctetString locationError_r16; /**< ASN.1 locationError-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_locationSource_r16; /**< locationSource-r16 是否存在。 */
    OctetString locationSource_r16; /**< ASN.1 locationSource-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_velocityEstimate_r16; /**< velocityEstimate-r16 是否存在。 */
    OctetString velocityEstimate_r16; /**< ASN.1 velocityEstimate-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief Sensor_LocationInfo_r16
 * @note ASN.1：Sensor-LocationInfo-r16；源文件第 12389 行。
 * @note Sensor-LocationInfo-r16 ::= SEQUENCE { sensor-MeasurementInformation-r16, sensor-MotionInformation-r16 }
 */
struct Sensor_LocationInfo_r16 {
    bool has_sensor_MeasurementInformation_r16; /**< sensor-MeasurementInformation-r16 是否存在。 */
    OctetString sensor_MeasurementInformation_r16; /**< ASN.1 sensor-MeasurementInformation-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sensor_MotionInformation_r16; /**< sensor-MotionInformation-r16 是否存在。 */
    OctetString sensor_MotionInformation_r16; /**< ASN.1 sensor-MotionInformation-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief LogMeasResultListBT_r16
 * @note ASN.1：LogMeasResultListBT-r16；源文件第 21528 行。
 * @note LogMeasResultListBT-r16 ::= SEQUENCE OF (size 1..32) OF LogMeasResultBT-r16
 */
struct LogMeasResultListBT_r16 {
    LogMeasResultBT_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief LogMeasResultListWLAN_r16
 * @note ASN.1：LogMeasResultListWLAN-r16；源文件第 21539 行。
 * @note LogMeasResultListWLAN-r16 ::= SEQUENCE OF (size 1..32) OF LogMeasResultWLAN-r16
 */
struct LogMeasResultListWLAN_r16 {
    LogMeasResultWLAN_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief LocationInfo_r16
 * @note ASN.1：LocationInfo-r16；源文件第 7060 行。
 * @note LocationInfo-r16 ::= SEQUENCE { commonLocationInfo-r16, bt-LocationInfo-r16, wlan-LocationInfo-r16...
 */
struct LocationInfo_r16 {
    bool has_commonLocationInfo_r16; /**< commonLocationInfo-r16 是否存在。 */
    CommonLocationInfo_r16 commonLocationInfo_r16; /**< ASN.1 commonLocationInfo-r16；结构体；OPTIONAL。 */
    bool has_bt_LocationInfo_r16; /**< bt-LocationInfo-r16 是否存在。 */
    LogMeasResultListBT_r16 bt_LocationInfo_r16; /**< ASN.1 bt-LocationInfo-r16；SEQUENCE OF LogMeasResultBT_r16，SIZE (1..32)；OPTIONAL。 */
    bool has_wlan_LocationInfo_r16; /**< wlan-LocationInfo-r16 是否存在。 */
    LogMeasResultListWLAN_r16 wlan_LocationInfo_r16; /**< ASN.1 wlan-LocationInfo-r16；SEQUENCE OF LogMeasResultWLAN_r16，SIZE (1..32)；OPTIONAL。 */
    bool has_sensor_LocationInfo_r16; /**< sensor-LocationInfo-r16 是否存在。 */
    Sensor_LocationInfo_r16 sensor_LocationInfo_r16; /**< ASN.1 sensor-LocationInfo-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultForRSSI_r16
 * @note ASN.1：MeasResultForRSSI-r16；源文件第 8098 行。
 * @note MeasResultForRSSI-r16 ::= SEQUENCE { rssi-Result-r16, channelOccupancy-r16 }
 */
struct MeasResultForRSSI_r16 {
    RSSI_Range_r16 rssi_Result_r16; /**< ASN.1 rssi-Result-r16；INTEGER (0..76)，位宽 7 bit。 */
    int64_t channelOccupancy_r16; /**< ASN.1 channelOccupancy-r16；INTEGER (0..100)，位宽 7 bit。 */
};


/**
 * @brief MeasResultListSRS_RSRP_r16
 * @note ASN.1：MeasResultListSRS-RSRP-r16；源文件第 8108 行。
 * @note MeasResultListSRS-RSRP-r16 ::= SEQUENCE OF (size 1..8) OF MeasResultSRS-RSRP-r16
 */
struct MeasResultListSRS_RSRP_r16 {
    MeasResultSRS_RSRP_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultListCLI_RSSI_r16
 * @note ASN.1：MeasResultListCLI-RSSI-r16；源文件第 8115 行。
 * @note MeasResultListCLI-RSSI-r16 ::= SEQUENCE OF (size 1..8) OF MeasResultCLI-RSSI-r16
 */
struct MeasResultListCLI_RSSI_r16 {
    MeasResultCLI_RSSI_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultCLI_r16
 * @note ASN.1：MeasResultCLI-r16；源文件第 8103 行。
 * @note MeasResultCLI-r16 ::= SEQUENCE { measResultListSRS-RSRP-r16, measResultListCLI-RSSI-r16 }
 */
struct MeasResultCLI_r16 {
    bool has_measResultListSRS_RSRP_r16; /**< measResultListSRS-RSRP-r16 是否存在。 */
    MeasResultListSRS_RSRP_r16 measResultListSRS_RSRP_r16; /**< ASN.1 measResultListSRS-RSRP-r16；SEQUENCE OF MeasResultSRS_RSRP_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultListCLI_RSSI_r16; /**< measResultListCLI-RSSI-r16 是否存在。 */
    MeasResultListCLI_RSSI_r16 measResultListCLI_RSSI_r16; /**< ASN.1 measResultListCLI-RSSI-r16；SEQUENCE OF MeasResultCLI_RSSI_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief UL_PDCP_DelayValueResultList_r16
 * @note ASN.1：UL-PDCP-DelayValueResultList-r16；源文件第 8122 行。
 * @note UL-PDCP-DelayValueResultList-r16 ::= SEQUENCE OF (size 1..29) OF UL-PDCP-DelayValueResult-r16
 */
struct UL_PDCP_DelayValueResultList_r16 {
    UL_PDCP_DelayValueResult_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultNR_SL_r16
 * @note ASN.1：MeasResultNR-SL-r16；源文件第 8259 行。
 * @note MeasResultNR-SL-r16 ::= SEQUENCE { measResultListCBR-NR-r16 }
 */
struct MeasResultNR_SL_r16 {
    MeasResultCBR_NR_r16* measResultListCBR_NR_r16_items; /**< ASN.1 measResultListCBR-NR-r16；SEQUENCE OF MeasResultCBR_NR_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t measResultListCBR_NR_r16_count; /**< measResultListCBR-NR-r16 元素个数。 */
};


/**
 * @brief MeasResultsSL_r16_MeasResultsListSL_r16
 * @note ASN.1：measResultsListSL-r16；源文件第 8252 行。
 * @note CHOICE { measResultNR-SL-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasResultsSL_r16_MeasResultsListSL_r16_Tag {
    MeasResultsSL_r16_MeasResultsListSL_r16_Tag_measResultNR_SL_r16 = 0, /**< ASN.1 measResultNR-SL-r16 */
} MeasResultsSL_r16_MeasResultsListSL_r16_Tag;

struct MeasResultsSL_r16_MeasResultsListSL_r16 {
    MeasResultsSL_r16_MeasResultsListSL_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MeasResultNR_SL_r16 measResultNR_SL_r16; /**< ASN.1 measResultNR-SL-r16 */
    } u;
};


/**
 * @brief MeasResultsSL_r16
 * @note ASN.1：MeasResultsSL-r16；源文件第 8251 行。
 * @note MeasResultsSL-r16 ::= SEQUENCE { measResultsListSL-r16 }
 */
struct MeasResultsSL_r16 {
    MeasResultsSL_r16_MeasResultsListSL_r16 measResultsListSL_r16; /**< ASN.1 measResultsListSL-r16；结构体。 */
};


/**
 * @brief MeasResults_ExtGroup3
 * @note ASN.1：MeasResults_ExtGroup3；源文件第 7991 行。
 */
struct MeasResults_ExtGroup3 {
    bool has_measResultForRSSI_r16; /**< measResultForRSSI-r16 是否存在。 */
    MeasResultForRSSI_r16 measResultForRSSI_r16; /**< ASN.1 measResultForRSSI-r16；结构体；OPTIONAL。 */
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
    bool has_ul_PDCP_DelayValueResultList_r16; /**< ul-PDCP-DelayValueResultList-r16 是否存在。 */
    UL_PDCP_DelayValueResultList_r16 ul_PDCP_DelayValueResultList_r16; /**< ASN.1 ul-PDCP-DelayValueResultList-r16；SEQUENCE OF UL_PDCP_DelayValueResult_r16，SIZE (1..29)；OPTIONAL。 */
    bool has_measResultsSL_r16; /**< measResultsSL-r16 是否存在。 */
    MeasResultsSL_r16 measResultsSL_r16; /**< ASN.1 measResultsSL-r16；结构体；OPTIONAL。 */
    bool has_measResultCLI_r16; /**< measResultCLI-r16 是否存在。 */
    MeasResultCLI_r16 measResultCLI_r16; /**< ASN.1 measResultCLI-r16；结构体；OPTIONAL。 */
};


/**
 * @brief UL_PDCP_ExcessDelayResultList_r17
 * @note ASN.1：UL-PDCP-ExcessDelayResultList-r17；源文件第 8130 行。
 * @note UL-PDCP-ExcessDelayResultList-r17 ::= SEQUENCE OF (size 1..29) OF UL-PDCP-ExcessDelayResult-r17
 */
struct UL_PDCP_ExcessDelayResultList_r17 {
    UL_PDCP_ExcessDelayResult_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultRxTxTimeDiff_r17
 * @note ASN.1：MeasResultRxTxTimeDiff-r17；源文件第 8230 行。
 * @note MeasResultRxTxTimeDiff-r17 ::= SEQUENCE { rxTxTimeDiff-ue-r17 }
 */
struct MeasResultRxTxTimeDiff_r17 {
    bool has_rxTxTimeDiff_ue_r17; /**< rxTxTimeDiff-ue-r17 是否存在。 */
    RxTxTimeDiff_r17 rxTxTimeDiff_ue_r17; /**< ASN.1 rxTxTimeDiff-ue-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResults_ExtGroup4
 * @note ASN.1：MeasResults_ExtGroup4；源文件第 7998 行。
 */
struct MeasResults_ExtGroup4 {
    bool has_measResultRxTxTimeDiff_r17; /**< measResultRxTxTimeDiff-r17 是否存在。 */
    MeasResultRxTxTimeDiff_r17 measResultRxTxTimeDiff_r17; /**< ASN.1 measResultRxTxTimeDiff-r17；结构体；OPTIONAL。 */
    bool has_sl_MeasResultServingRelay_r17; /**< sl-MeasResultServingRelay-r17 是否存在。 */
    OctetString sl_MeasResultServingRelay_r17; /**< ASN.1 sl-MeasResultServingRelay-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_ul_PDCP_ExcessDelayResultList_r17; /**< ul-PDCP-ExcessDelayResultList-r17 是否存在。 */
    UL_PDCP_ExcessDelayResultList_r17 ul_PDCP_ExcessDelayResultList_r17; /**< ASN.1 ul-PDCP-ExcessDelayResultList-r17；SEQUENCE OF UL_PDCP_ExcessDelayResult_r17，SIZE (1..29)；OPTIONAL。 */
    bool has_coarseLocationInfo_r17; /**< coarseLocationInfo-r17 是否存在。 */
    OctetString coarseLocationInfo_r17; /**< ASN.1 coarseLocationInfo-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief MeasResults_ExtGroup5
 * @note ASN.1：MeasResults_ExtGroup5；源文件第 8005 行。
 */
struct MeasResults_ExtGroup5 {
    bool has_altitudeUE_r18; /**< altitudeUE-r18 是否存在。 */
    Altitude_r18 altitudeUE_r18; /**< ASN.1 altitudeUE-r18；INTEGER (-420..10000)，位宽 14 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultServMOList
 * @note ASN.1：MeasResultServMOList；源文件第 8010 行。
 * @note MeasResultServMOList ::= SEQUENCE OF (size 1..32) OF MeasResultServMO
 */
struct MeasResultServMOList {
    MeasResultServMO* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultListNR
 * @note ASN.1：MeasResultListNR；源文件第 8019 行。
 * @note MeasResultListNR ::= SEQUENCE OF (size 1..8) OF MeasResultNR
 */
struct MeasResultListNR {
    MeasResultNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultListEUTRA
 * @note ASN.1：MeasResultListEUTRA；源文件第 8047 行。
 * @note MeasResultListEUTRA ::= SEQUENCE OF (size 1..8) OF MeasResultEUTRA
 */
struct MeasResultListEUTRA {
    MeasResultEUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResults_MeasResultNeighCells
 * @note ASN.1：measResultNeighCells；源文件第 7974 行。
 * @note CHOICE { measResultListNR, measResultListEUTRA, measResultListUTRA-FDD-r16, s...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasResults_MeasResultNeighCells_Tag {
    MeasResults_MeasResultNeighCells_Tag_measResultListNR = 0, /**< ASN.1 measResultListNR */
    MeasResults_MeasResultNeighCells_Tag_measResultListEUTRA = 1, /**< ASN.1 measResultListEUTRA（扩展备选） */
    MeasResults_MeasResultNeighCells_Tag_measResultListUTRA_FDD_r16 = 2, /**< ASN.1 measResultListUTRA-FDD-r16（扩展备选） */
    MeasResults_MeasResultNeighCells_Tag_sl_MeasResultsCandRelay_r17 = 3, /**< ASN.1 sl-MeasResultsCandRelay-r17（扩展备选） */
} MeasResults_MeasResultNeighCells_Tag;

struct MeasResults_MeasResultNeighCells {
    MeasResults_MeasResultNeighCells_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MeasResultListNR measResultListNR; /**< ASN.1 measResultListNR */
        MeasResultListEUTRA measResultListEUTRA; /**< ASN.1 measResultListEUTRA */
        MeasResultListUTRA_FDD_r16 measResultListUTRA_FDD_r16; /**< ASN.1 measResultListUTRA-FDD-r16 */
        OctetString sl_MeasResultsCandRelay_r17; /**< ASN.1 sl-MeasResultsCandRelay-r17 */
    } u;
};


/**
 * @brief MeasResults
 * @note ASN.1：MeasResults；源文件第 7971 行。
 * @note MeasResults ::= SEQUENCE { measId, measResultServingMOList, measResultNeighCells, measResultS...
 */
struct MeasResults {
    MeasId measId; /**< ASN.1 measId；INTEGER (1..64)，位宽 6 bit。 */
    MeasResultServMOList measResultServingMOList; /**< ASN.1 measResultServingMOList；SEQUENCE OF MeasResultServMO，SIZE (1..32)。 */
    bool has_measResultNeighCells; /**< measResultNeighCells 是否存在。 */
    MeasResults_MeasResultNeighCells measResultNeighCells; /**< ASN.1 measResultNeighCells；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasResults_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasResults_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MeasResults_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MeasResults_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MeasResults_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasurementReport_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 703 行。
 * @note SEQUENCE { }
 */
struct MeasurementReport_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MeasurementReport_IEs
 * @note ASN.1：MeasurementReport-IEs；源文件第 699 行。
 * @note MeasurementReport-IEs ::= SEQUENCE { measResults, lateNonCriticalExtension, nonCriticalExtension }
 */
struct MeasurementReport_IEs {
    MeasResults measResults; /**< ASN.1 measResults；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MeasurementReport_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MeasurementReport_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 695 行。
 * @note SEQUENCE { }
 */
struct MeasurementReport_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MeasurementReport_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 693 行。
 * @note CHOICE { measurementReport, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasurementReport_CriticalExtensions_Tag {
    MeasurementReport_CriticalExtensions_Tag_measurementReport = 0, /**< ASN.1 measurementReport */
    MeasurementReport_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MeasurementReport_CriticalExtensions_Tag;

struct MeasurementReport_CriticalExtensions {
    MeasurementReport_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MeasurementReport_IEs measurementReport; /**< ASN.1 measurementReport */
        MeasurementReport_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MeasurementReport
 * @note ASN.1：MeasurementReport；源文件第 692 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_MeasurementReport（包装位 2 级，入口 2 个 CHOICE）。
 * @note MeasurementReport ::= SEQUENCE { criticalExtensions }
 */
struct MeasurementReport {
    MeasurementReport_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief MeasurementReportAppLayerList_v1800
 * @note ASN.1：MeasurementReportAppLayerList-v1800；源文件第 729 行。
 * @note MeasurementReportAppLayerList-v1800 ::= SEQUENCE OF (size 1..16) OF MeasReportAppLayer-v1800
 */
struct MeasurementReportAppLayerList_v1800 {
    MeasReportAppLayer_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 724 行。
 * @note SEQUENCE { }
 */
struct MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MeasurementReportAppLayer_v1800_IEs
 * @note ASN.1：MeasurementReportAppLayer-v1800-IEs；源文件第 722 行。
 * @note MeasurementReportAppLayer-v1800-IEs ::= SEQUENCE { measurementReportAppLayerList-v1800, nonCriticalExtension }
 */
struct MeasurementReportAppLayer_v1800_IEs {
    bool has_measurementReportAppLayerList_v1800; /**< measurementReportAppLayerList-v1800 是否存在。 */
    MeasurementReportAppLayerList_v1800 measurementReportAppLayerList_v1800; /**< ASN.1 measurementReportAppLayerList-v1800；SEQUENCE OF MeasReportAppLayer_v1800，SIZE (1..16)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MeasurementReportAppLayerList_r17
 * @note ASN.1：MeasurementReportAppLayerList-r17；源文件第 727 行。
 * @note MeasurementReportAppLayerList-r17 ::= SEQUENCE OF (size 1..16) OF MeasReportAppLayer-r17
 */
struct MeasurementReportAppLayerList_r17 {
    MeasReportAppLayer_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasurementReportAppLayer_r17_IEs
 * @note ASN.1：MeasurementReportAppLayer-r17-IEs；源文件第 716 行。
 * @note MeasurementReportAppLayer-r17-IEs ::= SEQUENCE { measurementReportAppLayerList-r17, lateNonCriticalExtension, nonCr...
 */
struct MeasurementReportAppLayer_r17_IEs {
    MeasurementReportAppLayerList_r17 measurementReportAppLayerList_r17; /**< ASN.1 measurementReportAppLayerList-r17；SEQUENCE OF MeasReportAppLayer_r17，SIZE (1..16)。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MeasurementReportAppLayer_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MeasurementReportAppLayer_r17_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 712 行。
 * @note SEQUENCE { }
 */
struct MeasurementReportAppLayer_r17_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MeasurementReportAppLayer_r17_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 710 行。
 * @note CHOICE { measurementReportAppLayer-r17, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasurementReportAppLayer_r17_CriticalExtensions_Tag {
    MeasurementReportAppLayer_r17_CriticalExtensions_Tag_measurementReportAppLayer_r17 = 0, /**< ASN.1 measurementReportAppLayer-r17 */
    MeasurementReportAppLayer_r17_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MeasurementReportAppLayer_r17_CriticalExtensions_Tag;

struct MeasurementReportAppLayer_r17_CriticalExtensions {
    MeasurementReportAppLayer_r17_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MeasurementReportAppLayer_r17_IEs measurementReportAppLayer_r17; /**< ASN.1 measurementReportAppLayer-r17 */
        MeasurementReportAppLayer_r17_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MeasurementReportAppLayer_r17
 * @note ASN.1：MeasurementReportAppLayer-r17；源文件第 709 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_MeasurementReportAppLayer_r17（包装位 3 级，入口 3 个 CHOICE）。
 * @note MeasurementReportAppLayer-r17 ::= SEQUENCE { criticalExtensions }
 */
struct MeasurementReportAppLayer_r17 {
    MeasurementReportAppLayer_r17_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief RAN_VisibleMeasurements_r17_ExtGroup1
 * @note ASN.1：RAN_VisibleMeasurements_r17_ExtGroup1；源文件第 749 行。
 */
struct RAN_VisibleMeasurements_r17_ExtGroup1 {
    bool has_pdu_SessionIdListExt_v1800; /**< pdu-SessionIdListExt-v1800 是否存在。 */
    QFI_List_r18* pdu_SessionIdListExt_v1800_items; /**< ASN.1 pdu-SessionIdListExt-v1800；SEQUENCE OF QFI_List_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdu_SessionIdListExt_v1800_count; /**< pdu-SessionIdListExt-v1800 元素个数。 */
};


/**
 * @brief RAN_VisibleMeasurements_r17
 * @note ASN.1：RAN-VisibleMeasurements-r17；源文件第 744 行。
 * @note RAN-VisibleMeasurements-r17 ::= SEQUENCE { appLayerBufferLevelList-r17, playoutDelayForMediaStartup-r17, pdu-...
 */
struct RAN_VisibleMeasurements_r17 {
    bool has_appLayerBufferLevelList_r17; /**< appLayerBufferLevelList-r17 是否存在。 */
    AppLayerBufferLevel_r17* appLayerBufferLevelList_r17_items; /**< ASN.1 appLayerBufferLevelList-r17；SEQUENCE OF AppLayerBufferLevel_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t appLayerBufferLevelList_r17_count; /**< appLayerBufferLevelList-r17 元素个数。 */
    bool has_playoutDelayForMediaStartup_r17; /**< playoutDelayForMediaStartup-r17 是否存在。 */
    int64_t playoutDelayForMediaStartup_r17; /**< ASN.1 playoutDelayForMediaStartup-r17；INTEGER (0..30000)，位宽 15 bit；OPTIONAL。 */
    bool has_pdu_SessionIdList_r17; /**< pdu-SessionIdList-r17 是否存在。 */
    PDU_SessionID* pdu_SessionIdList_r17_items; /**< ASN.1 pdu-SessionIdList-r17；SEQUENCE OF PDU_SessionID，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdu_SessionIdList_r17_count; /**< pdu-SessionIdList-r17 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RAN_VisibleMeasurements_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasReportAppLayer_r17
 * @note ASN.1：MeasReportAppLayer-r17；源文件第 731 行。
 * @note MeasReportAppLayer-r17 ::= SEQUENCE { measConfigAppLayerId-r17, measReportAppLayerContainer-r17, appLaye...
 */
struct MeasReportAppLayer_r17 {
    MeasConfigAppLayerId_r17 measConfigAppLayerId_r17; /**< ASN.1 measConfigAppLayerId-r17；INTEGER (0..15)，位宽 4 bit。 */
    bool has_measReportAppLayerContainer_r17; /**< measReportAppLayerContainer-r17 是否存在。 */
    OctetString measReportAppLayerContainer_r17; /**< ASN.1 measReportAppLayerContainer-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_appLayerSessionStatus_r17; /**< appLayerSessionStatus-r17 是否存在。 */
    MeasReportAppLayer_r17_AppLayerSessionStatus_r17 appLayerSessionStatus_r17; /**< ASN.1 appLayerSessionStatus-r17；枚举；OPTIONAL。 */
    bool has_ran_VisibleMeasurements_r17; /**< ran-VisibleMeasurements-r17 是否存在。 */
    RAN_VisibleMeasurements_r17 ran_VisibleMeasurements_r17; /**< ASN.1 ran-VisibleMeasurements-r17；结构体；OPTIONAL。 */
};


/**
 * @brief Qoe_AreaScope_r18
 * @note ASN.1：Qoe-AreaScope-r18；源文件第 21271 行。
 * @note Qoe-AreaScope-r18 ::= CHOICE { cellGlobalIdList, trackingAreaCodeList, trackingAreaIdentityList, pl...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum Qoe_AreaScope_r18_Tag {
    Qoe_AreaScope_r18_Tag_cellGlobalIdList = 0, /**< ASN.1 cellGlobalIdList */
    Qoe_AreaScope_r18_Tag_trackingAreaCodeList = 1, /**< ASN.1 trackingAreaCodeList */
    Qoe_AreaScope_r18_Tag_trackingAreaIdentityList = 2, /**< ASN.1 trackingAreaIdentityList */
    Qoe_AreaScope_r18_Tag_plmn_IdentityList = 3, /**< ASN.1 plmn-IdentityList */
} Qoe_AreaScope_r18_Tag;

struct Qoe_AreaScope_r18 {
    Qoe_AreaScope_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CellGlobalIdList_r16 cellGlobalIdList; /**< ASN.1 cellGlobalIdList */
        TrackingAreaCodeList_r16 trackingAreaCodeList; /**< ASN.1 trackingAreaCodeList */
        TrackingAreaIdentityList_r16 trackingAreaIdentityList; /**< ASN.1 trackingAreaIdentityList */
        PLMN_IdentityList2_r16 plmn_IdentityList; /**< ASN.1 plmn-IdentityList */
    } u;
};


/**
 * @brief AvailableRAN_VisibleMetrics_r18
 * @note ASN.1：AvailableRAN-VisibleMetrics-r18；源文件第 21279 行。
 * @note AvailableRAN-VisibleMetrics-r18 ::= SEQUENCE { appLayerBufferLevelList-r18, playoutDelayForMediaStartup-r18 }
 */
struct AvailableRAN_VisibleMetrics_r18 {
    bool has_appLayerBufferLevelList_r18; /**< appLayerBufferLevelList-r18 是否存在。 */
    AvailableRAN_VisibleMetrics_r18_AppLayerBufferLevelList_r18 appLayerBufferLevelList_r18; /**< ASN.1 appLayerBufferLevelList-r18；枚举；OPTIONAL。 */
    bool has_playoutDelayForMediaStartup_r18; /**< playoutDelayForMediaStartup-r18 是否存在。 */
    AvailableRAN_VisibleMetrics_r18_PlayoutDelayForMediaStartup_r18 playoutDelayForMediaStartup_r18; /**< ASN.1 playoutDelayForMediaStartup-r18；枚举；OPTIONAL。 */
};


/**
 * @brief AppLayerIdleInactiveConfig_r18
 * @note ASN.1：AppLayerIdleInactiveConfig-r18；源文件第 21259 行。
 * @note AppLayerIdleInactiveConfig-r18 ::= SEQUENCE { measConfigAppLayerId-r18, serviceType-r18, appLayerMeasPriority-r1...
 */
struct AppLayerIdleInactiveConfig_r18 {
    MeasConfigAppLayerId_r17 measConfigAppLayerId_r18; /**< ASN.1 measConfigAppLayerId-r18；INTEGER (0..15)，位宽 4 bit。 */
    bool has_serviceType_r18; /**< serviceType-r18 是否存在。 */
    AppLayerIdleInactiveConfig_r18_ServiceType_r18 serviceType_r18; /**< ASN.1 serviceType-r18；枚举；OPTIONAL。 */
    bool has_appLayerMeasPriority_r18; /**< appLayerMeasPriority-r18 是否存在。 */
    int64_t appLayerMeasPriority_r18; /**< ASN.1 appLayerMeasPriority-r18；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_qoe_Reference_r18; /**< qoe-Reference-r18 是否存在。 */
    OctetString qoe_Reference_r18; /**< ASN.1 qoe-Reference-r18；SIZE (6)，定长；OPTIONAL。 */
    bool has_qoe_MeasurementType_r18; /**< qoe-MeasurementType-r18 是否存在。 */
    AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18 qoe_MeasurementType_r18; /**< ASN.1 qoe-MeasurementType-r18；枚举；OPTIONAL。 */
    bool has_qoe_AreaScope_r18; /**< qoe-AreaScope-r18 是否存在。 */
    Qoe_AreaScope_r18 qoe_AreaScope_r18; /**< ASN.1 qoe-AreaScope-r18；结构体；OPTIONAL。 */
    bool has_mce_Id_r18; /**< mce-Id-r18 是否存在。 */
    OctetString mce_Id_r18; /**< ASN.1 mce-Id-r18；SIZE (1)，定长；OPTIONAL。 */
    bool has_availableRAN_VisibleMetrics_r18; /**< availableRAN-VisibleMetrics-r18 是否存在。 */
    AvailableRAN_VisibleMetrics_r18 availableRAN_VisibleMetrics_r18; /**< ASN.1 availableRAN-VisibleMetrics-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MeasReportAppLayer_v1800
 * @note ASN.1：MeasReportAppLayer-v1800；源文件第 738 行。
 * @note MeasReportAppLayer-v1800 ::= SEQUENCE { appLayerIdleInactiveConfig-r18, measReportAppLayerContainerList-r18 }
 */
struct MeasReportAppLayer_v1800 {
    bool has_appLayerIdleInactiveConfig_r18; /**< appLayerIdleInactiveConfig-r18 是否存在。 */
    AppLayerIdleInactiveConfig_r18 appLayerIdleInactiveConfig_r18; /**< ASN.1 appLayerIdleInactiveConfig-r18；结构体；OPTIONAL。 */
    bool has_measReportAppLayerContainerList_r18; /**< measReportAppLayerContainerList-r18 是否存在。 */
    OctetString* measReportAppLayerContainerList_r18_items; /**< ASN.1 measReportAppLayerContainerList-r18；SEQUENCE OF OctetString，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measReportAppLayerContainerList_r18_count; /**< measReportAppLayerContainerList-r18 元素个数。 */
};


/**
 * @brief QFI_List_r18
 * @note ASN.1：QFI-List-r18；源文件第 756 行。
 * @note QFI-List-r18 ::= SEQUENCE OF (size 1..64) OF QFI
 */
struct QFI_List_r18 {
    QFI* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigSIB1
 * @note ASN.1：PDCCH-ConfigSIB1；源文件第 9258 行。
 * @note PDCCH-ConfigSIB1 ::= SEQUENCE { controlResourceSetZero, searchSpaceZero }
 */
struct PDCCH_ConfigSIB1 {
    ControlResourceSetZero controlResourceSetZero; /**< ASN.1 controlResourceSetZero；INTEGER (0..15)，位宽 4 bit。 */
    SearchSpaceZero searchSpaceZero; /**< ASN.1 searchSpaceZero；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief MIB
 * @note ASN.1：MIB；源文件第 761 行。
 * @note 实际消息：ChannelType_BCCH_BCH；MessageKind_MIB（包装位 1 级，入口 1 个 CHOICE）。
 * @note MIB ::= SEQUENCE { systemFrameNumber, subCarrierSpacingCommon, ssb-SubcarrierOffset, ...
 */
struct MIB {
    BitString systemFrameNumber; /**< ASN.1 systemFrameNumber；SIZE (6)，定长。 */
    MIB_SubCarrierSpacingCommon subCarrierSpacingCommon; /**< ASN.1 subCarrierSpacingCommon；枚举。 */
    int64_t ssb_SubcarrierOffset; /**< ASN.1 ssb-SubcarrierOffset；INTEGER (0..15)，位宽 4 bit。 */
    MIB_Dmrs_TypeA_Position dmrs_TypeA_Position; /**< ASN.1 dmrs-TypeA-Position；枚举。 */
    PDCCH_ConfigSIB1 pdcch_ConfigSIB1; /**< ASN.1 pdcch-ConfigSIB1；结构体。 */
    MIB_CellBarred cellBarred; /**< ASN.1 cellBarred；枚举。 */
    MIB_IntraFreqReselection intraFreqReselection; /**< ASN.1 intraFreqReselection；枚举。 */
    BitString spare; /**< ASN.1 spare；SIZE (1)，定长。 */
};


/**
 * @brief SuccessHO_Config_r17
 * @note ASN.1：SuccessHO-Config-r17；源文件第 21664 行。
 * @note SuccessHO-Config-r17 ::= SEQUENCE { thresholdPercentageT304-r17, thresholdPercentageT310-r17, threshol...
 */
struct SuccessHO_Config_r17 {
    bool has_thresholdPercentageT304_r17; /**< thresholdPercentageT304-r17 是否存在。 */
    SuccessHO_Config_r17_ThresholdPercentageT304_r17 thresholdPercentageT304_r17; /**< ASN.1 thresholdPercentageT304-r17；枚举；OPTIONAL。 */
    bool has_thresholdPercentageT310_r17; /**< thresholdPercentageT310-r17 是否存在。 */
    SuccessHO_Config_r17_ThresholdPercentageT310_r17 thresholdPercentageT310_r17; /**< ASN.1 thresholdPercentageT310-r17；枚举；OPTIONAL。 */
    bool has_thresholdPercentageT312_r17; /**< thresholdPercentageT312-r17 是否存在。 */
    SuccessHO_Config_r17_ThresholdPercentageT312_r17 thresholdPercentageT312_r17; /**< ASN.1 thresholdPercentageT312-r17；枚举；OPTIONAL。 */
    bool has_sourceDAPS_FailureReporting_r17; /**< sourceDAPS-FailureReporting-r17 是否存在。 */
    SuccessHO_Config_r17_SourceDAPS_FailureReporting_r17 sourceDAPS_FailureReporting_r17; /**< ASN.1 sourceDAPS-FailureReporting-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SuccessHO_Config_r17
 * @note ASN.1：SetupRelease<SuccessHO-Config-r17>；源文件第 797 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SuccessHO_Config_r17_Tag {
    SetupRelease_SuccessHO_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SuccessHO_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SuccessHO_Config_r17_Tag;

struct SetupRelease_SuccessHO_Config_r17 {
    SetupRelease_SuccessHO_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SuccessHO_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MobilityFromNRCommand_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 798 行。
 * @note SEQUENCE { }
 */
struct MobilityFromNRCommand_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MobilityFromNRCommand_v1800_IEs
 * @note ASN.1：MobilityFromNRCommand-v1800-IEs；源文件第 796 行。
 * @note MobilityFromNRCommand-v1800-IEs ::= SEQUENCE { successHO-Config-r18, nonCriticalExtension }
 */
struct MobilityFromNRCommand_v1800_IEs {
    bool has_successHO_Config_r18; /**< successHO-Config-r18 是否存在。 */
    SetupRelease_SuccessHO_Config_r17 successHO_Config_r18; /**< ASN.1 successHO-Config-r18；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MobilityFromNRCommand_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MobilityFromNRCommand_v1610_IEs
 * @note ASN.1：MobilityFromNRCommand-v1610-IEs；源文件第 791 行。
 * @note MobilityFromNRCommand-v1610-IEs ::= SEQUENCE { voiceFallbackIndication-r16, nonCriticalExtension }
 */
struct MobilityFromNRCommand_v1610_IEs {
    bool has_voiceFallbackIndication_r16; /**< voiceFallbackIndication-r16 是否存在。 */
    MobilityFromNRCommand_v1610_IEs_VoiceFallbackIndication_r16 voiceFallbackIndication_r16; /**< ASN.1 voiceFallbackIndication-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MobilityFromNRCommand_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MobilityFromNRCommand_IEs
 * @note ASN.1：MobilityFromNRCommand-IEs；源文件第 783 行。
 * @note MobilityFromNRCommand-IEs ::= SEQUENCE { targetRAT-Type, targetRAT-MessageContainer, nas-SecurityParamFromN...
 */
struct MobilityFromNRCommand_IEs {
    MobilityFromNRCommand_IEs_TargetRAT_Type targetRAT_Type; /**< ASN.1 targetRAT-Type；枚举。 */
    OctetString targetRAT_MessageContainer; /**< ASN.1 targetRAT-MessageContainer；SIZE 无上界（半约束长度）。 */
    bool has_nas_SecurityParamFromNR; /**< nas-SecurityParamFromNR 是否存在。 */
    OctetString nas_SecurityParamFromNR; /**< ASN.1 nas-SecurityParamFromNR；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    MobilityFromNRCommand_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MobilityFromNRCommand_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 779 行。
 * @note SEQUENCE { }
 */
struct MobilityFromNRCommand_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief MobilityFromNRCommand_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 777 行。
 * @note CHOICE { mobilityFromNRCommand, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MobilityFromNRCommand_CriticalExtensions_Tag {
    MobilityFromNRCommand_CriticalExtensions_Tag_mobilityFromNRCommand = 0, /**< ASN.1 mobilityFromNRCommand */
    MobilityFromNRCommand_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} MobilityFromNRCommand_CriticalExtensions_Tag;

struct MobilityFromNRCommand_CriticalExtensions {
    MobilityFromNRCommand_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MobilityFromNRCommand_IEs mobilityFromNRCommand; /**< ASN.1 mobilityFromNRCommand */
        MobilityFromNRCommand_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief MobilityFromNRCommand
 * @note ASN.1：MobilityFromNRCommand；源文件第 775 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_MobilityFromNRCommand（包装位 2 级，入口 2 个 CHOICE）。
 * @note MobilityFromNRCommand ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct MobilityFromNRCommand {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    MobilityFromNRCommand_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief PagingRecordList_v1800
 * @note ASN.1：PagingRecordList-v1800；源文件第 828 行。
 * @note PagingRecordList-v1800 ::= SEQUENCE OF (size 1..32) OF PagingRecord-v1800
 */
struct PagingRecordList_v1800 {
    PagingRecord_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PagingGroupList_v1800
 * @note ASN.1：PagingGroupList-v1800；源文件第 830 行。
 * @note PagingGroupList-v1800 ::= SEQUENCE OF (size 1..32) OF GroupPaging-r18
 */
struct PagingGroupList_v1800 {
    GroupPaging_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief Paging_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 819 行。
 * @note SEQUENCE { }
 */
struct Paging_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief Paging_v1800_IEs
 * @note ASN.1：Paging-v1800-IEs；源文件第 816 行。
 * @note Paging-v1800-IEs ::= SEQUENCE { pagingRecordList-v1800, pagingGroupList-v1800, nonCriticalExtension }
 */
struct Paging_v1800_IEs {
    bool has_pagingRecordList_v1800; /**< pagingRecordList-v1800 是否存在。 */
    PagingRecordList_v1800 pagingRecordList_v1800; /**< ASN.1 pagingRecordList-v1800；SEQUENCE OF PagingRecord_v1800，SIZE (1..32)；OPTIONAL。 */
    bool has_pagingGroupList_v1800; /**< pagingGroupList-v1800 是否存在。 */
    PagingGroupList_v1800 pagingGroupList_v1800; /**< ASN.1 pagingGroupList-v1800；SEQUENCE OF GroupPaging_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    Paging_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief PagingRecordList_v1700
 * @note ASN.1：PagingRecordList-v1700；源文件第 824 行。
 * @note PagingRecordList-v1700 ::= SEQUENCE OF (size 1..32) OF PagingRecord-v1700
 */
struct PagingRecordList_v1700 {
    PagingRecord_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PagingGroupList_r17
 * @note ASN.1：PagingGroupList-r17；源文件第 826 行。
 * @note PagingGroupList-r17 ::= SEQUENCE OF (size 1..32) OF TMGI-r17
 */
struct PagingGroupList_r17 {
    TMGI_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief Paging_v1700_IEs
 * @note ASN.1：Paging-v1700-IEs；源文件第 810 行。
 * @note Paging-v1700-IEs ::= SEQUENCE { pagingRecordList-v1700, pagingGroupList-r17, nonCriticalExtension }
 */
struct Paging_v1700_IEs {
    bool has_pagingRecordList_v1700; /**< pagingRecordList-v1700 是否存在。 */
    PagingRecordList_v1700 pagingRecordList_v1700; /**< ASN.1 pagingRecordList-v1700；SEQUENCE OF PagingRecord_v1700，SIZE (1..32)；OPTIONAL。 */
    bool has_pagingGroupList_r17; /**< pagingGroupList-r17 是否存在。 */
    PagingGroupList_r17 pagingGroupList_r17; /**< ASN.1 pagingGroupList-r17；SEQUENCE OF TMGI_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    Paging_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief PagingRecordList
 * @note ASN.1：PagingRecordList；源文件第 822 行。
 * @note PagingRecordList ::= SEQUENCE OF (size 1..32) OF PagingRecord
 */
struct PagingRecordList {
    PagingRecord* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief Paging
 * @note ASN.1：Paging；源文件第 804 行。
 * @note 实际消息：ChannelType_PCCH；MessageKind_Paging（包装位 2 级，入口 2 个 CHOICE）。
 * @note Paging ::= SEQUENCE { pagingRecordList, lateNonCriticalExtension, nonCriticalExtension }
 */
struct Paging {
    bool has_pagingRecordList; /**< pagingRecordList 是否存在。 */
    PagingRecordList pagingRecordList; /**< ASN.1 pagingRecordList；SEQUENCE OF PagingRecord，SIZE (1..32)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    Paging_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief PagingUE_Identity
 * @note ASN.1：PagingUE-Identity；源文件第 846 行。
 * @note PagingUE-Identity ::= CHOICE { ng-5G-S-TMSI, fullI-RNTI }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PagingUE_Identity_Tag {
    PagingUE_Identity_Tag_ng_5G_S_TMSI = 0, /**< ASN.1 ng-5G-S-TMSI */
    PagingUE_Identity_Tag_fullI_RNTI = 1, /**< ASN.1 fullI-RNTI */
} PagingUE_Identity_Tag;

struct PagingUE_Identity {
    PagingUE_Identity_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NG_5G_S_TMSI ng_5G_S_TMSI; /**< ASN.1 ng-5G-S-TMSI */
        I_RNTI_Value fullI_RNTI; /**< ASN.1 fullI-RNTI */
    } u;
};


/**
 * @brief PagingRecord
 * @note ASN.1：PagingRecord；源文件第 832 行。
 * @note PagingRecord ::= SEQUENCE { ue-Identity, accessType }
 */
struct PagingRecord {
    PagingUE_Identity ue_Identity; /**< ASN.1 ue-Identity；结构体。 */
    bool has_accessType; /**< accessType 是否存在。 */
    PagingRecord_AccessType accessType; /**< ASN.1 accessType；枚举；OPTIONAL。 */
};


/**
 * @brief PagingRecord_v1700
 * @note ASN.1：PagingRecord-v1700；源文件第 838 行。
 * @note PagingRecord-v1700 ::= SEQUENCE { pagingCause-r17 }
 */
struct PagingRecord_v1700 {
    bool has_pagingCause_r17; /**< pagingCause-r17 是否存在。 */
    PagingRecord_v1700_PagingCause_r17 pagingCause_r17; /**< ASN.1 pagingCause-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PagingRecord_v1800
 * @note ASN.1：PagingRecord-v1800；源文件第 842 行。
 * @note PagingRecord-v1800 ::= SEQUENCE { mt-SDT }
 */
struct PagingRecord_v1800 {
    bool has_mt_SDT; /**< mt-SDT 是否存在。 */
    PagingRecord_v1800_Mt_SDT mt_SDT; /**< ASN.1 mt-SDT；枚举；OPTIONAL。 */
};


/**
 * @brief GroupPaging_r18
 * @note ASN.1：GroupPaging-r18；源文件第 852 行。
 * @note GroupPaging-r18 ::= SEQUENCE { inactiveReceptionAllowed-r18 }
 */
struct GroupPaging_r18 {
    bool has_inactiveReceptionAllowed_r18; /**< inactiveReceptionAllowed-r18 是否存在。 */
    GroupPaging_r18_InactiveReceptionAllowed_r18 inactiveReceptionAllowed_r18; /**< ASN.1 inactiveReceptionAllowed-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SL_L2RemoteUE_Config_r17_ExtGroup1
 * @note ASN.1：SL_L2RemoteUE_Config_r17_ExtGroup1；源文件第 22565 行。
 */
struct SL_L2RemoteUE_Config_r17_ExtGroup1 {
    bool has_sl_U2U_RelayUE_ToAddModList_r18; /**< sl-U2U-RelayUE-ToAddModList-r18 是否存在。 */
    SL_U2U_RelayUE_ToAddMod_r18* sl_U2U_RelayUE_ToAddModList_r18_items; /**< ASN.1 sl-U2U-RelayUE-ToAddModList-r18；SEQUENCE OF SL_U2U_RelayUE_ToAddMod_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_U2U_RelayUE_ToAddModList_r18_count; /**< sl-U2U-RelayUE-ToAddModList-r18 元素个数。 */
    bool has_sl_U2U_RelayUE_ToReleaseList_r18; /**< sl-U2U-RelayUE-ToReleaseList-r18 是否存在。 */
    SL_DestinationIdentity_r16* sl_U2U_RelayUE_ToReleaseList_r18_items; /**< ASN.1 sl-U2U-RelayUE-ToReleaseList-r18；SEQUENCE OF SL_DestinationIdentity_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_U2U_RelayUE_ToReleaseList_r18_count; /**< sl-U2U-RelayUE-ToReleaseList-r18 元素个数。 */
};


/**
 * @brief SL_SRAP_Config_r17
 * @note ASN.1：SL-SRAP-Config-r17；源文件第 23315 行。
 * @note SL-SRAP-Config-r17 ::= SEQUENCE { sl-LocalIdentity-r17, sl-MappingToAddModList-r17, sl-MappingToRele...
 */
struct SL_SRAP_Config_r17 {
    bool has_sl_LocalIdentity_r17; /**< sl-LocalIdentity-r17 是否存在。 */
    int64_t sl_LocalIdentity_r17; /**< ASN.1 sl-LocalIdentity-r17；INTEGER (0..255)，位宽 8 bit；OPTIONAL。 */
    bool has_sl_MappingToAddModList_r17; /**< sl-MappingToAddModList-r17 是否存在。 */
    SL_MappingToAddMod_r17* sl_MappingToAddModList_r17_items; /**< ASN.1 sl-MappingToAddModList-r17；SEQUENCE OF SL_MappingToAddMod_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MappingToAddModList_r17_count; /**< sl-MappingToAddModList-r17 元素个数。 */
    bool has_sl_MappingToReleaseList_r17; /**< sl-MappingToReleaseList-r17 是否存在。 */
    SL_RemoteUE_RB_Identity_r17* sl_MappingToReleaseList_r17_items; /**< ASN.1 sl-MappingToReleaseList-r17；SEQUENCE OF SL_RemoteUE_RB_Identity_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MappingToReleaseList_r17_count; /**< sl-MappingToReleaseList-r17 元素个数。 */
};


/**
 * @brief SL_L2RemoteUE_Config_r17
 * @note ASN.1：SL-L2RemoteUE-Config-r17；源文件第 22561 行。
 * @note SL-L2RemoteUE-Config-r17 ::= SEQUENCE { sl-SRAP-ConfigRemote-r17, sl-UEIdentityRemote-r17, sl-U2U-RelayUE-...
 */
struct SL_L2RemoteUE_Config_r17 {
    bool has_sl_SRAP_ConfigRemote_r17; /**< sl-SRAP-ConfigRemote-r17 是否存在。 */
    SL_SRAP_Config_r17 sl_SRAP_ConfigRemote_r17; /**< ASN.1 sl-SRAP-ConfigRemote-r17；结构体；OPTIONAL。 */
    bool has_sl_UEIdentityRemote_r17; /**< sl-UEIdentityRemote-r17 是否存在。 */
    RNTI_Value sl_UEIdentityRemote_r17; /**< ASN.1 sl-UEIdentityRemote-r17；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_L2RemoteUE_Config_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_L2RemoteUE_Config_r17
 * @note ASN.1：SetupRelease<SL-L2RemoteUE-Config-r17>；源文件第 874 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_L2RemoteUE_Config_r17_Tag {
    SetupRelease_SL_L2RemoteUE_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_L2RemoteUE_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_L2RemoteUE_Config_r17_Tag;

struct SetupRelease_SL_L2RemoteUE_Config_r17 {
    SetupRelease_SL_L2RemoteUE_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_L2RemoteUE_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRCReestablishment_v1700_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 875 行。
 * @note SEQUENCE { }
 */
struct RRCReestablishment_v1700_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReestablishment_v1700_IEs
 * @note ASN.1：RRCReestablishment-v1700-IEs；源文件第 873 行。
 * @note RRCReestablishment-v1700-IEs ::= SEQUENCE { sl-L2RemoteUE-Config-r17, nonCriticalExtension }
 */
struct RRCReestablishment_v1700_IEs {
    bool has_sl_L2RemoteUE_Config_r17; /**< sl-L2RemoteUE-Config-r17 是否存在。 */
    SetupRelease_SL_L2RemoteUE_Config_r17 sl_L2RemoteUE_Config_r17; /**< ASN.1 sl-L2RemoteUE-Config-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReestablishment_v1700_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReestablishment_IEs
 * @note ASN.1：RRCReestablishment-IEs；源文件第 867 行。
 * @note RRCReestablishment-IEs ::= SEQUENCE { nextHopChainingCount, lateNonCriticalExtension, nonCriticalExtensi...
 */
struct RRCReestablishment_IEs {
    NextHopChainingCount nextHopChainingCount; /**< ASN.1 nextHopChainingCount；INTEGER (0..7)，位宽 3 bit。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReestablishment_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReestablishment_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 863 行。
 * @note SEQUENCE { }
 */
struct RRCReestablishment_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReestablishment_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 861 行。
 * @note CHOICE { rrcReestablishment, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCReestablishment_CriticalExtensions_Tag {
    RRCReestablishment_CriticalExtensions_Tag_rrcReestablishment = 0, /**< ASN.1 rrcReestablishment */
    RRCReestablishment_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCReestablishment_CriticalExtensions_Tag;

struct RRCReestablishment_CriticalExtensions {
    RRCReestablishment_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReestablishment_IEs rrcReestablishment; /**< ASN.1 rrcReestablishment */
        RRCReestablishment_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCReestablishment
 * @note ASN.1：RRCReestablishment；源文件第 859 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_RRCReestablishment（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCReestablishment ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCReestablishment {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCReestablishment_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 902 行。
 * @note SEQUENCE { }
 */
struct RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReestablishmentComplete_v1800_IEs
 * @note ASN.1：RRCReestablishmentComplete-v1800-IEs；源文件第 899 行。
 * @note RRCReestablishmentComplete-v1800-IEs ::= SEQUENCE { flightPathInfoAvailable-r18, measConfigReportAppLayerAvailable-r18...
 */
struct RRCReestablishmentComplete_v1800_IEs {
    bool has_flightPathInfoAvailable_r18; /**< flightPathInfoAvailable-r18 是否存在。 */
    RRCReestablishmentComplete_v1800_IEs_FlightPathInfoAvailable_r18 flightPathInfoAvailable_r18; /**< ASN.1 flightPathInfoAvailable-r18；枚举；OPTIONAL。 */
    bool has_measConfigReportAppLayerAvailable_r18; /**< measConfigReportAppLayerAvailable-r18 是否存在。 */
    RRCReestablishmentComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 measConfigReportAppLayerAvailable_r18; /**< ASN.1 measConfigReportAppLayerAvailable-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReestablishmentComplete_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MeasurementsAvailable_r16_ExtGroup1
 * @note ASN.1：UE_MeasurementsAvailable_r16_ExtGroup1；源文件第 21824 行。
 */
struct UE_MeasurementsAvailable_r16_ExtGroup1 {
    bool has_successHO_InfoAvailable_r17; /**< successHO-InfoAvailable-r17 是否存在。 */
    UE_MeasurementsAvailable_r16_ExtGroup1_SuccessHO_InfoAvailable_r17 successHO_InfoAvailable_r17; /**< ASN.1 successHO-InfoAvailable-r17；枚举；OPTIONAL。 */
    bool has_sigLogMeasConfigAvailable_r17; /**< sigLogMeasConfigAvailable-r17 是否存在。 */
    bool sigLogMeasConfigAvailable_r17; /**< ASN.1 sigLogMeasConfigAvailable-r17；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief UE_MeasurementsAvailable_r16_ExtGroup2
 * @note ASN.1：UE_MeasurementsAvailable_r16_ExtGroup2；源文件第 21828 行。
 */
struct UE_MeasurementsAvailable_r16_ExtGroup2 {
    bool has_successPSCell_InfoAvailable_r18; /**< successPSCell-InfoAvailable-r18 是否存在。 */
    UE_MeasurementsAvailable_r16_ExtGroup2_SuccessPSCell_InfoAvailable_r18 successPSCell_InfoAvailable_r18; /**< ASN.1 successPSCell-InfoAvailable-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UE_MeasurementsAvailable_r16
 * @note ASN.1：UE-MeasurementsAvailable-r16；源文件第 21817 行。
 * @note UE-MeasurementsAvailable-r16 ::= SEQUENCE { logMeasAvailable-r16, logMeasAvailableBT-r16, logMeasAvailableWLAN...
 */
struct UE_MeasurementsAvailable_r16 {
    bool has_logMeasAvailable_r16; /**< logMeasAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16_LogMeasAvailable_r16 logMeasAvailable_r16; /**< ASN.1 logMeasAvailable-r16；枚举；OPTIONAL。 */
    bool has_logMeasAvailableBT_r16; /**< logMeasAvailableBT-r16 是否存在。 */
    UE_MeasurementsAvailable_r16_LogMeasAvailableBT_r16 logMeasAvailableBT_r16; /**< ASN.1 logMeasAvailableBT-r16；枚举；OPTIONAL。 */
    bool has_logMeasAvailableWLAN_r16; /**< logMeasAvailableWLAN-r16 是否存在。 */
    UE_MeasurementsAvailable_r16_LogMeasAvailableWLAN_r16 logMeasAvailableWLAN_r16; /**< ASN.1 logMeasAvailableWLAN-r16；枚举；OPTIONAL。 */
    bool has_connEstFailInfoAvailable_r16; /**< connEstFailInfoAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16_ConnEstFailInfoAvailable_r16 connEstFailInfoAvailable_r16; /**< ASN.1 connEstFailInfoAvailable-r16；枚举；OPTIONAL。 */
    bool has_rlf_InfoAvailable_r16; /**< rlf-InfoAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16_Rlf_InfoAvailable_r16 rlf_InfoAvailable_r16; /**< ASN.1 rlf-InfoAvailable-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    UE_MeasurementsAvailable_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    UE_MeasurementsAvailable_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RRCReestablishmentComplete_v1610_IEs
 * @note ASN.1：RRCReestablishmentComplete-v1610-IEs；源文件第 894 行。
 * @note RRCReestablishmentComplete-v1610-IEs ::= SEQUENCE { ue-MeasurementsAvailable-r16, nonCriticalExtension }
 */
struct RRCReestablishmentComplete_v1610_IEs {
    bool has_ue_MeasurementsAvailable_r16; /**< ue-MeasurementsAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16 ue_MeasurementsAvailable_r16; /**< ASN.1 ue-MeasurementsAvailable-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReestablishmentComplete_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReestablishmentComplete_IEs
 * @note ASN.1：RRCReestablishmentComplete-IEs；源文件第 889 行。
 * @note RRCReestablishmentComplete-IEs ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct RRCReestablishmentComplete_IEs {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReestablishmentComplete_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReestablishmentComplete_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 885 行。
 * @note SEQUENCE { }
 */
struct RRCReestablishmentComplete_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReestablishmentComplete_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 883 行。
 * @note CHOICE { rrcReestablishmentComplete, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCReestablishmentComplete_CriticalExtensions_Tag {
    RRCReestablishmentComplete_CriticalExtensions_Tag_rrcReestablishmentComplete = 0, /**< ASN.1 rrcReestablishmentComplete */
    RRCReestablishmentComplete_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCReestablishmentComplete_CriticalExtensions_Tag;

struct RRCReestablishmentComplete_CriticalExtensions {
    RRCReestablishmentComplete_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReestablishmentComplete_IEs rrcReestablishmentComplete; /**< ASN.1 rrcReestablishmentComplete */
        RRCReestablishmentComplete_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCReestablishmentComplete
 * @note ASN.1：RRCReestablishmentComplete；源文件第 881 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_RRCReestablishmentComplete（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCReestablishmentComplete ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCReestablishmentComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCReestablishmentComplete_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ReestabUE_Identity
 * @note ASN.1：ReestabUE-Identity；源文件第 919 行。
 * @note ReestabUE-Identity ::= SEQUENCE { c-RNTI, physCellId, shortMAC-I }
 */
struct ReestabUE_Identity {
    RNTI_Value c_RNTI; /**< ASN.1 c-RNTI；INTEGER (0..65535)，位宽 16 bit。 */
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit。 */
    ShortMAC_I shortMAC_I; /**< ASN.1 shortMAC-I；SIZE (16)，定长。 */
};


/**
 * @brief RRCReestablishmentRequest_IEs
 * @note ASN.1：RRCReestablishmentRequest-IEs；源文件第 913 行。
 * @note RRCReestablishmentRequest-IEs ::= SEQUENCE { ue-Identity, reestablishmentCause, spare }
 */
struct RRCReestablishmentRequest_IEs {
    ReestabUE_Identity ue_Identity; /**< ASN.1 ue-Identity；结构体。 */
    ReestablishmentCause reestablishmentCause; /**< ASN.1 reestablishmentCause；枚举。 */
    BitString spare; /**< ASN.1 spare；SIZE (1)，定长。 */
};


/**
 * @brief RRCReestablishmentRequest
 * @note ASN.1：RRCReestablishmentRequest；源文件第 909 行。
 * @note 实际消息：ChannelType_UL_CCCH；MessageKind_RRCReestablishmentRequest（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCReestablishmentRequest ::= SEQUENCE { rrcReestablishmentRequest }
 */
struct RRCReestablishmentRequest {
    RRCReestablishmentRequest_IEs rrcReestablishmentRequest; /**< ASN.1 rrcReestablishmentRequest；结构体。 */
};


/**
 * @brief CandidateServingFreqRangeListNR_r18
 * @note ASN.1：CandidateServingFreqRangeListNR-r18；源文件第 21765 行。
 * @note CandidateServingFreqRangeListNR-r18 ::= SEQUENCE OF (size 1..128) OF CandidateServingFreqRangeNR-r18
 */
struct CandidateServingFreqRangeListNR_r18 {
    CandidateServingFreqRangeNR_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IDC_FDM_AssistanceConfig_r18
 * @note ASN.1：IDC-FDM-AssistanceConfig-r18；源文件第 21760 行。
 * @note IDC-FDM-AssistanceConfig-r18 ::= SEQUENCE { candidateServingFreqRangeListNR-r18 }
 */
struct IDC_FDM_AssistanceConfig_r18 {
    bool has_candidateServingFreqRangeListNR_r18; /**< candidateServingFreqRangeListNR-r18 是否存在。 */
    CandidateServingFreqRangeListNR_r18 candidateServingFreqRangeListNR_r18; /**< ASN.1 candidateServingFreqRangeListNR-r18；SEQUENCE OF CandidateServingFreqRangeNR_r18，SIZE (1..128)；OPTIONAL。 */
};


/**
 * @brief SetupRelease_IDC_FDM_AssistanceConfig_r18
 * @note ASN.1：SetupRelease<IDC-FDM-AssistanceConfig-r18>；源文件第 21636 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag {
    SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag;

struct SetupRelease_IDC_FDM_AssistanceConfig_r18 {
    SetupRelease_IDC_FDM_AssistanceConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        IDC_FDM_AssistanceConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief IDC_AssistanceConfig_v1800
 * @note ASN.1：IDC-AssistanceConfig-v1800；源文件第 21635 行。
 * @note IDC-AssistanceConfig-v1800 ::= SEQUENCE { idc-FDM-AssistanceConfig-r18, idc-TDM-AssistanceConfig-r18 }
 */
struct IDC_AssistanceConfig_v1800 {
    bool has_idc_FDM_AssistanceConfig_r18; /**< idc-FDM-AssistanceConfig-r18 是否存在。 */
    SetupRelease_IDC_FDM_AssistanceConfig_r18 idc_FDM_AssistanceConfig_r18; /**< ASN.1 idc-FDM-AssistanceConfig-r18；结构体；OPTIONAL。 */
    bool has_idc_TDM_AssistanceConfig_r18; /**< idc-TDM-AssistanceConfig-r18 是否存在。 */
    IDC_AssistanceConfig_v1800_Idc_TDM_AssistanceConfig_r18 idc_TDM_AssistanceConfig_r18; /**< ASN.1 idc-TDM-AssistanceConfig-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_IDC_AssistanceConfig_v1800
 * @note ASN.1：SetupRelease<IDC-AssistanceConfig-v1800>；源文件第 21624 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_IDC_AssistanceConfig_v1800_Tag {
    SetupRelease_IDC_AssistanceConfig_v1800_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_IDC_AssistanceConfig_v1800_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_IDC_AssistanceConfig_v1800_Tag;

struct SetupRelease_IDC_AssistanceConfig_v1800 {
    SetupRelease_IDC_AssistanceConfig_v1800_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        IDC_AssistanceConfig_v1800 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MultiRx_PreferenceReportingConfigFR2_r18
 * @note ASN.1：MultiRx-PreferenceReportingConfigFR2-r18；源文件第 21640 行。
 * @note MultiRx-PreferenceReportingConfigFR2-r18 ::= SEQUENCE { multiRx-PreferenceReportingConfigFR2ProhibitTimer-r18 }
 */
struct MultiRx_PreferenceReportingConfigFR2_r18 {
    MultiRx_PreferenceReportingConfigFR2_r18_MultiRx_PreferenceReportingConfigFR2ProhibitTimer_r18 multiRx_PreferenceReportingConfigFR2ProhibitTimer_r18; /**< ASN.1 multiRx-PreferenceReportingConfigFR2ProhibitTimer-r18；枚举。 */
};


/**
 * @brief SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18
 * @note ASN.1：SetupRelease<MultiRx-PreferenceReportingConfigFR2-r18>；源文件第 21625 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag {
    SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag;

struct SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18 {
    SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MultiRx_PreferenceReportingConfigFR2_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_TrafficInfoReportingConfig_r18
 * @note ASN.1：UL-TrafficInfoReportingConfig-r18；源文件第 21774 行。
 * @note UL-TrafficInfoReportingConfig-r18 ::= SEQUENCE { pdu-SessionsToReportUL-TrafficInfoList-r18, ul-TrafficInfoProhibit...
 */
struct UL_TrafficInfoReportingConfig_r18 {
    PDU_SessionToReportUL_TrafficInfo_r18* pdu_SessionsToReportUL_TrafficInfoList_r18_items; /**< ASN.1 pdu-SessionsToReportUL-TrafficInfoList-r18；SEQUENCE OF PDU_SessionToReportUL_TrafficInfo_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pdu_SessionsToReportUL_TrafficInfoList_r18_count; /**< pdu-SessionsToReportUL-TrafficInfoList-r18 元素个数。 */
    UL_TrafficInfoReportingConfig_r18_Ul_TrafficInfoProhibitTimer_r18 ul_TrafficInfoProhibitTimer_r18; /**< ASN.1 ul-TrafficInfoProhibitTimer-r18；枚举。 */
};


/**
 * @brief SetupRelease_UL_TrafficInfoReportingConfig_r18
 * @note ASN.1：SetupRelease<UL-TrafficInfoReportingConfig-r18>；源文件第 21627 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag {
    SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag;

struct SetupRelease_UL_TrafficInfoReportingConfig_r18 {
    SetupRelease_UL_TrafficInfoReportingConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_TrafficInfoReportingConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SuccessPSCell_Config_r18
 * @note ASN.1：SuccessPSCell-Config-r18；源文件第 21672 行。
 * @note SuccessPSCell-Config-r18 ::= SEQUENCE { thresholdPercentageT304-SCG-r18, thresholdPercentageT310-SCG-r18, ...
 */
struct SuccessPSCell_Config_r18 {
    bool has_thresholdPercentageT304_SCG_r18; /**< thresholdPercentageT304-SCG-r18 是否存在。 */
    SuccessPSCell_Config_r18_ThresholdPercentageT304_SCG_r18 thresholdPercentageT304_SCG_r18; /**< ASN.1 thresholdPercentageT304-SCG-r18；枚举；OPTIONAL。 */
    bool has_thresholdPercentageT310_SCG_r18; /**< thresholdPercentageT310-SCG-r18 是否存在。 */
    SuccessPSCell_Config_r18_ThresholdPercentageT310_SCG_r18 thresholdPercentageT310_SCG_r18; /**< ASN.1 thresholdPercentageT310-SCG-r18；枚举；OPTIONAL。 */
    bool has_thresholdPercentageT312_SCG_r18; /**< thresholdPercentageT312-SCG-r18 是否存在。 */
    SuccessPSCell_Config_r18_ThresholdPercentageT312_SCG_r18 thresholdPercentageT312_SCG_r18; /**< ASN.1 thresholdPercentageT312-SCG-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SuccessPSCell_Config_r18
 * @note ASN.1：SetupRelease<SuccessPSCell-Config-r18>；源文件第 21629 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SuccessPSCell_Config_r18_Tag {
    SetupRelease_SuccessPSCell_Config_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SuccessPSCell_Config_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SuccessPSCell_Config_r18_Tag;

struct SetupRelease_SuccessPSCell_Config_r18 {
    SetupRelease_SuccessPSCell_Config_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SuccessPSCell_Config_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MUSIM_CandidateBandList_r18
 * @note ASN.1：MUSIM-CandidateBandList-r18；源文件第 21662 行。
 * @note MUSIM-CandidateBandList-r18 ::= SEQUENCE OF (size 1..8) OF FreqBandIndicatorNR
 */
struct MUSIM_CandidateBandList_r18 {
    FreqBandIndicatorNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_CapabilityRestrictionConfig_r18
 * @note ASN.1：MUSIM-CapabilityRestrictionConfig-r18；源文件第 21656 行。
 * @note MUSIM-CapabilityRestrictionConfig-r18 ::= SEQUENCE { musim-CandidateBandList-r18, musim-WaitTimer-r18, musim-ProhibitTi...
 */
struct MUSIM_CapabilityRestrictionConfig_r18 {
    bool has_musim_CandidateBandList_r18; /**< musim-CandidateBandList-r18 是否存在。 */
    MUSIM_CandidateBandList_r18 musim_CandidateBandList_r18; /**< ASN.1 musim-CandidateBandList-r18；SEQUENCE OF FreqBandIndicatorNR，SIZE (1..8)；OPTIONAL。 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_WaitTimer_r18 musim_WaitTimer_r18; /**< ASN.1 musim-WaitTimer-r18；枚举。 */
    MUSIM_CapabilityRestrictionConfig_r18_Musim_ProhibitTimer_r18 musim_ProhibitTimer_r18; /**< ASN.1 musim-ProhibitTimer-r18；枚举。 */
};


/**
 * @brief SetupRelease_MUSIM_CapabilityRestrictionConfig_r18
 * @note ASN.1：SetupRelease<MUSIM-CapabilityRestrictionConfig-r18>；源文件第 21632 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag {
    SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag;

struct SetupRelease_MUSIM_CapabilityRestrictionConfig_r18 {
    SetupRelease_MUSIM_CapabilityRestrictionConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MUSIM_CapabilityRestrictionConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OtherConfig_v1800
 * @note ASN.1：OtherConfig-v1800；源文件第 21623 行。
 * @note OtherConfig-v1800 ::= SEQUENCE { idc-AssistanceConfig-v1800, multiRx-PreferenceReportingConfigFR2-r...
 */
struct OtherConfig_v1800 {
    bool has_idc_AssistanceConfig_v1800; /**< idc-AssistanceConfig-v1800 是否存在。 */
    SetupRelease_IDC_AssistanceConfig_v1800 idc_AssistanceConfig_v1800; /**< ASN.1 idc-AssistanceConfig-v1800；结构体；OPTIONAL。 */
    bool has_multiRx_PreferenceReportingConfigFR2_r18; /**< multiRx-PreferenceReportingConfigFR2-r18 是否存在。 */
    SetupRelease_MultiRx_PreferenceReportingConfigFR2_r18 multiRx_PreferenceReportingConfigFR2_r18; /**< ASN.1 multiRx-PreferenceReportingConfigFR2-r18；结构体；OPTIONAL。 */
    bool has_aerial_FlightPathAvailabilityConfig_r18; /**< aerial-FlightPathAvailabilityConfig-r18 是否存在。 */
    OtherConfig_v1800_Aerial_FlightPathAvailabilityConfig_r18 aerial_FlightPathAvailabilityConfig_r18; /**< ASN.1 aerial-FlightPathAvailabilityConfig-r18；枚举；OPTIONAL。 */
    bool has_ul_TrafficInfoReportingConfig_r18; /**< ul-TrafficInfoReportingConfig-r18 是否存在。 */
    SetupRelease_UL_TrafficInfoReportingConfig_r18 ul_TrafficInfoReportingConfig_r18; /**< ASN.1 ul-TrafficInfoReportingConfig-r18；结构体；OPTIONAL。 */
    bool has_n3c_RelayUE_InfoReportConfig_r18; /**< n3c-RelayUE-InfoReportConfig-r18 是否存在。 */
    OtherConfig_v1800_N3c_RelayUE_InfoReportConfig_r18 n3c_RelayUE_InfoReportConfig_r18; /**< ASN.1 n3c-RelayUE-InfoReportConfig-r18；枚举；OPTIONAL。 */
    bool has_successPSCell_Config_r18; /**< successPSCell-Config-r18 是否存在。 */
    SetupRelease_SuccessPSCell_Config_r18 successPSCell_Config_r18; /**< ASN.1 successPSCell-Config-r18；结构体；OPTIONAL。 */
    bool has_sn_InitiatedPSCellChange_r18; /**< sn-InitiatedPSCellChange-r18 是否存在。 */
    OtherConfig_v1800_Sn_InitiatedPSCellChange_r18 sn_InitiatedPSCellChange_r18; /**< ASN.1 sn-InitiatedPSCellChange-r18；枚举；OPTIONAL。 */
    bool has_musim_GapPriorityAssistanceConfig_r18; /**< musim-GapPriorityAssistanceConfig-r18 是否存在。 */
    OtherConfig_v1800_Musim_GapPriorityAssistanceConfig_r18 musim_GapPriorityAssistanceConfig_r18; /**< ASN.1 musim-GapPriorityAssistanceConfig-r18；枚举；OPTIONAL。 */
    bool has_musim_CapabilityRestrictionConfig_r18; /**< musim-CapabilityRestrictionConfig-r18 是否存在。 */
    SetupRelease_MUSIM_CapabilityRestrictionConfig_r18 musim_CapabilityRestrictionConfig_r18; /**< ASN.1 musim-CapabilityRestrictionConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_FlightPathUpdateDistanceThr_r18
 * @note ASN.1：SetupRelease<FlightPathUpdateDistanceThr-r18>；源文件第 4277 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_FlightPathUpdateDistanceThr_r18_Tag {
    SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_FlightPathUpdateDistanceThr_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_FlightPathUpdateDistanceThr_r18_Tag;

struct SetupRelease_FlightPathUpdateDistanceThr_r18 {
    SetupRelease_FlightPathUpdateDistanceThr_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        FlightPathUpdateDistanceThr_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_FlightPathUpdateTimeThr_r18
 * @note ASN.1：SetupRelease<FlightPathUpdateTimeThr-r18>；源文件第 4278 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_FlightPathUpdateTimeThr_r18_Tag {
    SetupRelease_FlightPathUpdateTimeThr_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_FlightPathUpdateTimeThr_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_FlightPathUpdateTimeThr_r18_Tag;

struct SetupRelease_FlightPathUpdateTimeThr_r18 {
    SetupRelease_FlightPathUpdateTimeThr_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        FlightPathUpdateTimeThr_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief Aerial_Config_r18_FlightPathUpdateThrConfig_r18
 * @note ASN.1：flightPathUpdateThrConfig-r18；源文件第 4276 行。
 * @note SEQUENCE { flightPathUpdateDistanceThr-r18, flightPathUpdateTimeThr-r18 }
 */
struct Aerial_Config_r18_FlightPathUpdateThrConfig_r18 {
    bool has_flightPathUpdateDistanceThr_r18; /**< flightPathUpdateDistanceThr-r18 是否存在。 */
    SetupRelease_FlightPathUpdateDistanceThr_r18 flightPathUpdateDistanceThr_r18; /**< ASN.1 flightPathUpdateDistanceThr-r18；结构体；OPTIONAL。 */
    bool has_flightPathUpdateTimeThr_r18; /**< flightPathUpdateTimeThr-r18 是否存在。 */
    SetupRelease_FlightPathUpdateTimeThr_r18 flightPathUpdateTimeThr_r18; /**< ASN.1 flightPathUpdateTimeThr-r18；结构体；OPTIONAL。 */
};


/**
 * @brief Aerial_Config_r18
 * @note ASN.1：Aerial-Config-r18；源文件第 4275 行。
 * @note Aerial-Config-r18 ::= SEQUENCE { flightPathUpdateThrConfig-r18 }
 */
struct Aerial_Config_r18 {
    bool has_flightPathUpdateThrConfig_r18; /**< flightPathUpdateThrConfig-r18 是否存在。 */
    Aerial_Config_r18_FlightPathUpdateThrConfig_r18 flightPathUpdateThrConfig_r18; /**< ASN.1 flightPathUpdateThrConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_Aerial_Config_r18
 * @note ASN.1：SetupRelease<Aerial-Config-r18>；源文件第 1001 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_Aerial_Config_r18_Tag {
    SetupRelease_Aerial_Config_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_Aerial_Config_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_Aerial_Config_r18_Tag;

struct SetupRelease_Aerial_Config_r18 {
    SetupRelease_Aerial_Config_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        Aerial_Config_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_IndirectPathAddChange_r18
 * @note ASN.1：SL-IndirectPathAddChange-r18；源文件第 22433 行。
 * @note SL-IndirectPathAddChange-r18 ::= SEQUENCE { sl-IndirectPathRelayUE-Identity-r18, sl-IndirectPathCellIdentity-r...
 */
struct SL_IndirectPathAddChange_r18 {
    SL_SourceIdentity_r17 sl_IndirectPathRelayUE_Identity_r18; /**< ASN.1 sl-IndirectPathRelayUE-Identity-r18；SIZE (24)，定长。 */
    CellIdentity sl_IndirectPathCellIdentity_r18; /**< ASN.1 sl-IndirectPathCellIdentity-r18；SIZE (36)，定长。 */
    bool has_t421_r18; /**< t421-r18 是否存在。 */
    SL_IndirectPathAddChange_r18_T421_r18 t421_r18; /**< ASN.1 t421-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_IndirectPathAddChange_r18
 * @note ASN.1：SetupRelease<SL-IndirectPathAddChange-r18>；源文件第 1002 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_IndirectPathAddChange_r18_Tag {
    SetupRelease_SL_IndirectPathAddChange_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_IndirectPathAddChange_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_IndirectPathAddChange_r18_Tag;

struct SetupRelease_SL_IndirectPathAddChange_r18 {
    SetupRelease_SL_IndirectPathAddChange_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_IndirectPathAddChange_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18
 * @note ASN.1：n3c-CellGlobalId-r18；源文件第 8476 行。
 * @note SEQUENCE { n3c-PLMN-Id-r18, n3c-CellIdentity-r18 }
 */
struct N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18 {
    PLMN_Identity n3c_PLMN_Id_r18; /**< ASN.1 n3c-PLMN-Id-r18；结构体。 */
    CellIdentity n3c_CellIdentity_r18; /**< ASN.1 n3c-CellIdentity-r18；SIZE (36)，定长。 */
};


/**
 * @brief N3C_RelayUE_Info_r18
 * @note ASN.1：N3C-RelayUE-Info-r18；源文件第 8475 行。
 * @note N3C-RelayUE-Info-r18 ::= SEQUENCE { n3c-CellGlobalId-r18, n3c-C-RNTI-r18 }
 */
struct N3C_RelayUE_Info_r18 {
    N3C_RelayUE_Info_r18_N3c_CellGlobalId_r18 n3c_CellGlobalId_r18; /**< ASN.1 n3c-CellGlobalId-r18；结构体。 */
    RNTI_Value n3c_C_RNTI_r18; /**< ASN.1 n3c-C-RNTI-r18；INTEGER (0..65535)，位宽 16 bit。 */
};


/**
 * @brief N3C_IndirectPathAddChange_r18
 * @note ASN.1：N3C-IndirectPathAddChange-r18；源文件第 8467 行。
 * @note N3C-IndirectPathAddChange-r18 ::= SEQUENCE { n3c-RelayIdentification-r18 }
 */
struct N3C_IndirectPathAddChange_r18 {
    N3C_RelayUE_Info_r18 n3c_RelayIdentification_r18; /**< ASN.1 n3c-RelayIdentification-r18；结构体。 */
};


/**
 * @brief SetupRelease_N3C_IndirectPathAddChange_r18
 * @note ASN.1：SetupRelease<N3C-IndirectPathAddChange-r18>；源文件第 1003 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_N3C_IndirectPathAddChange_r18_Tag {
    SetupRelease_N3C_IndirectPathAddChange_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_N3C_IndirectPathAddChange_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_N3C_IndirectPathAddChange_r18_Tag;

struct SetupRelease_N3C_IndirectPathAddChange_r18 {
    SetupRelease_N3C_IndirectPathAddChange_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        N3C_IndirectPathAddChange_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief N3C_IndirectPathConfigRelay_r18
 * @note ASN.1：N3C-IndirectPathConfigRelay-r18；源文件第 8452 行。
 * @note N3C-IndirectPathConfigRelay-r18 ::= SEQUENCE { n3c-MappingToReleaseList-r18, n3c-MappingToAddModList-r18 }
 */
struct N3C_IndirectPathConfigRelay_r18 {
    bool has_n3c_MappingToReleaseList_r18; /**< n3c-MappingToReleaseList-r18 是否存在。 */
    SL_RemoteUE_RB_Identity_r17* n3c_MappingToReleaseList_r18_items; /**< ASN.1 n3c-MappingToReleaseList-r18；SEQUENCE OF SL_RemoteUE_RB_Identity_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t n3c_MappingToReleaseList_r18_count; /**< n3c-MappingToReleaseList-r18 元素个数。 */
    bool has_n3c_MappingToAddModList_r18; /**< n3c-MappingToAddModList-r18 是否存在。 */
    N3C_MappingConfig_r18* n3c_MappingToAddModList_r18_items; /**< ASN.1 n3c-MappingToAddModList-r18；SEQUENCE OF N3C_MappingConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t n3c_MappingToAddModList_r18_count; /**< n3c-MappingToAddModList-r18 元素个数。 */
};


/**
 * @brief SetupRelease_N3C_IndirectPathConfigRelay_r18
 * @note ASN.1：SetupRelease<N3C-IndirectPathConfigRelay-r18>；源文件第 1004 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag {
    SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag;

struct SetupRelease_N3C_IndirectPathConfigRelay_r18 {
    SetupRelease_N3C_IndirectPathConfigRelay_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        N3C_IndirectPathConfigRelay_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_PosResourceSetLinkedForAggBWList_r18
 * @note ASN.1：SRS-PosResourceSetLinkedForAggBWList-r18；源文件第 1067 行。
 * @note SRS-PosResourceSetLinkedForAggBWList-r18 ::= SEQUENCE OF (size 1..2) OF SRS-PosResourceSetLinkedForAggBW-r18
 */
struct SRS_PosResourceSetLinkedForAggBWList_r18 {
    SRS_PosResourceSetLinkedForAggBW_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18
 * @note ASN.1：SetupRelease<SRS-PosResourceSetLinkedForAggBWList-r18>；源文件第 1006 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag {
    SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag;

struct SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18 {
    SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosResourceSetLinkedForAggBWList_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_ReferenceConfiguration_r18
 * @note ASN.1：SetupRelease<ReferenceConfiguration-r18>；源文件第 5487 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_ReferenceConfiguration_r18_Tag {
    SetupRelease_ReferenceConfiguration_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_ReferenceConfiguration_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_ReferenceConfiguration_r18_Tag;

struct SetupRelease_ReferenceConfiguration_r18 {
    SetupRelease_ReferenceConfiguration_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RRCReconfiguration* setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief LTM_Config_r18
 * @note ASN.1：LTM-Config-r18；源文件第 7198 行。
 * @note LTM-Config-r18 ::= SEQUENCE { ltm-ReferenceConfiguration-r18, ltm-CandidateToReleaseList-r18, lt...
 */
struct LTM_Config_r18 {
    bool has_ltm_ReferenceConfiguration_r18; /**< ltm-ReferenceConfiguration-r18 是否存在。 */
    SetupRelease_ReferenceConfiguration_r18 ltm_ReferenceConfiguration_r18; /**< ASN.1 ltm-ReferenceConfiguration-r18；结构体；OPTIONAL。 */
    bool has_ltm_CandidateToReleaseList_r18; /**< ltm-CandidateToReleaseList-r18 是否存在。 */
    LTM_CandidateId_r18* ltm_CandidateToReleaseList_r18_items; /**< ASN.1 ltm-CandidateToReleaseList-r18；SEQUENCE OF LTM_CandidateId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_CandidateToReleaseList_r18_count; /**< ltm-CandidateToReleaseList-r18 元素个数。 */
    bool has_ltm_CandidateToAddModList_r18; /**< ltm-CandidateToAddModList-r18 是否存在。 */
    LTM_Candidate_r18* ltm_CandidateToAddModList_r18_items; /**< ASN.1 ltm-CandidateToAddModList-r18；SEQUENCE OF LTM_Candidate_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_CandidateToAddModList_r18_count; /**< ltm-CandidateToAddModList-r18 元素个数。 */
    bool has_ltm_ServingCellNoResetID_r18; /**< ltm-ServingCellNoResetID-r18 是否存在。 */
    int64_t ltm_ServingCellNoResetID_r18; /**< ASN.1 ltm-ServingCellNoResetID-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_ltm_CSI_ResourceConfigToAddModList_r18; /**< ltm-CSI-ResourceConfigToAddModList-r18 是否存在。 */
    LTM_CSI_ResourceConfig_r18* ltm_CSI_ResourceConfigToAddModList_r18_items; /**< ASN.1 ltm-CSI-ResourceConfigToAddModList-r18；SEQUENCE OF LTM_CSI_ResourceConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_CSI_ResourceConfigToAddModList_r18_count; /**< ltm-CSI-ResourceConfigToAddModList-r18 元素个数。 */
    bool has_ltm_CSI_ResourceConfigToReleaseList_r18; /**< ltm-CSI-ResourceConfigToReleaseList-r18 是否存在。 */
    LTM_CSI_ResourceConfigId_r18* ltm_CSI_ResourceConfigToReleaseList_r18_items; /**< ASN.1 ltm-CSI-ResourceConfigToReleaseList-r18；SEQUENCE OF LTM_CSI_ResourceConfigId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_CSI_ResourceConfigToReleaseList_r18_count; /**< ltm-CSI-ResourceConfigToReleaseList-r18 元素个数。 */
    bool has_attemptLTM_Switch_r18; /**< attemptLTM-Switch-r18 是否存在。 */
    LTM_Config_r18_AttemptLTM_Switch_r18 attemptLTM_Switch_r18; /**< ASN.1 attemptLTM-Switch-r18；枚举；OPTIONAL。 */
    bool has_ltm_ServingCellUE_MeasuredTA_ID_r18; /**< ltm-ServingCellUE-MeasuredTA-ID-r18 是否存在。 */
    int64_t ltm_ServingCellUE_MeasuredTA_ID_r18; /**< ASN.1 ltm-ServingCellUE-MeasuredTA-ID-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_LTM_Config_r18
 * @note ASN.1：SetupRelease<LTM-Config-r18>；源文件第 1007 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_LTM_Config_r18_Tag {
    SetupRelease_LTM_Config_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_LTM_Config_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_LTM_Config_r18_Tag;

struct SetupRelease_LTM_Config_r18 {
    SetupRelease_LTM_Config_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        LTM_Config_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRCReconfiguration_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1008 行。
 * @note SEQUENCE { }
 */
struct RRCReconfiguration_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReconfiguration_v1800_IEs
 * @note ASN.1：RRCReconfiguration-v1800-IEs；源文件第 999 行。
 * @note RRCReconfiguration-v1800-IEs ::= SEQUENCE { needForInterruptionConfigNR-r18, aerial-Config-r18, sl-IndirectPat...
 */
struct RRCReconfiguration_v1800_IEs {
    bool has_needForInterruptionConfigNR_r18; /**< needForInterruptionConfigNR-r18 是否存在。 */
    RRCReconfiguration_v1800_IEs_NeedForInterruptionConfigNR_r18 needForInterruptionConfigNR_r18; /**< ASN.1 needForInterruptionConfigNR-r18；枚举；OPTIONAL。 */
    bool has_aerial_Config_r18; /**< aerial-Config-r18 是否存在。 */
    SetupRelease_Aerial_Config_r18 aerial_Config_r18; /**< ASN.1 aerial-Config-r18；结构体；OPTIONAL。 */
    bool has_sl_IndirectPathAddChange_r18; /**< sl-IndirectPathAddChange-r18 是否存在。 */
    SetupRelease_SL_IndirectPathAddChange_r18 sl_IndirectPathAddChange_r18; /**< ASN.1 sl-IndirectPathAddChange-r18；结构体；OPTIONAL。 */
    bool has_n3c_IndirectPathAddChange_r18; /**< n3c-IndirectPathAddChange-r18 是否存在。 */
    SetupRelease_N3C_IndirectPathAddChange_r18 n3c_IndirectPathAddChange_r18; /**< ASN.1 n3c-IndirectPathAddChange-r18；结构体；OPTIONAL。 */
    bool has_n3c_IndirectPathConfigRelay_r18; /**< n3c-IndirectPathConfigRelay-r18 是否存在。 */
    SetupRelease_N3C_IndirectPathConfigRelay_r18 n3c_IndirectPathConfigRelay_r18; /**< ASN.1 n3c-IndirectPathConfigRelay-r18；结构体；OPTIONAL。 */
    bool has_otherConfig_v1800; /**< otherConfig-v1800 是否存在。 */
    OtherConfig_v1800 otherConfig_v1800; /**< ASN.1 otherConfig-v1800；结构体；OPTIONAL。 */
    bool has_srs_PosResourceSetLinkedForAggBWList_r18; /**< srs-PosResourceSetLinkedForAggBWList-r18 是否存在。 */
    SetupRelease_SRS_PosResourceSetLinkedForAggBWList_r18 srs_PosResourceSetLinkedForAggBWList_r18; /**< ASN.1 srs-PosResourceSetLinkedForAggBWList-r18；结构体；OPTIONAL。 */
    bool has_ltm_Config_r18; /**< ltm-Config-r18 是否存在。 */
    SetupRelease_LTM_Config_r18 ltm_Config_r18; /**< ASN.1 ltm-Config-r18；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief AppLayerMeasConfig_r17_ExtGroup1
 * @note ASN.1：AppLayerMeasConfig_r17_ExtGroup1；源文件第 21293 行。
 */
struct AppLayerMeasConfig_r17_ExtGroup1 {
    bool has_rrc_SegAllowedSRB5_r18; /**< rrc-SegAllowedSRB5-r18 是否存在。 */
    AppLayerMeasConfig_r17_ExtGroup1_Rrc_SegAllowedSRB5_r18 rrc_SegAllowedSRB5_r18; /**< ASN.1 rrc-SegAllowedSRB5-r18；枚举；OPTIONAL。 */
    bool has_idleInactiveReportAllowed_r18; /**< idleInactiveReportAllowed-r18 是否存在。 */
    AppLayerMeasConfig_r17_ExtGroup1_IdleInactiveReportAllowed_r18 idleInactiveReportAllowed_r18; /**< ASN.1 idleInactiveReportAllowed-r18；枚举；OPTIONAL。 */
};


/**
 * @brief AppLayerMeasConfig_r17
 * @note ASN.1：AppLayerMeasConfig-r17；源文件第 21288 行。
 * @note AppLayerMeasConfig-r17 ::= SEQUENCE { measConfigAppLayerToAddModList-r17, measConfigAppLayerToReleaseLis...
 */
struct AppLayerMeasConfig_r17 {
    bool has_measConfigAppLayerToAddModList_r17; /**< measConfigAppLayerToAddModList-r17 是否存在。 */
    MeasConfigAppLayer_r17* measConfigAppLayerToAddModList_r17_items; /**< ASN.1 measConfigAppLayerToAddModList-r17；SEQUENCE OF MeasConfigAppLayer_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measConfigAppLayerToAddModList_r17_count; /**< measConfigAppLayerToAddModList-r17 元素个数。 */
    bool has_measConfigAppLayerToReleaseList_r17; /**< measConfigAppLayerToReleaseList-r17 是否存在。 */
    MeasConfigAppLayerId_r17* measConfigAppLayerToReleaseList_r17_items; /**< ASN.1 measConfigAppLayerToReleaseList-r17；SEQUENCE OF MeasConfigAppLayerId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measConfigAppLayerToReleaseList_r17_count; /**< measConfigAppLayerToReleaseList-r17 元素个数。 */
    bool has_rrc_SegAllowedSRB4_r17; /**< rrc-SegAllowedSRB4-r17 是否存在。 */
    AppLayerMeasConfig_r17_Rrc_SegAllowedSRB4_r17 rrc_SegAllowedSRB4_r17; /**< ASN.1 rrc-SegAllowedSRB4-r17；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    AppLayerMeasConfig_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MUSIM_GapAssistanceConfig_r17
 * @note ASN.1：MUSIM-GapAssistanceConfig-r17；源文件第 21648 行。
 * @note MUSIM-GapAssistanceConfig-r17 ::= SEQUENCE { musim-GapProhibitTimer-r17 }
 */
struct MUSIM_GapAssistanceConfig_r17 {
    MUSIM_GapAssistanceConfig_r17_Musim_GapProhibitTimer_r17 musim_GapProhibitTimer_r17; /**< ASN.1 musim-GapProhibitTimer-r17；枚举。 */
};


/**
 * @brief SetupRelease_MUSIM_GapAssistanceConfig_r17
 * @note ASN.1：SetupRelease<MUSIM-GapAssistanceConfig-r17>；源文件第 21610 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag {
    SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag;

struct SetupRelease_MUSIM_GapAssistanceConfig_r17 {
    SetupRelease_MUSIM_GapAssistanceConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MUSIM_GapAssistanceConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MUSIM_LeaveAssistanceConfig_r17
 * @note ASN.1：MUSIM-LeaveAssistanceConfig-r17；源文件第 21652 行。
 * @note MUSIM-LeaveAssistanceConfig-r17 ::= SEQUENCE { musim-LeaveWithoutResponseTimer-r17 }
 */
struct MUSIM_LeaveAssistanceConfig_r17 {
    MUSIM_LeaveAssistanceConfig_r17_Musim_LeaveWithoutResponseTimer_r17 musim_LeaveWithoutResponseTimer_r17; /**< ASN.1 musim-LeaveWithoutResponseTimer-r17；枚举。 */
};


/**
 * @brief SetupRelease_MUSIM_LeaveAssistanceConfig_r17
 * @note ASN.1：SetupRelease<MUSIM-LeaveAssistanceConfig-r17>；源文件第 21611 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag {
    SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag;

struct SetupRelease_MUSIM_LeaveAssistanceConfig_r17 {
    SetupRelease_MUSIM_LeaveAssistanceConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MUSIM_LeaveAssistanceConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RLM_RelaxationReportingConfig_r17
 * @note ASN.1：RLM-RelaxationReportingConfig-r17；源文件第 21727 行。
 * @note RLM-RelaxationReportingConfig-r17 ::= SEQUENCE { rlm-RelaxtionReportingProhibitTimer }
 */
struct RLM_RelaxationReportingConfig_r17 {
    RLM_RelaxationReportingConfig_r17_Rlm_RelaxtionReportingProhibitTimer rlm_RelaxtionReportingProhibitTimer; /**< ASN.1 rlm-RelaxtionReportingProhibitTimer；枚举。 */
};


/**
 * @brief SetupRelease_RLM_RelaxationReportingConfig_r17
 * @note ASN.1：SetupRelease<RLM-RelaxationReportingConfig-r17>；源文件第 21616 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RLM_RelaxationReportingConfig_r17_Tag {
    SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RLM_RelaxationReportingConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RLM_RelaxationReportingConfig_r17_Tag;

struct SetupRelease_RLM_RelaxationReportingConfig_r17 {
    SetupRelease_RLM_RelaxationReportingConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RLM_RelaxationReportingConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BFD_RelaxationReportingConfig_r17
 * @note ASN.1：BFD-RelaxationReportingConfig-r17；源文件第 21732 行。
 * @note BFD-RelaxationReportingConfig-r17 ::= SEQUENCE { bfd-RelaxtionReportingProhibitTimer }
 */
struct BFD_RelaxationReportingConfig_r17 {
    BFD_RelaxationReportingConfig_r17_Bfd_RelaxtionReportingProhibitTimer bfd_RelaxtionReportingProhibitTimer; /**< ASN.1 bfd-RelaxtionReportingProhibitTimer；枚举。 */
};


/**
 * @brief SetupRelease_BFD_RelaxationReportingConfig_r17
 * @note ASN.1：SetupRelease<BFD-RelaxationReportingConfig-r17>；源文件第 21617 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BFD_RelaxationReportingConfig_r17_Tag {
    SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BFD_RelaxationReportingConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BFD_RelaxationReportingConfig_r17_Tag;

struct SetupRelease_BFD_RelaxationReportingConfig_r17 {
    SetupRelease_BFD_RelaxationReportingConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BFD_RelaxationReportingConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SCG_DeactivationPreferenceConfig_r17
 * @note ASN.1：SCG-DeactivationPreferenceConfig-r17；源文件第 21737 行。
 * @note SCG-DeactivationPreferenceConfig-r17 ::= SEQUENCE { scg-DeactivationPreferenceProhibitTimer-r17 }
 */
struct SCG_DeactivationPreferenceConfig_r17 {
    SCG_DeactivationPreferenceConfig_r17_Scg_DeactivationPreferenceProhibitTimer_r17 scg_DeactivationPreferenceProhibitTimer_r17; /**< ASN.1 scg-DeactivationPreferenceProhibitTimer-r17；枚举。 */
};


/**
 * @brief SetupRelease_SCG_DeactivationPreferenceConfig_r17
 * @note ASN.1：SetupRelease<SCG-DeactivationPreferenceConfig-r17>；源文件第 21618 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag {
    SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag;

struct SetupRelease_SCG_DeactivationPreferenceConfig_r17 {
    SetupRelease_SCG_DeactivationPreferenceConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SCG_DeactivationPreferenceConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRM_MeasRelaxationReportingConfig_r17
 * @note ASN.1：RRM-MeasRelaxationReportingConfig-r17；源文件第 21743 行。
 * @note RRM-MeasRelaxationReportingConfig-r17 ::= SEQUENCE { s-SearchDeltaP-Stationary-r17, t-SearchDeltaP-Stationary-r17 }
 */
struct RRM_MeasRelaxationReportingConfig_r17 {
    RRM_MeasRelaxationReportingConfig_r17_S_SearchDeltaP_Stationary_r17 s_SearchDeltaP_Stationary_r17; /**< ASN.1 s-SearchDeltaP-Stationary-r17；枚举。 */
    RRM_MeasRelaxationReportingConfig_r17_T_SearchDeltaP_Stationary_r17 t_SearchDeltaP_Stationary_r17; /**< ASN.1 t-SearchDeltaP-Stationary-r17；枚举。 */
};


/**
 * @brief SetupRelease_RRM_MeasRelaxationReportingConfig_r17
 * @note ASN.1：SetupRelease<RRM-MeasRelaxationReportingConfig-r17>；源文件第 21619 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag {
    SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag;

struct SetupRelease_RRM_MeasRelaxationReportingConfig_r17 {
    SetupRelease_RRM_MeasRelaxationReportingConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RRM_MeasRelaxationReportingConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PropDelayDiffReportConfig_r17
 * @note ASN.1：PropDelayDiffReportConfig-r17；源文件第 21749 行。
 * @note PropDelayDiffReportConfig-r17 ::= SEQUENCE { threshPropDelayDiff-r17, neighCellInfoList-r17 }
 */
struct PropDelayDiffReportConfig_r17 {
    bool has_threshPropDelayDiff_r17; /**< threshPropDelayDiff-r17 是否存在。 */
    PropDelayDiffReportConfig_r17_ThreshPropDelayDiff_r17 threshPropDelayDiff_r17; /**< ASN.1 threshPropDelayDiff-r17；枚举；OPTIONAL。 */
    bool has_neighCellInfoList_r17; /**< neighCellInfoList-r17 是否存在。 */
    NeighbourCellInfo_r17* neighCellInfoList_r17_items; /**< ASN.1 neighCellInfoList-r17；SEQUENCE OF NeighbourCellInfo_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t neighCellInfoList_r17_count; /**< neighCellInfoList-r17 元素个数。 */
};


/**
 * @brief SetupRelease_PropDelayDiffReportConfig_r17
 * @note ASN.1：SetupRelease<PropDelayDiffReportConfig-r17>；源文件第 21620 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PropDelayDiffReportConfig_r17_Tag {
    SetupRelease_PropDelayDiffReportConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PropDelayDiffReportConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PropDelayDiffReportConfig_r17_Tag;

struct SetupRelease_PropDelayDiffReportConfig_r17 {
    SetupRelease_PropDelayDiffReportConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PropDelayDiffReportConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OtherConfig_v1700
 * @note ASN.1：OtherConfig-v1700；源文件第 21608 行。
 * @note OtherConfig-v1700 ::= SEQUENCE { ul-GapFR2-PreferenceConfig-r17, musim-GapAssistanceConfig-r17, mus...
 */
struct OtherConfig_v1700 {
    bool has_ul_GapFR2_PreferenceConfig_r17; /**< ul-GapFR2-PreferenceConfig-r17 是否存在。 */
    OtherConfig_v1700_Ul_GapFR2_PreferenceConfig_r17 ul_GapFR2_PreferenceConfig_r17; /**< ASN.1 ul-GapFR2-PreferenceConfig-r17；枚举；OPTIONAL。 */
    bool has_musim_GapAssistanceConfig_r17; /**< musim-GapAssistanceConfig-r17 是否存在。 */
    SetupRelease_MUSIM_GapAssistanceConfig_r17 musim_GapAssistanceConfig_r17; /**< ASN.1 musim-GapAssistanceConfig-r17；结构体；OPTIONAL。 */
    bool has_musim_LeaveAssistanceConfig_r17; /**< musim-LeaveAssistanceConfig-r17 是否存在。 */
    SetupRelease_MUSIM_LeaveAssistanceConfig_r17 musim_LeaveAssistanceConfig_r17; /**< ASN.1 musim-LeaveAssistanceConfig-r17；结构体；OPTIONAL。 */
    bool has_successHO_Config_r17; /**< successHO-Config-r17 是否存在。 */
    SetupRelease_SuccessHO_Config_r17 successHO_Config_r17; /**< ASN.1 successHO-Config-r17；结构体；OPTIONAL。 */
    bool has_maxBW_PreferenceConfigFR2_2_r17; /**< maxBW-PreferenceConfigFR2-2-r17 是否存在。 */
    OtherConfig_v1700_MaxBW_PreferenceConfigFR2_2_r17 maxBW_PreferenceConfigFR2_2_r17; /**< ASN.1 maxBW-PreferenceConfigFR2-2-r17；枚举；OPTIONAL。 */
    bool has_maxMIMO_LayerPreferenceConfigFR2_2_r17; /**< maxMIMO-LayerPreferenceConfigFR2-2-r17 是否存在。 */
    OtherConfig_v1700_MaxMIMO_LayerPreferenceConfigFR2_2_r17 maxMIMO_LayerPreferenceConfigFR2_2_r17; /**< ASN.1 maxMIMO-LayerPreferenceConfigFR2-2-r17；枚举；OPTIONAL。 */
    bool has_minSchedulingOffsetPreferenceConfigExt_r17; /**< minSchedulingOffsetPreferenceConfigExt-r17 是否存在。 */
    OtherConfig_v1700_MinSchedulingOffsetPreferenceConfigExt_r17 minSchedulingOffsetPreferenceConfigExt_r17; /**< ASN.1 minSchedulingOffsetPreferenceConfigExt-r17；枚举；OPTIONAL。 */
    bool has_rlm_RelaxationReportingConfig_r17; /**< rlm-RelaxationReportingConfig-r17 是否存在。 */
    SetupRelease_RLM_RelaxationReportingConfig_r17 rlm_RelaxationReportingConfig_r17; /**< ASN.1 rlm-RelaxationReportingConfig-r17；结构体；OPTIONAL。 */
    bool has_bfd_RelaxationReportingConfig_r17; /**< bfd-RelaxationReportingConfig-r17 是否存在。 */
    SetupRelease_BFD_RelaxationReportingConfig_r17 bfd_RelaxationReportingConfig_r17; /**< ASN.1 bfd-RelaxationReportingConfig-r17；结构体；OPTIONAL。 */
    bool has_scg_DeactivationPreferenceConfig_r17; /**< scg-DeactivationPreferenceConfig-r17 是否存在。 */
    SetupRelease_SCG_DeactivationPreferenceConfig_r17 scg_DeactivationPreferenceConfig_r17; /**< ASN.1 scg-DeactivationPreferenceConfig-r17；结构体；OPTIONAL。 */
    bool has_rrm_MeasRelaxationReportingConfig_r17; /**< rrm-MeasRelaxationReportingConfig-r17 是否存在。 */
    SetupRelease_RRM_MeasRelaxationReportingConfig_r17 rrm_MeasRelaxationReportingConfig_r17; /**< ASN.1 rrm-MeasRelaxationReportingConfig-r17；结构体；OPTIONAL。 */
    bool has_propDelayDiffReportConfig_r17; /**< propDelayDiffReportConfig-r17 是否存在。 */
    SetupRelease_PropDelayDiffReportConfig_r17 propDelayDiffReportConfig_r17; /**< ASN.1 propDelayDiffReportConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_L2RelayUE_Config_r17_ExtGroup1
 * @note ASN.1：SL_L2RelayUE_Config_r17_ExtGroup1；源文件第 22533 行。
 */
struct SL_L2RelayUE_Config_r17_ExtGroup1 {
    bool has_sl_U2U_RemoteUE_ToAddModList_r18; /**< sl-U2U-RemoteUE-ToAddModList-r18 是否存在。 */
    SL_U2U_RemoteUE_ToAddMod_r18* sl_U2U_RemoteUE_ToAddModList_r18_items; /**< ASN.1 sl-U2U-RemoteUE-ToAddModList-r18；SEQUENCE OF SL_U2U_RemoteUE_ToAddMod_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_U2U_RemoteUE_ToAddModList_r18_count; /**< sl-U2U-RemoteUE-ToAddModList-r18 元素个数。 */
    bool has_sl_U2U_RemoteUE_ToReleaseList_r18; /**< sl-U2U-RemoteUE-ToReleaseList-r18 是否存在。 */
    SL_DestinationIdentity_r16* sl_U2U_RemoteUE_ToReleaseList_r18_items; /**< ASN.1 sl-U2U-RemoteUE-ToReleaseList-r18；SEQUENCE OF SL_DestinationIdentity_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_U2U_RemoteUE_ToReleaseList_r18_count; /**< sl-U2U-RemoteUE-ToReleaseList-r18 元素个数。 */
};


/**
 * @brief SL_L2RelayUE_Config_r17
 * @note ASN.1：SL-L2RelayUE-Config-r17；源文件第 22529 行。
 * @note SL-L2RelayUE-Config-r17 ::= SEQUENCE { sl-RemoteUE-ToAddModList-r17, sl-RemoteUE-ToReleaseList-r17, sl-U2...
 */
struct SL_L2RelayUE_Config_r17 {
    bool has_sl_RemoteUE_ToAddModList_r17; /**< sl-RemoteUE-ToAddModList-r17 是否存在。 */
    SL_RemoteUE_ToAddMod_r17* sl_RemoteUE_ToAddModList_r17_items; /**< ASN.1 sl-RemoteUE-ToAddModList-r17；SEQUENCE OF SL_RemoteUE_ToAddMod_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RemoteUE_ToAddModList_r17_count; /**< sl-RemoteUE-ToAddModList-r17 元素个数。 */
    bool has_sl_RemoteUE_ToReleaseList_r17; /**< sl-RemoteUE-ToReleaseList-r17 是否存在。 */
    SL_DestinationIdentity_r16* sl_RemoteUE_ToReleaseList_r17_items; /**< ASN.1 sl-RemoteUE-ToReleaseList-r17；SEQUENCE OF SL_DestinationIdentity_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RemoteUE_ToReleaseList_r17_count; /**< sl-RemoteUE-ToReleaseList-r17 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_L2RelayUE_Config_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_L2RelayUE_Config_r17
 * @note ASN.1：SetupRelease<SL-L2RelayUE-Config-r17>；源文件第 986 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_L2RelayUE_Config_r17_Tag {
    SetupRelease_SL_L2RelayUE_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_L2RelayUE_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_L2RelayUE_Config_r17_Tag;

struct SetupRelease_SL_L2RelayUE_Config_r17 {
    SetupRelease_SL_L2RelayUE_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_L2RelayUE_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief NeedForGapNCSG_ConfigNR_r17
 * @note ASN.1：NeedForGapNCSG-ConfigNR-r17；源文件第 8688 行。
 * @note NeedForGapNCSG-ConfigNR-r17 ::= SEQUENCE { requestedTargetBandFilterNCSG-NR-r17 }
 */
struct NeedForGapNCSG_ConfigNR_r17 {
    bool has_requestedTargetBandFilterNCSG_NR_r17; /**< requestedTargetBandFilterNCSG-NR-r17 是否存在。 */
    FreqBandIndicatorNR* requestedTargetBandFilterNCSG_NR_r17_items; /**< ASN.1 requestedTargetBandFilterNCSG-NR-r17；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t requestedTargetBandFilterNCSG_NR_r17_count; /**< requestedTargetBandFilterNCSG-NR-r17 元素个数。 */
};


/**
 * @brief SetupRelease_NeedForGapNCSG_ConfigNR_r17
 * @note ASN.1：SetupRelease<NeedForGapNCSG-ConfigNR-r17>；源文件第 989 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag {
    SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag;

struct SetupRelease_NeedForGapNCSG_ConfigNR_r17 {
    SetupRelease_NeedForGapNCSG_ConfigNR_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NeedForGapNCSG_ConfigNR_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief NeedForGapNCSG_ConfigEUTRA_r17
 * @note ASN.1：NeedForGapNCSG-ConfigEUTRA-r17；源文件第 8681 行。
 * @note NeedForGapNCSG-ConfigEUTRA-r17 ::= SEQUENCE { requestedTargetBandFilterNCSG-EUTRA-r17 }
 */
struct NeedForGapNCSG_ConfigEUTRA_r17 {
    bool has_requestedTargetBandFilterNCSG_EUTRA_r17; /**< requestedTargetBandFilterNCSG-EUTRA-r17 是否存在。 */
    FreqBandIndicatorEUTRA* requestedTargetBandFilterNCSG_EUTRA_r17_items; /**< ASN.1 requestedTargetBandFilterNCSG-EUTRA-r17；SEQUENCE OF FreqBandIndicatorEUTRA，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t requestedTargetBandFilterNCSG_EUTRA_r17_count; /**< requestedTargetBandFilterNCSG-EUTRA-r17 元素个数。 */
};


/**
 * @brief SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17
 * @note ASN.1：SetupRelease<NeedForGapNCSG-ConfigEUTRA-r17>；源文件第 990 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag {
    SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag;

struct SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17 {
    SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NeedForGapNCSG_ConfigEUTRA_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MUSIM_GapConfig_r17_ExtGroup1
 * @note ASN.1：MUSIM_GapConfig_r17_ExtGroup1；源文件第 8408 行。
 */
struct MUSIM_GapConfig_r17_ExtGroup1 {
    bool has_musim_GapPriorityToAddModListExt_v1800; /**< musim-GapPriorityToAddModListExt-v1800 是否存在。 */
    GapPriority_r17* musim_GapPriorityToAddModListExt_v1800_items; /**< ASN.1 musim-GapPriorityToAddModListExt-v1800；SEQUENCE OF GapPriority_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t musim_GapPriorityToAddModListExt_v1800_count; /**< musim-GapPriorityToAddModListExt-v1800 元素个数。 */
    bool has_musim_GapKeep_r18; /**< musim-GapKeep-r18 是否存在。 */
    MUSIM_GapConfig_r17_ExtGroup1_Musim_GapKeep_r18 musim_GapKeep_r18; /**< ASN.1 musim-GapKeep-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MUSIM_Starting_SFN_AndSubframe_r17
 * @note ASN.1：MUSIM-Starting-SFN-AndSubframe-r17；源文件第 8444 行。
 * @note MUSIM-Starting-SFN-AndSubframe-r17 ::= SEQUENCE { starting-SFN-r17, startingSubframe-r17 }
 */
struct MUSIM_Starting_SFN_AndSubframe_r17 {
    int64_t starting_SFN_r17; /**< ASN.1 starting-SFN-r17；INTEGER (0..1023)，位宽 10 bit。 */
    int64_t startingSubframe_r17; /**< ASN.1 startingSubframe-r17；INTEGER (0..9)，位宽 4 bit。 */
};


/**
 * @brief MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17
 * @note ASN.1：musim-GapRepetitionAndOffset-r17；源文件第 8430 行。
 * @note CHOICE { ms20-r17, ms40-r17, ms80-r17, ms160-r17, ms320-r17, ms640-r17, ms128...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag {
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms20_r17 = 0, /**< ASN.1 ms20-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms40_r17 = 1, /**< ASN.1 ms40-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms80_r17 = 2, /**< ASN.1 ms80-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms160_r17 = 3, /**< ASN.1 ms160-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms320_r17 = 4, /**< ASN.1 ms320-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms640_r17 = 5, /**< ASN.1 ms640-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms1280_r17 = 6, /**< ASN.1 ms1280-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms2560_r17 = 7, /**< ASN.1 ms2560-r17 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag_ms5120_r17 = 8, /**< ASN.1 ms5120-r17 */
} MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag;

struct MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17 {
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms20_r17; /**< ASN.1 ms20-r17 */
        int64_t ms40_r17; /**< ASN.1 ms40-r17 */
        int64_t ms80_r17; /**< ASN.1 ms80-r17 */
        int64_t ms160_r17; /**< ASN.1 ms160-r17 */
        int64_t ms320_r17; /**< ASN.1 ms320-r17 */
        int64_t ms640_r17; /**< ASN.1 ms640-r17 */
        int64_t ms1280_r17; /**< ASN.1 ms1280-r17 */
        int64_t ms2560_r17; /**< ASN.1 ms2560-r17 */
        int64_t ms5120_r17; /**< ASN.1 ms5120-r17 */
    } u;
};


/**
 * @brief MUSIM_GapInfo_r17
 * @note ASN.1：MUSIM-GapInfo-r17；源文件第 8427 行。
 * @note MUSIM-GapInfo-r17 ::= SEQUENCE { musim-Starting-SFN-AndSubframe-r17, musim-GapLength-r17, musim-Gap...
 */
struct MUSIM_GapInfo_r17 {
    bool has_musim_Starting_SFN_AndSubframe_r17; /**< musim-Starting-SFN-AndSubframe-r17 是否存在。 */
    MUSIM_Starting_SFN_AndSubframe_r17 musim_Starting_SFN_AndSubframe_r17; /**< ASN.1 musim-Starting-SFN-AndSubframe-r17；结构体；OPTIONAL。 */
    bool has_musim_GapLength_r17; /**< musim-GapLength-r17 是否存在。 */
    MUSIM_GapInfo_r17_Musim_GapLength_r17 musim_GapLength_r17; /**< ASN.1 musim-GapLength-r17；枚举；OPTIONAL。 */
    bool has_musim_GapRepetitionAndOffset_r17; /**< musim-GapRepetitionAndOffset-r17 是否存在。 */
    MUSIM_GapInfo_r17_Musim_GapRepetitionAndOffset_r17 musim_GapRepetitionAndOffset_r17; /**< ASN.1 musim-GapRepetitionAndOffset-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MUSIM_GapConfig_r17
 * @note ASN.1：MUSIM-GapConfig-r17；源文件第 8403 行。
 * @note MUSIM-GapConfig-r17 ::= SEQUENCE { musim-GapToReleaseList-r17, musim-GapToAddModList-r17, musim-Aperi...
 */
struct MUSIM_GapConfig_r17 {
    bool has_musim_GapToReleaseList_r17; /**< musim-GapToReleaseList-r17 是否存在。 */
    MUSIM_GapId_r17* musim_GapToReleaseList_r17_items; /**< ASN.1 musim-GapToReleaseList-r17；SEQUENCE OF MUSIM_GapId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t musim_GapToReleaseList_r17_count; /**< musim-GapToReleaseList-r17 元素个数。 */
    bool has_musim_GapToAddModList_r17; /**< musim-GapToAddModList-r17 是否存在。 */
    MUSIM_Gap_r17* musim_GapToAddModList_r17_items; /**< ASN.1 musim-GapToAddModList-r17；SEQUENCE OF MUSIM_Gap_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t musim_GapToAddModList_r17_count; /**< musim-GapToAddModList-r17 元素个数。 */
    bool has_musim_AperiodicGap_r17; /**< musim-AperiodicGap-r17 是否存在。 */
    MUSIM_GapInfo_r17 musim_AperiodicGap_r17; /**< ASN.1 musim-AperiodicGap-r17；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MUSIM_GapConfig_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_MUSIM_GapConfig_r17
 * @note ASN.1：SetupRelease<MUSIM-GapConfig-r17>；源文件第 991 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MUSIM_GapConfig_r17_Tag {
    SetupRelease_MUSIM_GapConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MUSIM_GapConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MUSIM_GapConfig_r17_Tag;

struct SetupRelease_MUSIM_GapConfig_r17 {
    SetupRelease_MUSIM_GapConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MUSIM_GapConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_GapFR2_Config_r17
 * @note ASN.1：UL-GapFR2-Config-r17；源文件第 13913 行。
 * @note UL-GapFR2-Config-r17 ::= SEQUENCE { gapOffset-r17, ugl-r17, ugrp-r17, refFR2-ServCellAsyncCA-r17 }
 */
struct UL_GapFR2_Config_r17 {
    int64_t gapOffset_r17; /**< ASN.1 gapOffset-r17；INTEGER (0..159)，位宽 8 bit。 */
    UL_GapFR2_Config_r17_Ugl_r17 ugl_r17; /**< ASN.1 ugl-r17；枚举。 */
    UL_GapFR2_Config_r17_Ugrp_r17 ugrp_r17; /**< ASN.1 ugrp-r17；枚举。 */
    bool has_refFR2_ServCellAsyncCA_r17; /**< refFR2-ServCellAsyncCA-r17 是否存在。 */
    ServCellIndex refFR2_ServCellAsyncCA_r17; /**< ASN.1 refFR2-ServCellAsyncCA-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_UL_GapFR2_Config_r17
 * @note ASN.1：SetupRelease<UL-GapFR2-Config-r17>；源文件第 992 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_GapFR2_Config_r17_Tag {
    SetupRelease_UL_GapFR2_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_GapFR2_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_GapFR2_Config_r17_Tag;

struct SetupRelease_UL_GapFR2_Config_r17 {
    SetupRelease_UL_GapFR2_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_GapFR2_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UE_TxTEG_RequestUL_TDOA_Config_r17
 * @note ASN.1：UE-TxTEG-RequestUL-TDOA-Config-r17；源文件第 1062 行。
 * @note UE-TxTEG-RequestUL-TDOA-Config-r17 ::= CHOICE { oneShot-r17, periodicReporting-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UE_TxTEG_RequestUL_TDOA_Config_r17_Tag {
    UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_oneShot_r17 = 0, /**< ASN.1 oneShot-r17 */
    UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_periodicReporting_r17 = 1, /**< ASN.1 periodicReporting-r17 */
} UE_TxTEG_RequestUL_TDOA_Config_r17_Tag;

struct UE_TxTEG_RequestUL_TDOA_Config_r17 {
    UE_TxTEG_RequestUL_TDOA_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null oneShot_r17; /**< ASN.1 oneShot-r17 */
        UE_TxTEG_RequestUL_TDOA_Config_r17_PeriodicReporting_r17 periodicReporting_r17; /**< ASN.1 periodicReporting-r17 */
    } u;
};


/**
 * @brief SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17
 * @note ASN.1：SetupRelease<UE-TxTEG-RequestUL-TDOA-Config-r17>；源文件第 995 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag {
    SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag;

struct SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17 {
    SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UE_TxTEG_RequestUL_TDOA_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRCReconfiguration_v1700_IEs
 * @note ASN.1：RRCReconfiguration-v1700-IEs；源文件第 984 行。
 * @note RRCReconfiguration-v1700-IEs ::= SEQUENCE { otherConfig-v1700, sl-L2RelayUE-Config-r17, sl-L2RemoteUE-Config-r...
 */
struct RRCReconfiguration_v1700_IEs {
    bool has_otherConfig_v1700; /**< otherConfig-v1700 是否存在。 */
    OtherConfig_v1700 otherConfig_v1700; /**< ASN.1 otherConfig-v1700；结构体；OPTIONAL。 */
    bool has_sl_L2RelayUE_Config_r17; /**< sl-L2RelayUE-Config-r17 是否存在。 */
    SetupRelease_SL_L2RelayUE_Config_r17 sl_L2RelayUE_Config_r17; /**< ASN.1 sl-L2RelayUE-Config-r17；结构体；OPTIONAL。 */
    bool has_sl_L2RemoteUE_Config_r17; /**< sl-L2RemoteUE-Config-r17 是否存在。 */
    SetupRelease_SL_L2RemoteUE_Config_r17 sl_L2RemoteUE_Config_r17; /**< ASN.1 sl-L2RemoteUE-Config-r17；结构体；OPTIONAL。 */
    Paging* dedicatedPagingDelivery_r17; /**< ASN.1 dedicatedPagingDelivery-r17；OCTET STRING (CONTAINING Paging)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_needForGapNCSG_ConfigNR_r17; /**< needForGapNCSG-ConfigNR-r17 是否存在。 */
    SetupRelease_NeedForGapNCSG_ConfigNR_r17 needForGapNCSG_ConfigNR_r17; /**< ASN.1 needForGapNCSG-ConfigNR-r17；结构体；OPTIONAL。 */
    bool has_needForGapNCSG_ConfigEUTRA_r17; /**< needForGapNCSG-ConfigEUTRA-r17 是否存在。 */
    SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17 needForGapNCSG_ConfigEUTRA_r17; /**< ASN.1 needForGapNCSG-ConfigEUTRA-r17；结构体；OPTIONAL。 */
    bool has_musim_GapConfig_r17; /**< musim-GapConfig-r17 是否存在。 */
    SetupRelease_MUSIM_GapConfig_r17 musim_GapConfig_r17; /**< ASN.1 musim-GapConfig-r17；结构体；OPTIONAL。 */
    bool has_ul_GapFR2_Config_r17; /**< ul-GapFR2-Config-r17 是否存在。 */
    SetupRelease_UL_GapFR2_Config_r17 ul_GapFR2_Config_r17; /**< ASN.1 ul-GapFR2-Config-r17；结构体；OPTIONAL。 */
    bool has_scg_State_r17; /**< scg-State-r17 是否存在。 */
    RRCReconfiguration_v1700_IEs_Scg_State_r17 scg_State_r17; /**< ASN.1 scg-State-r17；枚举；OPTIONAL。 */
    bool has_appLayerMeasConfig_r17; /**< appLayerMeasConfig-r17 是否存在。 */
    AppLayerMeasConfig_r17 appLayerMeasConfig_r17; /**< ASN.1 appLayerMeasConfig-r17；结构体；OPTIONAL。 */
    bool has_ue_TxTEG_RequestUL_TDOA_Config_r17; /**< ue-TxTEG-RequestUL-TDOA-Config-r17 是否存在。 */
    SetupRelease_UE_TxTEG_RequestUL_TDOA_Config_r17 ue_TxTEG_RequestUL_TDOA_Config_r17; /**< ASN.1 ue-TxTEG-RequestUL-TDOA-Config-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief IAB_IP_AddressConfigurationList_r16
 * @note ASN.1：IAB-IP-AddressConfigurationList-r16；源文件第 1040 行。
 * @note IAB-IP-AddressConfigurationList-r16 ::= SEQUENCE { iab-IP-AddressToAddModList-r16, iab-IP-AddressToReleaseList-r16 }
 */
struct IAB_IP_AddressConfigurationList_r16 {
    bool has_iab_IP_AddressToAddModList_r16; /**< iab-IP-AddressToAddModList-r16 是否存在。 */
    IAB_IP_AddressConfiguration_r16* iab_IP_AddressToAddModList_r16_items; /**< ASN.1 iab-IP-AddressToAddModList-r16；SEQUENCE OF IAB_IP_AddressConfiguration_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t iab_IP_AddressToAddModList_r16_count; /**< iab-IP-AddressToAddModList-r16 元素个数。 */
    bool has_iab_IP_AddressToReleaseList_r16; /**< iab-IP-AddressToReleaseList-r16 是否存在。 */
    IAB_IP_AddressIndex_r16* iab_IP_AddressToReleaseList_r16_items; /**< ASN.1 iab-IP-AddressToReleaseList-r16；SEQUENCE OF IAB_IP_AddressIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t iab_IP_AddressToReleaseList_r16_count; /**< iab-IP-AddressToReleaseList-r16 元素个数。 */
};


/**
 * @brief CondReconfigToAddModList_r16
 * @note ASN.1：CondReconfigToAddModList-r16；源文件第 5441 行。
 * @note CondReconfigToAddModList-r16 ::= SEQUENCE OF (size 1..8) OF CondReconfigToAddMod-r16
 */
struct CondReconfigToAddModList_r16 {
    CondReconfigToAddMod_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SK_CounterConfiguration_r18
 * @note ASN.1：SK-CounterConfiguration-r18；源文件第 5495 行。
 * @note SK-CounterConfiguration-r18 ::= SEQUENCE { sk-CounterConfigToReleaseList-r18, sk-CounterConfigToAddModList-r18 }
 */
struct SK_CounterConfiguration_r18 {
    bool has_sk_CounterConfigToReleaseList_r18; /**< sk-CounterConfigToReleaseList-r18 是否存在。 */
    SecurityCellSetId_r18* sk_CounterConfigToReleaseList_r18_items; /**< ASN.1 sk-CounterConfigToReleaseList-r18；SEQUENCE OF SecurityCellSetId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sk_CounterConfigToReleaseList_r18_count; /**< sk-CounterConfigToReleaseList-r18 元素个数。 */
    bool has_sk_CounterConfigToAddModList_r18; /**< sk-CounterConfigToAddModList-r18 是否存在。 */
    SK_CounterConfig_r18* sk_CounterConfigToAddModList_r18_items; /**< ASN.1 sk-CounterConfigToAddModList-r18；SEQUENCE OF SK_CounterConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sk_CounterConfigToAddModList_r18_count; /**< sk-CounterConfigToAddModList-r18 元素个数。 */
};


/**
 * @brief ConditionalReconfiguration_r16_ExtGroup1
 * @note ASN.1：ConditionalReconfiguration_r16_ExtGroup1；源文件第 5486 行。
 */
struct ConditionalReconfiguration_r16_ExtGroup1 {
    bool has_scpac_ReferenceConfiguration_r18; /**< scpac-ReferenceConfiguration-r18 是否存在。 */
    SetupRelease_ReferenceConfiguration_r18 scpac_ReferenceConfiguration_r18; /**< ASN.1 scpac-ReferenceConfiguration-r18；结构体；OPTIONAL。 */
    bool has_servingSecurityCellSetId_r18; /**< servingSecurityCellSetId-r18 是否存在。 */
    SecurityCellSetId_r18 servingSecurityCellSetId_r18; /**< ASN.1 servingSecurityCellSetId-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sk_CounterConfiguration_r18; /**< sk-CounterConfiguration-r18 是否存在。 */
    SK_CounterConfiguration_r18 sk_CounterConfiguration_r18; /**< ASN.1 sk-CounterConfiguration-r18；结构体；OPTIONAL。 */
};


/**
 * @brief CondReconfigToRemoveList_r16
 * @note ASN.1：CondReconfigToRemoveList-r16；源文件第 5493 行。
 * @note CondReconfigToRemoveList-r16 ::= SEQUENCE OF (size 1..8) OF CondReconfigId-r16
 */
struct CondReconfigToRemoveList_r16 {
    CondReconfigId_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ConditionalReconfiguration_r16
 * @note ASN.1：ConditionalReconfiguration-r16；源文件第 5481 行。
 * @note ConditionalReconfiguration-r16 ::= SEQUENCE { attemptCondReconfig-r16, condReconfigToRemoveList-r16, condReconfi...
 */
struct ConditionalReconfiguration_r16 {
    bool has_attemptCondReconfig_r16; /**< attemptCondReconfig-r16 是否存在。 */
    ConditionalReconfiguration_r16_AttemptCondReconfig_r16 attemptCondReconfig_r16; /**< ASN.1 attemptCondReconfig-r16；枚举；OPTIONAL。 */
    bool has_condReconfigToRemoveList_r16; /**< condReconfigToRemoveList-r16 是否存在。 */
    CondReconfigToRemoveList_r16 condReconfigToRemoveList_r16; /**< ASN.1 condReconfigToRemoveList-r16；SEQUENCE OF CondReconfigId_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_condReconfigToAddModList_r16; /**< condReconfigToAddModList-r16 是否存在。 */
    CondReconfigToAddModList_r16 condReconfigToAddModList_r16; /**< ASN.1 condReconfigToAddModList-r16；SEQUENCE OF CondReconfigToAddMod_r16，SIZE (1..8)；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ConditionalReconfiguration_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SSB_MTC_PeriodicityAndOffset
 * @note ASN.1：periodicityAndOffset；源文件第 13538 行。
 * @note CHOICE { sf5, sf10, sf20, sf40, sf80, sf160 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SSB_MTC_PeriodicityAndOffset_Tag {
    SSB_MTC_PeriodicityAndOffset_Tag_sf5 = 0, /**< ASN.1 sf5 */
    SSB_MTC_PeriodicityAndOffset_Tag_sf10 = 1, /**< ASN.1 sf10 */
    SSB_MTC_PeriodicityAndOffset_Tag_sf20 = 2, /**< ASN.1 sf20 */
    SSB_MTC_PeriodicityAndOffset_Tag_sf40 = 3, /**< ASN.1 sf40 */
    SSB_MTC_PeriodicityAndOffset_Tag_sf80 = 4, /**< ASN.1 sf80 */
    SSB_MTC_PeriodicityAndOffset_Tag_sf160 = 5, /**< ASN.1 sf160 */
} SSB_MTC_PeriodicityAndOffset_Tag;

struct SSB_MTC_PeriodicityAndOffset {
    SSB_MTC_PeriodicityAndOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sf5; /**< ASN.1 sf5 */
        int64_t sf10; /**< ASN.1 sf10 */
        int64_t sf20; /**< ASN.1 sf20 */
        int64_t sf40; /**< ASN.1 sf40 */
        int64_t sf80; /**< ASN.1 sf80 */
        int64_t sf160; /**< ASN.1 sf160 */
    } u;
};


/**
 * @brief SSB_MTC
 * @note ASN.1：SSB-MTC；源文件第 13537 行。
 * @note SSB-MTC ::= SEQUENCE { periodicityAndOffset, duration }
 */
struct SSB_MTC {
    SSB_MTC_PeriodicityAndOffset periodicityAndOffset; /**< ASN.1 periodicityAndOffset；结构体。 */
    SSB_MTC_Duration duration; /**< ASN.1 duration；枚举。 */
};


/**
 * @brief CandidateServingFreqListNR_r16
 * @note ASN.1：CandidateServingFreqListNR-r16；源文件第 21646 行。
 * @note CandidateServingFreqListNR-r16 ::= SEQUENCE OF (size 1..128) OF ARFCN-ValueNR
 */
struct CandidateServingFreqListNR_r16 {
    ARFCN_ValueNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IDC_AssistanceConfig_r16
 * @note ASN.1：IDC-AssistanceConfig-r16；源文件第 21685 行。
 * @note IDC-AssistanceConfig-r16 ::= SEQUENCE { candidateServingFreqListNR-r16 }
 */
struct IDC_AssistanceConfig_r16 {
    bool has_candidateServingFreqListNR_r16; /**< candidateServingFreqListNR-r16 是否存在。 */
    CandidateServingFreqListNR_r16 candidateServingFreqListNR_r16; /**< ASN.1 candidateServingFreqListNR-r16；SEQUENCE OF ARFCN_ValueNR，SIZE (1..128)；OPTIONAL。 */
};


/**
 * @brief SetupRelease_IDC_AssistanceConfig_r16
 * @note ASN.1：SetupRelease<IDC-AssistanceConfig-r16>；源文件第 21593 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_IDC_AssistanceConfig_r16_Tag {
    SetupRelease_IDC_AssistanceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_IDC_AssistanceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_IDC_AssistanceConfig_r16_Tag;

struct SetupRelease_IDC_AssistanceConfig_r16 {
    SetupRelease_IDC_AssistanceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        IDC_AssistanceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DRX_PreferenceConfig_r16
 * @note ASN.1：DRX-PreferenceConfig-r16；源文件第 21690 行。
 * @note DRX-PreferenceConfig-r16 ::= SEQUENCE { drx-PreferenceProhibitTimer-r16 }
 */
struct DRX_PreferenceConfig_r16 {
    DRX_PreferenceConfig_r16_Drx_PreferenceProhibitTimer_r16 drx_PreferenceProhibitTimer_r16; /**< ASN.1 drx-PreferenceProhibitTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_DRX_PreferenceConfig_r16
 * @note ASN.1：SetupRelease<DRX-PreferenceConfig-r16>；源文件第 21594 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_PreferenceConfig_r16_Tag {
    SetupRelease_DRX_PreferenceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_PreferenceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_PreferenceConfig_r16_Tag;

struct SetupRelease_DRX_PreferenceConfig_r16 {
    SetupRelease_DRX_PreferenceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_PreferenceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MaxBW_PreferenceConfig_r16
 * @note ASN.1：MaxBW-PreferenceConfig-r16；源文件第 21696 行。
 * @note MaxBW-PreferenceConfig-r16 ::= SEQUENCE { maxBW-PreferenceProhibitTimer-r16 }
 */
struct MaxBW_PreferenceConfig_r16 {
    MaxBW_PreferenceConfig_r16_MaxBW_PreferenceProhibitTimer_r16 maxBW_PreferenceProhibitTimer_r16; /**< ASN.1 maxBW-PreferenceProhibitTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_MaxBW_PreferenceConfig_r16
 * @note ASN.1：SetupRelease<MaxBW-PreferenceConfig-r16>；源文件第 21595 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MaxBW_PreferenceConfig_r16_Tag {
    SetupRelease_MaxBW_PreferenceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MaxBW_PreferenceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MaxBW_PreferenceConfig_r16_Tag;

struct SetupRelease_MaxBW_PreferenceConfig_r16 {
    SetupRelease_MaxBW_PreferenceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MaxBW_PreferenceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MaxCC_PreferenceConfig_r16
 * @note ASN.1：MaxCC-PreferenceConfig-r16；源文件第 21702 行。
 * @note MaxCC-PreferenceConfig-r16 ::= SEQUENCE { maxCC-PreferenceProhibitTimer-r16 }
 */
struct MaxCC_PreferenceConfig_r16 {
    MaxCC_PreferenceConfig_r16_MaxCC_PreferenceProhibitTimer_r16 maxCC_PreferenceProhibitTimer_r16; /**< ASN.1 maxCC-PreferenceProhibitTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_MaxCC_PreferenceConfig_r16
 * @note ASN.1：SetupRelease<MaxCC-PreferenceConfig-r16>；源文件第 21596 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MaxCC_PreferenceConfig_r16_Tag {
    SetupRelease_MaxCC_PreferenceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MaxCC_PreferenceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MaxCC_PreferenceConfig_r16_Tag;

struct SetupRelease_MaxCC_PreferenceConfig_r16 {
    SetupRelease_MaxCC_PreferenceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MaxCC_PreferenceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MaxMIMO_LayerPreferenceConfig_r16
 * @note ASN.1：MaxMIMO-LayerPreferenceConfig-r16；源文件第 21708 行。
 * @note MaxMIMO-LayerPreferenceConfig-r16 ::= SEQUENCE { maxMIMO-LayerPreferenceProhibitTimer-r16 }
 */
struct MaxMIMO_LayerPreferenceConfig_r16 {
    MaxMIMO_LayerPreferenceConfig_r16_MaxMIMO_LayerPreferenceProhibitTimer_r16 maxMIMO_LayerPreferenceProhibitTimer_r16; /**< ASN.1 maxMIMO-LayerPreferenceProhibitTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_MaxMIMO_LayerPreferenceConfig_r16
 * @note ASN.1：SetupRelease<MaxMIMO-LayerPreferenceConfig-r16>；源文件第 21597 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag {
    SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag;

struct SetupRelease_MaxMIMO_LayerPreferenceConfig_r16 {
    SetupRelease_MaxMIMO_LayerPreferenceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MaxMIMO_LayerPreferenceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MinSchedulingOffsetPreferenceConfig_r16
 * @note ASN.1：MinSchedulingOffsetPreferenceConfig-r16；源文件第 21714 行。
 * @note MinSchedulingOffsetPreferenceConfig-r16 ::= SEQUENCE { minSchedulingOffsetPreferenceProhibitTimer-r16 }
 */
struct MinSchedulingOffsetPreferenceConfig_r16 {
    MinSchedulingOffsetPreferenceConfig_r16_MinSchedulingOffsetPreferenceProhibitTimer_r16 minSchedulingOffsetPreferenceProhibitTimer_r16; /**< ASN.1 minSchedulingOffsetPreferenceProhibitTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_MinSchedulingOffsetPreferenceConfig_r16
 * @note ASN.1：SetupRelease<MinSchedulingOffsetPreferenceConfig-r16>；源文件第 21598 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag {
    SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag;

struct SetupRelease_MinSchedulingOffsetPreferenceConfig_r16 {
    SetupRelease_MinSchedulingOffsetPreferenceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MinSchedulingOffsetPreferenceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ReleasePreferenceConfig_r16
 * @note ASN.1：ReleasePreferenceConfig-r16；源文件第 21720 行。
 * @note ReleasePreferenceConfig-r16 ::= SEQUENCE { releasePreferenceProhibitTimer-r16, connectedReporting }
 */
struct ReleasePreferenceConfig_r16 {
    ReleasePreferenceConfig_r16_ReleasePreferenceProhibitTimer_r16 releasePreferenceProhibitTimer_r16; /**< ASN.1 releasePreferenceProhibitTimer-r16；枚举。 */
    bool has_connectedReporting; /**< connectedReporting 是否存在。 */
    ReleasePreferenceConfig_r16_ConnectedReporting connectedReporting; /**< ASN.1 connectedReporting；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_ReleasePreferenceConfig_r16
 * @note ASN.1：SetupRelease<ReleasePreferenceConfig-r16>；源文件第 21599 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_ReleasePreferenceConfig_r16_Tag {
    SetupRelease_ReleasePreferenceConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_ReleasePreferenceConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_ReleasePreferenceConfig_r16_Tag;

struct SetupRelease_ReleasePreferenceConfig_r16 {
    SetupRelease_ReleasePreferenceConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        ReleasePreferenceConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OtherConfig_v1610
 * @note ASN.1：OtherConfig-v1610；源文件第 21592 行。
 * @note OtherConfig-v1610 ::= SEQUENCE { idc-AssistanceConfig-r16, drx-PreferenceConfig-r16, maxBW-Preferen...
 */
struct OtherConfig_v1610 {
    bool has_idc_AssistanceConfig_r16; /**< idc-AssistanceConfig-r16 是否存在。 */
    SetupRelease_IDC_AssistanceConfig_r16 idc_AssistanceConfig_r16; /**< ASN.1 idc-AssistanceConfig-r16；结构体；OPTIONAL。 */
    bool has_drx_PreferenceConfig_r16; /**< drx-PreferenceConfig-r16 是否存在。 */
    SetupRelease_DRX_PreferenceConfig_r16 drx_PreferenceConfig_r16; /**< ASN.1 drx-PreferenceConfig-r16；结构体；OPTIONAL。 */
    bool has_maxBW_PreferenceConfig_r16; /**< maxBW-PreferenceConfig-r16 是否存在。 */
    SetupRelease_MaxBW_PreferenceConfig_r16 maxBW_PreferenceConfig_r16; /**< ASN.1 maxBW-PreferenceConfig-r16；结构体；OPTIONAL。 */
    bool has_maxCC_PreferenceConfig_r16; /**< maxCC-PreferenceConfig-r16 是否存在。 */
    SetupRelease_MaxCC_PreferenceConfig_r16 maxCC_PreferenceConfig_r16; /**< ASN.1 maxCC-PreferenceConfig-r16；结构体；OPTIONAL。 */
    bool has_maxMIMO_LayerPreferenceConfig_r16; /**< maxMIMO-LayerPreferenceConfig-r16 是否存在。 */
    SetupRelease_MaxMIMO_LayerPreferenceConfig_r16 maxMIMO_LayerPreferenceConfig_r16; /**< ASN.1 maxMIMO-LayerPreferenceConfig-r16；结构体；OPTIONAL。 */
    bool has_minSchedulingOffsetPreferenceConfig_r16; /**< minSchedulingOffsetPreferenceConfig-r16 是否存在。 */
    SetupRelease_MinSchedulingOffsetPreferenceConfig_r16 minSchedulingOffsetPreferenceConfig_r16; /**< ASN.1 minSchedulingOffsetPreferenceConfig-r16；结构体；OPTIONAL。 */
    bool has_releasePreferenceConfig_r16; /**< releasePreferenceConfig-r16 是否存在。 */
    SetupRelease_ReleasePreferenceConfig_r16 releasePreferenceConfig_r16; /**< ASN.1 releasePreferenceConfig-r16；结构体；OPTIONAL。 */
    bool has_referenceTimePreferenceReporting_r16; /**< referenceTimePreferenceReporting-r16 是否存在。 */
    OtherConfig_v1610_ReferenceTimePreferenceReporting_r16 referenceTimePreferenceReporting_r16; /**< ASN.1 referenceTimePreferenceReporting-r16；枚举；OPTIONAL。 */
    bool has_btNameList_r16; /**< btNameList-r16 是否存在。 */
    SetupRelease_BT_NameList_r16 btNameList_r16; /**< ASN.1 btNameList-r16；结构体；OPTIONAL。 */
    bool has_wlanNameList_r16; /**< wlanNameList-r16 是否存在。 */
    SetupRelease_WLAN_NameList_r16 wlanNameList_r16; /**< ASN.1 wlanNameList-r16；结构体；OPTIONAL。 */
    bool has_sensorNameList_r16; /**< sensorNameList-r16 是否存在。 */
    SetupRelease_Sensor_NameList_r16 sensorNameList_r16; /**< ASN.1 sensorNameList-r16；结构体；OPTIONAL。 */
    bool has_obtainCommonLocation_r16; /**< obtainCommonLocation-r16 是否存在。 */
    OtherConfig_v1610_ObtainCommonLocation_r16 obtainCommonLocation_r16; /**< ASN.1 obtainCommonLocation-r16；枚举；OPTIONAL。 */
    bool has_sl_AssistanceConfigNR_r16; /**< sl-AssistanceConfigNR-r16 是否存在。 */
    OtherConfig_v1610_Sl_AssistanceConfigNR_r16 sl_AssistanceConfigNR_r16; /**< ASN.1 sl-AssistanceConfigNR-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BAP_RoutingID_r16
 * @note ASN.1：BAP-RoutingID-r16；源文件第 4380 行。
 * @note BAP-RoutingID-r16 ::= SEQUENCE { bap-Address-r16, bap-PathId-r16 }
 */
struct BAP_RoutingID_r16 {
    BitString bap_Address_r16; /**< ASN.1 bap-Address-r16；SIZE (10)，定长。 */
    BitString bap_PathId_r16; /**< ASN.1 bap-PathId-r16；SIZE (10)，定长。 */
};


/**
 * @brief BAP_Config_r16
 * @note ASN.1：BAP-Config-r16；源文件第 1019 行。
 * @note BAP-Config-r16 ::= SEQUENCE { bap-Address-r16, defaultUL-BAP-RoutingID-r16, defaultUL-BH-RLC-Cha...
 */
struct BAP_Config_r16 {
    bool has_bap_Address_r16; /**< bap-Address-r16 是否存在。 */
    BitString bap_Address_r16; /**< ASN.1 bap-Address-r16；SIZE (10)，定长；OPTIONAL。 */
    bool has_defaultUL_BAP_RoutingID_r16; /**< defaultUL-BAP-RoutingID-r16 是否存在。 */
    BAP_RoutingID_r16 defaultUL_BAP_RoutingID_r16; /**< ASN.1 defaultUL-BAP-RoutingID-r16；结构体；OPTIONAL。 */
    bool has_defaultUL_BH_RLC_Channel_r16; /**< defaultUL-BH-RLC-Channel-r16 是否存在。 */
    BH_RLC_ChannelID_r16 defaultUL_BH_RLC_Channel_r16; /**< ASN.1 defaultUL-BH-RLC-Channel-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_flowControlFeedbackType_r16; /**< flowControlFeedbackType-r16 是否存在。 */
    BAP_Config_r16_FlowControlFeedbackType_r16 flowControlFeedbackType_r16; /**< ASN.1 flowControlFeedbackType-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_BAP_Config_r16
 * @note ASN.1：SetupRelease<BAP-Config-r16>；源文件第 970 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BAP_Config_r16_Tag {
    SetupRelease_BAP_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BAP_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BAP_Config_r16_Tag;

struct SetupRelease_BAP_Config_r16 {
    SetupRelease_BAP_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BAP_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_T316_r16
 * @note ASN.1：SetupRelease<T316-r16>；源文件第 974 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_T316_r16_Tag {
    SetupRelease_T316_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_T316_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_T316_r16_Tag;

struct SetupRelease_T316_r16 {
    SetupRelease_T316_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        T316_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief NeedForGapsConfigNR_r16
 * @note ASN.1：NeedForGapsConfigNR-r16；源文件第 8652 行。
 * @note NeedForGapsConfigNR-r16 ::= SEQUENCE { requestedTargetBandFilterNR-r16 }
 */
struct NeedForGapsConfigNR_r16 {
    bool has_requestedTargetBandFilterNR_r16; /**< requestedTargetBandFilterNR-r16 是否存在。 */
    FreqBandIndicatorNR* requestedTargetBandFilterNR_r16_items; /**< ASN.1 requestedTargetBandFilterNR-r16；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t requestedTargetBandFilterNR_r16_count; /**< requestedTargetBandFilterNR-r16 元素个数。 */
};


/**
 * @brief SetupRelease_NeedForGapsConfigNR_r16
 * @note ASN.1：SetupRelease<NeedForGapsConfigNR-r16>；源文件第 975 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NeedForGapsConfigNR_r16_Tag {
    SetupRelease_NeedForGapsConfigNR_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NeedForGapsConfigNR_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NeedForGapsConfigNR_r16_Tag;

struct SetupRelease_NeedForGapsConfigNR_r16 {
    SetupRelease_NeedForGapsConfigNR_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NeedForGapsConfigNR_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OnDemandSIB_Request_r16
 * @note ASN.1：OnDemandSIB-Request-r16；源文件第 1034 行。
 * @note OnDemandSIB-Request-r16 ::= SEQUENCE { onDemandSIB-RequestProhibitTimer-r16 }
 */
struct OnDemandSIB_Request_r16 {
    OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16 onDemandSIB_RequestProhibitTimer_r16; /**< ASN.1 onDemandSIB-RequestProhibitTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_OnDemandSIB_Request_r16
 * @note ASN.1：SetupRelease<OnDemandSIB-Request-r16>；源文件第 976 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_OnDemandSIB_Request_r16_Tag {
    SetupRelease_OnDemandSIB_Request_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_OnDemandSIB_Request_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_OnDemandSIB_Request_r16_Tag;

struct SetupRelease_OnDemandSIB_Request_r16 {
    SetupRelease_OnDemandSIB_Request_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        OnDemandSIB_Request_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_SchedulingRequestId
 * @note ASN.1：SetupRelease<SchedulingRequestId>；源文件第 22117 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SchedulingRequestId_Tag {
    SetupRelease_SchedulingRequestId_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SchedulingRequestId_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SchedulingRequestId_Tag;

struct SetupRelease_SchedulingRequestId {
    SetupRelease_SchedulingRequestId_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SchedulingRequestId setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_SCCH_CarrierSetConfigList_r18
 * @note ASN.1：SL-SCCH-CarrierSetConfigList-r18；源文件第 22150 行。
 * @note SL-SCCH-CarrierSetConfigList-r18 ::= SEQUENCE OF (size 1..96) OF SL-SCCH-CarrierSetConfig-r18
 */
struct SL_SCCH_CarrierSetConfigList_r18 {
    SL_SCCH_CarrierSetConfig_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SL_SCCH_CarrierSetConfigList_r18
 * @note ASN.1：SetupRelease<SL-SCCH-CarrierSetConfigList-r18>；源文件第 22135 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag {
    SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag;

struct SetupRelease_SL_SCCH_CarrierSetConfigList_r18 {
    SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_SCCH_CarrierSetConfigList_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_PHY_MAC_RLC_Config_v1700_ExtGroup1
 * @note ASN.1：SL_PHY_MAC_RLC_Config_v1700_ExtGroup1；源文件第 22127 行。
 */
struct SL_PHY_MAC_RLC_Config_v1700_ExtGroup1 {
    bool has_sl_RLC_BearerToAddModListSizeExt_v1800; /**< sl-RLC-BearerToAddModListSizeExt-v1800 是否存在。 */
    SL_RLC_BearerConfig_r16* sl_RLC_BearerToAddModListSizeExt_v1800_items; /**< ASN.1 sl-RLC-BearerToAddModListSizeExt-v1800；SEQUENCE OF SL_RLC_BearerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_BearerToAddModListSizeExt_v1800_count; /**< sl-RLC-BearerToAddModListSizeExt-v1800 元素个数。 */
    bool has_sl_RLC_BearerToReleaseListSizeExt_v1800; /**< sl-RLC-BearerToReleaseListSizeExt-v1800 是否存在。 */
    SL_RLC_BearerConfigIndex_v1800* sl_RLC_BearerToReleaseListSizeExt_v1800_items; /**< ASN.1 sl-RLC-BearerToReleaseListSizeExt-v1800；SEQUENCE OF SL_RLC_BearerConfigIndex_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_BearerToReleaseListSizeExt_v1800_count; /**< sl-RLC-BearerToReleaseListSizeExt-v1800 元素个数。 */
    bool has_sl_FreqInfoToAddModListExt_v1800; /**< sl-FreqInfoToAddModListExt-v1800 是否存在。 */
    SL_FreqConfigExt_v1800* sl_FreqInfoToAddModListExt_v1800_items; /**< ASN.1 sl-FreqInfoToAddModListExt-v1800；SEQUENCE OF SL_FreqConfigExt_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqInfoToAddModListExt_v1800_count; /**< sl-FreqInfoToAddModListExt-v1800 元素个数。 */
    bool has_sl_LBT_SchedulingRequestId_r18; /**< sl-LBT-SchedulingRequestId-r18 是否存在。 */
    SetupRelease_SchedulingRequestId sl_LBT_SchedulingRequestId_r18; /**< ASN.1 sl-LBT-SchedulingRequestId-r18；结构体；OPTIONAL。 */
    bool has_sl_SyncFreqList_r18; /**< sl-SyncFreqList-r18 是否存在。 */
    SL_Freq_Id_r16* sl_SyncFreqList_r18_items; /**< ASN.1 sl-SyncFreqList-r18；SEQUENCE OF SL_Freq_Id_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_SyncFreqList_r18_count; /**< sl-SyncFreqList-r18 元素个数。 */
    bool has_sl_SyncTxMultiFreq_r18; /**< sl-SyncTxMultiFreq-r18 是否存在。 */
    SL_PHY_MAC_RLC_Config_v1700_ExtGroup1_Sl_SyncTxMultiFreq_r18 sl_SyncTxMultiFreq_r18; /**< ASN.1 sl-SyncTxMultiFreq-r18；枚举；OPTIONAL。 */
    bool has_sl_MaxTransPowerCA_r18; /**< sl-MaxTransPowerCA-r18 是否存在。 */
    P_Max sl_MaxTransPowerCA_r18; /**< ASN.1 sl-MaxTransPowerCA-r18；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_sl_SCCH_CarrierSetConfig_r18; /**< sl-SCCH-CarrierSetConfig-r18 是否存在。 */
    SetupRelease_SL_SCCH_CarrierSetConfigList_r18 sl_SCCH_CarrierSetConfig_r18; /**< ASN.1 sl-SCCH-CarrierSetConfig-r18；结构体；OPTIONAL。 */
    bool has_sl_PRS_SchedulingRequestId_r18; /**< sl-PRS-SchedulingRequestId-r18 是否存在。 */
    SetupRelease_SchedulingRequestId sl_PRS_SchedulingRequestId_r18; /**< ASN.1 sl-PRS-SchedulingRequestId-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17
 * @note ASN.1：sl-DRX-GC-BC-OnDurationTimer-r17；源文件第 22252 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag {
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag;

struct SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17 {
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief SL_DRX_GC_BC_QoS_r17
 * @note ASN.1：SL-DRX-GC-BC-QoS-r17；源文件第 22250 行。
 * @note SL-DRX-GC-BC-QoS-r17 ::= SEQUENCE { sl-DRX-GC-BC-MappedQoS-FlowList-r17, sl-DRX-GC-BC-OnDurationTimer-...
 */
struct SL_DRX_GC_BC_QoS_r17 {
    bool has_sl_DRX_GC_BC_MappedQoS_FlowList_r17; /**< sl-DRX-GC-BC-MappedQoS-FlowList-r17 是否存在。 */
    SL_QoS_Profile_r16* sl_DRX_GC_BC_MappedQoS_FlowList_r17_items; /**< ASN.1 sl-DRX-GC-BC-MappedQoS-FlowList-r17；SEQUENCE OF SL_QoS_Profile_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DRX_GC_BC_MappedQoS_FlowList_r17_count; /**< sl-DRX-GC-BC-MappedQoS-FlowList-r17 元素个数。 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17 sl_DRX_GC_BC_OnDurationTimer_r17; /**< ASN.1 sl-DRX-GC-BC-OnDurationTimer-r17；结构体。 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17 sl_DRX_GC_InactivityTimer_r17; /**< ASN.1 sl-DRX-GC-InactivityTimer-r17；枚举。 */
    SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17 sl_DRX_GC_BC_Cycle_r17; /**< ASN.1 sl-DRX-GC-BC-Cycle-r17；枚举。 */
};


/**
 * @brief SL_DRX_GC_Generic_r17
 * @note ASN.1：SL-DRX-GC-Generic-r17；源文件第 22270 行。
 * @note SL-DRX-GC-Generic-r17 ::= SEQUENCE { sl-DRX-GC-HARQ-RTT-Timer1-r17, sl-DRX-GC-HARQ-RTT-Timer2-r17, sl-D...
 */
struct SL_DRX_GC_Generic_r17 {
    bool has_sl_DRX_GC_HARQ_RTT_Timer1_r17; /**< sl-DRX-GC-HARQ-RTT-Timer1-r17 是否存在。 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17 sl_DRX_GC_HARQ_RTT_Timer1_r17; /**< ASN.1 sl-DRX-GC-HARQ-RTT-Timer1-r17；枚举；OPTIONAL。 */
    bool has_sl_DRX_GC_HARQ_RTT_Timer2_r17; /**< sl-DRX-GC-HARQ-RTT-Timer2-r17 是否存在。 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17 sl_DRX_GC_HARQ_RTT_Timer2_r17; /**< ASN.1 sl-DRX-GC-HARQ-RTT-Timer2-r17；枚举；OPTIONAL。 */
    SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17 sl_DRX_GC_RetransmissionTimer_r17; /**< ASN.1 sl-DRX-GC-RetransmissionTimer-r17；枚举。 */
};


/**
 * @brief SL_DRX_ConfigGC_BC_r17
 * @note ASN.1：SL-DRX-ConfigGC-BC-r17；源文件第 22243 行。
 * @note SL-DRX-ConfigGC-BC-r17 ::= SEQUENCE { sl-DRX-GC-BC-PerQoS-List-r17, sl-DRX-GC-generic-r17, sl-DefaultDRX...
 */
struct SL_DRX_ConfigGC_BC_r17 {
    bool has_sl_DRX_GC_BC_PerQoS_List_r17; /**< sl-DRX-GC-BC-PerQoS-List-r17 是否存在。 */
    SL_DRX_GC_BC_QoS_r17* sl_DRX_GC_BC_PerQoS_List_r17_items; /**< ASN.1 sl-DRX-GC-BC-PerQoS-List-r17；SEQUENCE OF SL_DRX_GC_BC_QoS_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DRX_GC_BC_PerQoS_List_r17_count; /**< sl-DRX-GC-BC-PerQoS-List-r17 元素个数。 */
    bool has_sl_DRX_GC_generic_r17; /**< sl-DRX-GC-generic-r17 是否存在。 */
    SL_DRX_GC_Generic_r17 sl_DRX_GC_generic_r17; /**< ASN.1 sl-DRX-GC-generic-r17；结构体；OPTIONAL。 */
    bool has_sl_DefaultDRX_GC_BC_r17; /**< sl-DefaultDRX-GC-BC-r17 是否存在。 */
    SL_DRX_GC_BC_QoS_r17 sl_DefaultDRX_GC_BC_r17; /**< ASN.1 sl-DefaultDRX-GC-BC-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_DRX_Config_r17
 * @note ASN.1：SL-DRX-Config-r17；源文件第 22226 行。
 * @note SL-DRX-Config-r17 ::= SEQUENCE { sl-DRX-ConfigGC-BC-r17, sl-DRX-ConfigUC-ToReleaseList-r17, sl-DRX-...
 */
struct SL_DRX_Config_r17 {
    bool has_sl_DRX_ConfigGC_BC_r17; /**< sl-DRX-ConfigGC-BC-r17 是否存在。 */
    SL_DRX_ConfigGC_BC_r17 sl_DRX_ConfigGC_BC_r17; /**< ASN.1 sl-DRX-ConfigGC-BC-r17；结构体；OPTIONAL。 */
    bool has_sl_DRX_ConfigUC_ToReleaseList_r17; /**< sl-DRX-ConfigUC-ToReleaseList-r17 是否存在。 */
    SL_DestinationIndex_r16* sl_DRX_ConfigUC_ToReleaseList_r17_items; /**< ASN.1 sl-DRX-ConfigUC-ToReleaseList-r17；SEQUENCE OF SL_DestinationIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DRX_ConfigUC_ToReleaseList_r17_count; /**< sl-DRX-ConfigUC-ToReleaseList-r17 元素个数。 */
    bool has_sl_DRX_ConfigUC_ToAddModList_r17; /**< sl-DRX-ConfigUC-ToAddModList-r17 是否存在。 */
    SL_DRX_ConfigUC_Info_r17* sl_DRX_ConfigUC_ToAddModList_r17_items; /**< ASN.1 sl-DRX-ConfigUC-ToAddModList-r17；SEQUENCE OF SL_DRX_ConfigUC_Info_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DRX_ConfigUC_ToAddModList_r17_count; /**< sl-DRX-ConfigUC-ToAddModList-r17 元素个数。 */
};


/**
 * @brief SL_PHY_MAC_RLC_Config_v1700
 * @note ASN.1：SL-PHY-MAC-RLC-Config-v1700；源文件第 22122 行。
 * @note SL-PHY-MAC-RLC-Config-v1700 ::= SEQUENCE { sl-DRX-Config-r17, sl-RLC-ChannelToReleaseList-r17, sl-RLC-Channel...
 */
struct SL_PHY_MAC_RLC_Config_v1700 {
    bool has_sl_DRX_Config_r17; /**< sl-DRX-Config-r17 是否存在。 */
    SL_DRX_Config_r17 sl_DRX_Config_r17; /**< ASN.1 sl-DRX-Config-r17；结构体；OPTIONAL。 */
    bool has_sl_RLC_ChannelToReleaseList_r17; /**< sl-RLC-ChannelToReleaseList-r17 是否存在。 */
    SL_RLC_ChannelID_r17* sl_RLC_ChannelToReleaseList_r17_items; /**< ASN.1 sl-RLC-ChannelToReleaseList-r17；SEQUENCE OF SL_RLC_ChannelID_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_ChannelToReleaseList_r17_count; /**< sl-RLC-ChannelToReleaseList-r17 元素个数。 */
    bool has_sl_RLC_ChannelToAddModList_r17; /**< sl-RLC-ChannelToAddModList-r17 是否存在。 */
    SL_RLC_ChannelConfig_r17* sl_RLC_ChannelToAddModList_r17_items; /**< ASN.1 sl-RLC-ChannelToAddModList-r17；SEQUENCE OF SL_RLC_ChannelConfig_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_ChannelToAddModList_r17_count; /**< sl-RLC-ChannelToAddModList-r17 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_PHY_MAC_RLC_Config_v1700_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_PHY_MAC_RLC_Config_v1700
 * @note ASN.1：SetupRelease<SL-PHY-MAC-RLC-Config-v1700>；源文件第 22098 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag {
    SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag;

struct SetupRelease_SL_PHY_MAC_RLC_Config_v1700 {
    SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PHY_MAC_RLC_Config_v1700 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_RelayUE_Config_r17
 * @note ASN.1：SL-RelayUE-Config-r17；源文件第 22879 行。
 * @note SL-RelayUE-Config-r17 ::= SEQUENCE { threshHighRelay-r17, threshLowRelay-r17, hystMaxRelay-r17, hystMin...
 */
struct SL_RelayUE_Config_r17 {
    bool has_threshHighRelay_r17; /**< threshHighRelay-r17 是否存在。 */
    RSRP_Range threshHighRelay_r17; /**< ASN.1 threshHighRelay-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_threshLowRelay_r17; /**< threshLowRelay-r17 是否存在。 */
    RSRP_Range threshLowRelay_r17; /**< ASN.1 threshLowRelay-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_hystMaxRelay_r17; /**< hystMaxRelay-r17 是否存在。 */
    Hysteresis hystMaxRelay_r17; /**< ASN.1 hystMaxRelay-r17；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
    bool has_hystMinRelay_r17; /**< hystMinRelay-r17 是否存在。 */
    Hysteresis hystMinRelay_r17; /**< ASN.1 hystMinRelay-r17；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_RelayUE_Config_r17
 * @note ASN.1：SetupRelease<SL-RelayUE-Config-r17>；源文件第 22141 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_RelayUE_Config_r17_Tag {
    SetupRelease_SL_RelayUE_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_RelayUE_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_RelayUE_Config_r17_Tag;

struct SetupRelease_SL_RelayUE_Config_r17 {
    SetupRelease_SL_RelayUE_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_RelayUE_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_ReselectionConfig_r17
 * @note ASN.1：SL-ReselectionConfig-r17；源文件第 22904 行。
 * @note SL-ReselectionConfig-r17 ::= SEQUENCE { sl-RSRP-Thresh-r17, sl-FilterCoefficientRSRP-r17, sl-HystMin-r17 }
 */
struct SL_ReselectionConfig_r17 {
    bool has_sl_RSRP_Thresh_r17; /**< sl-RSRP-Thresh-r17 是否存在。 */
    SL_RSRP_Range_r16 sl_RSRP_Thresh_r17; /**< ASN.1 sl-RSRP-Thresh-r17；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_FilterCoefficientRSRP_r17; /**< sl-FilterCoefficientRSRP-r17 是否存在。 */
    FilterCoefficient sl_FilterCoefficientRSRP_r17; /**< ASN.1 sl-FilterCoefficientRSRP-r17；枚举；OPTIONAL。 */
    bool has_sl_HystMin_r17; /**< sl-HystMin-r17 是否存在。 */
    Hysteresis sl_HystMin_r17; /**< ASN.1 sl-HystMin-r17；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SL_RemoteUE_Config_r17
 * @note ASN.1：SL-RemoteUE-Config-r17；源文件第 22898 行。
 * @note SL-RemoteUE-Config-r17 ::= SEQUENCE { threshHighRemote-r17, hystMaxRemote-r17, sl-ReselectionConfig-r17 }
 */
struct SL_RemoteUE_Config_r17 {
    bool has_threshHighRemote_r17; /**< threshHighRemote-r17 是否存在。 */
    RSRP_Range threshHighRemote_r17; /**< ASN.1 threshHighRemote-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_hystMaxRemote_r17; /**< hystMaxRemote-r17 是否存在。 */
    Hysteresis hystMaxRemote_r17; /**< ASN.1 hystMaxRemote-r17；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_ReselectionConfig_r17; /**< sl-ReselectionConfig-r17 是否存在。 */
    SL_ReselectionConfig_r17 sl_ReselectionConfig_r17; /**< ASN.1 sl-ReselectionConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_RemoteUE_Config_r17
 * @note ASN.1：SetupRelease<SL-RemoteUE-Config-r17>；源文件第 22142 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_RemoteUE_Config_r17_Tag {
    SetupRelease_SL_RemoteUE_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_RemoteUE_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_RemoteUE_Config_r17_Tag;

struct SetupRelease_SL_RemoteUE_Config_r17 {
    SetupRelease_SL_RemoteUE_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_RemoteUE_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_DiscConfig_r17
 * @note ASN.1：SL-DiscConfig-r17；源文件第 22140 行。
 * @note SL-DiscConfig-r17 ::= SEQUENCE { sl-RelayUE-Config-r17, sl-RemoteUE-Config-r17 }
 */
struct SL_DiscConfig_r17 {
    bool has_sl_RelayUE_Config_r17; /**< sl-RelayUE-Config-r17 是否存在。 */
    SetupRelease_SL_RelayUE_Config_r17 sl_RelayUE_Config_r17; /**< ASN.1 sl-RelayUE-Config-r17；结构体；OPTIONAL。 */
    bool has_sl_RemoteUE_Config_r17; /**< sl-RemoteUE-Config-r17 是否存在。 */
    SetupRelease_SL_RemoteUE_Config_r17 sl_RemoteUE_Config_r17; /**< ASN.1 sl-RemoteUE-Config-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_DiscConfig_r17
 * @note ASN.1：SetupRelease<SL-DiscConfig-r17>；源文件第 22099 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_DiscConfig_r17_Tag {
    SetupRelease_SL_DiscConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_DiscConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_DiscConfig_r17_Tag;

struct SetupRelease_SL_DiscConfig_r17 {
    SetupRelease_SL_DiscConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_DiscConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_ConfigDedicatedNR_r16_ExtGroup1
 * @note ASN.1：SL_ConfigDedicatedNR_r16_ExtGroup1；源文件第 22097 行。
 */
struct SL_ConfigDedicatedNR_r16_ExtGroup1 {
    bool has_sl_PHY_MAC_RLC_Config_v1700; /**< sl-PHY-MAC-RLC-Config-v1700 是否存在。 */
    SetupRelease_SL_PHY_MAC_RLC_Config_v1700 sl_PHY_MAC_RLC_Config_v1700; /**< ASN.1 sl-PHY-MAC-RLC-Config-v1700；结构体；OPTIONAL。 */
    bool has_sl_DiscConfig_r17; /**< sl-DiscConfig-r17 是否存在。 */
    SetupRelease_SL_DiscConfig_r17 sl_DiscConfig_r17; /**< ASN.1 sl-DiscConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_RelayUE_ConfigU2U_r18
 * @note ASN.1：SL-RelayUE-ConfigU2U-r18；源文件第 22889 行。
 * @note SL-RelayUE-ConfigU2U-r18 ::= SEQUENCE { sl-RSRP-Thresh-DiscConfig-r18, sd-RSRP-ThreshDiscConfig-r18, sd-hy...
 */
struct SL_RelayUE_ConfigU2U_r18 {
    bool has_sl_RSRP_Thresh_DiscConfig_r18; /**< sl-RSRP-Thresh-DiscConfig-r18 是否存在。 */
    SL_RSRP_Range_r16 sl_RSRP_Thresh_DiscConfig_r18; /**< ASN.1 sl-RSRP-Thresh-DiscConfig-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_sd_RSRP_ThreshDiscConfig_r18; /**< sd-RSRP-ThreshDiscConfig-r18 是否存在。 */
    SL_RSRP_Range_r16 sd_RSRP_ThreshDiscConfig_r18; /**< ASN.1 sd-RSRP-ThreshDiscConfig-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_sd_hystMaxRelay_r18; /**< sd-hystMaxRelay-r18 是否存在。 */
    Hysteresis sd_hystMaxRelay_r18; /**< ASN.1 sd-hystMaxRelay-r18；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_RelayUE_ConfigU2U_r18
 * @note ASN.1：SetupRelease<SL-RelayUE-ConfigU2U-r18>；源文件第 22146 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag {
    SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag;

struct SetupRelease_SL_RelayUE_ConfigU2U_r18 {
    SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_RelayUE_ConfigU2U_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_RemoteUE_ConfigU2U_r18
 * @note ASN.1：SL-RemoteUE-ConfigU2U-r18；源文件第 22913 行。
 * @note SL-RemoteUE-ConfigU2U-r18 ::= SEQUENCE { sl-RSRP-ThreshU2U-r18, sl-FilterCoefficientU2U-r18, sl-HystMinU2U-...
 */
struct SL_RemoteUE_ConfigU2U_r18 {
    bool has_sl_RSRP_ThreshU2U_r18; /**< sl-RSRP-ThreshU2U-r18 是否存在。 */
    SL_RSRP_Range_r16 sl_RSRP_ThreshU2U_r18; /**< ASN.1 sl-RSRP-ThreshU2U-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_FilterCoefficientU2U_r18; /**< sl-FilterCoefficientU2U-r18 是否存在。 */
    FilterCoefficient sl_FilterCoefficientU2U_r18; /**< ASN.1 sl-FilterCoefficientU2U-r18；枚举；OPTIONAL。 */
    bool has_sl_HystMinU2U_r18; /**< sl-HystMinU2U-r18 是否存在。 */
    Hysteresis sl_HystMinU2U_r18; /**< ASN.1 sl-HystMinU2U-r18；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
    bool has_sd_RSRP_ThreshU2U_r18; /**< sd-RSRP-ThreshU2U-r18 是否存在。 */
    SL_RSRP_Range_r16 sd_RSRP_ThreshU2U_r18; /**< ASN.1 sd-RSRP-ThreshU2U-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_sd_FilterCoefficientU2U_r18; /**< sd-FilterCoefficientU2U-r18 是否存在。 */
    FilterCoefficient sd_FilterCoefficientU2U_r18; /**< ASN.1 sd-FilterCoefficientU2U-r18；枚举；OPTIONAL。 */
    bool has_sd_HystMinU2U_r18; /**< sd-HystMinU2U-r18 是否存在。 */
    Hysteresis sd_HystMinU2U_r18; /**< ASN.1 sd-HystMinU2U-r18；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_RemoteUE_ConfigU2U_r18
 * @note ASN.1：SetupRelease<SL-RemoteUE-ConfigU2U-r18>；源文件第 22147 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag {
    SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag;

struct SetupRelease_SL_RemoteUE_ConfigU2U_r18 {
    SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_RemoteUE_ConfigU2U_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_DiscConfig_v1800
 * @note ASN.1：SL-DiscConfig-v1800；源文件第 22145 行。
 * @note SL-DiscConfig-v1800 ::= SEQUENCE { sl-RelayUE-ConfigU2U-r18, sl-RemoteUE-ConfigU2U-r18 }
 */
struct SL_DiscConfig_v1800 {
    bool has_sl_RelayUE_ConfigU2U_r18; /**< sl-RelayUE-ConfigU2U-r18 是否存在。 */
    SetupRelease_SL_RelayUE_ConfigU2U_r18 sl_RelayUE_ConfigU2U_r18; /**< ASN.1 sl-RelayUE-ConfigU2U-r18；结构体；OPTIONAL。 */
    bool has_sl_RemoteUE_ConfigU2U_r18; /**< sl-RemoteUE-ConfigU2U-r18 是否存在。 */
    SetupRelease_SL_RemoteUE_ConfigU2U_r18 sl_RemoteUE_ConfigU2U_r18; /**< ASN.1 sl-RemoteUE-ConfigU2U-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_ConfigDedicatedNR_r16_ExtGroup2
 * @note ASN.1：SL_ConfigDedicatedNR_r16_ExtGroup2；源文件第 22101 行。
 */
struct SL_ConfigDedicatedNR_r16_ExtGroup2 {
    bool has_sl_DiscConfig_v1800; /**< sl-DiscConfig-v1800 是否存在。 */
    SL_DiscConfig_v1800 sl_DiscConfig_v1800; /**< ASN.1 sl-DiscConfig-v1800；结构体；OPTIONAL。 */
};


/**
 * @brief SL_ScheduledConfig_r16_ExtGroup1
 * @note ASN.1：SL_ScheduledConfig_r16_ExtGroup1；源文件第 23253 行。
 */
struct SL_ScheduledConfig_r16_ExtGroup1 {
    bool has_sl_DCI_ToSL_Trans_r16; /**< sl-DCI-ToSL-Trans-r16 是否存在。 */
    int64_t* sl_DCI_ToSL_Trans_r16_items; /**< ASN.1 sl-DCI-ToSL-Trans-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DCI_ToSL_Trans_r16_count; /**< sl-DCI-ToSL-Trans-r16 元素个数。 */
};


/**
 * @brief SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18
 * @note ASN.1：SL-ConfiguredGrantConfigDedicated-SL-PRS-RP-List-r18；源文件第 23273 行。
 * @note SL-ConfiguredGrantConfigDedicated-SL-PRS-RP-List-r18 ::= SEQUENCE { sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToReleaseList-r18, sl-C...
 */
struct SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18 {
    bool has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18; /**< sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToReleaseList-r18 是否存在。 */
    SL_ConfigIndexCG_r16* sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items; /**< ASN.1 sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToReleaseList-r18；SEQUENCE OF SL_ConfigIndexCG_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count; /**< sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToReleaseList-r18 元素个数。 */
    bool has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18; /**< sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToAddModList-r18 是否存在。 */
    SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18* sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items; /**< ASN.1 sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToAddModList-r18；SEQUENCE OF SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count; /**< sl-ConfiguredGrantConfigDedicated-SL-PRS-RPToAddModList-r18 元素个数。 */
};


/**
 * @brief SL_ScheduledConfig_r16_ExtGroup2
 * @note ASN.1：SL_ScheduledConfig_r16_ExtGroup2；源文件第 23256 行。
 */
struct SL_ScheduledConfig_r16_ExtGroup2 {
    bool has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18; /**< sl-ConfiguredGrantConfigDedicated-SL-PRS-RP-List-r18 是否存在。 */
    SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18 sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18; /**< ASN.1 sl-ConfiguredGrantConfigDedicated-SL-PRS-RP-List-r18；结构体；OPTIONAL。 */
};


/**
 * @brief BSR_Config
 * @note ASN.1：BSR-Config；源文件第 4495 行。
 * @note BSR-Config ::= SEQUENCE { periodicBSR-Timer, retxBSR-Timer, logicalChannelSR-DelayTimer }
 */
struct BSR_Config {
    BSR_Config_PeriodicBSR_Timer periodicBSR_Timer; /**< ASN.1 periodicBSR-Timer；枚举。 */
    BSR_Config_RetxBSR_Timer retxBSR_Timer; /**< ASN.1 retxBSR-Timer；枚举。 */
    bool has_logicalChannelSR_DelayTimer; /**< logicalChannelSR-DelayTimer 是否存在。 */
    BSR_Config_LogicalChannelSR_DelayTimer logicalChannelSR_DelayTimer; /**< ASN.1 logicalChannelSR-DelayTimer；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_MainConfigSL_r16
 * @note ASN.1：MAC-MainConfigSL-r16；源文件第 23261 行。
 * @note MAC-MainConfigSL-r16 ::= SEQUENCE { sl-BSR-Config-r16, ul-PrioritizationThres-r16, sl-PrioritizationTh...
 */
struct MAC_MainConfigSL_r16 {
    bool has_sl_BSR_Config_r16; /**< sl-BSR-Config-r16 是否存在。 */
    BSR_Config sl_BSR_Config_r16; /**< ASN.1 sl-BSR-Config-r16；结构体；OPTIONAL。 */
    bool has_ul_PrioritizationThres_r16; /**< ul-PrioritizationThres-r16 是否存在。 */
    int64_t ul_PrioritizationThres_r16; /**< ASN.1 ul-PrioritizationThres-r16；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_PrioritizationThres_r16; /**< sl-PrioritizationThres-r16 是否存在。 */
    int64_t sl_PrioritizationThres_r16; /**< ASN.1 sl-PrioritizationThres-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SL_ConfiguredGrantConfigList_r16
 * @note ASN.1：SL-ConfiguredGrantConfigList-r16；源文件第 23268 行。
 * @note SL-ConfiguredGrantConfigList-r16 ::= SEQUENCE { sl-ConfiguredGrantConfigToReleaseList-r16, sl-ConfiguredGrantConfi...
 */
struct SL_ConfiguredGrantConfigList_r16 {
    bool has_sl_ConfiguredGrantConfigToReleaseList_r16; /**< sl-ConfiguredGrantConfigToReleaseList-r16 是否存在。 */
    SL_ConfigIndexCG_r16* sl_ConfiguredGrantConfigToReleaseList_r16_items; /**< ASN.1 sl-ConfiguredGrantConfigToReleaseList-r16；SEQUENCE OF SL_ConfigIndexCG_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ConfiguredGrantConfigToReleaseList_r16_count; /**< sl-ConfiguredGrantConfigToReleaseList-r16 元素个数。 */
    bool has_sl_ConfiguredGrantConfigToAddModList_r16; /**< sl-ConfiguredGrantConfigToAddModList-r16 是否存在。 */
    SL_ConfiguredGrantConfig_r16* sl_ConfiguredGrantConfigToAddModList_r16_items; /**< ASN.1 sl-ConfiguredGrantConfigToAddModList-r16；SEQUENCE OF SL_ConfiguredGrantConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ConfiguredGrantConfigToAddModList_r16_count; /**< sl-ConfiguredGrantConfigToAddModList-r16 元素个数。 */
};


/**
 * @brief SL_ScheduledConfig_r16
 * @note ASN.1：SL-ScheduledConfig-r16；源文件第 23246 行。
 * @note SL-ScheduledConfig-r16 ::= SEQUENCE { sl-RNTI-r16, mac-MainConfigSL-r16, sl-CS-RNTI-r16, sl-PSFCH-ToPUCC...
 */
struct SL_ScheduledConfig_r16 {
    RNTI_Value sl_RNTI_r16; /**< ASN.1 sl-RNTI-r16；INTEGER (0..65535)，位宽 16 bit。 */
    bool has_mac_MainConfigSL_r16; /**< mac-MainConfigSL-r16 是否存在。 */
    MAC_MainConfigSL_r16 mac_MainConfigSL_r16; /**< ASN.1 mac-MainConfigSL-r16；结构体；OPTIONAL。 */
    bool has_sl_CS_RNTI_r16; /**< sl-CS-RNTI-r16 是否存在。 */
    RNTI_Value sl_CS_RNTI_r16; /**< ASN.1 sl-CS-RNTI-r16；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_sl_PSFCH_ToPUCCH_r16; /**< sl-PSFCH-ToPUCCH-r16 是否存在。 */
    int64_t* sl_PSFCH_ToPUCCH_r16_items; /**< ASN.1 sl-PSFCH-ToPUCCH-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PSFCH_ToPUCCH_r16_count; /**< sl-PSFCH-ToPUCCH-r16 元素个数。 */
    bool has_sl_ConfiguredGrantConfigList_r16; /**< sl-ConfiguredGrantConfigList-r16 是否存在。 */
    SL_ConfiguredGrantConfigList_r16 sl_ConfiguredGrantConfigList_r16; /**< ASN.1 sl-ConfiguredGrantConfigList-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_ScheduledConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_ScheduledConfig_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_ScheduledConfig_r16
 * @note ASN.1：SetupRelease<SL-ScheduledConfig-r16>；源文件第 22109 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_ScheduledConfig_r16_Tag {
    SetupRelease_SL_ScheduledConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_ScheduledConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_ScheduledConfig_r16_Tag;

struct SetupRelease_SL_ScheduledConfig_r16 {
    SetupRelease_SL_ScheduledConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_ScheduledConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_CBR_CommonTxConfigList_r16
 * @note ASN.1：SL-CBR-CommonTxConfigList-r16；源文件第 22052 行。
 * @note SL-CBR-CommonTxConfigList-r16 ::= SEQUENCE { sl-CBR-RangeConfigList-r16, sl-CBR-PSSCH-TxConfigList-r16 }
 */
struct SL_CBR_CommonTxConfigList_r16 {
    bool has_sl_CBR_RangeConfigList_r16; /**< sl-CBR-RangeConfigList-r16 是否存在。 */
    SL_CBR_LevelsConfig_r16* sl_CBR_RangeConfigList_r16_items; /**< ASN.1 sl-CBR-RangeConfigList-r16；SEQUENCE OF SL_CBR_LevelsConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_CBR_RangeConfigList_r16_count; /**< sl-CBR-RangeConfigList-r16 元素个数。 */
    bool has_sl_CBR_PSSCH_TxConfigList_r16; /**< sl-CBR-PSSCH-TxConfigList-r16 是否存在。 */
    SL_CBR_PSSCH_TxConfig_r16* sl_CBR_PSSCH_TxConfigList_r16_items; /**< ASN.1 sl-CBR-PSSCH-TxConfigList-r16；SEQUENCE OF SL_CBR_PSSCH_TxConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_CBR_PSSCH_TxConfigList_r16_count; /**< sl-CBR-PSSCH-TxConfigList-r16 元素个数。 */
};


/**
 * @brief SL_PSSCH_TxConfigList_r16
 * @note ASN.1：SL-PSSCH-TxConfigList-r16；源文件第 22787 行。
 * @note SL-PSSCH-TxConfigList-r16 ::= SEQUENCE OF (size 1..16) OF SL-PSSCH-TxConfig-r16
 */
struct SL_PSSCH_TxConfigList_r16 {
    SL_PSSCH_TxConfig_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18
 * @note ASN.1：SL-CBR-CommonTxDedicatedSL-PRS-RP-List-r18；源文件第 22069 行。
 * @note SL-CBR-CommonTxDedicatedSL-PRS-RP-List-r18 ::= SEQUENCE { sl-CBR-RangeDedicatedSL-PRS-RP-List-r18, sl-CBR-SL-PRS-TxConfigLis...
 */
struct SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18 {
    bool has_sl_CBR_RangeDedicatedSL_PRS_RP_List_r18; /**< sl-CBR-RangeDedicatedSL-PRS-RP-List-r18 是否存在。 */
    SL_CBR_LevelsDedicatedSL_PRS_RP_r18* sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items; /**< ASN.1 sl-CBR-RangeDedicatedSL-PRS-RP-List-r18；SEQUENCE OF SL_CBR_LevelsDedicatedSL_PRS_RP_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count; /**< sl-CBR-RangeDedicatedSL-PRS-RP-List-r18 元素个数。 */
    bool has_sl_CBR_SL_PRS_TxConfigList_r18; /**< sl-CBR-SL-PRS-TxConfigList-r18 是否存在。 */
    SL_CBR_SL_PRS_TxConfig_r18* sl_CBR_SL_PRS_TxConfigList_r18_items; /**< ASN.1 sl-CBR-SL-PRS-TxConfigList-r18；SEQUENCE OF SL_CBR_SL_PRS_TxConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_CBR_SL_PRS_TxConfigList_r18_count; /**< sl-CBR-SL-PRS-TxConfigList-r18 元素个数。 */
};


/**
 * @brief SL_UE_SelectedConfig_r16_ExtGroup1
 * @note ASN.1：SL_UE_SelectedConfig_r16_ExtGroup1；源文件第 23410 行。
 */
struct SL_UE_SelectedConfig_r16_ExtGroup1 {
    bool has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18; /**< sl-CBR-CommonTxDedicatedSL-PRS-RP-List-r18 是否存在。 */
    SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18 sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18; /**< ASN.1 sl-CBR-CommonTxDedicatedSL-PRS-RP-List-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_UE_SelectedConfig_r16
 * @note ASN.1：SL-UE-SelectedConfig-r16；源文件第 23402 行。
 * @note SL-UE-SelectedConfig-r16 ::= SEQUENCE { sl-PSSCH-TxConfigList-r16, sl-ProbResourceKeep-r16, sl-ReselectAft...
 */
struct SL_UE_SelectedConfig_r16 {
    bool has_sl_PSSCH_TxConfigList_r16; /**< sl-PSSCH-TxConfigList-r16 是否存在。 */
    SL_PSSCH_TxConfigList_r16 sl_PSSCH_TxConfigList_r16; /**< ASN.1 sl-PSSCH-TxConfigList-r16；SEQUENCE OF SL_PSSCH_TxConfig_r16，SIZE (1..16)；OPTIONAL。 */
    bool has_sl_ProbResourceKeep_r16; /**< sl-ProbResourceKeep-r16 是否存在。 */
    SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16 sl_ProbResourceKeep_r16; /**< ASN.1 sl-ProbResourceKeep-r16；枚举；OPTIONAL。 */
    bool has_sl_ReselectAfter_r16; /**< sl-ReselectAfter-r16 是否存在。 */
    SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16 sl_ReselectAfter_r16; /**< ASN.1 sl-ReselectAfter-r16；枚举；OPTIONAL。 */
    bool has_sl_CBR_CommonTxConfigList_r16; /**< sl-CBR-CommonTxConfigList-r16 是否存在。 */
    SL_CBR_CommonTxConfigList_r16 sl_CBR_CommonTxConfigList_r16; /**< ASN.1 sl-CBR-CommonTxConfigList-r16；结构体；OPTIONAL。 */
    bool has_ul_PrioritizationThres_r16; /**< ul-PrioritizationThres-r16 是否存在。 */
    int64_t ul_PrioritizationThres_r16; /**< ASN.1 ul-PrioritizationThres-r16；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_PrioritizationThres_r16; /**< sl-PrioritizationThres-r16 是否存在。 */
    int64_t sl_PrioritizationThres_r16; /**< ASN.1 sl-PrioritizationThres-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_UE_SelectedConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_UE_SelectedConfig_r16
 * @note ASN.1：SetupRelease<SL-UE-SelectedConfig-r16>；源文件第 22110 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_UE_SelectedConfig_r16_Tag {
    SetupRelease_SL_UE_SelectedConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_UE_SelectedConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_UE_SelectedConfig_r16_Tag;

struct SetupRelease_SL_UE_SelectedConfig_r16 {
    SetupRelease_SL_UE_SelectedConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_UE_SelectedConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART012_H */
