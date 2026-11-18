/* ============================================================================
 * types/rrc_types_part020.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART020_H
#define RRC_CODEC_TYPES_PART020_H

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
#include "rrc_types_part012.h"
#include "rrc_types_part013.h"
#include "rrc_types_part014.h"
#include "rrc_types_part015.h"
#include "rrc_types_part016.h"
#include "rrc_types_part017.h"
#include "rrc_types_part018.h"
#include "rrc_types_part019.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16
 * @note ASN.1：searchSpaceType-r16/common-r16/dci-Format2-5-r16/nrofCandidates-IAB-r16；源文件第 12262 行。
 * @note SEQUENCE { aggregationLevel1-r16, aggregationLevel2-r16, aggregationLevel4-r1...
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16 {
    bool has_aggregationLevel1_r16; /**< aggregationLevel1-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel1_r16 aggregationLevel1_r16; /**< ASN.1 aggregationLevel1-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel2_r16; /**< aggregationLevel2-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel2_r16 aggregationLevel2_r16; /**< ASN.1 aggregationLevel2-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel4_r16; /**< aggregationLevel4-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel4_r16 aggregationLevel4_r16; /**< ASN.1 aggregationLevel4-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel8_r16; /**< aggregationLevel8-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel8_r16 aggregationLevel8_r16; /**< ASN.1 aggregationLevel8-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel16_r16; /**< aggregationLevel16-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16_AggregationLevel16_r16 aggregationLevel16_r16; /**< ASN.1 aggregationLevel16-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16
 * @note ASN.1：searchSpaceType-r16/common-r16/dci-Format2-5-r16；源文件第 12261 行。
 * @note SEQUENCE { nrofCandidates-IAB-r16 }
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16_NrofCandidates_IAB_r16 nrofCandidates_IAB_r16; /**< ASN.1 nrofCandidates-IAB-r16；结构体。 */
};


/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16
 * @note ASN.1：searchSpaceType-r16/common-r16/dci-Format2-6-r16；源文件第 12271 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16
 * @note ASN.1：searchSpaceType-r16/common-r16；源文件第 12250 行。
 * @note SEQUENCE { dci-Format2-4-r16, dci-Format2-5-r16, dci-Format2-6-r16 }
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16 {
    bool has_dci_Format2_4_r16; /**< dci-Format2-4-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16 dci_Format2_4_r16; /**< ASN.1 dci-Format2-4-r16；结构体；OPTIONAL。 */
    bool has_dci_Format2_5_r16; /**< dci-Format2-5-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_5_r16 dci_Format2_5_r16; /**< ASN.1 dci-Format2-5-r16；结构体；OPTIONAL。 */
    bool has_dci_Format2_6_r16; /**< dci-Format2-6-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_6_r16 dci_Format2_6_r16; /**< ASN.1 dci-Format2-6-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16
 * @note ASN.1：searchSpaceType-r16；源文件第 12249 行。
 * @note SEQUENCE { common-r16 }
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16 common_r16; /**< ASN.1 common-r16；结构体。 */
};


/**
 * @brief SearchSpaceExt_r16
 * @note ASN.1：SearchSpaceExt-r16；源文件第 12247 行。
 * @note SearchSpaceExt-r16 ::= SEQUENCE { controlResourceSetId-r16, searchSpaceType-r16, searchSpaceGroupIdL...
 */
struct SearchSpaceExt_r16 {
    bool has_controlResourceSetId_r16; /**< controlResourceSetId-r16 是否存在。 */
    ControlResourceSetId_r16 controlResourceSetId_r16; /**< ASN.1 controlResourceSetId-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_searchSpaceType_r16; /**< searchSpaceType-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16 searchSpaceType_r16; /**< ASN.1 searchSpaceType-r16；结构体；OPTIONAL。 */
    bool has_searchSpaceGroupIdList_r16; /**< searchSpaceGroupIdList-r16 是否存在。 */
    int64_t* searchSpaceGroupIdList_r16_items; /**< ASN.1 searchSpaceGroupIdList-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpaceGroupIdList_r16_count; /**< searchSpaceGroupIdList-r16 元素个数。 */
    bool has_freqMonitorLocations_r16; /**< freqMonitorLocations-r16 是否存在。 */
    BitString freqMonitorLocations_r16; /**< ASN.1 freqMonitorLocations-r16；SIZE (5)，定长；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710
 * @note ASN.1：monitoringSlotPeriodicityAndOffset-v1710；源文件第 12282 行。
 * @note CHOICE { sl32, sl64, sl128, sl5120, sl10240, sl20480 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag {
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl32 = 0, /**< ASN.1 sl32 */
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl64 = 1, /**< ASN.1 sl64 */
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl128 = 2, /**< ASN.1 sl128 */
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl5120 = 3, /**< ASN.1 sl5120 */
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl10240 = 4, /**< ASN.1 sl10240 */
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag_sl20480 = 5, /**< ASN.1 sl20480 */
} SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag;

struct SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710 {
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl32; /**< ASN.1 sl32 */
        int64_t sl64; /**< ASN.1 sl64 */
        int64_t sl128; /**< ASN.1 sl128 */
        int64_t sl5120; /**< ASN.1 sl5120 */
        int64_t sl10240; /**< ASN.1 sl10240 */
        int64_t sl20480; /**< ASN.1 sl20480 */
    } u;
};


/**
 * @brief SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17
 * @note ASN.1：monitoringSlotsWithinSlotGroup-r17；源文件第 12290 行。
 * @note CHOICE { slotGroupLength4-r17, slotGroupLength8-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag {
    SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength4_r17 = 0, /**< ASN.1 slotGroupLength4-r17 */
    SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag_slotGroupLength8_r17 = 1, /**< ASN.1 slotGroupLength8-r17 */
} SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag;

struct SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17 {
    SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString slotGroupLength4_r17; /**< ASN.1 slotGroupLength4-r17 */
        BitString slotGroupLength8_r17; /**< ASN.1 slotGroupLength8-r17 */
    } u;
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17
 * @note ASN.1：searchSpaceType-r17/common-r17/dci-Format4-0-r17；源文件第 12298 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17
 * @note ASN.1：searchSpaceType-r17/common-r17/dci-Format4-1-r17；源文件第 12301 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17
 * @note ASN.1：searchSpaceType-r17/common-r17/dci-Format4-2-r17；源文件第 12304 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17
 * @note ASN.1：searchSpaceType-r17/common-r17/dci-Format4-1-AndFormat4-2-r17；源文件第 12307 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17
 * @note ASN.1：searchSpaceType-r17/common-r17/dci-Format2-7-r17/nrofCandidates-PEI-r17；源文件第 12311 行。
 * @note SEQUENCE { aggregationLevel4-r17, aggregationLevel8-r17, aggregationLevel16-r...
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17 {
    bool has_aggregationLevel4_r17; /**< aggregationLevel4-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel4_r17 aggregationLevel4_r17; /**< ASN.1 aggregationLevel4-r17；枚举；OPTIONAL。 */
    bool has_aggregationLevel8_r17; /**< aggregationLevel8-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel8_r17 aggregationLevel8_r17; /**< ASN.1 aggregationLevel8-r17；枚举；OPTIONAL。 */
    bool has_aggregationLevel16_r17; /**< aggregationLevel16-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17_AggregationLevel16_r17 aggregationLevel16_r17; /**< ASN.1 aggregationLevel16-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17
 * @note ASN.1：searchSpaceType-r17/common-r17/dci-Format2-7-r17；源文件第 12310 行。
 * @note SEQUENCE { nrofCandidates-PEI-r17 }
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17 {
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17_NrofCandidates_PEI_r17 nrofCandidates_PEI_r17; /**< ASN.1 nrofCandidates-PEI-r17；结构体。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17
 * @note ASN.1：searchSpaceType-r17/common-r17；源文件第 12297 行。
 * @note SEQUENCE { dci-Format4-0-r17, dci-Format4-1-r17, dci-Format4-2-r17, dci-Forma...
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17 {
    bool has_dci_Format4_0_r17; /**< dci-Format4-0-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_0_r17 dci_Format4_0_r17; /**< ASN.1 dci-Format4-0-r17；结构体；OPTIONAL。 */
    bool has_dci_Format4_1_r17; /**< dci-Format4-1-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_r17 dci_Format4_1_r17; /**< ASN.1 dci-Format4-1-r17；结构体；OPTIONAL。 */
    bool has_dci_Format4_2_r17; /**< dci-Format4-2-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_2_r17 dci_Format4_2_r17; /**< ASN.1 dci-Format4-2-r17；结构体；OPTIONAL。 */
    bool has_dci_Format4_1_AndFormat4_2_r17; /**< dci-Format4-1-AndFormat4-2-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format4_1_AndFormat4_2_r17 dci_Format4_1_AndFormat4_2_r17; /**< ASN.1 dci-Format4-1-AndFormat4-2-r17；结构体；OPTIONAL。 */
    bool has_dci_Format2_7_r17; /**< dci-Format2-7-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17_Dci_Format2_7_r17 dci_Format2_7_r17; /**< ASN.1 dci-Format2-7-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_v1700_SearchSpaceType_r17
 * @note ASN.1：searchSpaceType-r17；源文件第 12296 行。
 * @note SEQUENCE { common-r17 }
 */
struct SearchSpaceExt_v1700_SearchSpaceType_r17 {
    SearchSpaceExt_v1700_SearchSpaceType_r17_Common_r17 common_r17; /**< ASN.1 common-r17；结构体。 */
};


/**
 * @brief SearchSpaceExt_v1700
 * @note ASN.1：SearchSpaceExt-v1700；源文件第 12281 行。
 * @note SearchSpaceExt-v1700 ::= SEQUENCE { monitoringSlotPeriodicityAndOffset-v1710, monitoringSlotsWithinSlo...
 */
struct SearchSpaceExt_v1700 {
    bool has_monitoringSlotPeriodicityAndOffset_v1710; /**< monitoringSlotPeriodicityAndOffset-v1710 是否存在。 */
    SearchSpaceExt_v1700_MonitoringSlotPeriodicityAndOffset_v1710 monitoringSlotPeriodicityAndOffset_v1710; /**< ASN.1 monitoringSlotPeriodicityAndOffset-v1710；结构体；OPTIONAL。 */
    bool has_monitoringSlotsWithinSlotGroup_r17; /**< monitoringSlotsWithinSlotGroup-r17 是否存在。 */
    SearchSpaceExt_v1700_MonitoringSlotsWithinSlotGroup_r17 monitoringSlotsWithinSlotGroup_r17; /**< ASN.1 monitoringSlotsWithinSlotGroup-r17；结构体；OPTIONAL。 */
    bool has_duration_r17; /**< duration-r17 是否存在。 */
    int64_t duration_r17; /**< ASN.1 duration-r17；INTEGER (4..20476)，位宽 15 bit；OPTIONAL。 */
    bool has_searchSpaceType_r17; /**< searchSpaceType-r17 是否存在。 */
    SearchSpaceExt_v1700_SearchSpaceType_r17 searchSpaceType_r17; /**< ASN.1 searchSpaceType-r17；结构体；OPTIONAL。 */
    bool has_searchSpaceGroupIdList_r17; /**< searchSpaceGroupIdList-r17 是否存在。 */
    int64_t* searchSpaceGroupIdList_r17_items; /**< ASN.1 searchSpaceGroupIdList-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpaceGroupIdList_r17_count; /**< searchSpaceGroupIdList-r17 元素个数。 */
    bool has_searchSpaceLinkingId_r17; /**< searchSpaceLinkingId-r17 是否存在。 */
    int64_t searchSpaceLinkingId_r17; /**< ASN.1 searchSpaceLinkingId-r17；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18
 * @note ASN.1：searchSpaceType-r18/common-r18/dci-Format2-9-r18；源文件第 12327 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18
 * @note ASN.1：searchSpaceType-r18/common-r18；源文件第 12326 行。
 * @note SEQUENCE { dci-Format2-9-r18 }
 */
struct SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18 {
    bool has_dci_Format2_9_r18; /**< dci-Format2-9-r18 是否存在。 */
    SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18_Dci_Format2_9_r18 dci_Format2_9_r18; /**< ASN.1 dci-Format2-9-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_v1800_SearchSpaceType_r18
 * @note ASN.1：searchSpaceType-r18；源文件第 12325 行。
 * @note SEQUENCE { common-r18 }
 */
struct SearchSpaceExt_v1800_SearchSpaceType_r18 {
    SearchSpaceExt_v1800_SearchSpaceType_r18_Common_r18 common_r18; /**< ASN.1 common-r18；结构体。 */
};


/**
 * @brief SearchSpaceExt_v1800
 * @note ASN.1：SearchSpaceExt-v1800；源文件第 12324 行。
 * @note SearchSpaceExt-v1800 ::= SEQUENCE { searchSpaceType-r18 }
 */
struct SearchSpaceExt_v1800 {
    bool has_searchSpaceType_r18; /**< searchSpaceType-r18 是否存在。 */
    SearchSpaceExt_v1800_SearchSpaceType_r18 searchSpaceType_r18; /**< ASN.1 searchSpaceType-r18；结构体；OPTIONAL。 */
};


/**
 * @brief IntraCellGuardBandsPerSCS_r16
 * @note ASN.1：IntraCellGuardBandsPerSCS-r16；源文件第 12553 行。
 * @note IntraCellGuardBandsPerSCS-r16 ::= SEQUENCE { guardBandSCS-r16, intraCellGuardBands-r16 }
 */
struct IntraCellGuardBandsPerSCS_r16 {
    SubcarrierSpacing guardBandSCS_r16; /**< ASN.1 guardBandSCS-r16；枚举。 */
    GuardBand_r16* intraCellGuardBands_r16_items; /**< ASN.1 intraCellGuardBands-r16；SEQUENCE OF GuardBand_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t intraCellGuardBands_r16_count; /**< intraCellGuardBands-r16 元素个数。 */
};


/**
 * @brief GuardBand_r16
 * @note ASN.1：GuardBand-r16；源文件第 12558 行。
 * @note GuardBand-r16 ::= SEQUENCE { startCRB-r16, nrofCRBs-r16 }
 */
struct GuardBand_r16 {
    int64_t startCRB_r16; /**< ASN.1 startCRB-r16；INTEGER (0..274)，位宽 9 bit。 */
    int64_t nrofCRBs_r16; /**< ASN.1 nrofCRBs-r16；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief MC_DCI_SetOfCells_r18
 * @note ASN.1：MC-DCI-SetOfCells-r18；源文件第 12596 行。
 * @note MC-DCI-SetOfCells-r18 ::= SEQUENCE { setOfCellsId-r18, nCI-Value-r18, scheduledCellListDCI-1-3-r18, sch...
 */
struct MC_DCI_SetOfCells_r18 {
    SetOfCellsId_r18 setOfCellsId_r18; /**< ASN.1 setOfCellsId-r18；INTEGER (0..3)，位宽 2 bit。 */
    int64_t nCI_Value_r18; /**< ASN.1 nCI-Value-r18；INTEGER (0..7)，位宽 3 bit。 */
    bool has_scheduledCellListDCI_1_3_r18; /**< scheduledCellListDCI-1-3-r18 是否存在。 */
    ServCellIndex* scheduledCellListDCI_1_3_r18_items; /**< ASN.1 scheduledCellListDCI-1-3-r18；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t scheduledCellListDCI_1_3_r18_count; /**< scheduledCellListDCI-1-3-r18 元素个数。 */
    bool has_scheduledCellListDCI_0_3_r18; /**< scheduledCellListDCI-0-3-r18 是否存在。 */
    ServCellIndex* scheduledCellListDCI_0_3_r18_items; /**< ASN.1 scheduledCellListDCI-0-3-r18；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t scheduledCellListDCI_0_3_r18_count; /**< scheduledCellListDCI-0-3-r18 元素个数。 */
    bool has_scheduledCellComboListDCI_1_3_r18; /**< scheduledCellComboListDCI-1-3-r18 是否存在。 */
    ScheduledCellCombo_r18* scheduledCellComboListDCI_1_3_r18_items; /**< ASN.1 scheduledCellComboListDCI-1-3-r18；SEQUENCE OF ScheduledCellCombo_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t scheduledCellComboListDCI_1_3_r18_count; /**< scheduledCellComboListDCI-1-3-r18 元素个数。 */
    bool has_scheduledCellComboListDCI_0_3_r18; /**< scheduledCellComboListDCI-0-3-r18 是否存在。 */
    ScheduledCellCombo_r18* scheduledCellComboListDCI_0_3_r18_items; /**< ASN.1 scheduledCellComboListDCI-0-3-r18；SEQUENCE OF ScheduledCellCombo_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t scheduledCellComboListDCI_0_3_r18_count; /**< scheduledCellComboListDCI-0-3-r18 元素个数。 */
    bool has_antennaPortsDCI1_3_r18; /**< antennaPortsDCI1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_AntennaPortsDCI1_3_r18 antennaPortsDCI1_3_r18; /**< ASN.1 antennaPortsDCI1-3-r18；枚举；OPTIONAL。 */
    bool has_antennaPortsDCI0_3_r18; /**< antennaPortsDCI0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_AntennaPortsDCI0_3_r18 antennaPortsDCI0_3_r18; /**< ASN.1 antennaPortsDCI0-3-r18；枚举；OPTIONAL。 */
    bool has_tpmi_DCI0_3_r18; /**< tpmi-DCI0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Tpmi_DCI0_3_r18 tpmi_DCI0_3_r18; /**< ASN.1 tpmi-DCI0-3-r18；枚举；OPTIONAL。 */
    bool has_sri_DCI0_3_r18; /**< sri-DCI0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Sri_DCI0_3_r18 sri_DCI0_3_r18; /**< ASN.1 sri-DCI0-3-r18；枚举；OPTIONAL。 */
    bool has_priorityIndicatorDCI_1_3_r18; /**< priorityIndicatorDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_1_3_r18 priorityIndicatorDCI_1_3_r18; /**< ASN.1 priorityIndicatorDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_priorityIndicatorDCI_0_3_r18; /**< priorityIndicatorDCI-0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_PriorityIndicatorDCI_0_3_r18 priorityIndicatorDCI_0_3_r18; /**< ASN.1 priorityIndicatorDCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_dormancyDCI_1_3_r18; /**< dormancyDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_DormancyDCI_1_3_r18 dormancyDCI_1_3_r18; /**< ASN.1 dormancyDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_dormancyDCI_0_3_r18; /**< dormancyDCI-0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_DormancyDCI_0_3_r18 dormancyDCI_0_3_r18; /**< ASN.1 dormancyDCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_pdcchMonAdaptDCI_1_3_r18; /**< pdcchMonAdaptDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_1_3_r18 pdcchMonAdaptDCI_1_3_r18; /**< ASN.1 pdcchMonAdaptDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_pdcchMonAdaptDCI_0_3_r18; /**< pdcchMonAdaptDCI-0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_PdcchMonAdaptDCI_0_3_r18 pdcchMonAdaptDCI_0_3_r18; /**< ASN.1 pdcchMonAdaptDCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_minimumSchedulingOffsetK0DCI_1_3_r18; /**< minimumSchedulingOffsetK0DCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_1_3_r18 minimumSchedulingOffsetK0DCI_1_3_r18; /**< ASN.1 minimumSchedulingOffsetK0DCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_minimumSchedulingOffsetK0DCI_0_3_r18; /**< minimumSchedulingOffsetK0DCI-0-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_MinimumSchedulingOffsetK0DCI_0_3_r18 minimumSchedulingOffsetK0DCI_0_3_r18; /**< ASN.1 minimumSchedulingOffsetK0DCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18; /**< pdsch-HARQ-ACK-OneShotFeedbackDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18 pdsch_HARQ_ACK_OneShotFeedbackDCI_1_3_r18; /**< ASN.1 pdsch-HARQ-ACK-OneShotFeedbackDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_enhType3DCI_1_3_r18; /**< pdsch-HARQ-ACK-enhType3DCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCI_1_3_r18 pdsch_HARQ_ACK_enhType3DCI_1_3_r18; /**< ASN.1 pdsch-HARQ-ACK-enhType3DCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18; /**< pdsch-HARQ-ACK-enhType3DCIfieldDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18 pdsch_HARQ_ACK_enhType3DCIfieldDCI_1_3_r18; /**< ASN.1 pdsch-HARQ-ACK-enhType3DCIfieldDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_retxDCI_1_3_r18; /**< pdsch-HARQ-ACK-retxDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Pdsch_HARQ_ACK_retxDCI_1_3_r18 pdsch_HARQ_ACK_retxDCI_1_3_r18; /**< ASN.1 pdsch-HARQ-ACK-retxDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_pucch_sSCellDynDCI_1_3_r18; /**< pucch-sSCellDynDCI-1-3-r18 是否存在。 */
    MC_DCI_SetOfCells_r18_Pucch_sSCellDynDCI_1_3_r18 pucch_sSCellDynDCI_1_3_r18; /**< ASN.1 pucch-sSCellDynDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_tdra_FieldIndexListDCI_1_3_r18; /**< tdra-FieldIndexListDCI-1-3-r18 是否存在。 */
    TDRA_FieldIndexDCI_1_3_r18* tdra_FieldIndexListDCI_1_3_r18_items; /**< ASN.1 tdra-FieldIndexListDCI-1-3-r18；SEQUENCE OF TDRA_FieldIndexDCI_1_3_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tdra_FieldIndexListDCI_1_3_r18_count; /**< tdra-FieldIndexListDCI-1-3-r18 元素个数。 */
    bool has_tdra_FieldIndexListDCI_0_3_r18; /**< tdra-FieldIndexListDCI-0-3-r18 是否存在。 */
    TDRA_FieldIndexDCI_0_3_r18* tdra_FieldIndexListDCI_0_3_r18_items; /**< ASN.1 tdra-FieldIndexListDCI-0-3-r18；SEQUENCE OF TDRA_FieldIndexDCI_0_3_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tdra_FieldIndexListDCI_0_3_r18_count; /**< tdra-FieldIndexListDCI-0-3-r18 元素个数。 */
    bool has_rateMatchListDCI_1_3_r18; /**< rateMatchListDCI-1-3-r18 是否存在。 */
    RateMatchDCI_1_3_r18* rateMatchListDCI_1_3_r18_items; /**< ASN.1 rateMatchListDCI-1-3-r18；SEQUENCE OF RateMatchDCI_1_3_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchListDCI_1_3_r18_count; /**< rateMatchListDCI-1-3-r18 元素个数。 */
    bool has_zp_CSI_RSListDCI_1_3_r18; /**< zp-CSI-RSListDCI-1-3-r18 是否存在。 */
    ZP_CSI_DCI_1_3_r18* zp_CSI_RSListDCI_1_3_r18_items; /**< ASN.1 zp-CSI-RSListDCI-1-3-r18；SEQUENCE OF ZP_CSI_DCI_1_3_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t zp_CSI_RSListDCI_1_3_r18_count; /**< zp-CSI-RSListDCI-1-3-r18 元素个数。 */
    bool has_tci_ListDCI_1_3_r18; /**< tci-ListDCI-1-3-r18 是否存在。 */
    TCI_DCI_1_3_r18* tci_ListDCI_1_3_r18_items; /**< ASN.1 tci-ListDCI-1-3-r18；SEQUENCE OF TCI_DCI_1_3_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tci_ListDCI_1_3_r18_count; /**< tci-ListDCI-1-3-r18 元素个数。 */
    bool has_srs_RequestListDCI_1_3_r18; /**< srs-RequestListDCI-1-3-r18 是否存在。 */
    SRS_RequestCombo_r18* srs_RequestListDCI_1_3_r18_items; /**< ASN.1 srs-RequestListDCI-1-3-r18；SEQUENCE OF SRS_RequestCombo_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_RequestListDCI_1_3_r18_count; /**< srs-RequestListDCI-1-3-r18 元素个数。 */
    bool has_srs_OffsetListDCI_1_3_r18; /**< srs-OffsetListDCI-1-3-r18 是否存在。 */
    SRS_OffsetCombo_r18* srs_OffsetListDCI_1_3_r18_items; /**< ASN.1 srs-OffsetListDCI-1-3-r18；SEQUENCE OF SRS_OffsetCombo_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_OffsetListDCI_1_3_r18_count; /**< srs-OffsetListDCI-1-3-r18 元素个数。 */
    bool has_srs_RequestListDCI_0_3_r18; /**< srs-RequestListDCI-0-3-r18 是否存在。 */
    SRS_RequestCombo_r18* srs_RequestListDCI_0_3_r18_items; /**< ASN.1 srs-RequestListDCI-0-3-r18；SEQUENCE OF SRS_RequestCombo_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_RequestListDCI_0_3_r18_count; /**< srs-RequestListDCI-0-3-r18 元素个数。 */
    bool has_srs_OffsetListDCI_0_3_r18; /**< srs-OffsetListDCI-0-3-r18 是否存在。 */
    SRS_OffsetCombo_r18* srs_OffsetListDCI_0_3_r18_items; /**< ASN.1 srs-OffsetListDCI-0-3-r18；SEQUENCE OF SRS_OffsetCombo_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_OffsetListDCI_0_3_r18_count; /**< srs-OffsetListDCI-0-3-r18 元素个数。 */
};


/**
 * @brief ScheduledCellCombo_r18
 * @note ASN.1：ScheduledCellCombo-r18；源文件第 12633 行。
 * @note ScheduledCellCombo-r18 ::= SEQUENCE OF (size 1..4) OF ScheduledCellComboR18Item
 */
struct ScheduledCellCombo_r18 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RateMatchDCI_1_3_r18
 * @note ASN.1：RateMatchDCI-1-3-r18；源文件第 12635 行。
 * @note RateMatchDCI-1-3-r18 ::= SEQUENCE OF (size 1..4) OF RateMatchDCI13R18Item
 */
struct RateMatchDCI_1_3_r18 {
    BitString* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ZP_CSI_DCI_1_3_r18
 * @note ASN.1：ZP-CSI-DCI-1-3-r18；源文件第 12637 行。
 * @note ZP-CSI-DCI-1-3-r18 ::= SEQUENCE OF (size 1..4) OF ZPCSIDCI13R18Item
 */
struct ZP_CSI_DCI_1_3_r18 {
    BitString* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TCI_DCI_1_3_r18
 * @note ASN.1：TCI-DCI-1-3-r18；源文件第 12639 行。
 * @note TCI-DCI-1-3-r18 ::= SEQUENCE OF (size 2..4) OF TCIDCI13R18Item
 */
struct TCI_DCI_1_3_r18 {
    BitString* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SRS_RequestCombo_r18
 * @note ASN.1：SRS-RequestCombo-r18；源文件第 12641 行。
 * @note SRS-RequestCombo-r18 ::= SEQUENCE OF (size 1..4) OF SRSRequestComboR18Item
 */
struct SRS_RequestCombo_r18 {
    BitString* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SRS_OffsetCombo_r18
 * @note ASN.1：SRS-OffsetCombo-r18；源文件第 12643 行。
 * @note SRS-OffsetCombo-r18 ::= SEQUENCE OF (size 1..4) OF SRSOffsetComboR18Item
 */
struct SRS_OffsetCombo_r18 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TDRA_FieldIndexDCI_1_3_r18
 * @note ASN.1：TDRA-FieldIndexDCI-1-3-r18；源文件第 12645 行。
 * @note TDRA-FieldIndexDCI-1-3-r18 ::= SEQUENCE OF (size 2..16) OF TDRAFieldIndexDCI13R18Item
 */
struct TDRA_FieldIndexDCI_1_3_r18 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TDRA_FieldIndexDCI_0_3_r18
 * @note ASN.1：TDRA-FieldIndexDCI-0-3-r18；源文件第 12647 行。
 * @note TDRA-FieldIndexDCI-0-3-r18 ::= SEQUENCE OF (size 2..16) OF TDRAFieldIndexDCI03R18Item
 */
struct TDRA_FieldIndexDCI_0_3_r18 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SI_RequestResources
 * @note ASN.1：SI-RequestResources；源文件第 12779 行。
 * @note SI-RequestResources ::= SEQUENCE { ra-PreambleStartIndex, ra-AssociationPeriodIndex, ra-ssb-OccasionM...
 */
struct SI_RequestResources {
    int64_t ra_PreambleStartIndex; /**< ASN.1 ra-PreambleStartIndex；INTEGER (0..63)，位宽 6 bit。 */
    bool has_ra_AssociationPeriodIndex; /**< ra-AssociationPeriodIndex 是否存在。 */
    int64_t ra_AssociationPeriodIndex; /**< ASN.1 ra-AssociationPeriodIndex；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_ra_ssb_OccasionMaskIndex; /**< ra-ssb-OccasionMaskIndex 是否存在。 */
    int64_t ra_ssb_OccasionMaskIndex; /**< ASN.1 ra-ssb-OccasionMaskIndex；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SI_RequestResourcesRepetition_r18
 * @note ASN.1：SI-RequestResourcesRepetition-r18；源文件第 12799 行。
 * @note SI-RequestResourcesRepetition-r18 ::= SEQUENCE { ra-PreambleStartIndex-r18, ra-ssb-OccasionMaskIndex-r18 }
 */
struct SI_RequestResourcesRepetition_r18 {
    int64_t ra_PreambleStartIndex_r18; /**< ASN.1 ra-PreambleStartIndex-r18；INTEGER (0..63)，位宽 6 bit。 */
    bool has_ra_ssb_OccasionMaskIndex_r18; /**< ra-ssb-OccasionMaskIndex-r18 是否存在。 */
    int64_t ra_ssb_OccasionMaskIndex_r18; /**< ASN.1 ra-ssb-OccasionMaskIndex-r18；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SIB_Mapping
 * @note ASN.1：SIB-Mapping；源文件第 12844 行。
 * @note SIB-Mapping ::= SEQUENCE OF (size 1..32) OF SIB-TypeInfo
 */
struct SIB_Mapping {
    SIB_TypeInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SchedulingInfo
 * @note ASN.1：SchedulingInfo；源文件第 12816 行。
 * @note SchedulingInfo ::= SEQUENCE { si-BroadcastStatus, si-Periodicity, sib-MappingInfo }
 */
struct SchedulingInfo {
    SchedulingInfo_Si_BroadcastStatus si_BroadcastStatus; /**< ASN.1 si-BroadcastStatus；枚举。 */
    SchedulingInfo_Si_Periodicity si_Periodicity; /**< ASN.1 si-Periodicity；枚举。 */
    SIB_Mapping sib_MappingInfo; /**< ASN.1 sib-MappingInfo；SEQUENCE OF SIB_TypeInfo，SIZE (1..32)。 */
};


/**
 * @brief SIB_Mapping_v1700
 * @note ASN.1：SIB-Mapping-v1700；源文件第 12846 行。
 * @note SIB-Mapping-v1700 ::= SEQUENCE OF (size 1..32) OF SIB-TypeInfo-v1700
 */
struct SIB_Mapping_v1700 {
    SIB_TypeInfo_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SchedulingInfo2_r17
 * @note ASN.1：SchedulingInfo2-r17；源文件第 12837 行。
 * @note SchedulingInfo2-r17 ::= SEQUENCE { si-BroadcastStatus-r17, si-WindowPosition-r17, si-Periodicity-r17,...
 */
struct SchedulingInfo2_r17 {
    SchedulingInfo2_r17_Si_BroadcastStatus_r17 si_BroadcastStatus_r17; /**< ASN.1 si-BroadcastStatus-r17；枚举。 */
    int64_t si_WindowPosition_r17; /**< ASN.1 si-WindowPosition-r17；INTEGER (1..256)，位宽 8 bit。 */
    SchedulingInfo2_r17_Si_Periodicity_r17 si_Periodicity_r17; /**< ASN.1 si-Periodicity-r17；枚举。 */
    SIB_Mapping_v1700 sib_MappingInfo_r17; /**< ASN.1 sib-MappingInfo-r17；SEQUENCE OF SIB_TypeInfo_v1700，SIZE (1..32)。 */
};


/**
 * @brief SIB_TypeInfo
 * @note ASN.1：SIB-TypeInfo；源文件第 12848 行。
 * @note SIB-TypeInfo ::= SEQUENCE { type, valueTag, areaScope }
 */
struct SIB_TypeInfo {
    SIB_TypeInfo_Type type; /**< ASN.1 type；枚举。 */
    bool has_valueTag; /**< valueTag 是否存在。 */
    int64_t valueTag; /**< ASN.1 valueTag；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_areaScope; /**< areaScope 是否存在。 */
    SIB_TypeInfo_AreaScope areaScope; /**< ASN.1 areaScope；枚举；OPTIONAL。 */
};


/**
 * @brief SIB_TypeInfo_v1700_SibType_r17_Type2_r17
 * @note ASN.1：sibType-r17/type2-r17；源文件第 12861 行。
 * @note SEQUENCE { posSibType-r17, encrypted-r17, gnss-id-r17, sbas-id-r17 }
 */
struct SIB_TypeInfo_v1700_SibType_r17_Type2_r17 {
    SIB_TypeInfo_v1700_SibType_r17_Type2_r17_PosSibType_r17 posSibType_r17; /**< ASN.1 posSibType-r17；枚举。 */
    bool has_encrypted_r17; /**< encrypted-r17 是否存在。 */
    SIB_TypeInfo_v1700_SibType_r17_Type2_r17_Encrypted_r17 encrypted_r17; /**< ASN.1 encrypted-r17；枚举；OPTIONAL。 */
    bool has_gnss_id_r17; /**< gnss-id-r17 是否存在。 */
    GNSS_ID_r16 gnss_id_r17; /**< ASN.1 gnss-id-r17；结构体；OPTIONAL。 */
    bool has_sbas_id_r17; /**< sbas-id-r17 是否存在。 */
    SBAS_ID_r16 sbas_id_r17; /**< ASN.1 sbas-id-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SIB_TypeInfo_v1700_SibType_r17
 * @note ASN.1：sibType-r17；源文件第 12857 行。
 * @note CHOICE { type1-r17, type2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SIB_TypeInfo_v1700_SibType_r17_Tag {
    SIB_TypeInfo_v1700_SibType_r17_Tag_type1_r17 = 0, /**< ASN.1 type1-r17 */
    SIB_TypeInfo_v1700_SibType_r17_Tag_type2_r17 = 1, /**< ASN.1 type2-r17 */
} SIB_TypeInfo_v1700_SibType_r17_Tag;

struct SIB_TypeInfo_v1700_SibType_r17 {
    SIB_TypeInfo_v1700_SibType_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SIB_TypeInfo_v1700_SibType_r17_Type1_r17 type1_r17; /**< ASN.1 type1-r17 */
        SIB_TypeInfo_v1700_SibType_r17_Type2_r17 type2_r17; /**< ASN.1 type2-r17 */
    } u;
};


/**
 * @brief SIB_TypeInfo_v1700
 * @note ASN.1：SIB-TypeInfo-v1700；源文件第 12856 行。
 * @note SIB-TypeInfo-v1700 ::= SEQUENCE { sibType-r17, valueTag-r17, areaScope-r17 }
 */
struct SIB_TypeInfo_v1700 {
    SIB_TypeInfo_v1700_SibType_r17 sibType_r17; /**< ASN.1 sibType-r17；结构体。 */
    bool has_valueTag_r17; /**< valueTag-r17 是否存在。 */
    int64_t valueTag_r17; /**< ASN.1 valueTag-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_areaScope_r17; /**< areaScope-r17 是否存在。 */
    SIB_TypeInfo_v1700_AreaScope_r17 areaScope_r17; /**< ASN.1 areaScope-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SlotFormatCombinationsPerCell_ExtGroup1
 * @note ASN.1：SlotFormatCombinationsPerCell_ExtGroup1；源文件第 12893 行。
 */
struct SlotFormatCombinationsPerCell_ExtGroup1 {
    bool has_enableConfiguredUL_r16; /**< enableConfiguredUL-r16 是否存在。 */
    SlotFormatCombinationsPerCell_ExtGroup1_EnableConfiguredUL_r16 enableConfiguredUL_r16; /**< ASN.1 enableConfiguredUL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SlotFormatCombinationsPerCell
 * @note ASN.1：SlotFormatCombinationsPerCell；源文件第 12885 行。
 * @note SlotFormatCombinationsPerCell ::= SEQUENCE { servingCellId, subcarrierSpacing, subcarrierSpacing2, slotFormatCo...
 */
struct SlotFormatCombinationsPerCell {
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit。 */
    SubcarrierSpacing subcarrierSpacing; /**< ASN.1 subcarrierSpacing；枚举。 */
    bool has_subcarrierSpacing2; /**< subcarrierSpacing2 是否存在。 */
    SubcarrierSpacing subcarrierSpacing2; /**< ASN.1 subcarrierSpacing2；枚举；OPTIONAL。 */
    bool has_slotFormatCombinations; /**< slotFormatCombinations 是否存在。 */
    SlotFormatCombination* slotFormatCombinations_items; /**< ASN.1 slotFormatCombinations；SEQUENCE OF SlotFormatCombination，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotFormatCombinations_count; /**< slotFormatCombinations 元素个数。 */
    bool has_positionInDCI; /**< positionInDCI 是否存在。 */
    int64_t positionInDCI; /**< ASN.1 positionInDCI；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SlotFormatCombinationsPerCell_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SlotFormatCombination
 * @note ASN.1：SlotFormatCombination；源文件第 12899 行。
 * @note SlotFormatCombination ::= SEQUENCE { slotFormatCombinationId, slotFormats }
 */
struct SlotFormatCombination {
    SlotFormatCombinationId slotFormatCombinationId; /**< ASN.1 slotFormatCombinationId；INTEGER (0..511)，位宽 9 bit。 */
    int64_t* slotFormats_items; /**< ASN.1 slotFormats；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t slotFormats_count; /**< slotFormats 元素个数。 */
};


/**
 * @brief CO_DurationsPerCell_r16
 * @note ASN.1：CO-DurationsPerCell-r16；源文件第 12935 行。
 * @note CO-DurationsPerCell-r16 ::= SEQUENCE { servingCellId-r16, positionInDCI-r16, subcarrierSpacing-r16, co-Du...
 */
struct CO_DurationsPerCell_r16 {
    ServCellIndex servingCellId_r16; /**< ASN.1 servingCellId-r16；INTEGER (0..31)，位宽 5 bit。 */
    int64_t positionInDCI_r16; /**< ASN.1 positionInDCI-r16；INTEGER (0..127)，位宽 7 bit。 */
    SubcarrierSpacing subcarrierSpacing_r16; /**< ASN.1 subcarrierSpacing-r16；枚举。 */
    CO_Duration_r16* co_DurationList_r16_items; /**< ASN.1 co-DurationList-r16；SEQUENCE OF CO_Duration_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t co_DurationList_r16_count; /**< co-DurationList-r16 元素个数。 */
};


/**
 * @brief CO_DurationsPerCell_r17
 * @note ASN.1：CO-DurationsPerCell-r17；源文件第 12942 行。
 * @note CO-DurationsPerCell-r17 ::= SEQUENCE { servingCellId-r17, positionInDCI-r17, subcarrierSpacing-r17, co-Du...
 */
struct CO_DurationsPerCell_r17 {
    ServCellIndex servingCellId_r17; /**< ASN.1 servingCellId-r17；INTEGER (0..31)，位宽 5 bit。 */
    int64_t positionInDCI_r17; /**< ASN.1 positionInDCI-r17；INTEGER (0..127)，位宽 7 bit。 */
    SubcarrierSpacing subcarrierSpacing_r17; /**< ASN.1 subcarrierSpacing-r17；枚举。 */
    CO_Duration_r17* co_DurationList_r17_items; /**< ASN.1 co-DurationList-r17；SEQUENCE OF CO_Duration_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t co_DurationList_r17_count; /**< co-DurationList-r17 元素个数。 */
};


/**
 * @brief AvailableRB_SetsPerCell_r16
 * @note ASN.1：AvailableRB-SetsPerCell-r16；源文件第 12952 行。
 * @note AvailableRB-SetsPerCell-r16 ::= SEQUENCE { servingCellId-r16, positionInDCI-r16 }
 */
struct AvailableRB_SetsPerCell_r16 {
    ServCellIndex servingCellId_r16; /**< ASN.1 servingCellId-r16；INTEGER (0..31)，位宽 5 bit。 */
    int64_t positionInDCI_r16; /**< ASN.1 positionInDCI-r16；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief SearchSpaceSwitchTrigger_r16
 * @note ASN.1：SearchSpaceSwitchTrigger-r16；源文件第 12957 行。
 * @note SearchSpaceSwitchTrigger-r16 ::= SEQUENCE { servingCellId-r16, positionInDCI-r16 }
 */
struct SearchSpaceSwitchTrigger_r16 {
    ServCellIndex servingCellId_r16; /**< ASN.1 servingCellId-r16；INTEGER (0..31)，位宽 5 bit。 */
    int64_t positionInDCI_r16; /**< ASN.1 positionInDCI-r16；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief S_NSSAI
 * @note ASN.1：S-NSSAI；源文件第 12965 行。
 * @note S-NSSAI ::= CHOICE { sst, sst-SD }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum S_NSSAI_Tag {
    S_NSSAI_Tag_sst = 0, /**< ASN.1 sst */
    S_NSSAI_Tag_sst_SD = 1, /**< ASN.1 sst-SD */
} S_NSSAI_Tag;

struct S_NSSAI {
    S_NSSAI_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString sst; /**< ASN.1 sst */
        BitString sst_SD; /**< ASN.1 sst-SD */
    } u;
};


/**
 * @brief SPS_PUCCH_AN_r16
 * @note ASN.1：SPS-PUCCH-AN-r16；源文件第 13011 行。
 * @note SPS-PUCCH-AN-r16 ::= SEQUENCE { sps-PUCCH-AN-ResourceID-r16, maxPayloadSize-r16 }
 */
struct SPS_PUCCH_AN_r16 {
    PUCCH_ResourceId sps_PUCCH_AN_ResourceID_r16; /**< ASN.1 sps-PUCCH-AN-ResourceID-r16；INTEGER (0..127)，位宽 7 bit。 */
    bool has_maxPayloadSize_r16; /**< maxPayloadSize-r16 是否存在。 */
    int64_t maxPayloadSize_r16; /**< ASN.1 maxPayloadSize-r16；INTEGER (4..256)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SRS_CC_SetIndex
 * @note ASN.1：SRS-CC-SetIndex；源文件第 13049 行。
 * @note SRS-CC-SetIndex ::= SEQUENCE { cc-SetIndex, cc-IndexInOneCC-Set }
 */
struct SRS_CC_SetIndex {
    bool has_cc_SetIndex; /**< cc-SetIndex 是否存在。 */
    int64_t cc_SetIndex; /**< ASN.1 cc-SetIndex；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_cc_IndexInOneCC_Set; /**< cc-IndexInOneCC-Set 是否存在。 */
    int64_t cc_IndexInOneCC_Set; /**< ASN.1 cc-IndexInOneCC-Set；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief PathlossReferenceRSList_r16
 * @note ASN.1：PathlossReferenceRSList-r16；源文件第 13129 行。
 * @note PathlossReferenceRSList-r16 ::= SEQUENCE OF (size 1..64) OF PathlossReferenceRS-r16
 */
struct PathlossReferenceRSList_r16 {
    PathlossReferenceRS_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PathlossReferenceRSList_r16
 * @note ASN.1：SetupRelease<PathlossReferenceRSList-r16>；源文件第 13110 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PathlossReferenceRSList_r16_Tag {
    SetupRelease_PathlossReferenceRSList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PathlossReferenceRSList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PathlossReferenceRSList_r16_Tag;

struct SetupRelease_PathlossReferenceRSList_r16 {
    SetupRelease_PathlossReferenceRSList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PathlossReferenceRSList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_ResourceSet_ExtGroup1
 * @note ASN.1：SRS_ResourceSet_ExtGroup1；源文件第 13109 行。
 */
struct SRS_ResourceSet_ExtGroup1 {
    bool has_pathlossReferenceRSList_r16; /**< pathlossReferenceRSList-r16 是否存在。 */
    SetupRelease_PathlossReferenceRSList_r16 pathlossReferenceRSList_r16; /**< ASN.1 pathlossReferenceRSList-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_ResourceSet_ExtGroup2
 * @note ASN.1：SRS_ResourceSet_ExtGroup2；源文件第 13112 行。
 */
struct SRS_ResourceSet_ExtGroup2 {
    bool has_usagePDC_r17; /**< usagePDC-r17 是否存在。 */
    SRS_ResourceSet_ExtGroup2_UsagePDC_r17 usagePDC_r17; /**< ASN.1 usagePDC-r17；枚举；OPTIONAL。 */
    bool has_availableSlotOffsetList_r17; /**< availableSlotOffsetList-r17 是否存在。 */
    AvailableSlotOffset_r17* availableSlotOffsetList_r17_items; /**< ASN.1 availableSlotOffsetList-r17；SEQUENCE OF AvailableSlotOffset_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t availableSlotOffsetList_r17_count; /**< availableSlotOffsetList-r17 元素个数。 */
    bool has_followUnifiedTCI_StateSRS_r17; /**< followUnifiedTCI-StateSRS-r17 是否存在。 */
    SRS_ResourceSet_ExtGroup2_FollowUnifiedTCI_StateSRS_r17 followUnifiedTCI_StateSRS_r17; /**< ASN.1 followUnifiedTCI-StateSRS-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_ResourceSet_ExtGroup3
 * @note ASN.1：SRS_ResourceSet_ExtGroup3；源文件第 13117 行。
 */
struct SRS_ResourceSet_ExtGroup3 {
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    SRS_ResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PathlossReferenceRS_Config
 * @note ASN.1：PathlossReferenceRS-Config；源文件第 13124 行。
 * @note PathlossReferenceRS-Config ::= CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PathlossReferenceRS_Config_Tag {
    PathlossReferenceRS_Config_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    PathlossReferenceRS_Config_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} PathlossReferenceRS_Config_Tag;

struct PathlossReferenceRS_Config {
    PathlossReferenceRS_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1
 * @note ASN.1：SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1；源文件第 13089 行。
 */
struct SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1 {
    bool has_aperiodicSRS_ResourceTriggerList; /**< aperiodicSRS-ResourceTriggerList 是否存在。 */
    int64_t* aperiodicSRS_ResourceTriggerList_items; /**< ASN.1 aperiodicSRS-ResourceTriggerList；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodicSRS_ResourceTriggerList_count; /**< aperiodicSRS-ResourceTriggerList 元素个数。 */
};


/**
 * @brief SRS_ResourceSet_ResourceType_Aperiodic
 * @note ASN.1：resourceType/aperiodic；源文件第 13084 行。
 * @note SEQUENCE { aperiodicSRS-ResourceTrigger, csi-RS, slotOffset, aperiodicSRS-Res...
 */
struct SRS_ResourceSet_ResourceType_Aperiodic {
    int64_t aperiodicSRS_ResourceTrigger; /**< ASN.1 aperiodicSRS-ResourceTrigger；INTEGER (1..3)，位宽 2 bit。 */
    bool has_csi_RS; /**< csi-RS 是否存在。 */
    NZP_CSI_RS_ResourceId csi_RS; /**< ASN.1 csi-RS；INTEGER (0..191)，位宽 8 bit；OPTIONAL。 */
    bool has_slotOffset; /**< slotOffset 是否存在。 */
    int64_t slotOffset; /**< ASN.1 slotOffset；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_ResourceSet_ResourceType_Aperiodic_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SRS_ResourceSet_ResourceType_Semi_persistent
 * @note ASN.1：resourceType/semi-persistent；源文件第 13094 行。
 * @note SEQUENCE { associatedCSI-RS }
 */
struct SRS_ResourceSet_ResourceType_Semi_persistent {
    bool has_associatedCSI_RS; /**< associatedCSI-RS 是否存在。 */
    NZP_CSI_RS_ResourceId associatedCSI_RS; /**< ASN.1 associatedCSI-RS；INTEGER (0..191)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SRS_ResourceSet_ResourceType_Periodic
 * @note ASN.1：resourceType/periodic；源文件第 13098 行。
 * @note SEQUENCE { associatedCSI-RS }
 */
struct SRS_ResourceSet_ResourceType_Periodic {
    bool has_associatedCSI_RS; /**< associatedCSI-RS 是否存在。 */
    NZP_CSI_RS_ResourceId associatedCSI_RS; /**< ASN.1 associatedCSI-RS；INTEGER (0..191)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SRS_ResourceSet_ResourceType
 * @note ASN.1：resourceType；源文件第 13083 行。
 * @note CHOICE { aperiodic, semi-persistent, periodic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_ResourceSet_ResourceType_Tag {
    SRS_ResourceSet_ResourceType_Tag_aperiodic = 0, /**< ASN.1 aperiodic */
    SRS_ResourceSet_ResourceType_Tag_semi_persistent = 1, /**< ASN.1 semi-persistent */
    SRS_ResourceSet_ResourceType_Tag_periodic = 2, /**< ASN.1 periodic */
} SRS_ResourceSet_ResourceType_Tag;

struct SRS_ResourceSet_ResourceType {
    SRS_ResourceSet_ResourceType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_ResourceSet_ResourceType_Aperiodic aperiodic; /**< ASN.1 aperiodic */
        SRS_ResourceSet_ResourceType_Semi_persistent semi_persistent; /**< ASN.1 semi-persistent */
        SRS_ResourceSet_ResourceType_Periodic periodic; /**< ASN.1 periodic */
    } u;
};


/**
 * @brief SRS_ResourceSet
 * @note ASN.1：SRS-ResourceSet；源文件第 13080 行。
 * @note SRS-ResourceSet ::= SEQUENCE { srs-ResourceSetId, srs-ResourceIdList, resourceType, usage, alpha,...
 */
struct SRS_ResourceSet {
    SRS_ResourceSetId srs_ResourceSetId; /**< ASN.1 srs-ResourceSetId；INTEGER (0..15)，位宽 4 bit。 */
    bool has_srs_ResourceIdList; /**< srs-ResourceIdList 是否存在。 */
    SRS_ResourceId* srs_ResourceIdList_items; /**< ASN.1 srs-ResourceIdList；SEQUENCE OF SRS_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceIdList_count; /**< srs-ResourceIdList 元素个数。 */
    SRS_ResourceSet_ResourceType resourceType; /**< ASN.1 resourceType；结构体。 */
    SRS_ResourceSet_Usage usage; /**< ASN.1 usage；枚举。 */
    bool has_alpha; /**< alpha 是否存在。 */
    Alpha alpha; /**< ASN.1 alpha；枚举；OPTIONAL。 */
    bool has_p0; /**< p0 是否存在。 */
    int64_t p0; /**< ASN.1 p0；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_pathlossReferenceRS; /**< pathlossReferenceRS 是否存在。 */
    PathlossReferenceRS_Config pathlossReferenceRS; /**< ASN.1 pathlossReferenceRS；结构体；OPTIONAL。 */
    bool has_srs_PowerControlAdjustmentStates; /**< srs-PowerControlAdjustmentStates 是否存在。 */
    SRS_ResourceSet_Srs_PowerControlAdjustmentStates srs_PowerControlAdjustmentStates; /**< ASN.1 srs-PowerControlAdjustmentStates；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_ResourceSet_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SRS_ResourceSet_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SRS_ResourceSet_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PathlossReferenceRS_r16
 * @note ASN.1：PathlossReferenceRS-r16；源文件第 13131 行。
 * @note PathlossReferenceRS-r16 ::= SEQUENCE { srs-PathlossReferenceRS-Id-r16, pathlossReferenceRS-r16 }
 */
struct PathlossReferenceRS_r16 {
    SRS_PathlossReferenceRS_Id_r16 srs_PathlossReferenceRS_Id_r16; /**< ASN.1 srs-PathlossReferenceRS-Id-r16；INTEGER (0..63)，位宽 6 bit。 */
    PathlossReferenceRS_Config pathlossReferenceRS_r16; /**< ASN.1 pathlossReferenceRS-r16；结构体。 */
};


/**
 * @brief SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16
 * @note ASN.1：resourceType-r16/aperiodic-r16；源文件第 13143 行。
 * @note SEQUENCE { aperiodicSRS-ResourceTriggerList-r16 }
 */
struct SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16 {
    bool has_aperiodicSRS_ResourceTriggerList_r16; /**< aperiodicSRS-ResourceTriggerList-r16 是否存在。 */
    int64_t* aperiodicSRS_ResourceTriggerList_r16_items; /**< ASN.1 aperiodicSRS-ResourceTriggerList-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodicSRS_ResourceTriggerList_r16_count; /**< aperiodicSRS-ResourceTriggerList-r16 元素个数。 */
};


/**
 * @brief SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16
 * @note ASN.1：resourceType-r16/semi-persistent-r16；源文件第 13148 行。
 * @note SEQUENCE { }
 */
struct SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16
 * @note ASN.1：resourceType-r16/periodic-r16；源文件第 13151 行。
 * @note SEQUENCE { }
 */
struct SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SRS_PosResourceSet_r16_ResourceType_r16
 * @note ASN.1：resourceType-r16；源文件第 13142 行。
 * @note CHOICE { aperiodic-r16, semi-persistent-r16, periodic-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PosResourceSet_r16_ResourceType_r16_Tag {
    SRS_PosResourceSet_r16_ResourceType_r16_Tag_aperiodic_r16 = 0, /**< ASN.1 aperiodic-r16 */
    SRS_PosResourceSet_r16_ResourceType_r16_Tag_semi_persistent_r16 = 1, /**< ASN.1 semi-persistent-r16 */
    SRS_PosResourceSet_r16_ResourceType_r16_Tag_periodic_r16 = 2, /**< ASN.1 periodic-r16 */
} SRS_PosResourceSet_r16_ResourceType_r16_Tag;

struct SRS_PosResourceSet_r16_ResourceType_r16 {
    SRS_PosResourceSet_r16_ResourceType_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_PosResourceSet_r16_ResourceType_r16_Aperiodic_r16 aperiodic_r16; /**< ASN.1 aperiodic-r16 */
        SRS_PosResourceSet_r16_ResourceType_r16_Semi_persistent_r16 semi_persistent_r16; /**< ASN.1 semi-persistent-r16 */
        SRS_PosResourceSet_r16_ResourceType_r16_Periodic_r16 periodic_r16; /**< ASN.1 periodic-r16 */
    } u;
};


/**
 * @brief SSB_Configuration_r16_Sfn0_Offset_r16
 * @note ASN.1：sfn0-Offset-r16；源文件第 13363 行。
 * @note SEQUENCE { sfn-Offset-r16, integerSubframeOffset-r16 }
 */
struct SSB_Configuration_r16_Sfn0_Offset_r16 {
    int64_t sfn_Offset_r16; /**< ASN.1 sfn-Offset-r16；INTEGER (0..1023)，位宽 10 bit。 */
    bool has_integerSubframeOffset_r16; /**< integerSubframeOffset-r16 是否存在。 */
    int64_t integerSubframeOffset_r16; /**< ASN.1 integerSubframeOffset-r16；INTEGER (0..9)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SSB_Configuration_r16
 * @note ASN.1：SSB-Configuration-r16；源文件第 13358 行。
 * @note SSB-Configuration-r16 ::= SEQUENCE { ssb-Freq-r16, halfFrameIndex-r16, ssbSubcarrierSpacing-r16, ssb-Pe...
 */
struct SSB_Configuration_r16 {
    ARFCN_ValueNR ssb_Freq_r16; /**< ASN.1 ssb-Freq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    SSB_Configuration_r16_HalfFrameIndex_r16 halfFrameIndex_r16; /**< ASN.1 halfFrameIndex-r16；枚举。 */
    SubcarrierSpacing ssbSubcarrierSpacing_r16; /**< ASN.1 ssbSubcarrierSpacing-r16；枚举。 */
    bool has_ssb_Periodicity_r16; /**< ssb-Periodicity-r16 是否存在。 */
    SSB_Configuration_r16_Ssb_Periodicity_r16 ssb_Periodicity_r16; /**< ASN.1 ssb-Periodicity-r16；枚举；OPTIONAL。 */
    bool has_sfn0_Offset_r16; /**< sfn0-Offset-r16 是否存在。 */
    SSB_Configuration_r16_Sfn0_Offset_r16 sfn0_Offset_r16; /**< ASN.1 sfn0-Offset-r16；结构体；OPTIONAL。 */
    int64_t sfn_SSB_Offset_r16; /**< ASN.1 sfn-SSB-Offset-r16；INTEGER (0..15)，位宽 4 bit。 */
    bool has_ss_PBCH_BlockPower_r16; /**< ss-PBCH-BlockPower-r16 是否存在。 */
    int64_t ss_PBCH_BlockPower_r16; /**< ASN.1 ss-PBCH-BlockPower-r16；INTEGER (-60..50)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SSB_InfoNcell_r16
 * @note ASN.1：SSB-InfoNcell-r16；源文件第 13371 行。
 * @note SSB-InfoNcell-r16 ::= SEQUENCE { physicalCellId-r16, ssb-IndexNcell-r16, ssb-Configuration-r16 }
 */
struct SSB_InfoNcell_r16 {
    PhysCellId physicalCellId_r16; /**< ASN.1 physicalCellId-r16；INTEGER (0..1007)，位宽 10 bit。 */
    bool has_ssb_IndexNcell_r16; /**< ssb-IndexNcell-r16 是否存在。 */
    SSB_Index ssb_IndexNcell_r16; /**< ASN.1 ssb-IndexNcell-r16；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_ssb_Configuration_r16; /**< ssb-Configuration-r16 是否存在。 */
    SSB_Configuration_r16 ssb_Configuration_r16; /**< ASN.1 ssb-Configuration-r16；结构体；OPTIONAL。 */
};


/**
 * @brief DL_PRS_Info_r16
 * @note ASN.1：DL-PRS-Info-r16；源文件第 13377 行。
 * @note DL-PRS-Info-r16 ::= SEQUENCE { dl-PRS-ID-r16, dl-PRS-ResourceSetId-r16, dl-PRS-ResourceId-r16 }
 */
struct DL_PRS_Info_r16 {
    int64_t dl_PRS_ID_r16; /**< ASN.1 dl-PRS-ID-r16；INTEGER (0..255)，位宽 8 bit。 */
    int64_t dl_PRS_ResourceSetId_r16; /**< ASN.1 dl-PRS-ResourceSetId-r16；INTEGER (0..7)，位宽 3 bit。 */
    bool has_dl_PRS_ResourceId_r16; /**< dl-PRS-ResourceId-r16 是否存在。 */
    int64_t dl_PRS_ResourceId_r16; /**< ASN.1 dl-PRS-ResourceId-r16；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16
 * @note ASN.1：pathlossReferenceRS-Pos-r16；源文件第 13157 行。
 * @note CHOICE { ssb-IndexServing-r16, ssb-Ncell-r16, dl-PRS-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag {
    SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_IndexServing_r16 = 0, /**< ASN.1 ssb-IndexServing-r16 */
    SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_ssb_Ncell_r16 = 1, /**< ASN.1 ssb-Ncell-r16 */
    SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag_dl_PRS_r16 = 2, /**< ASN.1 dl-PRS-r16 */
} SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag;

struct SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16 {
    SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_IndexServing_r16; /**< ASN.1 ssb-IndexServing-r16 */
        SSB_InfoNcell_r16 ssb_Ncell_r16; /**< ASN.1 ssb-Ncell-r16 */
        DL_PRS_Info_r16 dl_PRS_r16; /**< ASN.1 dl-PRS-r16 */
    } u;
};


/**
 * @brief SRS_PosResourceSet_r16
 * @note ASN.1：SRS-PosResourceSet-r16；源文件第 13138 行。
 * @note SRS-PosResourceSet-r16 ::= SEQUENCE { srs-PosResourceSetId-r16, srs-PosResourceIdList-r16, resourceType-...
 */
struct SRS_PosResourceSet_r16 {
    SRS_PosResourceSetId_r16 srs_PosResourceSetId_r16; /**< ASN.1 srs-PosResourceSetId-r16；INTEGER (0..15)，位宽 4 bit。 */
    bool has_srs_PosResourceIdList_r16; /**< srs-PosResourceIdList-r16 是否存在。 */
    SRS_PosResourceId_r16* srs_PosResourceIdList_r16_items; /**< ASN.1 srs-PosResourceIdList-r16；SEQUENCE OF SRS_PosResourceId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceIdList_r16_count; /**< srs-PosResourceIdList-r16 元素个数。 */
    SRS_PosResourceSet_r16_ResourceType_r16 resourceType_r16; /**< ASN.1 resourceType-r16；结构体。 */
    bool has_alpha_r16; /**< alpha-r16 是否存在。 */
    Alpha alpha_r16; /**< ASN.1 alpha-r16；枚举；OPTIONAL。 */
    bool has_p0_r16; /**< p0-r16 是否存在。 */
    int64_t p0_r16; /**< ASN.1 p0-r16；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_pathlossReferenceRS_Pos_r16; /**< pathlossReferenceRS-Pos-r16 是否存在。 */
    SRS_PosResourceSet_r16_PathlossReferenceRS_Pos_r16 pathlossReferenceRS_Pos_r16; /**< ASN.1 pathlossReferenceRS-Pos-r16；结构体；OPTIONAL。 */
};


/**
 * @brief TxHoppingConfig_r18
 * @note ASN.1：TxHoppingConfig-r18；源文件第 13452 行。
 * @note TxHoppingConfig-r18 ::= SEQUENCE { overlapValue-r18, numberOfHops-r18, slotOffsetForRemainingHopsList...
 */
struct TxHoppingConfig_r18 {
    TxHoppingConfig_r18_OverlapValue_r18 overlapValue_r18; /**< ASN.1 overlapValue-r18；枚举。 */
    int64_t numberOfHops_r18; /**< ASN.1 numberOfHops-r18；INTEGER (2..6)，位宽 3 bit。 */
    SlotOffsetForRemainingHops_r18* slotOffsetForRemainingHopsList_r18_items; /**< ASN.1 slotOffsetForRemainingHopsList-r18；SEQUENCE OF SlotOffsetForRemainingHops_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t slotOffsetForRemainingHopsList_r18_count; /**< slotOffsetForRemainingHopsList-r18 元素个数。 */
};


/**
 * @brief SRS_PosResource_r16_ExtGroup1
 * @note ASN.1：SRS_PosResource_r16_ExtGroup1；源文件第 13321 行。
 */
struct SRS_PosResource_r16_ExtGroup1 {
    bool has_srs_PosPeriodicConfigHyperSFN_Index_r18; /**< srs-PosPeriodicConfigHyperSFN-Index-r18 是否存在。 */
    SRS_PosResource_r16_ExtGroup1_Srs_PosPeriodicConfigHyperSFN_Index_r18 srs_PosPeriodicConfigHyperSFN_Index_r18; /**< ASN.1 srs-PosPeriodicConfigHyperSFN-Index-r18；枚举；OPTIONAL。 */
    bool has_txHoppingConfig_r18; /**< txHoppingConfig-r18 是否存在。 */
    TxHoppingConfig_r18 txHoppingConfig_r18; /**< ASN.1 txHoppingConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16
 * @note ASN.1：servingRS-r16/referenceSignal-r16/srs-SpatialRelation-r16/resourceSelection-r16；源文件第 13346 行。
 * @note CHOICE { srs-ResourceId-r16, srs-PosResourceId-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag {
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_ResourceId_r16 = 0, /**< ASN.1 srs-ResourceId-r16 */
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag_srs_PosResourceId_r16 = 1, /**< ASN.1 srs-PosResourceId-r16 */
} SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag;

struct SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16 {
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_ResourceId srs_ResourceId_r16; /**< ASN.1 srs-ResourceId-r16 */
        SRS_PosResourceId_r16 srs_PosResourceId_r16; /**< ASN.1 srs-PosResourceId-r16 */
    } u;
};


/**
 * @brief SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16
 * @note ASN.1：servingRS-r16/referenceSignal-r16/srs-SpatialRelation-r16；源文件第 13345 行。
 * @note SEQUENCE { resourceSelection-r16, uplinkBWP-r16 }
 */
struct SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16 {
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16_ResourceSelection_r16 resourceSelection_r16; /**< ASN.1 resourceSelection-r16；结构体。 */
    BWP_Id uplinkBWP_r16; /**< ASN.1 uplinkBWP-r16；INTEGER (0..4)，位宽 3 bit。 */
};


/**
 * @brief SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16
 * @note ASN.1：servingRS-r16/referenceSignal-r16；源文件第 13342 行。
 * @note CHOICE { ssb-IndexServing-r16, csi-RS-IndexServing-r16, srs-SpatialRelation-r...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag {
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_ssb_IndexServing_r16 = 0, /**< ASN.1 ssb-IndexServing-r16 */
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_csi_RS_IndexServing_r16 = 1, /**< ASN.1 csi-RS-IndexServing-r16 */
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag_srs_SpatialRelation_r16 = 2, /**< ASN.1 srs-SpatialRelation-r16 */
} SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag;

struct SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16 {
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_IndexServing_r16; /**< ASN.1 ssb-IndexServing-r16 */
        NZP_CSI_RS_ResourceId csi_RS_IndexServing_r16; /**< ASN.1 csi-RS-IndexServing-r16 */
        SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16_Srs_SpatialRelation_r16 srs_SpatialRelation_r16; /**< ASN.1 srs-SpatialRelation-r16 */
    } u;
};


/**
 * @brief SRS_SpatialRelationInfoPos_r16_ServingRS_r16
 * @note ASN.1：servingRS-r16；源文件第 13340 行。
 * @note SEQUENCE { servingCellId, referenceSignal-r16 }
 */
struct SRS_SpatialRelationInfoPos_r16_ServingRS_r16 {
    bool has_servingCellId; /**< servingCellId 是否存在。 */
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    SRS_SpatialRelationInfoPos_r16_ServingRS_r16_ReferenceSignal_r16 referenceSignal_r16; /**< ASN.1 referenceSignal-r16；结构体。 */
};


/**
 * @brief SRS_SpatialRelationInfoPos_r16
 * @note ASN.1：SRS-SpatialRelationInfoPos-r16；源文件第 13339 行。
 * @note SRS-SpatialRelationInfoPos-r16 ::= CHOICE { servingRS-r16, ssb-Ncell-r16, dl-PRS-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_SpatialRelationInfoPos_r16_Tag {
    SRS_SpatialRelationInfoPos_r16_Tag_servingRS_r16 = 0, /**< ASN.1 servingRS-r16 */
    SRS_SpatialRelationInfoPos_r16_Tag_ssb_Ncell_r16 = 1, /**< ASN.1 ssb-Ncell-r16 */
    SRS_SpatialRelationInfoPos_r16_Tag_dl_PRS_r16 = 2, /**< ASN.1 dl-PRS-r16 */
} SRS_SpatialRelationInfoPos_r16_Tag;

struct SRS_SpatialRelationInfoPos_r16 {
    SRS_SpatialRelationInfoPos_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_SpatialRelationInfoPos_r16_ServingRS_r16 servingRS_r16; /**< ASN.1 servingRS-r16 */
        SSB_InfoNcell_r16 ssb_Ncell_r16; /**< ASN.1 ssb-Ncell-r16 */
        DL_PRS_Info_r16 dl_PRS_r16; /**< ASN.1 dl-PRS-r16 */
    } u;
};


/**
 * @brief SRS_PosResource_r16_TransmissionComb_r16_N2_r16
 * @note ASN.1：transmissionComb-r16/n2-r16；源文件第 13274 行。
 * @note SEQUENCE { combOffset-n2-r16, cyclicShift-n2-r16 }
 */
struct SRS_PosResource_r16_TransmissionComb_r16_N2_r16 {
    int64_t combOffset_n2_r16; /**< ASN.1 combOffset-n2-r16；INTEGER (0..1)，位宽 1 bit。 */
    int64_t cyclicShift_n2_r16; /**< ASN.1 cyclicShift-n2-r16；INTEGER (0..7)，位宽 3 bit。 */
};


/**
 * @brief SRS_PosResource_r16_TransmissionComb_r16_N4_r16
 * @note ASN.1：transmissionComb-r16/n4-r16；源文件第 13278 行。
 * @note SEQUENCE { combOffset-n4-r16, cyclicShift-n4-r16 }
 */
struct SRS_PosResource_r16_TransmissionComb_r16_N4_r16 {
    int64_t combOffset_n4_r16; /**< ASN.1 combOffset-n4-r16；INTEGER (0..3)，位宽 2 bit。 */
    int64_t cyclicShift_n4_r16; /**< ASN.1 cyclicShift-n4-r16；INTEGER (0..11)，位宽 4 bit。 */
};


/**
 * @brief SRS_PosResource_r16_TransmissionComb_r16_N8_r16
 * @note ASN.1：transmissionComb-r16/n8-r16；源文件第 13282 行。
 * @note SEQUENCE { combOffset-n8-r16, cyclicShift-n8-r16 }
 */
struct SRS_PosResource_r16_TransmissionComb_r16_N8_r16 {
    int64_t combOffset_n8_r16; /**< ASN.1 combOffset-n8-r16；INTEGER (0..7)，位宽 3 bit。 */
    int64_t cyclicShift_n8_r16; /**< ASN.1 cyclicShift-n8-r16；INTEGER (0..5)，位宽 3 bit。 */
};


/**
 * @brief SRS_PosResource_r16_TransmissionComb_r16
 * @note ASN.1：transmissionComb-r16；源文件第 13273 行。
 * @note CHOICE { n2-r16, n4-r16, n8-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PosResource_r16_TransmissionComb_r16_Tag {
    SRS_PosResource_r16_TransmissionComb_r16_Tag_n2_r16 = 0, /**< ASN.1 n2-r16 */
    SRS_PosResource_r16_TransmissionComb_r16_Tag_n4_r16 = 1, /**< ASN.1 n4-r16 */
    SRS_PosResource_r16_TransmissionComb_r16_Tag_n8_r16 = 2, /**< ASN.1 n8-r16 */
} SRS_PosResource_r16_TransmissionComb_r16_Tag;

struct SRS_PosResource_r16_TransmissionComb_r16 {
    SRS_PosResource_r16_TransmissionComb_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_PosResource_r16_TransmissionComb_r16_N2_r16 n2_r16; /**< ASN.1 n2-r16 */
        SRS_PosResource_r16_TransmissionComb_r16_N4_r16 n4_r16; /**< ASN.1 n4-r16 */
        SRS_PosResource_r16_TransmissionComb_r16_N8_r16 n8_r16; /**< ASN.1 n8-r16 */
    } u;
};


/**
 * @brief SRS_PosResource_r16_ResourceMapping_r16
 * @note ASN.1：resourceMapping-r16；源文件第 13288 行。
 * @note SEQUENCE { startPosition-r16, nrofSymbols-r16 }
 */
struct SRS_PosResource_r16_ResourceMapping_r16 {
    int64_t startPosition_r16; /**< ASN.1 startPosition-r16；INTEGER (0..13)，位宽 4 bit。 */
    SRS_PosResource_r16_ResourceMapping_r16_NrofSymbols_r16 nrofSymbols_r16; /**< ASN.1 nrofSymbols-r16；枚举。 */
};


/**
 * @brief SRS_PosResource_r16_FreqHopping_r16
 * @note ASN.1：freqHopping-r16；源文件第 13293 行。
 * @note SEQUENCE { c-SRS-r16 }
 */
struct SRS_PosResource_r16_FreqHopping_r16 {
    int64_t c_SRS_r16; /**< ASN.1 c-SRS-r16；INTEGER (0..63)，位宽 6 bit。 */
};


/**
 * @brief SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16
 * @note ASN.1：resourceType-r16/aperiodic-r16；源文件第 13299 行。
 * @note SEQUENCE { slotOffset-r16 }
 */
struct SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16 {
    bool has_slotOffset_r16; /**< slotOffset-r16 是否存在。 */
    int64_t slotOffset_r16; /**< ASN.1 slotOffset-r16；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1
 * @note ASN.1：SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1；源文件第 13306 行。
 */
struct SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1 {
    bool has_periodicityAndOffset_sp_Ext_r16; /**< periodicityAndOffset-sp-Ext-r16 是否存在。 */
    SRS_PeriodicityAndOffsetExt_r16 periodicityAndOffset_sp_Ext_r16; /**< ASN.1 periodicityAndOffset-sp-Ext-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16
 * @note ASN.1：resourceType-r16/semi-persistent-r16；源文件第 13303 行。
 * @note SEQUENCE { periodicityAndOffset-sp-r16, periodicityAndOffset-sp-Ext-r16 }
 */
struct SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16 {
    SRS_PeriodicityAndOffset_r16 periodicityAndOffset_sp_r16; /**< ASN.1 periodicityAndOffset-sp-r16；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1
 * @note ASN.1：SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1；源文件第 13313 行。
 */
struct SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1 {
    bool has_periodicityAndOffset_p_Ext_r16; /**< periodicityAndOffset-p-Ext-r16 是否存在。 */
    SRS_PeriodicityAndOffsetExt_r16 periodicityAndOffset_p_Ext_r16; /**< ASN.1 periodicityAndOffset-p-Ext-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_PosResource_r16_ResourceType_r16_Periodic_r16
 * @note ASN.1：resourceType-r16/periodic-r16；源文件第 13310 行。
 * @note SEQUENCE { periodicityAndOffset-p-r16, periodicityAndOffset-p-Ext-r16 }
 */
struct SRS_PosResource_r16_ResourceType_r16_Periodic_r16 {
    SRS_PeriodicityAndOffset_r16 periodicityAndOffset_p_r16; /**< ASN.1 periodicityAndOffset-p-r16；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_PosResource_r16_ResourceType_r16_Periodic_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SRS_PosResource_r16_ResourceType_r16
 * @note ASN.1：resourceType-r16；源文件第 13298 行。
 * @note CHOICE { aperiodic-r16, semi-persistent-r16, periodic-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PosResource_r16_ResourceType_r16_Tag {
    SRS_PosResource_r16_ResourceType_r16_Tag_aperiodic_r16 = 0, /**< ASN.1 aperiodic-r16 */
    SRS_PosResource_r16_ResourceType_r16_Tag_semi_persistent_r16 = 1, /**< ASN.1 semi-persistent-r16 */
    SRS_PosResource_r16_ResourceType_r16_Tag_periodic_r16 = 2, /**< ASN.1 periodic-r16 */
} SRS_PosResource_r16_ResourceType_r16_Tag;

struct SRS_PosResource_r16_ResourceType_r16 {
    SRS_PosResource_r16_ResourceType_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_PosResource_r16_ResourceType_r16_Aperiodic_r16 aperiodic_r16; /**< ASN.1 aperiodic-r16 */
        SRS_PosResource_r16_ResourceType_r16_Semi_persistent_r16 semi_persistent_r16; /**< ASN.1 semi-persistent-r16 */
        SRS_PosResource_r16_ResourceType_r16_Periodic_r16 periodic_r16; /**< ASN.1 periodic-r16 */
    } u;
};


/**
 * @brief SRS_PosResource_r16
 * @note ASN.1：SRS-PosResource-r16；源文件第 13271 行。
 * @note SRS-PosResource-r16 ::= SEQUENCE { srs-PosResourceId-r16, transmissionComb-r16, resourceMapping-r16, ...
 */
struct SRS_PosResource_r16 {
    SRS_PosResourceId_r16 srs_PosResourceId_r16; /**< ASN.1 srs-PosResourceId-r16；INTEGER (0..63)，位宽 6 bit。 */
    SRS_PosResource_r16_TransmissionComb_r16 transmissionComb_r16; /**< ASN.1 transmissionComb-r16；结构体。 */
    SRS_PosResource_r16_ResourceMapping_r16 resourceMapping_r16; /**< ASN.1 resourceMapping-r16；结构体。 */
    int64_t freqDomainShift_r16; /**< ASN.1 freqDomainShift-r16；INTEGER (0..268)，位宽 9 bit。 */
    SRS_PosResource_r16_FreqHopping_r16 freqHopping_r16; /**< ASN.1 freqHopping-r16；结构体。 */
    SRS_PosResource_r16_GroupOrSequenceHopping_r16 groupOrSequenceHopping_r16; /**< ASN.1 groupOrSequenceHopping-r16；枚举。 */
    SRS_PosResource_r16_ResourceType_r16 resourceType_r16; /**< ASN.1 resourceType-r16；结构体。 */
    int64_t sequenceId_r16; /**< ASN.1 sequenceId-r16；INTEGER (0..65535)，位宽 16 bit。 */
    bool has_spatialRelationInfoPos_r16; /**< spatialRelationInfoPos-r16 是否存在。 */
    SRS_SpatialRelationInfoPos_r16 spatialRelationInfoPos_r16; /**< ASN.1 spatialRelationInfoPos-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_PosResource_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18
 * @note ASN.1：slotOffsetRemainingHops-r18/aperiodic-r18；源文件第 13461 行。
 * @note SEQUENCE { slotOffset-r18, startPosition-r18 }
 */
struct SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18 {
    bool has_slotOffset_r18; /**< slotOffset-r18 是否存在。 */
    int64_t slotOffset_r18; /**< ASN.1 slotOffset-r18；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_startPosition_r18; /**< startPosition-r18 是否存在。 */
    int64_t startPosition_r18; /**< ASN.1 startPosition-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18
 * @note ASN.1：slotOffsetRemainingHops-r18/semi-persistent-r18；源文件第 13466 行。
 * @note SEQUENCE { periodicityAndOffset-sp-r18, periodicityAndOffset-sp-Ext-r18, star...
 */
struct SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18 {
    bool has_periodicityAndOffset_sp_r18; /**< periodicityAndOffset-sp-r18 是否存在。 */
    SRS_PeriodicityAndOffset_r16 periodicityAndOffset_sp_r18; /**< ASN.1 periodicityAndOffset-sp-r18；结构体；OPTIONAL。 */
    bool has_periodicityAndOffset_sp_Ext_r18; /**< periodicityAndOffset-sp-Ext-r18 是否存在。 */
    SRS_PeriodicityAndOffsetExt_r16 periodicityAndOffset_sp_Ext_r18; /**< ASN.1 periodicityAndOffset-sp-Ext-r18；结构体；OPTIONAL。 */
    bool has_startPosition_r18; /**< startPosition-r18 是否存在。 */
    int64_t startPosition_r18; /**< ASN.1 startPosition-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18
 * @note ASN.1：slotOffsetRemainingHops-r18/periodic-r18；源文件第 13472 行。
 * @note SEQUENCE { periodicityAndOffset-p-r18, periodicityAndOffset-p-Ext-r18, startP...
 */
struct SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18 {
    bool has_periodicityAndOffset_p_r18; /**< periodicityAndOffset-p-r18 是否存在。 */
    SRS_PeriodicityAndOffset_r16 periodicityAndOffset_p_r18; /**< ASN.1 periodicityAndOffset-p-r18；结构体；OPTIONAL。 */
    bool has_periodicityAndOffset_p_Ext_r18; /**< periodicityAndOffset-p-Ext-r18 是否存在。 */
    SRS_PeriodicityAndOffsetExt_r16 periodicityAndOffset_p_Ext_r18; /**< ASN.1 periodicityAndOffset-p-Ext-r18；结构体；OPTIONAL。 */
    bool has_startPosition_r18; /**< startPosition-r18 是否存在。 */
    int64_t startPosition_r18; /**< ASN.1 startPosition-r18；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18
 * @note ASN.1：slotOffsetRemainingHops-r18；源文件第 13460 行。
 * @note CHOICE { aperiodic-r18, semi-persistent-r18, periodic-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag {
    SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_aperiodic_r18 = 0, /**< ASN.1 aperiodic-r18 */
    SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_semi_persistent_r18 = 1, /**< ASN.1 semi-persistent-r18 */
    SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag_periodic_r18 = 2, /**< ASN.1 periodic-r18 */
} SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag;

struct SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18 {
    SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Aperiodic_r18 aperiodic_r18; /**< ASN.1 aperiodic-r18 */
        SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Semi_persistent_r18 semi_persistent_r18; /**< ASN.1 semi-persistent-r18 */
        SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18_Periodic_r18 periodic_r18; /**< ASN.1 periodic-r18 */
    } u;
};


/**
 * @brief SlotOffsetForRemainingHops_r18
 * @note ASN.1：SlotOffsetForRemainingHops-r18；源文件第 13459 行。
 * @note SlotOffsetForRemainingHops-r18 ::= SEQUENCE { slotOffsetRemainingHops-r18 }
 */
struct SlotOffsetForRemainingHops_r18 {
    SlotOffsetForRemainingHops_r18_SlotOffsetRemainingHops_r18 slotOffsetRemainingHops_r18; /**< ASN.1 slotOffsetRemainingHops-r18；结构体。 */
};


/**
 * @brief SRS_PosResourceSetLinkedForAggBW_r18
 * @note ASN.1：SRS-PosResourceSetLinkedForAggBW-r18；源文件第 13504 行。
 * @note SRS-PosResourceSetLinkedForAggBW-r18 ::= SEQUENCE { srs-PosResourceSetLinked-r18, freqInfo-r18, ul-bwp-ID-r18, scs-Spe...
 */
struct SRS_PosResourceSetLinkedForAggBW_r18 {
    SRS_PosResourceSetId_r16 srs_PosResourceSetLinked_r18; /**< ASN.1 srs-PosResourceSetLinked-r18；INTEGER (0..15)，位宽 4 bit。 */
    bool has_freqInfo_r18; /**< freqInfo-r18 是否存在。 */
    ARFCN_ValueNR freqInfo_r18; /**< ASN.1 freqInfo-r18；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_ul_bwp_ID_r18; /**< ul-bwp-ID-r18 是否存在。 */
    BWP_Id ul_bwp_ID_r18; /**< ASN.1 ul-bwp-ID-r18；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_scs_SpecificCarrier_r18; /**< scs-SpecificCarrier-r18 是否存在。 */
    SCS_SpecificCarrier scs_SpecificCarrier_r18; /**< ASN.1 scs-SpecificCarrier-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SSB_MTC3_r16_PeriodicityAndOffset_r16
 * @note ASN.1：periodicityAndOffset-r16；源文件第 13560 行。
 * @note CHOICE { sf5-r16, sf10-r16, sf20-r16, sf40-r16, sf80-r16, sf160-r16, sf320-r1...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag {
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf5_r16 = 0, /**< ASN.1 sf5-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf10_r16 = 1, /**< ASN.1 sf10-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf20_r16 = 2, /**< ASN.1 sf20-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf40_r16 = 3, /**< ASN.1 sf40-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf80_r16 = 4, /**< ASN.1 sf80-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf160_r16 = 5, /**< ASN.1 sf160-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf320_r16 = 6, /**< ASN.1 sf320-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf640_r16 = 7, /**< ASN.1 sf640-r16 */
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag_sf1280_r16 = 8, /**< ASN.1 sf1280-r16 */
} SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag;

struct SSB_MTC3_r16_PeriodicityAndOffset_r16 {
    SSB_MTC3_r16_PeriodicityAndOffset_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sf5_r16; /**< ASN.1 sf5-r16 */
        int64_t sf10_r16; /**< ASN.1 sf10-r16 */
        int64_t sf20_r16; /**< ASN.1 sf20-r16 */
        int64_t sf40_r16; /**< ASN.1 sf40-r16 */
        int64_t sf80_r16; /**< ASN.1 sf80-r16 */
        int64_t sf160_r16; /**< ASN.1 sf160-r16 */
        int64_t sf320_r16; /**< ASN.1 sf320-r16 */
        int64_t sf640_r16; /**< ASN.1 sf640-r16 */
        int64_t sf1280_r16; /**< ASN.1 sf1280-r16 */
    } u;
};


/**
 * @brief SSB_MTC3_r16
 * @note ASN.1：SSB-MTC3-r16；源文件第 13559 行。
 * @note SSB-MTC3-r16 ::= SEQUENCE { periodicityAndOffset-r16, duration-r16, pci-List-r16, ssb-ToMeasur...
 */
struct SSB_MTC3_r16 {
    SSB_MTC3_r16_PeriodicityAndOffset_r16 periodicityAndOffset_r16; /**< ASN.1 periodicityAndOffset-r16；结构体。 */
    SSB_MTC3_r16_Duration_r16 duration_r16; /**< ASN.1 duration-r16；枚举。 */
    bool has_pci_List_r16; /**< pci-List-r16 是否存在。 */
    PhysCellId* pci_List_r16_items; /**< ASN.1 pci-List-r16；SEQUENCE OF PhysCellId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pci_List_r16_count; /**< pci-List-r16 元素个数。 */
    bool has_ssb_ToMeasure_r16; /**< ssb-ToMeasure-r16 是否存在。 */
    SetupRelease_SSB_ToMeasure ssb_ToMeasure_r16; /**< ASN.1 ssb-ToMeasure-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SSB_MTC4_r17
 * @note ASN.1：SSB-MTC4-r17；源文件第 13576 行。
 * @note SSB-MTC4-r17 ::= SEQUENCE { pci-List-r17, offset-r17 }
 */
struct SSB_MTC4_r17 {
    bool has_pci_List_r17; /**< pci-List-r17 是否存在。 */
    PhysCellId* pci_List_r17_items; /**< ASN.1 pci-List-r17；SEQUENCE OF PhysCellId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pci_List_r17_count; /**< pci-List-r17 元素个数。 */
    int64_t offset_r17; /**< ASN.1 offset-r17；INTEGER (0..159)，位宽 8 bit。 */
};


/**
 * @brief SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17
 * @note ASN.1：ssb-PositionsInBurst-r17；源文件第 13585 行。
 * @note CHOICE { shortBitmap, mediumBitmap, longBitmap }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag {
    SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_shortBitmap = 0, /**< ASN.1 shortBitmap */
    SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_mediumBitmap = 1, /**< ASN.1 mediumBitmap */
    SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag_longBitmap = 2, /**< ASN.1 longBitmap */
} SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag;

struct SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17 {
    SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString shortBitmap; /**< ASN.1 shortBitmap */
        BitString mediumBitmap; /**< ASN.1 mediumBitmap */
        BitString longBitmap; /**< ASN.1 longBitmap */
    } u;
};


/**
 * @brief SSB_MTC_AdditionalPCI_r17
 * @note ASN.1：SSB-MTC-AdditionalPCI-r17；源文件第 13581 行。
 * @note SSB-MTC-AdditionalPCI-r17 ::= SEQUENCE { additionalPCIIndex-r17, additionalPCI-r17, periodicity-r17, ssb-Po...
 */
struct SSB_MTC_AdditionalPCI_r17 {
    AdditionalPCIIndex_r17 additionalPCIIndex_r17; /**< ASN.1 additionalPCIIndex-r17；INTEGER (1..7)，位宽 3 bit。 */
    PhysCellId additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (0..1007)，位宽 10 bit。 */
    SSB_MTC_AdditionalPCI_r17_Periodicity_r17 periodicity_r17; /**< ASN.1 periodicity-r17；枚举。 */
    SSB_MTC_AdditionalPCI_r17_Ssb_PositionsInBurst_r17 ssb_PositionsInBurst_r17; /**< ASN.1 ssb-PositionsInBurst-r17；结构体。 */
    int64_t ss_PBCH_BlockPower_r17; /**< ASN.1 ss-PBCH-BlockPower-r17；INTEGER (-60..50)，位宽 7 bit。 */
};


/**
 * @brief TAG
 * @note ASN.1：TAG；源文件第 13632 行。
 * @note TAG ::= SEQUENCE { tag-Id, timeAlignmentTimer }
 */
struct TAG {
    TAG_Id tag_Id; /**< ASN.1 tag-Id；INTEGER (0..3)，位宽 2 bit。 */
    TimeAlignmentTimer timeAlignmentTimer; /**< ASN.1 timeAlignmentTimer；枚举。 */
};


/**
 * @brief TCI_State_ExtGroup1
 * @note ASN.1：TCI_State_ExtGroup1；源文件第 13672 行。
 */
struct TCI_State_ExtGroup1 {
    bool has_additionalPCI_r17; /**< additionalPCI-r17 是否存在。 */
    AdditionalPCIIndex_r17 additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
    bool has_pathlossReferenceRS_Id_r17; /**< pathlossReferenceRS-Id-r17 是否存在。 */
    PathlossReferenceRS_Id_r17 pathlossReferenceRS_Id_r17; /**< ASN.1 pathlossReferenceRS-Id-r17；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_ul_powerControl_r17; /**< ul-powerControl-r17 是否存在。 */
    Uplink_powerControlId_r17 ul_powerControl_r17; /**< ASN.1 ul-powerControl-r17；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief TCI_State_ExtGroup2
 * @note ASN.1：TCI_State_ExtGroup2；源文件第 13677 行。
 */
struct TCI_State_ExtGroup2 {
    bool has_tag_Id_ptr_r18; /**< tag-Id-ptr-r18 是否存在。 */
    TCI_State_ExtGroup2_Tag_Id_ptr_r18 tag_Id_ptr_r18; /**< ASN.1 tag-Id-ptr-r18；枚举；OPTIONAL。 */
};


/**
 * @brief QCL_Info_ReferenceSignal
 * @note ASN.1：referenceSignal；源文件第 13685 行。
 * @note CHOICE { csi-rs, ssb }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum QCL_Info_ReferenceSignal_Tag {
    QCL_Info_ReferenceSignal_Tag_csi_rs = 0, /**< ASN.1 csi-rs */
    QCL_Info_ReferenceSignal_Tag_ssb = 1, /**< ASN.1 ssb */
} QCL_Info_ReferenceSignal_Tag;

struct QCL_Info_ReferenceSignal {
    QCL_Info_ReferenceSignal_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NZP_CSI_RS_ResourceId csi_rs; /**< ASN.1 csi-rs */
        SSB_Index ssb; /**< ASN.1 ssb */
    } u;
};


/**
 * @brief QCL_Info
 * @note ASN.1：QCL-Info；源文件第 13682 行。
 * @note QCL-Info ::= SEQUENCE { cell, bwp-Id, referenceSignal, qcl-Type }
 */
struct QCL_Info {
    bool has_cell; /**< cell 是否存在。 */
    ServCellIndex cell; /**< ASN.1 cell；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_bwp_Id; /**< bwp-Id 是否存在。 */
    BWP_Id bwp_Id; /**< ASN.1 bwp-Id；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    QCL_Info_ReferenceSignal referenceSignal; /**< ASN.1 referenceSignal；结构体。 */
    QCL_Info_Qcl_Type qcl_Type; /**< ASN.1 qcl-Type；枚举。 */
};


/**
 * @brief TCI_State
 * @note ASN.1：TCI-State；源文件第 13667 行。
 * @note TCI-State ::= SEQUENCE { tci-StateId, qcl-Type1, qcl-Type2, additionalPCI-r17, pathlossRefe...
 */
struct TCI_State {
    TCI_StateId tci_StateId; /**< ASN.1 tci-StateId；INTEGER (0..127)，位宽 7 bit。 */
    QCL_Info qcl_Type1; /**< ASN.1 qcl-Type1；结构体。 */
    bool has_qcl_Type2; /**< qcl-Type2 是否存在。 */
    QCL_Info qcl_Type2; /**< ASN.1 qcl-Type2；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    TCI_State_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    TCI_State_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief TCI_UL_State_r17_ExtGroup1
 * @note ASN.1：TCI_UL_State_r17_ExtGroup1；源文件第 13714 行。
 */
struct TCI_UL_State_r17_ExtGroup1 {
    bool has_tag_Id_ptr_r18; /**< tag-Id-ptr-r18 是否存在。 */
    TCI_UL_State_r17_ExtGroup1_Tag_Id_ptr_r18 tag_Id_ptr_r18; /**< ASN.1 tag-Id-ptr-r18；枚举；OPTIONAL。 */
};


/**
 * @brief TCI_UL_State_r17_ReferenceSignal_r17
 * @note ASN.1：referenceSignal-r17；源文件第 13705 行。
 * @note CHOICE { ssb-Index-r17, csi-RS-Index-r17, srs-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum TCI_UL_State_r17_ReferenceSignal_r17_Tag {
    TCI_UL_State_r17_ReferenceSignal_r17_Tag_ssb_Index_r17 = 0, /**< ASN.1 ssb-Index-r17 */
    TCI_UL_State_r17_ReferenceSignal_r17_Tag_csi_RS_Index_r17 = 1, /**< ASN.1 csi-RS-Index-r17 */
    TCI_UL_State_r17_ReferenceSignal_r17_Tag_srs_r17 = 2, /**< ASN.1 srs-r17 */
} TCI_UL_State_r17_ReferenceSignal_r17_Tag;

struct TCI_UL_State_r17_ReferenceSignal_r17 {
    TCI_UL_State_r17_ReferenceSignal_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index_r17; /**< ASN.1 ssb-Index-r17 */
        NZP_CSI_RS_ResourceId csi_RS_Index_r17; /**< ASN.1 csi-RS-Index-r17 */
        SRS_ResourceId srs_r17; /**< ASN.1 srs-r17 */
    } u;
};


/**
 * @brief TCI_UL_State_r17
 * @note ASN.1：TCI-UL-State-r17；源文件第 13701 行。
 * @note TCI-UL-State-r17 ::= SEQUENCE { tci-UL-StateId-r17, servingCellId-r17, bwp-Id-r17, referenceSignal...
 */
struct TCI_UL_State_r17 {
    TCI_UL_StateId_r17 tci_UL_StateId_r17; /**< ASN.1 tci-UL-StateId-r17；INTEGER (0..63)，位宽 6 bit。 */
    bool has_servingCellId_r17; /**< servingCellId-r17 是否存在。 */
    ServCellIndex servingCellId_r17; /**< ASN.1 servingCellId-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_bwp_Id_r17; /**< bwp-Id-r17 是否存在。 */
    BWP_Id bwp_Id_r17; /**< ASN.1 bwp-Id-r17；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    TCI_UL_State_r17_ReferenceSignal_r17 referenceSignal_r17; /**< ASN.1 referenceSignal-r17；结构体。 */
    bool has_additionalPCI_r17; /**< additionalPCI-r17 是否存在。 */
    AdditionalPCIIndex_r17 additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
    bool has_ul_powerControl_r17; /**< ul-powerControl-r17 是否存在。 */
    Uplink_powerControlId_r17 ul_powerControl_r17; /**< ASN.1 ul-powerControl-r17；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_pathlossReferenceRS_Id_r17; /**< pathlossReferenceRS-Id-r17 是否存在。 */
    PathlossReferenceRS_Id_r17 pathlossReferenceRS_Id_r17; /**< ASN.1 pathlossReferenceRS-Id-r17；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    TCI_UL_State_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief TDD_UL_DL_SlotConfig_Symbols_Explicit
 * @note ASN.1：symbols/explicit；源文件第 13766 行。
 * @note SEQUENCE { nrofDownlinkSymbols, nrofUplinkSymbols }
 */
struct TDD_UL_DL_SlotConfig_Symbols_Explicit {
    bool has_nrofDownlinkSymbols; /**< nrofDownlinkSymbols 是否存在。 */
    int64_t nrofDownlinkSymbols; /**< ASN.1 nrofDownlinkSymbols；INTEGER (1..13)，位宽 4 bit；OPTIONAL。 */
    bool has_nrofUplinkSymbols; /**< nrofUplinkSymbols 是否存在。 */
    int64_t nrofUplinkSymbols; /**< ASN.1 nrofUplinkSymbols；INTEGER (1..13)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief TDD_UL_DL_SlotConfig_Symbols
 * @note ASN.1：symbols；源文件第 13763 行。
 * @note CHOICE { allDownlink, allUplink, explicit }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum TDD_UL_DL_SlotConfig_Symbols_Tag {
    TDD_UL_DL_SlotConfig_Symbols_Tag_allDownlink = 0, /**< ASN.1 allDownlink */
    TDD_UL_DL_SlotConfig_Symbols_Tag_allUplink = 1, /**< ASN.1 allUplink */
    TDD_UL_DL_SlotConfig_Symbols_Tag_explicit_ = 2, /**< ASN.1 explicit */
} TDD_UL_DL_SlotConfig_Symbols_Tag;

struct TDD_UL_DL_SlotConfig_Symbols {
    TDD_UL_DL_SlotConfig_Symbols_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null allDownlink; /**< ASN.1 allDownlink */
        Null allUplink; /**< ASN.1 allUplink */
        TDD_UL_DL_SlotConfig_Symbols_Explicit explicit_; /**< ASN.1 explicit */
    } u;
};


/**
 * @brief TDD_UL_DL_SlotConfig
 * @note ASN.1：TDD-UL-DL-SlotConfig；源文件第 13761 行。
 * @note TDD-UL-DL-SlotConfig ::= SEQUENCE { slotIndex, symbols }
 */
struct TDD_UL_DL_SlotConfig {
    TDD_UL_DL_SlotIndex slotIndex; /**< ASN.1 slotIndex；INTEGER (0..319)，位宽 9 bit。 */
    TDD_UL_DL_SlotConfig_Symbols symbols; /**< ASN.1 symbols；结构体。 */
};


/**
 * @brief TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16
 * @note ASN.1：symbols-IAB-MT-r16/explicit-r16；源文件第 13778 行。
 * @note SEQUENCE { nrofDownlinkSymbols-r16, nrofUplinkSymbols-r16 }
 */
struct TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16 {
    bool has_nrofDownlinkSymbols_r16; /**< nrofDownlinkSymbols-r16 是否存在。 */
    int64_t nrofDownlinkSymbols_r16; /**< ASN.1 nrofDownlinkSymbols-r16；INTEGER (1..13)，位宽 4 bit；OPTIONAL。 */
    bool has_nrofUplinkSymbols_r16; /**< nrofUplinkSymbols-r16 是否存在。 */
    int64_t nrofUplinkSymbols_r16; /**< ASN.1 nrofUplinkSymbols-r16；INTEGER (1..13)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16
 * @note ASN.1：symbols-IAB-MT-r16/explicit-IAB-MT-r16；源文件第 13782 行。
 * @note SEQUENCE { nrofDownlinkSymbols-r16, nrofUplinkSymbols-r16 }
 */
struct TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16 {
    bool has_nrofDownlinkSymbols_r16; /**< nrofDownlinkSymbols-r16 是否存在。 */
    int64_t nrofDownlinkSymbols_r16; /**< ASN.1 nrofDownlinkSymbols-r16；INTEGER (1..13)，位宽 4 bit；OPTIONAL。 */
    bool has_nrofUplinkSymbols_r16; /**< nrofUplinkSymbols-r16 是否存在。 */
    int64_t nrofUplinkSymbols_r16; /**< ASN.1 nrofUplinkSymbols-r16；INTEGER (1..13)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16
 * @note ASN.1：symbols-IAB-MT-r16；源文件第 13775 行。
 * @note CHOICE { allDownlink-r16, allUplink-r16, explicit-r16, explicit-IAB-MT-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag {
    TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allDownlink_r16 = 0, /**< ASN.1 allDownlink-r16 */
    TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_allUplink_r16 = 1, /**< ASN.1 allUplink-r16 */
    TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_r16 = 2, /**< ASN.1 explicit-r16 */
    TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag_explicit_IAB_MT_r16 = 3, /**< ASN.1 explicit-IAB-MT-r16 */
} TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag;

struct TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16 {
    TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null allDownlink_r16; /**< ASN.1 allDownlink-r16 */
        Null allUplink_r16; /**< ASN.1 allUplink-r16 */
        TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_r16 explicit_r16; /**< ASN.1 explicit-r16 */
        TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16_Explicit_IAB_MT_r16 explicit_IAB_MT_r16; /**< ASN.1 explicit-IAB-MT-r16 */
    } u;
};


/**
 * @brief TDD_UL_DL_SlotConfig_IAB_MT_r16
 * @note ASN.1：TDD-UL-DL-SlotConfig-IAB-MT-r16；源文件第 13773 行。
 * @note TDD-UL-DL-SlotConfig-IAB-MT-r16 ::= SEQUENCE { slotIndex-r16, symbols-IAB-MT-r16 }
 */
struct TDD_UL_DL_SlotConfig_IAB_MT_r16 {
    TDD_UL_DL_SlotIndex slotIndex_r16; /**< ASN.1 slotIndex-r16；INTEGER (0..319)，位宽 9 bit。 */
    TDD_UL_DL_SlotConfig_IAB_MT_r16_Symbols_IAB_MT_r16 symbols_IAB_MT_r16; /**< ASN.1 symbols-IAB-MT-r16；结构体。 */
};


/**
 * @brief UAC_BarringInfoSet
 * @note ASN.1：UAC-BarringInfoSet；源文件第 13831 行。
 * @note UAC-BarringInfoSet ::= SEQUENCE { uac-BarringFactor, uac-BarringTime, uac-BarringForAccessIdentity }
 */
struct UAC_BarringInfoSet {
    UAC_BarringInfoSet_Uac_BarringFactor uac_BarringFactor; /**< ASN.1 uac-BarringFactor；枚举。 */
    UAC_BarringInfoSet_Uac_BarringTime uac_BarringTime; /**< ASN.1 uac-BarringTime；枚举。 */
    BitString uac_BarringForAccessIdentity; /**< ASN.1 uac-BarringForAccessIdentity；SIZE (7)，定长。 */
};


/**
 * @brief UAC_BarringInfoSet_v1700
 * @note ASN.1：UAC-BarringInfoSet-v1700；源文件第 13838 行。
 * @note UAC-BarringInfoSet-v1700 ::= SEQUENCE { uac-BarringFactorForAI3-r17 }
 */
struct UAC_BarringInfoSet_v1700 {
    bool has_uac_BarringFactorForAI3_r17; /**< uac-BarringFactorForAI3-r17 是否存在。 */
    UAC_BarringInfoSet_v1700_Uac_BarringFactorForAI3_r17 uac_BarringFactorForAI3_r17; /**< ASN.1 uac-BarringFactorForAI3-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UAC_BarringPerCat
 * @note ASN.1：UAC-BarringPerCat；源文件第 13848 行。
 * @note UAC-BarringPerCat ::= SEQUENCE { accessCategory, uac-barringInfoSetIndex }
 */
struct UAC_BarringPerCat {
    int64_t accessCategory; /**< ASN.1 accessCategory；INTEGER (1..63)，位宽 6 bit。 */
    UAC_BarringInfoSetIndex uac_barringInfoSetIndex; /**< ASN.1 uac-barringInfoSetIndex；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList
 * @note ASN.1：uac-ACBarringListType/uac-ImplicitACBarringList；源文件第 13861 行。
 * @note SEQUENCE OF (size 63..63) OF UAC-BarringInfoSetIndex
 */
struct UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList {
    UAC_BarringInfoSetIndex* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UAC_BarringPerPLMN_Uac_ACBarringListType
 * @note ASN.1：uac-ACBarringListType；源文件第 13860 行。
 * @note CHOICE { uac-ImplicitACBarringList, uac-ExplicitACBarringList }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UAC_BarringPerPLMN_Uac_ACBarringListType_Tag {
    UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ImplicitACBarringList = 0, /**< ASN.1 uac-ImplicitACBarringList */
    UAC_BarringPerPLMN_Uac_ACBarringListType_Tag_uac_ExplicitACBarringList = 1, /**< ASN.1 uac-ExplicitACBarringList */
} UAC_BarringPerPLMN_Uac_ACBarringListType_Tag;

struct UAC_BarringPerPLMN_Uac_ACBarringListType {
    UAC_BarringPerPLMN_Uac_ACBarringListType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UAC_BarringPerPLMN_Uac_ACBarringListType_Uac_ImplicitACBarringList uac_ImplicitACBarringList; /**< ASN.1 uac-ImplicitACBarringList */
        UAC_BarringPerCatList uac_ExplicitACBarringList; /**< ASN.1 uac-ExplicitACBarringList */
    } u;
};


/**
 * @brief UAC_BarringPerPLMN
 * @note ASN.1：UAC-BarringPerPLMN；源文件第 13858 行。
 * @note UAC-BarringPerPLMN ::= SEQUENCE { plmn-IdentityIndex, uac-ACBarringListType }
 */
struct UAC_BarringPerPLMN {
    int64_t plmn_IdentityIndex; /**< ASN.1 plmn-IdentityIndex；INTEGER (1..12)，位宽 4 bit。 */
    bool has_uac_ACBarringListType; /**< uac-ACBarringListType 是否存在。 */
    UAC_BarringPerPLMN_Uac_ACBarringListType uac_ACBarringListType; /**< ASN.1 uac-ACBarringListType；结构体；OPTIONAL。 */
};


/**
 * @brief ExcessDelay_DRB_IdentityInfo_r17
 * @note ASN.1：ExcessDelay-DRB-IdentityInfo-r17；源文件第 13904 行。
 * @note ExcessDelay-DRB-IdentityInfo-r17 ::= SEQUENCE { drb-IdentityList, delayThreshold }
 */
struct ExcessDelay_DRB_IdentityInfo_r17 {
    DRB_Identity* drb_IdentityList_items; /**< ASN.1 drb-IdentityList；SEQUENCE OF DRB_Identity，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t drb_IdentityList_count; /**< drb-IdentityList 元素个数。 */
    ExcessDelay_DRB_IdentityInfo_r17_DelayThreshold delayThreshold; /**< ASN.1 delayThreshold；枚举。 */
};


/**
 * @brief CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16
 * @note ASN.1：timeFrequencyRegion-r16；源文件第 13935 行。
 * @note SEQUENCE { timeDurationForCI-r16, timeGranularityForCI-r16, frequencyRegionFo...
 */
struct CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16 {
    bool has_timeDurationForCI_r16; /**< timeDurationForCI-r16 是否存在。 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeDurationForCI_r16 timeDurationForCI_r16; /**< ASN.1 timeDurationForCI-r16；枚举；OPTIONAL。 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16_TimeGranularityForCI_r16 timeGranularityForCI_r16; /**< ASN.1 timeGranularityForCI-r16；枚举。 */
    int64_t frequencyRegionForCI_r16; /**< ASN.1 frequencyRegionForCI-r16；INTEGER (0..37949)，位宽 16 bit。 */
    int64_t deltaOffset_r16; /**< ASN.1 deltaOffset-r16；INTEGER (0..2)，位宽 2 bit。 */
};


/**
 * @brief CI_ConfigurationPerServingCell_r16
 * @note ASN.1：CI-ConfigurationPerServingCell-r16；源文件第 13930 行。
 * @note CI-ConfigurationPerServingCell-r16 ::= SEQUENCE { servingCellId, positionInDCI-r16, positionInDCI-ForSUL-r16, ci-Pay...
 */
struct CI_ConfigurationPerServingCell_r16 {
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit。 */
    int64_t positionInDCI_r16; /**< ASN.1 positionInDCI-r16；INTEGER (0..125)，位宽 7 bit。 */
    bool has_positionInDCI_ForSUL_r16; /**< positionInDCI-ForSUL-r16 是否存在。 */
    int64_t positionInDCI_ForSUL_r16; /**< ASN.1 positionInDCI-ForSUL-r16；INTEGER (0..125)，位宽 7 bit；OPTIONAL。 */
    CI_ConfigurationPerServingCell_r16_Ci_PayloadSize_r16 ci_PayloadSize_r16; /**< ASN.1 ci-PayloadSize-r16；枚举。 */
    CI_ConfigurationPerServingCell_r16_TimeFrequencyRegion_r16 timeFrequencyRegion_r16; /**< ASN.1 timeFrequencyRegion-r16；结构体。 */
    bool has_uplinkCancellationPriority_v1610; /**< uplinkCancellationPriority-v1610 是否存在。 */
    CI_ConfigurationPerServingCell_r16_UplinkCancellationPriority_v1610 uplinkCancellationPriority_v1610; /**< ASN.1 uplinkCancellationPriority-v1610；枚举；OPTIONAL。 */
};


/**
 * @brief P0AlphaSet_r17
 * @note ASN.1：P0AlphaSet-r17；源文件第 13985 行。
 * @note P0AlphaSet-r17 ::= SEQUENCE { p0-r17, alpha-r17, closedLoopIndex-r17 }
 */
struct P0AlphaSet_r17 {
    bool has_p0_r17; /**< p0-r17 是否存在。 */
    int64_t p0_r17; /**< ASN.1 p0-r17；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_alpha_r17; /**< alpha-r17 是否存在。 */
    Alpha alpha_r17; /**< ASN.1 alpha-r17；枚举；OPTIONAL。 */
    P0AlphaSet_r17_ClosedLoopIndex_r17 closedLoopIndex_r17; /**< ASN.1 closedLoopIndex-r17；枚举。 */
};


/**
 * @brief Uplink_powerControl_r17
 * @note ASN.1：Uplink-powerControl-r17；源文件第 13978 行。
 * @note Uplink-powerControl-r17 ::= SEQUENCE { ul-powercontrolId-r17, p0AlphaSetforPUSCH-r17, p0AlphaSetforPUCCH-...
 */
struct Uplink_powerControl_r17 {
    Uplink_powerControlId_r17 ul_powercontrolId_r17; /**< ASN.1 ul-powercontrolId-r17；INTEGER (1..64)，位宽 6 bit。 */
    bool has_p0AlphaSetforPUSCH_r17; /**< p0AlphaSetforPUSCH-r17 是否存在。 */
    P0AlphaSet_r17 p0AlphaSetforPUSCH_r17; /**< ASN.1 p0AlphaSetforPUSCH-r17；结构体；OPTIONAL。 */
    bool has_p0AlphaSetforPUCCH_r17; /**< p0AlphaSetforPUCCH-r17 是否存在。 */
    P0AlphaSet_r17 p0AlphaSetforPUCCH_r17; /**< ASN.1 p0AlphaSetforPUCCH-r17；结构体；OPTIONAL。 */
    bool has_p0AlphaSetforSRS_r17; /**< p0AlphaSetforSRS-r17 是否存在。 */
    P0AlphaSet_r17 p0AlphaSetforSRS_r17; /**< ASN.1 p0AlphaSetforSRS-r17；结构体；OPTIONAL。 */
};


/**
 * @brief Uu_RelayRLC_ChannelConfig_r17
 * @note ASN.1：Uu-RelayRLC-ChannelConfig-r17；源文件第 13996 行。
 * @note Uu-RelayRLC-ChannelConfig-r17 ::= SEQUENCE { uu-LogicalChannelIdentity-r17, uu-RelayRLC-ChannelID-r17, reestabl...
 */
struct Uu_RelayRLC_ChannelConfig_r17 {
    bool has_uu_LogicalChannelIdentity_r17; /**< uu-LogicalChannelIdentity-r17 是否存在。 */
    LogicalChannelIdentity uu_LogicalChannelIdentity_r17; /**< ASN.1 uu-LogicalChannelIdentity-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    Uu_RelayRLC_ChannelID_r17 uu_RelayRLC_ChannelID_r17; /**< ASN.1 uu-RelayRLC-ChannelID-r17；INTEGER (1..32)，位宽 5 bit。 */
    bool has_reestablishRLC_r17; /**< reestablishRLC-r17 是否存在。 */
    Uu_RelayRLC_ChannelConfig_r17_ReestablishRLC_r17 reestablishRLC_r17; /**< ASN.1 reestablishRLC-r17；枚举；OPTIONAL。 */
    bool has_rlc_Config_r17; /**< rlc-Config-r17 是否存在。 */
    RLC_Config rlc_Config_r17; /**< ASN.1 rlc-Config-r17；结构体；OPTIONAL。 */
    bool has_mac_LogicalChannelConfig_r17; /**< mac-LogicalChannelConfig-r17 是否存在。 */
    LogicalChannelConfig mac_LogicalChannelConfig_r17; /**< ASN.1 mac-LogicalChannelConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkTxDirectCurrentCell_ExtGroup1
 * @note ASN.1：UplinkTxDirectCurrentCell_ExtGroup1；源文件第 14019 行。
 */
struct UplinkTxDirectCurrentCell_ExtGroup1 {
    bool has_uplinkDirectCurrentBWP_SUL; /**< uplinkDirectCurrentBWP-SUL 是否存在。 */
    UplinkTxDirectCurrentBWP* uplinkDirectCurrentBWP_SUL_items; /**< ASN.1 uplinkDirectCurrentBWP-SUL；SEQUENCE OF UplinkTxDirectCurrentBWP，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkDirectCurrentBWP_SUL_count; /**< uplinkDirectCurrentBWP-SUL 元素个数。 */
};


/**
 * @brief UplinkTxDirectCurrentCell
 * @note ASN.1：UplinkTxDirectCurrentCell；源文件第 14015 行。
 * @note UplinkTxDirectCurrentCell ::= SEQUENCE { servCellIndex, uplinkDirectCurrentBWP, uplinkDirectCurrentBWP-SUL }
 */
struct UplinkTxDirectCurrentCell {
    ServCellIndex servCellIndex; /**< ASN.1 servCellIndex；INTEGER (0..31)，位宽 5 bit。 */
    UplinkTxDirectCurrentBWP* uplinkDirectCurrentBWP_items; /**< ASN.1 uplinkDirectCurrentBWP；SEQUENCE OF UplinkTxDirectCurrentBWP，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t uplinkDirectCurrentBWP_count; /**< uplinkDirectCurrentBWP 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    UplinkTxDirectCurrentCell_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UplinkTxDirectCurrentBWP
 * @note ASN.1：UplinkTxDirectCurrentBWP；源文件第 14024 行。
 * @note UplinkTxDirectCurrentBWP ::= SEQUENCE { bwp-Id, shift7dot5kHz, txDirectCurrentLocation }
 */
struct UplinkTxDirectCurrentBWP {
    BWP_Id bwp_Id; /**< ASN.1 bwp-Id；INTEGER (0..4)，位宽 3 bit。 */
    bool shift7dot5kHz; /**< ASN.1 shift7dot5kHz；BOOLEAN，1 bit。 */
    int64_t txDirectCurrentLocation; /**< ASN.1 txDirectCurrentLocation；INTEGER (0..3301)，位宽 12 bit。 */
};


/**
 * @brief DefaultDC_Location_r17
 * @note ASN.1：DefaultDC-Location-r17；源文件第 14051 行。
 * @note DefaultDC-Location-r17 ::= CHOICE { ul, dl, ulAndDL }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DefaultDC_Location_r17_Tag {
    DefaultDC_Location_r17_Tag_ul = 0, /**< ASN.1 ul */
    DefaultDC_Location_r17_Tag_dl = 1, /**< ASN.1 dl */
    DefaultDC_Location_r17_Tag_ulAndDL = 2, /**< ASN.1 ulAndDL */
} DefaultDC_Location_r17_Tag;

struct DefaultDC_Location_r17 {
    DefaultDC_Location_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        FrequencyComponent_r17 ul; /**< ASN.1 ul */
        FrequencyComponent_r17 dl; /**< ASN.1 dl */
        FrequencyComponent_r17 ulAndDL; /**< ASN.1 ulAndDL */
    } u;
};


/**
 * @brief OffsetValue_r17
 * @note ASN.1：OffsetValue-r17；源文件第 14046 行。
 * @note OffsetValue-r17 ::= SEQUENCE { offsetValue-r17, shift7dot5kHz-r17 }
 */
struct OffsetValue_r17 {
    int64_t offsetValue_r17; /**< ASN.1 offsetValue-r17；INTEGER (-20000..20000)，位宽 16 bit。 */
    bool shift7dot5kHz_r17; /**< ASN.1 shift7dot5kHz-r17；BOOLEAN，1 bit。 */
};


/**
 * @brief CC_Group_r17_OffsetToDefault_r17_Offsetlist
 * @note ASN.1：offsetToDefault-r17/offsetlist；源文件第 14041 行。
 * @note SEQUENCE OF (size 1..128) OF OffsetValue-r17
 */
struct CC_Group_r17_OffsetToDefault_r17_Offsetlist {
    OffsetValue_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CC_Group_r17_OffsetToDefault_r17
 * @note ASN.1：offsetToDefault-r17；源文件第 14039 行。
 * @note CHOICE { offsetValue, offsetlist }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CC_Group_r17_OffsetToDefault_r17_Tag {
    CC_Group_r17_OffsetToDefault_r17_Tag_offsetValue = 0, /**< ASN.1 offsetValue */
    CC_Group_r17_OffsetToDefault_r17_Tag_offsetlist = 1, /**< ASN.1 offsetlist */
} CC_Group_r17_OffsetToDefault_r17_Tag;

struct CC_Group_r17_OffsetToDefault_r17 {
    CC_Group_r17_OffsetToDefault_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        OffsetValue_r17 offsetValue; /**< ASN.1 offsetValue */
        CC_Group_r17_OffsetToDefault_r17_Offsetlist offsetlist; /**< ASN.1 offsetlist */
    } u;
};


/**
 * @brief CC_Group_r17
 * @note ASN.1：CC-Group-r17；源文件第 14035 行。
 * @note CC-Group-r17 ::= SEQUENCE { servCellIndexLower-r17, servCellIndexHigher-r17, defaultDC-Locatio...
 */
struct CC_Group_r17 {
    ServCellIndex servCellIndexLower_r17; /**< ASN.1 servCellIndexLower-r17；INTEGER (0..31)，位宽 5 bit。 */
    bool has_servCellIndexHigher_r17; /**< servCellIndexHigher-r17 是否存在。 */
    ServCellIndex servCellIndexHigher_r17; /**< ASN.1 servCellIndexHigher-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    DefaultDC_Location_r17 defaultDC_Location_r17; /**< ASN.1 defaultDC-Location-r17；结构体。 */
    bool has_offsetToDefault_r17; /**< offsetToDefault-r17 是否存在。 */
    CC_Group_r17_OffsetToDefault_r17 offsetToDefault_r17; /**< ASN.1 offsetToDefault-r17；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16
 * @note ASN.1：servCellInfo-r16；源文件第 14073 行。
 * @note CHOICE { bwp-Id-r16, deactivatedCarrier-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag {
    UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_bwp_Id_r16 = 0, /**< ASN.1 bwp-Id-r16 */
    UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag_deactivatedCarrier_r16 = 1, /**< ASN.1 deactivatedCarrier-r16 */
} UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag;

struct UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16 {
    UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BWP_Id bwp_Id_r16; /**< ASN.1 bwp-Id-r16 */
        UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16_DeactivatedCarrier_r16 deactivatedCarrier_r16; /**< ASN.1 deactivatedCarrier-r16 */
    } u;
};


/**
 * @brief UplinkTxDirectCurrentCarrierInfo_r16
 * @note ASN.1：UplinkTxDirectCurrentCarrierInfo-r16；源文件第 14071 行。
 * @note UplinkTxDirectCurrentCarrierInfo-r16 ::= SEQUENCE { servCellIndex-r16, servCellInfo-r16 }
 */
struct UplinkTxDirectCurrentCarrierInfo_r16 {
    ServCellIndex servCellIndex_r16; /**< ASN.1 servCellIndex-r16；INTEGER (0..31)，位宽 5 bit。 */
    UplinkTxDirectCurrentCarrierInfo_r16_ServCellInfo_r16 servCellInfo_r16; /**< ASN.1 servCellInfo-r16；结构体。 */
};


/**
 * @brief UplinkTxDirectCurrentTwoCarrierInfo_r16
 * @note ASN.1：UplinkTxDirectCurrentTwoCarrierInfo-r16；源文件第 14079 行。
 * @note UplinkTxDirectCurrentTwoCarrierInfo-r16 ::= SEQUENCE { referenceCarrierIndex-r16, shift7dot5kHz-r16, txDirectCurrentLocat...
 */
struct UplinkTxDirectCurrentTwoCarrierInfo_r16 {
    ServCellIndex referenceCarrierIndex_r16; /**< ASN.1 referenceCarrierIndex-r16；INTEGER (0..31)，位宽 5 bit。 */
    bool shift7dot5kHz_r16; /**< ASN.1 shift7dot5kHz-r16；BOOLEAN，1 bit。 */
    int64_t txDirectCurrentLocation_r16; /**< ASN.1 txDirectCurrentLocation-r16；INTEGER (0..3301)，位宽 12 bit。 */
};


/**
 * @brief UplinkTxDirectCurrentTwoCarrier_r16
 * @note ASN.1：UplinkTxDirectCurrentTwoCarrier-r16；源文件第 14064 行。
 * @note UplinkTxDirectCurrentTwoCarrier-r16 ::= SEQUENCE { carrierOneInfo-r16, carrierTwoInfo-r16, singlePA-TxDirectCurrent-r...
 */
struct UplinkTxDirectCurrentTwoCarrier_r16 {
    UplinkTxDirectCurrentCarrierInfo_r16 carrierOneInfo_r16; /**< ASN.1 carrierOneInfo-r16；结构体。 */
    UplinkTxDirectCurrentCarrierInfo_r16 carrierTwoInfo_r16; /**< ASN.1 carrierTwoInfo-r16；结构体。 */
    UplinkTxDirectCurrentTwoCarrierInfo_r16 singlePA_TxDirectCurrent_r16; /**< ASN.1 singlePA-TxDirectCurrent-r16；结构体。 */
    bool has_secondPA_TxDirectCurrent_r16; /**< secondPA-TxDirectCurrent-r16 是否存在。 */
    UplinkTxDirectCurrentTwoCarrierInfo_r16 secondPA_TxDirectCurrent_r16; /**< ASN.1 secondPA-TxDirectCurrent-r16；结构体；OPTIONAL。 */
};


/**
 * @brief ZP_CSI_RS_Resource
 * @note ASN.1：ZP-CSI-RS-Resource；源文件第 14088 行。
 * @note ZP-CSI-RS-Resource ::= SEQUENCE { zp-CSI-RS-ResourceId, resourceMapping, periodicityAndOffset }
 */
struct ZP_CSI_RS_Resource {
    ZP_CSI_RS_ResourceId zp_CSI_RS_ResourceId; /**< ASN.1 zp-CSI-RS-ResourceId；INTEGER (0..31)，位宽 5 bit。 */
    CSI_RS_ResourceMapping resourceMapping; /**< ASN.1 resourceMapping；结构体。 */
    bool has_periodicityAndOffset; /**< periodicityAndOffset 是否存在。 */
    CSI_ResourcePeriodicityAndOffset periodicityAndOffset; /**< ASN.1 periodicityAndOffset；结构体；OPTIONAL。 */
};


/**
 * @brief AerialParameters_r18
 * @note ASN.1：AerialParameters-r18；源文件第 14120 行。
 * @note AerialParameters-r18 ::= SEQUENCE { aerialUE-Capability-r18, altitudeMeas-r18, altitudeBasedSSB-ToMeas...
 */
struct AerialParameters_r18 {
    bool has_aerialUE_Capability_r18; /**< aerialUE-Capability-r18 是否存在。 */
    AerialParameters_r18_AerialUE_Capability_r18 aerialUE_Capability_r18; /**< ASN.1 aerialUE-Capability-r18；枚举；OPTIONAL。 */
    bool has_altitudeMeas_r18; /**< altitudeMeas-r18 是否存在。 */
    AerialParameters_r18_AltitudeMeas_r18 altitudeMeas_r18; /**< ASN.1 altitudeMeas-r18；枚举；OPTIONAL。 */
    bool has_altitudeBasedSSB_ToMeasure_r18; /**< altitudeBasedSSB-ToMeasure-r18 是否存在。 */
    AerialParameters_r18_AltitudeBasedSSB_ToMeasure_r18 altitudeBasedSSB_ToMeasure_r18; /**< ASN.1 altitudeBasedSSB-ToMeasure-r18；枚举；OPTIONAL。 */
    bool has_eventAxHy_r18; /**< eventAxHy-r18 是否存在。 */
    AerialParameters_r18_EventAxHy_r18 eventAxHy_r18; /**< ASN.1 eventAxHy-r18；枚举；OPTIONAL。 */
    bool has_flightPathReporting_r18; /**< flightPathReporting-r18 是否存在。 */
    AerialParameters_r18_FlightPathReporting_r18 flightPathReporting_r18; /**< ASN.1 flightPathReporting-r18；枚举；OPTIONAL。 */
    bool has_flightPathAvailabilityIndicationUAI_r18; /**< flightPathAvailabilityIndicationUAI-r18 是否存在。 */
    AerialParameters_r18_FlightPathAvailabilityIndicationUAI_r18 flightPathAvailabilityIndicationUAI_r18; /**< ASN.1 flightPathAvailabilityIndicationUAI-r18；枚举；OPTIONAL。 */
    bool has_multipleCellsMeasExtension_r18; /**< multipleCellsMeasExtension-r18 是否存在。 */
    AerialParameters_r18_MultipleCellsMeasExtension_r18 multipleCellsMeasExtension_r18; /**< ASN.1 multipleCellsMeasExtension-r18；枚举；OPTIONAL。 */
    bool has_nr_NS_PmaxListAerial_r18; /**< nr-NS-PmaxListAerial-r18 是否存在。 */
    AerialParameters_r18_Nr_NS_PmaxListAerial_r18 nr_NS_PmaxListAerial_r18; /**< ASN.1 nr-NS-PmaxListAerial-r18；枚举；OPTIONAL。 */
    bool has_simulMultiTriggerSingleMeasReport_r18; /**< simulMultiTriggerSingleMeasReport-r18 是否存在。 */
    AerialParameters_r18_SimulMultiTriggerSingleMeasReport_r18 simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；枚举；OPTIONAL。 */
    bool has_sl_A2X_Service_r18; /**< sl-A2X-Service-r18 是否存在。 */
    AerialParameters_r18_Sl_A2X_Service_r18 sl_A2X_Service_r18; /**< ASN.1 sl-A2X-Service-r18；枚举；OPTIONAL。 */
};


/**
 * @brief AppLayerMeasParameters_r17_ExtGroup1
 * @note ASN.1：AppLayerMeasParameters_r17_ExtGroup1；源文件第 14158 行。
 */
struct AppLayerMeasParameters_r17_ExtGroup1 {
    bool has_qoe_IdleInactiveMeasReport_r18; /**< qoe-IdleInactiveMeasReport-r18 是否存在。 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_IdleInactiveMeasReport_r18 qoe_IdleInactiveMeasReport_r18; /**< ASN.1 qoe-IdleInactiveMeasReport-r18；枚举；OPTIONAL。 */
    bool has_qoe_NRDC_MeasReport_r18; /**< qoe-NRDC-MeasReport-r18 是否存在。 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_NRDC_MeasReport_r18 qoe_NRDC_MeasReport_r18; /**< ASN.1 qoe-NRDC-MeasReport-r18；枚举；OPTIONAL。 */
    bool has_qoe_AdditionalMemoryMeasReport_r18; /**< qoe-AdditionalMemoryMeasReport-r18 是否存在。 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_AdditionalMemoryMeasReport_r18 qoe_AdditionalMemoryMeasReport_r18; /**< ASN.1 qoe-AdditionalMemoryMeasReport-r18；枚举；OPTIONAL。 */
    bool has_qoe_PriorityBasedDiscarding_r18; /**< qoe-PriorityBasedDiscarding-r18 是否存在。 */
    AppLayerMeasParameters_r17_ExtGroup1_Qoe_PriorityBasedDiscarding_r18 qoe_PriorityBasedDiscarding_r18; /**< ASN.1 qoe-PriorityBasedDiscarding-r18；枚举；OPTIONAL。 */
    bool has_srb5_r18; /**< srb5-r18 是否存在。 */
    AppLayerMeasParameters_r17_ExtGroup1_Srb5_r18 srb5_r18; /**< ASN.1 srb5-r18；枚举；OPTIONAL。 */
};


/**
 * @brief AppLayerMeasParameters_r17
 * @note ASN.1：AppLayerMeasParameters-r17；源文件第 14150 行。
 * @note AppLayerMeasParameters-r17 ::= SEQUENCE { qoe-Streaming-MeasReport-r17, qoe-MTSI-MeasReport-r17, qoe-VR-Meas...
 */
struct AppLayerMeasParameters_r17 {
    bool has_qoe_Streaming_MeasReport_r17; /**< qoe-Streaming-MeasReport-r17 是否存在。 */
    AppLayerMeasParameters_r17_Qoe_Streaming_MeasReport_r17 qoe_Streaming_MeasReport_r17; /**< ASN.1 qoe-Streaming-MeasReport-r17；枚举；OPTIONAL。 */
    bool has_qoe_MTSI_MeasReport_r17; /**< qoe-MTSI-MeasReport-r17 是否存在。 */
    AppLayerMeasParameters_r17_Qoe_MTSI_MeasReport_r17 qoe_MTSI_MeasReport_r17; /**< ASN.1 qoe-MTSI-MeasReport-r17；枚举；OPTIONAL。 */
    bool has_qoe_VR_MeasReport_r17; /**< qoe-VR-MeasReport-r17 是否存在。 */
    AppLayerMeasParameters_r17_Qoe_VR_MeasReport_r17 qoe_VR_MeasReport_r17; /**< ASN.1 qoe-VR-MeasReport-r17；枚举；OPTIONAL。 */
    bool has_ran_VisibleQoE_Streaming_MeasReport_r17; /**< ran-VisibleQoE-Streaming-MeasReport-r17 是否存在。 */
    AppLayerMeasParameters_r17_Ran_VisibleQoE_Streaming_MeasReport_r17 ran_VisibleQoE_Streaming_MeasReport_r17; /**< ASN.1 ran-VisibleQoE-Streaming-MeasReport-r17；枚举；OPTIONAL。 */
    bool has_ran_VisibleQoE_VR_MeasReport_r17; /**< ran-VisibleQoE-VR-MeasReport-r17 是否存在。 */
    AppLayerMeasParameters_r17_Ran_VisibleQoE_VR_MeasReport_r17 ran_VisibleQoE_VR_MeasReport_r17; /**< ASN.1 ran-VisibleQoE-VR-MeasReport-r17；枚举；OPTIONAL。 */
    bool has_ul_MeasurementReportAppLayer_Seg_r17; /**< ul-MeasurementReportAppLayer-Seg-r17 是否存在。 */
    AppLayerMeasParameters_r17_Ul_MeasurementReportAppLayer_Seg_r17 ul_MeasurementReportAppLayer_Seg_r17; /**< ASN.1 ul-MeasurementReportAppLayer-Seg-r17；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    AppLayerMeasParameters_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BandCombinationList
 * @note ASN.1：BandCombinationList；源文件第 14170 行。
 * @note BandCombinationList ::= SEQUENCE OF (size 1..65536) OF BandCombination
 */
struct BandCombinationList {
    BandCombination* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1540
 * @note ASN.1：BandCombinationList-v1540；源文件第 14172 行。
 * @note BandCombinationList-v1540 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1540
 */
struct BandCombinationList_v1540 {
    BandCombination_v1540* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1550
 * @note ASN.1：BandCombinationList-v1550；源文件第 14174 行。
 * @note BandCombinationList-v1550 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1550
 */
struct BandCombinationList_v1550 {
    BandCombination_v1550* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1560
 * @note ASN.1：BandCombinationList-v1560；源文件第 14176 行。
 * @note BandCombinationList-v1560 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1560
 */
struct BandCombinationList_v1560 {
    BandCombination_v1560* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1570
 * @note ASN.1：BandCombinationList-v1570；源文件第 14178 行。
 * @note BandCombinationList-v1570 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1570
 */
struct BandCombinationList_v1570 {
    BandCombination_v1570* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1580
 * @note ASN.1：BandCombinationList-v1580；源文件第 14180 行。
 * @note BandCombinationList-v1580 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1580
 */
struct BandCombinationList_v1580 {
    BandCombination_v1580* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1590
 * @note ASN.1：BandCombinationList-v1590；源文件第 14182 行。
 * @note BandCombinationList-v1590 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1590
 */
struct BandCombinationList_v1590 {
    BandCombination_v1590* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v15g0
 * @note ASN.1：BandCombinationList-v15g0；源文件第 14184 行。
 * @note BandCombinationList-v15g0 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v15g0
 */
struct BandCombinationList_v15g0 {
    BandCombination_v15g0* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v15n0
 * @note ASN.1：BandCombinationList-v15n0；源文件第 14186 行。
 * @note BandCombinationList-v15n0 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v15n0
 */
struct BandCombinationList_v15n0 {
    BandCombination_v15n0* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1610
 * @note ASN.1：BandCombinationList-v1610；源文件第 14188 行。
 * @note BandCombinationList-v1610 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1610
 */
struct BandCombinationList_v1610 {
    BandCombination_v1610* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1630
 * @note ASN.1：BandCombinationList-v1630；源文件第 14190 行。
 * @note BandCombinationList-v1630 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1630
 */
struct BandCombinationList_v1630 {
    BandCombination_v1630* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1640
 * @note ASN.1：BandCombinationList-v1640；源文件第 14192 行。
 * @note BandCombinationList-v1640 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1640
 */
struct BandCombinationList_v1640 {
    BandCombination_v1640* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1650
 * @note ASN.1：BandCombinationList-v1650；源文件第 14194 行。
 * @note BandCombinationList-v1650 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1650
 */
struct BandCombinationList_v1650 {
    BandCombination_v1650* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1680
 * @note ASN.1：BandCombinationList-v1680；源文件第 14196 行。
 * @note BandCombinationList-v1680 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1680
 */
struct BandCombinationList_v1680 {
    BandCombination_v1680* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1690
 * @note ASN.1：BandCombinationList-v1690；源文件第 14198 行。
 * @note BandCombinationList-v1690 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1690
 */
struct BandCombinationList_v1690 {
    BandCombination_v1690* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v16a0
 * @note ASN.1：BandCombinationList-v16a0；源文件第 14200 行。
 * @note BandCombinationList-v16a0 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v16a0
 */
struct BandCombinationList_v16a0 {
    BandCombination_v16a0* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1700
 * @note ASN.1：BandCombinationList-v1700；源文件第 14202 行。
 * @note BandCombinationList-v1700 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1700
 */
struct BandCombinationList_v1700 {
    BandCombination_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1720
 * @note ASN.1：BandCombinationList-v1720；源文件第 14204 行。
 * @note BandCombinationList-v1720 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1720
 */
struct BandCombinationList_v1720 {
    BandCombination_v1720* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1730
 * @note ASN.1：BandCombinationList-v1730；源文件第 14206 行。
 * @note BandCombinationList-v1730 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1730
 */
struct BandCombinationList_v1730 {
    BandCombination_v1730* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1740
 * @note ASN.1：BandCombinationList-v1740；源文件第 14208 行。
 * @note BandCombinationList-v1740 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1740
 */
struct BandCombinationList_v1740 {
    BandCombination_v1740* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1760
 * @note ASN.1：BandCombinationList-v1760；源文件第 14210 行。
 * @note BandCombinationList-v1760 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1760
 */
struct BandCombinationList_v1760 {
    BandCombination_v1760* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1770
 * @note ASN.1：BandCombinationList-v1770；源文件第 14212 行。
 * @note BandCombinationList-v1770 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1770
 */
struct BandCombinationList_v1770 {
    BandCombination_v1770* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1780
 * @note ASN.1：BandCombinationList-v1780；源文件第 14214 行。
 * @note BandCombinationList-v1780 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1780
 */
struct BandCombinationList_v1780 {
    BandCombination_v1780* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_v1800
 * @note ASN.1：BandCombinationList-v1800；源文件第 14216 行。
 * @note BandCombinationList-v1800 ::= SEQUENCE OF (size 1..65536) OF BandCombination-v1800
 */
struct BandCombinationList_v1800 {
    BandCombination_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_r16
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-r16；源文件第 14218 行。
 * @note BandCombinationList-UplinkTxSwitch-r16 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-r16
 */
struct BandCombinationList_UplinkTxSwitch_r16 {
    BandCombination_UplinkTxSwitch_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1630
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1630；源文件第 14220 行。
 * @note BandCombinationList-UplinkTxSwitch-v1630 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1630
 */
struct BandCombinationList_UplinkTxSwitch_v1630 {
    BandCombination_UplinkTxSwitch_v1630* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1640
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1640；源文件第 14222 行。
 * @note BandCombinationList-UplinkTxSwitch-v1640 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1640
 */
struct BandCombinationList_UplinkTxSwitch_v1640 {
    BandCombination_UplinkTxSwitch_v1640* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1650
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1650；源文件第 14224 行。
 * @note BandCombinationList-UplinkTxSwitch-v1650 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1650
 */
struct BandCombinationList_UplinkTxSwitch_v1650 {
    BandCombination_UplinkTxSwitch_v1650* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1670
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1670；源文件第 14226 行。
 * @note BandCombinationList-UplinkTxSwitch-v1670 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1670
 */
struct BandCombinationList_UplinkTxSwitch_v1670 {
    BandCombination_UplinkTxSwitch_v1670* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1690
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1690；源文件第 14228 行。
 * @note BandCombinationList-UplinkTxSwitch-v1690 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1690
 */
struct BandCombinationList_UplinkTxSwitch_v1690 {
    BandCombination_UplinkTxSwitch_v1690* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v16a0
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v16a0；源文件第 14230 行。
 * @note BandCombinationList-UplinkTxSwitch-v16a0 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v16a0
 */
struct BandCombinationList_UplinkTxSwitch_v16a0 {
    BandCombination_UplinkTxSwitch_v16a0* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v16e0
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v16e0；源文件第 14232 行。
 * @note BandCombinationList-UplinkTxSwitch-v16e0 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v16e0
 */
struct BandCombinationList_UplinkTxSwitch_v16e0 {
    BandCombination_UplinkTxSwitch_v16e0* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1700
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1700；源文件第 14234 行。
 * @note BandCombinationList-UplinkTxSwitch-v1700 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1700
 */
struct BandCombinationList_UplinkTxSwitch_v1700 {
    BandCombination_UplinkTxSwitch_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1720
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1720；源文件第 14236 行。
 * @note BandCombinationList-UplinkTxSwitch-v1720 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1720
 */
struct BandCombinationList_UplinkTxSwitch_v1720 {
    BandCombination_UplinkTxSwitch_v1720* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1730
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1730；源文件第 14238 行。
 * @note BandCombinationList-UplinkTxSwitch-v1730 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1730
 */
struct BandCombinationList_UplinkTxSwitch_v1730 {
    BandCombination_UplinkTxSwitch_v1730* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1740
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1740；源文件第 14240 行。
 * @note BandCombinationList-UplinkTxSwitch-v1740 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1740
 */
struct BandCombinationList_UplinkTxSwitch_v1740 {
    BandCombination_UplinkTxSwitch_v1740* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1760
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1760；源文件第 14242 行。
 * @note BandCombinationList-UplinkTxSwitch-v1760 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1760
 */
struct BandCombinationList_UplinkTxSwitch_v1760 {
    BandCombination_UplinkTxSwitch_v1760* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1770
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1770；源文件第 14244 行。
 * @note BandCombinationList-UplinkTxSwitch-v1770 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1770
 */
struct BandCombinationList_UplinkTxSwitch_v1770 {
    BandCombination_UplinkTxSwitch_v1770* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1780
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1780；源文件第 14246 行。
 * @note BandCombinationList-UplinkTxSwitch-v1780 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1780
 */
struct BandCombinationList_UplinkTxSwitch_v1780 {
    BandCombination_UplinkTxSwitch_v1780* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BandCombinationList_UplinkTxSwitch_v1800
 * @note ASN.1：BandCombinationList-UplinkTxSwitch-v1800；源文件第 14248 行。
 * @note BandCombinationList-UplinkTxSwitch-v1800 ::= SEQUENCE OF (size 1..65536) OF BandCombination-UplinkTxSwitch-v1800
 */
struct BandCombinationList_UplinkTxSwitch_v1800 {
    BandCombination_UplinkTxSwitch_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CA_ParametersEUTRA
 * @note ASN.1：CA-ParametersEUTRA；源文件第 14732 行。
 * @note CA-ParametersEUTRA ::= SEQUENCE { multipleTimingAdvance, simultaneousRx-Tx, supportedNAICS-2CRS-AP, ...
 */
struct CA_ParametersEUTRA {
    bool has_multipleTimingAdvance; /**< multipleTimingAdvance 是否存在。 */
    CA_ParametersEUTRA_MultipleTimingAdvance multipleTimingAdvance; /**< ASN.1 multipleTimingAdvance；枚举；OPTIONAL。 */
    bool has_simultaneousRx_Tx; /**< simultaneousRx-Tx 是否存在。 */
    CA_ParametersEUTRA_SimultaneousRx_Tx simultaneousRx_Tx; /**< ASN.1 simultaneousRx-Tx；枚举；OPTIONAL。 */
    bool has_supportedNAICS_2CRS_AP; /**< supportedNAICS-2CRS-AP 是否存在。 */
    BitString supportedNAICS_2CRS_AP; /**< ASN.1 supportedNAICS-2CRS-AP；SIZE (1..8)；OPTIONAL。 */
    bool has_additionalRx_Tx_PerformanceReq; /**< additionalRx-Tx-PerformanceReq 是否存在。 */
    CA_ParametersEUTRA_AdditionalRx_Tx_PerformanceReq additionalRx_Tx_PerformanceReq; /**< ASN.1 additionalRx-Tx-PerformanceReq；枚举；OPTIONAL。 */
    bool has_ue_CA_PowerClass_N; /**< ue-CA-PowerClass-N 是否存在。 */
    CA_ParametersEUTRA_Ue_CA_PowerClass_N ue_CA_PowerClass_N; /**< ASN.1 ue-CA-PowerClass-N；枚举；OPTIONAL。 */
    bool has_supportedBandwidthCombinationSetEUTRA_v1530; /**< supportedBandwidthCombinationSetEUTRA-v1530 是否存在。 */
    BitString supportedBandwidthCombinationSetEUTRA_v1530; /**< ASN.1 supportedBandwidthCombinationSetEUTRA-v1530；SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR
 * @note ASN.1：CA-ParametersNR；源文件第 14753 行。
 * @note CA-ParametersNR ::= SEQUENCE { dummy, parallelTxSRS-PUCCH-PUSCH, parallelTxPRACH-SRS-PUCCH-PUSCH,...
 */
struct CA_ParametersNR {
    bool has_dummy; /**< dummy 是否存在。 */
    CA_ParametersNR_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_parallelTxSRS_PUCCH_PUSCH; /**< parallelTxSRS-PUCCH-PUSCH 是否存在。 */
    CA_ParametersNR_ParallelTxSRS_PUCCH_PUSCH parallelTxSRS_PUCCH_PUSCH; /**< ASN.1 parallelTxSRS-PUCCH-PUSCH；枚举；OPTIONAL。 */
    bool has_parallelTxPRACH_SRS_PUCCH_PUSCH; /**< parallelTxPRACH-SRS-PUCCH-PUSCH 是否存在。 */
    CA_ParametersNR_ParallelTxPRACH_SRS_PUCCH_PUSCH parallelTxPRACH_SRS_PUCCH_PUSCH; /**< ASN.1 parallelTxPRACH-SRS-PUCCH-PUSCH；枚举；OPTIONAL。 */
    bool has_simultaneousRxTxInterBandCA; /**< simultaneousRxTxInterBandCA 是否存在。 */
    CA_ParametersNR_SimultaneousRxTxInterBandCA simultaneousRxTxInterBandCA; /**< ASN.1 simultaneousRxTxInterBandCA；枚举；OPTIONAL。 */
    bool has_simultaneousRxTxSUL; /**< simultaneousRxTxSUL 是否存在。 */
    CA_ParametersNR_SimultaneousRxTxSUL simultaneousRxTxSUL; /**< ASN.1 simultaneousRxTxSUL；枚举；OPTIONAL。 */
    bool has_diffNumerologyAcrossPUCCH_Group; /**< diffNumerologyAcrossPUCCH-Group 是否存在。 */
    CA_ParametersNR_DiffNumerologyAcrossPUCCH_Group diffNumerologyAcrossPUCCH_Group; /**< ASN.1 diffNumerologyAcrossPUCCH-Group；枚举；OPTIONAL。 */
    bool has_diffNumerologyWithinPUCCH_GroupSmallerSCS; /**< diffNumerologyWithinPUCCH-GroupSmallerSCS 是否存在。 */
    CA_ParametersNR_DiffNumerologyWithinPUCCH_GroupSmallerSCS diffNumerologyWithinPUCCH_GroupSmallerSCS; /**< ASN.1 diffNumerologyWithinPUCCH-GroupSmallerSCS；枚举；OPTIONAL。 */
    bool has_supportedNumberTAG; /**< supportedNumberTAG 是否存在。 */
    CA_ParametersNR_SupportedNumberTAG supportedNumberTAG; /**< ASN.1 supportedNumberTAG；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_ExtGroup1
 * @note ASN.1：MRDC_Parameters_ExtGroup1；源文件第 18536 行。
 */
struct MRDC_Parameters_ExtGroup1 {
    bool has_dualPA_Architecture; /**< dualPA-Architecture 是否存在。 */
    MRDC_Parameters_ExtGroup1_DualPA_Architecture dualPA_Architecture; /**< ASN.1 dualPA-Architecture；枚举；OPTIONAL。 */
    bool has_intraBandENDC_Support; /**< intraBandENDC-Support 是否存在。 */
    MRDC_Parameters_ExtGroup1_IntraBandENDC_Support intraBandENDC_Support; /**< ASN.1 intraBandENDC-Support；枚举；OPTIONAL。 */
    bool has_ul_TimingAlignmentEUTRA_NR; /**< ul-TimingAlignmentEUTRA-NR 是否存在。 */
    MRDC_Parameters_ExtGroup1_Ul_TimingAlignmentEUTRA_NR ul_TimingAlignmentEUTRA_NR; /**< ASN.1 ul-TimingAlignmentEUTRA-NR；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters
 * @note ASN.1：MRDC-Parameters；源文件第 18527 行。
 * @note MRDC-Parameters ::= SEQUENCE { singleUL-Transmission, dynamicPowerSharingENDC, tdm-Pattern, ul-Sh...
 */
struct MRDC_Parameters {
    bool has_singleUL_Transmission; /**< singleUL-Transmission 是否存在。 */
    MRDC_Parameters_SingleUL_Transmission singleUL_Transmission; /**< ASN.1 singleUL-Transmission；枚举；OPTIONAL。 */
    bool has_dynamicPowerSharingENDC; /**< dynamicPowerSharingENDC 是否存在。 */
    MRDC_Parameters_DynamicPowerSharingENDC dynamicPowerSharingENDC; /**< ASN.1 dynamicPowerSharingENDC；枚举；OPTIONAL。 */
    bool has_tdm_Pattern; /**< tdm-Pattern 是否存在。 */
    MRDC_Parameters_Tdm_Pattern tdm_Pattern; /**< ASN.1 tdm-Pattern；枚举；OPTIONAL。 */
    bool has_ul_SharingEUTRA_NR; /**< ul-SharingEUTRA-NR 是否存在。 */
    MRDC_Parameters_Ul_SharingEUTRA_NR ul_SharingEUTRA_NR; /**< ASN.1 ul-SharingEUTRA-NR；枚举；OPTIONAL。 */
    bool has_ul_SwitchingTimeEUTRA_NR; /**< ul-SwitchingTimeEUTRA-NR 是否存在。 */
    MRDC_Parameters_Ul_SwitchingTimeEUTRA_NR ul_SwitchingTimeEUTRA_NR; /**< ASN.1 ul-SwitchingTimeEUTRA-NR；枚举；OPTIONAL。 */
    bool has_simultaneousRxTxInterBandENDC; /**< simultaneousRxTxInterBandENDC 是否存在。 */
    MRDC_Parameters_SimultaneousRxTxInterBandENDC simultaneousRxTxInterBandENDC; /**< ASN.1 simultaneousRxTxInterBandENDC；枚举；OPTIONAL。 */
    bool has_asyncIntraBandENDC; /**< asyncIntraBandENDC 是否存在。 */
    MRDC_Parameters_AsyncIntraBandENDC asyncIntraBandENDC; /**< ASN.1 asyncIntraBandENDC；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MRDC_Parameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BandCombination
 * @note ASN.1：BandCombination；源文件第 14250 行。
 * @note BandCombination ::= SEQUENCE { bandList, featureSetCombination, ca-ParametersEUTRA, ca-Parameters...
 */
struct BandCombination {
    BandParameters* bandList_items; /**< ASN.1 bandList；SEQUENCE OF BandParameters，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t bandList_count; /**< bandList 元素个数。 */
    FeatureSetCombinationId featureSetCombination; /**< ASN.1 featureSetCombination；INTEGER (0..1024)，位宽 11 bit。 */
    bool has_ca_ParametersEUTRA; /**< ca-ParametersEUTRA 是否存在。 */
    CA_ParametersEUTRA ca_ParametersEUTRA; /**< ASN.1 ca-ParametersEUTRA；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR; /**< ca-ParametersNR 是否存在。 */
    CA_ParametersNR ca_ParametersNR; /**< ASN.1 ca-ParametersNR；结构体；OPTIONAL。 */
    bool has_mrdc_Parameters; /**< mrdc-Parameters 是否存在。 */
    MRDC_Parameters mrdc_Parameters; /**< ASN.1 mrdc-Parameters；结构体；OPTIONAL。 */
    bool has_supportedBandwidthCombinationSet; /**< supportedBandwidthCombinationSet 是否存在。 */
    BitString supportedBandwidthCombinationSet; /**< ASN.1 supportedBandwidthCombinationSet；SIZE (1..32)；OPTIONAL。 */
    bool has_powerClass_v1530; /**< powerClass-v1530 是否存在。 */
    BandCombination_PowerClass_v1530 powerClass_v1530; /**< ASN.1 powerClass-v1530；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb
 * @note ASN.1：csi-RS-IM-ReceptionForFeedbackPerBandComb；源文件第 14767 行。
 * @note SEQUENCE { maxNumberSimultaneousNZP-CSI-RS-ActBWP-AllCC, totalNumberPortsSimu...
 */
struct CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb {
    bool has_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC; /**< maxNumberSimultaneousNZP-CSI-RS-ActBWP-AllCC 是否存在。 */
    int64_t maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC; /**< ASN.1 maxNumberSimultaneousNZP-CSI-RS-ActBWP-AllCC；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC; /**< totalNumberPortsSimultaneousNZP-CSI-RS-ActBWP-AllCC 是否存在。 */
    int64_t totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC; /**< ASN.1 totalNumberPortsSimultaneousNZP-CSI-RS-ActBWP-AllCC；INTEGER (2..256)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1540
 * @note ASN.1：CA-ParametersNR-v1540；源文件第 14765 行。
 * @note CA-ParametersNR-v1540 ::= SEQUENCE { simultaneousSRS-AssocCSI-RS-AllCC, csi-RS-IM-ReceptionForFeedbackP...
 */
struct CA_ParametersNR_v1540 {
    bool has_simultaneousSRS_AssocCSI_RS_AllCC; /**< simultaneousSRS-AssocCSI-RS-AllCC 是否存在。 */
    int64_t simultaneousSRS_AssocCSI_RS_AllCC; /**< ASN.1 simultaneousSRS-AssocCSI-RS-AllCC；INTEGER (5..32)，位宽 5 bit；OPTIONAL。 */
    bool has_csi_RS_IM_ReceptionForFeedbackPerBandComb; /**< csi-RS-IM-ReceptionForFeedbackPerBandComb 是否存在。 */
    CA_ParametersNR_v1540_Csi_RS_IM_ReceptionForFeedbackPerBandComb csi_RS_IM_ReceptionForFeedbackPerBandComb; /**< ASN.1 csi-RS-IM-ReceptionForFeedbackPerBandComb；结构体；OPTIONAL。 */
    bool has_simultaneousCSI_ReportsAllCC; /**< simultaneousCSI-ReportsAllCC 是否存在。 */
    int64_t simultaneousCSI_ReportsAllCC; /**< ASN.1 simultaneousCSI-ReportsAllCC；INTEGER (5..32)，位宽 5 bit；OPTIONAL。 */
    bool has_dualPA_Architecture; /**< dualPA-Architecture 是否存在。 */
    CA_ParametersNR_v1540_DualPA_Architecture dualPA_Architecture; /**< ASN.1 dualPA-Architecture；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1540
 * @note ASN.1：BandCombination-v1540；源文件第 14260 行。
 * @note BandCombination-v1540 ::= SEQUENCE { bandList-v1540, ca-ParametersNR-v1540 }
 */
struct BandCombination_v1540 {
    BandParameters_v1540* bandList_v1540_items; /**< ASN.1 bandList-v1540；SEQUENCE OF BandParameters_v1540，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t bandList_v1540_count; /**< bandList-v1540 元素个数。 */
    bool has_ca_ParametersNR_v1540; /**< ca-ParametersNR-v1540 是否存在。 */
    CA_ParametersNR_v1540 ca_ParametersNR_v1540; /**< ASN.1 ca-ParametersNR-v1540；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1550
 * @note ASN.1：CA-ParametersNR-v1550；源文件第 14775 行。
 * @note CA-ParametersNR-v1550 ::= SEQUENCE { dummy }
 */
struct CA_ParametersNR_v1550 {
    bool has_dummy; /**< dummy 是否存在。 */
    CA_ParametersNR_v1550_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1550
 * @note ASN.1：BandCombination-v1550；源文件第 14265 行。
 * @note BandCombination-v1550 ::= SEQUENCE { ca-ParametersNR-v1550 }
 */
struct BandCombination_v1550 {
    CA_ParametersNR_v1550 ca_ParametersNR_v1550; /**< ASN.1 ca-ParametersNR-v1550；结构体。 */
};


/**
 * @brief CA_ParametersEUTRA_v1560
 * @note ASN.1：CA-ParametersEUTRA-v1560；源文件第 14742 行。
 * @note CA-ParametersEUTRA-v1560 ::= SEQUENCE { fd-MIMO-TotalWeightedLayers }
 */
struct CA_ParametersEUTRA_v1560 {
    bool has_fd_MIMO_TotalWeightedLayers; /**< fd-MIMO-TotalWeightedLayers 是否存在。 */
    int64_t fd_MIMO_TotalWeightedLayers; /**< ASN.1 fd-MIMO-TotalWeightedLayers；INTEGER (2..128)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1560
 * @note ASN.1：CA-ParametersNR-v1560；源文件第 14779 行。
 * @note CA-ParametersNR-v1560 ::= SEQUENCE { diffNumerologyWithinPUCCH-GroupLargerSCS }
 */
struct CA_ParametersNR_v1560 {
    bool has_diffNumerologyWithinPUCCH_GroupLargerSCS; /**< diffNumerologyWithinPUCCH-GroupLargerSCS 是否存在。 */
    CA_ParametersNR_v1560_DiffNumerologyWithinPUCCH_GroupLargerSCS diffNumerologyWithinPUCCH_GroupLargerSCS; /**< ASN.1 diffNumerologyWithinPUCCH-GroupLargerSCS；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC
 * @note ASN.1：CA-ParametersNRDC；源文件第 15457 行。
 * @note CA-ParametersNRDC ::= SEQUENCE { ca-ParametersNR-ForDC, ca-ParametersNR-ForDC-v1540, ca-ParametersN...
 */
struct CA_ParametersNRDC {
    bool has_ca_ParametersNR_ForDC; /**< ca-ParametersNR-ForDC 是否存在。 */
    CA_ParametersNR ca_ParametersNR_ForDC; /**< ASN.1 ca-ParametersNR-ForDC；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_ForDC_v1540; /**< ca-ParametersNR-ForDC-v1540 是否存在。 */
    CA_ParametersNR_v1540 ca_ParametersNR_ForDC_v1540; /**< ASN.1 ca-ParametersNR-ForDC-v1540；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_ForDC_v1550; /**< ca-ParametersNR-ForDC-v1550 是否存在。 */
    CA_ParametersNR_v1550 ca_ParametersNR_ForDC_v1550; /**< ASN.1 ca-ParametersNR-ForDC-v1550；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_ForDC_v1560; /**< ca-ParametersNR-ForDC-v1560 是否存在。 */
    CA_ParametersNR_v1560 ca_ParametersNR_ForDC_v1560; /**< ASN.1 ca-ParametersNR-ForDC-v1560；结构体；OPTIONAL。 */
    bool has_featureSetCombinationDC; /**< featureSetCombinationDC 是否存在。 */
    FeatureSetCombinationId featureSetCombinationDC; /**< ASN.1 featureSetCombinationDC；INTEGER (0..1024)，位宽 11 bit；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1560
 * @note ASN.1：BandCombination-v1560；源文件第 14268 行。
 * @note BandCombination-v1560 ::= SEQUENCE { ne-DC-BC, ca-ParametersNRDC, ca-ParametersEUTRA-v1560, ca-Paramete...
 */
struct BandCombination_v1560 {
    bool has_ne_DC_BC; /**< ne-DC-BC 是否存在。 */
    BandCombination_v1560_Ne_DC_BC ne_DC_BC; /**< ASN.1 ne-DC-BC；枚举；OPTIONAL。 */
    bool has_ca_ParametersNRDC; /**< ca-ParametersNRDC 是否存在。 */
    CA_ParametersNRDC ca_ParametersNRDC; /**< ASN.1 ca-ParametersNRDC；结构体；OPTIONAL。 */
    bool has_ca_ParametersEUTRA_v1560; /**< ca-ParametersEUTRA-v1560 是否存在。 */
    CA_ParametersEUTRA_v1560 ca_ParametersEUTRA_v1560; /**< ASN.1 ca-ParametersEUTRA-v1560；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_v1560; /**< ca-ParametersNR-v1560 是否存在。 */
    CA_ParametersNR_v1560 ca_ParametersNR_v1560; /**< ASN.1 ca-ParametersNR-v1560；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersEUTRA_v1570
 * @note ASN.1：CA-ParametersEUTRA-v1570；源文件第 14746 行。
 * @note CA-ParametersEUTRA-v1570 ::= SEQUENCE { dl-1024QAM-TotalWeightedLayers }
 */
struct CA_ParametersEUTRA_v1570 {
    bool has_dl_1024QAM_TotalWeightedLayers; /**< dl-1024QAM-TotalWeightedLayers 是否存在。 */
    int64_t dl_1024QAM_TotalWeightedLayers; /**< ASN.1 dl-1024QAM-TotalWeightedLayers；INTEGER (0..10)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1570
 * @note ASN.1：BandCombination-v1570；源文件第 14275 行。
 * @note BandCombination-v1570 ::= SEQUENCE { ca-ParametersEUTRA-v1570 }
 */
struct BandCombination_v1570 {
    CA_ParametersEUTRA_v1570 ca_ParametersEUTRA_v1570; /**< ASN.1 ca-ParametersEUTRA-v1570；结构体。 */
};


/**
 * @brief MRDC_Parameters_v1580
 * @note ASN.1：MRDC-Parameters-v1580；源文件第 18543 行。
 * @note MRDC-Parameters-v1580 ::= SEQUENCE { dynamicPowerSharingNEDC }
 */
struct MRDC_Parameters_v1580 {
    bool has_dynamicPowerSharingNEDC; /**< dynamicPowerSharingNEDC 是否存在。 */
    MRDC_Parameters_v1580_DynamicPowerSharingNEDC dynamicPowerSharingNEDC; /**< ASN.1 dynamicPowerSharingNEDC；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1580
 * @note ASN.1：BandCombination-v1580；源文件第 14279 行。
 * @note BandCombination-v1580 ::= SEQUENCE { mrdc-Parameters-v1580 }
 */
struct BandCombination_v1580 {
    MRDC_Parameters_v1580 mrdc_Parameters_v1580; /**< ASN.1 mrdc-Parameters-v1580；结构体。 */
};


/**
 * @brief MRDC_Parameters_v1590
 * @note ASN.1：MRDC-Parameters-v1590；源文件第 18547 行。
 * @note MRDC-Parameters-v1590 ::= SEQUENCE { interBandContiguousMRDC }
 */
struct MRDC_Parameters_v1590 {
    bool has_interBandContiguousMRDC; /**< interBandContiguousMRDC 是否存在。 */
    MRDC_Parameters_v1590_InterBandContiguousMRDC interBandContiguousMRDC; /**< ASN.1 interBandContiguousMRDC；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1590
 * @note ASN.1：BandCombination-v1590；源文件第 14283 行。
 * @note BandCombination-v1590 ::= SEQUENCE { supportedBandwidthCombinationSetIntraENDC, mrdc-Parameters-v1590 }
 */
struct BandCombination_v1590 {
    bool has_supportedBandwidthCombinationSetIntraENDC; /**< supportedBandwidthCombinationSetIntraENDC 是否存在。 */
    BitString supportedBandwidthCombinationSetIntraENDC; /**< ASN.1 supportedBandwidthCombinationSetIntraENDC；SIZE (1..32)；OPTIONAL。 */
    MRDC_Parameters_v1590 mrdc_Parameters_v1590; /**< ASN.1 mrdc-Parameters-v1590；结构体。 */
};


/**
 * @brief CA_ParametersNR_v15g0
 * @note ASN.1：CA-ParametersNR-v15g0；源文件第 14783 行。
 * @note CA-ParametersNR-v15g0 ::= SEQUENCE { simultaneousRxTxInterBandCAPerBandPair, simultaneousRxTxSULPerBand...
 */
struct CA_ParametersNR_v15g0 {
    bool has_simultaneousRxTxInterBandCAPerBandPair; /**< simultaneousRxTxInterBandCAPerBandPair 是否存在。 */
    SimultaneousRxTxPerBandPair simultaneousRxTxInterBandCAPerBandPair; /**< ASN.1 simultaneousRxTxInterBandCAPerBandPair；SIZE (3..496)；OPTIONAL。 */
    bool has_simultaneousRxTxSULPerBandPair; /**< simultaneousRxTxSULPerBandPair 是否存在。 */
    SimultaneousRxTxPerBandPair simultaneousRxTxSULPerBandPair; /**< ASN.1 simultaneousRxTxSULPerBandPair；SIZE (3..496)；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v15g0
 * @note ASN.1：CA-ParametersNRDC-v15g0；源文件第 15465 行。
 * @note CA-ParametersNRDC-v15g0 ::= SEQUENCE { ca-ParametersNR-ForDC-v15g0 }
 */
struct CA_ParametersNRDC_v15g0 {
    bool has_ca_ParametersNR_ForDC_v15g0; /**< ca-ParametersNR-ForDC-v15g0 是否存在。 */
    CA_ParametersNR_v15g0 ca_ParametersNR_ForDC_v15g0; /**< ASN.1 ca-ParametersNR-ForDC-v15g0；结构体；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v15g0
 * @note ASN.1：MRDC-Parameters-v15g0；源文件第 18551 行。
 * @note MRDC-Parameters-v15g0 ::= SEQUENCE { simultaneousRxTxInterBandENDCPerBandPair }
 */
struct MRDC_Parameters_v15g0 {
    bool has_simultaneousRxTxInterBandENDCPerBandPair; /**< simultaneousRxTxInterBandENDCPerBandPair 是否存在。 */
    SimultaneousRxTxPerBandPair simultaneousRxTxInterBandENDCPerBandPair; /**< ASN.1 simultaneousRxTxInterBandENDCPerBandPair；SIZE (3..496)；OPTIONAL。 */
};


/**
 * @brief BandCombination_v15g0
 * @note ASN.1：BandCombination-v15g0；源文件第 14288 行。
 * @note BandCombination-v15g0 ::= SEQUENCE { ca-ParametersNR-v15g0, ca-ParametersNRDC-v15g0, mrdc-Parameters-v1...
 */
struct BandCombination_v15g0 {
    bool has_ca_ParametersNR_v15g0; /**< ca-ParametersNR-v15g0 是否存在。 */
    CA_ParametersNR_v15g0 ca_ParametersNR_v15g0; /**< ASN.1 ca-ParametersNR-v15g0；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v15g0; /**< ca-ParametersNRDC-v15g0 是否存在。 */
    CA_ParametersNRDC_v15g0 ca_ParametersNRDC_v15g0; /**< ASN.1 ca-ParametersNRDC-v15g0；结构体；OPTIONAL。 */
    bool has_mrdc_Parameters_v15g0; /**< mrdc-Parameters-v15g0 是否存在。 */
    MRDC_Parameters_v15g0 mrdc_Parameters_v15g0; /**< ASN.1 mrdc-Parameters-v15g0；结构体；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v15n0
 * @note ASN.1：MRDC-Parameters-v15n0；源文件第 18555 行。
 * @note MRDC-Parameters-v15n0 ::= SEQUENCE { intraBandENDC-Support-UL }
 */
struct MRDC_Parameters_v15n0 {
    bool has_intraBandENDC_Support_UL; /**< intraBandENDC-Support-UL 是否存在。 */
    MRDC_Parameters_v15n0_IntraBandENDC_Support_UL intraBandENDC_Support_UL; /**< ASN.1 intraBandENDC-Support-UL；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v15n0
 * @note ASN.1：BandCombination-v15n0；源文件第 14294 行。
 * @note BandCombination-v15n0 ::= SEQUENCE { mrdc-Parameters-v15n0 }
 */
struct BandCombination_v15n0 {
    MRDC_Parameters_v15n0 mrdc_Parameters_v15n0; /**< ASN.1 mrdc-Parameters-v15n0；结构体。 */
};


/**
 * @brief CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16
 * @note ASN.1：supportedCSI-RS-ResourceListAlt-r16；源文件第 15583 行。
 * @note SEQUENCE { type1-SinglePanel-r16, type1-MultiPanel-r16, type2-r16, type2-Port...
 */
struct CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16 {
    bool has_type1_SinglePanel_r16; /**< type1-SinglePanel-r16 是否存在。 */
    int64_t* type1_SinglePanel_r16_items; /**< ASN.1 type1-SinglePanel-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1_SinglePanel_r16_count; /**< type1-SinglePanel-r16 元素个数。 */
    bool has_type1_MultiPanel_r16; /**< type1-MultiPanel-r16 是否存在。 */
    int64_t* type1_MultiPanel_r16_items; /**< ASN.1 type1-MultiPanel-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1_MultiPanel_r16_count; /**< type1-MultiPanel-r16 元素个数。 */
    bool has_type2_r16; /**< type2-r16 是否存在。 */
    int64_t* type2_r16_items; /**< ASN.1 type2-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type2_r16_count; /**< type2-r16 元素个数。 */
    bool has_type2_PortSelection_r16; /**< type2-PortSelection-r16 是否存在。 */
    int64_t* type2_PortSelection_r16_items; /**< ASN.1 type2-PortSelection-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type2_PortSelection_r16_count; /**< type2-PortSelection-r16 元素个数。 */
};


/**
 * @brief CodebookParameters_v1610
 * @note ASN.1：CodebookParameters-v1610；源文件第 15582 行。
 * @note CodebookParameters-v1610 ::= SEQUENCE { supportedCSI-RS-ResourceListAlt-r16 }
 */
struct CodebookParameters_v1610 {
    bool has_supportedCSI_RS_ResourceListAlt_r16; /**< supportedCSI-RS-ResourceListAlt-r16 是否存在。 */
    CodebookParameters_v1610_SupportedCSI_RS_ResourceListAlt_r16 supportedCSI_RS_ResourceListAlt_r16; /**< ASN.1 supportedCSI-RS-ResourceListAlt-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CodebookParametersAdditionPerBC_r16
 * @note ASN.1：CodebookParametersAdditionPerBC-r16；源文件第 15784 行。
 * @note CodebookParametersAdditionPerBC-r16 ::= SEQUENCE { etype2R1-r16, etype2R2-r16, etype2R1-PortSelection-r16, etype2R2-P...
 */
struct CodebookParametersAdditionPerBC_r16 {
    bool has_etype2R1_r16; /**< etype2R1-r16 是否存在。 */
    int64_t* etype2R1_r16_items; /**< ASN.1 etype2R1-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t etype2R1_r16_count; /**< etype2R1-r16 元素个数。 */
    bool has_etype2R2_r16; /**< etype2R2-r16 是否存在。 */
    int64_t* etype2R2_r16_items; /**< ASN.1 etype2R2-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t etype2R2_r16_count; /**< etype2R2-r16 元素个数。 */
    bool has_etype2R1_PortSelection_r16; /**< etype2R1-PortSelection-r16 是否存在。 */
    int64_t* etype2R1_PortSelection_r16_items; /**< ASN.1 etype2R1-PortSelection-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t etype2R1_PortSelection_r16_count; /**< etype2R1-PortSelection-r16 元素个数。 */
    bool has_etype2R2_PortSelection_r16; /**< etype2R2-PortSelection-r16 是否存在。 */
    int64_t* etype2R2_PortSelection_r16_items; /**< ASN.1 etype2R2-PortSelection-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t etype2R2_PortSelection_r16_count; /**< etype2R2-PortSelection-r16 元素个数。 */
};


/**
 * @brief CodebookComboParametersAdditionPerBC_r16
 * @note ASN.1：CodebookComboParametersAdditionPerBC-r16；源文件第 15799 行。
 * @note CodebookComboParametersAdditionPerBC-r16 ::= SEQUENCE { type1SP-Type2-null-r16, type1SP-Type2PS-null-r16, type1SP-eType2R1...
 */
struct CodebookComboParametersAdditionPerBC_r16 {
    bool has_type1SP_Type2_null_r16; /**< type1SP-Type2-null-r16 是否存在。 */
    int64_t* type1SP_Type2_null_r16_items; /**< ASN.1 type1SP-Type2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2_null_r16_count; /**< type1SP-Type2-null-r16 元素个数。 */
    bool has_type1SP_Type2PS_null_r16; /**< type1SP-Type2PS-null-r16 是否存在。 */
    int64_t* type1SP_Type2PS_null_r16_items; /**< ASN.1 type1SP-Type2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2PS_null_r16_count; /**< type1SP-Type2PS-null-r16 元素个数。 */
    bool has_type1SP_eType2R1_null_r16; /**< type1SP-eType2R1-null-r16 是否存在。 */
    int64_t* type1SP_eType2R1_null_r16_items; /**< ASN.1 type1SP-eType2R1-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R1_null_r16_count; /**< type1SP-eType2R1-null-r16 元素个数。 */
    bool has_type1SP_eType2R2_null_r16; /**< type1SP-eType2R2-null-r16 是否存在。 */
    int64_t* type1SP_eType2R2_null_r16_items; /**< ASN.1 type1SP-eType2R2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R2_null_r16_count; /**< type1SP-eType2R2-null-r16 元素个数。 */
    bool has_type1SP_eType2R1PS_null_r16; /**< type1SP-eType2R1PS-null-r16 是否存在。 */
    int64_t* type1SP_eType2R1PS_null_r16_items; /**< ASN.1 type1SP-eType2R1PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R1PS_null_r16_count; /**< type1SP-eType2R1PS-null-r16 元素个数。 */
    bool has_type1SP_eType2R2PS_null_r16; /**< type1SP-eType2R2PS-null-r16 是否存在。 */
    int64_t* type1SP_eType2R2PS_null_r16_items; /**< ASN.1 type1SP-eType2R2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R2PS_null_r16_count; /**< type1SP-eType2R2PS-null-r16 元素个数。 */
    bool has_type1SP_Type2_Type2PS_r16; /**< type1SP-Type2-Type2PS-r16 是否存在。 */
    int64_t* type1SP_Type2_Type2PS_r16_items; /**< ASN.1 type1SP-Type2-Type2PS-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2_Type2PS_r16_count; /**< type1SP-Type2-Type2PS-r16 元素个数。 */
    bool has_type1MP_Type2_null_r16; /**< type1MP-Type2-null-r16 是否存在。 */
    int64_t* type1MP_Type2_null_r16_items; /**< ASN.1 type1MP-Type2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2_null_r16_count; /**< type1MP-Type2-null-r16 元素个数。 */
    bool has_type1MP_Type2PS_null_r16; /**< type1MP-Type2PS-null-r16 是否存在。 */
    int64_t* type1MP_Type2PS_null_r16_items; /**< ASN.1 type1MP-Type2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2PS_null_r16_count; /**< type1MP-Type2PS-null-r16 元素个数。 */
    bool has_type1MP_eType2R1_null_r16; /**< type1MP-eType2R1-null-r16 是否存在。 */
    int64_t* type1MP_eType2R1_null_r16_items; /**< ASN.1 type1MP-eType2R1-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R1_null_r16_count; /**< type1MP-eType2R1-null-r16 元素个数。 */
    bool has_type1MP_eType2R2_null_r16; /**< type1MP-eType2R2-null-r16 是否存在。 */
    int64_t* type1MP_eType2R2_null_r16_items; /**< ASN.1 type1MP-eType2R2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R2_null_r16_count; /**< type1MP-eType2R2-null-r16 元素个数。 */
    bool has_type1MP_eType2R1PS_null_r16; /**< type1MP-eType2R1PS-null-r16 是否存在。 */
    int64_t* type1MP_eType2R1PS_null_r16_items; /**< ASN.1 type1MP-eType2R1PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R1PS_null_r16_count; /**< type1MP-eType2R1PS-null-r16 元素个数。 */
    bool has_type1MP_eType2R2PS_null_r16; /**< type1MP-eType2R2PS-null-r16 是否存在。 */
    int64_t* type1MP_eType2R2PS_null_r16_items; /**< ASN.1 type1MP-eType2R2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R2PS_null_r16_count; /**< type1MP-eType2R2PS-null-r16 元素个数。 */
    bool has_type1MP_Type2_Type2PS_r16; /**< type1MP-Type2-Type2PS-r16 是否存在。 */
    int64_t* type1MP_Type2_Type2PS_r16_items; /**< ASN.1 type1MP-Type2-Type2PS-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2_Type2PS_r16_count; /**< type1MP-Type2-Type2PS-r16 元素个数。 */
};


/**
 * @brief CA_ParametersNR_v1610_InterFreqDAPS_r16
 * @note ASN.1：interFreqDAPS-r16；源文件第 14808 行。
 * @note SEQUENCE { interFreqAsyncDAPS-r16, interFreqDiffSCS-DAPS-r16, interFreqMultiU...
 */
struct CA_ParametersNR_v1610_InterFreqDAPS_r16 {
    bool has_interFreqAsyncDAPS_r16; /**< interFreqAsyncDAPS-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqAsyncDAPS_r16 interFreqAsyncDAPS_r16; /**< ASN.1 interFreqAsyncDAPS-r16；枚举；OPTIONAL。 */
    bool has_interFreqDiffSCS_DAPS_r16; /**< interFreqDiffSCS-DAPS-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDiffSCS_DAPS_r16 interFreqDiffSCS_DAPS_r16; /**< ASN.1 interFreqDiffSCS-DAPS-r16；枚举；OPTIONAL。 */
    bool has_interFreqMultiUL_TransmissionDAPS_r16; /**< interFreqMultiUL-TransmissionDAPS-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqMultiUL_TransmissionDAPS_r16 interFreqMultiUL_TransmissionDAPS_r16; /**< ASN.1 interFreqMultiUL-TransmissionDAPS-r16；枚举；OPTIONAL。 */
    bool has_interFreqSemiStaticPowerSharingDAPS_Mode1_r16; /**< interFreqSemiStaticPowerSharingDAPS-Mode1-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode1_r16 interFreqSemiStaticPowerSharingDAPS_Mode1_r16; /**< ASN.1 interFreqSemiStaticPowerSharingDAPS-Mode1-r16；枚举；OPTIONAL。 */
    bool has_interFreqSemiStaticPowerSharingDAPS_Mode2_r16; /**< interFreqSemiStaticPowerSharingDAPS-Mode2-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqSemiStaticPowerSharingDAPS_Mode2_r16 interFreqSemiStaticPowerSharingDAPS_Mode2_r16; /**< ASN.1 interFreqSemiStaticPowerSharingDAPS-Mode2-r16；枚举；OPTIONAL。 */
    bool has_interFreqDynamicPowerSharingDAPS_r16; /**< interFreqDynamicPowerSharingDAPS-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqDynamicPowerSharingDAPS_r16 interFreqDynamicPowerSharingDAPS_r16; /**< ASN.1 interFreqDynamicPowerSharingDAPS-r16；枚举；OPTIONAL。 */
    bool has_interFreqUL_TransCancellationDAPS_r16; /**< interFreqUL-TransCancellationDAPS-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16_InterFreqUL_TransCancellationDAPS_r16 interFreqUL_TransCancellationDAPS_r16; /**< ASN.1 interFreqUL-TransCancellationDAPS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16
 * @note ASN.1：pdcch-MonitoringCA-r16；源文件第 14822 行。
 * @note SEQUENCE { maxNumberOfMonitoringCC-r16, supportedSpanArrangement-r16 }
 */
struct CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16 {
    int64_t maxNumberOfMonitoringCC_r16; /**< ASN.1 maxNumberOfMonitoringCC-r16；INTEGER (2..16)，位宽 4 bit。 */
    CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16_SupportedSpanArrangement_r16 supportedSpanArrangement_r16; /**< ASN.1 supportedSpanArrangement-r16；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16
 * @note ASN.1：pdcch-BlindDetectionCA-Mixed-r16；源文件第 14828 行。
 * @note SEQUENCE { pdcch-BlindDetectionCA1-r16, pdcch-BlindDetectionCA2-r16, supporte...
 */
struct CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16 {
    int64_t pdcch_BlindDetectionCA1_r16; /**< ASN.1 pdcch-BlindDetectionCA1-r16；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCA2_r16; /**< ASN.1 pdcch-BlindDetectionCA2-r16；INTEGER (1..15)，位宽 4 bit。 */
    CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16_SupportedSpanArrangement_r16 supportedSpanArrangement_r16; /**< ASN.1 supportedSpanArrangement-r16；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16
 * @note ASN.1：pdcch-BlindDetectionMCG-UE-Mixed-r16；源文件第 14839 行。
 * @note SEQUENCE { pdcch-BlindDetectionMCG-UE1-r16, pdcch-BlindDetectionMCG-UE2-r16 }
 */
struct CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16 {
    int64_t pdcch_BlindDetectionMCG_UE1_r16; /**< ASN.1 pdcch-BlindDetectionMCG-UE1-r16；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionMCG_UE2_r16; /**< ASN.1 pdcch-BlindDetectionMCG-UE2-r16；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16
 * @note ASN.1：pdcch-BlindDetectionSCG-UE-Mixed-r16；源文件第 14843 行。
 * @note SEQUENCE { pdcch-BlindDetectionSCG-UE1-r16, pdcch-BlindDetectionSCG-UE2-r16 }
 */
struct CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16 {
    int64_t pdcch_BlindDetectionSCG_UE1_r16; /**< ASN.1 pdcch-BlindDetectionSCG-UE1-r16；INTEGER (0..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionSCG_UE2_r16; /**< ASN.1 pdcch-BlindDetectionSCG-UE2-r16；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief CA_ParametersNR_v1610
 * @note ASN.1：CA-ParametersNR-v1610；源文件第 14788 行。
 * @note CA-ParametersNR-v1610 ::= SEQUENCE { parallelTxMsgA-SRS-PUCCH-PUSCH-r16, msgA-SUL-r16, jointSearchSpace...
 */
struct CA_ParametersNR_v1610 {
    bool has_parallelTxMsgA_SRS_PUCCH_PUSCH_r16; /**< parallelTxMsgA-SRS-PUCCH-PUSCH-r16 是否存在。 */
    CA_ParametersNR_v1610_ParallelTxMsgA_SRS_PUCCH_PUSCH_r16 parallelTxMsgA_SRS_PUCCH_PUSCH_r16; /**< ASN.1 parallelTxMsgA-SRS-PUCCH-PUSCH-r16；枚举；OPTIONAL。 */
    bool has_msgA_SUL_r16; /**< msgA-SUL-r16 是否存在。 */
    CA_ParametersNR_v1610_MsgA_SUL_r16 msgA_SUL_r16; /**< ASN.1 msgA-SUL-r16；枚举；OPTIONAL。 */
    bool has_jointSearchSpaceSwitchAcrossCells_r16; /**< jointSearchSpaceSwitchAcrossCells-r16 是否存在。 */
    CA_ParametersNR_v1610_JointSearchSpaceSwitchAcrossCells_r16 jointSearchSpaceSwitchAcrossCells_r16; /**< ASN.1 jointSearchSpaceSwitchAcrossCells-r16；枚举；OPTIONAL。 */
    bool has_half_DuplexTDD_CA_SameSCS_r16; /**< half-DuplexTDD-CA-SameSCS-r16 是否存在。 */
    CA_ParametersNR_v1610_Half_DuplexTDD_CA_SameSCS_r16 half_DuplexTDD_CA_SameSCS_r16; /**< ASN.1 half-DuplexTDD-CA-SameSCS-r16；枚举；OPTIONAL。 */
    bool has_scellDormancyWithinActiveTime_r16; /**< scellDormancyWithinActiveTime-r16 是否存在。 */
    CA_ParametersNR_v1610_ScellDormancyWithinActiveTime_r16 scellDormancyWithinActiveTime_r16; /**< ASN.1 scellDormancyWithinActiveTime-r16；枚举；OPTIONAL。 */
    bool has_scellDormancyOutsideActiveTime_r16; /**< scellDormancyOutsideActiveTime-r16 是否存在。 */
    CA_ParametersNR_v1610_ScellDormancyOutsideActiveTime_r16 scellDormancyOutsideActiveTime_r16; /**< ASN.1 scellDormancyOutsideActiveTime-r16；枚举；OPTIONAL。 */
    bool has_crossCarrierA_CSI_trigDiffSCS_r16; /**< crossCarrierA-CSI-trigDiffSCS-r16 是否存在。 */
    CA_ParametersNR_v1610_CrossCarrierA_CSI_trigDiffSCS_r16 crossCarrierA_CSI_trigDiffSCS_r16; /**< ASN.1 crossCarrierA-CSI-trigDiffSCS-r16；枚举；OPTIONAL。 */
    bool has_defaultQCL_CrossCarrierA_CSI_Trig_r16; /**< defaultQCL-CrossCarrierA-CSI-Trig-r16 是否存在。 */
    CA_ParametersNR_v1610_DefaultQCL_CrossCarrierA_CSI_Trig_r16 defaultQCL_CrossCarrierA_CSI_Trig_r16; /**< ASN.1 defaultQCL-CrossCarrierA-CSI-Trig-r16；枚举；OPTIONAL。 */
    bool has_interCA_NonAlignedFrame_r16; /**< interCA-NonAlignedFrame-r16 是否存在。 */
    CA_ParametersNR_v1610_InterCA_NonAlignedFrame_r16 interCA_NonAlignedFrame_r16; /**< ASN.1 interCA-NonAlignedFrame-r16；枚举；OPTIONAL。 */
    bool has_simul_SRS_Trans_BC_r16; /**< simul-SRS-Trans-BC-r16 是否存在。 */
    CA_ParametersNR_v1610_Simul_SRS_Trans_BC_r16 simul_SRS_Trans_BC_r16; /**< ASN.1 simul-SRS-Trans-BC-r16；枚举；OPTIONAL。 */
    bool has_interFreqDAPS_r16; /**< interFreqDAPS-r16 是否存在。 */
    CA_ParametersNR_v1610_InterFreqDAPS_r16 interFreqDAPS_r16; /**< ASN.1 interFreqDAPS-r16；结构体；OPTIONAL。 */
    bool has_codebookParametersPerBC_r16; /**< codebookParametersPerBC-r16 是否存在。 */
    CodebookParameters_v1610 codebookParametersPerBC_r16; /**< ASN.1 codebookParametersPerBC-r16；结构体；OPTIONAL。 */
    bool has_blindDetectFactor_r16; /**< blindDetectFactor-r16 是否存在。 */
    int64_t blindDetectFactor_r16; /**< ASN.1 blindDetectFactor-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_pdcch_MonitoringCA_r16; /**< pdcch-MonitoringCA-r16 是否存在。 */
    CA_ParametersNR_v1610_Pdcch_MonitoringCA_r16 pdcch_MonitoringCA_r16; /**< ASN.1 pdcch-MonitoringCA-r16；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA_Mixed_r16; /**< pdcch-BlindDetectionCA-Mixed-r16 是否存在。 */
    CA_ParametersNR_v1610_Pdcch_BlindDetectionCA_Mixed_r16 pdcch_BlindDetectionCA_Mixed_r16; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-r16；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionMCG_UE_r16; /**< pdcch-BlindDetectionMCG-UE-r16 是否存在。 */
    int64_t pdcch_BlindDetectionMCG_UE_r16; /**< ASN.1 pdcch-BlindDetectionMCG-UE-r16；INTEGER (1..14)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionSCG_UE_r16; /**< pdcch-BlindDetectionSCG-UE-r16 是否存在。 */
    int64_t pdcch_BlindDetectionSCG_UE_r16; /**< ASN.1 pdcch-BlindDetectionSCG-UE-r16；INTEGER (1..14)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionMCG_UE_Mixed_r16; /**< pdcch-BlindDetectionMCG-UE-Mixed-r16 是否存在。 */
    CA_ParametersNR_v1610_Pdcch_BlindDetectionMCG_UE_Mixed_r16 pdcch_BlindDetectionMCG_UE_Mixed_r16; /**< ASN.1 pdcch-BlindDetectionMCG-UE-Mixed-r16；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionSCG_UE_Mixed_r16; /**< pdcch-BlindDetectionSCG-UE-Mixed-r16 是否存在。 */
    CA_ParametersNR_v1610_Pdcch_BlindDetectionSCG_UE_Mixed_r16 pdcch_BlindDetectionSCG_UE_Mixed_r16; /**< ASN.1 pdcch-BlindDetectionSCG-UE-Mixed-r16；结构体；OPTIONAL。 */
    bool has_crossCarrierSchedulingDL_DiffSCS_r16; /**< crossCarrierSchedulingDL-DiffSCS-r16 是否存在。 */
    CA_ParametersNR_v1610_CrossCarrierSchedulingDL_DiffSCS_r16 crossCarrierSchedulingDL_DiffSCS_r16; /**< ASN.1 crossCarrierSchedulingDL-DiffSCS-r16；枚举；OPTIONAL。 */
    bool has_crossCarrierSchedulingDefaultQCL_r16; /**< crossCarrierSchedulingDefaultQCL-r16 是否存在。 */
    CA_ParametersNR_v1610_CrossCarrierSchedulingDefaultQCL_r16 crossCarrierSchedulingDefaultQCL_r16; /**< ASN.1 crossCarrierSchedulingDefaultQCL-r16；枚举；OPTIONAL。 */
    bool has_crossCarrierSchedulingUL_DiffSCS_r16; /**< crossCarrierSchedulingUL-DiffSCS-r16 是否存在。 */
    CA_ParametersNR_v1610_CrossCarrierSchedulingUL_DiffSCS_r16 crossCarrierSchedulingUL_DiffSCS_r16; /**< ASN.1 crossCarrierSchedulingUL-DiffSCS-r16；枚举；OPTIONAL。 */
    bool has_simul_SRS_MIMO_Trans_BC_r16; /**< simul-SRS-MIMO-Trans-BC-r16 是否存在。 */
    CA_ParametersNR_v1610_Simul_SRS_MIMO_Trans_BC_r16 simul_SRS_MIMO_Trans_BC_r16; /**< ASN.1 simul-SRS-MIMO-Trans-BC-r16；枚举；OPTIONAL。 */
    bool has_codebookParametersAdditionPerBC_r16; /**< codebookParametersAdditionPerBC-r16 是否存在。 */
    CodebookParametersAdditionPerBC_r16 codebookParametersAdditionPerBC_r16; /**< ASN.1 codebookParametersAdditionPerBC-r16；结构体；OPTIONAL。 */
    bool has_codebookComboParametersAdditionPerBC_r16; /**< codebookComboParametersAdditionPerBC-r16 是否存在。 */
    CodebookComboParametersAdditionPerBC_r16 codebookComboParametersAdditionPerBC_r16; /**< ASN.1 codebookComboParametersAdditionPerBC-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1610
 * @note ASN.1：CA-ParametersNRDC-v1610；源文件第 15469 行。
 * @note CA-ParametersNRDC-v1610 ::= SEQUENCE { intraFR-NR-DC-PwrSharingMode1-r16, intraFR-NR-DC-PwrSharingMode2-r...
 */
struct CA_ParametersNRDC_v1610 {
    bool has_intraFR_NR_DC_PwrSharingMode1_r16; /**< intraFR-NR-DC-PwrSharingMode1-r16 是否存在。 */
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode1_r16 intraFR_NR_DC_PwrSharingMode1_r16; /**< ASN.1 intraFR-NR-DC-PwrSharingMode1-r16；枚举；OPTIONAL。 */
    bool has_intraFR_NR_DC_PwrSharingMode2_r16; /**< intraFR-NR-DC-PwrSharingMode2-r16 是否存在。 */
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_PwrSharingMode2_r16 intraFR_NR_DC_PwrSharingMode2_r16; /**< ASN.1 intraFR-NR-DC-PwrSharingMode2-r16；枚举；OPTIONAL。 */
    bool has_intraFR_NR_DC_DynamicPwrSharing_r16; /**< intraFR-NR-DC-DynamicPwrSharing-r16 是否存在。 */
    CA_ParametersNRDC_v1610_IntraFR_NR_DC_DynamicPwrSharing_r16 intraFR_NR_DC_DynamicPwrSharing_r16; /**< ASN.1 intraFR-NR-DC-DynamicPwrSharing-r16；枚举；OPTIONAL。 */
    bool has_asyncNRDC_r16; /**< asyncNRDC-r16 是否存在。 */
    CA_ParametersNRDC_v1610_AsyncNRDC_r16 asyncNRDC_r16; /**< ASN.1 asyncNRDC-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16
 * @note ASN.1：maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16；源文件第 18560 行。
 * @note SEQUENCE { eutra-TDD-Config0-r16, eutra-TDD-Config1-r16, eutra-TDD-Config2-r1...
 */
struct MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16 {
    bool has_eutra_TDD_Config0_r16; /**< eutra-TDD-Config0-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config0_r16 eutra_TDD_Config0_r16; /**< ASN.1 eutra-TDD-Config0-r16；枚举；OPTIONAL。 */
    bool has_eutra_TDD_Config1_r16; /**< eutra-TDD-Config1-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config1_r16 eutra_TDD_Config1_r16; /**< ASN.1 eutra-TDD-Config1-r16；枚举；OPTIONAL。 */
    bool has_eutra_TDD_Config2_r16; /**< eutra-TDD-Config2-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config2_r16 eutra_TDD_Config2_r16; /**< ASN.1 eutra-TDD-Config2-r16；枚举；OPTIONAL。 */
    bool has_eutra_TDD_Config3_r16; /**< eutra-TDD-Config3-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config3_r16 eutra_TDD_Config3_r16; /**< ASN.1 eutra-TDD-Config3-r16；枚举；OPTIONAL。 */
    bool has_eutra_TDD_Config4_r16; /**< eutra-TDD-Config4-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config4_r16 eutra_TDD_Config4_r16; /**< ASN.1 eutra-TDD-Config4-r16；枚举；OPTIONAL。 */
    bool has_eutra_TDD_Config5_r16; /**< eutra-TDD-Config5-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config5_r16 eutra_TDD_Config5_r16; /**< ASN.1 eutra-TDD-Config5-r16；枚举；OPTIONAL。 */
    bool has_eutra_TDD_Config6_r16; /**< eutra-TDD-Config6-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16_Eutra_TDD_Config6_r16 eutra_TDD_Config6_r16; /**< ASN.1 eutra-TDD-Config6-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v1620
 * @note ASN.1：MRDC-Parameters-v1620；源文件第 18559 行。
 * @note MRDC-Parameters-v1620 ::= SEQUENCE { maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16, tdm-restrictionTDD-e...
 */
struct MRDC_Parameters_v1620 {
    bool has_maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16; /**< maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16 是否存在。 */
    MRDC_Parameters_v1620_MaxUplinkDutyCycle_interBandENDC_TDD_PC2_r16 maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16; /**< ASN.1 maxUplinkDutyCycle-interBandENDC-TDD-PC2-r16；结构体；OPTIONAL。 */
    bool has_tdm_restrictionTDD_endc_r16; /**< tdm-restrictionTDD-endc-r16 是否存在。 */
    MRDC_Parameters_v1620_Tdm_restrictionTDD_endc_r16 tdm_restrictionTDD_endc_r16; /**< ASN.1 tdm-restrictionTDD-endc-r16；枚举；OPTIONAL。 */
    bool has_tdm_restrictionFDD_endc_r16; /**< tdm-restrictionFDD-endc-r16 是否存在。 */
    MRDC_Parameters_v1620_Tdm_restrictionFDD_endc_r16 tdm_restrictionFDD_endc_r16; /**< ASN.1 tdm-restrictionFDD-endc-r16；枚举；OPTIONAL。 */
    bool has_singleUL_HARQ_offsetTDD_PCell_r16; /**< singleUL-HARQ-offsetTDD-PCell-r16 是否存在。 */
    MRDC_Parameters_v1620_SingleUL_HARQ_offsetTDD_PCell_r16 singleUL_HARQ_offsetTDD_PCell_r16; /**< ASN.1 singleUL-HARQ-offsetTDD-PCell-r16；枚举；OPTIONAL。 */
    bool has_tdm_restrictionDualTX_FDD_endc_r16; /**< tdm-restrictionDualTX-FDD-endc-r16 是否存在。 */
    MRDC_Parameters_v1620_Tdm_restrictionDualTX_FDD_endc_r16 tdm_restrictionDualTX_FDD_endc_r16; /**< ASN.1 tdm-restrictionDualTX-FDD-endc-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1610
 * @note ASN.1：BandCombination-v1610；源文件第 14298 行。
 * @note BandCombination-v1610 ::= SEQUENCE { bandList-v1610, ca-ParametersNR-v1610, ca-ParametersNRDC-v1610, po...
 */
struct BandCombination_v1610 {
    bool has_bandList_v1610; /**< bandList-v1610 是否存在。 */
    BandParameters_v1610* bandList_v1610_items; /**< ASN.1 bandList-v1610；SEQUENCE OF BandParameters_v1610，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bandList_v1610_count; /**< bandList-v1610 元素个数。 */
    bool has_ca_ParametersNR_v1610; /**< ca-ParametersNR-v1610 是否存在。 */
    CA_ParametersNR_v1610 ca_ParametersNR_v1610; /**< ASN.1 ca-ParametersNR-v1610；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1610; /**< ca-ParametersNRDC-v1610 是否存在。 */
    CA_ParametersNRDC_v1610 ca_ParametersNRDC_v1610; /**< ASN.1 ca-ParametersNRDC-v1610；结构体；OPTIONAL。 */
    bool has_powerClass_v1610; /**< powerClass-v1610 是否存在。 */
    BandCombination_v1610_PowerClass_v1610 powerClass_v1610; /**< ASN.1 powerClass-v1610；枚举；OPTIONAL。 */
    bool has_powerClassNRPart_r16; /**< powerClassNRPart-r16 是否存在。 */
    BandCombination_v1610_PowerClassNRPart_r16 powerClassNRPart_r16; /**< ASN.1 powerClassNRPart-r16；枚举；OPTIONAL。 */
    bool has_featureSetCombinationDAPS_r16; /**< featureSetCombinationDAPS-r16 是否存在。 */
    FeatureSetCombinationId featureSetCombinationDAPS_r16; /**< ASN.1 featureSetCombinationDAPS-r16；INTEGER (0..1024)，位宽 11 bit；OPTIONAL。 */
    bool has_mrdc_Parameters_v1620; /**< mrdc-Parameters-v1620 是否存在。 */
    MRDC_Parameters_v1620 mrdc_Parameters_v1620; /**< ASN.1 mrdc-Parameters-v1620；结构体；OPTIONAL。 */
};


/**
 * @brief SimulSRS_ForAntennaSwitching_r16
 * @note ASN.1：SimulSRS-ForAntennaSwitching-r16；源文件第 15409 行。
 * @note SimulSRS-ForAntennaSwitching-r16 ::= SEQUENCE { supportSRS-xTyR-xLessThanY-r16, supportSRS-xTyR-xEqualToY-r16, sup...
 */
struct SimulSRS_ForAntennaSwitching_r16 {
    bool has_supportSRS_xTyR_xLessThanY_r16; /**< supportSRS-xTyR-xLessThanY-r16 是否存在。 */
    SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xLessThanY_r16 supportSRS_xTyR_xLessThanY_r16; /**< ASN.1 supportSRS-xTyR-xLessThanY-r16；枚举；OPTIONAL。 */
    bool has_supportSRS_xTyR_xEqualToY_r16; /**< supportSRS-xTyR-xEqualToY-r16 是否存在。 */
    SimulSRS_ForAntennaSwitching_r16_SupportSRS_xTyR_xEqualToY_r16 supportSRS_xTyR_xEqualToY_r16; /**< ASN.1 supportSRS-xTyR-xEqualToY-r16；枚举；OPTIONAL。 */
    bool has_supportSRS_AntennaSwitching_r16; /**< supportSRS-AntennaSwitching-r16 是否存在。 */
    SimulSRS_ForAntennaSwitching_r16_SupportSRS_AntennaSwitching_r16 supportSRS_AntennaSwitching_r16; /**< ASN.1 supportSRS-AntennaSwitching-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1630
 * @note ASN.1：CA-ParametersNR-v1630；源文件第 14861 行。
 * @note CA-ParametersNR-v1630 ::= SEQUENCE { simulTX-SRS-AntSwitchingInterBandUL-CA-r16, beamManagementType-r16...
 */
struct CA_ParametersNR_v1630 {
    bool has_simulTX_SRS_AntSwitchingInterBandUL_CA_r16; /**< simulTX-SRS-AntSwitchingInterBandUL-CA-r16 是否存在。 */
    SimulSRS_ForAntennaSwitching_r16 simulTX_SRS_AntSwitchingInterBandUL_CA_r16; /**< ASN.1 simulTX-SRS-AntSwitchingInterBandUL-CA-r16；结构体；OPTIONAL。 */
    bool has_beamManagementType_r16; /**< beamManagementType-r16 是否存在。 */
    CA_ParametersNR_v1630_BeamManagementType_r16 beamManagementType_r16; /**< ASN.1 beamManagementType-r16；枚举；OPTIONAL。 */
    bool has_intraBandFreqSeparationUL_AggBW_GapBW_r16; /**< intraBandFreqSeparationUL-AggBW-GapBW-r16 是否存在。 */
    CA_ParametersNR_v1630_IntraBandFreqSeparationUL_AggBW_GapBW_r16 intraBandFreqSeparationUL_AggBW_GapBW_r16; /**< ASN.1 intraBandFreqSeparationUL-AggBW-GapBW-r16；枚举；OPTIONAL。 */
    bool has_interCA_NonAlignedFrame_B_r16; /**< interCA-NonAlignedFrame-B-r16 是否存在。 */
    CA_ParametersNR_v1630_InterCA_NonAlignedFrame_B_r16 interCA_NonAlignedFrame_B_r16; /**< ASN.1 interCA-NonAlignedFrame-B-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1630
 * @note ASN.1：CA-ParametersNRDC-v1630；源文件第 15479 行。
 * @note CA-ParametersNRDC-v1630 ::= SEQUENCE { ca-ParametersNR-ForDC-v1610, ca-ParametersNR-ForDC-v1630 }
 */
struct CA_ParametersNRDC_v1630 {
    bool has_ca_ParametersNR_ForDC_v1610; /**< ca-ParametersNR-ForDC-v1610 是否存在。 */
    CA_ParametersNR_v1610 ca_ParametersNR_ForDC_v1610; /**< ASN.1 ca-ParametersNR-ForDC-v1610；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_ForDC_v1630; /**< ca-ParametersNR-ForDC-v1630 是否存在。 */
    CA_ParametersNR_v1630 ca_ParametersNR_ForDC_v1630; /**< ASN.1 ca-ParametersNR-ForDC-v1630；结构体；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16
 * @note ASN.1：maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16；源文件第 18581 行。
 * @note SEQUENCE { maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16, maxUplinkDutyCycle-FDD-TDD-...
 */
struct MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16 {
    bool has_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16; /**< maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16 是否存在。 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC1_r16 maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16; /**< ASN.1 maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16；枚举；OPTIONAL。 */
    bool has_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16; /**< maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16 是否存在。 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_MaxUplinkDutyCycle_FDD_TDD_EN_DC2_r16 maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16; /**< ASN.1 maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v1630
 * @note ASN.1：MRDC-Parameters-v1630；源文件第 18579 行。
 * @note MRDC-Parameters-v1630 ::= SEQUENCE { maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16, interBandMRDC-Wi...
 */
struct MRDC_Parameters_v1630 {
    bool has_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16; /**< maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16 是否存在。 */
    MRDC_Parameters_v1630_MaxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16 maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16; /**< ASN.1 maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16；结构体；OPTIONAL。 */
    bool has_interBandMRDC_WithOverlapDL_Bands_r16; /**< interBandMRDC-WithOverlapDL-Bands-r16 是否存在。 */
    MRDC_Parameters_v1630_InterBandMRDC_WithOverlapDL_Bands_r16 interBandMRDC_WithOverlapDL_Bands_r16; /**< ASN.1 interBandMRDC-WithOverlapDL-Bands-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1630
 * @note ASN.1：BandCombination-v1630；源文件第 14308 行。
 * @note BandCombination-v1630 ::= SEQUENCE { ca-ParametersNR-v1630, ca-ParametersNRDC-v1630, mrdc-Parameters-v1...
 */
struct BandCombination_v1630 {
    bool has_ca_ParametersNR_v1630; /**< ca-ParametersNR-v1630 是否存在。 */
    CA_ParametersNR_v1630 ca_ParametersNR_v1630; /**< ASN.1 ca-ParametersNR-v1630；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1630; /**< ca-ParametersNRDC-v1630 是否存在。 */
    CA_ParametersNRDC_v1630 ca_ParametersNRDC_v1630; /**< ASN.1 ca-ParametersNRDC-v1630；结构体；OPTIONAL。 */
    bool has_mrdc_Parameters_v1630; /**< mrdc-Parameters-v1630 是否存在。 */
    MRDC_Parameters_v1630 mrdc_Parameters_v1630; /**< ASN.1 mrdc-Parameters-v1630；结构体；OPTIONAL。 */
    bool has_supportedTxBandCombListPerBC_Sidelink_r16; /**< supportedTxBandCombListPerBC-Sidelink-r16 是否存在。 */
    BitString supportedTxBandCombListPerBC_Sidelink_r16; /**< ASN.1 supportedTxBandCombListPerBC-Sidelink-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedRxBandCombListPerBC_Sidelink_r16; /**< supportedRxBandCombListPerBC-Sidelink-r16 是否存在。 */
    BitString supportedRxBandCombListPerBC_Sidelink_r16; /**< ASN.1 supportedRxBandCombListPerBC-Sidelink-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_scalingFactorTxSidelink_r16; /**< scalingFactorTxSidelink-r16 是否存在。 */
    ScalingFactorSidelink_r16* scalingFactorTxSidelink_r16_items; /**< ASN.1 scalingFactorTxSidelink-r16；SEQUENCE OF ScalingFactorSidelink_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t scalingFactorTxSidelink_r16_count; /**< scalingFactorTxSidelink-r16 元素个数。 */
    bool has_scalingFactorRxSidelink_r16; /**< scalingFactorRxSidelink-r16 是否存在。 */
    ScalingFactorSidelink_r16* scalingFactorRxSidelink_r16_items; /**< ASN.1 scalingFactorRxSidelink-r16；SEQUENCE OF ScalingFactorSidelink_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t scalingFactorRxSidelink_r16_count; /**< scalingFactorRxSidelink-r16 元素个数。 */
};


/**
 * @brief PUCCH_Grp_CarrierTypes_r16
 * @note ASN.1：PUCCH-Grp-CarrierTypes-r16；源文件第 15436 行。
 * @note PUCCH-Grp-CarrierTypes-r16 ::= SEQUENCE { fr1-NonSharedTDD-r16, fr1-SharedTDD-r16, fr1-NonSharedFDD-r16, fr2...
 */
struct PUCCH_Grp_CarrierTypes_r16 {
    bool has_fr1_NonSharedTDD_r16; /**< fr1-NonSharedTDD-r16 是否存在。 */
    PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedTDD_r16 fr1_NonSharedTDD_r16; /**< ASN.1 fr1-NonSharedTDD-r16；枚举；OPTIONAL。 */
    bool has_fr1_SharedTDD_r16; /**< fr1-SharedTDD-r16 是否存在。 */
    PUCCH_Grp_CarrierTypes_r16_Fr1_SharedTDD_r16 fr1_SharedTDD_r16; /**< ASN.1 fr1-SharedTDD-r16；枚举；OPTIONAL。 */
    bool has_fr1_NonSharedFDD_r16; /**< fr1-NonSharedFDD-r16 是否存在。 */
    PUCCH_Grp_CarrierTypes_r16_Fr1_NonSharedFDD_r16 fr1_NonSharedFDD_r16; /**< ASN.1 fr1-NonSharedFDD-r16；枚举；OPTIONAL。 */
    bool has_fr2_r16; /**< fr2-r16 是否存在。 */
    PUCCH_Grp_CarrierTypes_r16_Fr2_r16 fr2_r16; /**< ASN.1 fr2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16
 * @note ASN.1：pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16；源文件第 14894 行。
 * @note SEQUENCE { pdcch-BlindDetectionCA1-r16, pdcch-BlindDetectionCA2-r16 }
 */
struct CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16 {
    int64_t pdcch_BlindDetectionCA1_r16; /**< ASN.1 pdcch-BlindDetectionCA1-r16；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCA2_r16; /**< ASN.1 pdcch-BlindDetectionCA2-r16；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief CA_ParametersNR_v1640
 * @note ASN.1：CA-ParametersNR-v1640；源文件第 14873 行。
 * @note CA-ParametersNR-v1640 ::= SEQUENCE { uplinkTxDC-TwoCarrierReport-r16, maxUpTo3Diff-NumerologiesConfigSi...
 */
struct CA_ParametersNR_v1640 {
    bool has_uplinkTxDC_TwoCarrierReport_r16; /**< uplinkTxDC-TwoCarrierReport-r16 是否存在。 */
    CA_ParametersNR_v1640_UplinkTxDC_TwoCarrierReport_r16 uplinkTxDC_TwoCarrierReport_r16; /**< ASN.1 uplinkTxDC-TwoCarrierReport-r16；枚举；OPTIONAL。 */
    bool has_maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16; /**< maxUpTo3Diff-NumerologiesConfigSinglePUCCH-grp-r16 是否存在。 */
    PUCCH_Grp_CarrierTypes_r16 maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16; /**< ASN.1 maxUpTo3Diff-NumerologiesConfigSinglePUCCH-grp-r16；结构体；OPTIONAL。 */
    bool has_maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16; /**< maxUpTo4Diff-NumerologiesConfigSinglePUCCH-grp-r16 是否存在。 */
    PUCCH_Grp_CarrierTypes_r16 maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16; /**< ASN.1 maxUpTo4Diff-NumerologiesConfigSinglePUCCH-grp-r16；结构体；OPTIONAL。 */
    bool has_twoPUCCH_Grp_ConfigurationsList_r16; /**< twoPUCCH-Grp-ConfigurationsList-r16 是否存在。 */
    TwoPUCCH_Grp_Configurations_r16* twoPUCCH_Grp_ConfigurationsList_r16_items; /**< ASN.1 twoPUCCH-Grp-ConfigurationsList-r16；SEQUENCE OF TwoPUCCH_Grp_Configurations_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t twoPUCCH_Grp_ConfigurationsList_r16_count; /**< twoPUCCH-Grp-ConfigurationsList-r16 元素个数。 */
    bool has_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16; /**< diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16 是否存在。 */
    CA_ParametersNR_v1640_DiffNumerologyAcrossPUCCH_Group_CarrierTypes_r16 diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16; /**< ASN.1 diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16；枚举；OPTIONAL。 */
    bool has_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16; /**< diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16 是否存在。 */
    CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16 diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16; /**< ASN.1 diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16；枚举；OPTIONAL。 */
    bool has_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16; /**< diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16 是否存在。 */
    CA_ParametersNR_v1640_DiffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16 diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16; /**< ASN.1 diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringCA_NonAlignedSpan_r16; /**< pdcch-MonitoringCA-NonAlignedSpan-r16 是否存在。 */
    int64_t pdcch_MonitoringCA_NonAlignedSpan_r16; /**< ASN.1 pdcch-MonitoringCA-NonAlignedSpan-r16；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16; /**< pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16 是否存在。 */
    CA_ParametersNR_v1640_Pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16 pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16; /**< ASN.1 pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1640
 * @note ASN.1：CA-ParametersNRDC-v1640；源文件第 15484 行。
 * @note CA-ParametersNRDC-v1640 ::= SEQUENCE { ca-ParametersNR-ForDC-v1640 }
 */
struct CA_ParametersNRDC_v1640 {
    bool has_ca_ParametersNR_ForDC_v1640; /**< ca-ParametersNR-ForDC-v1640 是否存在。 */
    CA_ParametersNR_v1640 ca_ParametersNR_ForDC_v1640; /**< ASN.1 ca-ParametersNR-ForDC-v1640；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1640
 * @note ASN.1：BandCombination-v1640；源文件第 14318 行。
 * @note BandCombination-v1640 ::= SEQUENCE { ca-ParametersNR-v1640, ca-ParametersNRDC-v1640 }
 */
struct BandCombination_v1640 {
    bool has_ca_ParametersNR_v1640; /**< ca-ParametersNR-v1640 是否存在。 */
    CA_ParametersNR_v1640 ca_ParametersNR_v1640; /**< ASN.1 ca-ParametersNR-v1640；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1640; /**< ca-ParametersNRDC-v1640 是否存在。 */
    CA_ParametersNRDC_v1640 ca_ParametersNRDC_v1640; /**< ASN.1 ca-ParametersNRDC-v1640；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1650
 * @note ASN.1：CA-ParametersNRDC-v1650；源文件第 15488 行。
 * @note CA-ParametersNRDC-v1650 ::= SEQUENCE { supportedCellGrouping-r16 }
 */
struct CA_ParametersNRDC_v1650 {
    bool has_supportedCellGrouping_r16; /**< supportedCellGrouping-r16 是否存在。 */
    BitString supportedCellGrouping_r16; /**< ASN.1 supportedCellGrouping-r16；SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1650
 * @note ASN.1：BandCombination-v1650；源文件第 14323 行。
 * @note BandCombination-v1650 ::= SEQUENCE { ca-ParametersNRDC-v1650 }
 */
struct BandCombination_v1650 {
    bool has_ca_ParametersNRDC_v1650; /**< ca-ParametersNRDC-v1650 是否存在。 */
    CA_ParametersNRDC_v1650 ca_ParametersNRDC_v1650; /**< ASN.1 ca-ParametersNRDC-v1650；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1680
 * @note ASN.1：BandCombination-v1680；源文件第 14327 行。
 * @note BandCombination-v1680 ::= SEQUENCE { intrabandConcurrentOperationPowerClass-r16 }
 */
struct BandCombination_v1680 {
    bool has_intrabandConcurrentOperationPowerClass_r16; /**< intrabandConcurrentOperationPowerClass-r16 是否存在。 */
    IntraBandPowerClass_r16* intrabandConcurrentOperationPowerClass_r16_items; /**< ASN.1 intrabandConcurrentOperationPowerClass-r16；SEQUENCE OF IntraBandPowerClass_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t intrabandConcurrentOperationPowerClass_r16_count; /**< intrabandConcurrentOperationPowerClass-r16 元素个数。 */
};


/**
 * @brief CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16
 * @note ASN.1：csi-ReportingCrossPUCCH-Grp-r16/additionalSymbols-r16；源文件第 14903 行。
 * @note SEQUENCE { scs-15kHz-additionalSymbols-r16, scs-30kHz-additionalSymbols-r16, ...
 */
struct CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16 {
    bool has_scs_15kHz_additionalSymbols_r16; /**< scs-15kHz-additionalSymbols-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_15kHz_additionalSymbols_r16 scs_15kHz_additionalSymbols_r16; /**< ASN.1 scs-15kHz-additionalSymbols-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_additionalSymbols_r16; /**< scs-30kHz-additionalSymbols-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_30kHz_additionalSymbols_r16 scs_30kHz_additionalSymbols_r16; /**< ASN.1 scs-30kHz-additionalSymbols-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_additionalSymbols_r16; /**< scs-60kHz-additionalSymbols-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_60kHz_additionalSymbols_r16 scs_60kHz_additionalSymbols_r16; /**< ASN.1 scs-60kHz-additionalSymbols-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_additionalSymbols_r16; /**< scs-120kHz-additionalSymbols-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16_Scs_120kHz_additionalSymbols_r16 scs_120kHz_additionalSymbols_r16; /**< ASN.1 scs-120kHz-additionalSymbols-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16
 * @note ASN.1：csi-ReportingCrossPUCCH-Grp-r16；源文件第 14901 行。
 * @note SEQUENCE { computationTimeForA-CSI-r16, additionalSymbols-r16, sp-CSI-Reporti...
 */
struct CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16 {
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_ComputationTimeForA_CSI_r16 computationTimeForA_CSI_r16; /**< ASN.1 computationTimeForA-CSI-r16；枚举。 */
    bool has_additionalSymbols_r16; /**< additionalSymbols-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_AdditionalSymbols_r16 additionalSymbols_r16; /**< ASN.1 additionalSymbols-r16；结构体；OPTIONAL。 */
    bool has_sp_CSI_ReportingOnPUCCH_r16; /**< sp-CSI-ReportingOnPUCCH-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUCCH_r16 sp_CSI_ReportingOnPUCCH_r16; /**< ASN.1 sp-CSI-ReportingOnPUCCH-r16；枚举；OPTIONAL。 */
    bool has_sp_CSI_ReportingOnPUSCH_r16; /**< sp-CSI-ReportingOnPUSCH-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16_Sp_CSI_ReportingOnPUSCH_r16 sp_CSI_ReportingOnPUSCH_r16; /**< ASN.1 sp-CSI-ReportingOnPUSCH-r16；枚举；OPTIONAL。 */
    CarrierTypePair_r16* carrierTypePairList_r16_items; /**< ASN.1 carrierTypePairList-r16；SEQUENCE OF CarrierTypePair_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t carrierTypePairList_r16_count; /**< carrierTypePairList-r16 元素个数。 */
};


/**
 * @brief CA_ParametersNR_v1690
 * @note ASN.1：CA-ParametersNR-v1690；源文件第 14900 行。
 * @note CA-ParametersNR-v1690 ::= SEQUENCE { csi-ReportingCrossPUCCH-Grp-r16 }
 */
struct CA_ParametersNR_v1690 {
    bool has_csi_ReportingCrossPUCCH_Grp_r16; /**< csi-ReportingCrossPUCCH-Grp-r16 是否存在。 */
    CA_ParametersNR_v1690_Csi_ReportingCrossPUCCH_Grp_r16 csi_ReportingCrossPUCCH_Grp_r16; /**< ASN.1 csi-ReportingCrossPUCCH-Grp-r16；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1690
 * @note ASN.1：BandCombination-v1690；源文件第 14331 行。
 * @note BandCombination-v1690 ::= SEQUENCE { ca-ParametersNR-v1690 }
 */
struct BandCombination_v1690 {
    bool has_ca_ParametersNR_v1690; /**< ca-ParametersNR-v1690 是否存在。 */
    CA_ParametersNR_v1690 ca_ParametersNR_v1690; /**< ASN.1 ca-ParametersNR-v1690；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v16a0
 * @note ASN.1：CA-ParametersNR-v16a0；源文件第 14915 行。
 * @note CA-ParametersNR-v16a0 ::= SEQUENCE { pdcch-BlindDetectionMixedList-r16 }
 */
struct CA_ParametersNR_v16a0 {
    PDCCH_BlindDetectionMixedList_r16* pdcch_BlindDetectionMixedList_r16_items; /**< ASN.1 pdcch-BlindDetectionMixedList-r16；SEQUENCE OF PDCCH_BlindDetectionMixedList_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionMixedList_r16_count; /**< pdcch-BlindDetectionMixedList-r16 元素个数。 */
};


/**
 * @brief CA_ParametersNRDC_v16a0
 * @note ASN.1：CA-ParametersNRDC-v16a0；源文件第 15492 行。
 * @note CA-ParametersNRDC-v16a0 ::= SEQUENCE { ca-ParametersNR-ForDC-v16a0 }
 */
struct CA_ParametersNRDC_v16a0 {
    bool has_ca_ParametersNR_ForDC_v16a0; /**< ca-ParametersNR-ForDC-v16a0 是否存在。 */
    CA_ParametersNR_v16a0 ca_ParametersNR_ForDC_v16a0; /**< ASN.1 ca-ParametersNR-ForDC-v16a0；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v16a0
 * @note ASN.1：BandCombination-v16a0；源文件第 14335 行。
 * @note BandCombination-v16a0 ::= SEQUENCE { ca-ParametersNR-v16a0, ca-ParametersNRDC-v16a0 }
 */
struct BandCombination_v16a0 {
    bool has_ca_ParametersNR_v16a0; /**< ca-ParametersNR-v16a0 是否存在。 */
    CA_ParametersNR_v16a0 ca_ParametersNR_v16a0; /**< ASN.1 ca-ParametersNR-v16a0；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v16a0; /**< ca-ParametersNRDC-v16a0 是否存在。 */
    CA_ParametersNRDC_v16a0 ca_ParametersNRDC_v16a0; /**< ASN.1 ca-ParametersNRDC-v16a0；结构体；OPTIONAL。 */
};


/**
 * @brief CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17
 * @note ASN.1：supportedSCS-Combinations-r17；源文件第 15320 行。
 * @note SEQUENCE { scs15kHz-15kHz-r17, scs15kHz-30kHz-r17, scs15kHz-60kHz-r17, scs30k...
 */
struct CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17 {
    bool has_scs15kHz_15kHz_r17; /**< scs15kHz-15kHz-r17 是否存在。 */
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_15kHz_r17 scs15kHz_15kHz_r17; /**< ASN.1 scs15kHz-15kHz-r17；枚举；OPTIONAL。 */
    bool has_scs15kHz_30kHz_r17; /**< scs15kHz-30kHz-r17 是否存在。 */
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_30kHz_r17 scs15kHz_30kHz_r17; /**< ASN.1 scs15kHz-30kHz-r17；枚举；OPTIONAL。 */
    bool has_scs15kHz_60kHz_r17; /**< scs15kHz-60kHz-r17 是否存在。 */
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17_Scs15kHz_60kHz_r17 scs15kHz_60kHz_r17; /**< ASN.1 scs15kHz-60kHz-r17；枚举；OPTIONAL。 */
    bool has_scs30kHz_30kHz_r17; /**< scs30kHz-30kHz-r17 是否存在。 */
    BitString scs30kHz_30kHz_r17; /**< ASN.1 scs30kHz-30kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs30kHz_60kHz_r17; /**< scs30kHz-60kHz-r17 是否存在。 */
    BitString scs30kHz_60kHz_r17; /**< ASN.1 scs30kHz-60kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs60kHz_60kHz_r17; /**< scs60kHz-60kHz-r17 是否存在。 */
    BitString scs60kHz_60kHz_r17; /**< ASN.1 scs60kHz-60kHz-r17；SIZE (1..496)；OPTIONAL。 */
};


/**
 * @brief CrossCarrierSchedulingSCell_SpCell_r17
 * @note ASN.1：CrossCarrierSchedulingSCell-SpCell-r17；源文件第 15319 行。
 * @note CrossCarrierSchedulingSCell-SpCell-r17 ::= SEQUENCE { supportedSCS-Combinations-r17, pdcch-MonitoringOccasion-r17 }
 */
struct CrossCarrierSchedulingSCell_SpCell_r17 {
    CrossCarrierSchedulingSCell_SpCell_r17_SupportedSCS_Combinations_r17 supportedSCS_Combinations_r17; /**< ASN.1 supportedSCS-Combinations-r17；结构体。 */
    CrossCarrierSchedulingSCell_SpCell_r17_Pdcch_MonitoringOccasion_r17 pdcch_MonitoringOccasion_r17; /**< ASN.1 pdcch-MonitoringOccasion-r17；枚举。 */
};


/**
 * @brief CodebookParametersfetype2PerBC_r17
 * @note ASN.1：CodebookParametersfetype2PerBC-r17；源文件第 15831 行。
 * @note CodebookParametersfetype2PerBC-r17 ::= SEQUENCE { fetype2basic-r17, fetype2R1-r17, fetype2R2-r17 }
 */
struct CodebookParametersfetype2PerBC_r17 {
    int64_t* fetype2basic_r17_items; /**< ASN.1 fetype2basic-r17；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t fetype2basic_r17_count; /**< fetype2basic-r17 元素个数。 */
    bool has_fetype2R1_r17; /**< fetype2R1-r17 是否存在。 */
    int64_t* fetype2R1_r17_items; /**< ASN.1 fetype2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t fetype2R1_r17_count; /**< fetype2R1-r17 元素个数。 */
    bool has_fetype2R2_r17; /**< fetype2R2-r17 是否存在。 */
    int64_t* fetype2R2_r17_items; /**< ASN.1 fetype2R2-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t fetype2R2_r17_count; /**< fetype2R2-r17 元素个数。 */
};


/**
 * @brief CodebookComboParameterMixedTypePerBC_r17
 * @note ASN.1：CodebookComboParameterMixedTypePerBC-r17；源文件第 15842 行。
 * @note CodebookComboParameterMixedTypePerBC-r17 ::= SEQUENCE { type1SP-feType2PS-null-r17, type1SP-feType2PS-M2R1-null-r17, type1...
 */
struct CodebookComboParameterMixedTypePerBC_r17 {
    bool has_type1SP_feType2PS_null_r17; /**< type1SP-feType2PS-null-r17 是否存在。 */
    int64_t* type1SP_feType2PS_null_r17_items; /**< ASN.1 type1SP-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_feType2PS_null_r17_count; /**< type1SP-feType2PS-null-r17 元素个数。 */
    bool has_type1SP_feType2PS_M2R1_null_r17; /**< type1SP-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* type1SP_feType2PS_M2R1_null_r17_items; /**< ASN.1 type1SP-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_feType2PS_M2R1_null_r17_count; /**< type1SP-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_type1SP_feType2PS_M2R2_null_r17; /**< type1SP-feType2PS-M2R2-null-r17 是否存在。 */
    int64_t* type1SP_feType2PS_M2R2_null_r17_items; /**< ASN.1 type1SP-feType2PS-M2R2-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_feType2PS_M2R2_null_r17_count; /**< type1SP-feType2PS-M2R2-null-r17 元素个数。 */
    bool has_type1SP_Type2_feType2_PS_M1_r17; /**< type1SP-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1SP_Type2_feType2_PS_M1_r17_items; /**< ASN.1 type1SP-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2_feType2_PS_M1_r17_count; /**< type1SP-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_type1SP_Type2_feType2_PS_M2R1_r17; /**< type1SP-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1SP_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 type1SP-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_Type2_feType2_PS_M2R1_r17_count; /**< type1SP-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_type1SP_eType2R1_feType2_PS_M1_r17; /**< type1SP-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1SP_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 type1SP-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R1_feType2_PS_M1_r17_count; /**< type1SP-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_type1SP_eType2R1_feType2_PS_M2R1_r17; /**< type1SP-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1SP_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 type1SP-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1SP_eType2R1_feType2_PS_M2R1_r17_count; /**< type1SP-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
    bool has_type1MP_feType2PS_null_r17; /**< type1MP-feType2PS-null-r17 是否存在。 */
    int64_t* type1MP_feType2PS_null_r17_items; /**< ASN.1 type1MP-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_feType2PS_null_r17_count; /**< type1MP-feType2PS-null-r17 元素个数。 */
    bool has_type1MP_feType2PS_M2R1_null_r17; /**< type1MP-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* type1MP_feType2PS_M2R1_null_r17_items; /**< ASN.1 type1MP-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_feType2PS_M2R1_null_r17_count; /**< type1MP-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_type1MP_feType2PS_M2R2_null_r17; /**< type1MP-feType2PS-M2R2-null-r17 是否存在。 */
    int64_t* type1MP_feType2PS_M2R2_null_r17_items; /**< ASN.1 type1MP-feType2PS-M2R2-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_feType2PS_M2R2_null_r17_count; /**< type1MP-feType2PS-M2R2-null-r17 元素个数。 */
    bool has_type1MP_Type2_feType2_PS_M1_r17; /**< type1MP-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1MP_Type2_feType2_PS_M1_r17_items; /**< ASN.1 type1MP-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2_feType2_PS_M1_r17_count; /**< type1MP-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_type1MP_Type2_feType2_PS_M2R1_r17; /**< type1MP-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1MP_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 type1MP-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_Type2_feType2_PS_M2R1_r17_count; /**< type1MP-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_type1MP_eType2R1_feType2_PS_M1_r17; /**< type1MP-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* type1MP_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 type1MP-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R1_feType2_PS_M1_r17_count; /**< type1MP-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_type1MP_eType2R1_feType2_PS_M2R1_r17; /**< type1MP-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* type1MP_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 type1MP-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t type1MP_eType2R1_feType2_PS_M2R1_r17_count; /**< type1MP-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
};


/**
 * @brief CodebookComboParameterMultiTRP_PerBC_r17
 * @note ASN.1：CodebookComboParameterMultiTRP-PerBC-r17；源文件第 15874 行。
 * @note CodebookComboParameterMultiTRP-PerBC-r17 ::= SEQUENCE { nCJT-null-null, nCJT1SP-null-null, nCJT-Type2-null-r16, nCJT-Type2...
 */
struct CodebookComboParameterMultiTRP_PerBC_r17 {
    bool has_nCJT_null_null; /**< nCJT-null-null 是否存在。 */
    int64_t* nCJT_null_null_items; /**< ASN.1 nCJT-null-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_null_null_count; /**< nCJT-null-null 元素个数。 */
    bool has_nCJT1SP_null_null; /**< nCJT1SP-null-null 是否存在。 */
    int64_t* nCJT1SP_null_null_items; /**< ASN.1 nCJT1SP-null-null；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_null_null_count; /**< nCJT1SP-null-null 元素个数。 */
    bool has_nCJT_Type2_null_r16; /**< nCJT-Type2-null-r16 是否存在。 */
    int64_t* nCJT_Type2_null_r16_items; /**< ASN.1 nCJT-Type2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_null_r16_count; /**< nCJT-Type2-null-r16 元素个数。 */
    bool has_nCJT_Type2PS_null_r16; /**< nCJT-Type2PS-null-r16 是否存在。 */
    int64_t* nCJT_Type2PS_null_r16_items; /**< ASN.1 nCJT-Type2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2PS_null_r16_count; /**< nCJT-Type2PS-null-r16 元素个数。 */
    bool has_nCJT_eType2R1_null_r16; /**< nCJT-eType2R1-null-r16 是否存在。 */
    int64_t* nCJT_eType2R1_null_r16_items; /**< ASN.1 nCJT-eType2R1-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1_null_r16_count; /**< nCJT-eType2R1-null-r16 元素个数。 */
    bool has_nCJT_eType2R2_null_r16; /**< nCJT-eType2R2-null-r16 是否存在。 */
    int64_t* nCJT_eType2R2_null_r16_items; /**< ASN.1 nCJT-eType2R2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R2_null_r16_count; /**< nCJT-eType2R2-null-r16 元素个数。 */
    bool has_nCJT_eType2R1PS_null_r16; /**< nCJT-eType2R1PS-null-r16 是否存在。 */
    int64_t* nCJT_eType2R1PS_null_r16_items; /**< ASN.1 nCJT-eType2R1PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1PS_null_r16_count; /**< nCJT-eType2R1PS-null-r16 元素个数。 */
    bool has_nCJT_eType2R2PS_null_r16; /**< nCJT-eType2R2PS-null-r16 是否存在。 */
    int64_t* nCJT_eType2R2PS_null_r16_items; /**< ASN.1 nCJT-eType2R2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R2PS_null_r16_count; /**< nCJT-eType2R2PS-null-r16 元素个数。 */
    bool has_nCJT_Type2_Type2PS_r16; /**< nCJT-Type2-Type2PS-r16 是否存在。 */
    int64_t* nCJT_Type2_Type2PS_r16_items; /**< ASN.1 nCJT-Type2-Type2PS-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_Type2PS_r16_count; /**< nCJT-Type2-Type2PS-r16 元素个数。 */
    bool has_nCJT1SP_Type2_null_r16; /**< nCJT1SP-Type2-null-r16 是否存在。 */
    int64_t* nCJT1SP_Type2_null_r16_items; /**< ASN.1 nCJT1SP-Type2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_null_r16_count; /**< nCJT1SP-Type2-null-r16 元素个数。 */
    bool has_nCJT1SP_Type2PS_null_r16; /**< nCJT1SP-Type2PS-null-r16 是否存在。 */
    int64_t* nCJT1SP_Type2PS_null_r16_items; /**< ASN.1 nCJT1SP-Type2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2PS_null_r16_count; /**< nCJT1SP-Type2PS-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R1_null_r16; /**< nCJT1SP-eType2R1-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R1_null_r16_items; /**< ASN.1 nCJT1SP-eType2R1-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1_null_r16_count; /**< nCJT1SP-eType2R1-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R2_null_r16; /**< nCJT1SP-eType2R2-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R2_null_r16_items; /**< ASN.1 nCJT1SP-eType2R2-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R2_null_r16_count; /**< nCJT1SP-eType2R2-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R1PS_null_r16; /**< nCJT1SP-eType2R1PS-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R1PS_null_r16_items; /**< ASN.1 nCJT1SP-eType2R1PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1PS_null_r16_count; /**< nCJT1SP-eType2R1PS-null-r16 元素个数。 */
    bool has_nCJT1SP_eType2R2PS_null_r16; /**< nCJT1SP-eType2R2PS-null-r16 是否存在。 */
    int64_t* nCJT1SP_eType2R2PS_null_r16_items; /**< ASN.1 nCJT1SP-eType2R2PS-null-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R2PS_null_r16_count; /**< nCJT1SP-eType2R2PS-null-r16 元素个数。 */
    bool has_nCJT1SP_Type2_Type2PS_r16; /**< nCJT1SP-Type2-Type2PS-r16 是否存在。 */
    int64_t* nCJT1SP_Type2_Type2PS_r16_items; /**< ASN.1 nCJT1SP-Type2-Type2PS-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_Type2PS_r16_count; /**< nCJT1SP-Type2-Type2PS-r16 元素个数。 */
    bool has_nCJT_feType2PS_null_r17; /**< nCJT-feType2PS-null-r17 是否存在。 */
    int64_t* nCJT_feType2PS_null_r17_items; /**< ASN.1 nCJT-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_feType2PS_null_r17_count; /**< nCJT-feType2PS-null-r17 元素个数。 */
    bool has_nCJT_feType2PS_M2R1_null_r17; /**< nCJT-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* nCJT_feType2PS_M2R1_null_r17_items; /**< ASN.1 nCJT-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_feType2PS_M2R1_null_r17_count; /**< nCJT-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_nCJT_feType2PS_M2R2_null_r17; /**< nCJT-feType2PS-M2R2-null-r17 是否存在。 */
    int64_t* nCJT_feType2PS_M2R2_null_r17_items; /**< ASN.1 nCJT-feType2PS-M2R2-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_feType2PS_M2R2_null_r17_count; /**< nCJT-feType2PS-M2R2-null-r17 元素个数。 */
    bool has_nCJT_Type2_feType2_PS_M1_r17; /**< nCJT-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT_Type2_feType2_PS_M1_r17_items; /**< ASN.1 nCJT-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_feType2_PS_M1_r17_count; /**< nCJT-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT_Type2_feType2_PS_M2R1_r17; /**< nCJT-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_Type2_feType2_PS_M2R1_r17_count; /**< nCJT-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_nCJT_eType2R1_feType2_PS_M1_r17; /**< nCJT-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 nCJT-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1_feType2_PS_M1_r17_count; /**< nCJT-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT_eType2R1_feType2_PS_M2R1_r17; /**< nCJT-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT_eType2R1_feType2_PS_M2R1_r17_count; /**< nCJT-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
    bool has_nCJT1SP_feType2PS_null_r17; /**< nCJT1SP-feType2PS-null-r17 是否存在。 */
    int64_t* nCJT1SP_feType2PS_null_r17_items; /**< ASN.1 nCJT1SP-feType2PS-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_feType2PS_null_r17_count; /**< nCJT1SP-feType2PS-null-r17 元素个数。 */
    bool has_nCJT1SP_feType2PS_M2R1_null_r17; /**< nCJT1SP-feType2PS-M2R1-null-r17 是否存在。 */
    int64_t* nCJT1SP_feType2PS_M2R1_null_r17_items; /**< ASN.1 nCJT1SP-feType2PS-M2R1-null-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_feType2PS_M2R1_null_r17_count; /**< nCJT1SP-feType2PS-M2R1-null-r17 元素个数。 */
    bool has_nCJT1SP_feType2PS_M2R2_null_r1; /**< nCJT1SP-feType2PS-M2R2-null-r1 是否存在。 */
    int64_t* nCJT1SP_feType2PS_M2R2_null_r1_items; /**< ASN.1 nCJT1SP-feType2PS-M2R2-null-r1；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_feType2PS_M2R2_null_r1_count; /**< nCJT1SP-feType2PS-M2R2-null-r1 元素个数。 */
    bool has_nCJT1SP_Type2_feType2_PS_M1_r17; /**< nCJT1SP-Type2-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT1SP_Type2_feType2_PS_M1_r17_items; /**< ASN.1 nCJT1SP-Type2-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_feType2_PS_M1_r17_count; /**< nCJT1SP-Type2-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT1SP_Type2_feType2_PS_M2R1_r17; /**< nCJT1SP-Type2-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT1SP_Type2_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT1SP-Type2-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_Type2_feType2_PS_M2R1_r17_count; /**< nCJT1SP-Type2-feType2-PS-M2R1-r17 元素个数。 */
    bool has_nCJT1SP_eType2R1_feType2_PS_M1_r17; /**< nCJT1SP-eType2R1-feType2-PS-M1-r17 是否存在。 */
    int64_t* nCJT1SP_eType2R1_feType2_PS_M1_r17_items; /**< ASN.1 nCJT1SP-eType2R1-feType2-PS-M1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1_feType2_PS_M1_r17_count; /**< nCJT1SP-eType2R1-feType2-PS-M1-r17 元素个数。 */
    bool has_nCJT1SP_eType2R1_feType2_PS_M2R1_r17; /**< nCJT1SP-eType2R1-feType2-PS-M2R1-r17 是否存在。 */
    int64_t* nCJT1SP_eType2R1_feType2_PS_M2R1_r17_items; /**< ASN.1 nCJT1SP-eType2R1-feType2-PS-M2R1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nCJT1SP_eType2R1_feType2_PS_M2R1_r17_count; /**< nCJT1SP-eType2R1-feType2-PS-M2R1-r17 元素个数。 */
};


/**
 * @brief CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17
 * @note ASN.1：mTRP-CSI-EnhancementPerBC-r17；源文件第 14934 行。
 * @note SEQUENCE { maxNumNZP-CSI-RS-r17, cSI-Report-mode-r17, supportedComboAcrossCCs...
 */
struct CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17 {
    int64_t maxNumNZP_CSI_RS_r17; /**< ASN.1 maxNumNZP-CSI-RS-r17；INTEGER (2..8)，位宽 3 bit。 */
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CSI_Report_mode_r17 cSI_Report_mode_r17; /**< ASN.1 cSI-Report-mode-r17；枚举。 */
    CSI_MultiTRP_SupportedCombinations_r17* supportedComboAcrossCCs_r17_items; /**< ASN.1 supportedComboAcrossCCs-r17；SEQUENCE OF CSI_MultiTRP_SupportedCombinations_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedComboAcrossCCs_r17_count; /**< supportedComboAcrossCCs-r17 元素个数。 */
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17_CodebookMode_NCJT_r17 codebookMode_NCJT_r17; /**< ASN.1 codebookMode-NCJT-r17；枚举。 */
};


/**
 * @brief CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17
 * @note ASN.1：non-AlignedFrameBoundaries-r17；源文件第 14957 行。
 * @note SEQUENCE { scs15kHz-15kHz-r17, scs15kHz-30kHz-r17, scs15kHz-60kHz-r17, scs30k...
 */
struct CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17 {
    bool has_scs15kHz_15kHz_r17; /**< scs15kHz-15kHz-r17 是否存在。 */
    BitString scs15kHz_15kHz_r17; /**< ASN.1 scs15kHz-15kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs15kHz_30kHz_r17; /**< scs15kHz-30kHz-r17 是否存在。 */
    BitString scs15kHz_30kHz_r17; /**< ASN.1 scs15kHz-30kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs15kHz_60kHz_r17; /**< scs15kHz-60kHz-r17 是否存在。 */
    BitString scs15kHz_60kHz_r17; /**< ASN.1 scs15kHz-60kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs30kHz_30kHz_r17; /**< scs30kHz-30kHz-r17 是否存在。 */
    BitString scs30kHz_30kHz_r17; /**< ASN.1 scs30kHz-30kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs30kHz_60kHz_r17; /**< scs30kHz-60kHz-r17 是否存在。 */
    BitString scs30kHz_60kHz_r17; /**< ASN.1 scs30kHz-60kHz-r17；SIZE (1..496)；OPTIONAL。 */
    bool has_scs60kHz_60kHz_r17; /**< scs60kHz-60kHz-r17 是否存在。 */
    BitString scs60kHz_60kHz_r17; /**< ASN.1 scs60kHz-60kHz-r17；SIZE (1..496)；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1700
 * @note ASN.1：CA-ParametersNR-v1700；源文件第 14919 行。
 * @note CA-ParametersNR-v1700 ::= SEQUENCE { codebookParametersfetype2PerBC-r17, demodulationEnhancementCA-r17,...
 */
struct CA_ParametersNR_v1700 {
    bool has_codebookParametersfetype2PerBC_r17; /**< codebookParametersfetype2PerBC-r17 是否存在。 */
    CodebookParametersfetype2PerBC_r17 codebookParametersfetype2PerBC_r17; /**< ASN.1 codebookParametersfetype2PerBC-r17；结构体；OPTIONAL。 */
    bool has_demodulationEnhancementCA_r17; /**< demodulationEnhancementCA-r17 是否存在。 */
    CA_ParametersNR_v1700_DemodulationEnhancementCA_r17 demodulationEnhancementCA_r17; /**< ASN.1 demodulationEnhancementCA-r17；枚举；OPTIONAL。 */
    bool has_maxUplinkDutyCycle_interBandCA_PC2_r17; /**< maxUplinkDutyCycle-interBandCA-PC2-r17 是否存在。 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_interBandCA_PC2_r17 maxUplinkDutyCycle_interBandCA_PC2_r17; /**< ASN.1 maxUplinkDutyCycle-interBandCA-PC2-r17；枚举；OPTIONAL。 */
    bool has_maxUplinkDutyCycle_SULcombination_PC2_r17; /**< maxUplinkDutyCycle-SULcombination-PC2-r17 是否存在。 */
    CA_ParametersNR_v1700_MaxUplinkDutyCycle_SULcombination_PC2_r17 maxUplinkDutyCycle_SULcombination_PC2_r17; /**< ASN.1 maxUplinkDutyCycle-SULcombination-PC2-r17；枚举；OPTIONAL。 */
    bool has_beamManagementType_CBM_r17; /**< beamManagementType-CBM-r17 是否存在。 */
    CA_ParametersNR_v1700_BeamManagementType_CBM_r17 beamManagementType_CBM_r17; /**< ASN.1 beamManagementType-CBM-r17；枚举；OPTIONAL。 */
    bool has_parallelTxPUCCH_PUSCH_r17; /**< parallelTxPUCCH-PUSCH-r17 是否存在。 */
    CA_ParametersNR_v1700_ParallelTxPUCCH_PUSCH_r17 parallelTxPUCCH_PUSCH_r17; /**< ASN.1 parallelTxPUCCH-PUSCH-r17；枚举；OPTIONAL。 */
    bool has_codebookComboParameterMixedTypePerBC_r17; /**< codebookComboParameterMixedTypePerBC-r17 是否存在。 */
    CodebookComboParameterMixedTypePerBC_r17 codebookComboParameterMixedTypePerBC_r17; /**< ASN.1 codebookComboParameterMixedTypePerBC-r17；结构体；OPTIONAL。 */
    bool has_mTRP_CSI_EnhancementPerBC_r17; /**< mTRP-CSI-EnhancementPerBC-r17 是否存在。 */
    CA_ParametersNR_v1700_MTRP_CSI_EnhancementPerBC_r17 mTRP_CSI_EnhancementPerBC_r17; /**< ASN.1 mTRP-CSI-EnhancementPerBC-r17；结构体；OPTIONAL。 */
    bool has_codebookComboParameterMultiTRP_PerBC_r17; /**< codebookComboParameterMultiTRP-PerBC-r17 是否存在。 */
    CodebookComboParameterMultiTRP_PerBC_r17 codebookComboParameterMultiTRP_PerBC_r17; /**< ASN.1 codebookComboParameterMultiTRP-PerBC-r17；结构体；OPTIONAL。 */
    bool has_maxCC_32_DL_HARQ_ProcessFR2_2_r17; /**< maxCC-32-DL-HARQ-ProcessFR2-2-r17 是否存在。 */
    CA_ParametersNR_v1700_MaxCC_32_DL_HARQ_ProcessFR2_2_r17 maxCC_32_DL_HARQ_ProcessFR2_2_r17; /**< ASN.1 maxCC-32-DL-HARQ-ProcessFR2-2-r17；枚举；OPTIONAL。 */
    bool has_maxCC_32_UL_HARQ_ProcessFR2_2_r17; /**< maxCC-32-UL-HARQ-ProcessFR2-2-r17 是否存在。 */
    CA_ParametersNR_v1700_MaxCC_32_UL_HARQ_ProcessFR2_2_r17 maxCC_32_UL_HARQ_ProcessFR2_2_r17; /**< ASN.1 maxCC-32-UL-HARQ-ProcessFR2-2-r17；枚举；OPTIONAL。 */
    bool has_crossCarrierSchedulingSCell_SpCellTypeB_r17; /**< crossCarrierSchedulingSCell-SpCellTypeB-r17 是否存在。 */
    CrossCarrierSchedulingSCell_SpCell_r17 crossCarrierSchedulingSCell_SpCellTypeB_r17; /**< ASN.1 crossCarrierSchedulingSCell-SpCellTypeB-r17；结构体；OPTIONAL。 */
    bool has_crossCarrierSchedulingSCell_SpCellTypeA_r17; /**< crossCarrierSchedulingSCell-SpCellTypeA-r17 是否存在。 */
    CrossCarrierSchedulingSCell_SpCell_r17 crossCarrierSchedulingSCell_SpCellTypeA_r17; /**< ASN.1 crossCarrierSchedulingSCell-SpCellTypeA-r17；结构体；OPTIONAL。 */
    bool has_dci_FormatsPCellPSCellUSS_Sets_r17; /**< dci-FormatsPCellPSCellUSS-Sets-r17 是否存在。 */
    CA_ParametersNR_v1700_Dci_FormatsPCellPSCellUSS_Sets_r17 dci_FormatsPCellPSCellUSS_Sets_r17; /**< ASN.1 dci-FormatsPCellPSCellUSS-Sets-r17；枚举；OPTIONAL。 */
    bool has_disablingScalingFactorDeactSCell_r17; /**< disablingScalingFactorDeactSCell-r17 是否存在。 */
    CA_ParametersNR_v1700_DisablingScalingFactorDeactSCell_r17 disablingScalingFactorDeactSCell_r17; /**< ASN.1 disablingScalingFactorDeactSCell-r17；枚举；OPTIONAL。 */
    bool has_disablingScalingFactorDormantSCell_r17; /**< disablingScalingFactorDormantSCell-r17 是否存在。 */
    CA_ParametersNR_v1700_DisablingScalingFactorDormantSCell_r17 disablingScalingFactorDormantSCell_r17; /**< ASN.1 disablingScalingFactorDormantSCell-r17；枚举；OPTIONAL。 */
    bool has_non_AlignedFrameBoundaries_r17; /**< non-AlignedFrameBoundaries-r17 是否存在。 */
    CA_ParametersNR_v1700_Non_AlignedFrameBoundaries_r17 non_AlignedFrameBoundaries_r17; /**< ASN.1 non-AlignedFrameBoundaries-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1700
 * @note ASN.1：CA-ParametersNRDC-v1700；源文件第 15496 行。
 * @note CA-ParametersNRDC-v1700 ::= SEQUENCE { simultaneousRxTx-IAB-MultipleParents-r17, condPSCellAdditionNRDC-r...
 */
struct CA_ParametersNRDC_v1700 {
    bool has_simultaneousRxTx_IAB_MultipleParents_r17; /**< simultaneousRxTx-IAB-MultipleParents-r17 是否存在。 */
    CA_ParametersNRDC_v1700_SimultaneousRxTx_IAB_MultipleParents_r17 simultaneousRxTx_IAB_MultipleParents_r17; /**< ASN.1 simultaneousRxTx-IAB-MultipleParents-r17；枚举；OPTIONAL。 */
    bool has_condPSCellAdditionNRDC_r17; /**< condPSCellAdditionNRDC-r17 是否存在。 */
    CA_ParametersNRDC_v1700_CondPSCellAdditionNRDC_r17 condPSCellAdditionNRDC_r17; /**< ASN.1 condPSCellAdditionNRDC-r17；枚举；OPTIONAL。 */
    bool has_scg_ActivationDeactivationNRDC_r17; /**< scg-ActivationDeactivationNRDC-r17 是否存在。 */
    CA_ParametersNRDC_v1700_Scg_ActivationDeactivationNRDC_r17 scg_ActivationDeactivationNRDC_r17; /**< ASN.1 scg-ActivationDeactivationNRDC-r17；枚举；OPTIONAL。 */
    bool has_scg_ActivationDeactivationResumeNRDC_r17; /**< scg-ActivationDeactivationResumeNRDC-r17 是否存在。 */
    CA_ParametersNRDC_v1700_Scg_ActivationDeactivationResumeNRDC_r17 scg_ActivationDeactivationResumeNRDC_r17; /**< ASN.1 scg-ActivationDeactivationResumeNRDC-r17；枚举；OPTIONAL。 */
    bool has_beamManagementType_CBM_r17; /**< beamManagementType-CBM-r17 是否存在。 */
    CA_ParametersNRDC_v1700_BeamManagementType_CBM_r17 beamManagementType_CBM_r17; /**< ASN.1 beamManagementType-CBM-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v1700
 * @note ASN.1：MRDC-Parameters-v1700；源文件第 18590 行。
 * @note MRDC-Parameters-v1700 ::= SEQUENCE { condPSCellAdditionENDC-r17, scg-ActivationDeactivationENDC-r17, sc...
 */
struct MRDC_Parameters_v1700 {
    bool has_condPSCellAdditionENDC_r17; /**< condPSCellAdditionENDC-r17 是否存在。 */
    MRDC_Parameters_v1700_CondPSCellAdditionENDC_r17 condPSCellAdditionENDC_r17; /**< ASN.1 condPSCellAdditionENDC-r17；枚举；OPTIONAL。 */
    bool has_scg_ActivationDeactivationENDC_r17; /**< scg-ActivationDeactivationENDC-r17 是否存在。 */
    MRDC_Parameters_v1700_Scg_ActivationDeactivationENDC_r17 scg_ActivationDeactivationENDC_r17; /**< ASN.1 scg-ActivationDeactivationENDC-r17；枚举；OPTIONAL。 */
    bool has_scg_ActivationDeactivationResumeENDC_r17; /**< scg-ActivationDeactivationResumeENDC-r17 是否存在。 */
    MRDC_Parameters_v1700_Scg_ActivationDeactivationResumeENDC_r17 scg_ActivationDeactivationResumeENDC_r17; /**< ASN.1 scg-ActivationDeactivationResumeENDC-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1700
 * @note ASN.1：BandCombination-v1700；源文件第 14339 行。
 * @note BandCombination-v1700 ::= SEQUENCE { ca-ParametersNR-v1700, ca-ParametersNRDC-v1700, mrdc-Parameters-v1...
 */
struct BandCombination_v1700 {
    bool has_ca_ParametersNR_v1700; /**< ca-ParametersNR-v1700 是否存在。 */
    CA_ParametersNR_v1700 ca_ParametersNR_v1700; /**< ASN.1 ca-ParametersNR-v1700；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1700; /**< ca-ParametersNRDC-v1700 是否存在。 */
    CA_ParametersNRDC_v1700 ca_ParametersNRDC_v1700; /**< ASN.1 ca-ParametersNRDC-v1700；结构体；OPTIONAL。 */
    bool has_mrdc_Parameters_v1700; /**< mrdc-Parameters-v1700 是否存在。 */
    MRDC_Parameters_v1700 mrdc_Parameters_v1700; /**< ASN.1 mrdc-Parameters-v1700；结构体；OPTIONAL。 */
    bool has_bandList_v1710; /**< bandList-v1710 是否存在。 */
    BandParameters_v1710* bandList_v1710_items; /**< ASN.1 bandList-v1710；SEQUENCE OF BandParameters_v1710，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bandList_v1710_count; /**< bandList-v1710 元素个数。 */
    bool has_supportedBandCombListPerBC_SL_RelayDiscovery_r17; /**< supportedBandCombListPerBC-SL-RelayDiscovery-r17 是否存在。 */
    BitString supportedBandCombListPerBC_SL_RelayDiscovery_r17; /**< ASN.1 supportedBandCombListPerBC-SL-RelayDiscovery-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombListPerBC_SL_NonRelayDiscovery_r17; /**< supportedBandCombListPerBC-SL-NonRelayDiscovery-r17 是否存在。 */
    BitString supportedBandCombListPerBC_SL_NonRelayDiscovery_r17; /**< ASN.1 supportedBandCombListPerBC-SL-NonRelayDiscovery-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief PUCCH_Group_Config_r17
 * @note ASN.1：PUCCH-Group-Config-r17；源文件第 15443 行。
 * @note PUCCH-Group-Config-r17 ::= SEQUENCE { fr1-FR1-NonSharedTDD-r17, fr2-FR2-NonSharedTDD-r17, fr1-FR2-NonSha...
 */
struct PUCCH_Group_Config_r17 {
    bool has_fr1_FR1_NonSharedTDD_r17; /**< fr1-FR1-NonSharedTDD-r17 是否存在。 */
    PUCCH_Group_Config_r17_Fr1_FR1_NonSharedTDD_r17 fr1_FR1_NonSharedTDD_r17; /**< ASN.1 fr1-FR1-NonSharedTDD-r17；枚举；OPTIONAL。 */
    bool has_fr2_FR2_NonSharedTDD_r17; /**< fr2-FR2-NonSharedTDD-r17 是否存在。 */
    PUCCH_Group_Config_r17_Fr2_FR2_NonSharedTDD_r17 fr2_FR2_NonSharedTDD_r17; /**< ASN.1 fr2-FR2-NonSharedTDD-r17；枚举；OPTIONAL。 */
    bool has_fr1_FR2_NonSharedTDD_r17; /**< fr1-FR2-NonSharedTDD-r17 是否存在。 */
    PUCCH_Group_Config_r17_Fr1_FR2_NonSharedTDD_r17 fr1_FR2_NonSharedTDD_r17; /**< ASN.1 fr1-FR2-NonSharedTDD-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17
 * @note ASN.1：semiStaticPUCCH-CellSwitchSingleGroup-r17；源文件第 14973 行。
 * @note SEQUENCE { pucch-Group-r17, pucch-Group-Config-r17 }
 */
struct CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17 {
    CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17_Pucch_Group_r17 pucch_Group_r17; /**< ASN.1 pucch-Group-r17；枚举。 */
    PUCCH_Group_Config_r17 pucch_Group_Config_r17; /**< ASN.1 pucch-Group-Config-r17；结构体。 */
};


/**
 * @brief CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17
 * @note ASN.1：dynamicPUCCH-CellSwitchSameLengthSingleGroup-r17；源文件第 14981 行。
 * @note SEQUENCE { pucch-Group-r17, pucch-Group-Config-r17 }
 */
struct CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17 {
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17_Pucch_Group_r17 pucch_Group_r17; /**< ASN.1 pucch-Group-r17；枚举。 */
    PUCCH_Group_Config_r17 pucch_Group_Config_r17; /**< ASN.1 pucch-Group-Config-r17；结构体。 */
};


/**
 * @brief CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17
 * @note ASN.1：dynamicPUCCH-CellSwitchDiffLengthSingleGroup-r17；源文件第 14987 行。
 * @note SEQUENCE { pucch-Group-r17, pucch-Group-Config-r17 }
 */
struct CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17 {
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17_Pucch_Group_r17 pucch_Group_r17; /**< ASN.1 pucch-Group-r17；枚举。 */
    PUCCH_Group_Config_r17 pucch_Group_Config_r17; /**< ASN.1 pucch-Group-Config-r17；结构体。 */
};


/**
 * @brief CA_ParametersNR_v1720
 * @note ASN.1：CA-ParametersNR-v1720；源文件第 14967 行。
 * @note CA-ParametersNR-v1720 ::= SEQUENCE { parallelTxSRS-PUCCH-PUSCH-intraBand-r17, parallelTxPRACH-SRS-PUCCH...
 */
struct CA_ParametersNR_v1720 {
    bool has_parallelTxSRS_PUCCH_PUSCH_intraBand_r17; /**< parallelTxSRS-PUCCH-PUSCH-intraBand-r17 是否存在。 */
    CA_ParametersNR_v1720_ParallelTxSRS_PUCCH_PUSCH_intraBand_r17 parallelTxSRS_PUCCH_PUSCH_intraBand_r17; /**< ASN.1 parallelTxSRS-PUCCH-PUSCH-intraBand-r17；枚举；OPTIONAL。 */
    bool has_parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17; /**< parallelTxPRACH-SRS-PUCCH-PUSCH-intraBand-r17 是否存在。 */
    CA_ParametersNR_v1720_ParallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17 parallelTxPRACH_SRS_PUCCH_PUSCH_intraBand_r17; /**< ASN.1 parallelTxPRACH-SRS-PUCCH-PUSCH-intraBand-r17；枚举；OPTIONAL。 */
    bool has_semiStaticPUCCH_CellSwitchSingleGroup_r17; /**< semiStaticPUCCH-CellSwitchSingleGroup-r17 是否存在。 */
    CA_ParametersNR_v1720_SemiStaticPUCCH_CellSwitchSingleGroup_r17 semiStaticPUCCH_CellSwitchSingleGroup_r17; /**< ASN.1 semiStaticPUCCH-CellSwitchSingleGroup-r17；结构体；OPTIONAL。 */
    bool has_semiStaticPUCCH_CellSwitchTwoGroups_r17; /**< semiStaticPUCCH-CellSwitchTwoGroups-r17 是否存在。 */
    TwoPUCCH_Grp_Configurations_r17* semiStaticPUCCH_CellSwitchTwoGroups_r17_items; /**< ASN.1 semiStaticPUCCH-CellSwitchTwoGroups-r17；SEQUENCE OF TwoPUCCH_Grp_Configurations_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t semiStaticPUCCH_CellSwitchTwoGroups_r17_count; /**< semiStaticPUCCH-CellSwitchTwoGroups-r17 元素个数。 */
    bool has_dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17; /**< dynamicPUCCH-CellSwitchSameLengthSingleGroup-r17 是否存在。 */
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchSameLengthSingleGroup_r17 dynamicPUCCH_CellSwitchSameLengthSingleGroup_r17; /**< ASN.1 dynamicPUCCH-CellSwitchSameLengthSingleGroup-r17；结构体；OPTIONAL。 */
    bool has_dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17; /**< dynamicPUCCH-CellSwitchDiffLengthSingleGroup-r17 是否存在。 */
    CA_ParametersNR_v1720_DynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17 dynamicPUCCH_CellSwitchDiffLengthSingleGroup_r17; /**< ASN.1 dynamicPUCCH-CellSwitchDiffLengthSingleGroup-r17；结构体；OPTIONAL。 */
    bool has_dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17; /**< dynamicPUCCH-CellSwitchSameLengthTwoGroups-r17 是否存在。 */
    TwoPUCCH_Grp_Configurations_r17* dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_items; /**< ASN.1 dynamicPUCCH-CellSwitchSameLengthTwoGroups-r17；SEQUENCE OF TwoPUCCH_Grp_Configurations_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dynamicPUCCH_CellSwitchSameLengthTwoGroups_r17_count; /**< dynamicPUCCH-CellSwitchSameLengthTwoGroups-r17 元素个数。 */
    bool has_dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17; /**< dynamicPUCCH-CellSwitchDiffLengthTwoGroups-r17 是否存在。 */
    TwoPUCCH_Grp_Configurations_r17* dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_items; /**< ASN.1 dynamicPUCCH-CellSwitchDiffLengthTwoGroups-r17；SEQUENCE OF TwoPUCCH_Grp_Configurations_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dynamicPUCCH_CellSwitchDiffLengthTwoGroups_r17_count; /**< dynamicPUCCH-CellSwitchDiffLengthTwoGroups-r17 元素个数。 */
    bool has_ack_NACK_FeedbackForMulticast_r17; /**< ack-NACK-FeedbackForMulticast-r17 是否存在。 */
    CA_ParametersNR_v1720_Ack_NACK_FeedbackForMulticast_r17 ack_NACK_FeedbackForMulticast_r17; /**< ASN.1 ack-NACK-FeedbackForMulticast-r17；枚举；OPTIONAL。 */
    bool has_ptp_Retx_Multicast_r17; /**< ptp-Retx-Multicast-r17 是否存在。 */
    CA_ParametersNR_v1720_Ptp_Retx_Multicast_r17 ptp_Retx_Multicast_r17; /**< ASN.1 ptp-Retx-Multicast-r17；枚举；OPTIONAL。 */
    bool has_nack_OnlyFeedbackForMulticast_r17; /**< nack-OnlyFeedbackForMulticast-r17 是否存在。 */
    CA_ParametersNR_v1720_Nack_OnlyFeedbackForMulticast_r17 nack_OnlyFeedbackForMulticast_r17; /**< ASN.1 nack-OnlyFeedbackForMulticast-r17；枚举；OPTIONAL。 */
    bool has_nack_OnlyFeedbackSpecificResourceForMulticast_r17; /**< nack-OnlyFeedbackSpecificResourceForMulticast-r17 是否存在。 */
    CA_ParametersNR_v1720_Nack_OnlyFeedbackSpecificResourceForMulticast_r17 nack_OnlyFeedbackSpecificResourceForMulticast_r17; /**< ASN.1 nack-OnlyFeedbackSpecificResourceForMulticast-r17；枚举；OPTIONAL。 */
    bool has_ack_NACK_FeedbackForSPS_Multicast_r17; /**< ack-NACK-FeedbackForSPS-Multicast-r17 是否存在。 */
    CA_ParametersNR_v1720_Ack_NACK_FeedbackForSPS_Multicast_r17 ack_NACK_FeedbackForSPS_Multicast_r17; /**< ASN.1 ack-NACK-FeedbackForSPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_ptp_Retx_SPS_Multicast_r17; /**< ptp-Retx-SPS-Multicast-r17 是否存在。 */
    CA_ParametersNR_v1720_Ptp_Retx_SPS_Multicast_r17 ptp_Retx_SPS_Multicast_r17; /**< ASN.1 ptp-Retx-SPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_higherPowerLimit_r17; /**< higherPowerLimit-r17 是否存在。 */
    CA_ParametersNR_v1720_HigherPowerLimit_r17 higherPowerLimit_r17; /**< ASN.1 higherPowerLimit-r17；枚举；OPTIONAL。 */
    bool has_parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17; /**< parallelTxMsgA-SRS-PUCCH-PUSCH-intraBand-r17 是否存在。 */
    CA_ParametersNR_v1720_ParallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17 parallelTxMsgA_SRS_PUCCH_PUSCH_intraBand_r17; /**< ASN.1 parallelTxMsgA-SRS-PUCCH-PUSCH-intraBand-r17；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringCA_r17; /**< pdcch-MonitoringCA-r17 是否存在。 */
    int64_t pdcch_MonitoringCA_r17; /**< ASN.1 pdcch-MonitoringCA-r17；INTEGER (4..16)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionMCG_SCG_List_r17; /**< pdcch-BlindDetectionMCG-SCG-List-r17 是否存在。 */
    PDCCH_BlindDetectionMCG_SCG_r17* pdcch_BlindDetectionMCG_SCG_List_r17_items; /**< ASN.1 pdcch-BlindDetectionMCG-SCG-List-r17；SEQUENCE OF PDCCH_BlindDetectionMCG_SCG_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionMCG_SCG_List_r17_count; /**< pdcch-BlindDetectionMCG-SCG-List-r17 元素个数。 */
    bool has_pdcch_BlindDetectionMixedList1_r17; /**< pdcch-BlindDetectionMixedList1-r17 是否存在。 */
    PDCCH_BlindDetectionMixed_r17* pdcch_BlindDetectionMixedList1_r17_items; /**< ASN.1 pdcch-BlindDetectionMixedList1-r17；SEQUENCE OF PDCCH_BlindDetectionMixed_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionMixedList1_r17_count; /**< pdcch-BlindDetectionMixedList1-r17 元素个数。 */
    bool has_pdcch_BlindDetectionMixedList2_r17; /**< pdcch-BlindDetectionMixedList2-r17 是否存在。 */
    PDCCH_BlindDetectionMixed_r17* pdcch_BlindDetectionMixedList2_r17_items; /**< ASN.1 pdcch-BlindDetectionMixedList2-r17；SEQUENCE OF PDCCH_BlindDetectionMixed_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionMixedList2_r17_count; /**< pdcch-BlindDetectionMixedList2-r17 元素个数。 */
    bool has_pdcch_BlindDetectionMixedList3_r17; /**< pdcch-BlindDetectionMixedList3-r17 是否存在。 */
    PDCCH_BlindDetectionMixed1_r17* pdcch_BlindDetectionMixedList3_r17_items; /**< ASN.1 pdcch-BlindDetectionMixedList3-r17；SEQUENCE OF PDCCH_BlindDetectionMixed1_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_BlindDetectionMixedList3_r17_count; /**< pdcch-BlindDetectionMixedList3-r17 元素个数。 */
};


/**
 * @brief CA_ParametersNRDC_v1720
 * @note ASN.1：CA-ParametersNRDC-v1720；源文件第 15505 行。
 * @note CA-ParametersNRDC-v1720 ::= SEQUENCE { ca-ParametersNR-ForDC-v1700, ca-ParametersNR-ForDC-v1720 }
 */
struct CA_ParametersNRDC_v1720 {
    bool has_ca_ParametersNR_ForDC_v1700; /**< ca-ParametersNR-ForDC-v1700 是否存在。 */
    CA_ParametersNR_v1700 ca_ParametersNR_ForDC_v1700; /**< ASN.1 ca-ParametersNR-ForDC-v1700；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_ForDC_v1720; /**< ca-ParametersNR-ForDC-v1720 是否存在。 */
    CA_ParametersNR_v1720 ca_ParametersNR_ForDC_v1720; /**< ASN.1 ca-ParametersNR-ForDC-v1720；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1720
 * @note ASN.1：BandCombination-v1720；源文件第 14348 行。
 * @note BandCombination-v1720 ::= SEQUENCE { ca-ParametersNR-v1720, ca-ParametersNRDC-v1720 }
 */
struct BandCombination_v1720 {
    bool has_ca_ParametersNR_v1720; /**< ca-ParametersNR-v1720 是否存在。 */
    CA_ParametersNR_v1720 ca_ParametersNR_v1720; /**< ASN.1 ca-ParametersNR-v1720；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1720; /**< ca-ParametersNRDC-v1720 是否存在。 */
    CA_ParametersNRDC_v1720 ca_ParametersNRDC_v1720; /**< ASN.1 ca-ParametersNRDC-v1720；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1730
 * @note ASN.1：CA-ParametersNR-v1730；源文件第 15044 行。
 * @note CA-ParametersNR-v1730 ::= SEQUENCE { dmrs-BundlingPUSCH-RepTypeAPerBC-r17, dmrs-BundlingPUSCH-RepTypeBP...
 */
struct CA_ParametersNR_v1730 {
    bool has_dmrs_BundlingPUSCH_RepTypeAPerBC_r17; /**< dmrs-BundlingPUSCH-RepTypeAPerBC-r17 是否存在。 */
    CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeAPerBC_r17 dmrs_BundlingPUSCH_RepTypeAPerBC_r17; /**< ASN.1 dmrs-BundlingPUSCH-RepTypeAPerBC-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUSCH_RepTypeBPerBC_r17; /**< dmrs-BundlingPUSCH-RepTypeBPerBC-r17 是否存在。 */
    CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_RepTypeBPerBC_r17 dmrs_BundlingPUSCH_RepTypeBPerBC_r17; /**< ASN.1 dmrs-BundlingPUSCH-RepTypeBPerBC-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUSCH_multiSlotPerBC_r17; /**< dmrs-BundlingPUSCH-multiSlotPerBC-r17 是否存在。 */
    CA_ParametersNR_v1730_Dmrs_BundlingPUSCH_multiSlotPerBC_r17 dmrs_BundlingPUSCH_multiSlotPerBC_r17; /**< ASN.1 dmrs-BundlingPUSCH-multiSlotPerBC-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUCCH_RepPerBC_r17; /**< dmrs-BundlingPUCCH-RepPerBC-r17 是否存在。 */
    CA_ParametersNR_v1730_Dmrs_BundlingPUCCH_RepPerBC_r17 dmrs_BundlingPUCCH_RepPerBC_r17; /**< ASN.1 dmrs-BundlingPUCCH-RepPerBC-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingRestartPerBC_r17; /**< dmrs-BundlingRestartPerBC-r17 是否存在。 */
    CA_ParametersNR_v1730_Dmrs_BundlingRestartPerBC_r17 dmrs_BundlingRestartPerBC_r17; /**< ASN.1 dmrs-BundlingRestartPerBC-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingNonBackToBackTX_PerBC_r17; /**< dmrs-BundlingNonBackToBackTX-PerBC-r17 是否存在。 */
    CA_ParametersNR_v1730_Dmrs_BundlingNonBackToBackTX_PerBC_r17 dmrs_BundlingNonBackToBackTX_PerBC_r17; /**< ASN.1 dmrs-BundlingNonBackToBackTX-PerBC-r17；枚举；OPTIONAL。 */
    bool has_stayOnTargetCC_SRS_CarrierSwitch_r17; /**< stayOnTargetCC-SRS-CarrierSwitch-r17 是否存在。 */
    CA_ParametersNR_v1730_StayOnTargetCC_SRS_CarrierSwitch_r17 stayOnTargetCC_SRS_CarrierSwitch_r17; /**< ASN.1 stayOnTargetCC-SRS-CarrierSwitch-r17；枚举；OPTIONAL。 */
    bool has_fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17; /**< fdm-CodebookForMux-UnicastMulticastHARQ-ACK-r17 是否存在。 */
    CA_ParametersNR_v1730_Fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17 fdm_CodebookForMux_UnicastMulticastHARQ_ACK_r17; /**< ASN.1 fdm-CodebookForMux-UnicastMulticastHARQ-ACK-r17；枚举；OPTIONAL。 */
    bool has_mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17; /**< mode2-TDM-CodebookForMux-UnicastMulticastHARQ-ACK-r17 是否存在。 */
    CA_ParametersNR_v1730_Mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17 mode2_TDM_CodebookForMux_UnicastMulticastHARQ_ACK_r17; /**< ASN.1 mode2-TDM-CodebookForMux-UnicastMulticastHARQ-ACK-r17；枚举；OPTIONAL。 */
    bool has_mode1_ForType1_CodebookGeneration_r17; /**< mode1-ForType1-CodebookGeneration-r17 是否存在。 */
    CA_ParametersNR_v1730_Mode1_ForType1_CodebookGeneration_r17 mode1_ForType1_CodebookGeneration_r17; /**< ASN.1 mode1-ForType1-CodebookGeneration-r17；枚举；OPTIONAL。 */
    bool has_nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17; /**< nack-OnlyFeedbackSpecificResourceForSPS-Multicast-r17 是否存在。 */
    CA_ParametersNR_v1730_Nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17 nack_OnlyFeedbackSpecificResourceForSPS_Multicast_r17; /**< ASN.1 nack-OnlyFeedbackSpecificResourceForSPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_multiPUCCH_ConfigForMulticast_r17; /**< multiPUCCH-ConfigForMulticast-r17 是否存在。 */
    CA_ParametersNR_v1730_MultiPUCCH_ConfigForMulticast_r17 multiPUCCH_ConfigForMulticast_r17; /**< ASN.1 multiPUCCH-ConfigForMulticast-r17；枚举；OPTIONAL。 */
    bool has_pucch_ConfigForSPS_Multicast_r17; /**< pucch-ConfigForSPS-Multicast-r17 是否存在。 */
    CA_ParametersNR_v1730_Pucch_ConfigForSPS_Multicast_r17 pucch_ConfigForSPS_Multicast_r17; /**< ASN.1 pucch-ConfigForSPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_maxNumberG_RNTI_HARQ_ACK_Codebook_r17; /**< maxNumberG-RNTI-HARQ-ACK-Codebook-r17 是否存在。 */
    int64_t maxNumberG_RNTI_HARQ_ACK_Codebook_r17; /**< ASN.1 maxNumberG-RNTI-HARQ-ACK-Codebook-r17；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_mux_HARQ_ACK_UnicastMulticast_r17; /**< mux-HARQ-ACK-UnicastMulticast-r17 是否存在。 */
    CA_ParametersNR_v1730_Mux_HARQ_ACK_UnicastMulticast_r17 mux_HARQ_ACK_UnicastMulticast_r17; /**< ASN.1 mux-HARQ-ACK-UnicastMulticast-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1730
 * @note ASN.1：CA-ParametersNRDC-v1730；源文件第 15510 行。
 * @note CA-ParametersNRDC-v1730 ::= SEQUENCE { ca-ParametersNR-ForDC-v1730 }
 */
struct CA_ParametersNRDC_v1730 {
    bool has_ca_ParametersNR_ForDC_v1730; /**< ca-ParametersNR-ForDC-v1730 是否存在。 */
    CA_ParametersNR_v1730 ca_ParametersNR_ForDC_v1730; /**< ASN.1 ca-ParametersNR-ForDC-v1730；结构体；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1730
 * @note ASN.1：BandCombination-v1730；源文件第 14353 行。
 * @note BandCombination-v1730 ::= SEQUENCE { ca-ParametersNR-v1730, ca-ParametersNRDC-v1730, bandList-v1730 }
 */
struct BandCombination_v1730 {
    bool has_ca_ParametersNR_v1730; /**< ca-ParametersNR-v1730 是否存在。 */
    CA_ParametersNR_v1730 ca_ParametersNR_v1730; /**< ASN.1 ca-ParametersNR-v1730；结构体；OPTIONAL。 */
    bool has_ca_ParametersNRDC_v1730; /**< ca-ParametersNRDC-v1730 是否存在。 */
    CA_ParametersNRDC_v1730 ca_ParametersNRDC_v1730; /**< ASN.1 ca-ParametersNRDC-v1730；结构体；OPTIONAL。 */
    bool has_bandList_v1730; /**< bandList-v1730 是否存在。 */
    BandParameters_v1730* bandList_v1730_items; /**< ASN.1 bandList-v1730；SEQUENCE OF BandParameters_v1730，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bandList_v1730_count; /**< bandList-v1730 元素个数。 */
};


/**
 * @brief CA_ParametersNR_v1740
 * @note ASN.1：CA-ParametersNR-v1740；源文件第 15079 行。
 * @note CA-ParametersNR-v1740 ::= SEQUENCE { nack-OnlyFeedbackForSPS-Multicast-r17, singlePUCCH-ConfigForMultic...
 */
struct CA_ParametersNR_v1740 {
    bool has_nack_OnlyFeedbackForSPS_Multicast_r17; /**< nack-OnlyFeedbackForSPS-Multicast-r17 是否存在。 */
    CA_ParametersNR_v1740_Nack_OnlyFeedbackForSPS_Multicast_r17 nack_OnlyFeedbackForSPS_Multicast_r17; /**< ASN.1 nack-OnlyFeedbackForSPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_singlePUCCH_ConfigForMulticast_r17; /**< singlePUCCH-ConfigForMulticast-r17 是否存在。 */
    CA_ParametersNR_v1740_SinglePUCCH_ConfigForMulticast_r17 singlePUCCH_ConfigForMulticast_r17; /**< ASN.1 singlePUCCH-ConfigForMulticast-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1740
 * @note ASN.1：BandCombination-v1740；源文件第 14359 行。
 * @note BandCombination-v1740 ::= SEQUENCE { ca-ParametersNR-v1740 }
 */
struct BandCombination_v1740 {
    bool has_ca_ParametersNR_v1740; /**< ca-ParametersNR-v1740 是否存在。 */
    CA_ParametersNR_v1740 ca_ParametersNR_v1740; /**< ASN.1 ca-ParametersNR-v1740；结构体；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNR_v1760
 * @note ASN.1：CA-ParametersNR-v1760；源文件第 15087 行。
 * @note CA-ParametersNR-v1760 ::= SEQUENCE { prioSCellPRACH-OverSP-PeriodicSRS-Support-r17 }
 */
struct CA_ParametersNR_v1760 {
    bool has_prioSCellPRACH_OverSP_PeriodicSRS_Support_r17; /**< prioSCellPRACH-OverSP-PeriodicSRS-Support-r17 是否存在。 */
    CA_ParametersNR_v1760_PrioSCellPRACH_OverSP_PeriodicSRS_Support_r17 prioSCellPRACH_OverSP_PeriodicSRS_Support_r17; /**< ASN.1 prioSCellPRACH-OverSP-PeriodicSRS-Support-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CA_ParametersNRDC_v1760
 * @note ASN.1：CA-ParametersNRDC-v1760；源文件第 15514 行。
 * @note CA-ParametersNRDC-v1760 ::= SEQUENCE { ca-ParametersNR-ForDC-v1760 }
 */
struct CA_ParametersNRDC_v1760 {
    CA_ParametersNR_v1760 ca_ParametersNR_ForDC_v1760; /**< ASN.1 ca-ParametersNR-ForDC-v1760；结构体。 */
};


/**
 * @brief BandCombination_v1760
 * @note ASN.1：BandCombination-v1760；源文件第 14363 行。
 * @note BandCombination-v1760 ::= SEQUENCE { ca-ParametersNR-v1760, ca-ParametersNRDC-v1760 }
 */
struct BandCombination_v1760 {
    CA_ParametersNR_v1760 ca_ParametersNR_v1760; /**< ASN.1 ca-ParametersNR-v1760；结构体。 */
    CA_ParametersNRDC_v1760 ca_ParametersNRDC_v1760; /**< ASN.1 ca-ParametersNRDC-v1760；结构体。 */
};


/**
 * @brief CA_ParametersNR_v1770
 * @note ASN.1：CA-ParametersNR-v1770；源文件第 15091 行。
 * @note CA-ParametersNR-v1770 ::= SEQUENCE { parallelTxPUCCH-PUSCH-SamePriority-r17 }
 */
struct CA_ParametersNR_v1770 {
    bool has_parallelTxPUCCH_PUSCH_SamePriority_r17; /**< parallelTxPUCCH-PUSCH-SamePriority-r17 是否存在。 */
    CA_ParametersNR_v1770_ParallelTxPUCCH_PUSCH_SamePriority_r17 parallelTxPUCCH_PUSCH_SamePriority_r17; /**< ASN.1 parallelTxPUCCH-PUSCH-SamePriority-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MRDC_Parameters_v1770
 * @note ASN.1：MRDC-Parameters-v1770；源文件第 18596 行。
 * @note MRDC-Parameters-v1770 ::= SEQUENCE { higherPowerLimitMRDC-r17 }
 */
struct MRDC_Parameters_v1770 {
    bool has_higherPowerLimitMRDC_r17; /**< higherPowerLimitMRDC-r17 是否存在。 */
    MRDC_Parameters_v1770_HigherPowerLimitMRDC_r17 higherPowerLimitMRDC_r17; /**< ASN.1 higherPowerLimitMRDC-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandCombination_v1770
 * @note ASN.1：BandCombination-v1770；源文件第 14368 行。
 * @note BandCombination-v1770 ::= SEQUENCE { bandList-v1770, mrdc-Parameters-v1770, ca-ParametersNR-v1770 }
 */
struct BandCombination_v1770 {
    BandParameters_v1770* bandList_v1770_items; /**< ASN.1 bandList-v1770；SEQUENCE OF BandParameters_v1770，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t bandList_v1770_count; /**< bandList-v1770 元素个数。 */
    bool has_mrdc_Parameters_v1770; /**< mrdc-Parameters-v1770 是否存在。 */
    MRDC_Parameters_v1770 mrdc_Parameters_v1770; /**< ASN.1 mrdc-Parameters-v1770；结构体；OPTIONAL。 */
    bool has_ca_ParametersNR_v1770; /**< ca-ParametersNR-v1770 是否存在。 */
    CA_ParametersNR_v1770 ca_ParametersNR_v1770; /**< ASN.1 ca-ParametersNR-v1770；结构体；OPTIONAL。 */
};


/**
 * @brief SupportedAggBandwidth_r17
 * @note ASN.1：SupportedAggBandwidth-r17；源文件第 20780 行。
 * @note SupportedAggBandwidth-r17 ::= CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SupportedAggBandwidth_r17_Tag {
    SupportedAggBandwidth_r17_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    SupportedAggBandwidth_r17_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} SupportedAggBandwidth_r17_Tag;

struct SupportedAggBandwidth_r17 {
    SupportedAggBandwidth_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SupportedAggBandwidth_r17_Fr1_r17 fr1_r17; /**< ASN.1 fr1-r17 */
        SupportedAggBandwidth_r17_Fr2_r17 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART020_H */
