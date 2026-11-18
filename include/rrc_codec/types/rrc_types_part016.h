/* ============================================================================
 * types/rrc_types_part016.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART016_H
#define RRC_CODEC_TYPES_PART016_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SIB2_IntraFreqCellReselectionInfo_ExtGroup3
 * @note ASN.1：SIB2_IntraFreqCellReselectionInfo_ExtGroup3；源文件第 3372 行。
 */
struct SIB2_IntraFreqCellReselectionInfo_ExtGroup3 {
    bool has_ssb_PositionQCL_Common_r17; /**< ssb-PositionQCL-Common-r17 是否存在。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_Common_r17; /**< ASN.1 ssb-PositionQCL-Common-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SSB_MTC4List_r17
 * @note ASN.1：SSB-MTC4List-r17；源文件第 7753 行。
 * @note SSB-MTC4List-r17 ::= SEQUENCE OF (size 1..3) OF SSB-MTC4-r17
 */
struct SSB_MTC4List_r17 {
    SSB_MTC4_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB2_IntraFreqCellReselectionInfo_ExtGroup4
 * @note ASN.1：SIB2_IntraFreqCellReselectionInfo_ExtGroup4；源文件第 3375 行。
 */
struct SIB2_IntraFreqCellReselectionInfo_ExtGroup4 {
    bool has_smtc4list_r17; /**< smtc4list-r17 是否存在。 */
    SSB_MTC4List_r17 smtc4list_r17; /**< ASN.1 smtc4list-r17；SEQUENCE OF SSB_MTC4_r17，SIZE (1..3)；OPTIONAL。 */
};


/**
 * @brief SIB2_IntraFreqCellReselectionInfo_ExtGroup5
 * @note ASN.1：SIB2_IntraFreqCellReselectionInfo_ExtGroup5；源文件第 3378 行。
 */
struct SIB2_IntraFreqCellReselectionInfo_ExtGroup5 {
    bool has_frequencyBandList_v1760; /**< frequencyBandList-v1760 是否存在。 */
    MultiFrequencyBandListNR_SIB_v1760 frequencyBandList_v1760; /**< ASN.1 frequencyBandList-v1760；SEQUENCE OF NR_MultiBandInfo_v1760，SIZE (1..8)；OPTIONAL。 */
    bool has_frequencyBandListSUL_v1760; /**< frequencyBandListSUL-v1760 是否存在。 */
    MultiFrequencyBandListNR_SIB_v1760 frequencyBandListSUL_v1760; /**< ASN.1 frequencyBandListSUL-v1760；SEQUENCE OF NR_MultiBandInfo_v1760，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SIB2_IntraFreqCellReselectionInfo_ExtGroup6
 * @note ASN.1：SIB2_IntraFreqCellReselectionInfo_ExtGroup6；源文件第 3382 行。
 */
struct SIB2_IntraFreqCellReselectionInfo_ExtGroup6 {
    bool has_frequencyBandListAerial_r18; /**< frequencyBandListAerial-r18 是否存在。 */
    MultiFrequencyBandListNR_Aerial_SIB_r18 frequencyBandListAerial_r18; /**< ASN.1 frequencyBandListAerial-r18；SEQUENCE OF NR_MultiBandInfoAerial_r18，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SIB2_IntraFreqCellReselectionInfo
 * @note ASN.1：intraFreqCellReselectionInfo；源文件第 3350 行。
 * @note SEQUENCE { q-RxLevMin, q-RxLevMinSUL, q-QualMin, s-IntraSearchP, s-IntraSearc...
 */
struct SIB2_IntraFreqCellReselectionInfo {
    Q_RxLevMin q_RxLevMin; /**< ASN.1 q-RxLevMin；INTEGER (-70..-22)，位宽 6 bit。 */
    bool has_q_RxLevMinSUL; /**< q-RxLevMinSUL 是否存在。 */
    Q_RxLevMin q_RxLevMinSUL; /**< ASN.1 q-RxLevMinSUL；INTEGER (-70..-22)，位宽 6 bit；OPTIONAL。 */
    bool has_q_QualMin; /**< q-QualMin 是否存在。 */
    Q_QualMin q_QualMin; /**< ASN.1 q-QualMin；INTEGER (-43..-12)，位宽 5 bit；OPTIONAL。 */
    ReselectionThreshold s_IntraSearchP; /**< ASN.1 s-IntraSearchP；INTEGER (0..31)，位宽 5 bit。 */
    bool has_s_IntraSearchQ; /**< s-IntraSearchQ 是否存在。 */
    ReselectionThresholdQ s_IntraSearchQ; /**< ASN.1 s-IntraSearchQ；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    T_Reselection t_ReselectionNR; /**< ASN.1 t-ReselectionNR；INTEGER (0..7)，位宽 3 bit。 */
    bool has_frequencyBandList; /**< frequencyBandList 是否存在。 */
    MultiFrequencyBandListNR_SIB frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF NR_MultiBandInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_frequencyBandListSUL; /**< frequencyBandListSUL 是否存在。 */
    MultiFrequencyBandListNR_SIB frequencyBandListSUL; /**< ASN.1 frequencyBandListSUL；SEQUENCE OF NR_MultiBandInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_p_Max; /**< p-Max 是否存在。 */
    P_Max p_Max; /**< ASN.1 p-Max；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_smtc; /**< smtc 是否存在。 */
    SSB_MTC smtc; /**< ASN.1 smtc；结构体；OPTIONAL。 */
    bool has_ss_RSSI_Measurement; /**< ss-RSSI-Measurement 是否存在。 */
    SS_RSSI_Measurement ss_RSSI_Measurement; /**< ASN.1 ss-RSSI-Measurement；结构体；OPTIONAL。 */
    bool has_ssb_ToMeasure; /**< ssb-ToMeasure 是否存在。 */
    SSB_ToMeasure ssb_ToMeasure; /**< ASN.1 ssb-ToMeasure；结构体；OPTIONAL。 */
    bool deriveSSB_IndexFromCell; /**< ASN.1 deriveSSB-IndexFromCell；BOOLEAN，1 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB2_IntraFreqCellReselectionInfo_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB2_IntraFreqCellReselectionInfo_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SIB2_IntraFreqCellReselectionInfo_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    SIB2_IntraFreqCellReselectionInfo_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    SIB2_IntraFreqCellReselectionInfo_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    SIB2_IntraFreqCellReselectionInfo_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SIB2
 * @note ASN.1：SIB2；源文件第 3324 行。
 * @note SIB2 ::= SEQUENCE { cellReselectionInfoCommon, cellReselectionServingFreqInfo, intraFr...
 */
struct SIB2 {
    SIB2_CellReselectionInfoCommon cellReselectionInfoCommon; /**< ASN.1 cellReselectionInfoCommon；结构体。 */
    SIB2_CellReselectionServingFreqInfo cellReselectionServingFreqInfo; /**< ASN.1 cellReselectionServingFreqInfo；结构体。 */
    SIB2_IntraFreqCellReselectionInfo intraFreqCellReselectionInfo; /**< ASN.1 intraFreqCellReselectionInfo；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB2_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB2_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief IntraFreqNeighCellList_v1610
 * @note ASN.1：IntraFreqNeighCellList-v1610；源文件第 3449 行。
 * @note IntraFreqNeighCellList-v1610 ::= SEQUENCE OF (size 1..16) OF IntraFreqNeighCellInfo-v1610
 */
struct IntraFreqNeighCellList_v1610 {
    IntraFreqNeighCellInfo_v1610* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IntraFreqAllowedCellList_r16
 * @note ASN.1：IntraFreqAllowedCellList-r16；源文件第 3472 行。
 * @note IntraFreqAllowedCellList-r16 ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct IntraFreqAllowedCellList_r16 {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB3_ExtGroup1
 * @note ASN.1：SIB3_ExtGroup1；源文件第 3433 行。
 */
struct SIB3_ExtGroup1 {
    bool has_intraFreqNeighCellList_v1610; /**< intraFreqNeighCellList-v1610 是否存在。 */
    IntraFreqNeighCellList_v1610 intraFreqNeighCellList_v1610; /**< ASN.1 intraFreqNeighCellList-v1610；SEQUENCE OF IntraFreqNeighCellInfo_v1610，SIZE (1..16)；OPTIONAL。 */
    bool has_intraFreqAllowedCellList_r16; /**< intraFreqAllowedCellList-r16 是否存在。 */
    IntraFreqAllowedCellList_r16 intraFreqAllowedCellList_r16; /**< ASN.1 intraFreqAllowedCellList-r16；SEQUENCE OF PCI_Range，SIZE (1..16)；OPTIONAL。 */
    bool has_intraFreqCAG_CellList_r16; /**< intraFreqCAG-CellList-r16 是否存在。 */
    IntraFreqCAG_CellListPerPLMN_r16* intraFreqCAG_CellList_r16_items; /**< ASN.1 intraFreqCAG-CellList-r16；SEQUENCE OF IntraFreqCAG_CellListPerPLMN_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t intraFreqCAG_CellList_r16_count; /**< intraFreqCAG-CellList-r16 元素个数。 */
};


/**
 * @brief IntraFreqNeighCellList_v1710
 * @note ASN.1：IntraFreqNeighCellList-v1710；源文件第 3451 行。
 * @note IntraFreqNeighCellList-v1710 ::= SEQUENCE OF (size 1..16) OF IntraFreqNeighCellInfo-v1710
 */
struct IntraFreqNeighCellList_v1710 {
    IntraFreqNeighCellInfo_v1710* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IntraFreqNeighHSDN_CellList_r17
 * @note ASN.1：IntraFreqNeighHSDN-CellList-r17；源文件第 3479 行。
 * @note IntraFreqNeighHSDN-CellList-r17 ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct IntraFreqNeighHSDN_CellList_r17 {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB3_ExtGroup2
 * @note ASN.1：SIB3_ExtGroup2；源文件第 3438 行。
 */
struct SIB3_ExtGroup2 {
    bool has_intraFreqNeighHSDN_CellList_r17; /**< intraFreqNeighHSDN-CellList-r17 是否存在。 */
    IntraFreqNeighHSDN_CellList_r17 intraFreqNeighHSDN_CellList_r17; /**< ASN.1 intraFreqNeighHSDN-CellList-r17；SEQUENCE OF PCI_Range，SIZE (1..16)；OPTIONAL。 */
    bool has_intraFreqNeighCellList_v1710; /**< intraFreqNeighCellList-v1710 是否存在。 */
    IntraFreqNeighCellList_v1710 intraFreqNeighCellList_v1710; /**< ASN.1 intraFreqNeighCellList-v1710；SEQUENCE OF IntraFreqNeighCellInfo_v1710，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief SIB3_ExtGroup3
 * @note ASN.1：SIB3_ExtGroup3；源文件第 3442 行。
 */
struct SIB3_ExtGroup3 {
    bool has_channelAccessMode2_r17; /**< channelAccessMode2-r17 是否存在。 */
    SIB3_ExtGroup3_ChannelAccessMode2_r17 channelAccessMode2_r17; /**< ASN.1 channelAccessMode2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief IntraFreqNeighCellList
 * @note ASN.1：IntraFreqNeighCellList；源文件第 3447 行。
 * @note IntraFreqNeighCellList ::= SEQUENCE OF (size 1..16) OF IntraFreqNeighCellInfo
 */
struct IntraFreqNeighCellList {
    IntraFreqNeighCellInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IntraFreqExcludedCellList
 * @note ASN.1：IntraFreqExcludedCellList；源文件第 3470 行。
 * @note IntraFreqExcludedCellList ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct IntraFreqExcludedCellList {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB3
 * @note ASN.1：SIB3；源文件第 3428 行。
 * @note SIB3 ::= SEQUENCE { intraFreqNeighCellList, intraFreqExcludedCellList, lateNonCritical...
 */
struct SIB3 {
    bool has_intraFreqNeighCellList; /**< intraFreqNeighCellList 是否存在。 */
    IntraFreqNeighCellList intraFreqNeighCellList; /**< ASN.1 intraFreqNeighCellList；SEQUENCE OF IntraFreqNeighCellInfo，SIZE (1..16)；OPTIONAL。 */
    bool has_intraFreqExcludedCellList; /**< intraFreqExcludedCellList 是否存在。 */
    IntraFreqExcludedCellList intraFreqExcludedCellList; /**< ASN.1 intraFreqExcludedCellList；SEQUENCE OF PCI_Range，SIZE (1..16)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB3_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB3_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SIB3_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief IntraFreqNeighCellInfo
 * @note ASN.1：IntraFreqNeighCellInfo；源文件第 3453 行。
 * @note IntraFreqNeighCellInfo ::= SEQUENCE { physCellId, q-OffsetCell, q-RxLevMinOffsetCell, q-RxLevMinOffsetCe...
 */
struct IntraFreqNeighCellInfo {
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit。 */
    Q_OffsetRange q_OffsetCell; /**< ASN.1 q-OffsetCell；枚举。 */
    bool has_q_RxLevMinOffsetCell; /**< q-RxLevMinOffsetCell 是否存在。 */
    int64_t q_RxLevMinOffsetCell; /**< ASN.1 q-RxLevMinOffsetCell；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_q_RxLevMinOffsetCellSUL; /**< q-RxLevMinOffsetCellSUL 是否存在。 */
    int64_t q_RxLevMinOffsetCellSUL; /**< ASN.1 q-RxLevMinOffsetCellSUL；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_q_QualMinOffsetCell; /**< q-QualMinOffsetCell 是否存在。 */
    int64_t q_QualMinOffsetCell; /**< ASN.1 q-QualMinOffsetCell；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief IntraFreqNeighCellInfo_v1610
 * @note ASN.1：IntraFreqNeighCellInfo-v1610；源文件第 3462 行。
 * @note IntraFreqNeighCellInfo-v1610 ::= SEQUENCE { ssb-PositionQCL-r16 }
 */
struct IntraFreqNeighCellInfo_v1610 {
    bool has_ssb_PositionQCL_r16; /**< ssb-PositionQCL-r16 是否存在。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_r16; /**< ASN.1 ssb-PositionQCL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief IntraFreqNeighCellInfo_v1710
 * @note ASN.1：IntraFreqNeighCellInfo-v1710；源文件第 3466 行。
 * @note IntraFreqNeighCellInfo-v1710 ::= SEQUENCE { ssb-PositionQCL-r17 }
 */
struct IntraFreqNeighCellInfo_v1710 {
    bool has_ssb_PositionQCL_r17; /**< ssb-PositionQCL-r17 是否存在。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_r17; /**< ASN.1 ssb-PositionQCL-r17；枚举；OPTIONAL。 */
};


/**
 * @brief IntraFreqCAG_CellListPerPLMN_r16
 * @note ASN.1：IntraFreqCAG-CellListPerPLMN-r16；源文件第 3474 行。
 * @note IntraFreqCAG-CellListPerPLMN-r16 ::= SEQUENCE { plmn-IdentityIndex-r16, cag-CellList-r16 }
 */
struct IntraFreqCAG_CellListPerPLMN_r16 {
    int64_t plmn_IdentityIndex_r16; /**< ASN.1 plmn-IdentityIndex-r16；INTEGER (1..12)，位宽 4 bit。 */
    PCI_Range* cag_CellList_r16_items; /**< ASN.1 cag-CellList-r16；SEQUENCE OF PCI_Range，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t cag_CellList_r16_count; /**< cag-CellList-r16 元素个数。 */
};


/**
 * @brief InterFreqCarrierFreqList_v1610
 * @note ASN.1：InterFreqCarrierFreqList-v1610；源文件第 3510 行。
 * @note InterFreqCarrierFreqList-v1610 ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo-v1610
 */
struct InterFreqCarrierFreqList_v1610 {
    InterFreqCarrierFreqInfo_v1610* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4_ExtGroup1
 * @note ASN.1：SIB4_ExtGroup1；源文件第 3488 行。
 */
struct SIB4_ExtGroup1 {
    bool has_interFreqCarrierFreqList_v1610; /**< interFreqCarrierFreqList-v1610 是否存在。 */
    InterFreqCarrierFreqList_v1610 interFreqCarrierFreqList_v1610; /**< ASN.1 interFreqCarrierFreqList-v1610；SEQUENCE OF InterFreqCarrierFreqInfo_v1610，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqList_v1700
 * @note ASN.1：InterFreqCarrierFreqList-v1700；源文件第 3512 行。
 * @note InterFreqCarrierFreqList-v1700 ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo-v1700
 */
struct InterFreqCarrierFreqList_v1700 {
    InterFreqCarrierFreqInfo_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4_ExtGroup2
 * @note ASN.1：SIB4_ExtGroup2；源文件第 3491 行。
 */
struct SIB4_ExtGroup2 {
    bool has_interFreqCarrierFreqList_v1700; /**< interFreqCarrierFreqList-v1700 是否存在。 */
    InterFreqCarrierFreqList_v1700 interFreqCarrierFreqList_v1700; /**< ASN.1 interFreqCarrierFreqList-v1700；SEQUENCE OF InterFreqCarrierFreqInfo_v1700，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqList_v1720
 * @note ASN.1：InterFreqCarrierFreqList-v1720；源文件第 3514 行。
 * @note InterFreqCarrierFreqList-v1720 ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo-v1720
 */
struct InterFreqCarrierFreqList_v1720 {
    InterFreqCarrierFreqInfo_v1720* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4_ExtGroup3
 * @note ASN.1：SIB4_ExtGroup3；源文件第 3494 行。
 */
struct SIB4_ExtGroup3 {
    bool has_interFreqCarrierFreqList_v1720; /**< interFreqCarrierFreqList-v1720 是否存在。 */
    InterFreqCarrierFreqList_v1720 interFreqCarrierFreqList_v1720; /**< ASN.1 interFreqCarrierFreqList-v1720；SEQUENCE OF InterFreqCarrierFreqInfo_v1720，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqList_v1730
 * @note ASN.1：InterFreqCarrierFreqList-v1730；源文件第 3516 行。
 * @note InterFreqCarrierFreqList-v1730 ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo-v1730
 */
struct InterFreqCarrierFreqList_v1730 {
    InterFreqCarrierFreqInfo_v1730* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4_ExtGroup4
 * @note ASN.1：SIB4_ExtGroup4；源文件第 3497 行。
 */
struct SIB4_ExtGroup4 {
    bool has_interFreqCarrierFreqList_v1730; /**< interFreqCarrierFreqList-v1730 是否存在。 */
    InterFreqCarrierFreqList_v1730 interFreqCarrierFreqList_v1730; /**< ASN.1 interFreqCarrierFreqList-v1730；SEQUENCE OF InterFreqCarrierFreqInfo_v1730，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqList_v1760
 * @note ASN.1：InterFreqCarrierFreqList-v1760；源文件第 3518 行。
 * @note InterFreqCarrierFreqList-v1760 ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo-v1760
 */
struct InterFreqCarrierFreqList_v1760 {
    InterFreqCarrierFreqInfo_v1760* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4_ExtGroup5
 * @note ASN.1：SIB4_ExtGroup5；源文件第 3500 行。
 */
struct SIB4_ExtGroup5 {
    bool has_interFreqCarrierFreqList_v1760; /**< interFreqCarrierFreqList-v1760 是否存在。 */
    InterFreqCarrierFreqList_v1760 interFreqCarrierFreqList_v1760; /**< ASN.1 interFreqCarrierFreqList-v1760；SEQUENCE OF InterFreqCarrierFreqInfo_v1760，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqList_v1800
 * @note ASN.1：InterFreqCarrierFreqList-v1800；源文件第 3520 行。
 * @note InterFreqCarrierFreqList-v1800 ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo-v1800
 */
struct InterFreqCarrierFreqList_v1800 {
    InterFreqCarrierFreqInfo_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4_ExtGroup6
 * @note ASN.1：SIB4_ExtGroup6；源文件第 3503 行。
 */
struct SIB4_ExtGroup6 {
    bool has_interFreqCarrierFreqList_v1800; /**< interFreqCarrierFreqList-v1800 是否存在。 */
    InterFreqCarrierFreqList_v1800 interFreqCarrierFreqList_v1800; /**< ASN.1 interFreqCarrierFreqList-v1800；SEQUENCE OF InterFreqCarrierFreqInfo_v1800，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqList
 * @note ASN.1：InterFreqCarrierFreqList；源文件第 3508 行。
 * @note InterFreqCarrierFreqList ::= SEQUENCE OF (size 1..8) OF InterFreqCarrierFreqInfo
 */
struct InterFreqCarrierFreqList {
    InterFreqCarrierFreqInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB4
 * @note ASN.1：SIB4；源文件第 3484 行。
 * @note SIB4 ::= SEQUENCE { interFreqCarrierFreqList, lateNonCriticalExtension, interFreqCarri...
 */
struct SIB4 {
    InterFreqCarrierFreqList interFreqCarrierFreqList; /**< ASN.1 interFreqCarrierFreqList；SEQUENCE OF InterFreqCarrierFreqInfo，SIZE (1..8)。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB4_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB4_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SIB4_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    SIB4_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    SIB4_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    SIB4_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief InterFreqNeighCellList
 * @note ASN.1：InterFreqNeighCellList；源文件第 3594 行。
 * @note InterFreqNeighCellList ::= SEQUENCE OF (size 1..16) OF InterFreqNeighCellInfo
 */
struct InterFreqNeighCellList {
    InterFreqNeighCellInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief InterFreqExcludedCellList
 * @note ASN.1：InterFreqExcludedCellList；源文件第 3617 行。
 * @note InterFreqExcludedCellList ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct InterFreqExcludedCellList {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_ThreshX_Q
 * @note ASN.1：threshX-Q；源文件第 3541 行。
 * @note SEQUENCE { threshX-HighQ, threshX-LowQ }
 */
struct InterFreqCarrierFreqInfo_ThreshX_Q {
    ReselectionThresholdQ threshX_HighQ; /**< ASN.1 threshX-HighQ；INTEGER (0..31)，位宽 5 bit。 */
    ReselectionThresholdQ threshX_LowQ; /**< ASN.1 threshX-LowQ；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief InterFreqCarrierFreqInfo
 * @note ASN.1：InterFreqCarrierFreqInfo；源文件第 3522 行。
 * @note InterFreqCarrierFreqInfo ::= SEQUENCE { dl-CarrierFreq, frequencyBandList, frequencyBandListSUL, nrofSS-Bl...
 */
struct InterFreqCarrierFreqInfo {
    ARFCN_ValueNR dl_CarrierFreq; /**< ASN.1 dl-CarrierFreq；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_frequencyBandList; /**< frequencyBandList 是否存在。 */
    MultiFrequencyBandListNR_SIB frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF NR_MultiBandInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_frequencyBandListSUL; /**< frequencyBandListSUL 是否存在。 */
    MultiFrequencyBandListNR_SIB frequencyBandListSUL; /**< ASN.1 frequencyBandListSUL；SEQUENCE OF NR_MultiBandInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_nrofSS_BlocksToAverage; /**< nrofSS-BlocksToAverage 是否存在。 */
    int64_t nrofSS_BlocksToAverage; /**< ASN.1 nrofSS-BlocksToAverage；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_absThreshSS_BlocksConsolidation; /**< absThreshSS-BlocksConsolidation 是否存在。 */
    ThresholdNR absThreshSS_BlocksConsolidation; /**< ASN.1 absThreshSS-BlocksConsolidation；结构体；OPTIONAL。 */
    bool has_smtc; /**< smtc 是否存在。 */
    SSB_MTC smtc; /**< ASN.1 smtc；结构体；OPTIONAL。 */
    SubcarrierSpacing ssbSubcarrierSpacing; /**< ASN.1 ssbSubcarrierSpacing；枚举。 */
    bool has_ssb_ToMeasure; /**< ssb-ToMeasure 是否存在。 */
    SSB_ToMeasure ssb_ToMeasure; /**< ASN.1 ssb-ToMeasure；结构体；OPTIONAL。 */
    bool deriveSSB_IndexFromCell; /**< ASN.1 deriveSSB-IndexFromCell；BOOLEAN，1 bit。 */
    bool has_ss_RSSI_Measurement; /**< ss-RSSI-Measurement 是否存在。 */
    SS_RSSI_Measurement ss_RSSI_Measurement; /**< ASN.1 ss-RSSI-Measurement；结构体；OPTIONAL。 */
    Q_RxLevMin q_RxLevMin; /**< ASN.1 q-RxLevMin；INTEGER (-70..-22)，位宽 6 bit。 */
    bool has_q_RxLevMinSUL; /**< q-RxLevMinSUL 是否存在。 */
    Q_RxLevMin q_RxLevMinSUL; /**< ASN.1 q-RxLevMinSUL；INTEGER (-70..-22)，位宽 6 bit；OPTIONAL。 */
    bool has_q_QualMin; /**< q-QualMin 是否存在。 */
    Q_QualMin q_QualMin; /**< ASN.1 q-QualMin；INTEGER (-43..-12)，位宽 5 bit；OPTIONAL。 */
    bool has_p_Max; /**< p-Max 是否存在。 */
    P_Max p_Max; /**< ASN.1 p-Max；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    T_Reselection t_ReselectionNR; /**< ASN.1 t-ReselectionNR；INTEGER (0..7)，位宽 3 bit。 */
    bool has_t_ReselectionNR_SF; /**< t-ReselectionNR-SF 是否存在。 */
    SpeedStateScaleFactors t_ReselectionNR_SF; /**< ASN.1 t-ReselectionNR-SF；结构体；OPTIONAL。 */
    ReselectionThreshold threshX_HighP; /**< ASN.1 threshX-HighP；INTEGER (0..31)，位宽 5 bit。 */
    ReselectionThreshold threshX_LowP; /**< ASN.1 threshX-LowP；INTEGER (0..31)，位宽 5 bit。 */
    bool has_threshX_Q; /**< threshX-Q 是否存在。 */
    InterFreqCarrierFreqInfo_ThreshX_Q threshX_Q; /**< ASN.1 threshX-Q；结构体；OPTIONAL。 */
    bool has_cellReselectionPriority; /**< cellReselectionPriority 是否存在。 */
    CellReselectionPriority cellReselectionPriority; /**< ASN.1 cellReselectionPriority；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_cellReselectionSubPriority; /**< cellReselectionSubPriority 是否存在。 */
    CellReselectionSubPriority cellReselectionSubPriority; /**< ASN.1 cellReselectionSubPriority；枚举；OPTIONAL。 */
    Q_OffsetRange q_OffsetFreq; /**< ASN.1 q-OffsetFreq；枚举；DEFAULT Q_OffsetRange_dB0。 */
    bool has_interFreqNeighCellList; /**< interFreqNeighCellList 是否存在。 */
    InterFreqNeighCellList interFreqNeighCellList; /**< ASN.1 interFreqNeighCellList；SEQUENCE OF InterFreqNeighCellInfo，SIZE (1..16)；OPTIONAL。 */
    bool has_interFreqExcludedCellList; /**< interFreqExcludedCellList 是否存在。 */
    InterFreqExcludedCellList interFreqExcludedCellList; /**< ASN.1 interFreqExcludedCellList；SEQUENCE OF PCI_Range，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief InterFreqNeighCellList_v1610
 * @note ASN.1：InterFreqNeighCellList-v1610；源文件第 3596 行。
 * @note InterFreqNeighCellList-v1610 ::= SEQUENCE OF (size 1..16) OF InterFreqNeighCellInfo-v1610
 */
struct InterFreqNeighCellList_v1610 {
    InterFreqNeighCellInfo_v1610* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief InterFreqAllowedCellList_r16
 * @note ASN.1：InterFreqAllowedCellList-r16；源文件第 3619 行。
 * @note InterFreqAllowedCellList-r16 ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct InterFreqAllowedCellList_r16 {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_v1610
 * @note ASN.1：InterFreqCarrierFreqInfo-v1610；源文件第 3554 行。
 * @note InterFreqCarrierFreqInfo-v1610 ::= SEQUENCE { interFreqNeighCellList-v1610, smtc2-LP-r16, interFreqAllowedCellLi...
 */
struct InterFreqCarrierFreqInfo_v1610 {
    bool has_interFreqNeighCellList_v1610; /**< interFreqNeighCellList-v1610 是否存在。 */
    InterFreqNeighCellList_v1610 interFreqNeighCellList_v1610; /**< ASN.1 interFreqNeighCellList-v1610；SEQUENCE OF InterFreqNeighCellInfo_v1610，SIZE (1..16)；OPTIONAL。 */
    bool has_smtc2_LP_r16; /**< smtc2-LP-r16 是否存在。 */
    SSB_MTC2_LP_r16 smtc2_LP_r16; /**< ASN.1 smtc2-LP-r16；结构体；OPTIONAL。 */
    bool has_interFreqAllowedCellList_r16; /**< interFreqAllowedCellList-r16 是否存在。 */
    InterFreqAllowedCellList_r16 interFreqAllowedCellList_r16; /**< ASN.1 interFreqAllowedCellList-r16；SEQUENCE OF PCI_Range，SIZE (1..16)；OPTIONAL。 */
    bool has_ssb_PositionQCL_Common_r16; /**< ssb-PositionQCL-Common-r16 是否存在。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_Common_r16; /**< ASN.1 ssb-PositionQCL-Common-r16；枚举；OPTIONAL。 */
    bool has_interFreqCAG_CellList_r16; /**< interFreqCAG-CellList-r16 是否存在。 */
    InterFreqCAG_CellListPerPLMN_r16* interFreqCAG_CellList_r16_items; /**< ASN.1 interFreqCAG-CellList-r16；SEQUENCE OF InterFreqCAG_CellListPerPLMN_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t interFreqCAG_CellList_r16_count; /**< interFreqCAG-CellList-r16 元素个数。 */
};


/**
 * @brief InterFreqNeighHSDN_CellList_r17
 * @note ASN.1：InterFreqNeighHSDN-CellList-r17；源文件第 3592 行。
 * @note InterFreqNeighHSDN-CellList-r17 ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct InterFreqNeighHSDN_CellList_r17 {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief InterFreqNeighCellList_v1710
 * @note ASN.1：InterFreqNeighCellList-v1710；源文件第 3598 行。
 * @note InterFreqNeighCellList-v1710 ::= SEQUENCE OF (size 1..16) OF InterFreqNeighCellInfo-v1710
 */
struct InterFreqNeighCellList_v1710 {
    InterFreqNeighCellInfo_v1710* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_v1700
 * @note ASN.1：InterFreqCarrierFreqInfo-v1700；源文件第 3562 行。
 * @note InterFreqCarrierFreqInfo-v1700 ::= SEQUENCE { interFreqNeighHSDN-CellList-r17, highSpeedMeasInterFreq-r17, redCa...
 */
struct InterFreqCarrierFreqInfo_v1700 {
    bool has_interFreqNeighHSDN_CellList_r17; /**< interFreqNeighHSDN-CellList-r17 是否存在。 */
    InterFreqNeighHSDN_CellList_r17 interFreqNeighHSDN_CellList_r17; /**< ASN.1 interFreqNeighHSDN-CellList-r17；SEQUENCE OF PCI_Range，SIZE (1..16)；OPTIONAL。 */
    bool has_highSpeedMeasInterFreq_r17; /**< highSpeedMeasInterFreq-r17 是否存在。 */
    InterFreqCarrierFreqInfo_v1700_HighSpeedMeasInterFreq_r17 highSpeedMeasInterFreq_r17; /**< ASN.1 highSpeedMeasInterFreq-r17；枚举；OPTIONAL。 */
    bool has_redCapAccessAllowed_r17; /**< redCapAccessAllowed-r17 是否存在。 */
    InterFreqCarrierFreqInfo_v1700_RedCapAccessAllowed_r17 redCapAccessAllowed_r17; /**< ASN.1 redCapAccessAllowed-r17；枚举；OPTIONAL。 */
    bool has_ssb_PositionQCL_Common_r17; /**< ssb-PositionQCL-Common-r17 是否存在。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_Common_r17; /**< ASN.1 ssb-PositionQCL-Common-r17；枚举；OPTIONAL。 */
    bool has_interFreqNeighCellList_v1710; /**< interFreqNeighCellList-v1710 是否存在。 */
    InterFreqNeighCellList_v1710 interFreqNeighCellList_v1710; /**< ASN.1 interFreqNeighCellList-v1710；SEQUENCE OF InterFreqNeighCellInfo_v1710，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_v1720
 * @note ASN.1：InterFreqCarrierFreqInfo-v1720；源文件第 3570 行。
 * @note InterFreqCarrierFreqInfo-v1720 ::= SEQUENCE { smtc4list-r17 }
 */
struct InterFreqCarrierFreqInfo_v1720 {
    bool has_smtc4list_r17; /**< smtc4list-r17 是否存在。 */
    SSB_MTC4List_r17 smtc4list_r17; /**< ASN.1 smtc4list-r17；SEQUENCE OF SSB_MTC4_r17，SIZE (1..3)；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_v1730
 * @note ASN.1：InterFreqCarrierFreqInfo-v1730；源文件第 3574 行。
 * @note InterFreqCarrierFreqInfo-v1730 ::= SEQUENCE { channelAccessMode2-r17 }
 */
struct InterFreqCarrierFreqInfo_v1730 {
    bool has_channelAccessMode2_r17; /**< channelAccessMode2-r17 是否存在。 */
    InterFreqCarrierFreqInfo_v1730_ChannelAccessMode2_r17 channelAccessMode2_r17; /**< ASN.1 channelAccessMode2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_v1760
 * @note ASN.1：InterFreqCarrierFreqInfo-v1760；源文件第 3578 行。
 * @note InterFreqCarrierFreqInfo-v1760 ::= SEQUENCE { frequencyBandList-v1760, frequencyBandListSUL-v1760 }
 */
struct InterFreqCarrierFreqInfo_v1760 {
    bool has_frequencyBandList_v1760; /**< frequencyBandList-v1760 是否存在。 */
    MultiFrequencyBandListNR_SIB_v1760 frequencyBandList_v1760; /**< ASN.1 frequencyBandList-v1760；SEQUENCE OF NR_MultiBandInfo_v1760，SIZE (1..8)；OPTIONAL。 */
    bool has_frequencyBandListSUL_v1760; /**< frequencyBandListSUL-v1760 是否存在。 */
    MultiFrequencyBandListNR_SIB_v1760 frequencyBandListSUL_v1760; /**< ASN.1 frequencyBandListSUL-v1760；SEQUENCE OF NR_MultiBandInfo_v1760，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief PCI_Range
 * @note ASN.1：PCI-Range；源文件第 9117 行。
 * @note PCI-Range ::= SEQUENCE { start, range }
 */
struct PCI_Range {
    PhysCellId start; /**< ASN.1 start；INTEGER (0..1007)，位宽 10 bit。 */
    bool has_range; /**< range 是否存在。 */
    PCI_Range_2 range; /**< ASN.1 range；枚举；OPTIONAL。 */
};


/**
 * @brief InterFreqCarrierFreqInfo_v1800
 * @note ASN.1：InterFreqCarrierFreqInfo-v1800；源文件第 3583 行。
 * @note InterFreqCarrierFreqInfo-v1800 ::= SEQUENCE { frequencyBandListAerial-r18, mobileIAB-CellList-r18, mobileIAB-Fre...
 */
struct InterFreqCarrierFreqInfo_v1800 {
    bool has_frequencyBandListAerial_r18; /**< frequencyBandListAerial-r18 是否存在。 */
    MultiFrequencyBandListNR_Aerial_SIB_r18 frequencyBandListAerial_r18; /**< ASN.1 frequencyBandListAerial-r18；SEQUENCE OF NR_MultiBandInfoAerial_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_mobileIAB_CellList_r18; /**< mobileIAB-CellList-r18 是否存在。 */
    PCI_Range mobileIAB_CellList_r18; /**< ASN.1 mobileIAB-CellList-r18；结构体；OPTIONAL。 */
    bool has_mobileIAB_Freq_r18; /**< mobileIAB-Freq-r18 是否存在。 */
    InterFreqCarrierFreqInfo_v1800_MobileIAB_Freq_r18 mobileIAB_Freq_r18; /**< ASN.1 mobileIAB-Freq-r18；枚举；OPTIONAL。 */
    bool has_eRedCapAccessAllowed_r18; /**< eRedCapAccessAllowed-r18 是否存在。 */
    InterFreqCarrierFreqInfo_v1800_ERedCapAccessAllowed_r18 eRedCapAccessAllowed_r18; /**< ASN.1 eRedCapAccessAllowed-r18；枚举；OPTIONAL。 */
    bool has_tn_AreaIdList_r18; /**< tn-AreaIdList-r18 是否存在。 */
    TN_AreaId_r18* tn_AreaIdList_r18_items; /**< ASN.1 tn-AreaIdList-r18；SEQUENCE OF TN_AreaId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tn_AreaIdList_r18_count; /**< tn-AreaIdList-r18 元素个数。 */
    bool has_accessAllowed2RxXR_r18; /**< accessAllowed2RxXR-r18 是否存在。 */
    InterFreqCarrierFreqInfo_v1800_AccessAllowed2RxXR_r18 accessAllowed2RxXR_r18; /**< ASN.1 accessAllowed2RxXR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief InterFreqNeighCellInfo
 * @note ASN.1：InterFreqNeighCellInfo；源文件第 3600 行。
 * @note InterFreqNeighCellInfo ::= SEQUENCE { physCellId, q-OffsetCell, q-RxLevMinOffsetCell, q-RxLevMinOffsetCe...
 */
struct InterFreqNeighCellInfo {
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit。 */
    Q_OffsetRange q_OffsetCell; /**< ASN.1 q-OffsetCell；枚举。 */
    bool has_q_RxLevMinOffsetCell; /**< q-RxLevMinOffsetCell 是否存在。 */
    int64_t q_RxLevMinOffsetCell; /**< ASN.1 q-RxLevMinOffsetCell；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_q_RxLevMinOffsetCellSUL; /**< q-RxLevMinOffsetCellSUL 是否存在。 */
    int64_t q_RxLevMinOffsetCellSUL; /**< ASN.1 q-RxLevMinOffsetCellSUL；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_q_QualMinOffsetCell; /**< q-QualMinOffsetCell 是否存在。 */
    int64_t q_QualMinOffsetCell; /**< ASN.1 q-QualMinOffsetCell；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief InterFreqNeighCellInfo_v1610
 * @note ASN.1：InterFreqNeighCellInfo-v1610；源文件第 3609 行。
 * @note InterFreqNeighCellInfo-v1610 ::= SEQUENCE { ssb-PositionQCL-r16 }
 */
struct InterFreqNeighCellInfo_v1610 {
    bool has_ssb_PositionQCL_r16; /**< ssb-PositionQCL-r16 是否存在。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_r16; /**< ASN.1 ssb-PositionQCL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief InterFreqNeighCellInfo_v1710
 * @note ASN.1：InterFreqNeighCellInfo-v1710；源文件第 3613 行。
 * @note InterFreqNeighCellInfo-v1710 ::= SEQUENCE { ssb-PositionQCL-r17 }
 */
struct InterFreqNeighCellInfo_v1710 {
    bool has_ssb_PositionQCL_r17; /**< ssb-PositionQCL-r17 是否存在。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_r17; /**< ASN.1 ssb-PositionQCL-r17；枚举；OPTIONAL。 */
};


/**
 * @brief InterFreqCAG_CellListPerPLMN_r16
 * @note ASN.1：InterFreqCAG-CellListPerPLMN-r16；源文件第 3621 行。
 * @note InterFreqCAG-CellListPerPLMN-r16 ::= SEQUENCE { plmn-IdentityIndex-r16, cag-CellList-r16 }
 */
struct InterFreqCAG_CellListPerPLMN_r16 {
    int64_t plmn_IdentityIndex_r16; /**< ASN.1 plmn-IdentityIndex-r16；INTEGER (1..12)，位宽 4 bit。 */
    PCI_Range* cag_CellList_r16_items; /**< ASN.1 cag-CellList-r16；SEQUENCE OF PCI_Range，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t cag_CellList_r16_count; /**< cag-CellList-r16 元素个数。 */
};


/**
 * @brief CarrierFreqListEUTRA_v1610
 * @note ASN.1：CarrierFreqListEUTRA-v1610；源文件第 3649 行。
 * @note CarrierFreqListEUTRA-v1610 ::= SEQUENCE OF (size 1..8) OF CarrierFreqEUTRA-v1610
 */
struct CarrierFreqListEUTRA_v1610 {
    CarrierFreqEUTRA_v1610* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB5_ExtGroup1
 * @note ASN.1：SIB5_ExtGroup1；源文件第 3635 行。
 */
struct SIB5_ExtGroup1 {
    bool has_carrierFreqListEUTRA_v1610; /**< carrierFreqListEUTRA-v1610 是否存在。 */
    CarrierFreqListEUTRA_v1610 carrierFreqListEUTRA_v1610; /**< ASN.1 carrierFreqListEUTRA-v1610；SEQUENCE OF CarrierFreqEUTRA_v1610，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief CarrierFreqListEUTRA_v1700
 * @note ASN.1：CarrierFreqListEUTRA-v1700；源文件第 3651 行。
 * @note CarrierFreqListEUTRA-v1700 ::= SEQUENCE OF (size 1..8) OF CarrierFreqEUTRA-v1700
 */
struct CarrierFreqListEUTRA_v1700 {
    CarrierFreqEUTRA_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB5_ExtGroup2
 * @note ASN.1：SIB5_ExtGroup2；源文件第 3638 行。
 */
struct SIB5_ExtGroup2 {
    bool has_carrierFreqListEUTRA_v1700; /**< carrierFreqListEUTRA-v1700 是否存在。 */
    CarrierFreqListEUTRA_v1700 carrierFreqListEUTRA_v1700; /**< ASN.1 carrierFreqListEUTRA-v1700；SEQUENCE OF CarrierFreqEUTRA_v1700，SIZE (1..8)；OPTIONAL。 */
    bool has_idleModeMeasVoiceFallback_r17; /**< idleModeMeasVoiceFallback-r17 是否存在。 */
    SIB5_ExtGroup2_IdleModeMeasVoiceFallback_r17 idleModeMeasVoiceFallback_r17; /**< ASN.1 idleModeMeasVoiceFallback-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CarrierFreqListEUTRA_v1800
 * @note ASN.1：CarrierFreqListEUTRA-v1800；源文件第 3653 行。
 * @note CarrierFreqListEUTRA-v1800 ::= SEQUENCE OF (size 1..8) OF CarrierFreqEUTRA-v1800
 */
struct CarrierFreqListEUTRA_v1800 {
    CarrierFreqEUTRA_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB5_ExtGroup3
 * @note ASN.1：SIB5_ExtGroup3；源文件第 3642 行。
 */
struct SIB5_ExtGroup3 {
    bool has_carrierFreqListEUTRA_v1800; /**< carrierFreqListEUTRA-v1800 是否存在。 */
    CarrierFreqListEUTRA_v1800 carrierFreqListEUTRA_v1800; /**< ASN.1 carrierFreqListEUTRA-v1800；SEQUENCE OF CarrierFreqEUTRA_v1800，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief CarrierFreqListEUTRA
 * @note ASN.1：CarrierFreqListEUTRA；源文件第 3647 行。
 * @note CarrierFreqListEUTRA ::= SEQUENCE OF (size 1..8) OF CarrierFreqEUTRA
 */
struct CarrierFreqListEUTRA {
    CarrierFreqEUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB5
 * @note ASN.1：SIB5；源文件第 3629 行。
 * @note SIB5 ::= SEQUENCE { carrierFreqListEUTRA, t-ReselectionEUTRA, t-ReselectionEUTRA-SF, l...
 */
struct SIB5 {
    bool has_carrierFreqListEUTRA; /**< carrierFreqListEUTRA 是否存在。 */
    CarrierFreqListEUTRA carrierFreqListEUTRA; /**< ASN.1 carrierFreqListEUTRA；SEQUENCE OF CarrierFreqEUTRA，SIZE (1..8)；OPTIONAL。 */
    T_Reselection t_ReselectionEUTRA; /**< ASN.1 t-ReselectionEUTRA；INTEGER (0..7)，位宽 3 bit。 */
    bool has_t_ReselectionEUTRA_SF; /**< t-ReselectionEUTRA-SF 是否存在。 */
    SpeedStateScaleFactors t_ReselectionEUTRA_SF; /**< ASN.1 t-ReselectionEUTRA-SF；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB5_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB5_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SIB5_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief EUTRA_FreqExcludedCellList
 * @note ASN.1：EUTRA-FreqExcludedCellList；源文件第 3690 行。
 * @note EUTRA-FreqExcludedCellList ::= SEQUENCE OF (size 1..16) OF EUTRA-PhysCellIdRange
 */
struct EUTRA_FreqExcludedCellList {
    EUTRA_PhysCellIdRange* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief EUTRA_FreqNeighCellList
 * @note ASN.1：EUTRA-FreqNeighCellList；源文件第 3692 行。
 * @note EUTRA-FreqNeighCellList ::= SEQUENCE OF (size 1..8) OF EUTRA-FreqNeighCellInfo
 */
struct EUTRA_FreqNeighCellList {
    EUTRA_FreqNeighCellInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief EUTRA_MultiBandInfoList
 * @note ASN.1：EUTRA-MultiBandInfoList；源文件第 21436 行。
 * @note EUTRA-MultiBandInfoList ::= SEQUENCE OF (size 1..8) OF EUTRA-MultiBandInfo
 */
struct EUTRA_MultiBandInfoList {
    EUTRA_MultiBandInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CarrierFreqEUTRA_ThreshX_Q
 * @note ASN.1：threshX-Q；源文件第 3669 行。
 * @note SEQUENCE { threshX-HighQ, threshX-LowQ }
 */
struct CarrierFreqEUTRA_ThreshX_Q {
    ReselectionThresholdQ threshX_HighQ; /**< ASN.1 threshX-HighQ；INTEGER (0..31)，位宽 5 bit。 */
    ReselectionThresholdQ threshX_LowQ; /**< ASN.1 threshX-LowQ；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief CarrierFreqEUTRA
 * @note ASN.1：CarrierFreqEUTRA；源文件第 3655 行。
 * @note CarrierFreqEUTRA ::= SEQUENCE { carrierFreq, eutra-multiBandInfoList, eutra-FreqNeighCellList, eut...
 */
struct CarrierFreqEUTRA {
    ARFCN_ValueEUTRA carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..262143)，位宽 18 bit。 */
    bool has_eutra_multiBandInfoList; /**< eutra-multiBandInfoList 是否存在。 */
    EUTRA_MultiBandInfoList eutra_multiBandInfoList; /**< ASN.1 eutra-multiBandInfoList；SEQUENCE OF EUTRA_MultiBandInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_eutra_FreqNeighCellList; /**< eutra-FreqNeighCellList 是否存在。 */
    EUTRA_FreqNeighCellList eutra_FreqNeighCellList; /**< ASN.1 eutra-FreqNeighCellList；SEQUENCE OF EUTRA_FreqNeighCellInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_eutra_ExcludedCellList; /**< eutra-ExcludedCellList 是否存在。 */
    EUTRA_FreqExcludedCellList eutra_ExcludedCellList; /**< ASN.1 eutra-ExcludedCellList；SEQUENCE OF EUTRA_PhysCellIdRange，SIZE (1..16)；OPTIONAL。 */
    EUTRA_AllowedMeasBandwidth allowedMeasBandwidth; /**< ASN.1 allowedMeasBandwidth；枚举。 */
    EUTRA_PresenceAntennaPort1 presenceAntennaPort1; /**< ASN.1 presenceAntennaPort1；BOOLEAN，1 bit。 */
    bool has_cellReselectionPriority; /**< cellReselectionPriority 是否存在。 */
    CellReselectionPriority cellReselectionPriority; /**< ASN.1 cellReselectionPriority；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_cellReselectionSubPriority; /**< cellReselectionSubPriority 是否存在。 */
    CellReselectionSubPriority cellReselectionSubPriority; /**< ASN.1 cellReselectionSubPriority；枚举；OPTIONAL。 */
    ReselectionThreshold threshX_High; /**< ASN.1 threshX-High；INTEGER (0..31)，位宽 5 bit。 */
    ReselectionThreshold threshX_Low; /**< ASN.1 threshX-Low；INTEGER (0..31)，位宽 5 bit。 */
    int64_t q_RxLevMin; /**< ASN.1 q-RxLevMin；INTEGER (-70..-22)，位宽 6 bit。 */
    int64_t q_QualMin; /**< ASN.1 q-QualMin；INTEGER (-34..-3)，位宽 5 bit。 */
    int64_t p_MaxEUTRA; /**< ASN.1 p-MaxEUTRA；INTEGER (-30..33)，位宽 6 bit。 */
    bool has_threshX_Q; /**< threshX-Q 是否存在。 */
    CarrierFreqEUTRA_ThreshX_Q threshX_Q; /**< ASN.1 threshX-Q；结构体；OPTIONAL。 */
};


/**
 * @brief CarrierFreqEUTRA_v1610
 * @note ASN.1：CarrierFreqEUTRA-v1610；源文件第 3675 行。
 * @note CarrierFreqEUTRA-v1610 ::= SEQUENCE { highSpeedEUTRACarrier-r16 }
 */
struct CarrierFreqEUTRA_v1610 {
    bool has_highSpeedEUTRACarrier_r16; /**< highSpeedEUTRACarrier-r16 是否存在。 */
    CarrierFreqEUTRA_v1610_HighSpeedEUTRACarrier_r16 highSpeedEUTRACarrier_r16; /**< ASN.1 highSpeedEUTRACarrier-r16；枚举；OPTIONAL。 */
};


/**
 * @brief EUTRA_FreqNeighHSDN_CellList_r17
 * @note ASN.1：EUTRA-FreqNeighHSDN-CellList-r17；源文件第 3688 行。
 * @note EUTRA-FreqNeighHSDN-CellList-r17 ::= SEQUENCE OF (size 1..8) OF EUTRA-PhysCellIdRange
 */
struct EUTRA_FreqNeighHSDN_CellList_r17 {
    EUTRA_PhysCellIdRange* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CarrierFreqEUTRA_v1700
 * @note ASN.1：CarrierFreqEUTRA-v1700；源文件第 3679 行。
 * @note CarrierFreqEUTRA-v1700 ::= SEQUENCE { eutra-FreqNeighHSDN-CellList-r17 }
 */
struct CarrierFreqEUTRA_v1700 {
    bool has_eutra_FreqNeighHSDN_CellList_r17; /**< eutra-FreqNeighHSDN-CellList-r17 是否存在。 */
    EUTRA_FreqNeighHSDN_CellList_r17 eutra_FreqNeighHSDN_CellList_r17; /**< ASN.1 eutra-FreqNeighHSDN-CellList-r17；SEQUENCE OF EUTRA_PhysCellIdRange，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief EUTRA_MultiBandInfoListAerial_r18
 * @note ASN.1：EUTRA-MultiBandInfoListAerial-r18；源文件第 21446 行。
 * @note EUTRA-MultiBandInfoListAerial-r18 ::= SEQUENCE OF (size 1..8) OF EUTRA-MultiBandInfoAerial-r18
 */
struct EUTRA_MultiBandInfoListAerial_r18 {
    EUTRA_MultiBandInfoAerial_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CarrierFreqEUTRA_v1800
 * @note ASN.1：CarrierFreqEUTRA-v1800；源文件第 3683 行。
 * @note CarrierFreqEUTRA-v1800 ::= SEQUENCE { eutra-MultiBandInfoListAerial-r18, tn-AreaIdList-r18 }
 */
struct CarrierFreqEUTRA_v1800 {
    bool has_eutra_MultiBandInfoListAerial_r18; /**< eutra-MultiBandInfoListAerial-r18 是否存在。 */
    EUTRA_MultiBandInfoListAerial_r18 eutra_MultiBandInfoListAerial_r18; /**< ASN.1 eutra-MultiBandInfoListAerial-r18；SEQUENCE OF EUTRA_MultiBandInfoAerial_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_tn_AreaIdList_r18; /**< tn-AreaIdList-r18 是否存在。 */
    TN_AreaId_r18* tn_AreaIdList_r18_items; /**< ASN.1 tn-AreaIdList-r18；SEQUENCE OF TN_AreaId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tn_AreaIdList_r18_count; /**< tn-AreaIdList-r18 元素个数。 */
};


/**
 * @brief EUTRA_FreqNeighCellInfo
 * @note ASN.1：EUTRA-FreqNeighCellInfo；源文件第 3694 行。
 * @note EUTRA-FreqNeighCellInfo ::= SEQUENCE { physCellId, dummy, q-RxLevMinOffsetCell, q-QualMinOffsetCell }
 */
struct EUTRA_FreqNeighCellInfo {
    EUTRA_PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..503)，位宽 9 bit。 */
    EUTRA_Q_OffsetRange dummy; /**< ASN.1 dummy；枚举。 */
    bool has_q_RxLevMinOffsetCell; /**< q-RxLevMinOffsetCell 是否存在。 */
    int64_t q_RxLevMinOffsetCell; /**< ASN.1 q-RxLevMinOffsetCell；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_q_QualMinOffsetCell; /**< q-QualMinOffsetCell 是否存在。 */
    int64_t q_QualMinOffsetCell; /**< ASN.1 q-QualMinOffsetCell；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SIB6
 * @note ASN.1：SIB6；源文件第 3704 行。
 * @note SIB6 ::= SEQUENCE { messageIdentifier, serialNumber, warningType, lateNonCriticalExten...
 */
struct SIB6 {
    BitString messageIdentifier; /**< ASN.1 messageIdentifier；SIZE (16)，定长。 */
    BitString serialNumber; /**< ASN.1 serialNumber；SIZE (16)，定长。 */
    OctetString warningType; /**< ASN.1 warningType；SIZE (2)，定长。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB7
 * @note ASN.1：SIB7；源文件第 3715 行。
 * @note SIB7 ::= SEQUENCE { messageIdentifier, serialNumber, warningMessageSegmentType, warnin...
 */
struct SIB7 {
    BitString messageIdentifier; /**< ASN.1 messageIdentifier；SIZE (16)，定长。 */
    BitString serialNumber; /**< ASN.1 serialNumber；SIZE (16)，定长。 */
    SIB7_WarningMessageSegmentType warningMessageSegmentType; /**< ASN.1 warningMessageSegmentType；枚举。 */
    int64_t warningMessageSegmentNumber; /**< ASN.1 warningMessageSegmentNumber；INTEGER (0..63)，位宽 6 bit。 */
    OctetString warningMessageSegment; /**< ASN.1 warningMessageSegment；SIZE 无上界（半约束长度）。 */
    bool has_dataCodingScheme; /**< dataCodingScheme 是否存在。 */
    OctetString dataCodingScheme; /**< ASN.1 dataCodingScheme；SIZE (1)，定长；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB8
 * @note ASN.1：SIB8；源文件第 3729 行。
 * @note SIB8 ::= SEQUENCE { messageIdentifier, serialNumber, warningMessageSegmentType, warnin...
 */
struct SIB8 {
    BitString messageIdentifier; /**< ASN.1 messageIdentifier；SIZE (16)，定长。 */
    BitString serialNumber; /**< ASN.1 serialNumber；SIZE (16)，定长。 */
    SIB8_WarningMessageSegmentType warningMessageSegmentType; /**< ASN.1 warningMessageSegmentType；枚举。 */
    int64_t warningMessageSegmentNumber; /**< ASN.1 warningMessageSegmentNumber；INTEGER (0..63)，位宽 6 bit。 */
    OctetString warningMessageSegment; /**< ASN.1 warningMessageSegment；SIZE 无上界（半约束长度）。 */
    bool has_dataCodingScheme; /**< dataCodingScheme 是否存在。 */
    OctetString dataCodingScheme; /**< ASN.1 dataCodingScheme；SIZE (1)，定长；OPTIONAL。 */
    bool has_warningAreaCoordinatesSegment; /**< warningAreaCoordinatesSegment 是否存在。 */
    OctetString warningAreaCoordinatesSegment; /**< ASN.1 warningAreaCoordinatesSegment；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB9_ExtGroup1
 * @note ASN.1：SIB9_ExtGroup1；源文件第 3753 行。
 */
struct SIB9_ExtGroup1 {
    bool has_referenceTimeInfo_r16; /**< referenceTimeInfo-r16 是否存在。 */
    ReferenceTimeInfo_r16 referenceTimeInfo_r16; /**< ASN.1 referenceTimeInfo-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SIB9_ExtGroup2
 * @note ASN.1：SIB9_ExtGroup2；源文件第 3756 行。
 */
struct SIB9_ExtGroup2 {
    bool has_eventID_TSS_r18; /**< eventID-TSS-r18 是否存在。 */
    int64_t eventID_TSS_r18; /**< ASN.1 eventID-TSS-r18；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief SIB9_TimeInfo
 * @note ASN.1：timeInfo；源文件第 3745 行。
 * @note SEQUENCE { timeInfoUTC, dayLightSavingTime, leapSeconds, localTimeOffset }
 */
struct SIB9_TimeInfo {
    int64_t timeInfoUTC; /**< ASN.1 timeInfoUTC；INTEGER (0..549755813887)，位宽 39 bit。 */
    bool has_dayLightSavingTime; /**< dayLightSavingTime 是否存在。 */
    BitString dayLightSavingTime; /**< ASN.1 dayLightSavingTime；SIZE (2)，定长；OPTIONAL。 */
    bool has_leapSeconds; /**< leapSeconds 是否存在。 */
    int64_t leapSeconds; /**< ASN.1 leapSeconds；INTEGER (-127..128)，位宽 8 bit；OPTIONAL。 */
    bool has_localTimeOffset; /**< localTimeOffset 是否存在。 */
    int64_t localTimeOffset; /**< ASN.1 localTimeOffset；INTEGER (-63..64)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SIB9
 * @note ASN.1：SIB9；源文件第 3744 行。
 * @note SIB9 ::= SEQUENCE { timeInfo, lateNonCriticalExtension, referenceTimeInfo-r16, eventID...
 */
struct SIB9 {
    bool has_timeInfo; /**< timeInfo 是否存在。 */
    SIB9_TimeInfo timeInfo; /**< ASN.1 timeInfo；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB9_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB9_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief HRNN_List_r16
 * @note ASN.1：HRNN-List-r16；源文件第 3770 行。
 * @note HRNN-List-r16 ::= SEQUENCE OF (size 1..12) OF HRNN-r16
 */
struct HRNN_List_r16 {
    HRNN_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB10_r16
 * @note ASN.1：SIB10-r16；源文件第 3764 行。
 * @note SIB10-r16 ::= SEQUENCE { hrnn-List-r16, lateNonCriticalExtension }
 */
struct SIB10_r16 {
    bool has_hrnn_List_r16; /**< hrnn-List-r16 是否存在。 */
    HRNN_List_r16 hrnn_List_r16; /**< ASN.1 hrnn-List-r16；SEQUENCE OF HRNN_r16，SIZE (1..12)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief HRNN_r16
 * @note ASN.1：HRNN-r16；源文件第 3772 行。
 * @note HRNN-r16 ::= SEQUENCE { hrnn-r16 }
 */
struct HRNN_r16 {
    bool has_hrnn_r16; /**< hrnn-r16 是否存在。 */
    OctetString hrnn_r16; /**< ASN.1 hrnn-r16；SIZE (1..48)；OPTIONAL。 */
};


/**
 * @brief MeasIdleConfigSIB_r16_ExtGroup1
 * @note ASN.1：MeasIdleConfigSIB_r16_ExtGroup1；源文件第 7513 行。
 */
struct MeasIdleConfigSIB_r16_ExtGroup1 {
    bool has_measReselectionCarrierListNR_r18; /**< measReselectionCarrierListNR-r18 是否存在。 */
    MeasReselectionCarrierNR_r18* measReselectionCarrierListNR_r18_items; /**< ASN.1 measReselectionCarrierListNR-r18；SEQUENCE OF MeasReselectionCarrierNR_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measReselectionCarrierListNR_r18_count; /**< measReselectionCarrierListNR-r18 元素个数。 */
    bool has_measIdleValidityDuration_r18; /**< measIdleValidityDuration-r18 是否存在。 */
    MeasurementValidityDuration_r18 measIdleValidityDuration_r18; /**< ASN.1 measIdleValidityDuration-r18；枚举；OPTIONAL。 */
    bool has_measReselectionValidityDuration_r18; /**< measReselectionValidityDuration-r18 是否存在。 */
    MeasurementValidityDuration_r18 measReselectionValidityDuration_r18; /**< ASN.1 measReselectionValidityDuration-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MeasIdleConfigSIB_r16
 * @note ASN.1：MeasIdleConfigSIB-r16；源文件第 7509 行。
 * @note MeasIdleConfigSIB-r16 ::= SEQUENCE { measIdleCarrierListNR-r16, measIdleCarrierListEUTRA-r16, measResel...
 */
struct MeasIdleConfigSIB_r16 {
    bool has_measIdleCarrierListNR_r16; /**< measIdleCarrierListNR-r16 是否存在。 */
    MeasIdleCarrierNR_r16* measIdleCarrierListNR_r16_items; /**< ASN.1 measIdleCarrierListNR-r16；SEQUENCE OF MeasIdleCarrierNR_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measIdleCarrierListNR_r16_count; /**< measIdleCarrierListNR-r16 元素个数。 */
    bool has_measIdleCarrierListEUTRA_r16; /**< measIdleCarrierListEUTRA-r16 是否存在。 */
    MeasIdleCarrierEUTRA_r16* measIdleCarrierListEUTRA_r16_items; /**< ASN.1 measIdleCarrierListEUTRA-r16；SEQUENCE OF MeasIdleCarrierEUTRA_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measIdleCarrierListEUTRA_r16_count; /**< measIdleCarrierListEUTRA-r16 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasIdleConfigSIB_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SIB11_r16
 * @note ASN.1：SIB11-r16；源文件第 3779 行。
 * @note SIB11-r16 ::= SEQUENCE { measIdleConfigSIB-r16, lateNonCriticalExtension }
 */
struct SIB11_r16 {
    bool has_measIdleConfigSIB_r16; /**< measIdleConfigSIB-r16 是否存在。 */
    MeasIdleConfigSIB_r16 measIdleConfigSIB_r16; /**< ASN.1 measIdleConfigSIB-r16；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB12_r16
 * @note ASN.1：SIB12-r16；源文件第 3788 行。
 * @note SIB12-r16 ::= SEQUENCE { segmentNumber-r16, segmentType-r16, segmentContainer-r16 }
 */
struct SIB12_r16 {
    int64_t segmentNumber_r16; /**< ASN.1 segmentNumber-r16；INTEGER (0..63)，位宽 6 bit。 */
    SIB12_r16_SegmentType_r16 segmentType_r16; /**< ASN.1 segmentType-r16；枚举。 */
    OctetString segmentContainer_r16; /**< ASN.1 segmentContainer-r16；SIZE 无上界（半约束长度）。 */
};


/**
 * @brief SL_DiscConfigCommon_r17
 * @note ASN.1：SL-DiscConfigCommon-r17；源文件第 3836 行。
 * @note SL-DiscConfigCommon-r17 ::= SEQUENCE { sl-RelayUE-ConfigCommon-r17, sl-RemoteUE-ConfigCommon-r17 }
 */
struct SL_DiscConfigCommon_r17 {
    SL_RelayUE_Config_r17 sl_RelayUE_ConfigCommon_r17; /**< ASN.1 sl-RelayUE-ConfigCommon-r17；结构体。 */
    SL_RemoteUE_Config_r17 sl_RemoteUE_ConfigCommon_r17; /**< ASN.1 sl-RemoteUE-ConfigCommon-r17；结构体。 */
};


/**
 * @brief UE_TimersAndConstantsRemoteUE_r17
 * @note ASN.1：UE-TimersAndConstantsRemoteUE-r17；源文件第 13883 行。
 * @note UE-TimersAndConstantsRemoteUE-r17 ::= SEQUENCE { t300-RemoteUE-r17, t301-RemoteUE-r17, t319-RemoteUE-r17 }
 */
struct UE_TimersAndConstantsRemoteUE_r17 {
    bool has_t300_RemoteUE_r17; /**< t300-RemoteUE-r17 是否存在。 */
    UE_TimersAndConstantsRemoteUE_r17_T300_RemoteUE_r17 t300_RemoteUE_r17; /**< ASN.1 t300-RemoteUE-r17；枚举；OPTIONAL。 */
    bool has_t301_RemoteUE_r17; /**< t301-RemoteUE-r17 是否存在。 */
    UE_TimersAndConstantsRemoteUE_r17_T301_RemoteUE_r17 t301_RemoteUE_r17; /**< ASN.1 t301-RemoteUE-r17；枚举；OPTIONAL。 */
    bool has_t319_RemoteUE_r17; /**< t319-RemoteUE-r17 是否存在。 */
    UE_TimersAndConstantsRemoteUE_r17_T319_RemoteUE_r17 t319_RemoteUE_r17; /**< ASN.1 t319-RemoteUE-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SIB12_IEs_r16_ExtGroup1
 * @note ASN.1：SIB12_IEs_r16_ExtGroup1；源文件第 3798 行。
 */
struct SIB12_IEs_r16_ExtGroup1 {
    bool has_sl_DRX_ConfigCommonGC_BC_r17; /**< sl-DRX-ConfigCommonGC-BC-r17 是否存在。 */
    SL_DRX_ConfigGC_BC_r17 sl_DRX_ConfigCommonGC_BC_r17; /**< ASN.1 sl-DRX-ConfigCommonGC-BC-r17；结构体；OPTIONAL。 */
    bool has_sl_DiscConfigCommon_r17; /**< sl-DiscConfigCommon-r17 是否存在。 */
    SL_DiscConfigCommon_r17 sl_DiscConfigCommon_r17; /**< ASN.1 sl-DiscConfigCommon-r17；结构体；OPTIONAL。 */
    bool has_sl_L2U2N_Relay_r17; /**< sl-L2U2N-Relay-r17 是否存在。 */
    SIB12_IEs_r16_ExtGroup1_Sl_L2U2N_Relay_r17 sl_L2U2N_Relay_r17; /**< ASN.1 sl-L2U2N-Relay-r17；枚举；OPTIONAL。 */
    bool has_sl_NonRelayDiscovery_r17; /**< sl-NonRelayDiscovery-r17 是否存在。 */
    SIB12_IEs_r16_ExtGroup1_Sl_NonRelayDiscovery_r17 sl_NonRelayDiscovery_r17; /**< ASN.1 sl-NonRelayDiscovery-r17；枚举；OPTIONAL。 */
    bool has_sl_L3U2N_RelayDiscovery_r17; /**< sl-L3U2N-RelayDiscovery-r17 是否存在。 */
    SIB12_IEs_r16_ExtGroup1_Sl_L3U2N_RelayDiscovery_r17 sl_L3U2N_RelayDiscovery_r17; /**< ASN.1 sl-L3U2N-RelayDiscovery-r17；枚举；OPTIONAL。 */
    bool has_sl_TimersAndConstantsRemoteUE_r17; /**< sl-TimersAndConstantsRemoteUE-r17 是否存在。 */
    UE_TimersAndConstantsRemoteUE_r17 sl_TimersAndConstantsRemoteUE_r17; /**< ASN.1 sl-TimersAndConstantsRemoteUE-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_DiscConfigCommon_v1800
 * @note ASN.1：SL-DiscConfigCommon-v1800；源文件第 3841 行。
 * @note SL-DiscConfigCommon-v1800 ::= SEQUENCE { sl-RelayUE-ConfigCommonU2U-r18, sl-RemoteUE-ConfigCommonU2U-r18 }
 */
struct SL_DiscConfigCommon_v1800 {
    SL_RelayUE_ConfigU2U_r18 sl_RelayUE_ConfigCommonU2U_r18; /**< ASN.1 sl-RelayUE-ConfigCommonU2U-r18；结构体。 */
    SL_RemoteUE_ConfigU2U_r18 sl_RemoteUE_ConfigCommonU2U_r18; /**< ASN.1 sl-RemoteUE-ConfigCommonU2U-r18；结构体。 */
};


/**
 * @brief SIB12_IEs_r16_ExtGroup2
 * @note ASN.1：SIB12_IEs_r16_ExtGroup2；源文件第 3806 行。
 */
struct SIB12_IEs_r16_ExtGroup2 {
    bool has_sl_FreqInfoListSizeExt_v1800; /**< sl-FreqInfoListSizeExt-v1800 是否存在。 */
    SL_FreqConfigCommon_r16* sl_FreqInfoListSizeExt_v1800_items; /**< ASN.1 sl-FreqInfoListSizeExt-v1800；SEQUENCE OF SL_FreqConfigCommon_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqInfoListSizeExt_v1800_count; /**< sl-FreqInfoListSizeExt-v1800 元素个数。 */
    bool has_sl_RLC_BearerConfigListSizeExt_v1800; /**< sl-RLC-BearerConfigListSizeExt-v1800 是否存在。 */
    SL_RLC_BearerConfig_r16* sl_RLC_BearerConfigListSizeExt_v1800_items; /**< ASN.1 sl-RLC-BearerConfigListSizeExt-v1800；SEQUENCE OF SL_RLC_BearerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_BearerConfigListSizeExt_v1800_count; /**< sl-RLC-BearerConfigListSizeExt-v1800 元素个数。 */
    bool has_sl_SyncFreqList_r18; /**< sl-SyncFreqList-r18 是否存在。 */
    SL_Freq_Id_r16* sl_SyncFreqList_r18_items; /**< ASN.1 sl-SyncFreqList-r18；SEQUENCE OF SL_Freq_Id_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_SyncFreqList_r18_count; /**< sl-SyncFreqList-r18 元素个数。 */
    bool has_sl_SyncTxMultiFreq_r18; /**< sl-SyncTxMultiFreq-r18 是否存在。 */
    SIB12_IEs_r16_ExtGroup2_Sl_SyncTxMultiFreq_r18 sl_SyncTxMultiFreq_r18; /**< ASN.1 sl-SyncTxMultiFreq-r18；枚举；OPTIONAL。 */
    bool has_sl_MaxTransPowerCA_r18; /**< sl-MaxTransPowerCA-r18 是否存在。 */
    P_Max sl_MaxTransPowerCA_r18; /**< ASN.1 sl-MaxTransPowerCA-r18；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_sl_DiscConfigCommon_v1800; /**< sl-DiscConfigCommon-v1800 是否存在。 */
    SL_DiscConfigCommon_v1800 sl_DiscConfigCommon_v1800; /**< ASN.1 sl-DiscConfigCommon-v1800；结构体；OPTIONAL。 */
    bool has_sl_L2U2U_Relay_r18; /**< sl-L2U2U-Relay-r18 是否存在。 */
    SIB12_IEs_r16_ExtGroup2_Sl_L2U2U_Relay_r18 sl_L2U2U_Relay_r18; /**< ASN.1 sl-L2U2U-Relay-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SL_NR_AnchorCarrierFreqList_r16
 * @note ASN.1：SL-NR-AnchorCarrierFreqList-r16；源文件第 3832 行。
 * @note SL-NR-AnchorCarrierFreqList-r16 ::= SEQUENCE OF (size 1..8) OF ARFCN-ValueNR
 */
struct SL_NR_AnchorCarrierFreqList_r16 {
    ARFCN_ValueNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_EUTRA_AnchorCarrierFreqList_r16
 * @note ASN.1：SL-EUTRA-AnchorCarrierFreqList-r16；源文件第 3834 行。
 * @note SL-EUTRA-AnchorCarrierFreqList-r16 ::= SEQUENCE OF (size 1..8) OF ARFCN-ValueEUTRA
 */
struct SL_EUTRA_AnchorCarrierFreqList_r16 {
    ARFCN_ValueEUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_MeasIdList_r16
 * @note ASN.1：SL-MeasIdList-r16；源文件第 22624 行。
 * @note SL-MeasIdList-r16 ::= SEQUENCE OF (size 1..64) OF SL-MeasIdInfo-r16
 */
struct SL_MeasIdList_r16 {
    SL_MeasIdInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_MeasObjectList_r16
 * @note ASN.1：SL-MeasObjectList-r16；源文件第 22638 行。
 * @note SL-MeasObjectList-r16 ::= SEQUENCE OF (size 1..64) OF SL-MeasObjectInfo-r16
 */
struct SL_MeasObjectList_r16 {
    SL_MeasObjectInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_QuantityConfig_r16
 * @note ASN.1：SL-QuantityConfig-r16；源文件第 22844 行。
 * @note SL-QuantityConfig-r16 ::= SEQUENCE { sl-FilterCoefficientDMRS-r16 }
 */
struct SL_QuantityConfig_r16 {
    FilterCoefficient sl_FilterCoefficientDMRS_r16; /**< ASN.1 sl-FilterCoefficientDMRS-r16；枚举；DEFAULT FilterCoefficient_fc4。 */
};


/**
 * @brief SL_ReportConfigList_r16
 * @note ASN.1：SL-ReportConfigList-r16；源文件第 22925 行。
 * @note SL-ReportConfigList-r16 ::= SEQUENCE OF (size 1..64) OF SL-ReportConfigInfo-r16
 */
struct SL_ReportConfigList_r16 {
    SL_ReportConfigInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_MeasConfigCommon_r16
 * @note ASN.1：SL-MeasConfigCommon-r16；源文件第 22587 行。
 * @note SL-MeasConfigCommon-r16 ::= SEQUENCE { sl-MeasObjectListCommon-r16, sl-ReportConfigListCommon-r16, sl-Mea...
 */
struct SL_MeasConfigCommon_r16 {
    bool has_sl_MeasObjectListCommon_r16; /**< sl-MeasObjectListCommon-r16 是否存在。 */
    SL_MeasObjectList_r16 sl_MeasObjectListCommon_r16; /**< ASN.1 sl-MeasObjectListCommon-r16；SEQUENCE OF SL_MeasObjectInfo_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_ReportConfigListCommon_r16; /**< sl-ReportConfigListCommon-r16 是否存在。 */
    SL_ReportConfigList_r16 sl_ReportConfigListCommon_r16; /**< ASN.1 sl-ReportConfigListCommon-r16；SEQUENCE OF SL_ReportConfigInfo_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_MeasIdListCommon_r16; /**< sl-MeasIdListCommon-r16 是否存在。 */
    SL_MeasIdList_r16 sl_MeasIdListCommon_r16; /**< ASN.1 sl-MeasIdListCommon-r16；SEQUENCE OF SL_MeasIdInfo_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_QuantityConfigCommon_r16; /**< sl-QuantityConfigCommon-r16 是否存在。 */
    SL_QuantityConfig_r16 sl_QuantityConfigCommon_r16; /**< ASN.1 sl-QuantityConfigCommon-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_ConfigCommonNR_r16
 * @note ASN.1：SL-ConfigCommonNR-r16；源文件第 3817 行。
 * @note SL-ConfigCommonNR-r16 ::= SEQUENCE { sl-FreqInfoList-r16, sl-UE-SelectedConfig-r16, sl-NR-AnchorCarrier...
 */
struct SL_ConfigCommonNR_r16 {
    bool has_sl_FreqInfoList_r16; /**< sl-FreqInfoList-r16 是否存在。 */
    SL_FreqConfigCommon_r16* sl_FreqInfoList_r16_items; /**< ASN.1 sl-FreqInfoList-r16；SEQUENCE OF SL_FreqConfigCommon_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqInfoList_r16_count; /**< sl-FreqInfoList-r16 元素个数。 */
    bool has_sl_UE_SelectedConfig_r16; /**< sl-UE-SelectedConfig-r16 是否存在。 */
    SL_UE_SelectedConfig_r16 sl_UE_SelectedConfig_r16; /**< ASN.1 sl-UE-SelectedConfig-r16；结构体；OPTIONAL。 */
    bool has_sl_NR_AnchorCarrierFreqList_r16; /**< sl-NR-AnchorCarrierFreqList-r16 是否存在。 */
    SL_NR_AnchorCarrierFreqList_r16 sl_NR_AnchorCarrierFreqList_r16; /**< ASN.1 sl-NR-AnchorCarrierFreqList-r16；SEQUENCE OF ARFCN_ValueNR，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_EUTRA_AnchorCarrierFreqList_r16; /**< sl-EUTRA-AnchorCarrierFreqList-r16 是否存在。 */
    SL_EUTRA_AnchorCarrierFreqList_r16 sl_EUTRA_AnchorCarrierFreqList_r16; /**< ASN.1 sl-EUTRA-AnchorCarrierFreqList-r16；SEQUENCE OF ARFCN_ValueEUTRA，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_RadioBearerConfigList_r16; /**< sl-RadioBearerConfigList-r16 是否存在。 */
    SL_RadioBearerConfig_r16* sl_RadioBearerConfigList_r16_items; /**< ASN.1 sl-RadioBearerConfigList-r16；SEQUENCE OF SL_RadioBearerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RadioBearerConfigList_r16_count; /**< sl-RadioBearerConfigList-r16 元素个数。 */
    bool has_sl_RLC_BearerConfigList_r16; /**< sl-RLC-BearerConfigList-r16 是否存在。 */
    SL_RLC_BearerConfig_r16* sl_RLC_BearerConfigList_r16_items; /**< ASN.1 sl-RLC-BearerConfigList-r16；SEQUENCE OF SL_RLC_BearerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_BearerConfigList_r16_count; /**< sl-RLC-BearerConfigList-r16 元素个数。 */
    bool has_sl_MeasConfigCommon_r16; /**< sl-MeasConfigCommon-r16 是否存在。 */
    SL_MeasConfigCommon_r16 sl_MeasConfigCommon_r16; /**< ASN.1 sl-MeasConfigCommon-r16；结构体；OPTIONAL。 */
    bool has_sl_CSI_Acquisition_r16; /**< sl-CSI-Acquisition-r16 是否存在。 */
    SL_ConfigCommonNR_r16_Sl_CSI_Acquisition_r16 sl_CSI_Acquisition_r16; /**< ASN.1 sl-CSI-Acquisition-r16；枚举；OPTIONAL。 */
    bool has_sl_OffsetDFN_r16; /**< sl-OffsetDFN-r16 是否存在。 */
    int64_t sl_OffsetDFN_r16; /**< ASN.1 sl-OffsetDFN-r16；INTEGER (1..1000)，位宽 10 bit；OPTIONAL。 */
    bool has_t400_r16; /**< t400-r16 是否存在。 */
    SL_ConfigCommonNR_r16_T400_r16 t400_r16; /**< ASN.1 t400-r16；枚举；OPTIONAL。 */
    bool has_sl_MaxNumConsecutiveDTX_r16; /**< sl-MaxNumConsecutiveDTX-r16 是否存在。 */
    SL_ConfigCommonNR_r16_Sl_MaxNumConsecutiveDTX_r16 sl_MaxNumConsecutiveDTX_r16; /**< ASN.1 sl-MaxNumConsecutiveDTX-r16；枚举；OPTIONAL。 */
    bool has_sl_SSB_PriorityNR_r16; /**< sl-SSB-PriorityNR-r16 是否存在。 */
    int64_t sl_SSB_PriorityNR_r16; /**< ASN.1 sl-SSB-PriorityNR-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SIB12_IEs_r16
 * @note ASN.1：SIB12-IEs-r16；源文件第 3794 行。
 * @note SIB12-IEs-r16 ::= SEQUENCE { sl-ConfigCommonNR-r16, lateNonCriticalExtension, sl-DRX-ConfigComm...
 */
struct SIB12_IEs_r16 {
    SL_ConfigCommonNR_r16 sl_ConfigCommonNR_r16; /**< ASN.1 sl-ConfigCommonNR-r16；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB12_IEs_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB12_IEs_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SIB13_r16
 * @note ASN.1：SIB13-r16；源文件第 3849 行。
 * @note SIB13-r16 ::= SEQUENCE { sl-V2X-ConfigCommon-r16, dummy, tdd-Config-r16, lateNonCriticalExt...
 */
struct SIB13_r16 {
    OctetString sl_V2X_ConfigCommon_r16; /**< ASN.1 sl-V2X-ConfigCommon-r16；SIZE 无上界（半约束长度）。 */
    OctetString dummy; /**< ASN.1 dummy；SIZE 无上界（半约束长度）。 */
    OctetString tdd_Config_r16; /**< ASN.1 tdd-Config-r16；SIZE 无上界（半约束长度）。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB14_r16
 * @note ASN.1：SIB14-r16；源文件第 3860 行。
 * @note SIB14-r16 ::= SEQUENCE { sl-V2X-ConfigCommonExt-r16, lateNonCriticalExtension }
 */
struct SIB14_r16 {
    OctetString sl_V2X_ConfigCommonExt_r16; /**< ASN.1 sl-V2X-ConfigCommonExt-r16；SIZE 无上界（半约束长度）。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB15_r17
 * @note ASN.1：SIB15-r17；源文件第 3869 行。
 * @note SIB15-r17 ::= SEQUENCE { commonPLMNsWithDisasterCondition-r17, applicableDisasterInfoList-r...
 */
struct SIB15_r17 {
    bool has_commonPLMNsWithDisasterCondition_r17; /**< commonPLMNsWithDisasterCondition-r17 是否存在。 */
    PLMN_Identity* commonPLMNsWithDisasterCondition_r17_items; /**< ASN.1 commonPLMNsWithDisasterCondition-r17；SEQUENCE OF PLMN_Identity，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t commonPLMNsWithDisasterCondition_r17_count; /**< commonPLMNsWithDisasterCondition-r17 元素个数。 */
    bool has_applicableDisasterInfoList_r17; /**< applicableDisasterInfoList-r17 是否存在。 */
    ApplicableDisasterInfo_r17* applicableDisasterInfoList_r17_items; /**< ASN.1 applicableDisasterInfoList-r17；SEQUENCE OF ApplicableDisasterInfo_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t applicableDisasterInfoList_r17_count; /**< applicableDisasterInfoList-r17 元素个数。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief ApplicableDisasterInfo_r17_DedicatedPLMNs_r17
 * @note ASN.1：dedicatedPLMNs-r17；源文件第 3880 行。
 * @note SEQUENCE OF (size 1..12) OF PLMN-Identity
 */
struct ApplicableDisasterInfo_r17_DedicatedPLMNs_r17 {
    PLMN_Identity* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ApplicableDisasterInfo_r17
 * @note ASN.1：ApplicableDisasterInfo-r17；源文件第 3876 行。
 * @note ApplicableDisasterInfo-r17 ::= CHOICE { noDisasterRoaming-r17, disasterRelatedIndication-r17, commonPLMNs-r1...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ApplicableDisasterInfo_r17_Tag {
    ApplicableDisasterInfo_r17_Tag_noDisasterRoaming_r17 = 0, /**< ASN.1 noDisasterRoaming-r17 */
    ApplicableDisasterInfo_r17_Tag_disasterRelatedIndication_r17 = 1, /**< ASN.1 disasterRelatedIndication-r17 */
    ApplicableDisasterInfo_r17_Tag_commonPLMNs_r17 = 2, /**< ASN.1 commonPLMNs-r17 */
    ApplicableDisasterInfo_r17_Tag_dedicatedPLMNs_r17 = 3, /**< ASN.1 dedicatedPLMNs-r17 */
} ApplicableDisasterInfo_r17_Tag;

struct ApplicableDisasterInfo_r17 {
    ApplicableDisasterInfo_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null noDisasterRoaming_r17; /**< ASN.1 noDisasterRoaming-r17 */
        Null disasterRelatedIndication_r17; /**< ASN.1 disasterRelatedIndication-r17 */
        Null commonPLMNs_r17; /**< ASN.1 commonPLMNs-r17 */
        ApplicableDisasterInfo_r17_DedicatedPLMNs_r17 dedicatedPLMNs_r17; /**< ASN.1 dedicatedPLMNs-r17 */
    } u;
};


/**
 * @brief FreqPriorityListSlicing_r17
 * @note ASN.1：FreqPriorityListSlicing-r17；源文件第 6890 行。
 * @note FreqPriorityListSlicing-r17 ::= SEQUENCE OF (size 1..9) OF FreqPrioritySlicing-r17
 */
struct FreqPriorityListSlicing_r17 {
    FreqPrioritySlicing_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB16_r17
 * @note ASN.1：SIB16-r17；源文件第 3886 行。
 * @note SIB16-r17 ::= SEQUENCE { freqPriorityListSlicing-r17, lateNonCriticalExtension }
 */
struct SIB16_r17 {
    bool has_freqPriorityListSlicing_r17; /**< freqPriorityListSlicing-r17 是否存在。 */
    FreqPriorityListSlicing_r17 freqPriorityListSlicing_r17; /**< ASN.1 freqPriorityListSlicing-r17；SEQUENCE OF FreqPrioritySlicing_r17，SIZE (1..9)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB17_r17
 * @note ASN.1：SIB17-r17；源文件第 3895 行。
 * @note SIB17-r17 ::= SEQUENCE { segmentNumber-r17, segmentType-r17, segmentContainer-r17 }
 */
struct SIB17_r17 {
    int64_t segmentNumber_r17; /**< ASN.1 segmentNumber-r17；INTEGER (0..63)，位宽 6 bit。 */
    SIB17_r17_SegmentType_r17 segmentType_r17; /**< ASN.1 segmentType-r17；枚举。 */
    OctetString segmentContainer_r17; /**< ASN.1 segmentContainer-r17；SIZE 无上界（半约束长度）。 */
};


/**
 * @brief SIB17_IEs_r17
 * @note ASN.1：SIB17-IEs-r17；源文件第 3901 行。
 * @note SIB17-IEs-r17 ::= SEQUENCE { trs-ResourceSetConfig-r17, validityDuration-r17, lateNonCriticalEx...
 */
struct SIB17_IEs_r17 {
    TRS_ResourceSet_r17* trs_ResourceSetConfig_r17_items; /**< ASN.1 trs-ResourceSetConfig-r17；SEQUENCE OF TRS_ResourceSet_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t trs_ResourceSetConfig_r17_count; /**< trs-ResourceSetConfig-r17 元素个数。 */
    bool has_validityDuration_r17; /**< validityDuration-r17 是否存在。 */
    SIB17_IEs_r17_ValidityDuration_r17 validityDuration_r17; /**< ASN.1 validityDuration-r17；枚举；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17
 * @note ASN.1：scramblingID-Info-r17/scramblingIDperResourceListWith2-r17；源文件第 3913 行。
 * @note SEQUENCE OF (size 2..2) OF ScramblingId
 */
struct TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17 {
    ScramblingId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17
 * @note ASN.1：scramblingID-Info-r17/scramblingIDperResourceListWith4-r17；源文件第 3914 行。
 * @note SEQUENCE OF (size 4..4) OF ScramblingId
 */
struct TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17 {
    ScramblingId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief TRS_ResourceSet_r17_ScramblingID_Info_r17
 * @note ASN.1：scramblingID-Info-r17；源文件第 3911 行。
 * @note CHOICE { scramblingIDforCommon-r17, scramblingIDperResourceListWith2-r17, scr...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag {
    TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDforCommon_r17 = 0, /**< ASN.1 scramblingIDforCommon-r17 */
    TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith2_r17 = 1, /**< ASN.1 scramblingIDperResourceListWith2-r17 */
    TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag_scramblingIDperResourceListWith4_r17 = 2, /**< ASN.1 scramblingIDperResourceListWith4-r17 */
} TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag;

struct TRS_ResourceSet_r17_ScramblingID_Info_r17 {
    TRS_ResourceSet_r17_ScramblingID_Info_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ScramblingId scramblingIDforCommon_r17; /**< ASN.1 scramblingIDforCommon-r17 */
        TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith2_r17 scramblingIDperResourceListWith2_r17; /**< ASN.1 scramblingIDperResourceListWith2-r17 */
        TRS_ResourceSet_r17_ScramblingID_Info_r17_ScramblingIDperResourceListWith4_r17 scramblingIDperResourceListWith4_r17; /**< ASN.1 scramblingIDperResourceListWith4-r17 */
    } u;
};


/**
 * @brief TRS_ResourceSet_r17_PeriodicityAndOffset_r17
 * @note ASN.1：periodicityAndOffset-r17；源文件第 3921 行。
 * @note CHOICE { slots10, slots20, slots40, slots80 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag {
    TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots10 = 0, /**< ASN.1 slots10 */
    TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots20 = 1, /**< ASN.1 slots20 */
    TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots40 = 2, /**< ASN.1 slots40 */
    TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag_slots80 = 3, /**< ASN.1 slots80 */
} TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag;

struct TRS_ResourceSet_r17_PeriodicityAndOffset_r17 {
    TRS_ResourceSet_r17_PeriodicityAndOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t slots10; /**< ASN.1 slots10 */
        int64_t slots20; /**< ASN.1 slots20 */
        int64_t slots40; /**< ASN.1 slots40 */
        int64_t slots80; /**< ASN.1 slots80 */
    } u;
};


/**
 * @brief TRS_ResourceSet_r17
 * @note ASN.1：TRS-ResourceSet-r17；源文件第 3909 行。
 * @note TRS-ResourceSet-r17 ::= SEQUENCE { powerControlOffsetSS-r17, scramblingID-Info-r17, firstOFDMSymbolIn...
 */
struct TRS_ResourceSet_r17 {
    TRS_ResourceSet_r17_PowerControlOffsetSS_r17 powerControlOffsetSS_r17; /**< ASN.1 powerControlOffsetSS-r17；枚举。 */
    TRS_ResourceSet_r17_ScramblingID_Info_r17 scramblingID_Info_r17; /**< ASN.1 scramblingID-Info-r17；结构体。 */
    int64_t firstOFDMSymbolInTimeDomain_r17; /**< ASN.1 firstOFDMSymbolInTimeDomain-r17；INTEGER (0..9)，位宽 4 bit。 */
    int64_t startingRB_r17; /**< ASN.1 startingRB-r17；INTEGER (0..274)，位宽 9 bit。 */
    int64_t nrofRBs_r17; /**< ASN.1 nrofRBs-r17；INTEGER (24..276)，位宽 8 bit。 */
    SSB_Index ssb_Index_r17; /**< ASN.1 ssb-Index-r17；INTEGER (0..63)，位宽 6 bit。 */
    TRS_ResourceSet_r17_PeriodicityAndOffset_r17 periodicityAndOffset_r17; /**< ASN.1 periodicityAndOffset-r17；结构体。 */
    BitString frequencyDomainAllocation_r17; /**< ASN.1 frequencyDomainAllocation-r17；SIZE (4)，定长。 */
    int64_t indBitID_r17; /**< ASN.1 indBitID-r17；INTEGER (0..5)，位宽 3 bit。 */
    TRS_ResourceSet_r17_NrofResources_r17 nrofResources_r17; /**< ASN.1 nrofResources-r17；枚举。 */
};


/**
 * @brief SIB18_r17
 * @note ASN.1：SIB18-r17；源文件第 3935 行。
 * @note SIB18-r17 ::= SEQUENCE { gin-ElementList-r17, gins-PerSNPN-List-r17, lateNonCriticalExtensi...
 */
struct SIB18_r17 {
    bool has_gin_ElementList_r17; /**< gin-ElementList-r17 是否存在。 */
    GIN_Element_r17* gin_ElementList_r17_items; /**< ASN.1 gin-ElementList-r17；SEQUENCE OF GIN_Element_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t gin_ElementList_r17_count; /**< gin-ElementList-r17 元素个数。 */
    bool has_gins_PerSNPN_List_r17; /**< gins-PerSNPN-List-r17 是否存在。 */
    GINs_PerSNPN_r17* gins_PerSNPN_List_r17_items; /**< ASN.1 gins-PerSNPN-List-r17；SEQUENCE OF GINs_PerSNPN_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t gins_PerSNPN_List_r17_count; /**< gins-PerSNPN-List-r17 元素个数。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief GIN_Element_r17
 * @note ASN.1：GIN-Element-r17；源文件第 3942 行。
 * @note GIN-Element-r17 ::= SEQUENCE { plmn-Identity-r17, nid-List-r17 }
 */
struct GIN_Element_r17 {
    PLMN_Identity plmn_Identity_r17; /**< ASN.1 plmn-Identity-r17；结构体。 */
    NID_r16* nid_List_r17_items; /**< ASN.1 nid-List-r17；SEQUENCE OF NID_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nid_List_r17_count; /**< nid-List-r17 元素个数。 */
};


/**
 * @brief GINs_PerSNPN_r17
 * @note ASN.1：GINs-PerSNPN-r17；源文件第 3947 行。
 * @note GINs-PerSNPN-r17 ::= SEQUENCE { supportedGINs-r17 }
 */
struct GINs_PerSNPN_r17 {
    bool has_supportedGINs_r17; /**< supportedGINs-r17 是否存在。 */
    BitString supportedGINs_r17; /**< ASN.1 supportedGINs-r17；SIZE (1..24)；OPTIONAL。 */
};


/**
 * @brief NTN_NeighCellConfigList_r17
 * @note ASN.1：NTN-NeighCellConfigList-r17；源文件第 3972 行。
 * @note NTN-NeighCellConfigList-r17 ::= SEQUENCE OF (size 1..4) OF NTN-NeighCellConfig-r17
 */
struct NTN_NeighCellConfigList_r17 {
    NTN_NeighCellConfig_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB19_r17_ExtGroup1
 * @note ASN.1：SIB19_r17_ExtGroup1；源文件第 3961 行。
 */
struct SIB19_r17_ExtGroup1 {
    bool has_ntn_NeighCellConfigListExt_v1720; /**< ntn-NeighCellConfigListExt-v1720 是否存在。 */
    NTN_NeighCellConfigList_r17 ntn_NeighCellConfigListExt_v1720; /**< ASN.1 ntn-NeighCellConfigListExt-v1720；SEQUENCE OF NTN_NeighCellConfig_r17，SIZE (1..4)；OPTIONAL。 */
};


/**
 * @brief NTN_CovEnh_r18
 * @note ASN.1：NTN-CovEnh-r18；源文件第 3980 行。
 * @note NTN-CovEnh-r18 ::= SEQUENCE { rsrp-ThresholdMsg4-r18, numberOfMsg4-RepetitionsList-r18 }
 */
struct NTN_CovEnh_r18 {
    bool has_rsrp_ThresholdMsg4_r18; /**< rsrp-ThresholdMsg4-r18 是否存在。 */
    RSRP_Range rsrp_ThresholdMsg4_r18; /**< ASN.1 rsrp-ThresholdMsg4-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_numberOfMsg4_RepetitionsList_r18; /**< numberOfMsg4-RepetitionsList-r18 是否存在。 */
    NumberOfMsg4_Repetitions_r18* numberOfMsg4_RepetitionsList_r18_items; /**< ASN.1 numberOfMsg4-RepetitionsList-r18；SEQUENCE OF NumberOfMsg4_Repetitions_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t numberOfMsg4_RepetitionsList_r18_count; /**< numberOfMsg4-RepetitionsList-r18 元素个数。 */
};


/**
 * @brief PositionVelocity_r17
 * @note ASN.1：PositionVelocity-r17；源文件第 6783 行。
 * @note PositionVelocity-r17 ::= SEQUENCE { positionX-r17, positionY-r17, positionZ-r17, velocityVX-r17, veloc...
 */
struct PositionVelocity_r17 {
    PositionStateVector_r17 positionX_r17; /**< ASN.1 positionX-r17；INTEGER (-33554432..33554431)，位宽 26 bit。 */
    PositionStateVector_r17 positionY_r17; /**< ASN.1 positionY-r17；INTEGER (-33554432..33554431)，位宽 26 bit。 */
    PositionStateVector_r17 positionZ_r17; /**< ASN.1 positionZ-r17；INTEGER (-33554432..33554431)，位宽 26 bit。 */
    VelocityStateVector_r17 velocityVX_r17; /**< ASN.1 velocityVX-r17；INTEGER (-131072..131071)，位宽 18 bit。 */
    VelocityStateVector_r17 velocityVY_r17; /**< ASN.1 velocityVY-r17；INTEGER (-131072..131071)，位宽 18 bit。 */
    VelocityStateVector_r17 velocityVZ_r17; /**< ASN.1 velocityVZ-r17；INTEGER (-131072..131071)，位宽 18 bit。 */
};


/**
 * @brief Orbital_r17
 * @note ASN.1：Orbital-r17；源文件第 6792 行。
 * @note Orbital-r17 ::= SEQUENCE { semiMajorAxis-r17, eccentricity-r17, periapsis-r17, longitude-r17,...
 */
struct Orbital_r17 {
    int64_t semiMajorAxis_r17; /**< ASN.1 semiMajorAxis-r17；INTEGER (0..8589934591)，位宽 33 bit。 */
    int64_t eccentricity_r17; /**< ASN.1 eccentricity-r17；INTEGER (0..1048575)，位宽 20 bit。 */
    int64_t periapsis_r17; /**< ASN.1 periapsis-r17；INTEGER (0..268435455)，位宽 28 bit。 */
    int64_t longitude_r17; /**< ASN.1 longitude-r17；INTEGER (0..268435455)，位宽 28 bit。 */
    int64_t inclination_r17; /**< ASN.1 inclination-r17；INTEGER (-67108864..67108863)，位宽 27 bit。 */
    int64_t meanAnomaly_r17; /**< ASN.1 meanAnomaly-r17；INTEGER (0..268435455)，位宽 28 bit。 */
};


/**
 * @brief EphemerisInfo_r17
 * @note ASN.1：EphemerisInfo-r17；源文件第 6778 行。
 * @note EphemerisInfo-r17 ::= CHOICE { positionVelocity-r17, orbital-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EphemerisInfo_r17_Tag {
    EphemerisInfo_r17_Tag_positionVelocity_r17 = 0, /**< ASN.1 positionVelocity-r17 */
    EphemerisInfo_r17_Tag_orbital_r17 = 1, /**< ASN.1 orbital-r17 */
} EphemerisInfo_r17_Tag;

struct EphemerisInfo_r17 {
    EphemerisInfo_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PositionVelocity_r17 positionVelocity_r17; /**< ASN.1 positionVelocity-r17 */
        Orbital_r17 orbital_r17; /**< ASN.1 orbital-r17 */
    } u;
};


/**
 * @brief EpochTime_r17
 * @note ASN.1：EpochTime-r17；源文件第 6808 行。
 * @note EpochTime-r17 ::= SEQUENCE { sfn-r17, subFrameNR-r17 }
 */
struct EpochTime_r17 {
    int64_t sfn_r17; /**< ASN.1 sfn-r17；INTEGER (0..1023)，位宽 10 bit。 */
    int64_t subFrameNR_r17; /**< ASN.1 subFrameNR-r17；INTEGER (0..9)，位宽 4 bit。 */
};


/**
 * @brief TA_Info_r17
 * @note ASN.1：TA-Info-r17；源文件第 9000 行。
 * @note TA-Info-r17 ::= SEQUENCE { ta-Common-r17, ta-CommonDrift-r17, ta-CommonDriftVariant-r17 }
 */
struct TA_Info_r17 {
    int64_t ta_Common_r17; /**< ASN.1 ta-Common-r17；INTEGER (0..66485757)，位宽 26 bit。 */
    bool has_ta_CommonDrift_r17; /**< ta-CommonDrift-r17 是否存在。 */
    int64_t ta_CommonDrift_r17; /**< ASN.1 ta-CommonDrift-r17；INTEGER (-257303..257303)，位宽 19 bit；OPTIONAL。 */
    bool has_ta_CommonDriftVariant_r17; /**< ta-CommonDriftVariant-r17 是否存在。 */
    int64_t ta_CommonDriftVariant_r17; /**< ASN.1 ta-CommonDriftVariant-r17；INTEGER (0..28949)，位宽 15 bit；OPTIONAL。 */
};


/**
 * @brief NTN_Config_r17
 * @note ASN.1：NTN-Config-r17；源文件第 8986 行。
 * @note NTN-Config-r17 ::= SEQUENCE { epochTime-r17, ntn-UlSyncValidityDuration-r17, cellSpecificKoffset...
 */
struct NTN_Config_r17 {
    bool has_epochTime_r17; /**< epochTime-r17 是否存在。 */
    EpochTime_r17 epochTime_r17; /**< ASN.1 epochTime-r17；结构体；OPTIONAL。 */
    bool has_ntn_UlSyncValidityDuration_r17; /**< ntn-UlSyncValidityDuration-r17 是否存在。 */
    NTN_Config_r17_Ntn_UlSyncValidityDuration_r17 ntn_UlSyncValidityDuration_r17; /**< ASN.1 ntn-UlSyncValidityDuration-r17；枚举；OPTIONAL。 */
    bool has_cellSpecificKoffset_r17; /**< cellSpecificKoffset-r17 是否存在。 */
    int64_t cellSpecificKoffset_r17; /**< ASN.1 cellSpecificKoffset-r17；INTEGER (1..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_kmac_r17; /**< kmac-r17 是否存在。 */
    int64_t kmac_r17; /**< ASN.1 kmac-r17；INTEGER (1..512)，位宽 9 bit；OPTIONAL。 */
    bool has_ta_Info_r17; /**< ta-Info-r17 是否存在。 */
    TA_Info_r17 ta_Info_r17; /**< ASN.1 ta-Info-r17；结构体；OPTIONAL。 */
    bool has_ntn_PolarizationDL_r17; /**< ntn-PolarizationDL-r17 是否存在。 */
    NTN_Config_r17_Ntn_PolarizationDL_r17 ntn_PolarizationDL_r17; /**< ASN.1 ntn-PolarizationDL-r17；枚举；OPTIONAL。 */
    bool has_ntn_PolarizationUL_r17; /**< ntn-PolarizationUL-r17 是否存在。 */
    NTN_Config_r17_Ntn_PolarizationUL_r17 ntn_PolarizationUL_r17; /**< ASN.1 ntn-PolarizationUL-r17；枚举；OPTIONAL。 */
    bool has_ephemerisInfo_r17; /**< ephemerisInfo-r17 是否存在。 */
    EphemerisInfo_r17 ephemerisInfo_r17; /**< ASN.1 ephemerisInfo-r17；结构体；OPTIONAL。 */
    bool has_ta_Report_r17; /**< ta-Report-r17 是否存在。 */
    NTN_Config_r17_Ta_Report_r17 ta_Report_r17; /**< ASN.1 ta-Report-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SatSwitchWithReSync_r18
 * @note ASN.1：SatSwitchWithReSync-r18；源文件第 3988 行。
 * @note SatSwitchWithReSync-r18 ::= SEQUENCE { ntn-Config-r18, t-ServiceStart-r18, ssb-TimeOffset-r18 }
 */
struct SatSwitchWithReSync_r18 {
    NTN_Config_r17 ntn_Config_r18; /**< ASN.1 ntn-Config-r18；结构体。 */
    bool has_t_ServiceStart_r18; /**< t-ServiceStart-r18 是否存在。 */
    int64_t t_ServiceStart_r18; /**< ASN.1 t-ServiceStart-r18；INTEGER (0..549755813887)，位宽 39 bit；OPTIONAL。 */
    bool has_ssb_TimeOffset_r18; /**< ssb-TimeOffset-r18 是否存在。 */
    int64_t ssb_TimeOffset_r18; /**< ASN.1 ssb-TimeOffset-r18；INTEGER (0..159)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SIB19_r17_ExtGroup2
 * @note ASN.1：SIB19_r17_ExtGroup2；源文件第 3964 行。
 */
struct SIB19_r17_ExtGroup2 {
    bool has_movingReferenceLocation_r18; /**< movingReferenceLocation-r18 是否存在。 */
    ReferenceLocation_r17 movingReferenceLocation_r18; /**< ASN.1 movingReferenceLocation-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_ntnCovEnh_r18; /**< ntnCovEnh-r18 是否存在。 */
    NTN_CovEnh_r18 ntnCovEnh_r18; /**< ASN.1 ntnCovEnh-r18；结构体；OPTIONAL。 */
    bool has_satSwitchWithReSync_r18; /**< satSwitchWithReSync-r18 是否存在。 */
    SatSwitchWithReSync_r18 satSwitchWithReSync_r18; /**< ASN.1 satSwitchWithReSync-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SIB19_r17
 * @note ASN.1：SIB19-r17；源文件第 3953 行。
 * @note SIB19-r17 ::= SEQUENCE { ntn-Config-r17, t-Service-r17, referenceLocation-r17, distanceThre...
 */
struct SIB19_r17 {
    bool has_ntn_Config_r17; /**< ntn-Config-r17 是否存在。 */
    NTN_Config_r17 ntn_Config_r17; /**< ASN.1 ntn-Config-r17；结构体；OPTIONAL。 */
    bool has_t_Service_r17; /**< t-Service-r17 是否存在。 */
    int64_t t_Service_r17; /**< ASN.1 t-Service-r17；INTEGER (0..549755813887)，位宽 39 bit；OPTIONAL。 */
    bool has_referenceLocation_r17; /**< referenceLocation-r17 是否存在。 */
    ReferenceLocation_r17 referenceLocation_r17; /**< ASN.1 referenceLocation-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_distanceThresh_r17; /**< distanceThresh-r17 是否存在。 */
    int64_t distanceThresh_r17; /**< ASN.1 distanceThresh-r17；INTEGER (0..65525)，位宽 16 bit；OPTIONAL。 */
    bool has_ntn_NeighCellConfigList_r17; /**< ntn-NeighCellConfigList-r17 是否存在。 */
    NTN_NeighCellConfigList_r17 ntn_NeighCellConfigList_r17; /**< ASN.1 ntn-NeighCellConfigList-r17；SEQUENCE OF NTN_NeighCellConfig_r17，SIZE (1..4)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB19_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SIB19_r17_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief NTN_NeighCellConfig_r17
 * @note ASN.1：NTN-NeighCellConfig-r17；源文件第 3974 行。
 * @note NTN-NeighCellConfig-r17 ::= SEQUENCE { ntn-Config-r17, carrierFreq-r17, physCellId-r17 }
 */
struct NTN_NeighCellConfig_r17 {
    bool has_ntn_Config_r17; /**< ntn-Config-r17 是否存在。 */
    NTN_Config_r17 ntn_Config_r17; /**< ASN.1 ntn-Config-r17；结构体；OPTIONAL。 */
    bool has_carrierFreq_r17; /**< carrierFreq-r17 是否存在。 */
    ARFCN_ValueNR carrierFreq_r17; /**< ASN.1 carrierFreq-r17；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_physCellId_r17; /**< physCellId-r17 是否存在。 */
    PhysCellId physCellId_r17; /**< ASN.1 physCellId-r17；INTEGER (0..1007)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief MCCH_RepetitionPeriodAndOffset_r17
 * @note ASN.1：MCCH-RepetitionPeriodAndOffset-r17；源文件第 4016 行。
 * @note MCCH-RepetitionPeriodAndOffset-r17 ::= CHOICE { rf1-r17, rf2-r17, rf4-r17, rf8-r17, rf16-r17, rf32-r17, rf64-r17, rf...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MCCH_RepetitionPeriodAndOffset_r17_Tag {
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf1_r17 = 0, /**< ASN.1 rf1-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf2_r17 = 1, /**< ASN.1 rf2-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf4_r17 = 2, /**< ASN.1 rf4-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf8_r17 = 3, /**< ASN.1 rf8-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf16_r17 = 4, /**< ASN.1 rf16-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf32_r17 = 5, /**< ASN.1 rf32-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf64_r17 = 6, /**< ASN.1 rf64-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf128_r17 = 7, /**< ASN.1 rf128-r17 */
    MCCH_RepetitionPeriodAndOffset_r17_Tag_rf256_r17 = 8, /**< ASN.1 rf256-r17 */
} MCCH_RepetitionPeriodAndOffset_r17_Tag;

struct MCCH_RepetitionPeriodAndOffset_r17 {
    MCCH_RepetitionPeriodAndOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t rf1_r17; /**< ASN.1 rf1-r17 */
        int64_t rf2_r17; /**< ASN.1 rf2-r17 */
        int64_t rf4_r17; /**< ASN.1 rf4-r17 */
        int64_t rf8_r17; /**< ASN.1 rf8-r17 */
        int64_t rf16_r17; /**< ASN.1 rf16-r17 */
        int64_t rf32_r17; /**< ASN.1 rf32-r17 */
        int64_t rf64_r17; /**< ASN.1 rf64-r17 */
        int64_t rf128_r17; /**< ASN.1 rf128-r17 */
        int64_t rf256_r17; /**< ASN.1 rf256-r17 */
    } u;
};


/**
 * @brief MCCH_Config_r17
 * @note ASN.1：MCCH-Config-r17；源文件第 4008 行。
 * @note MCCH-Config-r17 ::= SEQUENCE { mcch-RepetitionPeriodAndOffset-r17, mcch-WindowStartSlot-r17, mcch...
 */
struct MCCH_Config_r17 {
    MCCH_RepetitionPeriodAndOffset_r17 mcch_RepetitionPeriodAndOffset_r17; /**< ASN.1 mcch-RepetitionPeriodAndOffset-r17；结构体。 */
    int64_t mcch_WindowStartSlot_r17; /**< ASN.1 mcch-WindowStartSlot-r17；INTEGER (0..79)，位宽 7 bit。 */
    bool has_mcch_WindowDuration_r17; /**< mcch-WindowDuration-r17 是否存在。 */
    MCCH_Config_r17_Mcch_WindowDuration_r17 mcch_WindowDuration_r17; /**< ASN.1 mcch-WindowDuration-r17；枚举；OPTIONAL。 */
    MCCH_Config_r17_Mcch_ModificationPeriod_r17 mcch_ModificationPeriod_r17; /**< ASN.1 mcch-ModificationPeriod-r17；枚举。 */
};


/**
 * @brief LocationAndBandwidthBroadcast_r17
 * @note ASN.1：LocationAndBandwidthBroadcast-r17；源文件第 23442 行。
 * @note LocationAndBandwidthBroadcast-r17 ::= CHOICE { sameAsSib1ConfiguredLocationAndBW, locationAndBandwidth }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LocationAndBandwidthBroadcast_r17_Tag {
    LocationAndBandwidthBroadcast_r17_Tag_sameAsSib1ConfiguredLocationAndBW = 0, /**< ASN.1 sameAsSib1ConfiguredLocationAndBW */
    LocationAndBandwidthBroadcast_r17_Tag_locationAndBandwidth = 1, /**< ASN.1 locationAndBandwidth */
} LocationAndBandwidthBroadcast_r17_Tag;

struct LocationAndBandwidthBroadcast_r17 {
    LocationAndBandwidthBroadcast_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null sameAsSib1ConfiguredLocationAndBW; /**< ASN.1 sameAsSib1ConfiguredLocationAndBW */
        int64_t locationAndBandwidth; /**< ASN.1 locationAndBandwidth */
    } u;
};


/**
 * @brief CFR_ConfigMCCH_MTCH_r17
 * @note ASN.1：CFR-ConfigMCCH-MTCH-r17；源文件第 23436 行。
 * @note CFR-ConfigMCCH-MTCH-r17 ::= SEQUENCE { locationAndBandwidthBroadcast-r17, pdsch-ConfigMCCH-r17, commonCon...
 */
struct CFR_ConfigMCCH_MTCH_r17 {
    bool has_locationAndBandwidthBroadcast_r17; /**< locationAndBandwidthBroadcast-r17 是否存在。 */
    LocationAndBandwidthBroadcast_r17 locationAndBandwidthBroadcast_r17; /**< ASN.1 locationAndBandwidthBroadcast-r17；结构体；OPTIONAL。 */
    bool has_pdsch_ConfigMCCH_r17; /**< pdsch-ConfigMCCH-r17 是否存在。 */
    PDSCH_ConfigBroadcast_r17 pdsch_ConfigMCCH_r17; /**< ASN.1 pdsch-ConfigMCCH-r17；结构体；OPTIONAL。 */
    bool has_commonControlResourceSetExt_r17; /**< commonControlResourceSetExt-r17 是否存在。 */
    ControlResourceSet commonControlResourceSetExt_r17; /**< ASN.1 commonControlResourceSetExt-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SIB20_r17_ExtGroup1
 * @note ASN.1：SIB20_r17_ExtGroup1；源文件第 4002 行。
 */
struct SIB20_r17_ExtGroup1 {
    bool has_cfr_ConfigMCCH_MTCH_RedCap_r18; /**< cfr-ConfigMCCH-MTCH-RedCap-r18 是否存在。 */
    CFR_ConfigMCCH_MTCH_r17 cfr_ConfigMCCH_MTCH_RedCap_r18; /**< ASN.1 cfr-ConfigMCCH-MTCH-RedCap-r18；结构体；OPTIONAL。 */
    bool has_mcch_ConfigRedCap_r18; /**< mcch-ConfigRedCap-r18 是否存在。 */
    MCCH_Config_r17 mcch_ConfigRedCap_r18; /**< ASN.1 mcch-ConfigRedCap-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SIB20_r17
 * @note ASN.1：SIB20-r17；源文件第 3997 行。
 * @note SIB20-r17 ::= SEQUENCE { mcch-Config-r17, cfr-ConfigMCCH-MTCH-r17, lateNonCriticalExtension...
 */
struct SIB20_r17 {
    MCCH_Config_r17 mcch_Config_r17; /**< ASN.1 mcch-Config-r17；结构体。 */
    bool has_cfr_ConfigMCCH_MTCH_r17; /**< cfr-ConfigMCCH-MTCH-r17 是否存在。 */
    CFR_ConfigMCCH_MTCH_r17 cfr_ConfigMCCH_MTCH_r17; /**< ASN.1 cfr-ConfigMCCH-MTCH-r17；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SIB20_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MBS_FSAI_List_r17
 * @note ASN.1：MBS-FSAI-List-r17；源文件第 4038 行。
 * @note MBS-FSAI-List-r17 ::= SEQUENCE OF (size 1..64) OF MBS-FSAI-r17
 */
struct MBS_FSAI_List_r17 {
    MBS_FSAI_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBS_FSAI_InterFreqList_r17
 * @note ASN.1：MBS-FSAI-InterFreqList-r17；源文件第 4040 行。
 * @note MBS-FSAI-InterFreqList-r17 ::= SEQUENCE OF (size 1..8) OF MBS-FSAI-InterFreq-r17
 */
struct MBS_FSAI_InterFreqList_r17 {
    MBS_FSAI_InterFreq_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB21_r17
 * @note ASN.1：SIB21-r17；源文件第 4031 行。
 * @note SIB21-r17 ::= SEQUENCE { mbs-FSAI-IntraFreq-r17, mbs-FSAI-InterFreqList-r17, lateNonCritica...
 */
struct SIB21_r17 {
    bool has_mbs_FSAI_IntraFreq_r17; /**< mbs-FSAI-IntraFreq-r17 是否存在。 */
    MBS_FSAI_List_r17 mbs_FSAI_IntraFreq_r17; /**< ASN.1 mbs-FSAI-IntraFreq-r17；SEQUENCE OF MBS_FSAI_r17，SIZE (1..64)；OPTIONAL。 */
    bool has_mbs_FSAI_InterFreqList_r17; /**< mbs-FSAI-InterFreqList-r17 是否存在。 */
    MBS_FSAI_InterFreqList_r17 mbs_FSAI_InterFreqList_r17; /**< ASN.1 mbs-FSAI-InterFreqList-r17；SEQUENCE OF MBS_FSAI_InterFreq_r17，SIZE (1..8)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief MBS_FSAI_InterFreq_r17
 * @note ASN.1：MBS-FSAI-InterFreq-r17；源文件第 4042 行。
 * @note MBS-FSAI-InterFreq-r17 ::= SEQUENCE { dl-CarrierFreq-r17, mbs-FSAI-List-r17 }
 */
struct MBS_FSAI_InterFreq_r17 {
    ARFCN_ValueNR dl_CarrierFreq_r17; /**< ASN.1 dl-CarrierFreq-r17；INTEGER (0..3279165)，位宽 22 bit。 */
    MBS_FSAI_List_r17 mbs_FSAI_List_r17; /**< ASN.1 mbs-FSAI-List-r17；SEQUENCE OF MBS_FSAI_r17，SIZE (1..64)。 */
};


/**
 * @brief ATG_NeighCellConfigList_r18
 * @note ASN.1：ATG-NeighCellConfigList-r18；源文件第 4060 行。
 * @note ATG-NeighCellConfigList-r18 ::= SEQUENCE OF (size 1..8) OF ATG-NeighCellConfig-r18
 */
struct ATG_NeighCellConfigList_r18 {
    ATG_NeighCellConfig_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ATG_Config_r18
 * @note ASN.1：ATG-Config-r18；源文件第 4320 行。
 * @note ATG-Config-r18 ::= SEQUENCE { atg-gNB-Location-r18, heightgNB-r18, cellSpecificKoffset-r18, ta-R...
 */
struct ATG_Config_r18 {
    bool has_atg_gNB_Location_r18; /**< atg-gNB-Location-r18 是否存在。 */
    ReferenceLocation_r17 atg_gNB_Location_r18; /**< ASN.1 atg-gNB-Location-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_heightgNB_r18; /**< heightgNB-r18 是否存在。 */
    int64_t heightgNB_r18; /**< ASN.1 heightgNB-r18；INTEGER (-16384..16383)，位宽 15 bit；OPTIONAL。 */
    bool has_cellSpecificKoffset_r18; /**< cellSpecificKoffset-r18 是否存在。 */
    int64_t cellSpecificKoffset_r18; /**< ASN.1 cellSpecificKoffset-r18；INTEGER (1..3)，位宽 2 bit；OPTIONAL。 */
    bool has_ta_ReportATG_r18; /**< ta-ReportATG-r18 是否存在。 */
    ATG_Config_r18_Ta_ReportATG_r18 ta_ReportATG_r18; /**< ASN.1 ta-ReportATG-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SIB22_r18
 * @note ASN.1：SIB22-r18；源文件第 4052 行。
 * @note SIB22-r18 ::= SEQUENCE { atg-Config-r18, hs-ATG-cellReselectionSet-r18, atg-NeighCellConfig...
 */
struct SIB22_r18 {
    bool has_atg_Config_r18; /**< atg-Config-r18 是否存在。 */
    ATG_Config_r18 atg_Config_r18; /**< ASN.1 atg-Config-r18；结构体；OPTIONAL。 */
    bool has_hs_ATG_cellReselectionSet_r18; /**< hs-ATG-cellReselectionSet-r18 是否存在。 */
    SIB22_r18_Hs_ATG_cellReselectionSet_r18 hs_ATG_cellReselectionSet_r18; /**< ASN.1 hs-ATG-cellReselectionSet-r18；枚举；OPTIONAL。 */
    bool has_atg_NeighCellConfigList_r18; /**< atg-NeighCellConfigList-r18 是否存在。 */
    ATG_NeighCellConfigList_r18 atg_NeighCellConfigList_r18; /**< ASN.1 atg-NeighCellConfigList-r18；SEQUENCE OF ATG_NeighCellConfig_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief ATG_NeighCellConfig_r18
 * @note ASN.1：ATG-NeighCellConfig-r18；源文件第 4062 行。
 * @note ATG-NeighCellConfig-r18 ::= SEQUENCE { atg-gNB-Location-r18, heightgNB-r18, carrierFreq-r18, physCellId-r...
 */
struct ATG_NeighCellConfig_r18 {
    bool has_atg_gNB_Location_r18; /**< atg-gNB-Location-r18 是否存在。 */
    ReferenceLocation_r17 atg_gNB_Location_r18; /**< ASN.1 atg-gNB-Location-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_heightgNB_r18; /**< heightgNB-r18 是否存在。 */
    int64_t heightgNB_r18; /**< ASN.1 heightgNB-r18；INTEGER (-16384..16383)，位宽 15 bit；OPTIONAL。 */
    bool has_carrierFreq_r18; /**< carrierFreq-r18 是否存在。 */
    ARFCN_ValueNR carrierFreq_r18; /**< ASN.1 carrierFreq-r18；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_physCellId_r18; /**< physCellId-r18 是否存在。 */
    PhysCellId physCellId_r18; /**< ASN.1 physCellId-r18；INTEGER (0..1007)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief SIB23_r18
 * @note ASN.1：SIB23-r18；源文件第 4073 行。
 * @note SIB23-r18 ::= SEQUENCE { segmentNumber-r18, segmentType-r18, segmentContainer-r18 }
 */
struct SIB23_r18 {
    int64_t segmentNumber_r18; /**< ASN.1 segmentNumber-r18；INTEGER (0..63)，位宽 6 bit。 */
    SIB23_r18_SegmentType_r18 segmentType_r18; /**< ASN.1 segmentType-r18；枚举。 */
    OctetString segmentContainer_r18; /**< ASN.1 segmentContainer-r18；SIZE 无上界（半约束长度）。 */
};


/**
 * @brief SL_PosConfigCommonNR_r18
 * @note ASN.1：SL-PosConfigCommonNR-r18；源文件第 4085 行。
 * @note SL-PosConfigCommonNR-r18 ::= SEQUENCE { sl-PosFreqInfoList-r18, sl-PosUE-SelectedConfig-r18, sl-PosNR-Anch...
 */
struct SL_PosConfigCommonNR_r18 {
    bool has_sl_PosFreqInfoList_r18; /**< sl-PosFreqInfoList-r18 是否存在。 */
    SL_FreqConfigCommon_r16* sl_PosFreqInfoList_r18_items; /**< ASN.1 sl-PosFreqInfoList-r18；SEQUENCE OF SL_FreqConfigCommon_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PosFreqInfoList_r18_count; /**< sl-PosFreqInfoList-r18 元素个数。 */
    bool has_sl_PosUE_SelectedConfig_r18; /**< sl-PosUE-SelectedConfig-r18 是否存在。 */
    SL_UE_SelectedConfig_r16 sl_PosUE_SelectedConfig_r18; /**< ASN.1 sl-PosUE-SelectedConfig-r18；结构体；OPTIONAL。 */
    bool has_sl_PosNR_AnchorCarrierFreqList_r18; /**< sl-PosNR-AnchorCarrierFreqList-r18 是否存在。 */
    SL_NR_AnchorCarrierFreqList_r16 sl_PosNR_AnchorCarrierFreqList_r18; /**< ASN.1 sl-PosNR-AnchorCarrierFreqList-r18；SEQUENCE OF ARFCN_ValueNR，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_PosMeasConfigCommon_r18; /**< sl-PosMeasConfigCommon-r18 是否存在。 */
    SL_MeasConfigCommon_r16 sl_PosMeasConfigCommon_r18; /**< ASN.1 sl-PosMeasConfigCommon-r18；结构体；OPTIONAL。 */
    bool has_sl_PosOffsetDFN_r18; /**< sl-PosOffsetDFN-r18 是否存在。 */
    int64_t sl_PosOffsetDFN_r18; /**< ASN.1 sl-PosOffsetDFN-r18；INTEGER (1..1000)，位宽 10 bit；OPTIONAL。 */
    bool has_sl_PosSSB_PriorityNR_r18; /**< sl-PosSSB-PriorityNR-r18 是否存在。 */
    int64_t sl_PosSSB_PriorityNR_r18; /**< ASN.1 sl-PosSSB-PriorityNR-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SIB23_IEs_r18
 * @note ASN.1：SIB23-IEs-r18；源文件第 4079 行。
 * @note SIB23-IEs-r18 ::= SEQUENCE { sl-PosConfigCommonNR-r18, lateNonCriticalExtension }
 */
struct SIB23_IEs_r18 {
    SL_PosConfigCommonNR_r18 sl_PosConfigCommonNR_r18; /**< ASN.1 sl-PosConfigCommonNR-r18；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SIB24_r18
 * @note ASN.1：SIB24-r18；源文件第 4098 行。
 * @note SIB24-r18 ::= SEQUENCE { multicastMCCH-Config-r18, cfr-ConfigMCCH-MTCH-r18, lateNonCritical...
 */
struct SIB24_r18 {
    bool has_multicastMCCH_Config_r18; /**< multicastMCCH-Config-r18 是否存在。 */
    MCCH_Config_r17 multicastMCCH_Config_r18; /**< ASN.1 multicastMCCH-Config-r18；结构体；OPTIONAL。 */
    bool has_cfr_ConfigMCCH_MTCH_r18; /**< cfr-ConfigMCCH-MTCH-r18 是否存在。 */
    CFR_ConfigMCCH_MTCH_r17 cfr_ConfigMCCH_MTCH_r18; /**< ASN.1 cfr-ConfigMCCH-MTCH-r18；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief CoverageAreaInfoList_r18
 * @note ASN.1：CoverageAreaInfoList-r18；源文件第 4114 行。
 * @note CoverageAreaInfoList-r18 ::= SEQUENCE OF (size 1..32) OF CoverageAreaInfo-r18
 */
struct CoverageAreaInfoList_r18 {
    CoverageAreaInfo_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB25_r18
 * @note ASN.1：SIB25-r18；源文件第 4108 行。
 * @note SIB25-r18 ::= SEQUENCE { coverageAreaInfoList-r18, lateNonCriticalExtension }
 */
struct SIB25_r18 {
    bool has_coverageAreaInfoList_r18; /**< coverageAreaInfoList-r18 是否存在。 */
    CoverageAreaInfoList_r18 coverageAreaInfoList_r18; /**< ASN.1 coverageAreaInfoList-r18；SEQUENCE OF CoverageAreaInfo_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief CoverageAreaInfo_r18
 * @note ASN.1：CoverageAreaInfo-r18；源文件第 4116 行。
 * @note CoverageAreaInfo-r18 ::= SEQUENCE { tn-AreaId-r18, tn-ReferenceLocation-r18, tn-DistanceRadius-r18 }
 */
struct CoverageAreaInfo_r18 {
    TN_AreaId_r18 tn_AreaId_r18; /**< ASN.1 tn-AreaId-r18；INTEGER (1..32)，位宽 5 bit。 */
    ReferenceLocation_r17 tn_ReferenceLocation_r18; /**< ASN.1 tn-ReferenceLocation-r18；SIZE 无上界（半约束长度）。 */
    int64_t tn_DistanceRadius_r18; /**< ASN.1 tn-DistanceRadius-r18；INTEGER (0..65535)，位宽 16 bit。 */
};


/**
 * @brief PosSIB_MappingInfo_r16
 * @note ASN.1：PosSIB-MappingInfo-r16；源文件第 4216 行。
 * @note PosSIB-MappingInfo-r16 ::= SEQUENCE OF (size 1..32) OF PosSIB-Type-r16
 */
struct PosSIB_MappingInfo_r16 {
    PosSIB_Type_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PosSchedulingInfo_r16
 * @note ASN.1：PosSchedulingInfo-r16；源文件第 4208 行。
 * @note PosSchedulingInfo-r16 ::= SEQUENCE { offsetToSI-Used-r16, posSI-Periodicity-r16, posSI-BroadcastStatus-...
 */
struct PosSchedulingInfo_r16 {
    bool has_offsetToSI_Used_r16; /**< offsetToSI-Used-r16 是否存在。 */
    PosSchedulingInfo_r16_OffsetToSI_Used_r16 offsetToSI_Used_r16; /**< ASN.1 offsetToSI-Used-r16；枚举；OPTIONAL。 */
    PosSchedulingInfo_r16_PosSI_Periodicity_r16 posSI_Periodicity_r16; /**< ASN.1 posSI-Periodicity-r16；枚举。 */
    PosSchedulingInfo_r16_PosSI_BroadcastStatus_r16 posSI_BroadcastStatus_r16; /**< ASN.1 posSI-BroadcastStatus-r16；枚举。 */
    PosSIB_MappingInfo_r16 posSIB_MappingInfo_r16; /**< ASN.1 posSIB-MappingInfo-r16；SEQUENCE OF PosSIB_Type_r16，SIZE (1..32)。 */
};


/**
 * @brief PosSIB_Type_r16
 * @note ASN.1：PosSIB-Type-r16；源文件第 4218 行。
 * @note PosSIB-Type-r16 ::= SEQUENCE { encrypted-r16, gnss-id-r16, sbas-id-r16, posSibType-r16, areaScope...
 */
struct PosSIB_Type_r16 {
    bool has_encrypted_r16; /**< encrypted-r16 是否存在。 */
    PosSIB_Type_r16_Encrypted_r16 encrypted_r16; /**< ASN.1 encrypted-r16；枚举；OPTIONAL。 */
    bool has_gnss_id_r16; /**< gnss-id-r16 是否存在。 */
    GNSS_ID_r16 gnss_id_r16; /**< ASN.1 gnss-id-r16；结构体；OPTIONAL。 */
    bool has_sbas_id_r16; /**< sbas-id-r16 是否存在。 */
    SBAS_ID_r16 sbas_id_r16; /**< ASN.1 sbas-id-r16；结构体；OPTIONAL。 */
    PosSIB_Type_r16_PosSibType_r16 posSibType_r16; /**< ASN.1 posSibType-r16；枚举。 */
    bool has_areaScope_r16; /**< areaScope-r16 是否存在。 */
    PosSIB_Type_r16_AreaScope_r16 areaScope_r16; /**< ASN.1 areaScope-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SIBpos_r16
 * @note ASN.1：SIBpos-r16；源文件第 4245 行。
 * @note SIBpos-r16 ::= SEQUENCE { assistanceDataSIB-Element-r16, lateNonCriticalExtension }
 */
struct SIBpos_r16 {
    OctetString assistanceDataSIB_Element_r16; /**< ASN.1 assistanceDataSIB-Element-r16；SIZE 无上界（半约束长度）。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief AvailabilityCombinationsPerCell_r16_ExtGroup1
 * @note ASN.1：AvailabilityCombinationsPerCell_r16_ExtGroup1；源文件第 4336 行。
 */
struct AvailabilityCombinationsPerCell_r16_ExtGroup1 {
    bool has_availabilityCombinationsRB_Groups_r17; /**< availabilityCombinationsRB-Groups-r17 是否存在。 */
    AvailabilityCombinationRB_Groups_r17* availabilityCombinationsRB_Groups_r17_items; /**< ASN.1 availabilityCombinationsRB-Groups-r17；SEQUENCE OF AvailabilityCombinationRB_Groups_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t availabilityCombinationsRB_Groups_r17_count; /**< availabilityCombinationsRB-Groups-r17 元素个数。 */
};


/**
 * @brief AvailabilityCombinationsPerCell_r16_ExtGroup2
 * @note ASN.1：AvailabilityCombinationsPerCell_r16_ExtGroup2；源文件第 4339 行。
 */
struct AvailabilityCombinationsPerCell_r16_ExtGroup2 {
    bool has_positionInDCI_AI_RBGroups_v1720; /**< positionInDCI-AI-RBGroups-v1720 是否存在。 */
    int64_t positionInDCI_AI_RBGroups_v1720; /**< ASN.1 positionInDCI-AI-RBGroups-v1720；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief AvailabilityCombinationsPerCell_r16
 * @note ASN.1：AvailabilityCombinationsPerCell-r16；源文件第 4330 行。
 * @note AvailabilityCombinationsPerCell-r16 ::= SEQUENCE { availabilityCombinationsPerCellIndex-r16, iab-DU-CellIdentity-r16,...
 */
struct AvailabilityCombinationsPerCell_r16 {
    AvailabilityCombinationsPerCellIndex_r16 availabilityCombinationsPerCellIndex_r16; /**< ASN.1 availabilityCombinationsPerCellIndex-r16；INTEGER (0..512)，位宽 10 bit。 */
    CellIdentity iab_DU_CellIdentity_r16; /**< ASN.1 iab-DU-CellIdentity-r16；SIZE (36)，定长。 */
    bool has_positionInDCI_AI_r16; /**< positionInDCI-AI-r16 是否存在。 */
    int64_t positionInDCI_AI_r16; /**< ASN.1 positionInDCI-AI-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    AvailabilityCombination_r16* availabilityCombinations_r16_items; /**< ASN.1 availabilityCombinations-r16；SEQUENCE OF AvailabilityCombination_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t availabilityCombinations_r16_count; /**< availabilityCombinations-r16 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    AvailabilityCombinationsPerCell_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    AvailabilityCombinationsPerCell_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief AvailabilityCombination_r16
 * @note ASN.1：AvailabilityCombination-r16；源文件第 4346 行。
 * @note AvailabilityCombination-r16 ::= SEQUENCE { availabilityCombinationId-r16, resourceAvailability-r16 }
 */
struct AvailabilityCombination_r16 {
    AvailabilityCombinationId_r16 availabilityCombinationId_r16; /**< ASN.1 availabilityCombinationId-r16；INTEGER (0..511)，位宽 9 bit。 */
    int64_t* resourceAvailability_r16_items; /**< ASN.1 resourceAvailability-r16；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t resourceAvailability_r16_count; /**< resourceAvailability-r16 元素个数。 */
};


/**
 * @brief AvailabilityCombinationRB_Groups_r17
 * @note ASN.1：AvailabilityCombinationRB-Groups-r17；源文件第 4353 行。
 * @note AvailabilityCombinationRB-Groups-r17 ::= SEQUENCE { availabilityCombinationId-r17, rb-SetGroups-r17, resourceAvailabil...
 */
struct AvailabilityCombinationRB_Groups_r17 {
    AvailabilityCombinationId_r16 availabilityCombinationId_r17; /**< ASN.1 availabilityCombinationId-r17；INTEGER (0..511)，位宽 9 bit。 */
    bool has_rb_SetGroups_r17; /**< rb-SetGroups-r17 是否存在。 */
    RB_SetGroup_r17* rb_SetGroups_r17_items; /**< ASN.1 rb-SetGroups-r17；SEQUENCE OF RB_SetGroup_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rb_SetGroups_r17_count; /**< rb-SetGroups-r17 元素个数。 */
    bool has_resourceAvailability_r17; /**< resourceAvailability-r17 是否存在。 */
    int64_t* resourceAvailability_r17_items; /**< ASN.1 resourceAvailability-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceAvailability_r17_count; /**< resourceAvailability-r17 元素个数。 */
};


/**
 * @brief RB_SetGroup_r17
 * @note ASN.1：RB-SetGroup-r17；源文件第 4359 行。
 * @note RB-SetGroup-r17 ::= SEQUENCE { resourceAvailability-r17, rb-Sets-r17 }
 */
struct RB_SetGroup_r17 {
    bool has_resourceAvailability_r17; /**< resourceAvailability-r17 是否存在。 */
    int64_t* resourceAvailability_r17_items; /**< ASN.1 resourceAvailability-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceAvailability_r17_count; /**< resourceAvailability-r17 元素个数。 */
    bool has_rb_Sets_r17; /**< rb-Sets-r17 是否存在。 */
    int64_t* rb_Sets_r17_items; /**< ASN.1 rb-Sets-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rb_Sets_r17_count; /**< rb-Sets-r17 元素个数。 */
};


/**
 * @brief AvailabilityIndicator_r16
 * @note ASN.1：AvailabilityIndicator-r16；源文件第 4367 行。
 * @note AvailabilityIndicator-r16 ::= SEQUENCE { ai-RNTI-r16, dci-PayloadSizeAI-r16, availableCombToAddModList-r16,...
 */
struct AvailabilityIndicator_r16 {
    RNTI_Value ai_RNTI_r16; /**< ASN.1 ai-RNTI-r16；INTEGER (0..65535)，位宽 16 bit。 */
    int64_t dci_PayloadSizeAI_r16; /**< ASN.1 dci-PayloadSizeAI-r16；INTEGER (1..128)，位宽 7 bit。 */
    bool has_availableCombToAddModList_r16; /**< availableCombToAddModList-r16 是否存在。 */
    AvailabilityCombinationsPerCell_r16* availableCombToAddModList_r16_items; /**< ASN.1 availableCombToAddModList-r16；SEQUENCE OF AvailabilityCombinationsPerCell_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t availableCombToAddModList_r16_count; /**< availableCombToAddModList-r16 元素个数。 */
    bool has_availableCombToReleaseList_r16; /**< availableCombToReleaseList-r16 是否存在。 */
    AvailabilityCombinationsPerCellIndex_r16* availableCombToReleaseList_r16_items; /**< ASN.1 availableCombToReleaseList-r16；SEQUENCE OF AvailabilityCombinationsPerCellIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t availableCombToReleaseList_r16_count; /**< availableCombToReleaseList-r16 元素个数。 */
};


/**
 * @brief BeamFailureRecoveryConfig_ExtGroup1
 * @note ASN.1：BeamFailureRecoveryConfig_ExtGroup1；源文件第 4400 行。
 */
struct BeamFailureRecoveryConfig_ExtGroup1 {
    bool has_msg1_SubcarrierSpacing; /**< msg1-SubcarrierSpacing 是否存在。 */
    SubcarrierSpacing msg1_SubcarrierSpacing; /**< ASN.1 msg1-SubcarrierSpacing；枚举；OPTIONAL。 */
};


/**
 * @brief CandidateBeamRSListExt_r16
 * @note ASN.1：CandidateBeamRSListExt-r16；源文件第 4430 行。
 * @note CandidateBeamRSListExt-r16 ::= SEQUENCE OF (size 1..48) OF PRACH-ResourceDedicatedBFR
 */
struct CandidateBeamRSListExt_r16 {
    PRACH_ResourceDedicatedBFR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_CandidateBeamRSListExt_r16
 * @note ASN.1：SetupRelease<CandidateBeamRSListExt-r16>；源文件第 4405 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CandidateBeamRSListExt_r16_Tag {
    SetupRelease_CandidateBeamRSListExt_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CandidateBeamRSListExt_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CandidateBeamRSListExt_r16_Tag;

struct SetupRelease_CandidateBeamRSListExt_r16 {
    SetupRelease_CandidateBeamRSListExt_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CandidateBeamRSListExt_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BeamFailureRecoveryConfig_ExtGroup2
 * @note ASN.1：BeamFailureRecoveryConfig_ExtGroup2；源文件第 4403 行。
 */
struct BeamFailureRecoveryConfig_ExtGroup2 {
    bool has_ra_PrioritizationTwoStep_r16; /**< ra-PrioritizationTwoStep-r16 是否存在。 */
    RA_Prioritization ra_PrioritizationTwoStep_r16; /**< ASN.1 ra-PrioritizationTwoStep-r16；结构体；OPTIONAL。 */
    bool has_candidateBeamRSListExt_v1610; /**< candidateBeamRSListExt-v1610 是否存在。 */
    SetupRelease_CandidateBeamRSListExt_r16 candidateBeamRSListExt_v1610; /**< ASN.1 candidateBeamRSListExt-v1610；结构体；OPTIONAL。 */
};


/**
 * @brief BeamFailureRecoveryConfig_ExtGroup3
 * @note ASN.1：BeamFailureRecoveryConfig_ExtGroup3；源文件第 4407 行。
 */
struct BeamFailureRecoveryConfig_ExtGroup3 {
    bool has_spCell_BFR_CBRA_r16; /**< spCell-BFR-CBRA-r16 是否存在。 */
    BeamFailureRecoveryConfig_ExtGroup3_SpCell_BFR_CBRA_r16 spCell_BFR_CBRA_r16; /**< ASN.1 spCell-BFR-CBRA-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BeamFailureRecoveryConfig
 * @note ASN.1：BeamFailureRecoveryConfig；源文件第 4388 行。
 * @note BeamFailureRecoveryConfig ::= SEQUENCE { rootSequenceIndex-BFR, rach-ConfigBFR, rsrp-ThresholdSSB, candidat...
 */
struct BeamFailureRecoveryConfig {
    bool has_rootSequenceIndex_BFR; /**< rootSequenceIndex-BFR 是否存在。 */
    int64_t rootSequenceIndex_BFR; /**< ASN.1 rootSequenceIndex-BFR；INTEGER (0..137)，位宽 8 bit；OPTIONAL。 */
    bool has_rach_ConfigBFR; /**< rach-ConfigBFR 是否存在。 */
    RACH_ConfigGeneric rach_ConfigBFR; /**< ASN.1 rach-ConfigBFR；结构体；OPTIONAL。 */
    bool has_rsrp_ThresholdSSB; /**< rsrp-ThresholdSSB 是否存在。 */
    RSRP_Range rsrp_ThresholdSSB; /**< ASN.1 rsrp-ThresholdSSB；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_candidateBeamRSList; /**< candidateBeamRSList 是否存在。 */
    PRACH_ResourceDedicatedBFR* candidateBeamRSList_items; /**< ASN.1 candidateBeamRSList；SEQUENCE OF PRACH_ResourceDedicatedBFR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t candidateBeamRSList_count; /**< candidateBeamRSList 元素个数。 */
    bool has_ssb_perRACH_Occasion; /**< ssb-perRACH-Occasion 是否存在。 */
    BeamFailureRecoveryConfig_Ssb_perRACH_Occasion ssb_perRACH_Occasion; /**< ASN.1 ssb-perRACH-Occasion；枚举；OPTIONAL。 */
    bool has_ra_ssb_OccasionMaskIndex; /**< ra-ssb-OccasionMaskIndex 是否存在。 */
    int64_t ra_ssb_OccasionMaskIndex; /**< ASN.1 ra-ssb-OccasionMaskIndex；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_recoverySearchSpaceId; /**< recoverySearchSpaceId 是否存在。 */
    SearchSpaceId recoverySearchSpaceId; /**< ASN.1 recoverySearchSpaceId；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_ra_Prioritization; /**< ra-Prioritization 是否存在。 */
    RA_Prioritization ra_Prioritization; /**< ASN.1 ra-Prioritization；结构体；OPTIONAL。 */
    bool has_beamFailureRecoveryTimer; /**< beamFailureRecoveryTimer 是否存在。 */
    BeamFailureRecoveryConfig_BeamFailureRecoveryTimer beamFailureRecoveryTimer; /**< ASN.1 beamFailureRecoveryTimer；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BeamFailureRecoveryConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    BeamFailureRecoveryConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    BeamFailureRecoveryConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BFR_SSB_Resource
 * @note ASN.1：BFR-SSB-Resource；源文件第 4417 行。
 * @note BFR-SSB-Resource ::= SEQUENCE { ssb, ra-PreambleIndex }
 */
struct BFR_SSB_Resource {
    SSB_Index ssb; /**< ASN.1 ssb；INTEGER (0..63)，位宽 6 bit。 */
    int64_t ra_PreambleIndex; /**< ASN.1 ra-PreambleIndex；INTEGER (0..63)，位宽 6 bit。 */
};


/**
 * @brief BFR_CSIRS_Resource
 * @note ASN.1：BFR-CSIRS-Resource；源文件第 4423 行。
 * @note BFR-CSIRS-Resource ::= SEQUENCE { csi-RS, ra-OccasionList, ra-PreambleIndex }
 */
struct BFR_CSIRS_Resource {
    NZP_CSI_RS_ResourceId csi_RS; /**< ASN.1 csi-RS；INTEGER (0..191)，位宽 8 bit。 */
    bool has_ra_OccasionList; /**< ra-OccasionList 是否存在。 */
    int64_t* ra_OccasionList_items; /**< ASN.1 ra-OccasionList；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ra_OccasionList_count; /**< ra-OccasionList 元素个数。 */
    bool has_ra_PreambleIndex; /**< ra-PreambleIndex 是否存在。 */
    int64_t ra_PreambleIndex; /**< ASN.1 ra-PreambleIndex；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief PRACH_ResourceDedicatedBFR
 * @note ASN.1：PRACH-ResourceDedicatedBFR；源文件第 4412 行。
 * @note PRACH-ResourceDedicatedBFR ::= CHOICE { ssb, csi-RS }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PRACH_ResourceDedicatedBFR_Tag {
    PRACH_ResourceDedicatedBFR_Tag_ssb = 0, /**< ASN.1 ssb */
    PRACH_ResourceDedicatedBFR_Tag_csi_RS = 1, /**< ASN.1 csi-RS */
} PRACH_ResourceDedicatedBFR_Tag;

struct PRACH_ResourceDedicatedBFR {
    PRACH_ResourceDedicatedBFR_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BFR_SSB_Resource ssb; /**< ASN.1 ssb */
        BFR_CSIRS_Resource csi_RS; /**< ASN.1 csi-RS */
    } u;
};


/**
 * @brief BeamFailureRecoveryRSConfig_r16_ExtGroup1
 * @note ASN.1：BeamFailureRecoveryRSConfig_r16_ExtGroup1；源文件第 4439 行。
 */
struct BeamFailureRecoveryRSConfig_r16_ExtGroup1 {
    bool has_candidateBeamRS_List2_r17; /**< candidateBeamRS-List2-r17 是否存在。 */
    CandidateBeamRS_r16* candidateBeamRS_List2_r17_items; /**< ASN.1 candidateBeamRS-List2-r17；SEQUENCE OF CandidateBeamRS_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t candidateBeamRS_List2_r17_count; /**< candidateBeamRS-List2-r17 元素个数。 */
};


/**
 * @brief BeamFailureRecoveryRSConfig_r16
 * @note ASN.1：BeamFailureRecoveryRSConfig-r16；源文件第 4435 行。
 * @note BeamFailureRecoveryRSConfig-r16 ::= SEQUENCE { rsrp-ThresholdBFR-r16, candidateBeamRS-List-r16, candidateBeamRS-L...
 */
struct BeamFailureRecoveryRSConfig_r16 {
    bool has_rsrp_ThresholdBFR_r16; /**< rsrp-ThresholdBFR-r16 是否存在。 */
    RSRP_Range rsrp_ThresholdBFR_r16; /**< ASN.1 rsrp-ThresholdBFR-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_candidateBeamRS_List_r16; /**< candidateBeamRS-List-r16 是否存在。 */
    CandidateBeamRS_r16* candidateBeamRS_List_r16_items; /**< ASN.1 candidateBeamRS-List-r16；SEQUENCE OF CandidateBeamRS_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t candidateBeamRS_List_r16_count; /**< candidateBeamRS-List-r16 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BeamFailureRecoveryRSConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BH_LogicalChannelIdentity_r16
 * @note ASN.1：BH-LogicalChannelIdentity-r16；源文件第 4465 行。
 * @note BH-LogicalChannelIdentity-r16 ::= CHOICE { bh-LogicalChannelIdentity-r16, bh-LogicalChannelIdentityExt-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BH_LogicalChannelIdentity_r16_Tag {
    BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentity_r16 = 0, /**< ASN.1 bh-LogicalChannelIdentity-r16 */
    BH_LogicalChannelIdentity_r16_Tag_bh_LogicalChannelIdentityExt_r16 = 1, /**< ASN.1 bh-LogicalChannelIdentityExt-r16 */
} BH_LogicalChannelIdentity_r16_Tag;

struct BH_LogicalChannelIdentity_r16 {
    BH_LogicalChannelIdentity_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        LogicalChannelIdentity bh_LogicalChannelIdentity_r16; /**< ASN.1 bh-LogicalChannelIdentity-r16 */
        BH_LogicalChannelIdentity_Ext_r16 bh_LogicalChannelIdentityExt_r16; /**< ASN.1 bh-LogicalChannelIdentityExt-r16 */
    } u;
};


/**
 * @brief LogicalChannelConfig_ExtGroup1
 * @note ASN.1：LogicalChannelConfig_ExtGroup1；源文件第 7134 行。
 */
struct LogicalChannelConfig_ExtGroup1 {
    bool has_channelAccessPriority_r16; /**< channelAccessPriority-r16 是否存在。 */
    int64_t channelAccessPriority_r16; /**< ASN.1 channelAccessPriority-r16；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_bitRateMultiplier_r16; /**< bitRateMultiplier-r16 是否存在。 */
    LogicalChannelConfig_ExtGroup1_BitRateMultiplier_r16 bitRateMultiplier_r16; /**< ASN.1 bitRateMultiplier-r16；枚举；OPTIONAL。 */
};


/**
 * @brief LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1
 * @note ASN.1：LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1；源文件第 7123 行。
 */
struct LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1 {
    bool has_allowedCG_List_r16; /**< allowedCG-List-r16 是否存在。 */
    ConfiguredGrantConfigIndexMAC_r16* allowedCG_List_r16_items; /**< ASN.1 allowedCG-List-r16；SEQUENCE OF ConfiguredGrantConfigIndexMAC_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t allowedCG_List_r16_count; /**< allowedCG-List-r16 元素个数。 */
    bool has_allowedPHY_PriorityIndex_r16; /**< allowedPHY-PriorityIndex-r16 是否存在。 */
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1_AllowedPHY_PriorityIndex_r16 allowedPHY_PriorityIndex_r16; /**< ASN.1 allowedPHY-PriorityIndex-r16；枚举；OPTIONAL。 */
};


/**
 * @brief LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2
 * @note ASN.1：LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2；源文件第 7128 行。
 */
struct LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2 {
    bool has_logicalChannelGroupIAB_Ext_r17; /**< logicalChannelGroupIAB-Ext-r17 是否存在。 */
    int64_t logicalChannelGroupIAB_Ext_r17; /**< ASN.1 logicalChannelGroupIAB-Ext-r17；INTEGER (0..255)，位宽 8 bit；OPTIONAL。 */
    bool has_allowedHARQ_mode_r17; /**< allowedHARQ-mode-r17 是否存在。 */
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2_AllowedHARQ_mode_r17 allowedHARQ_mode_r17; /**< ASN.1 allowedHARQ-mode-r17；枚举；OPTIONAL。 */
};


/**
 * @brief LogicalChannelConfig_Ul_SpecificParameters
 * @note ASN.1：ul-SpecificParameters；源文件第 7105 行。
 * @note SEQUENCE { priority, prioritisedBitRate, bucketSizeDuration, allowedServingCe...
 */
struct LogicalChannelConfig_Ul_SpecificParameters {
    int64_t priority; /**< ASN.1 priority；INTEGER (1..16)，位宽 4 bit。 */
    LogicalChannelConfig_Ul_SpecificParameters_PrioritisedBitRate prioritisedBitRate; /**< ASN.1 prioritisedBitRate；枚举。 */
    LogicalChannelConfig_Ul_SpecificParameters_BucketSizeDuration bucketSizeDuration; /**< ASN.1 bucketSizeDuration；枚举。 */
    bool has_allowedServingCells; /**< allowedServingCells 是否存在。 */
    ServCellIndex* allowedServingCells_items; /**< ASN.1 allowedServingCells；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t allowedServingCells_count; /**< allowedServingCells 元素个数。 */
    bool has_allowedSCS_List; /**< allowedSCS-List 是否存在。 */
    SubcarrierSpacing* allowedSCS_List_items; /**< ASN.1 allowedSCS-List；SEQUENCE OF SubcarrierSpacing，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t allowedSCS_List_count; /**< allowedSCS-List 元素个数。 */
    bool has_maxPUSCH_Duration; /**< maxPUSCH-Duration 是否存在。 */
    LogicalChannelConfig_Ul_SpecificParameters_MaxPUSCH_Duration maxPUSCH_Duration; /**< ASN.1 maxPUSCH-Duration；枚举；OPTIONAL。 */
    bool has_configuredGrantType1Allowed; /**< configuredGrantType1Allowed 是否存在。 */
    LogicalChannelConfig_Ul_SpecificParameters_ConfiguredGrantType1Allowed configuredGrantType1Allowed; /**< ASN.1 configuredGrantType1Allowed；枚举；OPTIONAL。 */
    bool has_logicalChannelGroup; /**< logicalChannelGroup 是否存在。 */
    int64_t logicalChannelGroup; /**< ASN.1 logicalChannelGroup；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_schedulingRequestID; /**< schedulingRequestID 是否存在。 */
    SchedulingRequestId schedulingRequestID; /**< ASN.1 schedulingRequestID；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool logicalChannelSR_Mask; /**< ASN.1 logicalChannelSR-Mask；BOOLEAN，1 bit。 */
    bool logicalChannelSR_DelayTimerApplied; /**< ASN.1 logicalChannelSR-DelayTimerApplied；BOOLEAN，1 bit。 */
    /* 直接扩展添加项（标准 PER：每项各自一个位图位 + 开放类型） */
    bool has_bitRateQueryProhibitTimer; /**< bitRateQueryProhibitTimer 是否存在。 */
    LogicalChannelConfig_Ul_SpecificParameters_BitRateQueryProhibitTimer bitRateQueryProhibitTimer; /**< ASN.1 bitRateQueryProhibitTimer；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    LogicalChannelConfig_Ul_SpecificParameters_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief LogicalChannelConfig
 * @note ASN.1：LogicalChannelConfig；源文件第 7104 行。
 * @note LogicalChannelConfig ::= SEQUENCE { ul-SpecificParameters, channelAccessPriority-r16, bitRateMultiplie...
 */
struct LogicalChannelConfig {
    bool has_ul_SpecificParameters; /**< ul-SpecificParameters 是否存在。 */
    LogicalChannelConfig_Ul_SpecificParameters ul_SpecificParameters; /**< ASN.1 ul-SpecificParameters；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    LogicalChannelConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UL_AM_RLC
 * @note ASN.1：UL-AM-RLC；源文件第 11900 行。
 * @note UL-AM-RLC ::= SEQUENCE { sn-FieldLength, t-PollRetransmit, pollPDU, pollByte, maxRetxThresh...
 */
struct UL_AM_RLC {
    bool has_sn_FieldLength; /**< sn-FieldLength 是否存在。 */
    SN_FieldLengthAM sn_FieldLength; /**< ASN.1 sn-FieldLength；枚举；OPTIONAL。 */
    T_PollRetransmit t_PollRetransmit; /**< ASN.1 t-PollRetransmit；枚举。 */
    PollPDU pollPDU; /**< ASN.1 pollPDU；枚举。 */
    PollByte pollByte; /**< ASN.1 pollByte；枚举。 */
    UL_AM_RLC_MaxRetxThreshold maxRetxThreshold; /**< ASN.1 maxRetxThreshold；枚举。 */
};


/**
 * @brief DL_AM_RLC
 * @note ASN.1：DL-AM-RLC；源文件第 11908 行。
 * @note DL-AM-RLC ::= SEQUENCE { sn-FieldLength, t-Reassembly, t-StatusProhibit }
 */
struct DL_AM_RLC {
    bool has_sn_FieldLength; /**< sn-FieldLength 是否存在。 */
    SN_FieldLengthAM sn_FieldLength; /**< ASN.1 sn-FieldLength；枚举；OPTIONAL。 */
    T_Reassembly t_Reassembly; /**< ASN.1 t-Reassembly；枚举。 */
    T_StatusProhibit t_StatusProhibit; /**< ASN.1 t-StatusProhibit；枚举。 */
};


/**
 * @brief RLC_Config_Am
 * @note ASN.1：am；源文件第 11883 行。
 * @note SEQUENCE { ul-AM-RLC, dl-AM-RLC }
 */
struct RLC_Config_Am {
    UL_AM_RLC ul_AM_RLC; /**< ASN.1 ul-AM-RLC；结构体。 */
    DL_AM_RLC dl_AM_RLC; /**< ASN.1 dl-AM-RLC；结构体。 */
};


/**
 * @brief UL_UM_RLC
 * @note ASN.1：UL-UM-RLC；源文件第 11914 行。
 * @note UL-UM-RLC ::= SEQUENCE { sn-FieldLength }
 */
struct UL_UM_RLC {
    bool has_sn_FieldLength; /**< sn-FieldLength 是否存在。 */
    SN_FieldLengthUM sn_FieldLength; /**< ASN.1 sn-FieldLength；枚举；OPTIONAL。 */
};


/**
 * @brief DL_UM_RLC
 * @note ASN.1：DL-UM-RLC；源文件第 11918 行。
 * @note DL-UM-RLC ::= SEQUENCE { sn-FieldLength, t-Reassembly }
 */
struct DL_UM_RLC {
    bool has_sn_FieldLength; /**< sn-FieldLength 是否存在。 */
    SN_FieldLengthUM sn_FieldLength; /**< ASN.1 sn-FieldLength；枚举；OPTIONAL。 */
    T_Reassembly t_Reassembly; /**< ASN.1 t-Reassembly；枚举。 */
};


/**
 * @brief RLC_Config_Um_Bi_Directional
 * @note ASN.1：um-Bi-Directional；源文件第 11887 行。
 * @note SEQUENCE { ul-UM-RLC, dl-UM-RLC }
 */
struct RLC_Config_Um_Bi_Directional {
    UL_UM_RLC ul_UM_RLC; /**< ASN.1 ul-UM-RLC；结构体。 */
    DL_UM_RLC dl_UM_RLC; /**< ASN.1 dl-UM-RLC；结构体。 */
};


/**
 * @brief RLC_Config_Um_Uni_Directional_UL
 * @note ASN.1：um-Uni-Directional-UL；源文件第 11891 行。
 * @note SEQUENCE { ul-UM-RLC }
 */
struct RLC_Config_Um_Uni_Directional_UL {
    UL_UM_RLC ul_UM_RLC; /**< ASN.1 ul-UM-RLC；结构体。 */
};


/**
 * @brief RLC_Config_Um_Uni_Directional_DL
 * @note ASN.1：um-Uni-Directional-DL；源文件第 11894 行。
 * @note SEQUENCE { dl-UM-RLC }
 */
struct RLC_Config_Um_Uni_Directional_DL {
    DL_UM_RLC dl_UM_RLC; /**< ASN.1 dl-UM-RLC；结构体。 */
};


/**
 * @brief RLC_Config
 * @note ASN.1：RLC-Config；源文件第 11882 行。
 * @note RLC-Config ::= CHOICE { am, um-Bi-Directional, um-Uni-Directional-UL, um-Uni-Directional-DL }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLC_Config_Tag {
    RLC_Config_Tag_am = 0, /**< ASN.1 am */
    RLC_Config_Tag_um_Bi_Directional = 1, /**< ASN.1 um-Bi-Directional */
    RLC_Config_Tag_um_Uni_Directional_UL = 2, /**< ASN.1 um-Uni-Directional-UL */
    RLC_Config_Tag_um_Uni_Directional_DL = 3, /**< ASN.1 um-Uni-Directional-DL */
} RLC_Config_Tag;

struct RLC_Config {
    RLC_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RLC_Config_Am am; /**< ASN.1 am */
        RLC_Config_Um_Bi_Directional um_Bi_Directional; /**< ASN.1 um-Bi-Directional */
        RLC_Config_Um_Uni_Directional_UL um_Uni_Directional_UL; /**< ASN.1 um-Uni-Directional-UL */
        RLC_Config_Um_Uni_Directional_DL um_Uni_Directional_DL; /**< ASN.1 um-Uni-Directional-DL */
    } u;
};


/**
 * @brief BH_RLC_ChannelConfig_r16
 * @note ASN.1：BH-RLC-ChannelConfig-r16；源文件第 4478 行。
 * @note BH-RLC-ChannelConfig-r16 ::= SEQUENCE { bh-LogicalChannelIdentity-r16, bh-RLC-ChannelID-r16, reestablishRL...
 */
struct BH_RLC_ChannelConfig_r16 {
    bool has_bh_LogicalChannelIdentity_r16; /**< bh-LogicalChannelIdentity-r16 是否存在。 */
    BH_LogicalChannelIdentity_r16 bh_LogicalChannelIdentity_r16; /**< ASN.1 bh-LogicalChannelIdentity-r16；结构体；OPTIONAL。 */
    BH_RLC_ChannelID_r16 bh_RLC_ChannelID_r16; /**< ASN.1 bh-RLC-ChannelID-r16；SIZE (16)，定长。 */
    bool has_reestablishRLC_r16; /**< reestablishRLC-r16 是否存在。 */
    BH_RLC_ChannelConfig_r16_ReestablishRLC_r16 reestablishRLC_r16; /**< ASN.1 reestablishRLC-r16；枚举；OPTIONAL。 */
    bool has_rlc_Config_r16; /**< rlc-Config-r16 是否存在。 */
    RLC_Config rlc_Config_r16; /**< ASN.1 rlc-Config-r16；结构体；OPTIONAL。 */
    bool has_mac_LogicalChannelConfig_r16; /**< mac-LogicalChannelConfig-r16 是否存在。 */
    LogicalChannelConfig mac_LogicalChannelConfig_r16; /**< ASN.1 mac-LogicalChannelConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SPS_ConfigToAddModList_r16
 * @note ASN.1：SPS-ConfigToAddModList-r16；源文件第 4565 行。
 * @note SPS-ConfigToAddModList-r16 ::= SEQUENCE OF (size 1..8) OF SPS-Config
 */
struct SPS_ConfigToAddModList_r16 {
    SPS_Config* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SPS_ConfigToReleaseList_r16
 * @note ASN.1：SPS-ConfigToReleaseList-r16；源文件第 4567 行。
 * @note SPS-ConfigToReleaseList-r16 ::= SEQUENCE OF (size 1..8) OF SPS-ConfigIndex-r16
 */
struct SPS_ConfigToReleaseList_r16 {
    SPS_ConfigIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SPS_ConfigDeactivationStateList_r16
 * @note ASN.1：SPS-ConfigDeactivationStateList-r16；源文件第 4571 行。
 * @note SPS-ConfigDeactivationStateList-r16 ::= SEQUENCE OF (size 1..16) OF SPS-ConfigDeactivationState-r16
 */
struct SPS_ConfigDeactivationStateList_r16 {
    SPS_ConfigDeactivationState_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_BeamFailureRecoveryRSConfig_r16
 * @note ASN.1：SetupRelease<BeamFailureRecoveryRSConfig-r16>；源文件第 4546 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag {
    SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag;

struct SetupRelease_BeamFailureRecoveryRSConfig_r16 {
    SetupRelease_BeamFailureRecoveryRSConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BeamFailureRecoveryRSConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_DownlinkDedicated_ExtGroup1
 * @note ASN.1：BWP_DownlinkDedicated_ExtGroup1；源文件第 4542 行。
 */
struct BWP_DownlinkDedicated_ExtGroup1 {
    bool has_sps_ConfigToAddModList_r16; /**< sps-ConfigToAddModList-r16 是否存在。 */
    SPS_ConfigToAddModList_r16 sps_ConfigToAddModList_r16; /**< ASN.1 sps-ConfigToAddModList-r16；SEQUENCE OF SPS_Config，SIZE (1..8)；OPTIONAL。 */
    bool has_sps_ConfigToReleaseList_r16; /**< sps-ConfigToReleaseList-r16 是否存在。 */
    SPS_ConfigToReleaseList_r16 sps_ConfigToReleaseList_r16; /**< ASN.1 sps-ConfigToReleaseList-r16；SEQUENCE OF SPS_ConfigIndex_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_sps_ConfigDeactivationStateList_r16; /**< sps-ConfigDeactivationStateList-r16 是否存在。 */
    SPS_ConfigDeactivationStateList_r16 sps_ConfigDeactivationStateList_r16; /**< ASN.1 sps-ConfigDeactivationStateList-r16；SEQUENCE OF SPS_ConfigDeactivationState_r16，SIZE (1..16)；OPTIONAL。 */
    bool has_beamFailureRecoverySCellConfig_r16; /**< beamFailureRecoverySCellConfig-r16 是否存在。 */
    SetupRelease_BeamFailureRecoveryRSConfig_r16 beamFailureRecoverySCellConfig_r16; /**< ASN.1 beamFailureRecoverySCellConfig-r16；结构体；OPTIONAL。 */
    bool has_sl_PDCCH_Config_r16; /**< sl-PDCCH-Config-r16 是否存在。 */
    SetupRelease_PDCCH_Config sl_PDCCH_Config_r16; /**< ASN.1 sl-PDCCH-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_V2X_PDCCH_Config_r16; /**< sl-V2X-PDCCH-Config-r16 是否存在。 */
    SetupRelease_PDCCH_Config sl_V2X_PDCCH_Config_r16; /**< ASN.1 sl-V2X-PDCCH-Config-r16；结构体；OPTIONAL。 */
};


/**
 * @brief DL_PPW_PreConfigToAddModList_r17
 * @note ASN.1：DL-PPW-PreConfigToAddModList-r17；源文件第 4573 行。
 * @note DL-PPW-PreConfigToAddModList-r17 ::= SEQUENCE OF (size 1..4) OF DL-PPW-PreConfig-r17
 */
struct DL_PPW_PreConfigToAddModList_r17 {
    DL_PPW_PreConfig_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief DL_PPW_PreConfigToReleaseList_r17
 * @note ASN.1：DL-PPW-PreConfigToReleaseList-r17；源文件第 4575 行。
 * @note DL-PPW-PreConfigToReleaseList-r17 ::= SEQUENCE OF (size 1..4) OF DL-PPW-ID-r17
 */
struct DL_PPW_PreConfigToReleaseList_r17 {
    DL_PPW_ID_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SPS_ConfigMulticastToAddModList_r17
 * @note ASN.1：SPS-ConfigMulticastToAddModList-r17；源文件第 5086 行。
 * @note SPS-ConfigMulticastToAddModList-r17 ::= SEQUENCE OF (size 1..8) OF SPS-Config
 */
struct SPS_ConfigMulticastToAddModList_r17 {
    SPS_Config* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SPS_ConfigMulticastToReleaseList_r17
 * @note ASN.1：SPS-ConfigMulticastToReleaseList-r17；源文件第 5088 行。
 * @note SPS-ConfigMulticastToReleaseList-r17 ::= SEQUENCE OF (size 1..8) OF SPS-ConfigIndex-r16
 */
struct SPS_ConfigMulticastToReleaseList_r17 {
    SPS_ConfigIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CFR_ConfigMulticast_r17
 * @note ASN.1：CFR-ConfigMulticast-r17；源文件第 5078 行。
 * @note CFR-ConfigMulticast-r17 ::= SEQUENCE { locationAndBandwidthMulticast-r17, pdcch-ConfigMulticast-r17, pdsc...
 */
struct CFR_ConfigMulticast_r17 {
    bool has_locationAndBandwidthMulticast_r17; /**< locationAndBandwidthMulticast-r17 是否存在。 */
    int64_t locationAndBandwidthMulticast_r17; /**< ASN.1 locationAndBandwidthMulticast-r17；INTEGER (0..37949)，位宽 16 bit；OPTIONAL。 */
    bool has_pdcch_ConfigMulticast_r17; /**< pdcch-ConfigMulticast-r17 是否存在。 */
    PDCCH_Config pdcch_ConfigMulticast_r17; /**< ASN.1 pdcch-ConfigMulticast-r17；结构体；OPTIONAL。 */
    bool has_pdsch_ConfigMulticast_r17; /**< pdsch-ConfigMulticast-r17 是否存在。 */
    PDSCH_Config pdsch_ConfigMulticast_r17; /**< ASN.1 pdsch-ConfigMulticast-r17；结构体；OPTIONAL。 */
    bool has_sps_ConfigMulticastToAddModList_r17; /**< sps-ConfigMulticastToAddModList-r17 是否存在。 */
    SPS_ConfigMulticastToAddModList_r17 sps_ConfigMulticastToAddModList_r17; /**< ASN.1 sps-ConfigMulticastToAddModList-r17；SEQUENCE OF SPS_Config，SIZE (1..8)；OPTIONAL。 */
    bool has_sps_ConfigMulticastToReleaseList_r17; /**< sps-ConfigMulticastToReleaseList-r17 是否存在。 */
    SPS_ConfigMulticastToReleaseList_r17 sps_ConfigMulticastToReleaseList_r17; /**< ASN.1 sps-ConfigMulticastToReleaseList-r17；SEQUENCE OF SPS_ConfigIndex_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SetupRelease_CFR_ConfigMulticast_r17
 * @note ASN.1：SetupRelease<CFR-ConfigMulticast-r17>；源文件第 4554 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CFR_ConfigMulticast_r17_Tag {
    SetupRelease_CFR_ConfigMulticast_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CFR_ConfigMulticast_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CFR_ConfigMulticast_r17_Tag;

struct SetupRelease_CFR_ConfigMulticast_r17 {
    SetupRelease_CFR_ConfigMulticast_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CFR_ConfigMulticast_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_DownlinkDedicated_ExtGroup2
 * @note ASN.1：BWP_DownlinkDedicated_ExtGroup2；源文件第 4550 行。
 */
struct BWP_DownlinkDedicated_ExtGroup2 {
    bool has_preConfGapStatus_r17; /**< preConfGapStatus-r17 是否存在。 */
    BitString preConfGapStatus_r17; /**< ASN.1 preConfGapStatus-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_beamFailureRecoverySpCellConfig_r17; /**< beamFailureRecoverySpCellConfig-r17 是否存在。 */
    SetupRelease_BeamFailureRecoveryRSConfig_r16 beamFailureRecoverySpCellConfig_r17; /**< ASN.1 beamFailureRecoverySpCellConfig-r17；结构体；OPTIONAL。 */
    bool has_harq_FeedbackEnablingforSPSactive_r17; /**< harq-FeedbackEnablingforSPSactive-r17 是否存在。 */
    bool harq_FeedbackEnablingforSPSactive_r17; /**< ASN.1 harq-FeedbackEnablingforSPSactive-r17；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_cfr_ConfigMulticast_r17; /**< cfr-ConfigMulticast-r17 是否存在。 */
    SetupRelease_CFR_ConfigMulticast_r17 cfr_ConfigMulticast_r17; /**< ASN.1 cfr-ConfigMulticast-r17；结构体；OPTIONAL。 */
    bool has_dl_PPW_PreConfigToAddModList_r17; /**< dl-PPW-PreConfigToAddModList-r17 是否存在。 */
    DL_PPW_PreConfigToAddModList_r17 dl_PPW_PreConfigToAddModList_r17; /**< ASN.1 dl-PPW-PreConfigToAddModList-r17；SEQUENCE OF DL_PPW_PreConfig_r17，SIZE (1..4)；OPTIONAL。 */
    bool has_dl_PPW_PreConfigToReleaseList_r17; /**< dl-PPW-PreConfigToReleaseList-r17 是否存在。 */
    DL_PPW_PreConfigToReleaseList_r17 dl_PPW_PreConfigToReleaseList_r17; /**< ASN.1 dl-PPW-PreConfigToReleaseList-r17；SEQUENCE OF DL_PPW_ID_r17，SIZE (1..4)；OPTIONAL。 */
    bool has_nonCellDefiningSSB_r17; /**< nonCellDefiningSSB-r17 是否存在。 */
    NonCellDefiningSSB_r17 nonCellDefiningSSB_r17; /**< ASN.1 nonCellDefiningSSB-r17；结构体；OPTIONAL。 */
    bool has_servingCellMO_r17; /**< servingCellMO-r17 是否存在。 */
    MeasObjectId servingCellMO_r17; /**< ASN.1 servingCellMO-r17；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief TCI_inDCI_r18
 * @note ASN.1：TCI-inDCI-r18；源文件第 4577 行。
 * @note TCI-inDCI-r18 ::= SEQUENCE { tci-SelectionPresentInDCI-r18, applyIndicatedTCI-StateDCI-1-0-r18 }
 */
struct TCI_inDCI_r18 {
    bool has_tci_SelectionPresentInDCI_r18; /**< tci-SelectionPresentInDCI-r18 是否存在。 */
    TCI_inDCI_r18_Tci_SelectionPresentInDCI_r18 tci_SelectionPresentInDCI_r18; /**< ASN.1 tci-SelectionPresentInDCI-r18；枚举；OPTIONAL。 */
    bool has_applyIndicatedTCI_StateDCI_1_0_r18; /**< applyIndicatedTCI-StateDCI-1-0-r18 是否存在。 */
    TCI_inDCI_r18_ApplyIndicatedTCI_StateDCI_1_0_r18 applyIndicatedTCI_StateDCI_1_0_r18; /**< ASN.1 applyIndicatedTCI-StateDCI-1-0-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_TCI_inDCI_r18
 * @note ASN.1：SetupRelease<TCI-inDCI-r18>；源文件第 4561 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_TCI_inDCI_r18_Tag {
    SetupRelease_TCI_inDCI_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_TCI_inDCI_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_TCI_inDCI_r18_Tag;

struct SetupRelease_TCI_inDCI_r18 {
    SetupRelease_TCI_inDCI_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        TCI_inDCI_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_DownlinkDedicated_ExtGroup3
 * @note ASN.1：BWP_DownlinkDedicated_ExtGroup3；源文件第 4560 行。
 */
struct BWP_DownlinkDedicated_ExtGroup3 {
    bool has_tci_inDCI_18; /**< tci-inDCI-18 是否存在。 */
    SetupRelease_TCI_inDCI_r18 tci_inDCI_18; /**< ASN.1 tci-inDCI-18；结构体；OPTIONAL。 */
};


/**
 * @brief SPS_Config_ExtGroup1
 * @note ASN.1：SPS_Config_ExtGroup1；源文件第 12987 行。
 */
struct SPS_Config_ExtGroup1 {
    bool has_sps_ConfigIndex_r16; /**< sps-ConfigIndex-r16 是否存在。 */
    SPS_ConfigIndex_r16 sps_ConfigIndex_r16; /**< ASN.1 sps-ConfigIndex-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_harq_ProcID_Offset_r16; /**< harq-ProcID-Offset-r16 是否存在。 */
    int64_t harq_ProcID_Offset_r16; /**< ASN.1 harq-ProcID-Offset-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_periodicityExt_r16; /**< periodicityExt-r16 是否存在。 */
    int64_t periodicityExt_r16; /**< ASN.1 periodicityExt-r16；INTEGER (1..5120)，位宽 13 bit；OPTIONAL。 */
    bool has_harq_CodebookID_r16; /**< harq-CodebookID-r16 是否存在。 */
    int64_t harq_CodebookID_r16; /**< ASN.1 harq-CodebookID-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_pdsch_AggregationFactor_r16; /**< pdsch-AggregationFactor-r16 是否存在。 */
    SPS_Config_ExtGroup1_Pdsch_AggregationFactor_r16 pdsch_AggregationFactor_r16; /**< ASN.1 pdsch-AggregationFactor-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SPS_Config_ExtGroup2
 * @note ASN.1：SPS_Config_ExtGroup2；源文件第 12994 行。
 */
struct SPS_Config_ExtGroup2 {
    bool has_sps_HARQ_Deferral_r17; /**< sps-HARQ-Deferral-r17 是否存在。 */
    int64_t sps_HARQ_Deferral_r17; /**< ASN.1 sps-HARQ-Deferral-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_n1PUCCH_AN_PUCCHsSCell_r17; /**< n1PUCCH-AN-PUCCHsSCell-r17 是否存在。 */
    PUCCH_ResourceId n1PUCCH_AN_PUCCHsSCell_r17; /**< ASN.1 n1PUCCH-AN-PUCCHsSCell-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_periodicityExt_r17; /**< periodicityExt-r17 是否存在。 */
    int64_t periodicityExt_r17; /**< ASN.1 periodicityExt-r17；INTEGER (1..40960)，位宽 16 bit；OPTIONAL。 */
    bool has_nrofHARQ_Processes_v1710; /**< nrofHARQ-Processes-v1710 是否存在。 */
    int64_t nrofHARQ_Processes_v1710; /**< ASN.1 nrofHARQ-Processes-v1710；INTEGER (9..32)，位宽 5 bit；OPTIONAL。 */
    bool has_harq_ProcID_Offset_v1700; /**< harq-ProcID-Offset-v1700 是否存在。 */
    int64_t harq_ProcID_Offset_v1700; /**< ASN.1 harq-ProcID-Offset-v1700；INTEGER (16..31)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SPS_Config
 * @note ASN.1：SPS-Config；源文件第 12980 行。
 * @note SPS-Config ::= SEQUENCE { periodicity, nrofHARQ-Processes, n1PUCCH-AN, mcs-Table, sps-Config...
 */
struct SPS_Config {
    SPS_Config_Periodicity periodicity; /**< ASN.1 periodicity；枚举。 */
    int64_t nrofHARQ_Processes; /**< ASN.1 nrofHARQ-Processes；INTEGER (1..8)，位宽 3 bit。 */
    bool has_n1PUCCH_AN; /**< n1PUCCH-AN 是否存在。 */
    PUCCH_ResourceId n1PUCCH_AN; /**< ASN.1 n1PUCCH-AN；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_mcs_Table; /**< mcs-Table 是否存在。 */
    SPS_Config_Mcs_Table mcs_Table; /**< ASN.1 mcs-Table；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SPS_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SPS_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SPS_Config
 * @note ASN.1：SetupRelease<SPS-Config>；源文件第 4539 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SPS_Config_Tag {
    SetupRelease_SPS_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SPS_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SPS_Config_Tag;

struct SetupRelease_SPS_Config {
    SetupRelease_SPS_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SPS_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BeamFailureDetectionSet_r17
 * @note ASN.1：BeamFailureDetectionSet-r17；源文件第 11081 行。
 * @note BeamFailureDetectionSet-r17 ::= SEQUENCE { bfdResourcesToAddModList-r17, bfdResourcesToReleaseList-r17, beamF...
 */
struct BeamFailureDetectionSet_r17 {
    bool has_bfdResourcesToAddModList_r17; /**< bfdResourcesToAddModList-r17 是否存在。 */
    BeamLinkMonitoringRS_r17* bfdResourcesToAddModList_r17_items; /**< ASN.1 bfdResourcesToAddModList-r17；SEQUENCE OF BeamLinkMonitoringRS_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bfdResourcesToAddModList_r17_count; /**< bfdResourcesToAddModList-r17 元素个数。 */
    bool has_bfdResourcesToReleaseList_r17; /**< bfdResourcesToReleaseList-r17 是否存在。 */
    BeamLinkMonitoringRS_Id_r17* bfdResourcesToReleaseList_r17_items; /**< ASN.1 bfdResourcesToReleaseList-r17；SEQUENCE OF BeamLinkMonitoringRS_Id_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bfdResourcesToReleaseList_r17_count; /**< bfdResourcesToReleaseList-r17 元素个数。 */
    bool has_beamFailureInstanceMaxCount_r17; /**< beamFailureInstanceMaxCount-r17 是否存在。 */
    BeamFailureDetectionSet_r17_BeamFailureInstanceMaxCount_r17 beamFailureInstanceMaxCount_r17; /**< ASN.1 beamFailureInstanceMaxCount-r17；枚举；OPTIONAL。 */
    bool has_beamFailureDetectionTimer_r17; /**< beamFailureDetectionTimer-r17 是否存在。 */
    BeamFailureDetectionSet_r17_BeamFailureDetectionTimer_r17 beamFailureDetectionTimer_r17; /**< ASN.1 beamFailureDetectionTimer-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BeamFailureDetection_r17
 * @note ASN.1：BeamFailureDetection-r17；源文件第 11065 行。
 * @note BeamFailureDetection-r17 ::= SEQUENCE { failureDetectionSet1-r17, failureDetectionSet2-r17, additionalPCI-...
 */
struct BeamFailureDetection_r17 {
    bool has_failureDetectionSet1_r17; /**< failureDetectionSet1-r17 是否存在。 */
    BeamFailureDetectionSet_r17 failureDetectionSet1_r17; /**< ASN.1 failureDetectionSet1-r17；结构体；OPTIONAL。 */
    bool has_failureDetectionSet2_r17; /**< failureDetectionSet2-r17 是否存在。 */
    BeamFailureDetectionSet_r17 failureDetectionSet2_r17; /**< ASN.1 failureDetectionSet2-r17；结构体；OPTIONAL。 */
    bool has_additionalPCI_r17; /**< additionalPCI-r17 是否存在。 */
    AdditionalPCIIndex_r17 additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief RadioLinkMonitoringConfig_ExtGroup1
 * @note ASN.1：RadioLinkMonitoringConfig_ExtGroup1；源文件第 11060 行。
 */
struct RadioLinkMonitoringConfig_ExtGroup1 {
    bool has_beamFailure_r17; /**< beamFailure-r17 是否存在。 */
    BeamFailureDetection_r17 beamFailure_r17; /**< ASN.1 beamFailure-r17；结构体；OPTIONAL。 */
};


/**
 * @brief RadioLinkMonitoringConfig
 * @note ASN.1：RadioLinkMonitoringConfig；源文件第 11052 行。
 * @note RadioLinkMonitoringConfig ::= SEQUENCE { failureDetectionResourcesToAddModList, failureDetectionResourcesTo...
 */
struct RadioLinkMonitoringConfig {
    bool has_failureDetectionResourcesToAddModList; /**< failureDetectionResourcesToAddModList 是否存在。 */
    RadioLinkMonitoringRS* failureDetectionResourcesToAddModList_items; /**< ASN.1 failureDetectionResourcesToAddModList；SEQUENCE OF RadioLinkMonitoringRS，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t failureDetectionResourcesToAddModList_count; /**< failureDetectionResourcesToAddModList 元素个数。 */
    bool has_failureDetectionResourcesToReleaseList; /**< failureDetectionResourcesToReleaseList 是否存在。 */
    RadioLinkMonitoringRS_Id* failureDetectionResourcesToReleaseList_items; /**< ASN.1 failureDetectionResourcesToReleaseList；SEQUENCE OF RadioLinkMonitoringRS_Id，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t failureDetectionResourcesToReleaseList_count; /**< failureDetectionResourcesToReleaseList 元素个数。 */
    bool has_beamFailureInstanceMaxCount; /**< beamFailureInstanceMaxCount 是否存在。 */
    RadioLinkMonitoringConfig_BeamFailureInstanceMaxCount beamFailureInstanceMaxCount; /**< ASN.1 beamFailureInstanceMaxCount；枚举；OPTIONAL。 */
    bool has_beamFailureDetectionTimer; /**< beamFailureDetectionTimer 是否存在。 */
    RadioLinkMonitoringConfig_BeamFailureDetectionTimer beamFailureDetectionTimer; /**< ASN.1 beamFailureDetectionTimer；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RadioLinkMonitoringConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_RadioLinkMonitoringConfig
 * @note ASN.1：SetupRelease<RadioLinkMonitoringConfig>；源文件第 4540 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RadioLinkMonitoringConfig_Tag {
    SetupRelease_RadioLinkMonitoringConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RadioLinkMonitoringConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RadioLinkMonitoringConfig_Tag;

struct SetupRelease_RadioLinkMonitoringConfig {
    SetupRelease_RadioLinkMonitoringConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RadioLinkMonitoringConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_DownlinkDedicated
 * @note ASN.1：BWP-DownlinkDedicated；源文件第 4536 行。
 * @note BWP-DownlinkDedicated ::= SEQUENCE { pdcch-Config, pdsch-Config, sps-Config, radioLinkMonitoringConfig,...
 */
struct BWP_DownlinkDedicated {
    bool has_pdcch_Config; /**< pdcch-Config 是否存在。 */
    SetupRelease_PDCCH_Config pdcch_Config; /**< ASN.1 pdcch-Config；结构体；OPTIONAL。 */
    bool has_pdsch_Config; /**< pdsch-Config 是否存在。 */
    SetupRelease_PDSCH_Config pdsch_Config; /**< ASN.1 pdsch-Config；结构体；OPTIONAL。 */
    bool has_sps_Config; /**< sps-Config 是否存在。 */
    SetupRelease_SPS_Config sps_Config; /**< ASN.1 sps-Config；结构体；OPTIONAL。 */
    bool has_radioLinkMonitoringConfig; /**< radioLinkMonitoringConfig 是否存在。 */
    SetupRelease_RadioLinkMonitoringConfig radioLinkMonitoringConfig; /**< ASN.1 radioLinkMonitoringConfig；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BWP_DownlinkDedicated_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    BWP_DownlinkDedicated_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    BWP_DownlinkDedicated_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BWP_Downlink
 * @note ASN.1：BWP-Downlink；源文件第 4516 行。
 * @note BWP-Downlink ::= SEQUENCE { bwp-Id, bwp-Common, bwp-Dedicated }
 */
struct BWP_Downlink {
    BWP_Id bwp_Id; /**< ASN.1 bwp-Id；INTEGER (0..4)，位宽 3 bit。 */
    bool has_bwp_Common; /**< bwp-Common 是否存在。 */
    BWP_DownlinkCommon bwp_Common; /**< ASN.1 bwp-Common；结构体；OPTIONAL。 */
    bool has_bwp_Dedicated; /**< bwp-Dedicated 是否存在。 */
    BWP_DownlinkDedicated bwp_Dedicated; /**< ASN.1 bwp-Dedicated；结构体；OPTIONAL。 */
};


/**
 * @brief SPS_ConfigDeactivationState_r16
 * @note ASN.1：SPS-ConfigDeactivationState-r16；源文件第 4569 行。
 * @note SPS-ConfigDeactivationState-r16 ::= SEQUENCE OF (size 1..8) OF SPS-ConfigIndex-r16
 */
struct SPS_ConfigDeactivationState_r16 {
    SPS_ConfigIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ConfiguredGrantConfigType2DeactivationStateList_r16
 * @note ASN.1：ConfiguredGrantConfigType2DeactivationStateList-r16；源文件第 4691 行。
 * @note ConfiguredGrantConfigType2DeactivationStateList-r16 ::= SEQUENCE OF (size 1..16) OF ConfiguredGrantConfigType2DeactivationState-r16
 */
struct ConfiguredGrantConfigType2DeactivationStateList_r16 {
    ConfiguredGrantConfigType2DeactivationState_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief DL_DataToUL_ACK_r16
 * @note ASN.1：DL-DataToUL-ACK-r16；源文件第 10107 行。
 * @note DL-DataToUL-ACK-r16 ::= SEQUENCE OF (size 1..8) OF DLDataToULACKR16Item
 */
struct DL_DataToUL_ACK_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_DL_DataToUL_ACK_r16
 * @note ASN.1：SetupRelease<DL-DataToUL-ACK-r16>；源文件第 9948 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DL_DataToUL_ACK_r16_Tag {
    SetupRelease_DL_DataToUL_ACK_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DL_DataToUL_ACK_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DL_DataToUL_ACK_r16_Tag;

struct SetupRelease_DL_DataToUL_ACK_r16 {
    SetupRelease_DL_DataToUL_ACK_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DL_DataToUL_ACK_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_AccessConfigListDCI_1_1_r16
 * @note ASN.1：UL-AccessConfigListDCI-1-1-r16；源文件第 10117 行。
 * @note UL-AccessConfigListDCI-1-1-r16 ::= SEQUENCE OF (size 1..16) OF ULAccessConfigListDCI11R16Item
 */
struct UL_AccessConfigListDCI_1_1_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UL_AccessConfigListDCI_1_1_r16
 * @note ASN.1：SetupRelease<UL-AccessConfigListDCI-1-1-r16>；源文件第 9949 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag {
    SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag;

struct SetupRelease_UL_AccessConfigListDCI_1_1_r16 {
    SetupRelease_UL_AccessConfigListDCI_1_1_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_AccessConfigListDCI_1_1_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16
 * @note ASN.1：subslotLengthForPUCCH-r16；源文件第 9950 行。
 * @note CHOICE { normalCP-r16, extendedCP-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag {
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_normalCP_r16 = 0, /**< ASN.1 normalCP-r16 */
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag_extendedCP_r16 = 1, /**< ASN.1 extendedCP-r16 */
} PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag;

struct PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16 {
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_NormalCP_r16 normalCP_r16; /**< ASN.1 normalCP-r16 */
        PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16_ExtendedCP_r16 extendedCP_r16; /**< ASN.1 extendedCP-r16 */
    } u;
};


/**
 * @brief DL_DataToUL_ACK_DCI_1_2_r16
 * @note ASN.1：DL-DataToUL-ACK-DCI-1-2-r16；源文件第 10113 行。
 * @note DL-DataToUL-ACK-DCI-1-2-r16 ::= SEQUENCE OF (size 1..8) OF DLDataToULACKDCI12R16Item
 */
struct DL_DataToUL_ACK_DCI_1_2_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16
 * @note ASN.1：SetupRelease<DL-DataToUL-ACK-DCI-1-2-r16>；源文件第 9954 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag {
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag;

struct SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16 {
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DL_DataToUL_ACK_DCI_1_2_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SPS_PUCCH_AN_List_r16
 * @note ASN.1：SPS-PUCCH-AN-List-r16；源文件第 13019 行。
 * @note SPS-PUCCH-AN-List-r16 ::= SEQUENCE OF (size 1..4) OF SPS-PUCCH-AN-r16
 */
struct SPS_PUCCH_AN_List_r16 {
    SPS_PUCCH_AN_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SPS_PUCCH_AN_List_r16
 * @note ASN.1：SetupRelease<SPS-PUCCH-AN-List-r16>；源文件第 9969 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SPS_PUCCH_AN_List_r16_Tag {
    SetupRelease_SPS_PUCCH_AN_List_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SPS_PUCCH_AN_List_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SPS_PUCCH_AN_List_r16_Tag;

struct SetupRelease_SPS_PUCCH_AN_List_r16 {
    SetupRelease_SPS_PUCCH_AN_List_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SPS_PUCCH_AN_List_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_Config_ExtGroup1
 * @note ASN.1：PUCCH_Config_ExtGroup1；源文件第 9946 行。
 */
struct PUCCH_Config_ExtGroup1 {
    bool has_resourceToAddModListExt_v1610; /**< resourceToAddModListExt-v1610 是否存在。 */
    PUCCH_ResourceExt_v1610* resourceToAddModListExt_v1610_items; /**< ASN.1 resourceToAddModListExt-v1610；SEQUENCE OF PUCCH_ResourceExt_v1610，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceToAddModListExt_v1610_count; /**< resourceToAddModListExt-v1610 元素个数。 */
    bool has_dl_DataToUL_ACK_r16; /**< dl-DataToUL-ACK-r16 是否存在。 */
    SetupRelease_DL_DataToUL_ACK_r16 dl_DataToUL_ACK_r16; /**< ASN.1 dl-DataToUL-ACK-r16；结构体；OPTIONAL。 */
    bool has_ul_AccessConfigListDCI_1_1_r16; /**< ul-AccessConfigListDCI-1-1-r16 是否存在。 */
    SetupRelease_UL_AccessConfigListDCI_1_1_r16 ul_AccessConfigListDCI_1_1_r16; /**< ASN.1 ul-AccessConfigListDCI-1-1-r16；结构体；OPTIONAL。 */
    bool has_subslotLengthForPUCCH_r16; /**< subslotLengthForPUCCH-r16 是否存在。 */
    PUCCH_Config_ExtGroup1_SubslotLengthForPUCCH_r16 subslotLengthForPUCCH_r16; /**< ASN.1 subslotLengthForPUCCH-r16；结构体；OPTIONAL。 */
    bool has_dl_DataToUL_ACK_DCI_1_2_r16; /**< dl-DataToUL-ACK-DCI-1-2-r16 是否存在。 */
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r16 dl_DataToUL_ACK_DCI_1_2_r16; /**< ASN.1 dl-DataToUL-ACK-DCI-1-2-r16；结构体；OPTIONAL。 */
    bool has_numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16; /**< numberOfBitsForPUCCH-ResourceIndicatorDCI-1-2-r16 是否存在。 */
    int64_t numberOfBitsForPUCCH_ResourceIndicatorDCI_1_2_r16; /**< ASN.1 numberOfBitsForPUCCH-ResourceIndicatorDCI-1-2-r16；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_dmrs_UplinkTransformPrecodingPUCCH_r16; /**< dmrs-UplinkTransformPrecodingPUCCH-r16 是否存在。 */
    PUCCH_Config_ExtGroup1_Dmrs_UplinkTransformPrecodingPUCCH_r16 dmrs_UplinkTransformPrecodingPUCCH_r16; /**< ASN.1 dmrs-UplinkTransformPrecodingPUCCH-r16；枚举；OPTIONAL。 */
    bool has_spatialRelationInfoToAddModListSizeExt_v1610; /**< spatialRelationInfoToAddModListSizeExt-v1610 是否存在。 */
    PUCCH_SpatialRelationInfo* spatialRelationInfoToAddModListSizeExt_v1610_items; /**< ASN.1 spatialRelationInfoToAddModListSizeExt-v1610；SEQUENCE OF PUCCH_SpatialRelationInfo，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t spatialRelationInfoToAddModListSizeExt_v1610_count; /**< spatialRelationInfoToAddModListSizeExt-v1610 元素个数。 */
    bool has_spatialRelationInfoToReleaseListSizeExt_v1610; /**< spatialRelationInfoToReleaseListSizeExt-v1610 是否存在。 */
    PUCCH_SpatialRelationInfoId* spatialRelationInfoToReleaseListSizeExt_v1610_items; /**< ASN.1 spatialRelationInfoToReleaseListSizeExt-v1610；SEQUENCE OF PUCCH_SpatialRelationInfoId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t spatialRelationInfoToReleaseListSizeExt_v1610_count; /**< spatialRelationInfoToReleaseListSizeExt-v1610 元素个数。 */
    bool has_spatialRelationInfoToAddModListExt_v1610; /**< spatialRelationInfoToAddModListExt-v1610 是否存在。 */
    PUCCH_SpatialRelationInfoExt_r16* spatialRelationInfoToAddModListExt_v1610_items; /**< ASN.1 spatialRelationInfoToAddModListExt-v1610；SEQUENCE OF PUCCH_SpatialRelationInfoExt_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t spatialRelationInfoToAddModListExt_v1610_count; /**< spatialRelationInfoToAddModListExt-v1610 元素个数。 */
    bool has_spatialRelationInfoToReleaseListExt_v1610; /**< spatialRelationInfoToReleaseListExt-v1610 是否存在。 */
    PUCCH_SpatialRelationInfoId_r16* spatialRelationInfoToReleaseListExt_v1610_items; /**< ASN.1 spatialRelationInfoToReleaseListExt-v1610；SEQUENCE OF PUCCH_SpatialRelationInfoId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t spatialRelationInfoToReleaseListExt_v1610_count; /**< spatialRelationInfoToReleaseListExt-v1610 元素个数。 */
    bool has_resourceGroupToAddModList_r16; /**< resourceGroupToAddModList-r16 是否存在。 */
    PUCCH_ResourceGroup_r16* resourceGroupToAddModList_r16_items; /**< ASN.1 resourceGroupToAddModList-r16；SEQUENCE OF PUCCH_ResourceGroup_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceGroupToAddModList_r16_count; /**< resourceGroupToAddModList-r16 元素个数。 */
    bool has_resourceGroupToReleaseList_r16; /**< resourceGroupToReleaseList-r16 是否存在。 */
    PUCCH_ResourceGroupId_r16* resourceGroupToReleaseList_r16_items; /**< ASN.1 resourceGroupToReleaseList-r16；SEQUENCE OF PUCCH_ResourceGroupId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceGroupToReleaseList_r16_count; /**< resourceGroupToReleaseList-r16 元素个数。 */
    bool has_sps_PUCCH_AN_List_r16; /**< sps-PUCCH-AN-List-r16 是否存在。 */
    SetupRelease_SPS_PUCCH_AN_List_r16 sps_PUCCH_AN_List_r16; /**< ASN.1 sps-PUCCH-AN-List-r16；结构体；OPTIONAL。 */
    bool has_schedulingRequestResourceToAddModListExt_v1610; /**< schedulingRequestResourceToAddModListExt-v1610 是否存在。 */
    SchedulingRequestResourceConfigExt_v1610* schedulingRequestResourceToAddModListExt_v1610_items; /**< ASN.1 schedulingRequestResourceToAddModListExt-v1610；SEQUENCE OF SchedulingRequestResourceConfigExt_v1610，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestResourceToAddModListExt_v1610_count; /**< schedulingRequestResourceToAddModListExt-v1610 元素个数。 */
};


/**
 * @brief PUCCH_FormatConfig
 * @note ASN.1：PUCCH-FormatConfig；源文件第 9998 行。
 * @note PUCCH-FormatConfig ::= SEQUENCE { interslotFrequencyHopping, additionalDMRS, maxCodeRate, nrofSlots,...
 */
struct PUCCH_FormatConfig {
    bool has_interslotFrequencyHopping; /**< interslotFrequencyHopping 是否存在。 */
    PUCCH_FormatConfig_InterslotFrequencyHopping interslotFrequencyHopping; /**< ASN.1 interslotFrequencyHopping；枚举；OPTIONAL。 */
    bool has_additionalDMRS; /**< additionalDMRS 是否存在。 */
    PUCCH_FormatConfig_AdditionalDMRS additionalDMRS; /**< ASN.1 additionalDMRS；枚举；OPTIONAL。 */
    bool has_maxCodeRate; /**< maxCodeRate 是否存在。 */
    PUCCH_MaxCodeRate maxCodeRate; /**< ASN.1 maxCodeRate；枚举；OPTIONAL。 */
    bool has_nrofSlots; /**< nrofSlots 是否存在。 */
    PUCCH_FormatConfig_NrofSlots nrofSlots; /**< ASN.1 nrofSlots；枚举；OPTIONAL。 */
    bool has_pi2BPSK; /**< pi2BPSK 是否存在。 */
    PUCCH_FormatConfig_Pi2BPSK pi2BPSK; /**< ASN.1 pi2BPSK；枚举；OPTIONAL。 */
    bool has_simultaneousHARQ_ACK_CSI; /**< simultaneousHARQ-ACK-CSI 是否存在。 */
    PUCCH_FormatConfig_SimultaneousHARQ_ACK_CSI simultaneousHARQ_ACK_CSI; /**< ASN.1 simultaneousHARQ-ACK-CSI；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PUCCH_FormatConfig
 * @note ASN.1：SetupRelease<PUCCH-FormatConfig>；源文件第 9930 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUCCH_FormatConfig_Tag {
    SetupRelease_PUCCH_FormatConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUCCH_FormatConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUCCH_FormatConfig_Tag;

struct SetupRelease_PUCCH_FormatConfig {
    SetupRelease_PUCCH_FormatConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUCCH_FormatConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_FormatConfigExt_r17
 * @note ASN.1：PUCCH-FormatConfigExt-r17；源文件第 10007 行。
 * @note PUCCH-FormatConfigExt-r17 ::= SEQUENCE { maxCodeRateLP-r17 }
 */
struct PUCCH_FormatConfigExt_r17 {
    bool has_maxCodeRateLP_r17; /**< maxCodeRateLP-r17 是否存在。 */
    PUCCH_MaxCodeRate maxCodeRateLP_r17; /**< ASN.1 maxCodeRateLP-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PUCCH_FormatConfigExt_r17
 * @note ASN.1：SetupRelease<PUCCH-FormatConfigExt-r17>；源文件第 9975 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUCCH_FormatConfigExt_r17_Tag {
    SetupRelease_PUCCH_FormatConfigExt_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUCCH_FormatConfigExt_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUCCH_FormatConfigExt_r17_Tag;

struct SetupRelease_PUCCH_FormatConfigExt_r17 {
    SetupRelease_PUCCH_FormatConfigExt_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUCCH_FormatConfigExt_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_AccessConfigListDCI_1_2_r17
 * @note ASN.1：UL-AccessConfigListDCI-1-2-r17；源文件第 10119 行。
 * @note UL-AccessConfigListDCI-1-2-r17 ::= SEQUENCE OF (size 1..16) OF ULAccessConfigListDCI12R17Item
 */
struct UL_AccessConfigListDCI_1_2_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UL_AccessConfigListDCI_1_2_r17
 * @note ASN.1：SetupRelease<UL-AccessConfigListDCI-1-2-r17>；源文件第 9978 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag {
    SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag;

struct SetupRelease_UL_AccessConfigListDCI_1_2_r17 {
    SetupRelease_UL_AccessConfigListDCI_1_2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_AccessConfigListDCI_1_2_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DL_DataToUL_ACK_r17
 * @note ASN.1：DL-DataToUL-ACK-r17；源文件第 10109 行。
 * @note DL-DataToUL-ACK-r17 ::= SEQUENCE OF (size 1..8) OF DLDataToULACKR17Item
 */
struct DL_DataToUL_ACK_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_DL_DataToUL_ACK_r17
 * @note ASN.1：SetupRelease<DL-DataToUL-ACK-r17>；源文件第 9986 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DL_DataToUL_ACK_r17_Tag {
    SetupRelease_DL_DataToUL_ACK_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DL_DataToUL_ACK_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DL_DataToUL_ACK_r17_Tag;

struct SetupRelease_DL_DataToUL_ACK_r17 {
    SetupRelease_DL_DataToUL_ACK_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DL_DataToUL_ACK_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DL_DataToUL_ACK_DCI_1_2_r17
 * @note ASN.1：DL-DataToUL-ACK-DCI-1-2-r17；源文件第 10115 行。
 * @note DL-DataToUL-ACK-DCI-1-2-r17 ::= SEQUENCE OF (size 1..8) OF DLDataToULACKDCI12R17Item
 */
struct DL_DataToUL_ACK_DCI_1_2_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17
 * @note ASN.1：SetupRelease<DL-DataToUL-ACK-DCI-1-2-r17>；源文件第 9987 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag {
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag;

struct SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17 {
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DL_DataToUL_ACK_DCI_1_2_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_AccessConfigListDCI_1_1_r17
 * @note ASN.1：UL-AccessConfigListDCI-1-1-r17；源文件第 10121 行。
 * @note UL-AccessConfigListDCI-1-1-r17 ::= SEQUENCE OF (size 1..3) OF ULAccessConfigListDCI11R17Item
 */
struct UL_AccessConfigListDCI_1_1_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UL_AccessConfigListDCI_1_1_r17
 * @note ASN.1：SetupRelease<UL-AccessConfigListDCI-1-1-r17>；源文件第 9988 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag {
    SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag;

struct SetupRelease_UL_AccessConfigListDCI_1_1_r17 {
    SetupRelease_UL_AccessConfigListDCI_1_1_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_AccessConfigListDCI_1_1_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DMRS_BundlingPUCCH_Config_r17
 * @note ASN.1：DMRS-BundlingPUCCH-Config-r17；源文件第 6445 行。
 * @note DMRS-BundlingPUCCH-Config-r17 ::= SEQUENCE { pucch-DMRS-Bundling-r17, pucch-TimeDomainWindowLength-r17, pucch-W...
 */
struct DMRS_BundlingPUCCH_Config_r17 {
    bool has_pucch_DMRS_Bundling_r17; /**< pucch-DMRS-Bundling-r17 是否存在。 */
    DMRS_BundlingPUCCH_Config_r17_Pucch_DMRS_Bundling_r17 pucch_DMRS_Bundling_r17; /**< ASN.1 pucch-DMRS-Bundling-r17；枚举；OPTIONAL。 */
    bool has_pucch_TimeDomainWindowLength_r17; /**< pucch-TimeDomainWindowLength-r17 是否存在。 */
    int64_t pucch_TimeDomainWindowLength_r17; /**< ASN.1 pucch-TimeDomainWindowLength-r17；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_pucch_WindowRestart_r17; /**< pucch-WindowRestart-r17 是否存在。 */
    DMRS_BundlingPUCCH_Config_r17_Pucch_WindowRestart_r17 pucch_WindowRestart_r17; /**< ASN.1 pucch-WindowRestart-r17；枚举；OPTIONAL。 */
    bool has_pucch_FrequencyHoppingInterval_r17; /**< pucch-FrequencyHoppingInterval-r17 是否存在。 */
    DMRS_BundlingPUCCH_Config_r17_Pucch_FrequencyHoppingInterval_r17 pucch_FrequencyHoppingInterval_r17; /**< ASN.1 pucch-FrequencyHoppingInterval-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DMRS_BundlingPUCCH_Config_r17
 * @note ASN.1：SetupRelease<DMRS-BundlingPUCCH-Config-r17>；源文件第 9991 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag {
    SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag;

struct SetupRelease_DMRS_BundlingPUCCH_Config_r17 {
    SetupRelease_DMRS_BundlingPUCCH_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DMRS_BundlingPUCCH_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DL_DataToUL_ACK_v1700
 * @note ASN.1：DL-DataToUL-ACK-v1700；源文件第 10111 行。
 * @note DL-DataToUL-ACK-v1700 ::= SEQUENCE OF (size 1..8) OF DLDataToULACKV1700Item
 */
struct DL_DataToUL_ACK_v1700 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_DL_DataToUL_ACK_v1700
 * @note ASN.1：SetupRelease<DL-DataToUL-ACK-v1700>；源文件第 9992 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DL_DataToUL_ACK_v1700_Tag {
    SetupRelease_DL_DataToUL_ACK_v1700_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DL_DataToUL_ACK_v1700_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DL_DataToUL_ACK_v1700_Tag;

struct SetupRelease_DL_DataToUL_ACK_v1700 {
    SetupRelease_DL_DataToUL_ACK_v1700_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DL_DataToUL_ACK_v1700 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DL_DataToUL_ACK_MulticastDCI_Format4_1_r17
 * @note ASN.1：DL-DataToUL-ACK-MulticastDCI-Format4-1-r17；源文件第 10123 行。
 * @note DL-DataToUL-ACK-MulticastDCI-Format4-1-r17 ::= SEQUENCE OF (size 1..8) OF DLDataToULACKMulticastDCIFormat41R17Item
 */
struct DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17
 * @note ASN.1：SetupRelease<DL-DataToUL-ACK-MulticastDCI-Format4-1-r17>；源文件第 9993 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag {
    SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag;

struct SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 {
    SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_Config_ExtGroup2
 * @note ASN.1：PUCCH_Config_ExtGroup2；源文件第 9973 行。
 */
struct PUCCH_Config_ExtGroup2 {
    bool has_format0_r17; /**< format0-r17 是否存在。 */
    SetupRelease_PUCCH_FormatConfig format0_r17; /**< ASN.1 format0-r17；结构体；OPTIONAL。 */
    bool has_format2Ext_r17; /**< format2Ext-r17 是否存在。 */
    SetupRelease_PUCCH_FormatConfigExt_r17 format2Ext_r17; /**< ASN.1 format2Ext-r17；结构体；OPTIONAL。 */
    bool has_format3Ext_r17; /**< format3Ext-r17 是否存在。 */
    SetupRelease_PUCCH_FormatConfigExt_r17 format3Ext_r17; /**< ASN.1 format3Ext-r17；结构体；OPTIONAL。 */
    bool has_format4Ext_r17; /**< format4Ext-r17 是否存在。 */
    SetupRelease_PUCCH_FormatConfigExt_r17 format4Ext_r17; /**< ASN.1 format4Ext-r17；结构体；OPTIONAL。 */
    bool has_ul_AccessConfigListDCI_1_2_r17; /**< ul-AccessConfigListDCI-1-2-r17 是否存在。 */
    SetupRelease_UL_AccessConfigListDCI_1_2_r17 ul_AccessConfigListDCI_1_2_r17; /**< ASN.1 ul-AccessConfigListDCI-1-2-r17；结构体；OPTIONAL。 */
    bool has_mappingPattern_r17; /**< mappingPattern-r17 是否存在。 */
    PUCCH_Config_ExtGroup2_MappingPattern_r17 mappingPattern_r17; /**< ASN.1 mappingPattern-r17；枚举；OPTIONAL。 */
    bool has_powerControlSetInfoToAddModList_r17; /**< powerControlSetInfoToAddModList-r17 是否存在。 */
    PUCCH_PowerControlSetInfo_r17* powerControlSetInfoToAddModList_r17_items; /**< ASN.1 powerControlSetInfoToAddModList-r17；SEQUENCE OF PUCCH_PowerControlSetInfo_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t powerControlSetInfoToAddModList_r17_count; /**< powerControlSetInfoToAddModList-r17 元素个数。 */
    bool has_powerControlSetInfoToReleaseList_r17; /**< powerControlSetInfoToReleaseList-r17 是否存在。 */
    PUCCH_PowerControlSetInfoId_r17* powerControlSetInfoToReleaseList_r17_items; /**< ASN.1 powerControlSetInfoToReleaseList-r17；SEQUENCE OF PUCCH_PowerControlSetInfoId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t powerControlSetInfoToReleaseList_r17_count; /**< powerControlSetInfoToReleaseList-r17 元素个数。 */
    bool has_secondTPCFieldDCI_1_1_r17; /**< secondTPCFieldDCI-1-1-r17 是否存在。 */
    PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_1_r17 secondTPCFieldDCI_1_1_r17; /**< ASN.1 secondTPCFieldDCI-1-1-r17；枚举；OPTIONAL。 */
    bool has_secondTPCFieldDCI_1_2_r17; /**< secondTPCFieldDCI-1-2-r17 是否存在。 */
    PUCCH_Config_ExtGroup2_SecondTPCFieldDCI_1_2_r17 secondTPCFieldDCI_1_2_r17; /**< ASN.1 secondTPCFieldDCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_dl_DataToUL_ACK_r17; /**< dl-DataToUL-ACK-r17 是否存在。 */
    SetupRelease_DL_DataToUL_ACK_r17 dl_DataToUL_ACK_r17; /**< ASN.1 dl-DataToUL-ACK-r17；结构体；OPTIONAL。 */
    bool has_dl_DataToUL_ACK_DCI_1_2_r17; /**< dl-DataToUL-ACK-DCI-1-2-r17 是否存在。 */
    SetupRelease_DL_DataToUL_ACK_DCI_1_2_r17 dl_DataToUL_ACK_DCI_1_2_r17; /**< ASN.1 dl-DataToUL-ACK-DCI-1-2-r17；结构体；OPTIONAL。 */
    bool has_ul_AccessConfigListDCI_1_1_r17; /**< ul-AccessConfigListDCI-1-1-r17 是否存在。 */
    SetupRelease_UL_AccessConfigListDCI_1_1_r17 ul_AccessConfigListDCI_1_1_r17; /**< ASN.1 ul-AccessConfigListDCI-1-1-r17；结构体；OPTIONAL。 */
    bool has_schedulingRequestResourceToAddModListExt_v1700; /**< schedulingRequestResourceToAddModListExt-v1700 是否存在。 */
    SchedulingRequestResourceConfigExt_v1700* schedulingRequestResourceToAddModListExt_v1700_items; /**< ASN.1 schedulingRequestResourceToAddModListExt-v1700；SEQUENCE OF SchedulingRequestResourceConfigExt_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestResourceToAddModListExt_v1700_count; /**< schedulingRequestResourceToAddModListExt-v1700 元素个数。 */
    bool has_dmrs_BundlingPUCCH_Config_r17; /**< dmrs-BundlingPUCCH-Config-r17 是否存在。 */
    SetupRelease_DMRS_BundlingPUCCH_Config_r17 dmrs_BundlingPUCCH_Config_r17; /**< ASN.1 dmrs-BundlingPUCCH-Config-r17；结构体；OPTIONAL。 */
    bool has_dl_DataToUL_ACK_v1700; /**< dl-DataToUL-ACK-v1700 是否存在。 */
    SetupRelease_DL_DataToUL_ACK_v1700 dl_DataToUL_ACK_v1700; /**< ASN.1 dl-DataToUL-ACK-v1700；结构体；OPTIONAL。 */
    bool has_dl_DataToUL_ACK_MulticastDCI_Format4_1_r17; /**< dl-DataToUL-ACK-MulticastDCI-Format4-1-r17 是否存在。 */
    SetupRelease_DL_DataToUL_ACK_MulticastDCI_Format4_1_r17 dl_DataToUL_ACK_MulticastDCI_Format4_1_r17; /**< ASN.1 dl-DataToUL-ACK-MulticastDCI-Format4-1-r17；结构体；OPTIONAL。 */
    bool has_sps_PUCCH_AN_ListMulticast_r17; /**< sps-PUCCH-AN-ListMulticast-r17 是否存在。 */
    SetupRelease_SPS_PUCCH_AN_List_r16 sps_PUCCH_AN_ListMulticast_r17; /**< ASN.1 sps-PUCCH-AN-ListMulticast-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PathlossReferenceRSs_v1610
 * @note ASN.1：PathlossReferenceRSs-v1610；源文件第 10190 行。
 * @note PathlossReferenceRSs-v1610 ::= SEQUENCE OF (size 1..60) OF PUCCH-PathlossReferenceRS-r16
 */
struct PathlossReferenceRSs_v1610 {
    PUCCH_PathlossReferenceRS_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PathlossReferenceRSs_v1610
 * @note ASN.1：SetupRelease<PathlossReferenceRSs-v1610>；源文件第 10179 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PathlossReferenceRSs_v1610_Tag {
    SetupRelease_PathlossReferenceRSs_v1610_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PathlossReferenceRSs_v1610_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PathlossReferenceRSs_v1610_Tag;

struct SetupRelease_PathlossReferenceRSs_v1610 {
    SetupRelease_PathlossReferenceRSs_v1610_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PathlossReferenceRSs_v1610 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_PowerControl_ExtGroup1
 * @note ASN.1：PUCCH_PowerControl_ExtGroup1；源文件第 10178 行。
 */
struct PUCCH_PowerControl_ExtGroup1 {
    bool has_pathlossReferenceRSs_v1610; /**< pathlossReferenceRSs-v1610 是否存在。 */
    SetupRelease_PathlossReferenceRSs_v1610 pathlossReferenceRSs_v1610; /**< ASN.1 pathlossReferenceRSs-v1610；结构体；OPTIONAL。 */
};


/**
 * @brief PUCCH_PowerControl
 * @note ASN.1：PUCCH-PowerControl；源文件第 10167 行。
 * @note PUCCH-PowerControl ::= SEQUENCE { deltaF-PUCCH-f0, deltaF-PUCCH-f1, deltaF-PUCCH-f2, deltaF-PUCCH-f3...
 */
struct PUCCH_PowerControl {
    bool has_deltaF_PUCCH_f0; /**< deltaF-PUCCH-f0 是否存在。 */
    int64_t deltaF_PUCCH_f0; /**< ASN.1 deltaF-PUCCH-f0；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_deltaF_PUCCH_f1; /**< deltaF-PUCCH-f1 是否存在。 */
    int64_t deltaF_PUCCH_f1; /**< ASN.1 deltaF-PUCCH-f1；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_deltaF_PUCCH_f2; /**< deltaF-PUCCH-f2 是否存在。 */
    int64_t deltaF_PUCCH_f2; /**< ASN.1 deltaF-PUCCH-f2；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_deltaF_PUCCH_f3; /**< deltaF-PUCCH-f3 是否存在。 */
    int64_t deltaF_PUCCH_f3; /**< ASN.1 deltaF-PUCCH-f3；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_deltaF_PUCCH_f4; /**< deltaF-PUCCH-f4 是否存在。 */
    int64_t deltaF_PUCCH_f4; /**< ASN.1 deltaF-PUCCH-f4；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_p0_Set; /**< p0-Set 是否存在。 */
    P0_PUCCH* p0_Set_items; /**< ASN.1 p0-Set；SEQUENCE OF P0_PUCCH，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t p0_Set_count; /**< p0-Set 元素个数。 */
    bool has_pathlossReferenceRSs; /**< pathlossReferenceRSs 是否存在。 */
    PUCCH_PathlossReferenceRS* pathlossReferenceRSs_items; /**< ASN.1 pathlossReferenceRSs；SEQUENCE OF PUCCH_PathlossReferenceRS，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSs_count; /**< pathlossReferenceRSs 元素个数。 */
    bool has_twoPUCCH_PC_AdjustmentStates; /**< twoPUCCH-PC-AdjustmentStates 是否存在。 */
    PUCCH_PowerControl_TwoPUCCH_PC_AdjustmentStates twoPUCCH_PC_AdjustmentStates; /**< ASN.1 twoPUCCH-PC-AdjustmentStates；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUCCH_PowerControl_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PUCCH_Config
 * @note ASN.1：PUCCH-Config；源文件第 9925 行。
 * @note PUCCH-Config ::= SEQUENCE { resourceSetToAddModList, resourceSetToReleaseList, resourceToAddMo...
 */
struct PUCCH_Config {
    bool has_resourceSetToAddModList; /**< resourceSetToAddModList 是否存在。 */
    PUCCH_ResourceSet* resourceSetToAddModList_items; /**< ASN.1 resourceSetToAddModList；SEQUENCE OF PUCCH_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceSetToAddModList_count; /**< resourceSetToAddModList 元素个数。 */
    bool has_resourceSetToReleaseList; /**< resourceSetToReleaseList 是否存在。 */
    PUCCH_ResourceSetId* resourceSetToReleaseList_items; /**< ASN.1 resourceSetToReleaseList；SEQUENCE OF PUCCH_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceSetToReleaseList_count; /**< resourceSetToReleaseList 元素个数。 */
    bool has_resourceToAddModList; /**< resourceToAddModList 是否存在。 */
    PUCCH_Resource* resourceToAddModList_items; /**< ASN.1 resourceToAddModList；SEQUENCE OF PUCCH_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceToAddModList_count; /**< resourceToAddModList 元素个数。 */
    bool has_resourceToReleaseList; /**< resourceToReleaseList 是否存在。 */
    PUCCH_ResourceId* resourceToReleaseList_items; /**< ASN.1 resourceToReleaseList；SEQUENCE OF PUCCH_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t resourceToReleaseList_count; /**< resourceToReleaseList 元素个数。 */
    bool has_format1; /**< format1 是否存在。 */
    SetupRelease_PUCCH_FormatConfig format1; /**< ASN.1 format1；结构体；OPTIONAL。 */
    bool has_format2; /**< format2 是否存在。 */
    SetupRelease_PUCCH_FormatConfig format2; /**< ASN.1 format2；结构体；OPTIONAL。 */
    bool has_format3; /**< format3 是否存在。 */
    SetupRelease_PUCCH_FormatConfig format3; /**< ASN.1 format3；结构体；OPTIONAL。 */
    bool has_format4; /**< format4 是否存在。 */
    SetupRelease_PUCCH_FormatConfig format4; /**< ASN.1 format4；结构体；OPTIONAL。 */
    bool has_schedulingRequestResourceToAddModList; /**< schedulingRequestResourceToAddModList 是否存在。 */
    SchedulingRequestResourceConfig* schedulingRequestResourceToAddModList_items; /**< ASN.1 schedulingRequestResourceToAddModList；SEQUENCE OF SchedulingRequestResourceConfig，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestResourceToAddModList_count; /**< schedulingRequestResourceToAddModList 元素个数。 */
    bool has_schedulingRequestResourceToReleaseList; /**< schedulingRequestResourceToReleaseList 是否存在。 */
    SchedulingRequestResourceId* schedulingRequestResourceToReleaseList_items; /**< ASN.1 schedulingRequestResourceToReleaseList；SEQUENCE OF SchedulingRequestResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestResourceToReleaseList_count; /**< schedulingRequestResourceToReleaseList 元素个数。 */
    bool has_multi_CSI_PUCCH_ResourceList; /**< multi-CSI-PUCCH-ResourceList 是否存在。 */
    PUCCH_ResourceId* multi_CSI_PUCCH_ResourceList_items; /**< ASN.1 multi-CSI-PUCCH-ResourceList；SEQUENCE OF PUCCH_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t multi_CSI_PUCCH_ResourceList_count; /**< multi-CSI-PUCCH-ResourceList 元素个数。 */
    bool has_dl_DataToUL_ACK; /**< dl-DataToUL-ACK 是否存在。 */
    int64_t* dl_DataToUL_ACK_items; /**< ASN.1 dl-DataToUL-ACK；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dl_DataToUL_ACK_count; /**< dl-DataToUL-ACK 元素个数。 */
    bool has_spatialRelationInfoToAddModList; /**< spatialRelationInfoToAddModList 是否存在。 */
    PUCCH_SpatialRelationInfo* spatialRelationInfoToAddModList_items; /**< ASN.1 spatialRelationInfoToAddModList；SEQUENCE OF PUCCH_SpatialRelationInfo，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t spatialRelationInfoToAddModList_count; /**< spatialRelationInfoToAddModList 元素个数。 */
    bool has_spatialRelationInfoToReleaseList; /**< spatialRelationInfoToReleaseList 是否存在。 */
    PUCCH_SpatialRelationInfoId* spatialRelationInfoToReleaseList_items; /**< ASN.1 spatialRelationInfoToReleaseList；SEQUENCE OF PUCCH_SpatialRelationInfoId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t spatialRelationInfoToReleaseList_count; /**< spatialRelationInfoToReleaseList 元素个数。 */
    bool has_pucch_PowerControl; /**< pucch-PowerControl 是否存在。 */
    PUCCH_PowerControl pucch_PowerControl; /**< ASN.1 pucch-PowerControl；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUCCH_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PUCCH_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PUCCH_Config
 * @note ASN.1：SetupRelease<PUCCH-Config>；源文件第 4644 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUCCH_Config_Tag {
    SetupRelease_PUCCH_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUCCH_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUCCH_Config_Tag;

struct SetupRelease_PUCCH_Config {
    SetupRelease_PUCCH_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUCCH_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_ConfigurationList_r16
 * @note ASN.1：PUCCH-ConfigurationList-r16；源文件第 10146 行。
 * @note PUCCH-ConfigurationList-r16 ::= SEQUENCE OF (size 1..2) OF PUCCH-Config
 */
struct PUCCH_ConfigurationList_r16 {
    PUCCH_Config* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PUCCH_ConfigurationList_r16
 * @note ASN.1：SetupRelease<PUCCH-ConfigurationList-r16>；源文件第 4655 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUCCH_ConfigurationList_r16_Tag {
    SetupRelease_PUCCH_ConfigurationList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUCCH_ConfigurationList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUCCH_ConfigurationList_r16_Tag;

struct SetupRelease_PUCCH_ConfigurationList_r16 {
    SetupRelease_PUCCH_ConfigurationList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUCCH_ConfigurationList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief LBT_FailureRecoveryConfig_r16
 * @note ASN.1：LBT-FailureRecoveryConfig-r16；源文件第 7051 行。
 * @note LBT-FailureRecoveryConfig-r16 ::= SEQUENCE { lbt-FailureInstanceMaxCount-r16, lbt-FailureDetectionTimer-r16 }
 */
struct LBT_FailureRecoveryConfig_r16 {
    LBT_FailureRecoveryConfig_r16_Lbt_FailureInstanceMaxCount_r16 lbt_FailureInstanceMaxCount_r16; /**< ASN.1 lbt-FailureInstanceMaxCount-r16；枚举。 */
    LBT_FailureRecoveryConfig_r16_Lbt_FailureDetectionTimer_r16 lbt_FailureDetectionTimer_r16; /**< ASN.1 lbt-FailureDetectionTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_LBT_FailureRecoveryConfig_r16
 * @note ASN.1：SetupRelease<LBT-FailureRecoveryConfig-r16>；源文件第 4656 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_LBT_FailureRecoveryConfig_r16_Tag {
    SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_LBT_FailureRecoveryConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_LBT_FailureRecoveryConfig_r16_Tag;

struct SetupRelease_LBT_FailureRecoveryConfig_r16 {
    SetupRelease_LBT_FailureRecoveryConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        LBT_FailureRecoveryConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_UplinkDedicated_ExtGroup1
 * @note ASN.1：BWP_UplinkDedicated_ExtGroup1；源文件第 4650 行。
 */
struct BWP_UplinkDedicated_ExtGroup1 {
    bool has_sl_PUCCH_Config_r16; /**< sl-PUCCH-Config-r16 是否存在。 */
    SetupRelease_PUCCH_Config sl_PUCCH_Config_r16; /**< ASN.1 sl-PUCCH-Config-r16；结构体；OPTIONAL。 */
    bool has_cp_ExtensionC2_r16; /**< cp-ExtensionC2-r16 是否存在。 */
    int64_t cp_ExtensionC2_r16; /**< ASN.1 cp-ExtensionC2-r16；INTEGER (1..28)，位宽 5 bit；OPTIONAL。 */
    bool has_cp_ExtensionC3_r16; /**< cp-ExtensionC3-r16 是否存在。 */
    int64_t cp_ExtensionC3_r16; /**< ASN.1 cp-ExtensionC3-r16；INTEGER (1..28)，位宽 5 bit；OPTIONAL。 */
    bool has_useInterlacePUCCH_PUSCH_r16; /**< useInterlacePUCCH-PUSCH-r16 是否存在。 */
    BWP_UplinkDedicated_ExtGroup1_UseInterlacePUCCH_PUSCH_r16 useInterlacePUCCH_PUSCH_r16; /**< ASN.1 useInterlacePUCCH-PUSCH-r16；枚举；OPTIONAL。 */
    bool has_pucch_ConfigurationList_r16; /**< pucch-ConfigurationList-r16 是否存在。 */
    SetupRelease_PUCCH_ConfigurationList_r16 pucch_ConfigurationList_r16; /**< ASN.1 pucch-ConfigurationList-r16；结构体；OPTIONAL。 */
    bool has_lbt_FailureRecoveryConfig_r16; /**< lbt-FailureRecoveryConfig-r16 是否存在。 */
    SetupRelease_LBT_FailureRecoveryConfig_r16 lbt_FailureRecoveryConfig_r16; /**< ASN.1 lbt-FailureRecoveryConfig-r16；结构体；OPTIONAL。 */
    bool has_configuredGrantConfigToAddModList_r16; /**< configuredGrantConfigToAddModList-r16 是否存在。 */
    ConfiguredGrantConfigToAddModList_r16 configuredGrantConfigToAddModList_r16; /**< ASN.1 configuredGrantConfigToAddModList-r16；SEQUENCE OF ConfiguredGrantConfig，SIZE (1..12)；OPTIONAL。 */
    bool has_configuredGrantConfigToReleaseList_r16; /**< configuredGrantConfigToReleaseList-r16 是否存在。 */
    ConfiguredGrantConfigToReleaseList_r16 configuredGrantConfigToReleaseList_r16; /**< ASN.1 configuredGrantConfigToReleaseList-r16；SEQUENCE OF ConfiguredGrantConfigIndex_r16，SIZE (1..12)；OPTIONAL。 */
    bool has_configuredGrantConfigType2DeactivationStateList_r16; /**< configuredGrantConfigType2DeactivationStateList-r16 是否存在。 */
    ConfiguredGrantConfigType2DeactivationStateList_r16 configuredGrantConfigType2DeactivationStateList_r16; /**< ASN.1 configuredGrantConfigType2DeactivationStateList-r16；SEQUENCE OF ConfiguredGrantConfigType2DeactivationState_r16，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist
 * @note ASN.1：ul-TCI-StateList-r17/explicitlist；源文件第 4663 行。
 * @note SEQUENCE { ul-TCI-ToAddModList-r17, ul-TCI-ToReleaseList-r17 }
 */
struct BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist {
    bool has_ul_TCI_ToAddModList_r17; /**< ul-TCI-ToAddModList-r17 是否存在。 */
    TCI_UL_State_r17* ul_TCI_ToAddModList_r17_items; /**< ASN.1 ul-TCI-ToAddModList-r17；SEQUENCE OF TCI_UL_State_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ul_TCI_ToAddModList_r17_count; /**< ul-TCI-ToAddModList-r17 元素个数。 */
    bool has_ul_TCI_ToReleaseList_r17; /**< ul-TCI-ToReleaseList-r17 是否存在。 */
    TCI_UL_StateId_r17* ul_TCI_ToReleaseList_r17_items; /**< ASN.1 ul-TCI-ToReleaseList-r17；SEQUENCE OF TCI_UL_StateId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ul_TCI_ToReleaseList_r17_count; /**< ul-TCI-ToReleaseList-r17 元素个数。 */
};


/**
 * @brief BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17
 * @note ASN.1：ul-TCI-StateList-r17；源文件第 4662 行。
 * @note CHOICE { explicitlist, unifiedTCI-StateRef-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag {
    BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_explicitlist = 0, /**< ASN.1 explicitlist */
    BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag_unifiedTCI_StateRef_r17 = 1, /**< ASN.1 unifiedTCI-StateRef-r17 */
} BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag;

struct BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17 {
    BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17_Explicitlist explicitlist; /**< ASN.1 explicitlist */
        ServingCellAndBWP_Id_r17 unifiedTCI_StateRef_r17; /**< ASN.1 unifiedTCI-StateRef-r17 */
    } u;
};


/**
 * @brief BWP_UplinkDedicated_ExtGroup2
 * @note ASN.1：BWP_UplinkDedicated_ExtGroup2；源文件第 4661 行。
 */
struct BWP_UplinkDedicated_ExtGroup2 {
    bool has_ul_TCI_StateList_r17; /**< ul-TCI-StateList-r17 是否存在。 */
    BWP_UplinkDedicated_ExtGroup2_Ul_TCI_StateList_r17 ul_TCI_StateList_r17; /**< ASN.1 ul-TCI-StateList-r17；结构体；OPTIONAL。 */
    bool has_ul_powerControl_r17; /**< ul-powerControl-r17 是否存在。 */
    Uplink_powerControlId_r17 ul_powerControl_r17; /**< ASN.1 ul-powerControl-r17；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_pucch_ConfigurationListMulticast1_r17; /**< pucch-ConfigurationListMulticast1-r17 是否存在。 */
    SetupRelease_PUCCH_ConfigurationList_r16 pucch_ConfigurationListMulticast1_r17; /**< ASN.1 pucch-ConfigurationListMulticast1-r17；结构体；OPTIONAL。 */
    bool has_pucch_ConfigurationListMulticast2_r17; /**< pucch-ConfigurationListMulticast2-r17 是否存在。 */
    SetupRelease_PUCCH_ConfigurationList_r16 pucch_ConfigurationListMulticast2_r17; /**< ASN.1 pucch-ConfigurationListMulticast2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief BWP_UplinkDedicated_ExtGroup3
 * @note ASN.1：BWP_UplinkDedicated_ExtGroup3；源文件第 4673 行。
 */
struct BWP_UplinkDedicated_ExtGroup3 {
    bool has_pucch_ConfigMulticast1_r17; /**< pucch-ConfigMulticast1-r17 是否存在。 */
    SetupRelease_PUCCH_Config pucch_ConfigMulticast1_r17; /**< ASN.1 pucch-ConfigMulticast1-r17；结构体；OPTIONAL。 */
    bool has_pucch_ConfigMulticast2_r17; /**< pucch-ConfigMulticast2-r17 是否存在。 */
    SetupRelease_PUCCH_Config pucch_ConfigMulticast2_r17; /**< ASN.1 pucch-ConfigMulticast2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief BWP_UplinkDedicated_ExtGroup4
 * @note ASN.1：BWP_UplinkDedicated_ExtGroup4；源文件第 4677 行。
 */
struct BWP_UplinkDedicated_ExtGroup4 {
    bool has_pathlossReferenceRSToAddModList_r17; /**< pathlossReferenceRSToAddModList-r17 是否存在。 */
    PathlossReferenceRS_r17* pathlossReferenceRSToAddModList_r17_items; /**< ASN.1 pathlossReferenceRSToAddModList-r17；SEQUENCE OF PathlossReferenceRS_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSToAddModList_r17_count; /**< pathlossReferenceRSToAddModList-r17 元素个数。 */
    bool has_pathlossReferenceRSToReleaseList_r17; /**< pathlossReferenceRSToReleaseList-r17 是否存在。 */
    PathlossReferenceRS_Id_r17* pathlossReferenceRSToReleaseList_r17_items; /**< ASN.1 pathlossReferenceRSToReleaseList-r17；SEQUENCE OF PathlossReferenceRS_Id_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSToReleaseList_r17_count; /**< pathlossReferenceRSToReleaseList-r17 元素个数。 */
};


/**
 * @brief CG_StartingOffsets_r16
 * @note ASN.1：CG-StartingOffsets-r16；源文件第 5656 行。
 * @note CG-StartingOffsets-r16 ::= SEQUENCE { cg-StartingFullBW-InsideCOT-r16, cg-StartingFullBW-OutsideCOT-r16,...
 */
struct CG_StartingOffsets_r16 {
    bool has_cg_StartingFullBW_InsideCOT_r16; /**< cg-StartingFullBW-InsideCOT-r16 是否存在。 */
    int64_t* cg_StartingFullBW_InsideCOT_r16_items; /**< ASN.1 cg-StartingFullBW-InsideCOT-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_StartingFullBW_InsideCOT_r16_count; /**< cg-StartingFullBW-InsideCOT-r16 元素个数。 */
    bool has_cg_StartingFullBW_OutsideCOT_r16; /**< cg-StartingFullBW-OutsideCOT-r16 是否存在。 */
    int64_t* cg_StartingFullBW_OutsideCOT_r16_items; /**< ASN.1 cg-StartingFullBW-OutsideCOT-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_StartingFullBW_OutsideCOT_r16_count; /**< cg-StartingFullBW-OutsideCOT-r16 元素个数。 */
    bool has_cg_StartingPartialBW_InsideCOT_r16; /**< cg-StartingPartialBW-InsideCOT-r16 是否存在。 */
    int64_t cg_StartingPartialBW_InsideCOT_r16; /**< ASN.1 cg-StartingPartialBW-InsideCOT-r16；INTEGER (0..6)，位宽 3 bit；OPTIONAL。 */
    bool has_cg_StartingPartialBW_OutsideCOT_r16; /**< cg-StartingPartialBW-OutsideCOT-r16 是否存在。 */
    int64_t cg_StartingPartialBW_OutsideCOT_r16; /**< ASN.1 cg-StartingPartialBW-OutsideCOT-r16；INTEGER (0..6)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfig_ExtGroup1
 * @note ASN.1：ConfiguredGrantConfig_ExtGroup1；源文件第 5582 行。
 */
struct ConfiguredGrantConfig_ExtGroup1 {
    bool has_cg_RetransmissionTimer_r16; /**< cg-RetransmissionTimer-r16 是否存在。 */
    int64_t cg_RetransmissionTimer_r16; /**< ASN.1 cg-RetransmissionTimer-r16；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_cg_minDFI_Delay_r16; /**< cg-minDFI-Delay-r16 是否存在。 */
    ConfiguredGrantConfig_ExtGroup1_Cg_minDFI_Delay_r16 cg_minDFI_Delay_r16; /**< ASN.1 cg-minDFI-Delay-r16；枚举；OPTIONAL。 */
    bool has_cg_nrofPUSCH_InSlot_r16; /**< cg-nrofPUSCH-InSlot-r16 是否存在。 */
    int64_t cg_nrofPUSCH_InSlot_r16; /**< ASN.1 cg-nrofPUSCH-InSlot-r16；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
    bool has_cg_nrofSlots_r16; /**< cg-nrofSlots-r16 是否存在。 */
    int64_t cg_nrofSlots_r16; /**< ASN.1 cg-nrofSlots-r16；INTEGER (1..40)，位宽 6 bit；OPTIONAL。 */
    bool has_cg_StartingOffsets_r16; /**< cg-StartingOffsets-r16 是否存在。 */
    CG_StartingOffsets_r16 cg_StartingOffsets_r16; /**< ASN.1 cg-StartingOffsets-r16；结构体；OPTIONAL。 */
    bool has_cg_UCI_Multiplexing_r16; /**< cg-UCI-Multiplexing-r16 是否存在。 */
    ConfiguredGrantConfig_ExtGroup1_Cg_UCI_Multiplexing_r16 cg_UCI_Multiplexing_r16; /**< ASN.1 cg-UCI-Multiplexing-r16；枚举；OPTIONAL。 */
    bool has_cg_COT_SharingOffset_r16; /**< cg-COT-SharingOffset-r16 是否存在。 */
    int64_t cg_COT_SharingOffset_r16; /**< ASN.1 cg-COT-SharingOffset-r16；INTEGER (1..39)，位宽 6 bit；OPTIONAL。 */
    bool has_betaOffsetCG_UCI_r16; /**< betaOffsetCG-UCI-r16 是否存在。 */
    int64_t betaOffsetCG_UCI_r16; /**< ASN.1 betaOffsetCG-UCI-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_cg_COT_SharingList_r16; /**< cg-COT-SharingList-r16 是否存在。 */
    CG_COT_Sharing_r16* cg_COT_SharingList_r16_items; /**< ASN.1 cg-COT-SharingList-r16；SEQUENCE OF CG_COT_Sharing_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_COT_SharingList_r16_count; /**< cg-COT-SharingList-r16 元素个数。 */
    bool has_harq_ProcID_Offset_r16; /**< harq-ProcID-Offset-r16 是否存在。 */
    int64_t harq_ProcID_Offset_r16; /**< ASN.1 harq-ProcID-Offset-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_harq_ProcID_Offset2_r16; /**< harq-ProcID-Offset2-r16 是否存在。 */
    int64_t harq_ProcID_Offset2_r16; /**< ASN.1 harq-ProcID-Offset2-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_configuredGrantConfigIndex_r16; /**< configuredGrantConfigIndex-r16 是否存在。 */
    ConfiguredGrantConfigIndex_r16 configuredGrantConfigIndex_r16; /**< ASN.1 configuredGrantConfigIndex-r16；INTEGER (0..11)，位宽 4 bit；OPTIONAL。 */
    bool has_configuredGrantConfigIndexMAC_r16; /**< configuredGrantConfigIndexMAC-r16 是否存在。 */
    ConfiguredGrantConfigIndexMAC_r16 configuredGrantConfigIndexMAC_r16; /**< ASN.1 configuredGrantConfigIndexMAC-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_periodicityExt_r16; /**< periodicityExt-r16 是否存在。 */
    int64_t periodicityExt_r16; /**< ASN.1 periodicityExt-r16；INTEGER (1..5120)，位宽 13 bit；OPTIONAL。 */
    bool has_startingFromRV0_r16; /**< startingFromRV0-r16 是否存在。 */
    ConfiguredGrantConfig_ExtGroup1_StartingFromRV0_r16 startingFromRV0_r16; /**< ASN.1 startingFromRV0-r16；枚举；OPTIONAL。 */
    bool has_phy_PriorityIndex_r16; /**< phy-PriorityIndex-r16 是否存在。 */
    ConfiguredGrantConfig_ExtGroup1_Phy_PriorityIndex_r16 phy_PriorityIndex_r16; /**< ASN.1 phy-PriorityIndex-r16；枚举；OPTIONAL。 */
    bool has_autonomousTx_r16; /**< autonomousTx-r16 是否存在。 */
    ConfiguredGrantConfig_ExtGroup1_AutonomousTx_r16 autonomousTx_r16; /**< ASN.1 autonomousTx-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BetaOffsetsCrossPriSelCG_r17_Dynamic_r17
 * @note ASN.1：dynamic-r17；源文件第 5664 行。
 * @note SEQUENCE OF (size 1..4) OF BetaOffsetsCrossPri-r17
 */
struct BetaOffsetsCrossPriSelCG_r17_Dynamic_r17 {
    BetaOffsetsCrossPri_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BetaOffsetsCrossPriSelCG_r17
 * @note ASN.1：BetaOffsetsCrossPriSelCG-r17；源文件第 5663 行。
 * @note BetaOffsetsCrossPriSelCG-r17 ::= CHOICE { dynamic-r17, semiStatic-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BetaOffsetsCrossPriSelCG_r17_Tag {
    BetaOffsetsCrossPriSelCG_r17_Tag_dynamic_r17 = 0, /**< ASN.1 dynamic-r17 */
    BetaOffsetsCrossPriSelCG_r17_Tag_semiStatic_r17 = 1, /**< ASN.1 semiStatic-r17 */
} BetaOffsetsCrossPriSelCG_r17_Tag;

struct BetaOffsetsCrossPriSelCG_r17 {
    BetaOffsetsCrossPriSelCG_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BetaOffsetsCrossPriSelCG_r17_Dynamic_r17 dynamic_r17; /**< ASN.1 dynamic-r17 */
        BetaOffsetsCrossPri_r17 semiStatic_r17; /**< ASN.1 semiStatic-r17 */
    } u;
};


/**
 * @brief SetupRelease_BetaOffsetsCrossPriSelCG_r17
 * @note ASN.1：SetupRelease<BetaOffsetsCrossPriSelCG-r17>；源文件第 5605 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag {
    SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag;

struct SetupRelease_BetaOffsetsCrossPriSelCG_r17 {
    SetupRelease_BetaOffsetsCrossPriSelCG_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BetaOffsetsCrossPriSelCG_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ConfiguredGrantConfig_ExtGroup2
 * @note ASN.1：ConfiguredGrantConfig_ExtGroup2；源文件第 5604 行。
 */
struct ConfiguredGrantConfig_ExtGroup2 {
    bool has_cg_betaOffsetsCrossPri0_r17; /**< cg-betaOffsetsCrossPri0-r17 是否存在。 */
    SetupRelease_BetaOffsetsCrossPriSelCG_r17 cg_betaOffsetsCrossPri0_r17; /**< ASN.1 cg-betaOffsetsCrossPri0-r17；结构体；OPTIONAL。 */
    bool has_cg_betaOffsetsCrossPri1_r17; /**< cg-betaOffsetsCrossPri1-r17 是否存在。 */
    SetupRelease_BetaOffsetsCrossPriSelCG_r17 cg_betaOffsetsCrossPri1_r17; /**< ASN.1 cg-betaOffsetsCrossPri1-r17；结构体；OPTIONAL。 */
    bool has_mappingPattern_r17; /**< mappingPattern-r17 是否存在。 */
    ConfiguredGrantConfig_ExtGroup2_MappingPattern_r17 mappingPattern_r17; /**< ASN.1 mappingPattern-r17；枚举；OPTIONAL。 */
    bool has_sequenceOffsetForRV_r17; /**< sequenceOffsetForRV-r17 是否存在。 */
    int64_t sequenceOffsetForRV_r17; /**< ASN.1 sequenceOffsetForRV-r17；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_p0_PUSCH_Alpha2_r17; /**< p0-PUSCH-Alpha2-r17 是否存在。 */
    P0_PUSCH_AlphaSetId p0_PUSCH_Alpha2_r17; /**< ASN.1 p0-PUSCH-Alpha2-r17；INTEGER (0..29)，位宽 5 bit；OPTIONAL。 */
    bool has_powerControlLoopToUse2_r17; /**< powerControlLoopToUse2-r17 是否存在。 */
    ConfiguredGrantConfig_ExtGroup2_PowerControlLoopToUse2_r17 powerControlLoopToUse2_r17; /**< ASN.1 powerControlLoopToUse2-r17；枚举；OPTIONAL。 */
    bool has_cg_COT_SharingList_r17; /**< cg-COT-SharingList-r17 是否存在。 */
    CG_COT_Sharing_r17* cg_COT_SharingList_r17_items; /**< ASN.1 cg-COT-SharingList-r17；SEQUENCE OF CG_COT_Sharing_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_COT_SharingList_r17_count; /**< cg-COT-SharingList-r17 元素个数。 */
    bool has_periodicityExt_r17; /**< periodicityExt-r17 是否存在。 */
    int64_t periodicityExt_r17; /**< ASN.1 periodicityExt-r17；INTEGER (1..40960)，位宽 16 bit；OPTIONAL。 */
    bool has_repK_v1710; /**< repK-v1710 是否存在。 */
    ConfiguredGrantConfig_ExtGroup2_RepK_v1710 repK_v1710; /**< ASN.1 repK-v1710；枚举；OPTIONAL。 */
    bool has_nrofHARQ_Processes_v1700; /**< nrofHARQ-Processes-v1700 是否存在。 */
    int64_t nrofHARQ_Processes_v1700; /**< ASN.1 nrofHARQ-Processes-v1700；INTEGER (17..32)，位宽 4 bit；OPTIONAL。 */
    bool has_harq_ProcID_Offset2_v1700; /**< harq-ProcID-Offset2-v1700 是否存在。 */
    int64_t harq_ProcID_Offset2_v1700; /**< ASN.1 harq-ProcID-Offset2-v1700；INTEGER (16..31)，位宽 4 bit；OPTIONAL。 */
    bool has_configuredGrantTimer_v1700; /**< configuredGrantTimer-v1700 是否存在。 */
    int64_t configuredGrantTimer_v1700; /**< ASN.1 configuredGrantTimer-v1700；INTEGER (33..288)，位宽 8 bit；OPTIONAL。 */
    bool has_cg_minDFI_Delay_v1710; /**< cg-minDFI-Delay-v1710 是否存在。 */
    int64_t cg_minDFI_Delay_v1710; /**< ASN.1 cg-minDFI-Delay-v1710；INTEGER (238..3584)，位宽 12 bit；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfig_ExtGroup3
 * @note ASN.1：ConfiguredGrantConfig_ExtGroup3；源文件第 5619 行。
 */
struct ConfiguredGrantConfig_ExtGroup3 {
    bool has_harq_ProcID_Offset_v1730; /**< harq-ProcID-Offset-v1730 是否存在。 */
    int64_t harq_ProcID_Offset_v1730; /**< ASN.1 harq-ProcID-Offset-v1730；INTEGER (16..31)，位宽 4 bit；OPTIONAL。 */
    bool has_cg_nrofSlots_r17; /**< cg-nrofSlots-r17 是否存在。 */
    int64_t cg_nrofSlots_r17; /**< ASN.1 cg-nrofSlots-r17；INTEGER (1..320)，位宽 9 bit；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18
 * @note ASN.1：uto-UCI-Config-r18；源文件第 5626 行。
 * @note SEQUENCE { nrofBitsInUTO-UCI-r18, betaOffsetUTO-UCI-r18 }
 */
struct ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18 {
    int64_t nrofBitsInUTO_UCI_r18; /**< ASN.1 nrofBitsInUTO-UCI-r18；INTEGER (3..8)，位宽 3 bit。 */
    int64_t betaOffsetUTO_UCI_r18; /**< ASN.1 betaOffsetUTO-UCI-r18；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief ConfiguredGrantConfig_ExtGroup4
 * @note ASN.1：ConfiguredGrantConfig_ExtGroup4；源文件第 5623 行。
 */
struct ConfiguredGrantConfig_ExtGroup4 {
    bool has_disableCG_RetransmissionMonitoring_r18; /**< disableCG-RetransmissionMonitoring-r18 是否存在。 */
    ConfiguredGrantConfig_ExtGroup4_DisableCG_RetransmissionMonitoring_r18 disableCG_RetransmissionMonitoring_r18; /**< ASN.1 disableCG-RetransmissionMonitoring-r18；枚举；OPTIONAL。 */
    bool has_nrofSlotsInCG_Period_r18; /**< nrofSlotsInCG-Period-r18 是否存在。 */
    int64_t nrofSlotsInCG_Period_r18; /**< ASN.1 nrofSlotsInCG-Period-r18；INTEGER (2..32)，位宽 5 bit；OPTIONAL。 */
    bool has_uto_UCI_Config_r18; /**< uto-UCI-Config-r18 是否存在。 */
    ConfiguredGrantConfig_ExtGroup4_Uto_UCI_Config_r18 uto_UCI_Config_r18; /**< ASN.1 uto-UCI-Config-r18；结构体；OPTIONAL。 */
};


/**
 * @brief CG_UCI_OnPUSCH_Dynamic
 * @note ASN.1：dynamic；源文件第 5635 行。
 * @note SEQUENCE OF (size 1..4) OF BetaOffsets
 */
struct CG_UCI_OnPUSCH_Dynamic {
    BetaOffsets* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CG_UCI_OnPUSCH
 * @note ASN.1：CG-UCI-OnPUSCH；源文件第 5634 行。
 * @note CG-UCI-OnPUSCH ::= CHOICE { dynamic, semiStatic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_UCI_OnPUSCH_Tag {
    CG_UCI_OnPUSCH_Tag_dynamic = 0, /**< ASN.1 dynamic */
    CG_UCI_OnPUSCH_Tag_semiStatic = 1, /**< ASN.1 semiStatic */
} CG_UCI_OnPUSCH_Tag;

struct CG_UCI_OnPUSCH {
    CG_UCI_OnPUSCH_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CG_UCI_OnPUSCH_Dynamic dynamic; /**< ASN.1 dynamic */
        BetaOffsets semiStatic; /**< ASN.1 semiStatic */
    } u;
};


/**
 * @brief SetupRelease_CG_UCI_OnPUSCH
 * @note ASN.1：SetupRelease<CG-UCI-OnPUSCH>；源文件第 5515 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CG_UCI_OnPUSCH_Tag {
    SetupRelease_CG_UCI_OnPUSCH_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CG_UCI_OnPUSCH_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CG_UCI_OnPUSCH_Tag;

struct SetupRelease_CG_UCI_OnPUSCH {
    SetupRelease_CG_UCI_OnPUSCH_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CG_UCI_OnPUSCH setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1
 * @note ASN.1：ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1；源文件第 5545 行。
 */
struct ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1 {
    bool has_pusch_RepTypeIndicator_r16; /**< pusch-RepTypeIndicator-r16 是否存在。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_Pusch_RepTypeIndicator_r16 pusch_RepTypeIndicator_r16; /**< ASN.1 pusch-RepTypeIndicator-r16；枚举；OPTIONAL。 */
    bool has_frequencyHoppingPUSCH_RepTypeB_r16; /**< frequencyHoppingPUSCH-RepTypeB-r16 是否存在。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_FrequencyHoppingPUSCH_RepTypeB_r16 frequencyHoppingPUSCH_RepTypeB_r16; /**< ASN.1 frequencyHoppingPUSCH-RepTypeB-r16；枚举；OPTIONAL。 */
    bool has_timeReferenceSFN_r16; /**< timeReferenceSFN-r16 是否存在。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1_TimeReferenceSFN_r16 timeReferenceSFN_r16; /**< ASN.1 timeReferenceSFN-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17
 * @note ASN.1：sdt-SSB-Subset-r17；源文件第 5670 行。
 * @note CHOICE { shortBitmap-r17, mediumBitmap-r17, longBitmap-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag {
    CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_shortBitmap_r17 = 0, /**< ASN.1 shortBitmap-r17 */
    CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_mediumBitmap_r17 = 1, /**< ASN.1 mediumBitmap-r17 */
    CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag_longBitmap_r17 = 2, /**< ASN.1 longBitmap-r17 */
} CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag;

struct CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17 {
    CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString shortBitmap_r17; /**< ASN.1 shortBitmap-r17 */
        BitString mediumBitmap_r17; /**< ASN.1 mediumBitmap-r17 */
        BitString longBitmap_r17; /**< ASN.1 longBitmap-r17 */
    } u;
};


/**
 * @brief CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17
 * @note ASN.1：sdt-DMRS-Ports-r17；源文件第 5678 行。
 * @note CHOICE { dmrsType1-r17, dmrsType2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag {
    CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType1_r17 = 0, /**< ASN.1 dmrsType1-r17 */
    CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag_dmrsType2_r17 = 1, /**< ASN.1 dmrsType2-r17 */
} CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag;

struct CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17 {
    CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString dmrsType1_r17; /**< ASN.1 dmrsType1-r17 */
        BitString dmrsType2_r17; /**< ASN.1 dmrsType2-r17 */
    } u;
};


/**
 * @brief CG_SDT_Configuration_r17
 * @note ASN.1：CG-SDT-Configuration-r17；源文件第 5668 行。
 * @note CG-SDT-Configuration-r17 ::= SEQUENCE { cg-SDT-RetransmissionTimer, sdt-SSB-Subset-r17, sdt-SSB-PerCG-PUSC...
 */
struct CG_SDT_Configuration_r17 {
    bool has_cg_SDT_RetransmissionTimer; /**< cg-SDT-RetransmissionTimer 是否存在。 */
    int64_t cg_SDT_RetransmissionTimer; /**< ASN.1 cg-SDT-RetransmissionTimer；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_sdt_SSB_Subset_r17; /**< sdt-SSB-Subset-r17 是否存在。 */
    CG_SDT_Configuration_r17_Sdt_SSB_Subset_r17 sdt_SSB_Subset_r17; /**< ASN.1 sdt-SSB-Subset-r17；结构体；OPTIONAL。 */
    bool has_sdt_SSB_PerCG_PUSCH_r17; /**< sdt-SSB-PerCG-PUSCH-r17 是否存在。 */
    CG_SDT_Configuration_r17_Sdt_SSB_PerCG_PUSCH_r17 sdt_SSB_PerCG_PUSCH_r17; /**< ASN.1 sdt-SSB-PerCG-PUSCH-r17；枚举；OPTIONAL。 */
    bool has_sdt_P0_PUSCH_r17; /**< sdt-P0-PUSCH-r17 是否存在。 */
    int64_t sdt_P0_PUSCH_r17; /**< ASN.1 sdt-P0-PUSCH-r17；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_sdt_Alpha_r17; /**< sdt-Alpha-r17 是否存在。 */
    CG_SDT_Configuration_r17_Sdt_Alpha_r17 sdt_Alpha_r17; /**< ASN.1 sdt-Alpha-r17；枚举；OPTIONAL。 */
    bool has_sdt_DMRS_Ports_r17; /**< sdt-DMRS-Ports-r17 是否存在。 */
    CG_SDT_Configuration_r17_Sdt_DMRS_Ports_r17 sdt_DMRS_Ports_r17; /**< ASN.1 sdt-DMRS-Ports-r17；结构体；OPTIONAL。 */
    bool has_sdt_NrofDMRS_Sequences_r17; /**< sdt-NrofDMRS-Sequences-r17 是否存在。 */
    int64_t sdt_NrofDMRS_Sequences_r17; /**< ASN.1 sdt-NrofDMRS-Sequences-r17；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2
 * @note ASN.1：ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2；源文件第 5550 行。
 */
struct ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2 {
    bool has_pathlossReferenceIndex2_r17; /**< pathlossReferenceIndex2-r17 是否存在。 */
    int64_t pathlossReferenceIndex2_r17; /**< ASN.1 pathlossReferenceIndex2-r17；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_srs_ResourceIndicator2_r17; /**< srs-ResourceIndicator2-r17 是否存在。 */
    int64_t srs_ResourceIndicator2_r17; /**< ASN.1 srs-ResourceIndicator2-r17；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_precodingAndNumberOfLayers2_r17; /**< precodingAndNumberOfLayers2-r17 是否存在。 */
    int64_t precodingAndNumberOfLayers2_r17; /**< ASN.1 precodingAndNumberOfLayers2-r17；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_timeDomainAllocation_v1710; /**< timeDomainAllocation-v1710 是否存在。 */
    int64_t timeDomainAllocation_v1710; /**< ASN.1 timeDomainAllocation-v1710；INTEGER (16..63)，位宽 6 bit；OPTIONAL。 */
    bool has_timeDomainOffset_r17; /**< timeDomainOffset-r17 是否存在。 */
    int64_t timeDomainOffset_r17; /**< ASN.1 timeDomainOffset-r17；INTEGER (0..40959)，位宽 16 bit；OPTIONAL。 */
    bool has_cg_SDT_Configuration_r17; /**< cg-SDT-Configuration-r17 是否存在。 */
    CG_SDT_Configuration_r17 cg_SDT_Configuration_r17; /**< ASN.1 cg-SDT-Configuration-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18
 * @note ASN.1：rrc-SSB-Subset-r18；源文件第 5688 行。
 * @note CHOICE { shortBitmap-r18, mediumBitmap-r18, longBitmap-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag {
    CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_shortBitmap_r18 = 0, /**< ASN.1 shortBitmap-r18 */
    CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_mediumBitmap_r18 = 1, /**< ASN.1 mediumBitmap-r18 */
    CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag_longBitmap_r18 = 2, /**< ASN.1 longBitmap-r18 */
} CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag;

struct CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18 {
    CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString shortBitmap_r18; /**< ASN.1 shortBitmap-r18 */
        BitString mediumBitmap_r18; /**< ASN.1 mediumBitmap-r18 */
        BitString longBitmap_r18; /**< ASN.1 longBitmap-r18 */
    } u;
};


/**
 * @brief CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18
 * @note ASN.1：rrc-DMRS-Ports-r18；源文件第 5696 行。
 * @note CHOICE { dmrsType1-r18, dmrsType2-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag {
    CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType1_r18 = 0, /**< ASN.1 dmrsType1-r18 */
    CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag_dmrsType2_r18 = 1, /**< ASN.1 dmrsType2-r18 */
} CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag;

struct CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18 {
    CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString dmrsType1_r18; /**< ASN.1 dmrsType1-r18 */
        BitString dmrsType2_r18; /**< ASN.1 dmrsType2-r18 */
    } u;
};


/**
 * @brief CG_RRC_Configuration_r18
 * @note ASN.1：CG-RRC-Configuration-r18；源文件第 5685 行。
 * @note CG-RRC-Configuration-r18 ::= SEQUENCE { cg-RRC-RetransmissionTimer-r18, cg-RRC-RSRP-ThresholdSSB-r18, rrc-...
 */
struct CG_RRC_Configuration_r18 {
    bool has_cg_RRC_RetransmissionTimer_r18; /**< cg-RRC-RetransmissionTimer-r18 是否存在。 */
    int64_t cg_RRC_RetransmissionTimer_r18; /**< ASN.1 cg-RRC-RetransmissionTimer-r18；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_cg_RRC_RSRP_ThresholdSSB_r18; /**< cg-RRC-RSRP-ThresholdSSB-r18 是否存在。 */
    RSRP_Range cg_RRC_RSRP_ThresholdSSB_r18; /**< ASN.1 cg-RRC-RSRP-ThresholdSSB-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rrc_SSB_Subset_r18; /**< rrc-SSB-Subset-r18 是否存在。 */
    CG_RRC_Configuration_r18_Rrc_SSB_Subset_r18 rrc_SSB_Subset_r18; /**< ASN.1 rrc-SSB-Subset-r18；结构体；OPTIONAL。 */
    bool has_rrc_SSB_PerCG_PUSCH_r18; /**< rrc-SSB-PerCG-PUSCH-r18 是否存在。 */
    CG_RRC_Configuration_r18_Rrc_SSB_PerCG_PUSCH_r18 rrc_SSB_PerCG_PUSCH_r18; /**< ASN.1 rrc-SSB-PerCG-PUSCH-r18；枚举；OPTIONAL。 */
    bool has_rrc_P0_PUSCH_r18; /**< rrc-P0-PUSCH-r18 是否存在。 */
    int64_t rrc_P0_PUSCH_r18; /**< ASN.1 rrc-P0-PUSCH-r18；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_rrc_Alpha_r18; /**< rrc-Alpha-r18 是否存在。 */
    CG_RRC_Configuration_r18_Rrc_Alpha_r18 rrc_Alpha_r18; /**< ASN.1 rrc-Alpha-r18；枚举；OPTIONAL。 */
    bool has_rrc_DMRS_Ports_r18; /**< rrc-DMRS-Ports-r18 是否存在。 */
    CG_RRC_Configuration_r18_Rrc_DMRS_Ports_r18 rrc_DMRS_Ports_r18; /**< ASN.1 rrc-DMRS-Ports-r18；结构体；OPTIONAL。 */
    bool has_rrc_NrofDMRS_Sequences_r18; /**< rrc-NrofDMRS-Sequences-r18 是否存在。 */
    int64_t rrc_NrofDMRS_Sequences_r18; /**< ASN.1 rrc-NrofDMRS-Sequences-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3
 * @note ASN.1：ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3；源文件第 5558 行。
 */
struct ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3 {
    bool has_srs_ResourceSetId_r18; /**< srs-ResourceSetId-r18 是否存在。 */
    SRS_ResourceSetId srs_ResourceSetId_r18; /**< ASN.1 srs-ResourceSetId-r18；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_cg_LTM_Configuration_r18; /**< cg-LTM-Configuration-r18 是否存在。 */
    CG_RRC_Configuration_r18 cg_LTM_Configuration_r18; /**< ASN.1 cg-LTM-Configuration-r18；结构体；OPTIONAL。 */
    bool has_cg_SDT_PeriodicityExt_r18; /**< cg-SDT-PeriodicityExt-r18 是否存在。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_Cg_SDT_PeriodicityExt_r18 cg_SDT_PeriodicityExt_r18; /**< ASN.1 cg-SDT-PeriodicityExt-r18；枚举；OPTIONAL。 */
    bool has_timeReferenceHyperSFN_r18; /**< timeReferenceHyperSFN-r18 是否存在。 */
    int64_t timeReferenceHyperSFN_r18; /**< ASN.1 timeReferenceHyperSFN-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_cg_RRC_Configuration_r18; /**< cg-RRC-Configuration-r18 是否存在。 */
    CG_RRC_Configuration_r18 cg_RRC_Configuration_r18; /**< ASN.1 cg-RRC-Configuration-r18；结构体；OPTIONAL。 */
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；枚举；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant
 * @note ASN.1：rrc-ConfiguredUplinkGrant；源文件第 5533 行。
 * @note SEQUENCE { timeDomainOffset, timeDomainAllocation, frequencyDomainAllocation,...
 */
struct ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant {
    int64_t timeDomainOffset; /**< ASN.1 timeDomainOffset；INTEGER (0..5119)，位宽 13 bit。 */
    int64_t timeDomainAllocation; /**< ASN.1 timeDomainAllocation；INTEGER (0..15)，位宽 4 bit。 */
    BitString frequencyDomainAllocation; /**< ASN.1 frequencyDomainAllocation；SIZE (18)，定长。 */
    int64_t antennaPort; /**< ASN.1 antennaPort；INTEGER (0..31)，位宽 5 bit。 */
    bool has_dmrs_SeqInitialization; /**< dmrs-SeqInitialization 是否存在。 */
    int64_t dmrs_SeqInitialization; /**< ASN.1 dmrs-SeqInitialization；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    int64_t precodingAndNumberOfLayers; /**< ASN.1 precodingAndNumberOfLayers；INTEGER (0..63)，位宽 6 bit。 */
    bool has_srs_ResourceIndicator; /**< srs-ResourceIndicator 是否存在。 */
    int64_t srs_ResourceIndicator; /**< ASN.1 srs-ResourceIndicator；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    int64_t mcsAndTBS; /**< ASN.1 mcsAndTBS；INTEGER (0..31)，位宽 5 bit。 */
    bool has_frequencyHoppingOffset; /**< frequencyHoppingOffset 是否存在。 */
    int64_t frequencyHoppingOffset; /**< ASN.1 frequencyHoppingOffset；INTEGER (1..274)，位宽 9 bit；OPTIONAL。 */
    int64_t pathlossReferenceIndex; /**< ASN.1 pathlossReferenceIndex；INTEGER (0..3)，位宽 2 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ConfiguredGrantConfig
 * @note ASN.1：ConfiguredGrantConfig；源文件第 5510 行。
 * @note ConfiguredGrantConfig ::= SEQUENCE { frequencyHopping, cg-DMRS-Configuration, mcs-Table, mcs-TableTrans...
 */
struct ConfiguredGrantConfig {
    bool has_frequencyHopping; /**< frequencyHopping 是否存在。 */
    ConfiguredGrantConfig_FrequencyHopping frequencyHopping; /**< ASN.1 frequencyHopping；枚举；OPTIONAL。 */
    DMRS_UplinkConfig cg_DMRS_Configuration; /**< ASN.1 cg-DMRS-Configuration；结构体。 */
    bool has_mcs_Table; /**< mcs-Table 是否存在。 */
    ConfiguredGrantConfig_Mcs_Table mcs_Table; /**< ASN.1 mcs-Table；枚举；OPTIONAL。 */
    bool has_mcs_TableTransformPrecoder; /**< mcs-TableTransformPrecoder 是否存在。 */
    ConfiguredGrantConfig_Mcs_TableTransformPrecoder mcs_TableTransformPrecoder; /**< ASN.1 mcs-TableTransformPrecoder；枚举；OPTIONAL。 */
    bool has_uci_OnPUSCH; /**< uci-OnPUSCH 是否存在。 */
    SetupRelease_CG_UCI_OnPUSCH uci_OnPUSCH; /**< ASN.1 uci-OnPUSCH；结构体；OPTIONAL。 */
    ConfiguredGrantConfig_ResourceAllocation resourceAllocation; /**< ASN.1 resourceAllocation；枚举。 */
    bool has_rbg_Size; /**< rbg-Size 是否存在。 */
    ConfiguredGrantConfig_Rbg_Size rbg_Size; /**< ASN.1 rbg-Size；枚举；OPTIONAL。 */
    ConfiguredGrantConfig_PowerControlLoopToUse powerControlLoopToUse; /**< ASN.1 powerControlLoopToUse；枚举。 */
    P0_PUSCH_AlphaSetId p0_PUSCH_Alpha; /**< ASN.1 p0-PUSCH-Alpha；INTEGER (0..29)，位宽 5 bit。 */
    bool has_transformPrecoder; /**< transformPrecoder 是否存在。 */
    ConfiguredGrantConfig_TransformPrecoder transformPrecoder; /**< ASN.1 transformPrecoder；枚举；OPTIONAL。 */
    int64_t nrofHARQ_Processes; /**< ASN.1 nrofHARQ-Processes；INTEGER (1..16)，位宽 4 bit。 */
    ConfiguredGrantConfig_RepK repK; /**< ASN.1 repK；枚举。 */
    bool has_repK_RV; /**< repK-RV 是否存在。 */
    ConfiguredGrantConfig_RepK_RV repK_RV; /**< ASN.1 repK-RV；枚举；OPTIONAL。 */
    ConfiguredGrantConfig_Periodicity periodicity; /**< ASN.1 periodicity；枚举。 */
    bool has_configuredGrantTimer; /**< configuredGrantTimer 是否存在。 */
    int64_t configuredGrantTimer; /**< ASN.1 configuredGrantTimer；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_rrc_ConfiguredUplinkGrant; /**< rrc-ConfiguredUplinkGrant 是否存在。 */
    ConfiguredGrantConfig_Rrc_ConfiguredUplinkGrant rrc_ConfiguredUplinkGrant; /**< ASN.1 rrc-ConfiguredUplinkGrant；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ConfiguredGrantConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ConfiguredGrantConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ConfiguredGrantConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    ConfiguredGrantConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_ConfiguredGrantConfig
 * @note ASN.1：SetupRelease<ConfiguredGrantConfig>；源文件第 4646 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_ConfiguredGrantConfig_Tag {
    SetupRelease_ConfiguredGrantConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_ConfiguredGrantConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_ConfiguredGrantConfig_Tag;

struct SetupRelease_ConfiguredGrantConfig {
    SetupRelease_ConfiguredGrantConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        ConfiguredGrantConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_Config_ExtGroup1
 * @note ASN.1：SRS_Config_ExtGroup1；源文件第 13064 行。
 */
struct SRS_Config_ExtGroup1 {
    bool has_srs_RequestDCI_1_2_r16; /**< srs-RequestDCI-1-2-r16 是否存在。 */
    int64_t srs_RequestDCI_1_2_r16; /**< ASN.1 srs-RequestDCI-1-2-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_srs_RequestDCI_0_2_r16; /**< srs-RequestDCI-0-2-r16 是否存在。 */
    int64_t srs_RequestDCI_0_2_r16; /**< ASN.1 srs-RequestDCI-0-2-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_srs_ResourceSetToAddModListDCI_0_2_r16; /**< srs-ResourceSetToAddModListDCI-0-2-r16 是否存在。 */
    SRS_ResourceSet* srs_ResourceSetToAddModListDCI_0_2_r16_items; /**< ASN.1 srs-ResourceSetToAddModListDCI-0-2-r16；SEQUENCE OF SRS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceSetToAddModListDCI_0_2_r16_count; /**< srs-ResourceSetToAddModListDCI-0-2-r16 元素个数。 */
    bool has_srs_ResourceSetToReleaseListDCI_0_2_r16; /**< srs-ResourceSetToReleaseListDCI-0-2-r16 是否存在。 */
    SRS_ResourceSetId* srs_ResourceSetToReleaseListDCI_0_2_r16_items; /**< ASN.1 srs-ResourceSetToReleaseListDCI-0-2-r16；SEQUENCE OF SRS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceSetToReleaseListDCI_0_2_r16_count; /**< srs-ResourceSetToReleaseListDCI-0-2-r16 元素个数。 */
    bool has_srs_PosResourceSetToReleaseList_r16; /**< srs-PosResourceSetToReleaseList-r16 是否存在。 */
    SRS_PosResourceSetId_r16* srs_PosResourceSetToReleaseList_r16_items; /**< ASN.1 srs-PosResourceSetToReleaseList-r16；SEQUENCE OF SRS_PosResourceSetId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceSetToReleaseList_r16_count; /**< srs-PosResourceSetToReleaseList-r16 元素个数。 */
    bool has_srs_PosResourceSetToAddModList_r16; /**< srs-PosResourceSetToAddModList-r16 是否存在。 */
    SRS_PosResourceSet_r16* srs_PosResourceSetToAddModList_r16_items; /**< ASN.1 srs-PosResourceSetToAddModList-r16；SEQUENCE OF SRS_PosResourceSet_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceSetToAddModList_r16_count; /**< srs-PosResourceSetToAddModList-r16 元素个数。 */
    bool has_srs_PosResourceToReleaseList_r16; /**< srs-PosResourceToReleaseList-r16 是否存在。 */
    SRS_PosResourceId_r16* srs_PosResourceToReleaseList_r16_items; /**< ASN.1 srs-PosResourceToReleaseList-r16；SEQUENCE OF SRS_PosResourceId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceToReleaseList_r16_count; /**< srs-PosResourceToReleaseList-r16 元素个数。 */
    bool has_srs_PosResourceToAddModList_r16; /**< srs-PosResourceToAddModList-r16 是否存在。 */
    SRS_PosResource_r16* srs_PosResourceToAddModList_r16_items; /**< ASN.1 srs-PosResourceToAddModList-r16；SEQUENCE OF SRS_PosResource_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceToAddModList_r16_count; /**< srs-PosResourceToAddModList-r16 元素个数。 */
};


/**
 * @brief SRS_Config_ExtGroup2
 * @note ASN.1：SRS_Config_ExtGroup2；源文件第 13075 行。
 */
struct SRS_Config_ExtGroup2 {
    bool has_dci_TriggeringPosResourceSetLink_r18; /**< dci-TriggeringPosResourceSetLink-r18 是否存在。 */
    SRS_Config_ExtGroup2_Dci_TriggeringPosResourceSetLink_r18 dci_TriggeringPosResourceSetLink_r18; /**< ASN.1 dci-TriggeringPosResourceSetLink-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_Config
 * @note ASN.1：SRS-Config；源文件第 13057 行。
 * @note SRS-Config ::= SEQUENCE { srs-ResourceSetToReleaseList, srs-ResourceSetToAddModList, srs-Res...
 */
struct SRS_Config {
    bool has_srs_ResourceSetToReleaseList; /**< srs-ResourceSetToReleaseList 是否存在。 */
    SRS_ResourceSetId* srs_ResourceSetToReleaseList_items; /**< ASN.1 srs-ResourceSetToReleaseList；SEQUENCE OF SRS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceSetToReleaseList_count; /**< srs-ResourceSetToReleaseList 元素个数。 */
    bool has_srs_ResourceSetToAddModList; /**< srs-ResourceSetToAddModList 是否存在。 */
    SRS_ResourceSet* srs_ResourceSetToAddModList_items; /**< ASN.1 srs-ResourceSetToAddModList；SEQUENCE OF SRS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceSetToAddModList_count; /**< srs-ResourceSetToAddModList 元素个数。 */
    bool has_srs_ResourceToReleaseList; /**< srs-ResourceToReleaseList 是否存在。 */
    SRS_ResourceId* srs_ResourceToReleaseList_items; /**< ASN.1 srs-ResourceToReleaseList；SEQUENCE OF SRS_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceToReleaseList_count; /**< srs-ResourceToReleaseList 元素个数。 */
    bool has_srs_ResourceToAddModList; /**< srs-ResourceToAddModList 是否存在。 */
    SRS_Resource* srs_ResourceToAddModList_items; /**< ASN.1 srs-ResourceToAddModList；SEQUENCE OF SRS_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_ResourceToAddModList_count; /**< srs-ResourceToAddModList 元素个数。 */
    bool has_tpc_Accumulation; /**< tpc-Accumulation 是否存在。 */
    SRS_Config_Tpc_Accumulation tpc_Accumulation; /**< ASN.1 tpc-Accumulation；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SRS_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SRS_Config
 * @note ASN.1：SetupRelease<SRS-Config>；源文件第 4647 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_Config_Tag {
    SetupRelease_SRS_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_Config_Tag;

struct SetupRelease_SRS_Config {
    SetupRelease_SRS_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_BeamFailureRecoveryConfig
 * @note ASN.1：SetupRelease<BeamFailureRecoveryConfig>；源文件第 4648 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BeamFailureRecoveryConfig_Tag {
    SetupRelease_BeamFailureRecoveryConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BeamFailureRecoveryConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BeamFailureRecoveryConfig_Tag;

struct SetupRelease_BeamFailureRecoveryConfig {
    SetupRelease_BeamFailureRecoveryConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BeamFailureRecoveryConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_UplinkDedicated
 * @note ASN.1：BWP-UplinkDedicated；源文件第 4643 行。
 * @note BWP-UplinkDedicated ::= SEQUENCE { pucch-Config, pusch-Config, configuredGrantConfig, srs-Config, bea...
 */
struct BWP_UplinkDedicated {
    bool has_pucch_Config; /**< pucch-Config 是否存在。 */
    SetupRelease_PUCCH_Config pucch_Config; /**< ASN.1 pucch-Config；结构体；OPTIONAL。 */
    bool has_pusch_Config; /**< pusch-Config 是否存在。 */
    SetupRelease_PUSCH_Config pusch_Config; /**< ASN.1 pusch-Config；结构体；OPTIONAL。 */
    bool has_configuredGrantConfig; /**< configuredGrantConfig 是否存在。 */
    SetupRelease_ConfiguredGrantConfig configuredGrantConfig; /**< ASN.1 configuredGrantConfig；结构体；OPTIONAL。 */
    bool has_srs_Config; /**< srs-Config 是否存在。 */
    SetupRelease_SRS_Config srs_Config; /**< ASN.1 srs-Config；结构体；OPTIONAL。 */
    bool has_beamFailureRecoveryConfig; /**< beamFailureRecoveryConfig 是否存在。 */
    SetupRelease_BeamFailureRecoveryConfig beamFailureRecoveryConfig; /**< ASN.1 beamFailureRecoveryConfig；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BWP_UplinkDedicated_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    BWP_UplinkDedicated_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    BWP_UplinkDedicated_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    BWP_UplinkDedicated_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BWP_Uplink
 * @note ASN.1：BWP-Uplink；源文件第 4590 行。
 * @note BWP-Uplink ::= SEQUENCE { bwp-Id, bwp-Common, bwp-Dedicated }
 */
struct BWP_Uplink {
    BWP_Id bwp_Id; /**< ASN.1 bwp-Id；INTEGER (0..4)，位宽 3 bit。 */
    bool has_bwp_Common; /**< bwp-Common 是否存在。 */
    BWP_UplinkCommon bwp_Common; /**< ASN.1 bwp-Common；结构体；OPTIONAL。 */
    bool has_bwp_Dedicated; /**< bwp-Dedicated 是否存在。 */
    BWP_UplinkDedicated bwp_Dedicated; /**< ASN.1 bwp-Dedicated；结构体；OPTIONAL。 */
};


/**
 * @brief AdditionalRACH_Config_r17
 * @note ASN.1：AdditionalRACH-Config-r17；源文件第 4632 行。
 * @note AdditionalRACH-Config-r17 ::= SEQUENCE { rach-ConfigCommon-r17, msgA-ConfigCommon-r17 }
 */
struct AdditionalRACH_Config_r17 {
    bool has_rach_ConfigCommon_r17; /**< rach-ConfigCommon-r17 是否存在。 */
    RACH_ConfigCommon rach_ConfigCommon_r17; /**< ASN.1 rach-ConfigCommon-r17；结构体；OPTIONAL。 */
    bool has_msgA_ConfigCommon_r17; /**< msgA-ConfigCommon-r17 是否存在。 */
    MsgA_ConfigCommon_r16 msgA_ConfigCommon_r17; /**< ASN.1 msgA-ConfigCommon-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfigType2DeactivationState_r16
 * @note ASN.1：ConfiguredGrantConfigType2DeactivationState-r16；源文件第 4689 行。
 * @note ConfiguredGrantConfigType2DeactivationState-r16 ::= SEQUENCE OF (size 1..12) OF ConfiguredGrantConfigIndex-r16
 */
struct ConfiguredGrantConfigType2DeactivationState_r16 {
    ConfiguredGrantConfigIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CandidateBeamRS_r16_CandidateBeamConfig_r16
 * @note ASN.1：candidateBeamConfig-r16；源文件第 4699 行。
 * @note CHOICE { ssb-r16, csi-RS-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag {
    CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_ssb_r16 = 0, /**< ASN.1 ssb-r16 */
    CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag_csi_RS_r16 = 1, /**< ASN.1 csi-RS-r16 */
} CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag;

struct CandidateBeamRS_r16_CandidateBeamConfig_r16 {
    CandidateBeamRS_r16_CandidateBeamConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_r16; /**< ASN.1 ssb-r16 */
        NZP_CSI_RS_ResourceId csi_RS_r16; /**< ASN.1 csi-RS-r16 */
    } u;
};


/**
 * @brief CandidateBeamRS_r16
 * @note ASN.1：CandidateBeamRS-r16；源文件第 4698 行。
 * @note CandidateBeamRS-r16 ::= SEQUENCE { candidateBeamConfig-r16, servingCellId }
 */
struct CandidateBeamRS_r16 {
    CandidateBeamRS_r16_CandidateBeamConfig_r16 candidateBeamConfig_r16; /**< ASN.1 candidateBeamConfig-r16；结构体。 */
    bool has_servingCellId; /**< servingCellId 是否存在。 */
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief LTM_QCL_Info_r18_ReferenceSignal_r18
 * @note ASN.1：referenceSignal-r18；源文件第 4718 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LTM_QCL_Info_r18_ReferenceSignal_r18_Tag {
    LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    LTM_QCL_Info_r18_ReferenceSignal_r18_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} LTM_QCL_Info_r18_ReferenceSignal_r18_Tag;

struct LTM_QCL_Info_r18_ReferenceSignal_r18 {
    LTM_QCL_Info_r18_ReferenceSignal_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief LTM_QCL_Info_r18
 * @note ASN.1：LTM-QCL-Info-r18；源文件第 4717 行。
 * @note LTM-QCL-Info-r18 ::= SEQUENCE { referenceSignal-r18, qcl-Type-r18 }
 */
struct LTM_QCL_Info_r18 {
    LTM_QCL_Info_r18_ReferenceSignal_r18 referenceSignal_r18; /**< ASN.1 referenceSignal-r18；结构体。 */
    LTM_QCL_Info_r18_Qcl_Type_r18 qcl_Type_r18; /**< ASN.1 qcl-Type-r18；枚举。 */
};


/**
 * @brief CandidateTCI_State_r18
 * @note ASN.1：CandidateTCI-State-r18；源文件第 4709 行。
 * @note CandidateTCI-State-r18 ::= SEQUENCE { tci-StateId-r18, qcl-Type1-r18, qcl-Type2-r18, pathlossReferenceRS...
 */
struct CandidateTCI_State_r18 {
    TCI_StateId tci_StateId_r18; /**< ASN.1 tci-StateId-r18；INTEGER (0..127)，位宽 7 bit。 */
    LTM_QCL_Info_r18 qcl_Type1_r18; /**< ASN.1 qcl-Type1-r18；结构体。 */
    bool has_qcl_Type2_r18; /**< qcl-Type2-r18 是否存在。 */
    LTM_QCL_Info_r18 qcl_Type2_r18; /**< ASN.1 qcl-Type2-r18；结构体；OPTIONAL。 */
    bool has_pathlossReferenceRS_Id_r18; /**< pathlossReferenceRS-Id-r18 是否存在。 */
    PathlossReferenceRS_Id_r17 pathlossReferenceRS_Id_r18; /**< ASN.1 pathlossReferenceRS-Id-r18；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief CandidateTCI_UL_State_r18_ReferenceSignal_r18
 * @note ASN.1：referenceSignal-r18；源文件第 4731 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag {
    CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag;

struct CandidateTCI_UL_State_r18_ReferenceSignal_r18 {
    CandidateTCI_UL_State_r18_ReferenceSignal_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief CandidateTCI_UL_State_r18
 * @note ASN.1：CandidateTCI-UL-State-r18；源文件第 4729 行。
 * @note CandidateTCI-UL-State-r18 ::= SEQUENCE { tci-UL-StateId-r18, referenceSignal-r18, pathlossReferenceRS-Id-r18 }
 */
struct CandidateTCI_UL_State_r18 {
    TCI_UL_StateId_r17 tci_UL_StateId_r18; /**< ASN.1 tci-UL-StateId-r18；INTEGER (0..63)，位宽 6 bit。 */
    CandidateTCI_UL_State_r18_ReferenceSignal_r18 referenceSignal_r18; /**< ASN.1 referenceSignal-r18；结构体。 */
    bool has_pathlossReferenceRS_Id_r18; /**< pathlossReferenceRS-Id-r18 是否存在。 */
    PathlossReferenceRS_Id_r17 pathlossReferenceRS_Id_r18; /**< ASN.1 pathlossReferenceRS-Id-r18；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief SNPN_AccessInfo_r17
 * @note ASN.1：SNPN-AccessInfo-r17；源文件第 4755 行。
 * @note SNPN-AccessInfo-r17 ::= SEQUENCE { extCH-Supported-r17, extCH-WithoutConfigAllowed-r17, onboardingEna...
 */
struct SNPN_AccessInfo_r17 {
    bool has_extCH_Supported_r17; /**< extCH-Supported-r17 是否存在。 */
    SNPN_AccessInfo_r17_ExtCH_Supported_r17 extCH_Supported_r17; /**< ASN.1 extCH-Supported-r17；枚举；OPTIONAL。 */
    bool has_extCH_WithoutConfigAllowed_r17; /**< extCH-WithoutConfigAllowed-r17 是否存在。 */
    SNPN_AccessInfo_r17_ExtCH_WithoutConfigAllowed_r17 extCH_WithoutConfigAllowed_r17; /**< ASN.1 extCH-WithoutConfigAllowed-r17；枚举；OPTIONAL。 */
    bool has_onboardingEnabled_r17; /**< onboardingEnabled-r17 是否存在。 */
    SNPN_AccessInfo_r17_OnboardingEnabled_r17 onboardingEnabled_r17; /**< ASN.1 onboardingEnabled-r17；枚举；OPTIONAL。 */
    bool has_imsEmergencySupportForSNPN_r17; /**< imsEmergencySupportForSNPN-r17 是否存在。 */
    SNPN_AccessInfo_r17_ImsEmergencySupportForSNPN_r17 imsEmergencySupportForSNPN_r17; /**< ASN.1 imsEmergencySupportForSNPN-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PLMN_IdentityList_EUTRA_5GC
 * @note ASN.1：PLMN-IdentityList-EUTRA-5GC；源文件第 4772 行。
 * @note PLMN-IdentityList-EUTRA-5GC ::= SEQUENCE OF (size 1..12) OF PLMN-Identity-EUTRA-5GC
 */
struct PLMN_IdentityList_EUTRA_5GC {
    PLMN_Identity_EUTRA_5GC* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART016_H */
