/* ============================================================================
 * types/rrc_types_part019.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART019_H
#define RRC_CODEC_TYPES_PART019_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SRS_Resource
 * @note ASN.1：SRS-Resource；源文件第 13170 行。
 * @note SRS-Resource ::= SEQUENCE { srs-ResourceId, nrofSRS-Ports, ptrs-PortIndex, transmissionComb, r...
 */
struct SRS_Resource {
    SRS_ResourceId srs_ResourceId; /**< ASN.1 srs-ResourceId；INTEGER (0..63)，位宽 6 bit。 */
    SRS_Resource_NrofSRS_Ports nrofSRS_Ports; /**< ASN.1 nrofSRS-Ports；枚举。 */
    bool has_ptrs_PortIndex; /**< ptrs-PortIndex 是否存在。 */
    SRS_Resource_Ptrs_PortIndex ptrs_PortIndex; /**< ASN.1 ptrs-PortIndex；枚举；OPTIONAL。 */
    SRS_Resource_TransmissionComb transmissionComb; /**< ASN.1 transmissionComb；结构体。 */
    SRS_ResourceMapping resourceMapping; /**< ASN.1 resourceMapping；结构体。 */
    int64_t freqDomainPosition; /**< ASN.1 freqDomainPosition；INTEGER (0..67)，位宽 7 bit。 */
    int64_t freqDomainShift; /**< ASN.1 freqDomainShift；INTEGER (0..268)，位宽 9 bit。 */
    SRS_Resource_FreqHopping freqHopping; /**< ASN.1 freqHopping；结构体。 */
    SRS_Resource_GroupOrSequenceHopping groupOrSequenceHopping; /**< ASN.1 groupOrSequenceHopping；枚举。 */
    SRS_ResourceType resourceType; /**< ASN.1 resourceType；结构体。 */
    int64_t sequenceId; /**< ASN.1 sequenceId；INTEGER (0..1023)，位宽 10 bit。 */
    bool has_spatialRelationInfo; /**< spatialRelationInfo 是否存在。 */
    SRS_SpatialRelationInfo spatialRelationInfo; /**< ASN.1 spatialRelationInfo；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_Resource_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SRS_Resource_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SRS_Resource_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    SRS_Resource_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SRS_ResourceConfigCLI_r16
 * @note ASN.1：SRS-ResourceConfigCLI-r16；源文件第 7624 行。
 * @note SRS-ResourceConfigCLI-r16 ::= SEQUENCE { srs-Resource-r16, srs-SCS-r16, refServCellIndex-r16, refBWP-r16 }
 */
struct SRS_ResourceConfigCLI_r16 {
    SRS_Resource srs_Resource_r16; /**< ASN.1 srs-Resource-r16；结构体。 */
    SubcarrierSpacing srs_SCS_r16; /**< ASN.1 srs-SCS-r16；枚举。 */
    bool has_refServCellIndex_r16; /**< refServCellIndex-r16 是否存在。 */
    ServCellIndex refServCellIndex_r16; /**< ASN.1 refServCellIndex-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    BWP_Id refBWP_r16; /**< ASN.1 refBWP-r16；INTEGER (0..4)，位宽 3 bit。 */
};


/**
 * @brief RSSI_PeriodicityAndOffset_r16
 * @note ASN.1：RSSI-PeriodicityAndOffset-r16；源文件第 7646 行。
 * @note RSSI-PeriodicityAndOffset-r16 ::= CHOICE { sl10, sl20, sl40, sl80, sl160, sl320, s1640 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RSSI_PeriodicityAndOffset_r16_Tag {
    RSSI_PeriodicityAndOffset_r16_Tag_sl10 = 0, /**< ASN.1 sl10 */
    RSSI_PeriodicityAndOffset_r16_Tag_sl20 = 1, /**< ASN.1 sl20 */
    RSSI_PeriodicityAndOffset_r16_Tag_sl40 = 2, /**< ASN.1 sl40 */
    RSSI_PeriodicityAndOffset_r16_Tag_sl80 = 3, /**< ASN.1 sl80 */
    RSSI_PeriodicityAndOffset_r16_Tag_sl160 = 4, /**< ASN.1 sl160 */
    RSSI_PeriodicityAndOffset_r16_Tag_sl320 = 5, /**< ASN.1 sl320 */
    RSSI_PeriodicityAndOffset_r16_Tag_s1640 = 6, /**< ASN.1 s1640 */
} RSSI_PeriodicityAndOffset_r16_Tag;

struct RSSI_PeriodicityAndOffset_r16 {
    RSSI_PeriodicityAndOffset_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl10; /**< ASN.1 sl10 */
        int64_t sl20; /**< ASN.1 sl20 */
        int64_t sl40; /**< ASN.1 sl40 */
        int64_t sl80; /**< ASN.1 sl80 */
        int64_t sl160; /**< ASN.1 sl160 */
        int64_t sl320; /**< ASN.1 sl320 */
        int64_t s1640; /**< ASN.1 s1640 */
    } u;
};


/**
 * @brief RSSI_ResourceConfigCLI_r16
 * @note ASN.1：RSSI-ResourceConfigCLI-r16；源文件第 7632 行。
 * @note RSSI-ResourceConfigCLI-r16 ::= SEQUENCE { rssi-ResourceId-r16, rssi-SCS-r16, startPRB-r16, nrofPRBs-r16, sta...
 */
struct RSSI_ResourceConfigCLI_r16 {
    RSSI_ResourceId_r16 rssi_ResourceId_r16; /**< ASN.1 rssi-ResourceId-r16；INTEGER (0..63)，位宽 6 bit。 */
    SubcarrierSpacing rssi_SCS_r16; /**< ASN.1 rssi-SCS-r16；枚举。 */
    int64_t startPRB_r16; /**< ASN.1 startPRB-r16；INTEGER (0..2169)，位宽 12 bit。 */
    int64_t nrofPRBs_r16; /**< ASN.1 nrofPRBs-r16；INTEGER (4..276)，位宽 9 bit。 */
    int64_t startPosition_r16; /**< ASN.1 startPosition-r16；INTEGER (0..13)，位宽 4 bit。 */
    int64_t nrofSymbols_r16; /**< ASN.1 nrofSymbols-r16；INTEGER (1..14)，位宽 4 bit。 */
    RSSI_PeriodicityAndOffset_r16 rssi_PeriodicityAndOffset_r16; /**< ASN.1 rssi-PeriodicityAndOffset-r16；结构体。 */
    bool has_refServCellIndex_r16; /**< refServCellIndex-r16 是否存在。 */
    ServCellIndex refServCellIndex_r16; /**< ASN.1 refServCellIndex-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief MeasObjectEUTRA_ExtGroup1
 * @note ASN.1：MeasObjectEUTRA_ExtGroup1；源文件第 7671 行。
 */
struct MeasObjectEUTRA_ExtGroup1 {
    bool has_associatedMeasGap_r17; /**< associatedMeasGap-r17 是否存在。 */
    MeasGapId_r17 associatedMeasGap_r17; /**< ASN.1 associatedMeasGap-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief MeasObjectEUTRA_ExtGroup2
 * @note ASN.1：MeasObjectEUTRA_ExtGroup2；源文件第 7674 行。
 */
struct MeasObjectEUTRA_ExtGroup2 {
    bool has_measSequence_r18; /**< measSequence-r18 是否存在。 */
    MeasSequence_r18 measSequence_r18; /**< ASN.1 measSequence-r18；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief EUTRA_CellIndexList
 * @note ASN.1：EUTRA-CellIndexList；源文件第 7679 行。
 * @note EUTRA-CellIndexList ::= SEQUENCE OF (size 1..32) OF EUTRA-CellIndex
 */
struct EUTRA_CellIndexList {
    EUTRA_CellIndex* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasObjectEUTRA
 * @note ASN.1：MeasObjectEUTRA；源文件第 7660 行。
 * @note MeasObjectEUTRA ::= SEQUENCE { carrierFreq, allowedMeasBandwidth, cellsToRemoveListEUTRAN, cellsT...
 */
struct MeasObjectEUTRA {
    ARFCN_ValueEUTRA carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..262143)，位宽 18 bit。 */
    EUTRA_AllowedMeasBandwidth allowedMeasBandwidth; /**< ASN.1 allowedMeasBandwidth；枚举。 */
    bool has_cellsToRemoveListEUTRAN; /**< cellsToRemoveListEUTRAN 是否存在。 */
    EUTRA_CellIndexList cellsToRemoveListEUTRAN; /**< ASN.1 cellsToRemoveListEUTRAN；SEQUENCE OF EUTRA_CellIndex，SIZE (1..32)；OPTIONAL。 */
    bool has_cellsToAddModListEUTRAN; /**< cellsToAddModListEUTRAN 是否存在。 */
    EUTRA_Cell* cellsToAddModListEUTRAN_items; /**< ASN.1 cellsToAddModListEUTRAN；SEQUENCE OF EUTRA_Cell，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cellsToAddModListEUTRAN_count; /**< cellsToAddModListEUTRAN 元素个数。 */
    bool has_excludedCellsToRemoveListEUTRAN; /**< excludedCellsToRemoveListEUTRAN 是否存在。 */
    EUTRA_CellIndexList excludedCellsToRemoveListEUTRAN; /**< ASN.1 excludedCellsToRemoveListEUTRAN；SEQUENCE OF EUTRA_CellIndex，SIZE (1..32)；OPTIONAL。 */
    bool has_excludedCellsToAddModListEUTRAN; /**< excludedCellsToAddModListEUTRAN 是否存在。 */
    EUTRA_ExcludedCell* excludedCellsToAddModListEUTRAN_items; /**< ASN.1 excludedCellsToAddModListEUTRAN；SEQUENCE OF EUTRA_ExcludedCell，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t excludedCellsToAddModListEUTRAN_count; /**< excludedCellsToAddModListEUTRAN 元素个数。 */
    EUTRA_PresenceAntennaPort1 eutra_PresenceAntennaPort1; /**< ASN.1 eutra-PresenceAntennaPort1；BOOLEAN，1 bit。 */
    bool has_eutra_Q_OffsetRange; /**< eutra-Q-OffsetRange 是否存在。 */
    EUTRA_Q_OffsetRange eutra_Q_OffsetRange; /**< ASN.1 eutra-Q-OffsetRange；枚举；OPTIONAL。 */
    bool widebandRSRQ_Meas; /**< ASN.1 widebandRSRQ-Meas；BOOLEAN，1 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasObjectEUTRA_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasObjectEUTRA_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief EUTRA_Cell
 * @note ASN.1：EUTRA-Cell；源文件第 7684 行。
 * @note EUTRA-Cell ::= SEQUENCE { cellIndexEUTRA, physCellId, cellIndividualOffset }
 */
struct EUTRA_Cell {
    EUTRA_CellIndex cellIndexEUTRA; /**< ASN.1 cellIndexEUTRA；INTEGER (1..32)，位宽 5 bit。 */
    EUTRA_PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..503)，位宽 9 bit。 */
    EUTRA_Q_OffsetRange cellIndividualOffset; /**< ASN.1 cellIndividualOffset；枚举。 */
};


/**
 * @brief EUTRA_PhysCellIdRange
 * @note ASN.1：EUTRA-PhysCellIdRange；源文件第 21471 行。
 * @note EUTRA-PhysCellIdRange ::= SEQUENCE { start, range }
 */
struct EUTRA_PhysCellIdRange {
    EUTRA_PhysCellId start; /**< ASN.1 start；INTEGER (0..503)，位宽 9 bit。 */
    bool has_range; /**< range 是否存在。 */
    EUTRA_PhysCellIdRange_Range range; /**< ASN.1 range；枚举；OPTIONAL。 */
};


/**
 * @brief EUTRA_ExcludedCell
 * @note ASN.1：EUTRA-ExcludedCell；源文件第 7691 行。
 * @note EUTRA-ExcludedCell ::= SEQUENCE { cellIndexEUTRA, physCellIdRange }
 */
struct EUTRA_ExcludedCell {
    EUTRA_CellIndex cellIndexEUTRA; /**< ASN.1 cellIndexEUTRA；INTEGER (1..32)，位宽 5 bit。 */
    EUTRA_PhysCellIdRange physCellIdRange; /**< ASN.1 physCellIdRange；结构体。 */
};


/**
 * @brief CellsToAddModListExt_v1800
 * @note ASN.1：CellsToAddModListExt-v1800；源文件第 7806 行。
 * @note CellsToAddModListExt-v1800 ::= SEQUENCE OF (size 1..32) OF CellsToAddModExt-v1800
 */
struct CellsToAddModListExt_v1800 {
    CellsToAddModExt_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasObjectNR_ExtGroup5
 * @note ASN.1：MeasObjectNR_ExtGroup5；源文件第 7745 行。
 */
struct MeasObjectNR_ExtGroup5 {
    bool has_measSequence_r18; /**< measSequence-r18 是否存在。 */
    MeasSequence_r18 measSequence_r18; /**< ASN.1 measSequence-r18；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_cellsToAddModListExt_v1800; /**< cellsToAddModListExt-v1800 是否存在。 */
    CellsToAddModListExt_v1800 cellsToAddModListExt_v1800; /**< ASN.1 cellsToAddModListExt-v1800；SEQUENCE OF CellsToAddModExt_v1800，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief MeasObjectNR_ExtGroup1
 * @note ASN.1：MeasObjectNR_ExtGroup1；源文件第 7724 行。
 */
struct MeasObjectNR_ExtGroup1 {
    bool has_freqBandIndicatorNR; /**< freqBandIndicatorNR 是否存在。 */
    FreqBandIndicatorNR freqBandIndicatorNR; /**< ASN.1 freqBandIndicatorNR；INTEGER (1..1024)，位宽 10 bit；OPTIONAL。 */
    bool has_measCycleSCell; /**< measCycleSCell 是否存在。 */
    MeasObjectNR_ExtGroup1_MeasCycleSCell measCycleSCell; /**< ASN.1 measCycleSCell；枚举；OPTIONAL。 */
};


/**
 * @brief SSB_MTC3List_r16
 * @note ASN.1：SSB-MTC3List-r16；源文件第 7751 行。
 * @note SSB-MTC3List-r16 ::= SEQUENCE OF (size 1..4) OF SSB-MTC3-r16
 */
struct SSB_MTC3List_r16 {
    SSB_MTC3_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17
 * @note ASN.1：tci-StateInfo-r17；源文件第 7833 行。
 * @note SEQUENCE { tci-StateId-r17, ref-ServCellId-r17 }
 */
struct RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17 {
    TCI_StateId tci_StateId_r17; /**< ASN.1 tci-StateId-r17；INTEGER (0..127)，位宽 7 bit。 */
    bool has_ref_ServCellId_r17; /**< ref-ServCellId-r17 是否存在。 */
    ServCellIndex ref_ServCellId_r17; /**< ASN.1 ref-ServCellId-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief RMTC_Config_r16_ExtGroup1
 * @note ASN.1：RMTC_Config_r16_ExtGroup1；源文件第 7829 行。
 */
struct RMTC_Config_r16_ExtGroup1 {
    bool has_rmtc_Bandwidth_r17; /**< rmtc-Bandwidth-r17 是否存在。 */
    RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17 rmtc_Bandwidth_r17; /**< ASN.1 rmtc-Bandwidth-r17；枚举；OPTIONAL。 */
    bool has_measDurationSymbols_v1700; /**< measDurationSymbols-v1700 是否存在。 */
    RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700 measDurationSymbols_v1700; /**< ASN.1 measDurationSymbols-v1700；枚举；OPTIONAL。 */
    bool has_ref_SCS_CP_v1700; /**< ref-SCS-CP-v1700 是否存在。 */
    RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700 ref_SCS_CP_v1700; /**< ASN.1 ref-SCS-CP-v1700；枚举；OPTIONAL。 */
    bool has_tci_StateInfo_r17; /**< tci-StateInfo-r17 是否存在。 */
    RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17 tci_StateInfo_r17; /**< ASN.1 tci-StateInfo-r17；结构体；OPTIONAL。 */
};


/**
 * @brief RMTC_Config_r16_ExtGroup2
 * @note ASN.1：RMTC_Config_r16_ExtGroup2；源文件第 7838 行。
 */
struct RMTC_Config_r16_ExtGroup2 {
    bool has_ref_BWPId_r17; /**< ref-BWPId-r17 是否存在。 */
    BWP_Id ref_BWPId_r17; /**< ASN.1 ref-BWPId-r17；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief RMTC_Config_r16
 * @note ASN.1：RMTC-Config-r16；源文件第 7822 行。
 * @note RMTC-Config-r16 ::= SEQUENCE { rmtc-Periodicity-r16, rmtc-SubframeOffset-r16, measDurationSymbols...
 */
struct RMTC_Config_r16 {
    RMTC_Config_r16_Rmtc_Periodicity_r16 rmtc_Periodicity_r16; /**< ASN.1 rmtc-Periodicity-r16；枚举。 */
    bool has_rmtc_SubframeOffset_r16; /**< rmtc-SubframeOffset-r16 是否存在。 */
    int64_t rmtc_SubframeOffset_r16; /**< ASN.1 rmtc-SubframeOffset-r16；INTEGER (0..639)，位宽 10 bit；OPTIONAL。 */
    RMTC_Config_r16_MeasDurationSymbols_r16 measDurationSymbols_r16; /**< ASN.1 measDurationSymbols-r16；枚举。 */
    ARFCN_ValueNR rmtc_Frequency_r16; /**< ASN.1 rmtc-Frequency-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    RMTC_Config_r16_Ref_SCS_CP_r16 ref_SCS_CP_r16; /**< ASN.1 ref-SCS-CP-r16；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RMTC_Config_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RMTC_Config_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_RMTC_Config_r16
 * @note ASN.1：SetupRelease<RMTC-Config-r16>；源文件第 7730 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RMTC_Config_r16_Tag {
    SetupRelease_RMTC_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RMTC_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RMTC_Config_r16_Tag;

struct SetupRelease_RMTC_Config_r16 {
    SetupRelease_RMTC_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RMTC_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_T312_r16
 * @note ASN.1：SetupRelease<T312-r16>；源文件第 7731 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_T312_r16_Tag {
    SetupRelease_T312_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_T312_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_T312_r16_Tag;

struct SetupRelease_T312_r16 {
    SetupRelease_T312_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        T312_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MeasObjectNR_ExtGroup2
 * @note ASN.1：MeasObjectNR_ExtGroup2；源文件第 7728 行。
 */
struct MeasObjectNR_ExtGroup2 {
    bool has_smtc3list_r16; /**< smtc3list-r16 是否存在。 */
    SSB_MTC3List_r16 smtc3list_r16; /**< ASN.1 smtc3list-r16；SEQUENCE OF SSB_MTC3_r16，SIZE (1..4)；OPTIONAL。 */
    bool has_rmtc_Config_r16; /**< rmtc-Config-r16 是否存在。 */
    SetupRelease_RMTC_Config_r16 rmtc_Config_r16; /**< ASN.1 rmtc-Config-r16；结构体；OPTIONAL。 */
    bool has_t312_r16; /**< t312-r16 是否存在。 */
    SetupRelease_T312_r16 t312_r16; /**< ASN.1 t312-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasObjectNR_ExtGroup4
 * @note ASN.1：MeasObjectNR_ExtGroup4；源文件第 7741 行。
 */
struct MeasObjectNR_ExtGroup4 {
    bool has_associatedMeasGapSSB2_v1720; /**< associatedMeasGapSSB2-v1720 是否存在。 */
    MeasGapId_r17 associatedMeasGapSSB2_v1720; /**< ASN.1 associatedMeasGapSSB2-v1720；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_associatedMeasGapCSIRS2_v1720; /**< associatedMeasGapCSIRS2-v1720 是否存在。 */
    MeasGapId_r17 associatedMeasGapCSIRS2_v1720; /**< ASN.1 associatedMeasGapCSIRS2-v1720；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief CellsToAddModListExt_v1710
 * @note ASN.1：CellsToAddModListExt-v1710；源文件第 7804 行。
 * @note CellsToAddModListExt-v1710 ::= SEQUENCE OF (size 1..32) OF CellsToAddModExt-v1710
 */
struct CellsToAddModListExt_v1710 {
    CellsToAddModExt_v1710* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasObjectNR_ExtGroup3
 * @note ASN.1：MeasObjectNR_ExtGroup3；源文件第 7733 行。
 */
struct MeasObjectNR_ExtGroup3 {
    bool has_associatedMeasGapSSB_r17; /**< associatedMeasGapSSB-r17 是否存在。 */
    MeasGapId_r17 associatedMeasGapSSB_r17; /**< ASN.1 associatedMeasGapSSB-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_associatedMeasGapCSIRS_r17; /**< associatedMeasGapCSIRS-r17 是否存在。 */
    MeasGapId_r17 associatedMeasGapCSIRS_r17; /**< ASN.1 associatedMeasGapCSIRS-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_smtc4list_r17; /**< smtc4list-r17 是否存在。 */
    SSB_MTC4List_r17 smtc4list_r17; /**< ASN.1 smtc4list-r17；SEQUENCE OF SSB_MTC4_r17，SIZE (1..3)；OPTIONAL。 */
    bool has_measCyclePSCell_r17; /**< measCyclePSCell-r17 是否存在。 */
    MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17 measCyclePSCell_r17; /**< ASN.1 measCyclePSCell-r17；枚举；OPTIONAL。 */
    bool has_cellsToAddModListExt_v1710; /**< cellsToAddModListExt-v1710 是否存在。 */
    CellsToAddModListExt_v1710 cellsToAddModListExt_v1710; /**< ASN.1 cellsToAddModListExt-v1710；SEQUENCE OF CellsToAddModExt_v1710，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief SSB_PositionQCL_CellsToAddModList_r16
 * @note ASN.1：SSB-PositionQCL-CellsToAddModList-r16；源文件第 7843 行。
 * @note SSB-PositionQCL-CellsToAddModList-r16 ::= SEQUENCE OF (size 1..32) OF SSB-PositionQCL-CellsToAddMod-r16
 */
struct SSB_PositionQCL_CellsToAddModList_r16 {
    SSB_PositionQCL_CellsToAddMod_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCI_List
 * @note ASN.1：PCI-List；源文件第 9112 行。
 * @note PCI-List ::= SEQUENCE OF (size 1..32) OF PhysCellId
 */
struct PCI_List {
    PhysCellId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SSB_ConfigMobility_ExtGroup1
 * @note ASN.1：SSB_ConfigMobility_ExtGroup1；源文件第 7767 行。
 */
struct SSB_ConfigMobility_ExtGroup1 {
    bool has_ssb_PositionQCL_Common_r16; /**< ssb-PositionQCL-Common-r16 是否存在。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_Common_r16; /**< ASN.1 ssb-PositionQCL-Common-r16；枚举；OPTIONAL。 */
    bool has_ssb_PositionQCL_CellsToAddModList_r16; /**< ssb-PositionQCL-CellsToAddModList-r16 是否存在。 */
    SSB_PositionQCL_CellsToAddModList_r16 ssb_PositionQCL_CellsToAddModList_r16; /**< ASN.1 ssb-PositionQCL-CellsToAddModList-r16；SEQUENCE OF SSB_PositionQCL_CellsToAddMod_r16，SIZE (1..32)；OPTIONAL。 */
    bool has_ssb_PositionQCL_CellsToRemoveList_r16; /**< ssb-PositionQCL-CellsToRemoveList-r16 是否存在。 */
    PCI_List ssb_PositionQCL_CellsToRemoveList_r16; /**< ASN.1 ssb-PositionQCL-CellsToRemoveList-r16；SEQUENCE OF PhysCellId，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief SSB_PositionQCL_CellList_r17
 * @note ASN.1：SSB-PositionQCL-CellList-r17；源文件第 7850 行。
 * @note SSB-PositionQCL-CellList-r17 ::= SEQUENCE OF (size 1..32) OF SSB-PositionQCL-Cell-r17
 */
struct SSB_PositionQCL_CellList_r17 {
    SSB_PositionQCL_Cell_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SSB_PositionQCL_CellList_r17
 * @note ASN.1：SetupRelease<SSB-PositionQCL-CellList-r17>；源文件第 7775 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SSB_PositionQCL_CellList_r17_Tag {
    SetupRelease_SSB_PositionQCL_CellList_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SSB_PositionQCL_CellList_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SSB_PositionQCL_CellList_r17_Tag;

struct SetupRelease_SSB_PositionQCL_CellList_r17 {
    SetupRelease_SSB_PositionQCL_CellList_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SSB_PositionQCL_CellList_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SSB_ConfigMobility_ExtGroup2
 * @note ASN.1：SSB_ConfigMobility_ExtGroup2；源文件第 7772 行。
 */
struct SSB_ConfigMobility_ExtGroup2 {
    bool has_deriveSSB_IndexFromCellInter_r17; /**< deriveSSB-IndexFromCellInter-r17 是否存在。 */
    ServCellIndex deriveSSB_IndexFromCellInter_r17; /**< ASN.1 deriveSSB-IndexFromCellInter-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_ssb_PositionQCL_Common_r17; /**< ssb-PositionQCL-Common-r17 是否存在。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_Common_r17; /**< ASN.1 ssb-PositionQCL-Common-r17；枚举；OPTIONAL。 */
    bool has_ssb_PositionQCL_Cells_r17; /**< ssb-PositionQCL-Cells-r17 是否存在。 */
    SetupRelease_SSB_PositionQCL_CellList_r17 ssb_PositionQCL_Cells_r17; /**< ASN.1 ssb-PositionQCL-Cells-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SSB_ConfigMobility_ExtGroup3
 * @note ASN.1：SSB_ConfigMobility_ExtGroup3；源文件第 7777 行。
 */
struct SSB_ConfigMobility_ExtGroup3 {
    bool has_cca_CellsToAddModList_r17; /**< cca-CellsToAddModList-r17 是否存在。 */
    PCI_List cca_CellsToAddModList_r17; /**< ASN.1 cca-CellsToAddModList-r17；SEQUENCE OF PhysCellId，SIZE (1..32)；OPTIONAL。 */
    bool has_cca_CellsToRemoveList_r17; /**< cca-CellsToRemoveList-r17 是否存在。 */
    PCI_List cca_CellsToRemoveList_r17; /**< ASN.1 cca-CellsToRemoveList-r17；SEQUENCE OF PhysCellId，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief SSB_ToMeasureAltitudeBasedList_r18
 * @note ASN.1：SSB-ToMeasureAltitudeBasedList-r18；源文件第 7857 行。
 * @note SSB-ToMeasureAltitudeBasedList-r18 ::= SEQUENCE OF (size 1..8) OF SSB-ToMeasureAltitudeBased-r18
 */
struct SSB_ToMeasureAltitudeBasedList_r18 {
    SSB_ToMeasureAltitudeBased_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SSB_ToMeasureAltitudeBasedList_r18
 * @note ASN.1：SetupRelease<SSB-ToMeasureAltitudeBasedList-r18>；源文件第 7782 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag {
    SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag;

struct SetupRelease_SSB_ToMeasureAltitudeBasedList_r18 {
    SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SSB_ToMeasureAltitudeBasedList_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SSB_ConfigMobility_ExtGroup4
 * @note ASN.1：SSB_ConfigMobility_ExtGroup4；源文件第 7781 行。
 */
struct SSB_ConfigMobility_ExtGroup4 {
    bool has_ssb_ToMeasureAltitudeBasedList_r18; /**< ssb-ToMeasureAltitudeBasedList-r18 是否存在。 */
    SetupRelease_SSB_ToMeasureAltitudeBasedList_r18 ssb_ToMeasureAltitudeBasedList_r18; /**< ASN.1 ssb-ToMeasureAltitudeBasedList-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SSB_ToMeasure
 * @note ASN.1：SetupRelease<SSB-ToMeasure>；源文件第 7763 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SSB_ToMeasure_Tag {
    SetupRelease_SSB_ToMeasure_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SSB_ToMeasure_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SSB_ToMeasure_Tag;

struct SetupRelease_SSB_ToMeasure {
    SetupRelease_SSB_ToMeasure_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SSB_ToMeasure setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SSB_ConfigMobility
 * @note ASN.1：SSB-ConfigMobility；源文件第 7762 行。
 * @note SSB-ConfigMobility ::= SEQUENCE { ssb-ToMeasure, deriveSSB-IndexFromCell, ss-RSSI-Measurement, ssb-P...
 */
struct SSB_ConfigMobility {
    bool has_ssb_ToMeasure; /**< ssb-ToMeasure 是否存在。 */
    SetupRelease_SSB_ToMeasure ssb_ToMeasure; /**< ASN.1 ssb-ToMeasure；结构体；OPTIONAL。 */
    bool deriveSSB_IndexFromCell; /**< ASN.1 deriveSSB-IndexFromCell；BOOLEAN，1 bit。 */
    bool has_ss_RSSI_Measurement; /**< ss-RSSI-Measurement 是否存在。 */
    SS_RSSI_Measurement ss_RSSI_Measurement; /**< ASN.1 ss-RSSI-Measurement；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SSB_ConfigMobility_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SSB_ConfigMobility_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SSB_ConfigMobility_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    SSB_ConfigMobility_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_CSI_RS_ResourceConfigMobility
 * @note ASN.1：SetupRelease<CSI-RS-ResourceConfigMobility>；源文件第 7759 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CSI_RS_ResourceConfigMobility_Tag {
    SetupRelease_CSI_RS_ResourceConfigMobility_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CSI_RS_ResourceConfigMobility_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CSI_RS_ResourceConfigMobility_Tag;

struct SetupRelease_CSI_RS_ResourceConfigMobility {
    SetupRelease_CSI_RS_ResourceConfigMobility_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CSI_RS_ResourceConfigMobility setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ReferenceSignalConfig
 * @note ASN.1：ReferenceSignalConfig；源文件第 7757 行。
 * @note ReferenceSignalConfig ::= SEQUENCE { ssb-ConfigMobility, csi-rs-ResourceConfigMobility }
 */
struct ReferenceSignalConfig {
    bool has_ssb_ConfigMobility; /**< ssb-ConfigMobility 是否存在。 */
    SSB_ConfigMobility ssb_ConfigMobility; /**< ASN.1 ssb-ConfigMobility；结构体；OPTIONAL。 */
    bool has_csi_rs_ResourceConfigMobility; /**< csi-rs-ResourceConfigMobility 是否存在。 */
    SetupRelease_CSI_RS_ResourceConfigMobility csi_rs_ResourceConfigMobility; /**< ASN.1 csi-rs-ResourceConfigMobility；结构体；OPTIONAL。 */
};


/**
 * @brief Q_OffsetRangeList
 * @note ASN.1：Q-OffsetRangeList；源文件第 7786 行。
 * @note Q-OffsetRangeList ::= SEQUENCE { rsrpOffsetSSB, rsrqOffsetSSB, sinrOffsetSSB, rsrpOffsetCSI-RS, rsr...
 */
struct Q_OffsetRangeList {
    Q_OffsetRange rsrpOffsetSSB; /**< ASN.1 rsrpOffsetSSB；枚举；DEFAULT Q_OffsetRange_dB0。 */
    Q_OffsetRange rsrqOffsetSSB; /**< ASN.1 rsrqOffsetSSB；枚举；DEFAULT Q_OffsetRange_dB0。 */
    Q_OffsetRange sinrOffsetSSB; /**< ASN.1 sinrOffsetSSB；枚举；DEFAULT Q_OffsetRange_dB0。 */
    Q_OffsetRange rsrpOffsetCSI_RS; /**< ASN.1 rsrpOffsetCSI-RS；枚举；DEFAULT Q_OffsetRange_dB0。 */
    Q_OffsetRange rsrqOffsetCSI_RS; /**< ASN.1 rsrqOffsetCSI-RS；枚举；DEFAULT Q_OffsetRange_dB0。 */
    Q_OffsetRange sinrOffsetCSI_RS; /**< ASN.1 sinrOffsetCSI-RS；枚举；DEFAULT Q_OffsetRange_dB0。 */
};


/**
 * @brief CellsToAddModList
 * @note ASN.1：CellsToAddModList；源文件第 7802 行。
 * @note CellsToAddModList ::= SEQUENCE OF (size 1..32) OF CellsToAddMod
 */
struct CellsToAddModList {
    CellsToAddMod* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCI_RangeIndexList
 * @note ASN.1：PCI-RangeIndexList；源文件第 9139 行。
 * @note PCI-RangeIndexList ::= SEQUENCE OF (size 1..8) OF PCI-RangeIndex
 */
struct PCI_RangeIndexList {
    PCI_RangeIndex* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SSB_MTC2
 * @note ASN.1：SSB-MTC2；源文件第 13549 行。
 * @note SSB-MTC2 ::= SEQUENCE { pci-List, periodicity }
 */
struct SSB_MTC2 {
    bool has_pci_List; /**< pci-List 是否存在。 */
    PhysCellId* pci_List_items; /**< ASN.1 pci-List；SEQUENCE OF PhysCellId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pci_List_count; /**< pci-List 元素个数。 */
    SSB_MTC2_Periodicity periodicity; /**< ASN.1 periodicity；枚举。 */
};


/**
 * @brief MeasObjectNR
 * @note ASN.1：MeasObjectNR；源文件第 7704 行。
 * @note MeasObjectNR ::= SEQUENCE { ssbFrequency, ssbSubcarrierSpacing, smtc1, smtc2, refFreqCSI-RS, r...
 */
struct MeasObjectNR {
    bool has_ssbFrequency; /**< ssbFrequency 是否存在。 */
    ARFCN_ValueNR ssbFrequency; /**< ASN.1 ssbFrequency；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_ssbSubcarrierSpacing; /**< ssbSubcarrierSpacing 是否存在。 */
    SubcarrierSpacing ssbSubcarrierSpacing; /**< ASN.1 ssbSubcarrierSpacing；枚举；OPTIONAL。 */
    bool has_smtc1; /**< smtc1 是否存在。 */
    SSB_MTC smtc1; /**< ASN.1 smtc1；结构体；OPTIONAL。 */
    bool has_smtc2; /**< smtc2 是否存在。 */
    SSB_MTC2 smtc2; /**< ASN.1 smtc2；结构体；OPTIONAL。 */
    bool has_refFreqCSI_RS; /**< refFreqCSI-RS 是否存在。 */
    ARFCN_ValueNR refFreqCSI_RS; /**< ASN.1 refFreqCSI-RS；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    ReferenceSignalConfig referenceSignalConfig; /**< ASN.1 referenceSignalConfig；结构体。 */
    bool has_absThreshSS_BlocksConsolidation; /**< absThreshSS-BlocksConsolidation 是否存在。 */
    ThresholdNR absThreshSS_BlocksConsolidation; /**< ASN.1 absThreshSS-BlocksConsolidation；结构体；OPTIONAL。 */
    bool has_absThreshCSI_RS_Consolidation; /**< absThreshCSI-RS-Consolidation 是否存在。 */
    ThresholdNR absThreshCSI_RS_Consolidation; /**< ASN.1 absThreshCSI-RS-Consolidation；结构体；OPTIONAL。 */
    bool has_nrofSS_BlocksToAverage; /**< nrofSS-BlocksToAverage 是否存在。 */
    int64_t nrofSS_BlocksToAverage; /**< ASN.1 nrofSS-BlocksToAverage；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_nrofCSI_RS_ResourcesToAverage; /**< nrofCSI-RS-ResourcesToAverage 是否存在。 */
    int64_t nrofCSI_RS_ResourcesToAverage; /**< ASN.1 nrofCSI-RS-ResourcesToAverage；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    int64_t quantityConfigIndex; /**< ASN.1 quantityConfigIndex；INTEGER (1..2)，位宽 1 bit。 */
    Q_OffsetRangeList offsetMO; /**< ASN.1 offsetMO；结构体。 */
    bool has_cellsToRemoveList; /**< cellsToRemoveList 是否存在。 */
    PCI_List cellsToRemoveList; /**< ASN.1 cellsToRemoveList；SEQUENCE OF PhysCellId，SIZE (1..32)；OPTIONAL。 */
    bool has_cellsToAddModList; /**< cellsToAddModList 是否存在。 */
    CellsToAddModList cellsToAddModList; /**< ASN.1 cellsToAddModList；SEQUENCE OF CellsToAddMod，SIZE (1..32)；OPTIONAL。 */
    bool has_excludedCellsToRemoveList; /**< excludedCellsToRemoveList 是否存在。 */
    PCI_RangeIndexList excludedCellsToRemoveList; /**< ASN.1 excludedCellsToRemoveList；SEQUENCE OF PCI_RangeIndex，SIZE (1..8)；OPTIONAL。 */
    bool has_excludedCellsToAddModList; /**< excludedCellsToAddModList 是否存在。 */
    PCI_RangeElement* excludedCellsToAddModList_items; /**< ASN.1 excludedCellsToAddModList；SEQUENCE OF PCI_RangeElement，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t excludedCellsToAddModList_count; /**< excludedCellsToAddModList 元素个数。 */
    bool has_allowedCellsToRemoveList; /**< allowedCellsToRemoveList 是否存在。 */
    PCI_RangeIndexList allowedCellsToRemoveList; /**< ASN.1 allowedCellsToRemoveList；SEQUENCE OF PCI_RangeIndex，SIZE (1..8)；OPTIONAL。 */
    bool has_allowedCellsToAddModList; /**< allowedCellsToAddModList 是否存在。 */
    PCI_RangeElement* allowedCellsToAddModList_items; /**< ASN.1 allowedCellsToAddModList；SEQUENCE OF PCI_RangeElement，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t allowedCellsToAddModList_count; /**< allowedCellsToAddModList 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasObjectNR_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasObjectNR_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MeasObjectNR_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MeasObjectNR_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MeasObjectNR_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CellsToAddMod
 * @note ASN.1：CellsToAddMod；源文件第 7808 行。
 * @note CellsToAddMod ::= SEQUENCE { physCellId, cellIndividualOffset }
 */
struct CellsToAddMod {
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit。 */
    Q_OffsetRangeList cellIndividualOffset; /**< ASN.1 cellIndividualOffset；结构体。 */
};


/**
 * @brief CellsToAddModExt_v1710
 * @note ASN.1：CellsToAddModExt-v1710；源文件第 7813 行。
 * @note CellsToAddModExt-v1710 ::= SEQUENCE { ntn-PolarizationDL-r17, ntn-PolarizationUL-r17 }
 */
struct CellsToAddModExt_v1710 {
    bool has_ntn_PolarizationDL_r17; /**< ntn-PolarizationDL-r17 是否存在。 */
    CellsToAddModExt_v1710_Ntn_PolarizationDL_r17 ntn_PolarizationDL_r17; /**< ASN.1 ntn-PolarizationDL-r17；枚举；OPTIONAL。 */
    bool has_ntn_PolarizationUL_r17; /**< ntn-PolarizationUL-r17 是否存在。 */
    CellsToAddModExt_v1710_Ntn_PolarizationUL_r17 ntn_PolarizationUL_r17; /**< ASN.1 ntn-PolarizationUL-r17；枚举；OPTIONAL。 */
};


/**
 * @brief NTN_NeighbourCellInfo_r18
 * @note ASN.1：NTN-NeighbourCellInfo-r18；源文件第 7868 行。
 * @note NTN-NeighbourCellInfo-r18 ::= SEQUENCE { epochTime-r18, ephemerisInfo-r18 }
 */
struct NTN_NeighbourCellInfo_r18 {
    EpochTime_r17 epochTime_r18; /**< ASN.1 epochTime-r18；结构体。 */
    EphemerisInfo_r17 ephemerisInfo_r18; /**< ASN.1 ephemerisInfo-r18；结构体。 */
};


/**
 * @brief CellsToAddModExt_v1800
 * @note ASN.1：CellsToAddModExt-v1800；源文件第 7818 行。
 * @note CellsToAddModExt-v1800 ::= SEQUENCE { ntn-NeighbourCellInfo-r18 }
 */
struct CellsToAddModExt_v1800 {
    bool has_ntn_NeighbourCellInfo_r18; /**< ntn-NeighbourCellInfo-r18 是否存在。 */
    NTN_NeighbourCellInfo_r18 ntn_NeighbourCellInfo_r18; /**< ASN.1 ntn-NeighbourCellInfo-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SSB_PositionQCL_CellsToAddMod_r16
 * @note ASN.1：SSB-PositionQCL-CellsToAddMod-r16；源文件第 7845 行。
 * @note SSB-PositionQCL-CellsToAddMod-r16 ::= SEQUENCE { physCellId-r16, ssb-PositionQCL-r16 }
 */
struct SSB_PositionQCL_CellsToAddMod_r16 {
    PhysCellId physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..1007)，位宽 10 bit。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_r16; /**< ASN.1 ssb-PositionQCL-r16；枚举。 */
};


/**
 * @brief SSB_PositionQCL_Cell_r17
 * @note ASN.1：SSB-PositionQCL-Cell-r17；源文件第 7852 行。
 * @note SSB-PositionQCL-Cell-r17 ::= SEQUENCE { physCellId-r17, ssb-PositionQCL-r17 }
 */
struct SSB_PositionQCL_Cell_r17 {
    PhysCellId physCellId_r17; /**< ASN.1 physCellId-r17；INTEGER (0..1007)，位宽 10 bit。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_r17; /**< ASN.1 ssb-PositionQCL-r17；枚举。 */
};


/**
 * @brief SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18
 * @note ASN.1：altitudeRange-r18；源文件第 7860 行。
 * @note SEQUENCE { altitudeMin-r18, altitudeMax-r18, altitudeHyst-r18 }
 */
struct SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18 {
    bool has_altitudeMin_r18; /**< altitudeMin-r18 是否存在。 */
    Altitude_r18 altitudeMin_r18; /**< ASN.1 altitudeMin-r18；INTEGER (-420..10000)，位宽 14 bit；OPTIONAL。 */
    bool has_altitudeMax_r18; /**< altitudeMax-r18 是否存在。 */
    Altitude_r18 altitudeMax_r18; /**< ASN.1 altitudeMax-r18；INTEGER (-420..10000)，位宽 14 bit；OPTIONAL。 */
    bool has_altitudeHyst_r18; /**< altitudeHyst-r18 是否存在。 */
    HysteresisAltitude_r18 altitudeHyst_r18; /**< ASN.1 altitudeHyst-r18；INTEGER (0..64)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SSB_ToMeasureAltitudeBased_r18
 * @note ASN.1：SSB-ToMeasureAltitudeBased-r18；源文件第 7859 行。
 * @note SSB-ToMeasureAltitudeBased-r18 ::= SEQUENCE { altitudeRange-r18, ssb-ToMeasure-r18 }
 */
struct SSB_ToMeasureAltitudeBased_r18 {
    SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18 altitudeRange_r18; /**< ASN.1 altitudeRange-r18；结构体。 */
    bool has_ssb_ToMeasure_r18; /**< ssb-ToMeasure-r18 是否存在。 */
    SSB_ToMeasure ssb_ToMeasure_r18; /**< ASN.1 ssb-ToMeasure-r18；结构体；OPTIONAL。 */
};


/**
 * @brief Tx_PoolMeasList_r16
 * @note ASN.1：Tx-PoolMeasList-r16；源文件第 7887 行。
 * @note Tx-PoolMeasList-r16 ::= SEQUENCE OF (size 1..8) OF SL-ResourcePoolID-r16
 */
struct Tx_PoolMeasList_r16 {
    SL_ResourcePoolID_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasObjectNR_SL_r16
 * @note ASN.1：MeasObjectNR-SL-r16；源文件第 7876 行。
 * @note MeasObjectNR-SL-r16 ::= SEQUENCE { tx-PoolMeasToRemoveList-r16, tx-PoolMeasToAddModList-r16 }
 */
struct MeasObjectNR_SL_r16 {
    bool has_tx_PoolMeasToRemoveList_r16; /**< tx-PoolMeasToRemoveList-r16 是否存在。 */
    Tx_PoolMeasList_r16 tx_PoolMeasToRemoveList_r16; /**< ASN.1 tx-PoolMeasToRemoveList-r16；SEQUENCE OF SL_ResourcePoolID_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_tx_PoolMeasToAddModList_r16; /**< tx-PoolMeasToAddModList-r16 是否存在。 */
    Tx_PoolMeasList_r16 tx_PoolMeasToAddModList_r16; /**< ASN.1 tx-PoolMeasToAddModList-r16；SEQUENCE OF SL_ResourcePoolID_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief MeasObjectNR_SL_r18
 * @note ASN.1：MeasObjectNR-SL-r18；源文件第 7881 行。
 * @note MeasObjectNR-SL-r18 ::= SEQUENCE { sl-Frequency-r18, tx-PoolMeasToRemoveList-r18, tx-PoolMeasToAddMod...
 */
struct MeasObjectNR_SL_r18 {
    int64_t sl_Frequency_r18; /**< ASN.1 sl-Frequency-r18；INTEGER (1..8)，位宽 3 bit。 */
    bool has_tx_PoolMeasToRemoveList_r18; /**< tx-PoolMeasToRemoveList-r18 是否存在。 */
    Tx_PoolMeasList_r16 tx_PoolMeasToRemoveList_r18; /**< ASN.1 tx-PoolMeasToRemoveList-r18；SEQUENCE OF SL_ResourcePoolID_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_tx_PoolMeasToAddModList_r18; /**< tx-PoolMeasToAddModList-r18 是否存在。 */
    Tx_PoolMeasList_r16 tx_PoolMeasToAddModList_r18; /**< ASN.1 tx-PoolMeasToAddModList-r18；SEQUENCE OF SL_ResourcePoolID_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief MeasObjectRxTxDiff_r17_Dl_Ref_r17
 * @note ASN.1：dl-Ref-r17；源文件第 7894 行。
 * @note CHOICE { prs-Ref-r17, csi-RS-Ref-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag {
    MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_prs_Ref_r17 = 0, /**< ASN.1 prs-Ref-r17 */
    MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_csi_RS_Ref_r17 = 1, /**< ASN.1 csi-RS-Ref-r17 */
} MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag;

struct MeasObjectRxTxDiff_r17_Dl_Ref_r17 {
    MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null prs_Ref_r17; /**< ASN.1 prs-Ref-r17 */
        Null csi_RS_Ref_r17; /**< ASN.1 csi-RS-Ref-r17 */
    } u;
};


/**
 * @brief MeasObjectRxTxDiff_r17
 * @note ASN.1：MeasObjectRxTxDiff-r17；源文件第 7893 行。
 * @note MeasObjectRxTxDiff-r17 ::= SEQUENCE { dl-Ref-r17 }
 */
struct MeasObjectRxTxDiff_r17 {
    bool has_dl_Ref_r17; /**< dl-Ref-r17 是否存在。 */
    MeasObjectRxTxDiff_r17_Dl_Ref_r17 dl_Ref_r17; /**< ASN.1 dl-Ref-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CellsToAddModListUTRA_FDD_r16
 * @note ASN.1：CellsToAddModListUTRA-FDD-r16；源文件第 7933 行。
 * @note CellsToAddModListUTRA-FDD-r16 ::= SEQUENCE OF (size 1..32) OF CellsToAddModUTRA-FDD-r16
 */
struct CellsToAddModListUTRA_FDD_r16 {
    CellsToAddModUTRA_FDD_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UTRA_FDD_CellIndexList_r16
 * @note ASN.1：UTRA-FDD-CellIndexList-r16；源文件第 7940 行。
 * @note UTRA-FDD-CellIndexList-r16 ::= SEQUENCE OF (size 1..32) OF UTRA-FDD-CellIndex-r16
 */
struct UTRA_FDD_CellIndexList_r16 {
    UTRA_FDD_CellIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasObjectUTRA_FDD_r16
 * @note ASN.1：MeasObjectUTRA-FDD-r16；源文件第 7925 行。
 * @note MeasObjectUTRA-FDD-r16 ::= SEQUENCE { carrierFreq-r16, utra-FDD-Q-OffsetRange-r16, cellsToRemoveList-r16...
 */
struct MeasObjectUTRA_FDD_r16 {
    ARFCN_ValueUTRA_FDD_r16 carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..16383)，位宽 14 bit。 */
    bool has_utra_FDD_Q_OffsetRange_r16; /**< utra-FDD-Q-OffsetRange-r16 是否存在。 */
    UTRA_FDD_Q_OffsetRange_r16 utra_FDD_Q_OffsetRange_r16; /**< ASN.1 utra-FDD-Q-OffsetRange-r16；枚举；OPTIONAL。 */
    bool has_cellsToRemoveList_r16; /**< cellsToRemoveList-r16 是否存在。 */
    UTRA_FDD_CellIndexList_r16 cellsToRemoveList_r16; /**< ASN.1 cellsToRemoveList-r16；SEQUENCE OF UTRA_FDD_CellIndex_r16，SIZE (1..32)；OPTIONAL。 */
    bool has_cellsToAddModList_r16; /**< cellsToAddModList-r16 是否存在。 */
    CellsToAddModListUTRA_FDD_r16 cellsToAddModList_r16; /**< ASN.1 cellsToAddModList-r16；SEQUENCE OF CellsToAddModUTRA_FDD_r16，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief SL_MeasObject_r16
 * @note ASN.1：SL-MeasObject-r16；源文件第 22648 行。
 * @note SL-MeasObject-r16 ::= SEQUENCE { frequencyInfoSL-r16 }
 */
struct SL_MeasObject_r16 {
    ARFCN_ValueNR frequencyInfoSL_r16; /**< ASN.1 frequencyInfoSL-r16；INTEGER (0..3279165)，位宽 22 bit。 */
};


/**
 * @brief MeasObjectToAddMod_MeasObject
 * @note ASN.1：measObject；源文件第 7909 行。
 * @note CHOICE { measObjectNR, measObjectEUTRA, measObjectUTRA-FDD-r16, measObjectNR-...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasObjectToAddMod_MeasObject_Tag {
    MeasObjectToAddMod_MeasObject_Tag_measObjectNR = 0, /**< ASN.1 measObjectNR */
    MeasObjectToAddMod_MeasObject_Tag_measObjectEUTRA = 1, /**< ASN.1 measObjectEUTRA（扩展备选） */
    MeasObjectToAddMod_MeasObject_Tag_measObjectUTRA_FDD_r16 = 2, /**< ASN.1 measObjectUTRA-FDD-r16（扩展备选） */
    MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r16 = 3, /**< ASN.1 measObjectNR-SL-r16（扩展备选） */
    MeasObjectToAddMod_MeasObject_Tag_measObjectCLI_r16 = 4, /**< ASN.1 measObjectCLI-r16（扩展备选） */
    MeasObjectToAddMod_MeasObject_Tag_measObjectRxTxDiff_r17 = 5, /**< ASN.1 measObjectRxTxDiff-r17（扩展备选） */
    MeasObjectToAddMod_MeasObject_Tag_measObjectRelay_r17 = 6, /**< ASN.1 measObjectRelay-r17（扩展备选） */
    MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r18 = 7, /**< ASN.1 measObjectNR-SL-r18（扩展备选） */
} MeasObjectToAddMod_MeasObject_Tag;

struct MeasObjectToAddMod_MeasObject {
    MeasObjectToAddMod_MeasObject_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MeasObjectNR measObjectNR; /**< ASN.1 measObjectNR */
        MeasObjectEUTRA measObjectEUTRA; /**< ASN.1 measObjectEUTRA */
        MeasObjectUTRA_FDD_r16 measObjectUTRA_FDD_r16; /**< ASN.1 measObjectUTRA-FDD-r16 */
        MeasObjectNR_SL_r16 measObjectNR_SL_r16; /**< ASN.1 measObjectNR-SL-r16 */
        MeasObjectCLI_r16 measObjectCLI_r16; /**< ASN.1 measObjectCLI-r16 */
        MeasObjectRxTxDiff_r17 measObjectRxTxDiff_r17; /**< ASN.1 measObjectRxTxDiff-r17 */
        SL_MeasObject_r16 measObjectRelay_r17; /**< ASN.1 measObjectRelay-r17 */
        MeasObjectNR_SL_r18 measObjectNR_SL_r18; /**< ASN.1 measObjectNR-SL-r18 */
    } u;
};


/**
 * @brief MeasObjectToAddMod
 * @note ASN.1：MeasObjectToAddMod；源文件第 7907 行。
 * @note MeasObjectToAddMod ::= SEQUENCE { measObjectId, measObject }
 */
struct MeasObjectToAddMod {
    MeasObjectId measObjectId; /**< ASN.1 measObjectId；INTEGER (1..64)，位宽 6 bit。 */
    MeasObjectToAddMod_MeasObject measObject; /**< ASN.1 measObject；结构体。 */
};


/**
 * @brief CellsToAddModUTRA_FDD_r16
 * @note ASN.1：CellsToAddModUTRA-FDD-r16；源文件第 7935 行。
 * @note CellsToAddModUTRA-FDD-r16 ::= SEQUENCE { cellIndexUTRA-FDD-r16, physCellId-r16 }
 */
struct CellsToAddModUTRA_FDD_r16 {
    UTRA_FDD_CellIndex_r16 cellIndexUTRA_FDD_r16; /**< ASN.1 cellIndexUTRA-FDD-r16；INTEGER (1..32)，位宽 5 bit。 */
    PhysCellIdUTRA_FDD_r16 physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..511)，位宽 9 bit。 */
};


/**
 * @brief MeasResultCellListSFTD_EUTRA
 * @note ASN.1：MeasResultCellListSFTD-EUTRA；源文件第 7959 行。
 * @note MeasResultCellListSFTD-EUTRA ::= SEQUENCE OF (size 1..3) OF MeasResultSFTD-EUTRA
 */
struct MeasResultCellListSFTD_EUTRA {
    MeasResultSFTD_EUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultNR_ExtGroup1
 * @note ASN.1：MeasResultNR_ExtGroup1；源文件第 8034 行。
 */
struct MeasResultNR_ExtGroup1 {
    bool has_cgi_Info; /**< cgi-Info 是否存在。 */
    CGI_InfoNR cgi_Info; /**< ASN.1 cgi-Info；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultNR_ExtGroup2_TriggeredEvent_r17
 * @note ASN.1：triggeredEvent-r17；源文件第 8040 行。
 * @note SEQUENCE { timeBetweenEvents-r17, firstTriggeredEvent-r17 }
 */
struct MeasResultNR_ExtGroup2_TriggeredEvent_r17 {
    bool has_timeBetweenEvents_r17; /**< timeBetweenEvents-r17 是否存在。 */
    TimeBetweenEvent_r17 timeBetweenEvents_r17; /**< ASN.1 timeBetweenEvents-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_firstTriggeredEvent_r17; /**< firstTriggeredEvent-r17 是否存在。 */
    MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17 firstTriggeredEvent_r17; /**< ASN.1 firstTriggeredEvent-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasResultNR_ExtGroup2
 * @note ASN.1：MeasResultNR_ExtGroup2；源文件第 8037 行。
 */
struct MeasResultNR_ExtGroup2 {
    bool has_choCandidate_r17; /**< choCandidate-r17 是否存在。 */
    MeasResultNR_ExtGroup2_ChoCandidate_r17 choCandidate_r17; /**< ASN.1 choCandidate-r17；枚举；OPTIONAL。 */
    bool has_choConfig_r17; /**< choConfig-r17 是否存在。 */
    CondTriggerConfig_r16* choConfig_r17_items; /**< ASN.1 choConfig-r17；SEQUENCE OF CondTriggerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t choConfig_r17_count; /**< choConfig-r17 元素个数。 */
    bool has_triggeredEvent_r17; /**< triggeredEvent-r17 是否存在。 */
    MeasResultNR_ExtGroup2_TriggeredEvent_r17 triggeredEvent_r17; /**< ASN.1 triggeredEvent-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultNR_MeasResult_CellResults
 * @note ASN.1：measResult/cellResults；源文件第 8024 行。
 * @note SEQUENCE { resultsSSB-Cell, resultsCSI-RS-Cell }
 */
struct MeasResultNR_MeasResult_CellResults {
    bool has_resultsSSB_Cell; /**< resultsSSB-Cell 是否存在。 */
    MeasQuantityResults resultsSSB_Cell; /**< ASN.1 resultsSSB-Cell；结构体；OPTIONAL。 */
    bool has_resultsCSI_RS_Cell; /**< resultsCSI-RS-Cell 是否存在。 */
    MeasQuantityResults resultsCSI_RS_Cell; /**< ASN.1 resultsCSI-RS-Cell；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultNR_MeasResult_RsIndexResults
 * @note ASN.1：measResult/rsIndexResults；源文件第 8028 行。
 * @note SEQUENCE { resultsSSB-Indexes, resultsCSI-RS-Indexes }
 */
struct MeasResultNR_MeasResult_RsIndexResults {
    bool has_resultsSSB_Indexes; /**< resultsSSB-Indexes 是否存在。 */
    ResultsPerSSB_IndexList resultsSSB_Indexes; /**< ASN.1 resultsSSB-Indexes；SEQUENCE OF ResultsPerSSB_Index，SIZE (1..64)；OPTIONAL。 */
    bool has_resultsCSI_RS_Indexes; /**< resultsCSI-RS-Indexes 是否存在。 */
    ResultsPerCSI_RS_IndexList resultsCSI_RS_Indexes; /**< ASN.1 resultsCSI-RS-Indexes；SEQUENCE OF ResultsPerCSI_RS_Index，SIZE (1..64)；OPTIONAL。 */
};


/**
 * @brief MeasResultNR_MeasResult
 * @note ASN.1：measResult；源文件第 8023 行。
 * @note SEQUENCE { cellResults, rsIndexResults }
 */
struct MeasResultNR_MeasResult {
    MeasResultNR_MeasResult_CellResults cellResults; /**< ASN.1 cellResults；结构体。 */
    bool has_rsIndexResults; /**< rsIndexResults 是否存在。 */
    MeasResultNR_MeasResult_RsIndexResults rsIndexResults; /**< ASN.1 rsIndexResults；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultNR
 * @note ASN.1：MeasResultNR；源文件第 8021 行。
 * @note MeasResultNR ::= SEQUENCE { physCellId, measResult, cgi-Info, choCandidate-r17, choConfig-r17,...
 */
struct MeasResultNR {
    bool has_physCellId; /**< physCellId 是否存在。 */
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit；OPTIONAL。 */
    MeasResultNR_MeasResult measResult; /**< ASN.1 measResult；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasResultNR_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasResultNR_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasResultServMO
 * @note ASN.1：MeasResultServMO；源文件第 8012 行。
 * @note MeasResultServMO ::= SEQUENCE { servCellId, measResultServingCell, measResultBestNeighCell }
 */
struct MeasResultServMO {
    ServCellIndex servCellId; /**< ASN.1 servCellId；INTEGER (0..31)，位宽 5 bit。 */
    MeasResultNR measResultServingCell; /**< ASN.1 measResultServingCell；结构体。 */
    bool has_measResultBestNeighCell; /**< measResultBestNeighCell 是否存在。 */
    MeasResultNR measResultBestNeighCell; /**< ASN.1 measResultBestNeighCell；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultEUTRA
 * @note ASN.1：MeasResultEUTRA；源文件第 8049 行。
 * @note MeasResultEUTRA ::= SEQUENCE { eutra-PhysCellId, measResult, cgi-Info }
 */
struct MeasResultEUTRA {
    PhysCellId eutra_PhysCellId; /**< ASN.1 eutra-PhysCellId；INTEGER (0..1007)，位宽 10 bit。 */
    MeasQuantityResultsEUTRA measResult; /**< ASN.1 measResult；结构体。 */
    bool has_cgi_Info; /**< cgi-Info 是否存在。 */
    CGI_InfoEUTRA cgi_Info; /**< ASN.1 cgi-Info；结构体；OPTIONAL。 */
};


/**
 * @brief ResultsPerSSB_Index
 * @note ASN.1：ResultsPerSSB-Index；源文件第 8073 行。
 * @note ResultsPerSSB-Index ::= SEQUENCE { ssb-Index, ssb-Results }
 */
struct ResultsPerSSB_Index {
    SSB_Index ssb_Index; /**< ASN.1 ssb-Index；INTEGER (0..63)，位宽 6 bit。 */
    bool has_ssb_Results; /**< ssb-Results 是否存在。 */
    MeasQuantityResults ssb_Results; /**< ASN.1 ssb-Results；结构体；OPTIONAL。 */
};


/**
 * @brief ResultsPerCSI_RS_Index
 * @note ASN.1：ResultsPerCSI-RS-Index；源文件第 8080 行。
 * @note ResultsPerCSI-RS-Index ::= SEQUENCE { csi-RS-Index, csi-RS-Results }
 */
struct ResultsPerCSI_RS_Index {
    CSI_RS_Index csi_RS_Index; /**< ASN.1 csi-RS-Index；INTEGER (0..95)，位宽 7 bit。 */
    bool has_csi_RS_Results; /**< csi-RS-Results 是否存在。 */
    MeasQuantityResults csi_RS_Results; /**< ASN.1 csi-RS-Results；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultUTRA_FDD_r16_MeasResult_r16
 * @note ASN.1：measResult-r16；源文件第 8092 行。
 * @note SEQUENCE { utra-FDD-RSCP-r16, utra-FDD-EcN0-r16 }
 */
struct MeasResultUTRA_FDD_r16_MeasResult_r16 {
    bool has_utra_FDD_RSCP_r16; /**< utra-FDD-RSCP-r16 是否存在。 */
    int64_t utra_FDD_RSCP_r16; /**< ASN.1 utra-FDD-RSCP-r16；INTEGER (-5..91)，位宽 7 bit；OPTIONAL。 */
    bool has_utra_FDD_EcN0_r16; /**< utra-FDD-EcN0-r16 是否存在。 */
    int64_t utra_FDD_EcN0_r16; /**< ASN.1 utra-FDD-EcN0-r16；INTEGER (0..49)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultUTRA_FDD_r16
 * @note ASN.1：MeasResultUTRA-FDD-r16；源文件第 8090 行。
 * @note MeasResultUTRA-FDD-r16 ::= SEQUENCE { physCellId-r16, measResult-r16 }
 */
struct MeasResultUTRA_FDD_r16 {
    PhysCellIdUTRA_FDD_r16 physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..511)，位宽 9 bit。 */
    MeasResultUTRA_FDD_r16_MeasResult_r16 measResult_r16; /**< ASN.1 measResult-r16；结构体。 */
};


/**
 * @brief MeasResultSRS_RSRP_r16
 * @note ASN.1：MeasResultSRS-RSRP-r16；源文件第 8110 行。
 * @note MeasResultSRS-RSRP-r16 ::= SEQUENCE { srs-ResourceId-r16, srs-RSRP-Result-r16 }
 */
struct MeasResultSRS_RSRP_r16 {
    SRS_ResourceId srs_ResourceId_r16; /**< ASN.1 srs-ResourceId-r16；INTEGER (0..63)，位宽 6 bit。 */
    SRS_RSRP_Range_r16 srs_RSRP_Result_r16; /**< ASN.1 srs-RSRP-Result-r16；INTEGER (0..98)，位宽 7 bit。 */
};


/**
 * @brief MeasResultCLI_RSSI_r16
 * @note ASN.1：MeasResultCLI-RSSI-r16；源文件第 8117 行。
 * @note MeasResultCLI-RSSI-r16 ::= SEQUENCE { rssi-ResourceId-r16, cli-RSSI-Result-r16 }
 */
struct MeasResultCLI_RSSI_r16 {
    RSSI_ResourceId_r16 rssi_ResourceId_r16; /**< ASN.1 rssi-ResourceId-r16；INTEGER (0..63)，位宽 6 bit。 */
    CLI_RSSI_Range_r16 cli_RSSI_Result_r16; /**< ASN.1 cli-RSSI-Result-r16；INTEGER (0..76)，位宽 7 bit。 */
};


/**
 * @brief UL_PDCP_DelayValueResult_r16
 * @note ASN.1：UL-PDCP-DelayValueResult-r16；源文件第 8124 行。
 * @note UL-PDCP-DelayValueResult-r16 ::= SEQUENCE { drb-Id-r16, averageDelay-r16 }
 */
struct UL_PDCP_DelayValueResult_r16 {
    DRB_Identity drb_Id_r16; /**< ASN.1 drb-Id-r16；INTEGER (1..32)，位宽 5 bit。 */
    int64_t averageDelay_r16; /**< ASN.1 averageDelay-r16；INTEGER (0..10000)，位宽 14 bit。 */
};


/**
 * @brief UL_PDCP_ExcessDelayResult_r17
 * @note ASN.1：UL-PDCP-ExcessDelayResult-r17；源文件第 8132 行。
 * @note UL-PDCP-ExcessDelayResult-r17 ::= SEQUENCE { drb-Id-r17, excessDelay-r17 }
 */
struct UL_PDCP_ExcessDelayResult_r17 {
    DRB_Identity drb_Id_r17; /**< ASN.1 drb-Id-r17；INTEGER (1..32)，位宽 5 bit。 */
    int64_t excessDelay_r17; /**< ASN.1 excessDelay-r17；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief MeasResult2EUTRA
 * @note ASN.1：MeasResult2EUTRA；源文件第 8143 行。
 * @note MeasResult2EUTRA ::= SEQUENCE { carrierFreq, measResultServingCell, measResultBestNeighCell }
 */
struct MeasResult2EUTRA {
    ARFCN_ValueEUTRA carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..262143)，位宽 18 bit。 */
    bool has_measResultServingCell; /**< measResultServingCell 是否存在。 */
    MeasResultEUTRA measResultServingCell; /**< ASN.1 measResultServingCell；结构体；OPTIONAL。 */
    bool has_measResultBestNeighCell; /**< measResultBestNeighCell 是否存在。 */
    MeasResultEUTRA measResultBestNeighCell; /**< ASN.1 measResultBestNeighCell；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResult2NR
 * @note ASN.1：MeasResult2NR；源文件第 8153 行。
 * @note MeasResult2NR ::= SEQUENCE { ssbFrequency, refFreqCSI-RS, measResultServingCell, measResultNeig...
 */
struct MeasResult2NR {
    bool has_ssbFrequency; /**< ssbFrequency 是否存在。 */
    ARFCN_ValueNR ssbFrequency; /**< ASN.1 ssbFrequency；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_refFreqCSI_RS; /**< refFreqCSI-RS 是否存在。 */
    ARFCN_ValueNR refFreqCSI_RS; /**< ASN.1 refFreqCSI-RS；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_measResultServingCell; /**< measResultServingCell 是否存在。 */
    MeasResultNR measResultServingCell; /**< ASN.1 measResultServingCell；结构体；OPTIONAL。 */
    bool has_measResultNeighCellListNR; /**< measResultNeighCellListNR 是否存在。 */
    MeasResultListNR measResultNeighCellListNR; /**< ASN.1 measResultNeighCellListNR；SEQUENCE OF MeasResultNR，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief MeasResultsPerCarrierIdleEUTRA_r16
 * @note ASN.1：MeasResultsPerCarrierIdleEUTRA-r16；源文件第 8169 行。
 * @note MeasResultsPerCarrierIdleEUTRA-r16 ::= SEQUENCE { carrierFreqEUTRA-r16, measResultsPerCellListIdleEUTRA-r16 }
 */
struct MeasResultsPerCarrierIdleEUTRA_r16 {
    ARFCN_ValueEUTRA carrierFreqEUTRA_r16; /**< ASN.1 carrierFreqEUTRA-r16；INTEGER (0..262143)，位宽 18 bit。 */
    MeasResultsPerCellIdleEUTRA_r16* measResultsPerCellListIdleEUTRA_r16_items; /**< ASN.1 measResultsPerCellListIdleEUTRA-r16；SEQUENCE OF MeasResultsPerCellIdleEUTRA_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t measResultsPerCellListIdleEUTRA_r16_count; /**< measResultsPerCellListIdleEUTRA-r16 元素个数。 */
};


/**
 * @brief MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16
 * @note ASN.1：measIdleResultEUTRA-r16；源文件第 8177 行。
 * @note SEQUENCE { rsrp-ResultEUTRA-r16, rsrq-ResultEUTRA-r16 }
 */
struct MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16 {
    bool has_rsrp_ResultEUTRA_r16; /**< rsrp-ResultEUTRA-r16 是否存在。 */
    RSRP_RangeEUTRA rsrp_ResultEUTRA_r16; /**< ASN.1 rsrp-ResultEUTRA-r16；INTEGER (0..97)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrq_ResultEUTRA_r16; /**< rsrq-ResultEUTRA-r16 是否存在。 */
    RSRQ_RangeEUTRA_r16 rsrq_ResultEUTRA_r16; /**< ASN.1 rsrq-ResultEUTRA-r16；INTEGER (-30..46)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultsPerCellIdleEUTRA_r16
 * @note ASN.1：MeasResultsPerCellIdleEUTRA-r16；源文件第 8175 行。
 * @note MeasResultsPerCellIdleEUTRA-r16 ::= SEQUENCE { eutra-PhysCellId-r16, measIdleResultEUTRA-r16 }
 */
struct MeasResultsPerCellIdleEUTRA_r16 {
    EUTRA_PhysCellId eutra_PhysCellId_r16; /**< ASN.1 eutra-PhysCellId-r16；INTEGER (0..503)，位宽 9 bit。 */
    MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16 measIdleResultEUTRA_r16; /**< ASN.1 measIdleResultEUTRA-r16；结构体。 */
};


/**
 * @brief MeasResultsPerCarrierIdleNR_r16
 * @note ASN.1：MeasResultsPerCarrierIdleNR-r16；源文件第 8197 行。
 * @note MeasResultsPerCarrierIdleNR-r16 ::= SEQUENCE { carrierFreq-r16, measResultsPerCellListIdleNR-r16 }
 */
struct MeasResultsPerCarrierIdleNR_r16 {
    ARFCN_ValueNR carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    MeasResultsPerCellIdleNR_r16* measResultsPerCellListIdleNR_r16_items; /**< ASN.1 measResultsPerCellListIdleNR-r16；SEQUENCE OF MeasResultsPerCellIdleNR_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t measResultsPerCellListIdleNR_r16_count; /**< measResultsPerCellListIdleNR-r16 元素个数。 */
};


/**
 * @brief MeasResultsPerCellIdleNR_r16_ExtGroup1
 * @note ASN.1：MeasResultsPerCellIdleNR_r16_ExtGroup1；源文件第 8211 行。
 */
struct MeasResultsPerCellIdleNR_r16_ExtGroup1 {
    bool has_validityStatus_r18; /**< validityStatus-r18 是否存在。 */
    MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18 validityStatus_r18; /**< ASN.1 validityStatus-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16
 * @note ASN.1：measIdleResultNR-r16；源文件第 8205 行。
 * @note SEQUENCE { rsrp-Result-r16, rsrq-Result-r16, resultsSSB-Indexes-r16 }
 */
struct MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16 {
    bool has_rsrp_Result_r16; /**< rsrp-Result-r16 是否存在。 */
    RSRP_Range rsrp_Result_r16; /**< ASN.1 rsrp-Result-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrq_Result_r16; /**< rsrq-Result-r16 是否存在。 */
    RSRQ_Range rsrq_Result_r16; /**< ASN.1 rsrq-Result-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_resultsSSB_Indexes_r16; /**< resultsSSB-Indexes-r16 是否存在。 */
    ResultsPerSSB_IndexList_r16 resultsSSB_Indexes_r16; /**< ASN.1 resultsSSB-Indexes-r16；SEQUENCE OF ResultsPerSSB_IndexIdle_r16，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief MeasResultsPerCellIdleNR_r16
 * @note ASN.1：MeasResultsPerCellIdleNR-r16；源文件第 8203 行。
 * @note MeasResultsPerCellIdleNR-r16 ::= SEQUENCE { physCellId-r16, measIdleResultNR-r16, validityStatus-r18 }
 */
struct MeasResultsPerCellIdleNR_r16 {
    PhysCellId physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..1007)，位宽 10 bit。 */
    MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16 measIdleResultNR_r16; /**< ASN.1 measIdleResultNR-r16；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasResultsPerCellIdleNR_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16
 * @note ASN.1：ssb-Results-r16；源文件第 8221 行。
 * @note SEQUENCE { ssb-RSRP-Result-r16, ssb-RSRQ-Result-r16 }
 */
struct ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16 {
    bool has_ssb_RSRP_Result_r16; /**< ssb-RSRP-Result-r16 是否存在。 */
    RSRP_Range ssb_RSRP_Result_r16; /**< ASN.1 ssb-RSRP-Result-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_ssb_RSRQ_Result_r16; /**< ssb-RSRQ-Result-r16 是否存在。 */
    RSRQ_Range ssb_RSRQ_Result_r16; /**< ASN.1 ssb-RSRQ-Result-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief ResultsPerSSB_IndexIdle_r16
 * @note ASN.1：ResultsPerSSB-IndexIdle-r16；源文件第 8219 行。
 * @note ResultsPerSSB-IndexIdle-r16 ::= SEQUENCE { ssb-Index-r16, ssb-Results-r16 }
 */
struct ResultsPerSSB_IndexIdle_r16 {
    SSB_Index ssb_Index_r16; /**< ASN.1 ssb-Index-r16；INTEGER (0..63)，位宽 6 bit。 */
    bool has_ssb_Results_r16; /**< ssb-Results-r16 是否存在。 */
    ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16 ssb_Results_r16; /**< ASN.1 ssb-Results-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultSCG_Failure_ExtGroup1
 * @note ASN.1：MeasResultSCG_Failure_ExtGroup1；源文件第 8241 行。
 */
struct MeasResultSCG_Failure_ExtGroup1 {
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultSCG_Failure
 * @note ASN.1：MeasResultSCG-Failure；源文件第 8238 行。
 * @note MeasResultSCG-Failure ::= SEQUENCE { measResultPerMOList, locationInfo-r16 }
 */
struct MeasResultSCG_Failure {
    MeasResultList2NR measResultPerMOList; /**< ASN.1 measResultPerMOList；SEQUENCE OF MeasResult2NR，SIZE (1..8)。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasResultSCG_Failure_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasResultCBR_NR_r16
 * @note ASN.1：MeasResultCBR-NR-r16；源文件第 8264 行。
 * @note MeasResultCBR-NR-r16 ::= SEQUENCE { sl-poolReportIdentity-r16, sl-CBR-ResultsNR-r16 }
 */
struct MeasResultCBR_NR_r16 {
    SL_ResourcePoolID_r16 sl_poolReportIdentity_r16; /**< ASN.1 sl-poolReportIdentity-r16；INTEGER (1..16)，位宽 4 bit。 */
    SL_CBR_r16 sl_CBR_ResultsNR_r16; /**< ASN.1 sl-CBR-ResultsNR-r16；INTEGER (0..100)，位宽 7 bit。 */
};


/**
 * @brief MeasTriggerQuantityEUTRA
 * @note ASN.1：MeasTriggerQuantityEUTRA；源文件第 8278 行。
 * @note MeasTriggerQuantityEUTRA ::= CHOICE { rsrp, rsrq, sinr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasTriggerQuantityEUTRA_Tag {
    MeasTriggerQuantityEUTRA_Tag_rsrp = 0, /**< ASN.1 rsrp */
    MeasTriggerQuantityEUTRA_Tag_rsrq = 1, /**< ASN.1 rsrq */
    MeasTriggerQuantityEUTRA_Tag_sinr = 2, /**< ASN.1 sinr */
} MeasTriggerQuantityEUTRA_Tag;

struct MeasTriggerQuantityEUTRA {
    MeasTriggerQuantityEUTRA_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RSRP_RangeEUTRA rsrp; /**< ASN.1 rsrp */
        RSRQ_RangeEUTRA rsrq; /**< ASN.1 rsrq */
        SINR_RangeEUTRA sinr; /**< ASN.1 sinr */
    } u;
};


/**
 * @brief NR_NS_PmaxList
 * @note ASN.1：NR-NS-PmaxList；源文件第 8950 行。
 * @note NR-NS-PmaxList ::= SEQUENCE OF (size 1..8) OF NR-NS-PmaxValue
 */
struct NR_NS_PmaxList {
    NR_NS_PmaxValue* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NR_MultiBandInfo
 * @note ASN.1：NR-MultiBandInfo；源文件第 8382 行。
 * @note NR-MultiBandInfo ::= SEQUENCE { freqBandIndicatorNR, nr-NS-PmaxList }
 */
struct NR_MultiBandInfo {
    bool has_freqBandIndicatorNR; /**< freqBandIndicatorNR 是否存在。 */
    FreqBandIndicatorNR freqBandIndicatorNR; /**< ASN.1 freqBandIndicatorNR；INTEGER (1..1024)，位宽 10 bit；OPTIONAL。 */
    bool has_nr_NS_PmaxList; /**< nr-NS-PmaxList 是否存在。 */
    NR_NS_PmaxList nr_NS_PmaxList; /**< ASN.1 nr-NS-PmaxList；SEQUENCE OF NR_NS_PmaxValue，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief NR_NS_PmaxList_v1760
 * @note ASN.1：NR-NS-PmaxList-v1760；源文件第 8957 行。
 * @note NR-NS-PmaxList-v1760 ::= SEQUENCE OF (size 1..8) OF NR-NS-PmaxValue-v1760
 */
struct NR_NS_PmaxList_v1760 {
    NR_NS_PmaxValue_v1760* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NR_MultiBandInfo_v1760
 * @note ASN.1：NR-MultiBandInfo-v1760；源文件第 8389 行。
 * @note NR-MultiBandInfo-v1760 ::= SEQUENCE { nr-NS-PmaxList-v1760 }
 */
struct NR_MultiBandInfo_v1760 {
    bool has_nr_NS_PmaxList_v1760; /**< nr-NS-PmaxList-v1760 是否存在。 */
    NR_NS_PmaxList_v1760 nr_NS_PmaxList_v1760; /**< ASN.1 nr-NS-PmaxList-v1760；SEQUENCE OF NR_NS_PmaxValue_v1760，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief NR_NS_PmaxListAerial_r18
 * @note ASN.1：NR-NS-PmaxListAerial-r18；源文件第 8963 行。
 * @note NR-NS-PmaxListAerial-r18 ::= SEQUENCE OF (size 1..8) OF NR-NS-PmaxValueAerial-r18
 */
struct NR_NS_PmaxListAerial_r18 {
    NR_NS_PmaxValueAerial_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NR_MultiBandInfoAerial_r18
 * @note ASN.1：NR-MultiBandInfoAerial-r18；源文件第 8395 行。
 * @note NR-MultiBandInfoAerial-r18 ::= SEQUENCE { freqBandIndicatorNR-Aerial-r18, nr-NS-PmaxListAerial-r18 }
 */
struct NR_MultiBandInfoAerial_r18 {
    bool has_freqBandIndicatorNR_Aerial_r18; /**< freqBandIndicatorNR-Aerial-r18 是否存在。 */
    FreqBandIndicatorNR freqBandIndicatorNR_Aerial_r18; /**< ASN.1 freqBandIndicatorNR-Aerial-r18；INTEGER (1..1024)，位宽 10 bit；OPTIONAL。 */
    bool has_nr_NS_PmaxListAerial_r18; /**< nr-NS-PmaxListAerial-r18 是否存在。 */
    NR_NS_PmaxListAerial_r18 nr_NS_PmaxListAerial_r18; /**< ASN.1 nr-NS-PmaxListAerial-r18；SEQUENCE OF NR_NS_PmaxValueAerial_r18，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief MUSIM_Gap_r17
 * @note ASN.1：MUSIM-Gap-r17；源文件第 8414 行。
 * @note MUSIM-Gap-r17 ::= SEQUENCE { musim-GapId-r17, musim-GapInfo-r17 }
 */
struct MUSIM_Gap_r17 {
    MUSIM_GapId_r17 musim_GapId_r17; /**< ASN.1 musim-GapId-r17；INTEGER (0..2)，位宽 2 bit。 */
    MUSIM_GapInfo_r17 musim_GapInfo_r17; /**< ASN.1 musim-GapInfo-r17；结构体。 */
};


/**
 * @brief SL_RemoteUE_RB_Identity_r17
 * @note ASN.1：SL-RemoteUE-RB-Identity-r17；源文件第 23329 行。
 * @note SL-RemoteUE-RB-Identity-r17 ::= CHOICE { srb-Identity-r17, drb-Identity-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_RemoteUE_RB_Identity_r17_Tag {
    SL_RemoteUE_RB_Identity_r17_Tag_srb_Identity_r17 = 0, /**< ASN.1 srb-Identity-r17 */
    SL_RemoteUE_RB_Identity_r17_Tag_drb_Identity_r17 = 1, /**< ASN.1 drb-Identity-r17 */
} SL_RemoteUE_RB_Identity_r17_Tag;

struct SL_RemoteUE_RB_Identity_r17 {
    SL_RemoteUE_RB_Identity_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t srb_Identity_r17; /**< ASN.1 srb-Identity-r17 */
        DRB_Identity drb_Identity_r17; /**< ASN.1 drb-Identity-r17 */
    } u;
};


/**
 * @brief N3C_MappingConfig_r18
 * @note ASN.1：N3C-MappingConfig-r18；源文件第 8458 行。
 * @note N3C-MappingConfig-r18 ::= SEQUENCE { n3c-RemoteUE-RB-Identity-r18, n3c-RLC-ChannelUu-r18 }
 */
struct N3C_MappingConfig_r18 {
    SL_RemoteUE_RB_Identity_r17 n3c_RemoteUE_RB_Identity_r18; /**< ASN.1 n3c-RemoteUE-RB-Identity-r18；结构体。 */
    Uu_RelayRLC_ChannelID_r17 n3c_RLC_ChannelUu_r18; /**< ASN.1 n3c-RLC-ChannelUu-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief NCR_AperiodicFwdTimeResource_r18
 * @note ASN.1：NCR-AperiodicFwdTimeResource-r18；源文件第 8497 行。
 * @note NCR-AperiodicFwdTimeResource-r18 ::= SEQUENCE { aperiodicFwdTimeRsrcId-r18, slotOffsetAperiodic-r18, symbolOffset-...
 */
struct NCR_AperiodicFwdTimeResource_r18 {
    NCR_AperiodicFwdTimeResourceId_r18 aperiodicFwdTimeRsrcId_r18; /**< ASN.1 aperiodicFwdTimeRsrcId-r18；INTEGER (0..111)，位宽 7 bit。 */
    int64_t slotOffsetAperiodic_r18; /**< ASN.1 slotOffsetAperiodic-r18；INTEGER (0..14)，位宽 4 bit。 */
    int64_t symbolOffset_r18; /**< ASN.1 symbolOffset-r18；INTEGER (0..13)，位宽 4 bit。 */
    int64_t durationInSymbols_r18; /**< ASN.1 durationInSymbols-r18；INTEGER (1..28)，位宽 5 bit。 */
};


/**
 * @brief NCR_SlotPeriodicityAndSlotOffset_r18
 * @note ASN.1：NCR-SlotPeriodicityAndSlotOffset-r18；源文件第 8531 行。
 * @note NCR-SlotPeriodicityAndSlotOffset-r18 ::= CHOICE { sl1, sl2, sl4, sl5, sl8, sl10, sl16, sl20, sl32, sl40, sl64, sl80, s...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NCR_SlotPeriodicityAndSlotOffset_r18_Tag {
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1 = 0, /**< ASN.1 sl1 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2 = 1, /**< ASN.1 sl2 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl4 = 2, /**< ASN.1 sl4 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5 = 3, /**< ASN.1 sl5 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl8 = 4, /**< ASN.1 sl8 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10 = 5, /**< ASN.1 sl10 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl16 = 6, /**< ASN.1 sl16 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl20 = 7, /**< ASN.1 sl20 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl32 = 8, /**< ASN.1 sl32 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl40 = 9, /**< ASN.1 sl40 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl64 = 10, /**< ASN.1 sl64 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl80 = 11, /**< ASN.1 sl80 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl128 = 12, /**< ASN.1 sl128 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl160 = 13, /**< ASN.1 sl160 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl256 = 14, /**< ASN.1 sl256 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl320 = 15, /**< ASN.1 sl320 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl512 = 16, /**< ASN.1 sl512 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl640 = 17, /**< ASN.1 sl640 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1024 = 18, /**< ASN.1 sl1024 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1280 = 19, /**< ASN.1 sl1280 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2560 = 20, /**< ASN.1 sl2560 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5120 = 21, /**< ASN.1 sl5120 */
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10240 = 22, /**< ASN.1 sl10240 */
} NCR_SlotPeriodicityAndSlotOffset_r18_Tag;

struct NCR_SlotPeriodicityAndSlotOffset_r18 {
    NCR_SlotPeriodicityAndSlotOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null sl1; /**< ASN.1 sl1 */
        int64_t sl2; /**< ASN.1 sl2 */
        int64_t sl4; /**< ASN.1 sl4 */
        int64_t sl5; /**< ASN.1 sl5 */
        int64_t sl8; /**< ASN.1 sl8 */
        int64_t sl10; /**< ASN.1 sl10 */
        int64_t sl16; /**< ASN.1 sl16 */
        int64_t sl20; /**< ASN.1 sl20 */
        int64_t sl32; /**< ASN.1 sl32 */
        int64_t sl40; /**< ASN.1 sl40 */
        int64_t sl64; /**< ASN.1 sl64 */
        int64_t sl80; /**< ASN.1 sl80 */
        int64_t sl128; /**< ASN.1 sl128 */
        int64_t sl160; /**< ASN.1 sl160 */
        int64_t sl256; /**< ASN.1 sl256 */
        int64_t sl320; /**< ASN.1 sl320 */
        int64_t sl512; /**< ASN.1 sl512 */
        int64_t sl640; /**< ASN.1 sl640 */
        int64_t sl1024; /**< ASN.1 sl1024 */
        int64_t sl1280; /**< ASN.1 sl1280 */
        int64_t sl2560; /**< ASN.1 sl2560 */
        int64_t sl5120; /**< ASN.1 sl5120 */
        int64_t sl10240; /**< ASN.1 sl10240 */
    } u;
};


/**
 * @brief NCR_MsPeriodicityAndSlotOffset_r18
 * @note ASN.1：NCR-MsPeriodicityAndSlotOffset-r18；源文件第 8558 行。
 * @note NCR-MsPeriodicityAndSlotOffset-r18 ::= CHOICE { ms1, ms2, ms4, ms5, ms8, ms10, ms16, ms20, ms32, ms40, ms64, ms80, m...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NCR_MsPeriodicityAndSlotOffset_r18_Tag {
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1 = 0, /**< ASN.1 ms1 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2 = 1, /**< ASN.1 ms2 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms4 = 2, /**< ASN.1 ms4 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5 = 3, /**< ASN.1 ms5 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms8 = 4, /**< ASN.1 ms8 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10 = 5, /**< ASN.1 ms10 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms16 = 6, /**< ASN.1 ms16 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms20 = 7, /**< ASN.1 ms20 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms32 = 8, /**< ASN.1 ms32 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms40 = 9, /**< ASN.1 ms40 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms64 = 10, /**< ASN.1 ms64 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms80 = 11, /**< ASN.1 ms80 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms128 = 12, /**< ASN.1 ms128 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms160 = 13, /**< ASN.1 ms160 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms256 = 14, /**< ASN.1 ms256 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms320 = 15, /**< ASN.1 ms320 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms512 = 16, /**< ASN.1 ms512 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms640 = 17, /**< ASN.1 ms640 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1024 = 18, /**< ASN.1 ms1024 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1280 = 19, /**< ASN.1 ms1280 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2560 = 20, /**< ASN.1 ms2560 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5120 = 21, /**< ASN.1 ms5120 */
    NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10240 = 22, /**< ASN.1 ms10240 */
} NCR_MsPeriodicityAndSlotOffset_r18_Tag;

struct NCR_MsPeriodicityAndSlotOffset_r18 {
    NCR_MsPeriodicityAndSlotOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms1; /**< ASN.1 ms1 */
        int64_t ms2; /**< ASN.1 ms2 */
        int64_t ms4; /**< ASN.1 ms4 */
        int64_t ms5; /**< ASN.1 ms5 */
        int64_t ms8; /**< ASN.1 ms8 */
        int64_t ms10; /**< ASN.1 ms10 */
        int64_t ms16; /**< ASN.1 ms16 */
        int64_t ms20; /**< ASN.1 ms20 */
        int64_t ms32; /**< ASN.1 ms32 */
        int64_t ms40; /**< ASN.1 ms40 */
        int64_t ms64; /**< ASN.1 ms64 */
        int64_t ms80; /**< ASN.1 ms80 */
        int64_t ms128; /**< ASN.1 ms128 */
        int64_t ms160; /**< ASN.1 ms160 */
        int64_t ms256; /**< ASN.1 ms256 */
        int64_t ms320; /**< ASN.1 ms320 */
        int64_t ms512; /**< ASN.1 ms512 */
        int64_t ms640; /**< ASN.1 ms640 */
        int64_t ms1024; /**< ASN.1 ms1024 */
        int64_t ms1280; /**< ASN.1 ms1280 */
        int64_t ms2560; /**< ASN.1 ms2560 */
        int64_t ms5120; /**< ASN.1 ms5120 */
        int64_t ms10240; /**< ASN.1 ms10240 */
    } u;
};


/**
 * @brief NCR_PeriodicityAndOffset_r18
 * @note ASN.1：NCR-PeriodicityAndOffset-r18；源文件第 8526 行。
 * @note NCR-PeriodicityAndOffset-r18 ::= CHOICE { slot, ms }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NCR_PeriodicityAndOffset_r18_Tag {
    NCR_PeriodicityAndOffset_r18_Tag_slot = 0, /**< ASN.1 slot */
    NCR_PeriodicityAndOffset_r18_Tag_ms = 1, /**< ASN.1 ms */
} NCR_PeriodicityAndOffset_r18_Tag;

struct NCR_PeriodicityAndOffset_r18 {
    NCR_PeriodicityAndOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NCR_SlotPeriodicityAndSlotOffset_r18 slot; /**< ASN.1 slot */
        NCR_MsPeriodicityAndSlotOffset_r18 ms; /**< ASN.1 ms */
    } u;
};


/**
 * @brief NCR_PeriodicFwdResourceSet_r18
 * @note ASN.1：NCR-PeriodicFwdResourceSet-r18；源文件第 8588 行。
 * @note NCR-PeriodicFwdResourceSet-r18 ::= SEQUENCE { periodicFwdRsrcSetId-r18, periodicFwdRsrcToAddModList-r18, periodi...
 */
struct NCR_PeriodicFwdResourceSet_r18 {
    NCR_PeriodicFwdResourceSetId_r18 periodicFwdRsrcSetId_r18; /**< ASN.1 periodicFwdRsrcSetId-r18；INTEGER (0..31)，位宽 5 bit。 */
    bool has_periodicFwdRsrcToAddModList_r18; /**< periodicFwdRsrcToAddModList-r18 是否存在。 */
    NCR_PeriodicFwdResource_r18* periodicFwdRsrcToAddModList_r18_items; /**< ASN.1 periodicFwdRsrcToAddModList-r18；SEQUENCE OF NCR_PeriodicFwdResource_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t periodicFwdRsrcToAddModList_r18_count; /**< periodicFwdRsrcToAddModList-r18 元素个数。 */
    bool has_periodicFwdRsrcToReleaseList_r18; /**< periodicFwdRsrcToReleaseList-r18 是否存在。 */
    NCR_PeriodicFwdResourceId_r18* periodicFwdRsrcToReleaseList_r18_items; /**< ASN.1 periodicFwdRsrcToReleaseList-r18；SEQUENCE OF NCR_PeriodicFwdResourceId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t periodicFwdRsrcToReleaseList_r18_count; /**< periodicFwdRsrcToReleaseList-r18 元素个数。 */
    bool has_referenceSCS_r18; /**< referenceSCS-r18 是否存在。 */
    SubcarrierSpacing referenceSCS_r18; /**< ASN.1 referenceSCS-r18；枚举；OPTIONAL。 */
    bool has_priorityFlag_r18; /**< priorityFlag-r18 是否存在。 */
    NCR_PeriodicFwdResourceSet_r18_PriorityFlag_r18 priorityFlag_r18; /**< ASN.1 priorityFlag-r18；枚举；OPTIONAL。 */
};


/**
 * @brief NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18
 * @note ASN.1：periodicTimeRsrc-r18；源文件第 8602 行。
 * @note SEQUENCE { periodicityAndOffset-r18, symbolOffset-r18, durationInSymbols-r18 }
 */
struct NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18 {
    NCR_PeriodicityAndOffset_r18 periodicityAndOffset_r18; /**< ASN.1 periodicityAndOffset-r18；结构体。 */
    int64_t symbolOffset_r18; /**< ASN.1 symbolOffset-r18；INTEGER (0..13)，位宽 4 bit。 */
    int64_t durationInSymbols_r18; /**< ASN.1 durationInSymbols-r18；INTEGER (1..112)，位宽 7 bit。 */
};


/**
 * @brief NCR_PeriodicFwdResource_r18
 * @note ASN.1：NCR-PeriodicFwdResource-r18；源文件第 8599 行。
 * @note NCR-PeriodicFwdResource-r18 ::= SEQUENCE { periodicFwdRsrcId-r18, beamIndex-r18, periodicTimeRsrc-r18 }
 */
struct NCR_PeriodicFwdResource_r18 {
    NCR_PeriodicFwdResourceId_r18 periodicFwdRsrcId_r18; /**< ASN.1 periodicFwdRsrcId-r18；INTEGER (0..1023)，位宽 10 bit。 */
    int64_t beamIndex_r18; /**< ASN.1 beamIndex-r18；INTEGER (0..63)，位宽 6 bit。 */
    NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18 periodicTimeRsrc_r18; /**< ASN.1 periodicTimeRsrc-r18；结构体。 */
};


/**
 * @brief NCR_SemiPersistentFwdResourceSet_r18
 * @note ASN.1：NCR-SemiPersistentFwdResourceSet-r18；源文件第 8620 行。
 * @note NCR-SemiPersistentFwdResourceSet-r18 ::= SEQUENCE { semiPersistentFwdRsrcSetId-r18, semiPersistentFwdRsrcToAddModList-...
 */
struct NCR_SemiPersistentFwdResourceSet_r18 {
    NCR_SemiPersistentFwdResourceSetId_r18 semiPersistentFwdRsrcSetId_r18; /**< ASN.1 semiPersistentFwdRsrcSetId-r18；INTEGER (0..31)，位宽 5 bit。 */
    bool has_semiPersistentFwdRsrcToAddModList_r18; /**< semiPersistentFwdRsrcToAddModList-r18 是否存在。 */
    NCR_SemiPersistentFwdResource_r18* semiPersistentFwdRsrcToAddModList_r18_items; /**< ASN.1 semiPersistentFwdRsrcToAddModList-r18；SEQUENCE OF NCR_SemiPersistentFwdResource_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t semiPersistentFwdRsrcToAddModList_r18_count; /**< semiPersistentFwdRsrcToAddModList-r18 元素个数。 */
    bool has_semiPersistentFwdRsrcToReleaseList_r18; /**< semiPersistentFwdRsrcToReleaseList-r18 是否存在。 */
    NCR_SemiPersistentFwdResourceId_r18* semiPersistentFwdRsrcToReleaseList_r18_items; /**< ASN.1 semiPersistentFwdRsrcToReleaseList-r18；SEQUENCE OF NCR_SemiPersistentFwdResourceId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t semiPersistentFwdRsrcToReleaseList_r18_count; /**< semiPersistentFwdRsrcToReleaseList-r18 元素个数。 */
    bool has_referenceSCS_r18; /**< referenceSCS-r18 是否存在。 */
    SubcarrierSpacing referenceSCS_r18; /**< ASN.1 referenceSCS-r18；枚举；OPTIONAL。 */
    bool has_priorityFlag_r18; /**< priorityFlag-r18 是否存在。 */
    NCR_SemiPersistentFwdResourceSet_r18_PriorityFlag_r18 priorityFlag_r18; /**< ASN.1 priorityFlag-r18；枚举；OPTIONAL。 */
};


/**
 * @brief NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18
 * @note ASN.1：semiPersistentTimeRsrc-r18；源文件第 8634 行。
 * @note SEQUENCE { periodicityAndOffset-r18, symbolOffset-r18, durationInSymbols-r18 }
 */
struct NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18 {
    NCR_PeriodicityAndOffset_r18 periodicityAndOffset_r18; /**< ASN.1 periodicityAndOffset-r18；结构体。 */
    int64_t symbolOffset_r18; /**< ASN.1 symbolOffset-r18；INTEGER (0..13)，位宽 4 bit。 */
    int64_t durationInSymbols_r18; /**< ASN.1 durationInSymbols-r18；INTEGER (1..112)，位宽 7 bit。 */
};


/**
 * @brief NCR_SemiPersistentFwdResource_r18
 * @note ASN.1：NCR-SemiPersistentFwdResource-r18；源文件第 8631 行。
 * @note NCR-SemiPersistentFwdResource-r18 ::= SEQUENCE { semiPersistentFwdRsrcId-r18, beamIndex-r18, semiPersistentTimeRsrc...
 */
struct NCR_SemiPersistentFwdResource_r18 {
    NCR_SemiPersistentFwdResourceId_r18 semiPersistentFwdRsrcId_r18; /**< ASN.1 semiPersistentFwdRsrcId-r18；INTEGER (0..127)，位宽 7 bit。 */
    int64_t beamIndex_r18; /**< ASN.1 beamIndex-r18；INTEGER (0..63)，位宽 6 bit。 */
    NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18 semiPersistentTimeRsrc_r18; /**< ASN.1 semiPersistentTimeRsrc-r18；结构体。 */
};


/**
 * @brief NeedForGapsIntraFreq_r16
 * @note ASN.1：NeedForGapsIntraFreq-r16；源文件第 8668 行。
 * @note NeedForGapsIntraFreq-r16 ::= SEQUENCE { servCellId-r16, gapIndicationIntra-r16 }
 */
struct NeedForGapsIntraFreq_r16 {
    ServCellIndex servCellId_r16; /**< ASN.1 servCellId-r16；INTEGER (0..31)，位宽 5 bit。 */
    NeedForGapsIntraFreq_r16_GapIndicationIntra_r16 gapIndicationIntra_r16; /**< ASN.1 gapIndicationIntra-r16；枚举。 */
};


/**
 * @brief NeedForGapsNR_r16
 * @note ASN.1：NeedForGapsNR-r16；源文件第 8673 行。
 * @note NeedForGapsNR-r16 ::= SEQUENCE { bandNR-r16, gapIndication-r16 }
 */
struct NeedForGapsNR_r16 {
    FreqBandIndicatorNR bandNR_r16; /**< ASN.1 bandNR-r16；INTEGER (1..1024)，位宽 10 bit。 */
    NeedForGapsNR_r16_GapIndication_r16 gapIndication_r16; /**< ASN.1 gapIndication-r16；枚举。 */
};


/**
 * @brief NeedForNCSG_EUTRA_r17
 * @note ASN.1：NeedForNCSG-EUTRA-r17；源文件第 8699 行。
 * @note NeedForNCSG-EUTRA-r17 ::= SEQUENCE { bandEUTRA-r17, gapIndication-r17 }
 */
struct NeedForNCSG_EUTRA_r17 {
    FreqBandIndicatorEUTRA bandEUTRA_r17; /**< ASN.1 bandEUTRA-r17；INTEGER (1..256)，位宽 8 bit。 */
    NeedForNCSG_EUTRA_r17_GapIndication_r17 gapIndication_r17; /**< ASN.1 gapIndication-r17；枚举。 */
};


/**
 * @brief NeedForNCSG_IntraFreq_r17
 * @note ASN.1：NeedForNCSG-IntraFreq-r17；源文件第 8716 行。
 * @note NeedForNCSG-IntraFreq-r17 ::= SEQUENCE { servCellId-r17, gapIndicationIntra-r17 }
 */
struct NeedForNCSG_IntraFreq_r17 {
    ServCellIndex servCellId_r17; /**< ASN.1 servCellId-r17；INTEGER (0..31)，位宽 5 bit。 */
    NeedForNCSG_IntraFreq_r17_GapIndicationIntra_r17 gapIndicationIntra_r17; /**< ASN.1 gapIndicationIntra-r17；枚举。 */
};


/**
 * @brief NeedForNCSG_NR_r17
 * @note ASN.1：NeedForNCSG-NR-r17；源文件第 8721 行。
 * @note NeedForNCSG-NR-r17 ::= SEQUENCE { bandNR-r17, gapIndication-r17 }
 */
struct NeedForNCSG_NR_r17 {
    FreqBandIndicatorNR bandNR_r17; /**< ASN.1 bandNR-r17；INTEGER (1..1024)，位宽 10 bit。 */
    NeedForNCSG_NR_r17_GapIndication_r17 gapIndication_r17; /**< ASN.1 gapIndication-r17；枚举。 */
};


/**
 * @brief NeedForInterruptionNR_r18
 * @note ASN.1：NeedForInterruptionNR-r18；源文件第 8739 行。
 * @note NeedForInterruptionNR-r18 ::= SEQUENCE { interruptionIndication-r18 }
 */
struct NeedForInterruptionNR_r18 {
    bool has_interruptionIndication_r18; /**< interruptionIndication-r18 是否存在。 */
    NeedForInterruptionNR_r18_InterruptionIndication_r18 interruptionIndication_r18; /**< ASN.1 interruptionIndication-r18；枚举；OPTIONAL。 */
};


/**
 * @brief NPN_Identity_r16_Pni_npn_r16
 * @note ASN.1：pni-npn-r16；源文件第 8767 行。
 * @note SEQUENCE { plmn-Identity-r16, cag-IdentityList-r16 }
 */
struct NPN_Identity_r16_Pni_npn_r16 {
    PLMN_Identity plmn_Identity_r16; /**< ASN.1 plmn-Identity-r16；结构体。 */
    CAG_IdentityInfo_r16* cag_IdentityList_r16_items; /**< ASN.1 cag-IdentityList-r16；SEQUENCE OF CAG_IdentityInfo_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t cag_IdentityList_r16_count; /**< cag-IdentityList-r16 元素个数。 */
};


/**
 * @brief NPN_Identity_r16_Snpn_r16
 * @note ASN.1：snpn-r16；源文件第 8771 行。
 * @note SEQUENCE { plmn-Identity-r16, nid-List-r16 }
 */
struct NPN_Identity_r16_Snpn_r16 {
    PLMN_Identity plmn_Identity_r16; /**< ASN.1 plmn-Identity-r16；结构体。 */
    NID_r16* nid_List_r16_items; /**< ASN.1 nid-List-r16；SEQUENCE OF NID_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nid_List_r16_count; /**< nid-List-r16 元素个数。 */
};


/**
 * @brief NPN_Identity_r16
 * @note ASN.1：NPN-Identity-r16；源文件第 8766 行。
 * @note NPN-Identity-r16 ::= CHOICE { pni-npn-r16, snpn-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NPN_Identity_r16_Tag {
    NPN_Identity_r16_Tag_pni_npn_r16 = 0, /**< ASN.1 pni-npn-r16 */
    NPN_Identity_r16_Tag_snpn_r16 = 1, /**< ASN.1 snpn-r16 */
} NPN_Identity_r16_Tag;

struct NPN_Identity_r16 {
    NPN_Identity_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NPN_Identity_r16_Pni_npn_r16 pni_npn_r16; /**< ASN.1 pni-npn-r16 */
        NPN_Identity_r16_Snpn_r16 snpn_r16; /**< ASN.1 snpn-r16 */
    } u;
};


/**
 * @brief CAG_IdentityInfo_r16
 * @note ASN.1：CAG-IdentityInfo-r16；源文件第 8777 行。
 * @note CAG-IdentityInfo-r16 ::= SEQUENCE { cag-Identity-r16, manualCAGselectionAllowed-r16 }
 */
struct CAG_IdentityInfo_r16 {
    BitString cag_Identity_r16; /**< ASN.1 cag-Identity-r16；SIZE (32)，定长。 */
    bool has_manualCAGselectionAllowed_r16; /**< manualCAGselectionAllowed-r16 是否存在。 */
    CAG_IdentityInfo_r16_ManualCAGselectionAllowed_r16 manualCAGselectionAllowed_r16; /**< ASN.1 manualCAGselectionAllowed-r16；枚举；OPTIONAL。 */
};


/**
 * @brief NPN_IdentityInfo_r16_ExtGroup1
 * @note ASN.1：NPN_IdentityInfo_r16_ExtGroup1；源文件第 8798 行。
 */
struct NPN_IdentityInfo_r16_ExtGroup1 {
    bool has_gNB_ID_Length_r17; /**< gNB-ID-Length-r17 是否存在。 */
    int64_t gNB_ID_Length_r17; /**< ASN.1 gNB-ID-Length-r17；INTEGER (22..32)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief NPN_IdentityInfo_r16_ExtGroup2
 * @note ASN.1：NPN_IdentityInfo_r16_ExtGroup2；源文件第 8801 行。
 */
struct NPN_IdentityInfo_r16_ExtGroup2 {
    bool has_mobileIAB_Support_r18; /**< mobileIAB-Support-r18 是否存在。 */
    NPN_IdentityInfo_r16_ExtGroup2_MobileIAB_Support_r18 mobileIAB_Support_r18; /**< ASN.1 mobileIAB-Support-r18；枚举；OPTIONAL。 */
};


/**
 * @brief NPN_IdentityInfo_r16
 * @note ASN.1：NPN-IdentityInfo-r16；源文件第 8790 行。
 * @note NPN-IdentityInfo-r16 ::= SEQUENCE { npn-IdentityList-r16, trackingAreaCode-r16, ranac-r16, cellIdentit...
 */
struct NPN_IdentityInfo_r16 {
    NPN_Identity_r16* npn_IdentityList_r16_items; /**< ASN.1 npn-IdentityList-r16；SEQUENCE OF NPN_Identity_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t npn_IdentityList_r16_count; /**< npn-IdentityList-r16 元素个数。 */
    TrackingAreaCode trackingAreaCode_r16; /**< ASN.1 trackingAreaCode-r16；SIZE (24)，定长。 */
    bool has_ranac_r16; /**< ranac-r16 是否存在。 */
    RAN_AreaCode ranac_r16; /**< ASN.1 ranac-r16；INTEGER (0..255)，位宽 8 bit；OPTIONAL。 */
    CellIdentity cellIdentity_r16; /**< ASN.1 cellIdentity-r16；SIZE (36)，定长。 */
    NPN_IdentityInfo_r16_CellReservedForOperatorUse_r16 cellReservedForOperatorUse_r16; /**< ASN.1 cellReservedForOperatorUse-r16；枚举。 */
    bool has_iab_Support_r16; /**< iab-Support-r16 是否存在。 */
    NPN_IdentityInfo_r16_Iab_Support_r16 iab_Support_r16; /**< ASN.1 iab-Support-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    NPN_IdentityInfo_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    NPN_IdentityInfo_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief NR_DL_PRS_Resource_r17_ExtGroup1
 * @note ASN.1：NR_DL_PRS_Resource_r17_ExtGroup1；源文件第 8922 行。
 */
struct NR_DL_PRS_Resource_r17_ExtGroup1 {
    bool has_dl_PRS_ResourceSymbolOffset_v1800; /**< dl-PRS-ResourceSymbolOffset-v1800 是否存在。 */
    int64_t dl_PRS_ResourceSymbolOffset_v1800; /**< ASN.1 dl-PRS-ResourceSymbolOffset-v1800；INTEGER (13)，单值 0 bit；OPTIONAL。 */
};


/**
 * @brief DL_PRS_QCL_Info_r17_Ssb_r17
 * @note ASN.1：ssb-r17；源文件第 8928 行。
 * @note SEQUENCE { ssb-Index-r17, rs-Type-r17 }
 */
struct DL_PRS_QCL_Info_r17_Ssb_r17 {
    int64_t ssb_Index_r17; /**< ASN.1 ssb-Index-r17；INTEGER (0..63)，位宽 6 bit。 */
    DL_PRS_QCL_Info_r17_Ssb_r17_Rs_Type_r17 rs_Type_r17; /**< ASN.1 rs-Type-r17；枚举。 */
};


/**
 * @brief DL_PRS_QCL_Info_r17_Dl_PRS_r17
 * @note ASN.1：dl-PRS-r17；源文件第 8933 行。
 * @note SEQUENCE { qcl-DL-PRS-ResourceID-r17 }
 */
struct DL_PRS_QCL_Info_r17_Dl_PRS_r17 {
    NR_DL_PRS_ResourceID_r17 qcl_DL_PRS_ResourceID_r17; /**< ASN.1 qcl-DL-PRS-ResourceID-r17；INTEGER (0..63)，位宽 6 bit。 */
};


/**
 * @brief DL_PRS_QCL_Info_r17
 * @note ASN.1：DL-PRS-QCL-Info-r17；源文件第 8927 行。
 * @note DL-PRS-QCL-Info-r17 ::= CHOICE { ssb-r17, dl-PRS-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DL_PRS_QCL_Info_r17_Tag {
    DL_PRS_QCL_Info_r17_Tag_ssb_r17 = 0, /**< ASN.1 ssb-r17 */
    DL_PRS_QCL_Info_r17_Tag_dl_PRS_r17 = 1, /**< ASN.1 dl-PRS-r17 */
} DL_PRS_QCL_Info_r17_Tag;

struct DL_PRS_QCL_Info_r17 {
    DL_PRS_QCL_Info_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DL_PRS_QCL_Info_r17_Ssb_r17 ssb_r17; /**< ASN.1 ssb-r17 */
        DL_PRS_QCL_Info_r17_Dl_PRS_r17 dl_PRS_r17; /**< ASN.1 dl-PRS-r17 */
    } u;
};


/**
 * @brief NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17
 * @note ASN.1：dl-PRS-CombSizeN-AndReOffset-r17；源文件第 8911 行。
 * @note CHOICE { n2-r17, n4-r17, n6-r17, n12-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag {
    NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n2_r17 = 0, /**< ASN.1 n2-r17 */
    NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n4_r17 = 1, /**< ASN.1 n4-r17 */
    NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n6_r17 = 2, /**< ASN.1 n6-r17 */
    NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag_n12_r17 = 3, /**< ASN.1 n12-r17 */
} NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag;

struct NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17 {
    NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n2_r17; /**< ASN.1 n2-r17 */
        int64_t n4_r17; /**< ASN.1 n4-r17 */
        int64_t n6_r17; /**< ASN.1 n6-r17 */
        int64_t n12_r17; /**< ASN.1 n12-r17 */
    } u;
};


/**
 * @brief NR_DL_PRS_Resource_r17
 * @note ASN.1：NR-DL-PRS-Resource-r17；源文件第 8908 行。
 * @note NR-DL-PRS-Resource-r17 ::= SEQUENCE { nr-DL-PRS-ResourceID-r17, dl-PRS-SequenceID-r17, dl-PRS-CombSizeN-...
 */
struct NR_DL_PRS_Resource_r17 {
    NR_DL_PRS_ResourceID_r17 nr_DL_PRS_ResourceID_r17; /**< ASN.1 nr-DL-PRS-ResourceID-r17；INTEGER (0..63)，位宽 6 bit。 */
    int64_t dl_PRS_SequenceID_r17; /**< ASN.1 dl-PRS-SequenceID-r17；INTEGER (0..4095)，位宽 12 bit。 */
    NR_DL_PRS_Resource_r17_Dl_PRS_CombSizeN_AndReOffset_r17 dl_PRS_CombSizeN_AndReOffset_r17; /**< ASN.1 dl-PRS-CombSizeN-AndReOffset-r17；结构体。 */
    int64_t dl_PRS_ResourceSlotOffset_r17; /**< ASN.1 dl-PRS-ResourceSlotOffset-r17；INTEGER (0..511)，位宽 9 bit。 */
    int64_t dl_PRS_ResourceSymbolOffset_r17; /**< ASN.1 dl-PRS-ResourceSymbolOffset-r17；INTEGER (0..12)，位宽 4 bit。 */
    bool has_dl_PRS_QCL_Info_r17; /**< dl-PRS-QCL-Info-r17 是否存在。 */
    DL_PRS_QCL_Info_r17 dl_PRS_QCL_Info_r17; /**< ASN.1 dl-PRS-QCL-Info-r17；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    NR_DL_PRS_Resource_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief NR_NS_PmaxValue
 * @note ASN.1：NR-NS-PmaxValue；源文件第 8952 行。
 * @note NR-NS-PmaxValue ::= SEQUENCE { additionalPmax, additionalSpectrumEmission }
 */
struct NR_NS_PmaxValue {
    bool has_additionalPmax; /**< additionalPmax 是否存在。 */
    P_Max additionalPmax; /**< ASN.1 additionalPmax；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    AdditionalSpectrumEmission additionalSpectrumEmission; /**< ASN.1 additionalSpectrumEmission；INTEGER (0..7)，位宽 3 bit。 */
};


/**
 * @brief NR_NS_PmaxValue_v1760
 * @note ASN.1：NR-NS-PmaxValue-v1760；源文件第 8959 行。
 * @note NR-NS-PmaxValue-v1760 ::= SEQUENCE { additionalSpectrumEmission-v1760 }
 */
struct NR_NS_PmaxValue_v1760 {
    bool has_additionalSpectrumEmission_v1760; /**< additionalSpectrumEmission-v1760 是否存在。 */
    AdditionalSpectrumEmission_v1760 additionalSpectrumEmission_v1760; /**< ASN.1 additionalSpectrumEmission-v1760；INTEGER (8..39)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief NR_NS_PmaxValueAerial_r18
 * @note ASN.1：NR-NS-PmaxValueAerial-r18；源文件第 8965 行。
 * @note NR-NS-PmaxValueAerial-r18 ::= SEQUENCE { additionalPmax-r18, additionalSpectrumEmission-r18 }
 */
struct NR_NS_PmaxValueAerial_r18 {
    bool has_additionalPmax_r18; /**< additionalPmax-r18 是否存在。 */
    P_Max additionalPmax_r18; /**< ASN.1 additionalPmax-r18；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    AdditionalSpectrumEmission_r18 additionalSpectrumEmission_r18; /**< ASN.1 additionalSpectrumEmission-r18；INTEGER (0..39)，位宽 6 bit。 */
};


/**
 * @brief NZP_CSI_RS_Resource_ExtGroup1
 * @note ASN.1：NZP_CSI_RS_Resource_ExtGroup1；源文件第 9018 行。
 */
struct NZP_CSI_RS_Resource_ExtGroup1 {
    bool has_subcarrierSpacing_r18; /**< subcarrierSpacing-r18 是否存在。 */
    SubcarrierSpacing subcarrierSpacing_r18; /**< ASN.1 subcarrierSpacing-r18；枚举；OPTIONAL。 */
    bool has_absoluteFrequencyPointA_r18; /**< absoluteFrequencyPointA-r18 是否存在。 */
    ARFCN_ValueNR absoluteFrequencyPointA_r18; /**< ASN.1 absoluteFrequencyPointA-r18；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_cyclicPrefix_r18; /**< cyclicPrefix-r18 是否存在。 */
    NZP_CSI_RS_Resource_ExtGroup1_CyclicPrefix_r18 cyclicPrefix_r18; /**< ASN.1 cyclicPrefix-r18；枚举；OPTIONAL。 */
};


/**
 * @brief NZP_CSI_RS_Resource
 * @note ASN.1：NZP-CSI-RS-Resource；源文件第 9009 行。
 * @note NZP-CSI-RS-Resource ::= SEQUENCE { nzp-CSI-RS-ResourceId, resourceMapping, powerControlOffset, powerC...
 */
struct NZP_CSI_RS_Resource {
    NZP_CSI_RS_ResourceId nzp_CSI_RS_ResourceId; /**< ASN.1 nzp-CSI-RS-ResourceId；INTEGER (0..191)，位宽 8 bit。 */
    CSI_RS_ResourceMapping resourceMapping; /**< ASN.1 resourceMapping；结构体。 */
    int64_t powerControlOffset; /**< ASN.1 powerControlOffset；INTEGER (-8..15)，位宽 5 bit。 */
    bool has_powerControlOffsetSS; /**< powerControlOffsetSS 是否存在。 */
    NZP_CSI_RS_Resource_PowerControlOffsetSS powerControlOffsetSS; /**< ASN.1 powerControlOffsetSS；枚举；OPTIONAL。 */
    ScramblingId scramblingID; /**< ASN.1 scramblingID；INTEGER (0..1023)，位宽 10 bit。 */
    bool has_periodicityAndOffset; /**< periodicityAndOffset 是否存在。 */
    CSI_ResourcePeriodicityAndOffset periodicityAndOffset; /**< ASN.1 periodicityAndOffset；结构体；OPTIONAL。 */
    bool has_qcl_InfoPeriodicCSI_RS; /**< qcl-InfoPeriodicCSI-RS 是否存在。 */
    TCI_StateId qcl_InfoPeriodicCSI_RS; /**< ASN.1 qcl-InfoPeriodicCSI-RS；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    NZP_CSI_RS_Resource_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief NZP_CSI_RS_ResourceSet_ExtGroup1
 * @note ASN.1：NZP_CSI_RS_ResourceSet_ExtGroup1；源文件第 9040 行。
 */
struct NZP_CSI_RS_ResourceSet_ExtGroup1 {
    bool has_aperiodicTriggeringOffset_r16; /**< aperiodicTriggeringOffset-r16 是否存在。 */
    int64_t aperiodicTriggeringOffset_r16; /**< ASN.1 aperiodicTriggeringOffset-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief NZP_CSI_RS_Pairing_r17
 * @note ASN.1：NZP-CSI-RS-Pairing-r17；源文件第 9060 行。
 * @note NZP-CSI-RS-Pairing-r17 ::= SEQUENCE { nzp-CSI-RS-ResourceId1-r17, nzp-CSI-RS-ResourceId2-r17 }
 */
struct NZP_CSI_RS_Pairing_r17 {
    int64_t nzp_CSI_RS_ResourceId1_r17; /**< ASN.1 nzp-CSI-RS-ResourceId1-r17；INTEGER (1..7)，位宽 3 bit。 */
    int64_t nzp_CSI_RS_ResourceId2_r17; /**< ASN.1 nzp-CSI-RS-ResourceId2-r17；INTEGER (1..7)，位宽 3 bit。 */
};


/**
 * @brief CMRGroupingAndPairing_r17
 * @note ASN.1：CMRGroupingAndPairing-r17；源文件第 9054 行。
 * @note CMRGroupingAndPairing-r17 ::= SEQUENCE { nrofResourcesGroup1-r17, pair1OfNZP-CSI-RS-r17, pair2OfNZP-CSI-RS-...
 */
struct CMRGroupingAndPairing_r17 {
    int64_t nrofResourcesGroup1_r17; /**< ASN.1 nrofResourcesGroup1-r17；INTEGER (1..7)，位宽 3 bit。 */
    bool has_pair1OfNZP_CSI_RS_r17; /**< pair1OfNZP-CSI-RS-r17 是否存在。 */
    NZP_CSI_RS_Pairing_r17 pair1OfNZP_CSI_RS_r17; /**< ASN.1 pair1OfNZP-CSI-RS-r17；结构体；OPTIONAL。 */
    bool has_pair2OfNZP_CSI_RS_r17; /**< pair2OfNZP-CSI-RS-r17 是否存在。 */
    NZP_CSI_RS_Pairing_r17 pair2OfNZP_CSI_RS_r17; /**< ASN.1 pair2OfNZP-CSI-RS-r17；结构体；OPTIONAL。 */
};


/**
 * @brief NZP_CSI_RS_ResourceSet_ExtGroup2
 * @note ASN.1：NZP_CSI_RS_ResourceSet_ExtGroup2；源文件第 9043 行。
 */
struct NZP_CSI_RS_ResourceSet_ExtGroup2 {
    bool has_pdc_Info_r17; /**< pdc-Info-r17 是否存在。 */
    NZP_CSI_RS_ResourceSet_ExtGroup2_Pdc_Info_r17 pdc_Info_r17; /**< ASN.1 pdc-Info-r17；枚举；OPTIONAL。 */
    bool has_cmrGroupingAndPairing_r17; /**< cmrGroupingAndPairing-r17 是否存在。 */
    CMRGroupingAndPairing_r17 cmrGroupingAndPairing_r17; /**< ASN.1 cmrGroupingAndPairing-r17；结构体；OPTIONAL。 */
    bool has_aperiodicTriggeringOffset_r17; /**< aperiodicTriggeringOffset-r17 是否存在。 */
    int64_t aperiodicTriggeringOffset_r17; /**< ASN.1 aperiodicTriggeringOffset-r17；INTEGER (0..124)，位宽 7 bit；OPTIONAL。 */
    bool has_aperiodicTriggeringOffsetL2_r17; /**< aperiodicTriggeringOffsetL2-r17 是否存在。 */
    int64_t aperiodicTriggeringOffsetL2_r17; /**< ASN.1 aperiodicTriggeringOffsetL2-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief NZP_CSI_RS_ResourceSet_ExtGroup3
 * @note ASN.1：NZP_CSI_RS_ResourceSet_ExtGroup3；源文件第 9049 行。
 */
struct NZP_CSI_RS_ResourceSet_ExtGroup3 {
    bool has_resourceType_r18; /**< resourceType-r18 是否存在。 */
    NZP_CSI_RS_ResourceSet_ExtGroup3_ResourceType_r18 resourceType_r18; /**< ASN.1 resourceType-r18；枚举；OPTIONAL。 */
};


/**
 * @brief NZP_CSI_RS_ResourceSet
 * @note ASN.1：NZP-CSI-RS-ResourceSet；源文件第 9033 行。
 * @note NZP-CSI-RS-ResourceSet ::= SEQUENCE { nzp-CSI-ResourceSetId, nzp-CSI-RS-Resources, repetition, aperiodic...
 */
struct NZP_CSI_RS_ResourceSet {
    NZP_CSI_RS_ResourceSetId nzp_CSI_ResourceSetId; /**< ASN.1 nzp-CSI-ResourceSetId；INTEGER (0..63)，位宽 6 bit。 */
    NZP_CSI_RS_ResourceId* nzp_CSI_RS_Resources_items; /**< ASN.1 nzp-CSI-RS-Resources；SEQUENCE OF NZP_CSI_RS_ResourceId，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_Resources_count; /**< nzp-CSI-RS-Resources 元素个数。 */
    bool has_repetition; /**< repetition 是否存在。 */
    NZP_CSI_RS_ResourceSet_Repetition repetition; /**< ASN.1 repetition；枚举；OPTIONAL。 */
    bool has_aperiodicTriggeringOffset; /**< aperiodicTriggeringOffset 是否存在。 */
    int64_t aperiodicTriggeringOffset; /**< ASN.1 aperiodicTriggeringOffset；INTEGER (0..6)，位宽 3 bit；OPTIONAL。 */
    bool has_trs_Info; /**< trs-Info 是否存在。 */
    NZP_CSI_RS_ResourceSet_Trs_Info trs_Info; /**< ASN.1 trs-Info；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    NZP_CSI_RS_ResourceSet_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    NZP_CSI_RS_ResourceSet_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    NZP_CSI_RS_ResourceSet_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PathlossReferenceRS_r17_ReferenceSignal_r17
 * @note ASN.1：referenceSignal-r17；源文件第 9080 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PathlossReferenceRS_r17_ReferenceSignal_r17_Tag {
    PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    PathlossReferenceRS_r17_ReferenceSignal_r17_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} PathlossReferenceRS_r17_ReferenceSignal_r17_Tag;

struct PathlossReferenceRS_r17_ReferenceSignal_r17 {
    PathlossReferenceRS_r17_ReferenceSignal_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief PathlossReferenceRS_r17
 * @note ASN.1：PathlossReferenceRS-r17；源文件第 9078 行。
 * @note PathlossReferenceRS-r17 ::= SEQUENCE { pathlossReferenceRS-Id-r17, referenceSignal-r17, additionalPCI-r17 }
 */
struct PathlossReferenceRS_r17 {
    PathlossReferenceRS_Id_r17 pathlossReferenceRS_Id_r17; /**< ASN.1 pathlossReferenceRS-Id-r17；INTEGER (0..63)，位宽 6 bit。 */
    PathlossReferenceRS_r17_ReferenceSignal_r17 referenceSignal_r17; /**< ASN.1 referenceSignal-r17；结构体。 */
    bool has_additionalPCI_r17; /**< additionalPCI-r17 是否存在。 */
    AdditionalPCIIndex_r17 additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief PCI_RangeElement
 * @note ASN.1：PCI-RangeElement；源文件第 9126 行。
 * @note PCI-RangeElement ::= SEQUENCE { pci-RangeIndex, pci-Range }
 */
struct PCI_RangeElement {
    PCI_RangeIndex pci_RangeIndex; /**< ASN.1 pci-RangeIndex；INTEGER (1..8)，位宽 3 bit。 */
    PCI_Range pci_Range; /**< ASN.1 pci-Range；结构体。 */
};


/**
 * @brief CellGroupForSwitch_r16
 * @note ASN.1：CellGroupForSwitch-r16；源文件第 9184 行。
 * @note CellGroupForSwitch-r16 ::= SEQUENCE OF (size 1..16) OF ServCellIndex
 */
struct CellGroupForSwitch_r16 {
    ServCellIndex* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDSCH_TimeDomainResourceAllocation
 * @note ASN.1：PDSCH-TimeDomainResourceAllocation；源文件第 9592 行。
 * @note PDSCH-TimeDomainResourceAllocation ::= SEQUENCE { k0, mappingType, startSymbolAndLength }
 */
struct PDSCH_TimeDomainResourceAllocation {
    bool has_k0; /**< k0 是否存在。 */
    int64_t k0; /**< ASN.1 k0；INTEGER (0..32)，位宽 6 bit；OPTIONAL。 */
    PDSCH_TimeDomainResourceAllocation_MappingType mappingType; /**< ASN.1 mappingType；枚举。 */
    int64_t startSymbolAndLength; /**< ASN.1 startSymbolAndLength；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1
 * @note ASN.1：PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1；源文件第 9606 行。
 */
struct PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1 {
    bool has_k0_v1710; /**< k0-v1710 是否存在。 */
    int64_t k0_v1710; /**< ASN.1 k0-v1710；INTEGER (33..128)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2
 * @note ASN.1：PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2；源文件第 9609 行。
 */
struct PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2 {
    bool has_repetitionNumber_v1730; /**< repetitionNumber-v1730 是否存在。 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2_RepetitionNumber_v1730 repetitionNumber_v1730; /**< ASN.1 repetitionNumber-v1730；枚举；OPTIONAL。 */
};


/**
 * @brief PDSCH_TimeDomainResourceAllocation_r16
 * @note ASN.1：PDSCH-TimeDomainResourceAllocation-r16；源文件第 9600 行。
 * @note PDSCH-TimeDomainResourceAllocation-r16 ::= SEQUENCE { k0-r16, mappingType-r16, startSymbolAndLength-r16, repetitionNumbe...
 */
struct PDSCH_TimeDomainResourceAllocation_r16 {
    bool has_k0_r16; /**< k0-r16 是否存在。 */
    int64_t k0_r16; /**< ASN.1 k0-r16；INTEGER (0..32)，位宽 6 bit；OPTIONAL。 */
    PDSCH_TimeDomainResourceAllocation_r16_MappingType_r16 mappingType_r16; /**< ASN.1 mappingType-r16；枚举。 */
    int64_t startSymbolAndLength_r16; /**< ASN.1 startSymbolAndLength-r16；INTEGER (0..127)，位宽 7 bit。 */
    bool has_repetitionNumber_r16; /**< repetitionNumber-r16 是否存在。 */
    PDSCH_TimeDomainResourceAllocation_r16_RepetitionNumber_r16 repetitionNumber_r16; /**< ASN.1 repetitionNumber-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDSCH_TimeDomainResourceAllocation_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MultiPDSCH_TDRA_r17
 * @note ASN.1：MultiPDSCH-TDRA-r17；源文件第 9618 行。
 * @note MultiPDSCH-TDRA-r17 ::= SEQUENCE { pdsch-TDRA-List-r17 }
 */
struct MultiPDSCH_TDRA_r17 {
    PDSCH_TimeDomainResourceAllocation_r16* pdsch_TDRA_List_r17_items; /**< ASN.1 pdsch-TDRA-List-r17；SEQUENCE OF PDSCH_TimeDomainResourceAllocation_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pdsch_TDRA_List_r17_count; /**< pdsch-TDRA-List-r17 元素个数。 */
};


/**
 * @brief PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1
 * @note ASN.1：PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1；源文件第 9791 行。
 */
struct PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1 {
    bool has_perHARQ_Ext_r17; /**< perHARQ-Ext-r17 是否存在。 */
    BitString* perHARQ_Ext_r17_items; /**< ASN.1 perHARQ-Ext-r17；SEQUENCE OF BitString，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t perHARQ_Ext_r17_count; /**< perHARQ-Ext-r17 元素个数。 */
};


/**
 * @brief PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC
 * @note ASN.1：applicable-r17/perCC；源文件第 9785 行。
 * @note SEQUENCE OF (size 1..32) OF PDSCHHARQACKEnhType3R17ApplicableR17PerCCItem
 */
struct PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ
 * @note ASN.1：applicable-r17/perHARQ；源文件第 9786 行。
 * @note SEQUENCE OF (size 1..32) OF PDSCHHARQACKEnhType3R17ApplicableR17PerHARQItem
 */
struct PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ {
    BitString* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17
 * @note ASN.1：applicable-r17；源文件第 9784 行。
 * @note CHOICE { perCC, perHARQ }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag {
    PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perCC = 0, /**< ASN.1 perCC */
    PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag_perHARQ = 1, /**< ASN.1 perHARQ */
} PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag;

struct PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17 {
    PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerCC perCC; /**< ASN.1 perCC */
        PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17_PerHARQ perHARQ; /**< ASN.1 perHARQ */
    } u;
};


/**
 * @brief PDSCH_HARQ_ACK_EnhType3_r17
 * @note ASN.1：PDSCH-HARQ-ACK-EnhType3-r17；源文件第 9782 行。
 * @note PDSCH-HARQ-ACK-EnhType3-r17 ::= SEQUENCE { pdsch-HARQ-ACK-EnhType3Index-r17, applicable-r17, pdsch-HARQ-ACK-E...
 */
struct PDSCH_HARQ_ACK_EnhType3_r17 {
    PDSCH_HARQ_ACK_EnhType3Index_r17 pdsch_HARQ_ACK_EnhType3Index_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3Index-r17；INTEGER (0..7)，位宽 3 bit。 */
    PDSCH_HARQ_ACK_EnhType3_r17_Applicable_r17 applicable_r17; /**< ASN.1 applicable-r17；结构体。 */
    bool has_pdsch_HARQ_ACK_EnhType3NDI_r17; /**< pdsch-HARQ-ACK-EnhType3NDI-r17 是否存在。 */
    PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3NDI_r17 pdsch_HARQ_ACK_EnhType3NDI_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3NDI-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_EnhType3CBG_r17; /**< pdsch-HARQ-ACK-EnhType3CBG-r17 是否存在。 */
    PDSCH_HARQ_ACK_EnhType3_r17_Pdsch_HARQ_ACK_EnhType3CBG_r17 pdsch_HARQ_ACK_EnhType3CBG_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3CBG-r17；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDSCH_HARQ_ACK_EnhType3_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PLMN_IdentityInfo_ExtGroup1
 * @note ASN.1：PLMN_IdentityInfo_ExtGroup1；源文件第 9865 行。
 */
struct PLMN_IdentityInfo_ExtGroup1 {
    bool has_iab_Support_r16; /**< iab-Support-r16 是否存在。 */
    PLMN_IdentityInfo_ExtGroup1_Iab_Support_r16 iab_Support_r16; /**< ASN.1 iab-Support-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PLMN_IdentityInfo_ExtGroup2
 * @note ASN.1：PLMN_IdentityInfo_ExtGroup2；源文件第 9868 行。
 */
struct PLMN_IdentityInfo_ExtGroup2 {
    bool has_trackingAreaList_r17; /**< trackingAreaList-r17 是否存在。 */
    TrackingAreaCode* trackingAreaList_r17_items; /**< ASN.1 trackingAreaList-r17；SEQUENCE OF TrackingAreaCode，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t trackingAreaList_r17_count; /**< trackingAreaList-r17 元素个数。 */
    bool has_gNB_ID_Length_r17; /**< gNB-ID-Length-r17 是否存在。 */
    int64_t gNB_ID_Length_r17; /**< ASN.1 gNB-ID-Length-r17；INTEGER (22..32)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief PLMN_IdentityInfo_ExtGroup3
 * @note ASN.1：PLMN_IdentityInfo_ExtGroup3；源文件第 9872 行。
 */
struct PLMN_IdentityInfo_ExtGroup3 {
    bool has_mobileIAB_Support_r18; /**< mobileIAB-Support-r18 是否存在。 */
    PLMN_IdentityInfo_ExtGroup3_MobileIAB_Support_r18 mobileIAB_Support_r18; /**< ASN.1 mobileIAB-Support-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PLMN_IdentityInfo
 * @note ASN.1：PLMN-IdentityInfo；源文件第 9858 行。
 * @note PLMN-IdentityInfo ::= SEQUENCE { plmn-IdentityList, trackingAreaCode, ranac, cellIdentity, cellRese...
 */
struct PLMN_IdentityInfo {
    PLMN_Identity* plmn_IdentityList_items; /**< ASN.1 plmn-IdentityList；SEQUENCE OF PLMN_Identity，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t plmn_IdentityList_count; /**< plmn-IdentityList 元素个数。 */
    bool has_trackingAreaCode; /**< trackingAreaCode 是否存在。 */
    TrackingAreaCode trackingAreaCode; /**< ASN.1 trackingAreaCode；SIZE (24)，定长；OPTIONAL。 */
    bool has_ranac; /**< ranac 是否存在。 */
    RAN_AreaCode ranac; /**< ASN.1 ranac；INTEGER (0..255)，位宽 8 bit；OPTIONAL。 */
    CellIdentity cellIdentity; /**< ASN.1 cellIdentity；SIZE (36)，定长。 */
    PLMN_IdentityInfo_CellReservedForOperatorUse cellReservedForOperatorUse; /**< ASN.1 cellReservedForOperatorUse；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PLMN_IdentityInfo_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PLMN_IdentityInfo_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PLMN_IdentityInfo_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PUCCH_ResourceSet
 * @note ASN.1：PUCCH-ResourceSet；源文件第 10015 行。
 * @note PUCCH-ResourceSet ::= SEQUENCE { pucch-ResourceSetId, resourceList, maxPayloadSize }
 */
struct PUCCH_ResourceSet {
    PUCCH_ResourceSetId pucch_ResourceSetId; /**< ASN.1 pucch-ResourceSetId；INTEGER (0..3)，位宽 2 bit。 */
    PUCCH_ResourceId* resourceList_items; /**< ASN.1 resourceList；SEQUENCE OF PUCCH_ResourceId，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t resourceList_count; /**< resourceList 元素个数。 */
    bool has_maxPayloadSize; /**< maxPayloadSize 是否存在。 */
    int64_t maxPayloadSize; /**< ASN.1 maxPayloadSize；INTEGER (4..256)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief PUCCH_format0
 * @note ASN.1：PUCCH-format0；源文件第 10068 行。
 * @note PUCCH-format0 ::= SEQUENCE { initialCyclicShift, nrofSymbols, startingSymbolIndex }
 */
struct PUCCH_format0 {
    int64_t initialCyclicShift; /**< ASN.1 initialCyclicShift；INTEGER (0..11)，位宽 4 bit。 */
    int64_t nrofSymbols; /**< ASN.1 nrofSymbols；INTEGER (1..2)，位宽 1 bit。 */
    int64_t startingSymbolIndex; /**< ASN.1 startingSymbolIndex；INTEGER (0..13)，位宽 4 bit。 */
};


/**
 * @brief PUCCH_format1
 * @note ASN.1：PUCCH-format1；源文件第 10074 行。
 * @note PUCCH-format1 ::= SEQUENCE { initialCyclicShift, nrofSymbols, startingSymbolIndex, timeDomainOCC }
 */
struct PUCCH_format1 {
    int64_t initialCyclicShift; /**< ASN.1 initialCyclicShift；INTEGER (0..11)，位宽 4 bit。 */
    int64_t nrofSymbols; /**< ASN.1 nrofSymbols；INTEGER (4..14)，位宽 4 bit。 */
    int64_t startingSymbolIndex; /**< ASN.1 startingSymbolIndex；INTEGER (0..10)，位宽 4 bit。 */
    int64_t timeDomainOCC; /**< ASN.1 timeDomainOCC；INTEGER (0..6)，位宽 3 bit。 */
};


/**
 * @brief PUCCH_format2
 * @note ASN.1：PUCCH-format2；源文件第 10081 行。
 * @note PUCCH-format2 ::= SEQUENCE { nrofPRBs, nrofSymbols, startingSymbolIndex }
 */
struct PUCCH_format2 {
    int64_t nrofPRBs; /**< ASN.1 nrofPRBs；INTEGER (1..16)，位宽 4 bit。 */
    int64_t nrofSymbols; /**< ASN.1 nrofSymbols；INTEGER (1..2)，位宽 1 bit。 */
    int64_t startingSymbolIndex; /**< ASN.1 startingSymbolIndex；INTEGER (0..13)，位宽 4 bit。 */
};


/**
 * @brief PUCCH_format3
 * @note ASN.1：PUCCH-format3；源文件第 10087 行。
 * @note PUCCH-format3 ::= SEQUENCE { nrofPRBs, nrofSymbols, startingSymbolIndex }
 */
struct PUCCH_format3 {
    int64_t nrofPRBs; /**< ASN.1 nrofPRBs；INTEGER (1..16)，位宽 4 bit。 */
    int64_t nrofSymbols; /**< ASN.1 nrofSymbols；INTEGER (4..14)，位宽 4 bit。 */
    int64_t startingSymbolIndex; /**< ASN.1 startingSymbolIndex；INTEGER (0..10)，位宽 4 bit。 */
};


/**
 * @brief PUCCH_format4
 * @note ASN.1：PUCCH-format4；源文件第 10093 行。
 * @note PUCCH-format4 ::= SEQUENCE { nrofSymbols, occ-Length, occ-Index, startingSymbolIndex }
 */
struct PUCCH_format4 {
    int64_t nrofSymbols; /**< ASN.1 nrofSymbols；INTEGER (4..14)，位宽 4 bit。 */
    PUCCH_format4_Occ_Length occ_Length; /**< ASN.1 occ-Length；枚举。 */
    PUCCH_format4_Occ_Index occ_Index; /**< ASN.1 occ-Index；枚举。 */
    int64_t startingSymbolIndex; /**< ASN.1 startingSymbolIndex；INTEGER (0..10)，位宽 4 bit。 */
};


/**
 * @brief PUCCH_Resource_Format
 * @note ASN.1：format；源文件第 10028 行。
 * @note CHOICE { format0, format1, format2, format3, format4 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_Resource_Format_Tag {
    PUCCH_Resource_Format_Tag_format0 = 0, /**< ASN.1 format0 */
    PUCCH_Resource_Format_Tag_format1 = 1, /**< ASN.1 format1 */
    PUCCH_Resource_Format_Tag_format2 = 2, /**< ASN.1 format2 */
    PUCCH_Resource_Format_Tag_format3 = 3, /**< ASN.1 format3 */
    PUCCH_Resource_Format_Tag_format4 = 4, /**< ASN.1 format4 */
} PUCCH_Resource_Format_Tag;

struct PUCCH_Resource_Format {
    PUCCH_Resource_Format_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PUCCH_format0 format0; /**< ASN.1 format0 */
        PUCCH_format1 format1; /**< ASN.1 format1 */
        PUCCH_format2 format2; /**< ASN.1 format2 */
        PUCCH_format3 format3; /**< ASN.1 format3 */
        PUCCH_format4 format4; /**< ASN.1 format4 */
    } u;
};


/**
 * @brief PUCCH_Resource
 * @note ASN.1：PUCCH-Resource；源文件第 10023 行。
 * @note PUCCH-Resource ::= SEQUENCE { pucch-ResourceId, startingPRB, intraSlotFrequencyHopping, secondHo...
 */
struct PUCCH_Resource {
    PUCCH_ResourceId pucch_ResourceId; /**< ASN.1 pucch-ResourceId；INTEGER (0..127)，位宽 7 bit。 */
    PRB_Id startingPRB; /**< ASN.1 startingPRB；INTEGER (0..274)，位宽 9 bit。 */
    bool has_intraSlotFrequencyHopping; /**< intraSlotFrequencyHopping 是否存在。 */
    PUCCH_Resource_IntraSlotFrequencyHopping intraSlotFrequencyHopping; /**< ASN.1 intraSlotFrequencyHopping；枚举；OPTIONAL。 */
    bool has_secondHopPRB; /**< secondHopPRB 是否存在。 */
    PRB_Id secondHopPRB; /**< ASN.1 secondHopPRB；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    PUCCH_Resource_Format format; /**< ASN.1 format；结构体。 */
};


/**
 * @brief PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700
 * @note ASN.1：format-v1700；源文件第 10054 行。
 * @note SEQUENCE { nrofPRBs-r17 }
 */
struct PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700 {
    int64_t nrofPRBs_r17; /**< ASN.1 nrofPRBs-r17；INTEGER (1..16)，位宽 4 bit。 */
};


/**
 * @brief PUCCH_ResourceExt_v1610_ExtGroup1
 * @note ASN.1：PUCCH_ResourceExt_v1610_ExtGroup1；源文件第 10053 行。
 */
struct PUCCH_ResourceExt_v1610_ExtGroup1 {
    bool has_format_v1700; /**< format-v1700 是否存在。 */
    PUCCH_ResourceExt_v1610_ExtGroup1_Format_v1700 format_v1700; /**< ASN.1 format-v1700；结构体；OPTIONAL。 */
    bool has_pucch_RepetitionNrofSlots_r17; /**< pucch-RepetitionNrofSlots-r17 是否存在。 */
    PUCCH_ResourceExt_v1610_ExtGroup1_Pucch_RepetitionNrofSlots_r17 pucch_RepetitionNrofSlots_r17; /**< ASN.1 pucch-RepetitionNrofSlots-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PUCCH_ResourceExt_v1610_ExtGroup2
 * @note ASN.1：PUCCH_ResourceExt_v1610_ExtGroup2；源文件第 10059 行。
 */
struct PUCCH_ResourceExt_v1610_ExtGroup2 {
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    PUCCH_ResourceExt_v1610_ExtGroup2_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；枚举；OPTIONAL。 */
    bool has_multipanelSFN_Scheme_r18; /**< multipanelSFN-Scheme-r18 是否存在。 */
    PUCCH_ResourceExt_v1610_ExtGroup2_MultipanelSFN_Scheme_r18 multipanelSFN_Scheme_r18; /**< ASN.1 multipanelSFN-Scheme-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16
 * @note ASN.1：interlaceAllocation-r16/interlace0-r16；源文件第 10040 行。
 * @note CHOICE { scs15, scs30 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag {
    PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs15 = 0, /**< ASN.1 scs15 */
    PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag_scs30 = 1, /**< ASN.1 scs30 */
} PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag;

struct PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16 {
    PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t scs15; /**< ASN.1 scs15 */
        int64_t scs30; /**< ASN.1 scs30 */
    } u;
};


/**
 * @brief PUCCH_ResourceExt_v1610_InterlaceAllocation_r16
 * @note ASN.1：interlaceAllocation-r16；源文件第 10038 行。
 * @note SEQUENCE { rb-SetIndex-r16, interlace0-r16 }
 */
struct PUCCH_ResourceExt_v1610_InterlaceAllocation_r16 {
    int64_t rb_SetIndex_r16; /**< ASN.1 rb-SetIndex-r16；INTEGER (0..4)，位宽 3 bit。 */
    PUCCH_ResourceExt_v1610_InterlaceAllocation_r16_Interlace0_r16 interlace0_r16; /**< ASN.1 interlace0-r16；结构体。 */
};


/**
 * @brief PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610
 * @note ASN.1：format-v1610/occ-v1610；源文件第 10047 行。
 * @note SEQUENCE { occ-Length-v1610, occ-Index-v1610 }
 */
struct PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610 {
    bool has_occ_Length_v1610; /**< occ-Length-v1610 是否存在。 */
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Length_v1610 occ_Length_v1610; /**< ASN.1 occ-Length-v1610；枚举；OPTIONAL。 */
    bool has_occ_Index_v1610; /**< occ-Index-v1610 是否存在。 */
    PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610_Occ_Index_v1610 occ_Index_v1610; /**< ASN.1 occ-Index-v1610；枚举；OPTIONAL。 */
};


/**
 * @brief PUCCH_ResourceExt_v1610_Format_v1610
 * @note ASN.1：format-v1610；源文件第 10045 行。
 * @note CHOICE { interlace1-v1610, occ-v1610 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_ResourceExt_v1610_Format_v1610_Tag {
    PUCCH_ResourceExt_v1610_Format_v1610_Tag_interlace1_v1610 = 0, /**< ASN.1 interlace1-v1610 */
    PUCCH_ResourceExt_v1610_Format_v1610_Tag_occ_v1610 = 1, /**< ASN.1 occ-v1610 */
} PUCCH_ResourceExt_v1610_Format_v1610_Tag;

struct PUCCH_ResourceExt_v1610_Format_v1610 {
    PUCCH_ResourceExt_v1610_Format_v1610_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t interlace1_v1610; /**< ASN.1 interlace1-v1610 */
        PUCCH_ResourceExt_v1610_Format_v1610_Occ_v1610 occ_v1610; /**< ASN.1 occ-v1610 */
    } u;
};


/**
 * @brief PUCCH_ResourceExt_v1610
 * @note ASN.1：PUCCH-ResourceExt-v1610；源文件第 10037 行。
 * @note PUCCH-ResourceExt-v1610 ::= SEQUENCE { interlaceAllocation-r16, format-v1610, format-v1700, pucch-Repetit...
 */
struct PUCCH_ResourceExt_v1610 {
    bool has_interlaceAllocation_r16; /**< interlaceAllocation-r16 是否存在。 */
    PUCCH_ResourceExt_v1610_InterlaceAllocation_r16 interlaceAllocation_r16; /**< ASN.1 interlaceAllocation-r16；结构体；OPTIONAL。 */
    bool has_format_v1610; /**< format-v1610 是否存在。 */
    PUCCH_ResourceExt_v1610_Format_v1610 format_v1610; /**< ASN.1 format-v1610；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUCCH_ResourceExt_v1610_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PUCCH_ResourceExt_v1610_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PUCCH_ResourceGroup_r16
 * @note ASN.1：PUCCH-ResourceGroup-r16；源文件第 10100 行。
 * @note PUCCH-ResourceGroup-r16 ::= SEQUENCE { pucch-ResourceGroupId-r16, resourcePerGroupList-r16 }
 */
struct PUCCH_ResourceGroup_r16 {
    PUCCH_ResourceGroupId_r16 pucch_ResourceGroupId_r16; /**< ASN.1 pucch-ResourceGroupId-r16；INTEGER (0..3)，位宽 2 bit。 */
    PUCCH_ResourceId* resourcePerGroupList_r16_items; /**< ASN.1 resourcePerGroupList-r16；SEQUENCE OF PUCCH_ResourceId，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t resourcePerGroupList_r16_count; /**< resourcePerGroupList-r16 元素个数。 */
};


/**
 * @brief PUCCH_CSI_Resource
 * @note ASN.1：PUCCH-CSI-Resource；源文件第 10151 行。
 * @note PUCCH-CSI-Resource ::= SEQUENCE { uplinkBandwidthPartId, pucch-Resource }
 */
struct PUCCH_CSI_Resource {
    BWP_Id uplinkBandwidthPartId; /**< ASN.1 uplinkBandwidthPartId；INTEGER (0..4)，位宽 3 bit。 */
    PUCCH_ResourceId pucch_Resource; /**< ASN.1 pucch-Resource；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief P0_PUCCH
 * @note ASN.1：P0-PUCCH；源文件第 10183 行。
 * @note P0-PUCCH ::= SEQUENCE { p0-PUCCH-Id, p0-PUCCH-Value }
 */
struct P0_PUCCH {
    P0_PUCCH_Id p0_PUCCH_Id; /**< ASN.1 p0-PUCCH-Id；INTEGER (1..8)，位宽 3 bit。 */
    int64_t p0_PUCCH_Value; /**< ASN.1 p0-PUCCH-Value；INTEGER (-16..15)，位宽 5 bit。 */
};


/**
 * @brief PUCCH_PathlossReferenceRS_ReferenceSignal
 * @note ASN.1：referenceSignal；源文件第 10194 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_PathlossReferenceRS_ReferenceSignal_Tag {
    PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    PUCCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} PUCCH_PathlossReferenceRS_ReferenceSignal_Tag;

struct PUCCH_PathlossReferenceRS_ReferenceSignal {
    PUCCH_PathlossReferenceRS_ReferenceSignal_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief PUCCH_PathlossReferenceRS
 * @note ASN.1：PUCCH-PathlossReferenceRS；源文件第 10192 行。
 * @note PUCCH-PathlossReferenceRS ::= SEQUENCE { pucch-PathlossReferenceRS-Id, referenceSignal }
 */
struct PUCCH_PathlossReferenceRS {
    PUCCH_PathlossReferenceRS_Id pucch_PathlossReferenceRS_Id; /**< ASN.1 pucch-PathlossReferenceRS-Id；INTEGER (0..3)，位宽 2 bit。 */
    PUCCH_PathlossReferenceRS_ReferenceSignal referenceSignal; /**< ASN.1 referenceSignal；结构体。 */
};


/**
 * @brief PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16
 * @note ASN.1：referenceSignal-r16；源文件第 10202 行。
 * @note CHOICE { ssb-Index-r16, csi-RS-Index-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag {
    PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16 = 0, /**< ASN.1 ssb-Index-r16 */
    PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16 = 1, /**< ASN.1 csi-RS-Index-r16 */
} PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag;

struct PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16 {
    PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index_r16; /**< ASN.1 ssb-Index-r16 */
        NZP_CSI_RS_ResourceId csi_RS_Index_r16; /**< ASN.1 csi-RS-Index-r16 */
    } u;
};


/**
 * @brief PUCCH_PathlossReferenceRS_r16
 * @note ASN.1：PUCCH-PathlossReferenceRS-r16；源文件第 10200 行。
 * @note PUCCH-PathlossReferenceRS-r16 ::= SEQUENCE { pucch-PathlossReferenceRS-Id-r16, referenceSignal-r16 }
 */
struct PUCCH_PathlossReferenceRS_r16 {
    PUCCH_PathlossReferenceRS_Id_v1610 pucch_PathlossReferenceRS_Id_r16; /**< ASN.1 pucch-PathlossReferenceRS-Id-r16；INTEGER (4..63)，位宽 6 bit。 */
    PUCCH_PathlossReferenceRS_r16_ReferenceSignal_r16 referenceSignal_r16; /**< ASN.1 referenceSignal-r16；结构体。 */
};


/**
 * @brief PUCCH_PowerControlSetInfo_r17
 * @note ASN.1：PUCCH-PowerControlSetInfo-r17；源文件第 10208 行。
 * @note PUCCH-PowerControlSetInfo-r17 ::= SEQUENCE { pucch-PowerControlSetInfoId-r17, p0-PUCCH-Id-r17, pucch-ClosedLoop...
 */
struct PUCCH_PowerControlSetInfo_r17 {
    PUCCH_PowerControlSetInfoId_r17 pucch_PowerControlSetInfoId_r17; /**< ASN.1 pucch-PowerControlSetInfoId-r17；INTEGER (1..8)，位宽 3 bit。 */
    P0_PUCCH_Id p0_PUCCH_Id_r17; /**< ASN.1 p0-PUCCH-Id-r17；INTEGER (1..8)，位宽 3 bit。 */
    PUCCH_PowerControlSetInfo_r17_Pucch_ClosedLoopIndex_r17 pucch_ClosedLoopIndex_r17; /**< ASN.1 pucch-ClosedLoopIndex-r17；枚举。 */
    PUCCH_PathlossReferenceRS_Id_r17 pucch_PathlossReferenceRS_Id_r17; /**< ASN.1 pucch-PathlossReferenceRS-Id-r17；INTEGER (0..7)，位宽 3 bit。 */
};


/**
 * @brief PUCCH_SRS
 * @note ASN.1：PUCCH-SRS；源文件第 10240 行。
 * @note PUCCH-SRS ::= SEQUENCE { resource, uplinkBWP }
 */
struct PUCCH_SRS {
    SRS_ResourceId resource; /**< ASN.1 resource；INTEGER (0..63)，位宽 6 bit。 */
    BWP_Id uplinkBWP; /**< ASN.1 uplinkBWP；INTEGER (0..4)，位宽 3 bit。 */
};


/**
 * @brief PUCCH_SpatialRelationInfo_ReferenceSignal
 * @note ASN.1：referenceSignal；源文件第 10224 行。
 * @note CHOICE { ssb-Index, csi-RS-Index, srs }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUCCH_SpatialRelationInfo_ReferenceSignal_Tag {
    PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
    PUCCH_SpatialRelationInfo_ReferenceSignal_Tag_srs = 2, /**< ASN.1 srs */
} PUCCH_SpatialRelationInfo_ReferenceSignal_Tag;

struct PUCCH_SpatialRelationInfo_ReferenceSignal {
    PUCCH_SpatialRelationInfo_ReferenceSignal_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
        PUCCH_SRS srs; /**< ASN.1 srs */
    } u;
};


/**
 * @brief PUCCH_SpatialRelationInfo
 * @note ASN.1：PUCCH-SpatialRelationInfo；源文件第 10221 行。
 * @note PUCCH-SpatialRelationInfo ::= SEQUENCE { pucch-SpatialRelationInfoId, servingCellId, referenceSignal, pucch...
 */
struct PUCCH_SpatialRelationInfo {
    PUCCH_SpatialRelationInfoId pucch_SpatialRelationInfoId; /**< ASN.1 pucch-SpatialRelationInfoId；INTEGER (1..8)，位宽 3 bit。 */
    bool has_servingCellId; /**< servingCellId 是否存在。 */
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    PUCCH_SpatialRelationInfo_ReferenceSignal referenceSignal; /**< ASN.1 referenceSignal；结构体。 */
    PUCCH_PathlossReferenceRS_Id pucch_PathlossReferenceRS_Id; /**< ASN.1 pucch-PathlossReferenceRS-Id；INTEGER (0..3)，位宽 2 bit。 */
    P0_PUCCH_Id p0_PUCCH_Id; /**< ASN.1 p0-PUCCH-Id；INTEGER (1..8)，位宽 3 bit。 */
    PUCCH_SpatialRelationInfo_ClosedLoopIndex closedLoopIndex; /**< ASN.1 closedLoopIndex；枚举。 */
};


/**
 * @brief PUCCH_SpatialRelationInfoExt_r16
 * @note ASN.1：PUCCH-SpatialRelationInfoExt-r16；源文件第 10234 行。
 * @note PUCCH-SpatialRelationInfoExt-r16 ::= SEQUENCE { pucch-SpatialRelationInfoId-v1610, pucch-PathlossReferenceRS-Id-v1...
 */
struct PUCCH_SpatialRelationInfoExt_r16 {
    bool has_pucch_SpatialRelationInfoId_v1610; /**< pucch-SpatialRelationInfoId-v1610 是否存在。 */
    PUCCH_SpatialRelationInfoId_v1610 pucch_SpatialRelationInfoId_v1610; /**< ASN.1 pucch-SpatialRelationInfoId-v1610；INTEGER (9..64)，位宽 6 bit；OPTIONAL。 */
    bool has_pucch_PathlossReferenceRS_Id_v1610; /**< pucch-PathlossReferenceRS-Id-v1610 是否存在。 */
    PUCCH_PathlossReferenceRS_Id_v1610 pucch_PathlossReferenceRS_Id_v1610; /**< ASN.1 pucch-PathlossReferenceRS-Id-v1610；INTEGER (4..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16
 * @note ASN.1：betaOffsetsDCI-0-2-r16/dynamicDCI-0-2-r16/oneBit-r16；源文件第 10385 行。
 * @note SEQUENCE OF (size 2..2) OF BetaOffsets
 */
struct UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16 {
    BetaOffsets* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16
 * @note ASN.1：betaOffsetsDCI-0-2-r16/dynamicDCI-0-2-r16/twoBits-r16；源文件第 10386 行。
 * @note SEQUENCE OF (size 4..4) OF BetaOffsets
 */
struct UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16 {
    BetaOffsets* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16
 * @note ASN.1：betaOffsetsDCI-0-2-r16/dynamicDCI-0-2-r16；源文件第 10384 行。
 * @note CHOICE { oneBit-r16, twoBits-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag {
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_oneBit_r16 = 0, /**< ASN.1 oneBit-r16 */
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag_twoBits_r16 = 1, /**< ASN.1 twoBits-r16 */
} UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag;

struct UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16 {
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_OneBit_r16 oneBit_r16; /**< ASN.1 oneBit-r16 */
        UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16_TwoBits_r16 twoBits_r16; /**< ASN.1 twoBits-r16 */
    } u;
};


/**
 * @brief UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16
 * @note ASN.1：betaOffsetsDCI-0-2-r16；源文件第 10383 行。
 * @note CHOICE { dynamicDCI-0-2-r16, semiStaticDCI-0-2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag {
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_dynamicDCI_0_2_r16 = 0, /**< ASN.1 dynamicDCI-0-2-r16 */
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag_semiStaticDCI_0_2_r16 = 1, /**< ASN.1 semiStaticDCI-0-2-r16 */
} UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag;

struct UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16 {
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16_DynamicDCI_0_2_r16 dynamicDCI_0_2_r16; /**< ASN.1 dynamicDCI-0-2-r16 */
        BetaOffsets semiStaticDCI_0_2_r16; /**< ASN.1 semiStaticDCI-0-2-r16 */
    } u;
};


/**
 * @brief UCI_OnPUSCH_DCI_0_2_r16
 * @note ASN.1：UCI-OnPUSCH-DCI-0-2-r16；源文件第 10382 行。
 * @note UCI-OnPUSCH-DCI-0-2-r16 ::= SEQUENCE { betaOffsetsDCI-0-2-r16, scalingDCI-0-2-r16 }
 */
struct UCI_OnPUSCH_DCI_0_2_r16 {
    bool has_betaOffsetsDCI_0_2_r16; /**< betaOffsetsDCI-0-2-r16 是否存在。 */
    UCI_OnPUSCH_DCI_0_2_r16_BetaOffsetsDCI_0_2_r16 betaOffsetsDCI_0_2_r16; /**< ASN.1 betaOffsetsDCI-0-2-r16；结构体；OPTIONAL。 */
    UCI_OnPUSCH_DCI_0_2_r16_ScalingDCI_0_2_r16 scalingDCI_0_2_r16; /**< ASN.1 scalingDCI-0-2-r16；枚举。 */
};


/**
 * @brief MPE_Resource_r17_Mpe_ReferenceSignal_r17
 * @note ASN.1：mpe-ReferenceSignal-r17；源文件第 10422 行。
 * @note CHOICE { csi-RS-Resource-r17, ssb-Resource-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag {
    MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_csi_RS_Resource_r17 = 0, /**< ASN.1 csi-RS-Resource-r17 */
    MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag_ssb_Resource_r17 = 1, /**< ASN.1 ssb-Resource-r17 */
} MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag;

struct MPE_Resource_r17_Mpe_ReferenceSignal_r17 {
    MPE_Resource_r17_Mpe_ReferenceSignal_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NZP_CSI_RS_ResourceId csi_RS_Resource_r17; /**< ASN.1 csi-RS-Resource-r17 */
        SSB_Index ssb_Resource_r17; /**< ASN.1 ssb-Resource-r17 */
    } u;
};


/**
 * @brief MPE_Resource_r17
 * @note ASN.1：MPE-Resource-r17；源文件第 10418 行。
 * @note MPE-Resource-r17 ::= SEQUENCE { mpe-ResourceId-r17, cell-r17, additionalPCI-r17, mpe-ReferenceSign...
 */
struct MPE_Resource_r17 {
    MPE_ResourceId_r17 mpe_ResourceId_r17; /**< ASN.1 mpe-ResourceId-r17；INTEGER (1..64)，位宽 6 bit。 */
    bool has_cell_r17; /**< cell-r17 是否存在。 */
    ServCellIndex cell_r17; /**< ASN.1 cell-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_additionalPCI_r17; /**< additionalPCI-r17 是否存在。 */
    AdditionalPCIIndex_r17 additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
    MPE_Resource_r17_Mpe_ReferenceSignal_r17 mpe_ReferenceSignal_r17; /**< ASN.1 mpe-ReferenceSignal-r17；结构体。 */
};


/**
 * @brief P0_PUSCH_AlphaSet
 * @note ASN.1：P0-PUSCH-AlphaSet；源文件第 10490 行。
 * @note P0-PUSCH-AlphaSet ::= SEQUENCE { p0-PUSCH-AlphaSetId, p0, alpha }
 */
struct P0_PUSCH_AlphaSet {
    P0_PUSCH_AlphaSetId p0_PUSCH_AlphaSetId; /**< ASN.1 p0-PUSCH-AlphaSetId；INTEGER (0..29)，位宽 5 bit。 */
    bool has_p0; /**< p0 是否存在。 */
    int64_t p0; /**< ASN.1 p0；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_alpha; /**< alpha 是否存在。 */
    Alpha alpha; /**< ASN.1 alpha；枚举；OPTIONAL。 */
};


/**
 * @brief PUSCH_PathlossReferenceRS_ReferenceSignal
 * @note ASN.1：referenceSignal；源文件第 10500 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUSCH_PathlossReferenceRS_ReferenceSignal_Tag {
    PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    PUSCH_PathlossReferenceRS_ReferenceSignal_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} PUSCH_PathlossReferenceRS_ReferenceSignal_Tag;

struct PUSCH_PathlossReferenceRS_ReferenceSignal {
    PUSCH_PathlossReferenceRS_ReferenceSignal_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief PUSCH_PathlossReferenceRS
 * @note ASN.1：PUSCH-PathlossReferenceRS；源文件第 10498 行。
 * @note PUSCH-PathlossReferenceRS ::= SEQUENCE { pusch-PathlossReferenceRS-Id, referenceSignal }
 */
struct PUSCH_PathlossReferenceRS {
    PUSCH_PathlossReferenceRS_Id pusch_PathlossReferenceRS_Id; /**< ASN.1 pusch-PathlossReferenceRS-Id；INTEGER (0..3)，位宽 2 bit。 */
    PUSCH_PathlossReferenceRS_ReferenceSignal referenceSignal; /**< ASN.1 referenceSignal；结构体。 */
};


/**
 * @brief PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16
 * @note ASN.1：referenceSignal-r16；源文件第 10508 行。
 * @note CHOICE { ssb-Index-r16, csi-RS-Index-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag {
    PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_ssb_Index_r16 = 0, /**< ASN.1 ssb-Index-r16 */
    PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag_csi_RS_Index_r16 = 1, /**< ASN.1 csi-RS-Index-r16 */
} PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag;

struct PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16 {
    PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index_r16; /**< ASN.1 ssb-Index-r16 */
        NZP_CSI_RS_ResourceId csi_RS_Index_r16; /**< ASN.1 csi-RS-Index-r16 */
    } u;
};


/**
 * @brief PUSCH_PathlossReferenceRS_r16
 * @note ASN.1：PUSCH-PathlossReferenceRS-r16；源文件第 10506 行。
 * @note PUSCH-PathlossReferenceRS-r16 ::= SEQUENCE { pusch-PathlossReferenceRS-Id-r16, referenceSignal-r16 }
 */
struct PUSCH_PathlossReferenceRS_r16 {
    PUSCH_PathlossReferenceRS_Id_v1610 pusch_PathlossReferenceRS_Id_r16; /**< ASN.1 pusch-PathlossReferenceRS-Id-r16；INTEGER (4..63)，位宽 6 bit。 */
    PUSCH_PathlossReferenceRS_r16_ReferenceSignal_r16 referenceSignal_r16; /**< ASN.1 referenceSignal-r16；结构体。 */
};


/**
 * @brief DummyPathlossReferenceRS_v1710
 * @note ASN.1：DummyPathlossReferenceRS-v1710；源文件第 10514 行。
 * @note DummyPathlossReferenceRS-v1710 ::= SEQUENCE { pusch-PathlossReferenceRS-Id-r17, additionalPCI-r17 }
 */
struct DummyPathlossReferenceRS_v1710 {
    PUSCH_PathlossReferenceRS_Id_r17 pusch_PathlossReferenceRS_Id_r17; /**< ASN.1 pusch-PathlossReferenceRS-Id-r17；INTEGER (0..63)，位宽 6 bit。 */
    bool has_additionalPCI_r17; /**< additionalPCI-r17 是否存在。 */
    AdditionalPCIIndex_r17 additionalPCI_r17; /**< ASN.1 additionalPCI-r17；INTEGER (1..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SRI_PUSCH_PowerControl
 * @note ASN.1：SRI-PUSCH-PowerControl；源文件第 10525 行。
 * @note SRI-PUSCH-PowerControl ::= SEQUENCE { sri-PUSCH-PowerControlId, sri-PUSCH-PathlossReferenceRS-Id, sri-P0...
 */
struct SRI_PUSCH_PowerControl {
    SRI_PUSCH_PowerControlId sri_PUSCH_PowerControlId; /**< ASN.1 sri-PUSCH-PowerControlId；INTEGER (0..15)，位宽 4 bit。 */
    PUSCH_PathlossReferenceRS_Id sri_PUSCH_PathlossReferenceRS_Id; /**< ASN.1 sri-PUSCH-PathlossReferenceRS-Id；INTEGER (0..3)，位宽 2 bit。 */
    P0_PUSCH_AlphaSetId sri_P0_PUSCH_AlphaSetId; /**< ASN.1 sri-P0-PUSCH-AlphaSetId；INTEGER (0..29)，位宽 5 bit。 */
    SRI_PUSCH_PowerControl_Sri_PUSCH_ClosedLoopIndex sri_PUSCH_ClosedLoopIndex; /**< ASN.1 sri-PUSCH-ClosedLoopIndex；枚举。 */
};


/**
 * @brief P0_PUSCH_Set_r16
 * @note ASN.1：P0-PUSCH-Set-r16；源文件第 10554 行。
 * @note P0-PUSCH-Set-r16 ::= SEQUENCE { p0-PUSCH-SetId-r16, p0-List-r16 }
 */
struct P0_PUSCH_Set_r16 {
    P0_PUSCH_SetId_r16 p0_PUSCH_SetId_r16; /**< ASN.1 p0-PUSCH-SetId-r16；INTEGER (0..15)，位宽 4 bit。 */
    bool has_p0_List_r16; /**< p0-List-r16 是否存在。 */
    P0_PUSCH_r16* p0_List_r16_items; /**< ASN.1 p0-List-r16；SEQUENCE OF P0_PUSCH_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t p0_List_r16_count; /**< p0-List-r16 元素个数。 */
};


/**
 * @brief PUSCH_TimeDomainResourceAllocation
 * @note ASN.1：PUSCH-TimeDomainResourceAllocation；源文件第 10606 行。
 * @note PUSCH-TimeDomainResourceAllocation ::= SEQUENCE { k2, mappingType, startSymbolAndLength }
 */
struct PUSCH_TimeDomainResourceAllocation {
    bool has_k2; /**< k2 是否存在。 */
    int64_t k2; /**< ASN.1 k2；INTEGER (0..32)，位宽 6 bit；OPTIONAL。 */
    PUSCH_TimeDomainResourceAllocation_MappingType mappingType; /**< ASN.1 mappingType；枚举。 */
    int64_t startSymbolAndLength; /**< ASN.1 startSymbolAndLength；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief PUSCH_TimeDomainResourceAllocation_r16
 * @note ASN.1：PUSCH-TimeDomainResourceAllocation-r16；源文件第 10614 行。
 * @note PUSCH-TimeDomainResourceAllocation-r16 ::= SEQUENCE { k2-r16, puschAllocationList-r16 }
 */
struct PUSCH_TimeDomainResourceAllocation_r16 {
    bool has_k2_r16; /**< k2-r16 是否存在。 */
    int64_t k2_r16; /**< ASN.1 k2-r16；INTEGER (0..32)，位宽 6 bit；OPTIONAL。 */
    PUSCH_Allocation_r16* puschAllocationList_r16_items; /**< ASN.1 puschAllocationList-r16；SEQUENCE OF PUSCH_Allocation_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t puschAllocationList_r16_count; /**< puschAllocationList-r16 元素个数。 */
};


/**
 * @brief PUSCH_Allocation_r16_ExtGroup1
 * @note ASN.1：PUSCH_Allocation_r16_ExtGroup1；源文件第 10627 行。
 */
struct PUSCH_Allocation_r16_ExtGroup1 {
    bool has_numberOfRepetitionsExt_r17; /**< numberOfRepetitionsExt-r17 是否存在。 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfRepetitionsExt_r17 numberOfRepetitionsExt_r17; /**< ASN.1 numberOfRepetitionsExt-r17；枚举；OPTIONAL。 */
    bool has_numberOfSlotsTBoMS_r17; /**< numberOfSlotsTBoMS-r17 是否存在。 */
    PUSCH_Allocation_r16_ExtGroup1_NumberOfSlotsTBoMS_r17 numberOfSlotsTBoMS_r17; /**< ASN.1 numberOfSlotsTBoMS-r17；枚举；OPTIONAL。 */
    bool has_extendedK2_r17; /**< extendedK2-r17 是否存在。 */
    int64_t extendedK2_r17; /**< ASN.1 extendedK2-r17；INTEGER (0..128)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief PUSCH_Allocation_r16
 * @note ASN.1：PUSCH-Allocation-r16；源文件第 10620 行。
 * @note PUSCH-Allocation-r16 ::= SEQUENCE { mappingType-r16, startSymbolAndLength-r16, startSymbol-r16, length...
 */
struct PUSCH_Allocation_r16 {
    bool has_mappingType_r16; /**< mappingType-r16 是否存在。 */
    PUSCH_Allocation_r16_MappingType_r16 mappingType_r16; /**< ASN.1 mappingType-r16；枚举；OPTIONAL。 */
    bool has_startSymbolAndLength_r16; /**< startSymbolAndLength-r16 是否存在。 */
    int64_t startSymbolAndLength_r16; /**< ASN.1 startSymbolAndLength-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_startSymbol_r16; /**< startSymbol-r16 是否存在。 */
    int64_t startSymbol_r16; /**< ASN.1 startSymbol-r16；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_length_r16; /**< length-r16 是否存在。 */
    int64_t length_r16; /**< ASN.1 length-r16；INTEGER (1..14)，位宽 4 bit；OPTIONAL。 */
    bool has_numberOfRepetitions_r16; /**< numberOfRepetitions-r16 是否存在。 */
    PUSCH_Allocation_r16_NumberOfRepetitions_r16 numberOfRepetitions_r16; /**< ASN.1 numberOfRepetitions-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUSCH_Allocation_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief QuantityConfigRS
 * @note ASN.1：QuantityConfigRS；源文件第 10691 行。
 * @note QuantityConfigRS ::= SEQUENCE { ssb-FilterConfig, csi-RS-FilterConfig }
 */
struct QuantityConfigRS {
    FilterConfig ssb_FilterConfig; /**< ASN.1 ssb-FilterConfig；结构体。 */
    FilterConfig csi_RS_FilterConfig; /**< ASN.1 csi-RS-FilterConfig；结构体。 */
};


/**
 * @brief QuantityConfigNR
 * @note ASN.1：QuantityConfigNR；源文件第 10686 行。
 * @note QuantityConfigNR ::= SEQUENCE { quantityConfigCell, quantityConfigRS-Index }
 */
struct QuantityConfigNR {
    QuantityConfigRS quantityConfigCell; /**< ASN.1 quantityConfigCell；结构体。 */
    bool has_quantityConfigRS_Index; /**< quantityConfigRS-Index 是否存在。 */
    QuantityConfigRS quantityConfigRS_Index; /**< ASN.1 quantityConfigRS-Index；结构体；OPTIONAL。 */
};


/**
 * @brief CFRA_SSB_Resource_ExtGroup1
 * @note ASN.1：CFRA_SSB_Resource_ExtGroup1；源文件第 10870 行。
 */
struct CFRA_SSB_Resource_ExtGroup1 {
    bool has_msgA_PUSCH_Resource_Index_r16; /**< msgA-PUSCH-Resource-Index-r16 是否存在。 */
    int64_t msgA_PUSCH_Resource_Index_r16; /**< ASN.1 msgA-PUSCH-Resource-Index-r16；INTEGER (0..3071)，位宽 12 bit；OPTIONAL。 */
};


/**
 * @brief CFRA_SSB_Resource
 * @note ASN.1：CFRA-SSB-Resource；源文件第 10866 行。
 * @note CFRA-SSB-Resource ::= SEQUENCE { ssb, ra-PreambleIndex, msgA-PUSCH-Resource-Index-r16 }
 */
struct CFRA_SSB_Resource {
    SSB_Index ssb; /**< ASN.1 ssb；INTEGER (0..63)，位宽 6 bit。 */
    int64_t ra_PreambleIndex; /**< ASN.1 ra-PreambleIndex；INTEGER (0..63)，位宽 6 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CFRA_SSB_Resource_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CFRA_CSIRS_Resource
 * @note ASN.1：CFRA-CSIRS-Resource；源文件第 10876 行。
 * @note CFRA-CSIRS-Resource ::= SEQUENCE { csi-RS, ra-OccasionList, ra-PreambleIndex }
 */
struct CFRA_CSIRS_Resource {
    CSI_RS_Index csi_RS; /**< ASN.1 csi-RS；INTEGER (0..95)，位宽 7 bit。 */
    int64_t* ra_OccasionList_items; /**< ASN.1 ra-OccasionList；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ra_OccasionList_count; /**< ra-OccasionList 元素个数。 */
    int64_t ra_PreambleIndex; /**< ASN.1 ra-PreambleIndex；INTEGER (0..63)，位宽 6 bit。 */
};


/**
 * @brief RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18
 * @note ASN.1：prach-RootSequenceIndex-r18；源文件第 10934 行。
 * @note CHOICE { l839, l139 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag {
    RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l839 = 0, /**< ASN.1 l839 */
    RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag_l139 = 1, /**< ASN.1 l139 */
} RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag;

struct RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18 {
    RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t l839; /**< ASN.1 l839 */
        int64_t l139; /**< ASN.1 l139 */
    } u;
};


/**
 * @brief RACH_ConfigTwoTA_r18
 * @note ASN.1：RACH-ConfigTwoTA-r18；源文件第 10930 行。
 * @note RACH-ConfigTwoTA-r18 ::= SEQUENCE { rach-ConfigTwoTAIndex-r18, rach-ConfigGeneric-r18, ssb-perRACH-Occ...
 */
struct RACH_ConfigTwoTA_r18 {
    RACH_ConfigTwoTAIndex_r18 rach_ConfigTwoTAIndex_r18; /**< ASN.1 rach-ConfigTwoTAIndex-r18；INTEGER (1..7)，位宽 3 bit。 */
    RACH_ConfigGeneric rach_ConfigGeneric_r18; /**< ASN.1 rach-ConfigGeneric-r18；结构体。 */
    bool has_ssb_perRACH_Occasion_r18; /**< ssb-perRACH-Occasion-r18 是否存在。 */
    RACH_ConfigTwoTA_r18_Ssb_perRACH_Occasion_r18 ssb_perRACH_Occasion_r18; /**< ASN.1 ssb-perRACH-Occasion-r18；枚举；OPTIONAL。 */
    RACH_ConfigTwoTA_r18_Prach_RootSequenceIndex_r18 prach_RootSequenceIndex_r18; /**< ASN.1 prach-RootSequenceIndex-r18；结构体。 */
    bool has_msg1_SubcarrierSpacing_r18; /**< msg1-SubcarrierSpacing-r18 是否存在。 */
    SubcarrierSpacing msg1_SubcarrierSpacing_r18; /**< ASN.1 msg1-SubcarrierSpacing-r18；枚举；OPTIONAL。 */
};


/**
 * @brief RA_PrioritizationSliceInfo_r17
 * @note ASN.1：RA-PrioritizationSliceInfo-r17；源文件第 10963 行。
 * @note RA-PrioritizationSliceInfo-r17 ::= SEQUENCE { nsag-ID-List-r17, ra-Prioritization-r17 }
 */
struct RA_PrioritizationSliceInfo_r17 {
    NSAG_ID_r17* nsag_ID_List_r17_items; /**< ASN.1 nsag-ID-List-r17；SEQUENCE OF NSAG_ID_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nsag_ID_List_r17_count; /**< nsag-ID-List-r17 元素个数。 */
    RA_Prioritization ra_Prioritization_r17; /**< ASN.1 ra-Prioritization-r17；结构体。 */
};


/**
 * @brief DRB_ToAddMod_ExtGroup1
 * @note ASN.1：DRB_ToAddMod_ExtGroup1；源文件第 11020 行。
 */
struct DRB_ToAddMod_ExtGroup1 {
    bool has_daps_Config_r16; /**< daps-Config-r16 是否存在。 */
    DRB_ToAddMod_ExtGroup1_Daps_Config_r16 daps_Config_r16; /**< ASN.1 daps-Config-r16；枚举；OPTIONAL。 */
};


/**
 * @brief DRB_ToAddMod_ExtGroup2
 * @note ASN.1：DRB_ToAddMod_ExtGroup2；源文件第 11023 行。
 */
struct DRB_ToAddMod_ExtGroup2 {
    bool has_n3c_BearerAssociated_r18; /**< n3c-BearerAssociated-r18 是否存在。 */
    DRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18 n3c_BearerAssociated_r18; /**< ASN.1 n3c-BearerAssociated-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SDAP_Config
 * @note ASN.1：SDAP-Config；源文件第 12160 行。
 * @note SDAP-Config ::= SEQUENCE { pdu-Session, sdap-HeaderDL, sdap-HeaderUL, defaultDRB, mappedQoS-F...
 */
struct SDAP_Config {
    PDU_SessionID pdu_Session; /**< ASN.1 pdu-Session；INTEGER (0..255)，位宽 8 bit。 */
    SDAP_Config_Sdap_HeaderDL sdap_HeaderDL; /**< ASN.1 sdap-HeaderDL；枚举。 */
    SDAP_Config_Sdap_HeaderUL sdap_HeaderUL; /**< ASN.1 sdap-HeaderUL；枚举。 */
    bool defaultDRB; /**< ASN.1 defaultDRB；BOOLEAN，1 bit。 */
    bool has_mappedQoS_FlowsToAdd; /**< mappedQoS-FlowsToAdd 是否存在。 */
    QFI* mappedQoS_FlowsToAdd_items; /**< ASN.1 mappedQoS-FlowsToAdd；SEQUENCE OF QFI，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mappedQoS_FlowsToAdd_count; /**< mappedQoS-FlowsToAdd 元素个数。 */
    bool has_mappedQoS_FlowsToRelease; /**< mappedQoS-FlowsToRelease 是否存在。 */
    QFI* mappedQoS_FlowsToRelease_items; /**< ASN.1 mappedQoS-FlowsToRelease；SEQUENCE OF QFI，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mappedQoS_FlowsToRelease_count; /**< mappedQoS-FlowsToRelease 元素个数。 */
};


/**
 * @brief DRB_ToAddMod_CnAssociation
 * @note ASN.1：cnAssociation；源文件第 11011 行。
 * @note CHOICE { eps-BearerIdentity, sdap-Config }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRB_ToAddMod_CnAssociation_Tag {
    DRB_ToAddMod_CnAssociation_Tag_eps_BearerIdentity = 0, /**< ASN.1 eps-BearerIdentity */
    DRB_ToAddMod_CnAssociation_Tag_sdap_Config = 1, /**< ASN.1 sdap-Config */
} DRB_ToAddMod_CnAssociation_Tag;

struct DRB_ToAddMod_CnAssociation {
    DRB_ToAddMod_CnAssociation_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t eps_BearerIdentity; /**< ASN.1 eps-BearerIdentity */
        SDAP_Config sdap_Config; /**< ASN.1 sdap-Config */
    } u;
};


/**
 * @brief DRB_ToAddMod
 * @note ASN.1：DRB-ToAddMod；源文件第 11010 行。
 * @note DRB-ToAddMod ::= SEQUENCE { cnAssociation, drb-Identity, reestablishPDCP, recoverPDCP, pdcp-Co...
 */
struct DRB_ToAddMod {
    bool has_cnAssociation; /**< cnAssociation 是否存在。 */
    DRB_ToAddMod_CnAssociation cnAssociation; /**< ASN.1 cnAssociation；结构体；OPTIONAL。 */
    DRB_Identity drb_Identity; /**< ASN.1 drb-Identity；INTEGER (1..32)，位宽 5 bit。 */
    bool has_reestablishPDCP; /**< reestablishPDCP 是否存在。 */
    DRB_ToAddMod_ReestablishPDCP reestablishPDCP; /**< ASN.1 reestablishPDCP；枚举；OPTIONAL。 */
    bool has_recoverPDCP; /**< recoverPDCP 是否存在。 */
    DRB_ToAddMod_RecoverPDCP recoverPDCP; /**< ASN.1 recoverPDCP；枚举；OPTIONAL。 */
    bool has_pdcp_Config; /**< pdcp-Config 是否存在。 */
    PDCP_Config pdcp_Config; /**< ASN.1 pdcp-Config；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DRB_ToAddMod_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    DRB_ToAddMod_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief TMGI_r17_Plmn_Id_r17
 * @note ASN.1：plmn-Id-r17；源文件第 23678 行。
 * @note CHOICE { plmn-Index, explicitValue }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum TMGI_r17_Plmn_Id_r17_Tag {
    TMGI_r17_Plmn_Id_r17_Tag_plmn_Index = 0, /**< ASN.1 plmn-Index */
    TMGI_r17_Plmn_Id_r17_Tag_explicitValue = 1, /**< ASN.1 explicitValue */
} TMGI_r17_Plmn_Id_r17_Tag;

struct TMGI_r17_Plmn_Id_r17 {
    TMGI_r17_Plmn_Id_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t plmn_Index; /**< ASN.1 plmn-Index */
        PLMN_Identity explicitValue; /**< ASN.1 explicitValue */
    } u;
};


/**
 * @brief TMGI_r17
 * @note ASN.1：TMGI-r17；源文件第 23677 行。
 * @note TMGI-r17 ::= SEQUENCE { plmn-Id-r17, serviceId-r17 }
 */
struct TMGI_r17 {
    TMGI_r17_Plmn_Id_r17 plmn_Id_r17; /**< ASN.1 plmn-Id-r17；结构体。 */
    OctetString serviceId_r17; /**< ASN.1 serviceId-r17；SIZE (3)，定长。 */
};


/**
 * @brief MRB_ToAddMod_r17
 * @note ASN.1：MRB-ToAddMod-r17；源文件第 11037 行。
 * @note MRB-ToAddMod-r17 ::= SEQUENCE { mbs-SessionId-r17, mrb-Identity-r17, mrb-IdentityNew-r17, reestabl...
 */
struct MRB_ToAddMod_r17 {
    bool has_mbs_SessionId_r17; /**< mbs-SessionId-r17 是否存在。 */
    TMGI_r17 mbs_SessionId_r17; /**< ASN.1 mbs-SessionId-r17；结构体；OPTIONAL。 */
    MRB_Identity_r17 mrb_Identity_r17; /**< ASN.1 mrb-Identity-r17；INTEGER (1..512)，位宽 9 bit。 */
    bool has_mrb_IdentityNew_r17; /**< mrb-IdentityNew-r17 是否存在。 */
    MRB_Identity_r17 mrb_IdentityNew_r17; /**< ASN.1 mrb-IdentityNew-r17；INTEGER (1..512)，位宽 9 bit；OPTIONAL。 */
    bool has_reestablishPDCP_r17; /**< reestablishPDCP-r17 是否存在。 */
    MRB_ToAddMod_r17_ReestablishPDCP_r17 reestablishPDCP_r17; /**< ASN.1 reestablishPDCP-r17；枚举；OPTIONAL。 */
    bool has_recoverPDCP_r17; /**< recoverPDCP-r17 是否存在。 */
    MRB_ToAddMod_r17_RecoverPDCP_r17 recoverPDCP_r17; /**< ASN.1 recoverPDCP-r17；枚举；OPTIONAL。 */
    bool has_pdcp_Config_r17; /**< pdcp-Config-r17 是否存在。 */
    PDCP_Config pdcp_Config_r17; /**< ASN.1 pdcp-Config-r17；结构体；OPTIONAL。 */
};


/**
 * @brief RadioLinkMonitoringRS_DetectionResource
 * @note ASN.1：detectionResource；源文件第 11074 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RadioLinkMonitoringRS_DetectionResource_Tag {
    RadioLinkMonitoringRS_DetectionResource_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    RadioLinkMonitoringRS_DetectionResource_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} RadioLinkMonitoringRS_DetectionResource_Tag;

struct RadioLinkMonitoringRS_DetectionResource {
    RadioLinkMonitoringRS_DetectionResource_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief RadioLinkMonitoringRS
 * @note ASN.1：RadioLinkMonitoringRS；源文件第 11071 行。
 * @note RadioLinkMonitoringRS ::= SEQUENCE { radioLinkMonitoringRS-Id, purpose, detectionResource }
 */
struct RadioLinkMonitoringRS {
    RadioLinkMonitoringRS_Id radioLinkMonitoringRS_Id; /**< ASN.1 radioLinkMonitoringRS-Id；INTEGER (0..9)，位宽 4 bit。 */
    RadioLinkMonitoringRS_Purpose purpose; /**< ASN.1 purpose；枚举。 */
    RadioLinkMonitoringRS_DetectionResource detectionResource; /**< ASN.1 detectionResource；结构体。 */
};


/**
 * @brief BeamLinkMonitoringRS_r17_DetectionResource_r17
 * @note ASN.1：detectionResource-r17；源文件第 11093 行。
 * @note CHOICE { ssb-Index, csi-RS-Index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag {
    BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
} BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag;

struct BeamLinkMonitoringRS_r17_DetectionResource_r17 {
    BeamLinkMonitoringRS_r17_DetectionResource_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
    } u;
};


/**
 * @brief BeamLinkMonitoringRS_r17
 * @note ASN.1：BeamLinkMonitoringRS-r17；源文件第 11091 行。
 * @note BeamLinkMonitoringRS-r17 ::= SEQUENCE { beamLinkMonitoringRS-Id-r17, detectionResource-r17 }
 */
struct BeamLinkMonitoringRS_r17 {
    BeamLinkMonitoringRS_Id_r17 beamLinkMonitoringRS_Id_r17; /**< ASN.1 beamLinkMonitoringRS-Id-r17；INTEGER (0..63)，位宽 6 bit。 */
    BeamLinkMonitoringRS_r17_DetectionResource_r17 detectionResource_r17; /**< ASN.1 detectionResource-r17；结构体。 */
};


/**
 * @brief RateMatchPattern_ExtGroup1
 * @note ASN.1：RateMatchPattern_ExtGroup1；源文件第 11141 行。
 */
struct RateMatchPattern_ExtGroup1 {
    bool has_controlResourceSet_r16; /**< controlResourceSet-r16 是否存在。 */
    ControlResourceSetId_r16 controlResourceSet_r16; /**< ASN.1 controlResourceSet-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock
 * @note ASN.1：patternType/bitmaps/symbolsInResourceBlock；源文件第 11121 行。
 * @note CHOICE { oneSlot, twoSlots }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag {
    RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_oneSlot = 0, /**< ASN.1 oneSlot */
    RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag_twoSlots = 1, /**< ASN.1 twoSlots */
} RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag;

struct RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock {
    RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString oneSlot; /**< ASN.1 oneSlot */
        BitString twoSlots; /**< ASN.1 twoSlots */
    } u;
};


/**
 * @brief RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern
 * @note ASN.1：patternType/bitmaps/periodicityAndPattern；源文件第 11125 行。
 * @note CHOICE { n2, n4, n5, n8, n10, n20, n40 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag {
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n2 = 0, /**< ASN.1 n2 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n4 = 1, /**< ASN.1 n4 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n5 = 2, /**< ASN.1 n5 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n8 = 3, /**< ASN.1 n8 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n10 = 4, /**< ASN.1 n10 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n20 = 5, /**< ASN.1 n20 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag_n40 = 6, /**< ASN.1 n40 */
} RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag;

struct RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern {
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString n2; /**< ASN.1 n2 */
        BitString n4; /**< ASN.1 n4 */
        BitString n5; /**< ASN.1 n5 */
        BitString n8; /**< ASN.1 n8 */
        BitString n10; /**< ASN.1 n10 */
        BitString n20; /**< ASN.1 n20 */
        BitString n40; /**< ASN.1 n40 */
    } u;
};


/**
 * @brief RateMatchPattern_PatternType_Bitmaps
 * @note ASN.1：patternType/bitmaps；源文件第 11119 行。
 * @note SEQUENCE { resourceBlocks, symbolsInResourceBlock, periodicityAndPattern }
 */
struct RateMatchPattern_PatternType_Bitmaps {
    BitString resourceBlocks; /**< ASN.1 resourceBlocks；SIZE (275)，定长。 */
    RateMatchPattern_PatternType_Bitmaps_SymbolsInResourceBlock symbolsInResourceBlock; /**< ASN.1 symbolsInResourceBlock；结构体。 */
    bool has_periodicityAndPattern; /**< periodicityAndPattern 是否存在。 */
    RateMatchPattern_PatternType_Bitmaps_PeriodicityAndPattern periodicityAndPattern; /**< ASN.1 periodicityAndPattern；结构体；OPTIONAL。 */
};


/**
 * @brief RateMatchPattern_PatternType
 * @note ASN.1：patternType；源文件第 11118 行。
 * @note CHOICE { bitmaps, controlResourceSet }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RateMatchPattern_PatternType_Tag {
    RateMatchPattern_PatternType_Tag_bitmaps = 0, /**< ASN.1 bitmaps */
    RateMatchPattern_PatternType_Tag_controlResourceSet = 1, /**< ASN.1 controlResourceSet */
} RateMatchPattern_PatternType_Tag;

struct RateMatchPattern_PatternType {
    RateMatchPattern_PatternType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RateMatchPattern_PatternType_Bitmaps bitmaps; /**< ASN.1 bitmaps */
        ControlResourceSetId controlResourceSet; /**< ASN.1 controlResourceSet */
    } u;
};


/**
 * @brief RateMatchPattern
 * @note ASN.1：RateMatchPattern；源文件第 11115 行。
 * @note RateMatchPattern ::= SEQUENCE { rateMatchPatternId, patternType, subcarrierSpacing, dummy, control...
 */
struct RateMatchPattern {
    RateMatchPatternId rateMatchPatternId; /**< ASN.1 rateMatchPatternId；INTEGER (0..3)，位宽 2 bit。 */
    RateMatchPattern_PatternType patternType; /**< ASN.1 patternType；结构体。 */
    bool has_subcarrierSpacing; /**< subcarrierSpacing 是否存在。 */
    SubcarrierSpacing subcarrierSpacing; /**< ASN.1 subcarrierSpacing；枚举；OPTIONAL。 */
    RateMatchPattern_Dummy dummy; /**< ASN.1 dummy；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RateMatchPattern_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ReportCGI_EUTRA_ExtGroup1
 * @note ASN.1：ReportCGI_EUTRA_ExtGroup1；源文件第 11247 行。
 */
struct ReportCGI_EUTRA_ExtGroup1 {
    bool has_useAutonomousGaps_r16; /**< useAutonomousGaps-r16 是否存在。 */
    ReportCGI_EUTRA_ExtGroup1_UseAutonomousGaps_r16 useAutonomousGaps_r16; /**< ASN.1 useAutonomousGaps-r16；枚举；OPTIONAL。 */
};


/**
 * @brief ReportCGI_EUTRA
 * @note ASN.1：ReportCGI-EUTRA；源文件第 11244 行。
 * @note ReportCGI-EUTRA ::= SEQUENCE { cellForWhichToReportCGI, useAutonomousGaps-r16 }
 */
struct ReportCGI_EUTRA {
    EUTRA_PhysCellId cellForWhichToReportCGI; /**< ASN.1 cellForWhichToReportCGI；INTEGER (0..503)，位宽 9 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ReportCGI_EUTRA_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ReportSFTD_EUTRA
 * @note ASN.1：ReportSFTD-EUTRA；源文件第 11252 行。
 * @note ReportSFTD-EUTRA ::= SEQUENCE { reportSFTD-Meas, reportRSRP }
 */
struct ReportSFTD_EUTRA {
    bool reportSFTD_Meas; /**< ASN.1 reportSFTD-Meas；BOOLEAN，1 bit。 */
    bool reportRSRP; /**< ASN.1 reportRSRP；BOOLEAN，1 bit。 */
};


/**
 * @brief MeasReportQuantityUTRA_FDD_r16
 * @note ASN.1：MeasReportQuantityUTRA-FDD-r16；源文件第 11375 行。
 * @note MeasReportQuantityUTRA-FDD-r16 ::= SEQUENCE { cpich-RSCP, cpich-EcN0 }
 */
struct MeasReportQuantityUTRA_FDD_r16 {
    bool cpich_RSCP; /**< ASN.1 cpich-RSCP；BOOLEAN，1 bit。 */
    bool cpich_EcN0; /**< ASN.1 cpich-EcN0；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfigInterRAT_ExtGroup1
 * @note ASN.1：EventTriggerConfigInterRAT_ExtGroup1；源文件第 11331 行。
 */
struct EventTriggerConfigInterRAT_ExtGroup1 {
    bool has_reportQuantityUTRA_FDD_r16; /**< reportQuantityUTRA-FDD-r16 是否存在。 */
    MeasReportQuantityUTRA_FDD_r16 reportQuantityUTRA_FDD_r16; /**< ASN.1 reportQuantityUTRA-FDD-r16；结构体；OPTIONAL。 */
};


/**
 * @brief EventTriggerConfigInterRAT_ExtGroup2
 * @note ASN.1：EventTriggerConfigInterRAT_ExtGroup2；源文件第 11334 行。
 */
struct EventTriggerConfigInterRAT_ExtGroup2 {
    bool has_includeCommonLocationInfo_r16; /**< includeCommonLocationInfo-r16 是否存在。 */
    EventTriggerConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16 includeCommonLocationInfo_r16; /**< ASN.1 includeCommonLocationInfo-r16；枚举；OPTIONAL。 */
    bool has_includeBT_Meas_r16; /**< includeBT-Meas-r16 是否存在。 */
    SetupRelease_BT_NameList_r16 includeBT_Meas_r16; /**< ASN.1 includeBT-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeWLAN_Meas_r16; /**< includeWLAN-Meas-r16 是否存在。 */
    SetupRelease_WLAN_NameList_r16 includeWLAN_Meas_r16; /**< ASN.1 includeWLAN-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeSensor_Meas_r16; /**< includeSensor-Meas-r16 是否存在。 */
    SetupRelease_Sensor_NameList_r16 includeSensor_Meas_r16; /**< ASN.1 includeSensor-Meas-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_MeasReportQuantity_r16
 * @note ASN.1：SL-MeasReportQuantity-r16；源文件第 22977 行。
 * @note SL-MeasReportQuantity-r16 ::= CHOICE { sl-RSRP-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_MeasReportQuantity_r16_Tag {
    SL_MeasReportQuantity_r16_Tag_sl_RSRP_r16 = 0, /**< ASN.1 sl-RSRP-r16 */
} SL_MeasReportQuantity_r16_Tag;

struct SL_MeasReportQuantity_r16 {
    SL_MeasReportQuantity_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        bool sl_RSRP_r16; /**< ASN.1 sl-RSRP-r16 */
    } u;
};


/**
 * @brief EventTriggerConfigInterRAT_ExtGroup3
 * @note ASN.1：EventTriggerConfigInterRAT_ExtGroup3；源文件第 11340 行。
 */
struct EventTriggerConfigInterRAT_ExtGroup3 {
    bool has_reportQuantityRelay_r17; /**< reportQuantityRelay-r17 是否存在。 */
    SL_MeasReportQuantity_r16 reportQuantityRelay_r17; /**< ASN.1 reportQuantityRelay-r17；结构体；OPTIONAL。 */
};


/**
 * @brief EventTriggerConfigInterRAT_ExtGroup4
 * @note ASN.1：EventTriggerConfigInterRAT_ExtGroup4；源文件第 11343 行。
 */
struct EventTriggerConfigInterRAT_ExtGroup4 {
    bool has_cellIndividualOffsetList_r18; /**< cellIndividualOffsetList-r18 是否存在。 */
    CellIndividualOffsetList_EUTRA_r18* cellIndividualOffsetList_r18_items; /**< ASN.1 cellIndividualOffsetList-r18；SEQUENCE OF CellIndividualOffsetList_EUTRA_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cellIndividualOffsetList_r18_count; /**< cellIndividualOffsetList-r18 元素个数。 */
};


/**
 * @brief MeasReportQuantity
 * @note ASN.1：MeasReportQuantity；源文件第 11707 行。
 * @note MeasReportQuantity ::= SEQUENCE { rsrp, rsrq, sinr }
 */
struct MeasReportQuantity {
    bool rsrp; /**< ASN.1 rsrp；BOOLEAN，1 bit。 */
    bool rsrq; /**< ASN.1 rsrq；BOOLEAN，1 bit。 */
    bool sinr; /**< ASN.1 sinr；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventB1
 * @note ASN.1：eventId/eventB1；源文件第 11260 行。
 * @note SEQUENCE { b1-ThresholdEUTRA, reportOnLeave, hysteresis, timeToTrigger }
 */
struct EventTriggerConfigInterRAT_EventId_EventB1 {
    MeasTriggerQuantityEUTRA b1_ThresholdEUTRA; /**< ASN.1 b1-ThresholdEUTRA；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventB2
 * @note ASN.1：eventId/eventB2；源文件第 11267 行。
 * @note SEQUENCE { b2-Threshold1, b2-Threshold2EUTRA, reportOnLeave, hysteresis, time...
 */
struct EventTriggerConfigInterRAT_EventId_EventB2 {
    MeasTriggerQuantity b2_Threshold1; /**< ASN.1 b2-Threshold1；结构体。 */
    MeasTriggerQuantityEUTRA b2_Threshold2EUTRA; /**< ASN.1 b2-Threshold2EUTRA；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief MeasTriggerQuantityUTRA_FDD_r16
 * @note ASN.1：MeasTriggerQuantityUTRA-FDD-r16；源文件第 11370 行。
 * @note MeasTriggerQuantityUTRA-FDD-r16 ::= CHOICE { utra-FDD-RSCP-r16, utra-FDD-EcN0-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasTriggerQuantityUTRA_FDD_r16_Tag {
    MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_RSCP_r16 = 0, /**< ASN.1 utra-FDD-RSCP-r16 */
    MeasTriggerQuantityUTRA_FDD_r16_Tag_utra_FDD_EcN0_r16 = 1, /**< ASN.1 utra-FDD-EcN0-r16 */
} MeasTriggerQuantityUTRA_FDD_r16_Tag;

struct MeasTriggerQuantityUTRA_FDD_r16 {
    MeasTriggerQuantityUTRA_FDD_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t utra_FDD_RSCP_r16; /**< ASN.1 utra-FDD-RSCP-r16 */
        int64_t utra_FDD_EcN0_r16; /**< ASN.1 utra-FDD-EcN0-r16 */
    } u;
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16
 * @note ASN.1：eventId/eventB1-UTRA-FDD-r16；源文件第 11277 行。
 * @note SEQUENCE { b1-ThresholdUTRA-FDD-r16, reportOnLeave-r16, hysteresis-r16, timeT...
 */
struct EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16 {
    MeasTriggerQuantityUTRA_FDD_r16 b1_ThresholdUTRA_FDD_r16; /**< ASN.1 b1-ThresholdUTRA-FDD-r16；结构体。 */
    bool reportOnLeave_r16; /**< ASN.1 reportOnLeave-r16；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r16; /**< ASN.1 hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r16; /**< ASN.1 timeToTrigger-r16；枚举。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16
 * @note ASN.1：eventId/eventB2-UTRA-FDD-r16；源文件第 11284 行。
 * @note SEQUENCE { b2-Threshold1-r16, b2-Threshold2UTRA-FDD-r16, reportOnLeave-r16, h...
 */
struct EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16 {
    MeasTriggerQuantity b2_Threshold1_r16; /**< ASN.1 b2-Threshold1-r16；结构体。 */
    MeasTriggerQuantityUTRA_FDD_r16 b2_Threshold2UTRA_FDD_r16; /**< ASN.1 b2-Threshold2UTRA-FDD-r16；结构体。 */
    bool reportOnLeave_r16; /**< ASN.1 reportOnLeave-r16；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r16; /**< ASN.1 hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r16; /**< ASN.1 timeToTrigger-r16；枚举。 */
};


/**
 * @brief SL_MeasTriggerQuantity_r16
 * @note ASN.1：SL-MeasTriggerQuantity-r16；源文件第 22982 行。
 * @note SL-MeasTriggerQuantity-r16 ::= CHOICE { sl-RSRP-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_MeasTriggerQuantity_r16_Tag {
    SL_MeasTriggerQuantity_r16_Tag_sl_RSRP_r16 = 0, /**< ASN.1 sl-RSRP-r16 */
} SL_MeasTriggerQuantity_r16_Tag;

struct SL_MeasTriggerQuantity_r16 {
    SL_MeasTriggerQuantity_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RSRP_Range sl_RSRP_r16; /**< ASN.1 sl-RSRP-r16 */
    } u;
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17
 * @note ASN.1：eventId/eventY1-Relay-r17；源文件第 11294 行。
 * @note SEQUENCE { y1-Threshold1-r17, y1-Threshold2-Relay-r17, reportOnLeave-r17, hys...
 */
struct EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17 {
    MeasTriggerQuantity y1_Threshold1_r17; /**< ASN.1 y1-Threshold1-r17；结构体。 */
    SL_MeasTriggerQuantity_r16 y1_Threshold2_Relay_r17; /**< ASN.1 y1-Threshold2-Relay-r17；结构体。 */
    bool reportOnLeave_r17; /**< ASN.1 reportOnLeave-r17；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r17; /**< ASN.1 hysteresis-r17；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17
 * @note ASN.1：eventId/eventY2-Relay-r17；源文件第 11302 行。
 * @note SEQUENCE { y2-Threshold-Relay-r17, reportOnLeave-r17, hysteresis-r17, timeToT...
 */
struct EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17 {
    SL_MeasTriggerQuantity_r16 y2_Threshold_Relay_r17; /**< ASN.1 y2-Threshold-Relay-r17；结构体。 */
    bool reportOnLeave_r17; /**< ASN.1 reportOnLeave-r17；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r17; /**< ASN.1 hysteresis-r17；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18
 * @note ASN.1：eventId/eventZ1-Relay-r18/z1-Threshold1-Relay-r18；源文件第 11312 行。
 * @note SEQUENCE { sl-RSRP-r18, sd-RSRP-r18 }
 */
struct EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18 {
    SL_MeasTriggerQuantity_r16 sl_RSRP_r18; /**< ASN.1 sl-RSRP-r18；结构体。 */
    bool has_sd_RSRP_r18; /**< sd-RSRP-r18 是否存在。 */
    SL_MeasTriggerQuantity_r16 sd_RSRP_r18; /**< ASN.1 sd-RSRP-r18；结构体；OPTIONAL。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18
 * @note ASN.1：eventId/eventZ1-Relay-r18；源文件第 11311 行。
 * @note SEQUENCE { z1-Threshold1-Relay-r18, z1-Threshold2-Relay-r18, reportOnLeave-r1...
 */
struct EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18 {
    EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18_Z1_Threshold1_Relay_r18 z1_Threshold1_Relay_r18; /**< ASN.1 z1-Threshold1-Relay-r18；结构体。 */
    SL_MeasTriggerQuantity_r16 z1_Threshold2_Relay_r18; /**< ASN.1 z1-Threshold2-Relay-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r18; /**< ASN.1 hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
};


/**
 * @brief EventTriggerConfigInterRAT_EventId
 * @note ASN.1：eventId；源文件第 11259 行。
 * @note CHOICE { eventB1, eventB2, eventB1-UTRA-FDD-r16, eventB2-UTRA-FDD-r16, eventY...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EventTriggerConfigInterRAT_EventId_Tag {
    EventTriggerConfigInterRAT_EventId_Tag_eventB1 = 0, /**< ASN.1 eventB1 */
    EventTriggerConfigInterRAT_EventId_Tag_eventB2 = 1, /**< ASN.1 eventB2 */
    EventTriggerConfigInterRAT_EventId_Tag_eventB1_UTRA_FDD_r16 = 2, /**< ASN.1 eventB1-UTRA-FDD-r16（扩展备选） */
    EventTriggerConfigInterRAT_EventId_Tag_eventB2_UTRA_FDD_r16 = 3, /**< ASN.1 eventB2-UTRA-FDD-r16（扩展备选） */
    EventTriggerConfigInterRAT_EventId_Tag_eventY1_Relay_r17 = 4, /**< ASN.1 eventY1-Relay-r17（扩展备选） */
    EventTriggerConfigInterRAT_EventId_Tag_eventY2_Relay_r17 = 5, /**< ASN.1 eventY2-Relay-r17（扩展备选） */
    EventTriggerConfigInterRAT_EventId_Tag_eventZ1_Relay_r18 = 6, /**< ASN.1 eventZ1-Relay-r18（扩展备选） */
} EventTriggerConfigInterRAT_EventId_Tag;

struct EventTriggerConfigInterRAT_EventId {
    EventTriggerConfigInterRAT_EventId_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        EventTriggerConfigInterRAT_EventId_EventB1 eventB1; /**< ASN.1 eventB1 */
        EventTriggerConfigInterRAT_EventId_EventB2 eventB2; /**< ASN.1 eventB2 */
        EventTriggerConfigInterRAT_EventId_EventB1_UTRA_FDD_r16 eventB1_UTRA_FDD_r16; /**< ASN.1 eventB1-UTRA-FDD-r16 */
        EventTriggerConfigInterRAT_EventId_EventB2_UTRA_FDD_r16 eventB2_UTRA_FDD_r16; /**< ASN.1 eventB2-UTRA-FDD-r16 */
        EventTriggerConfigInterRAT_EventId_EventY1_Relay_r17 eventY1_Relay_r17; /**< ASN.1 eventY1-Relay-r17 */
        EventTriggerConfigInterRAT_EventId_EventY2_Relay_r17 eventY2_Relay_r17; /**< ASN.1 eventY2-Relay-r17 */
        EventTriggerConfigInterRAT_EventId_EventZ1_Relay_r18 eventZ1_Relay_r18; /**< ASN.1 eventZ1-Relay-r18 */
    } u;
};


/**
 * @brief EventTriggerConfigInterRAT
 * @note ASN.1：EventTriggerConfigInterRAT；源文件第 11258 行。
 * @note EventTriggerConfigInterRAT ::= SEQUENCE { eventId, rsType, reportInterval, reportAmount, reportQuantity, max...
 */
struct EventTriggerConfigInterRAT {
    EventTriggerConfigInterRAT_EventId eventId; /**< ASN.1 eventId；结构体。 */
    NR_RS_Type rsType; /**< ASN.1 rsType；枚举。 */
    ReportInterval reportInterval; /**< ASN.1 reportInterval；枚举。 */
    EventTriggerConfigInterRAT_ReportAmount reportAmount; /**< ASN.1 reportAmount；枚举。 */
    MeasReportQuantity reportQuantity; /**< ASN.1 reportQuantity；结构体。 */
    int64_t maxReportCells; /**< ASN.1 maxReportCells；INTEGER (1..8)，位宽 3 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    EventTriggerConfigInterRAT_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    EventTriggerConfigInterRAT_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    EventTriggerConfigInterRAT_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    EventTriggerConfigInterRAT_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PeriodicalReportConfigInterRAT_ExtGroup1
 * @note ASN.1：PeriodicalReportConfigInterRAT_ExtGroup1；源文件第 11354 行。
 */
struct PeriodicalReportConfigInterRAT_ExtGroup1 {
    bool has_reportQuantityUTRA_FDD_r16; /**< reportQuantityUTRA-FDD-r16 是否存在。 */
    MeasReportQuantityUTRA_FDD_r16 reportQuantityUTRA_FDD_r16; /**< ASN.1 reportQuantityUTRA-FDD-r16；结构体；OPTIONAL。 */
};


/**
 * @brief PeriodicalReportConfigInterRAT_ExtGroup2
 * @note ASN.1：PeriodicalReportConfigInterRAT_ExtGroup2；源文件第 11357 行。
 */
struct PeriodicalReportConfigInterRAT_ExtGroup2 {
    bool has_includeCommonLocationInfo_r16; /**< includeCommonLocationInfo-r16 是否存在。 */
    PeriodicalReportConfigInterRAT_ExtGroup2_IncludeCommonLocationInfo_r16 includeCommonLocationInfo_r16; /**< ASN.1 includeCommonLocationInfo-r16；枚举；OPTIONAL。 */
    bool has_includeBT_Meas_r16; /**< includeBT-Meas-r16 是否存在。 */
    SetupRelease_BT_NameList_r16 includeBT_Meas_r16; /**< ASN.1 includeBT-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeWLAN_Meas_r16; /**< includeWLAN-Meas-r16 是否存在。 */
    SetupRelease_WLAN_NameList_r16 includeWLAN_Meas_r16; /**< ASN.1 includeWLAN-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeSensor_Meas_r16; /**< includeSensor-Meas-r16 是否存在。 */
    SetupRelease_Sensor_NameList_r16 includeSensor_Meas_r16; /**< ASN.1 includeSensor-Meas-r16；结构体；OPTIONAL。 */
};


/**
 * @brief PeriodicalReportConfigInterRAT_ExtGroup3
 * @note ASN.1：PeriodicalReportConfigInterRAT_ExtGroup3；源文件第 11363 行。
 */
struct PeriodicalReportConfigInterRAT_ExtGroup3 {
    bool has_reportQuantityRelay_r17; /**< reportQuantityRelay-r17 是否存在。 */
    SL_MeasReportQuantity_r16 reportQuantityRelay_r17; /**< ASN.1 reportQuantityRelay-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PeriodicalReportConfigInterRAT
 * @note ASN.1：PeriodicalReportConfigInterRAT；源文件第 11348 行。
 * @note PeriodicalReportConfigInterRAT ::= SEQUENCE { reportInterval, reportAmount, reportQuantity, maxReportCells, repo...
 */
struct PeriodicalReportConfigInterRAT {
    ReportInterval reportInterval; /**< ASN.1 reportInterval；枚举。 */
    PeriodicalReportConfigInterRAT_ReportAmount reportAmount; /**< ASN.1 reportAmount；枚举。 */
    MeasReportQuantity reportQuantity; /**< ASN.1 reportQuantity；结构体。 */
    int64_t maxReportCells; /**< ASN.1 maxReportCells；INTEGER (1..8)，位宽 3 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PeriodicalReportConfigInterRAT_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PeriodicalReportConfigInterRAT_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PeriodicalReportConfigInterRAT_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ReportConfigInterRAT_ReportType
 * @note ASN.1：reportType；源文件第 11235 行。
 * @note CHOICE { periodical, eventTriggered, reportCGI, reportSFTD }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ReportConfigInterRAT_ReportType_Tag {
    ReportConfigInterRAT_ReportType_Tag_periodical = 0, /**< ASN.1 periodical */
    ReportConfigInterRAT_ReportType_Tag_eventTriggered = 1, /**< ASN.1 eventTriggered */
    ReportConfigInterRAT_ReportType_Tag_reportCGI = 2, /**< ASN.1 reportCGI */
    ReportConfigInterRAT_ReportType_Tag_reportSFTD = 3, /**< ASN.1 reportSFTD（扩展备选） */
} ReportConfigInterRAT_ReportType_Tag;

struct ReportConfigInterRAT_ReportType {
    ReportConfigInterRAT_ReportType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PeriodicalReportConfigInterRAT periodical; /**< ASN.1 periodical */
        EventTriggerConfigInterRAT eventTriggered; /**< ASN.1 eventTriggered */
        ReportCGI_EUTRA reportCGI; /**< ASN.1 reportCGI */
        ReportSFTD_EUTRA reportSFTD; /**< ASN.1 reportSFTD */
    } u;
};


/**
 * @brief ReportConfigInterRAT
 * @note ASN.1：ReportConfigInterRAT；源文件第 11234 行。
 * @note ReportConfigInterRAT ::= SEQUENCE { reportType }
 */
struct ReportConfigInterRAT {
    ReportConfigInterRAT_ReportType reportType; /**< ASN.1 reportType；结构体。 */
};


/**
 * @brief CellIndividualOffsetList_EUTRA_r18
 * @note ASN.1：CellIndividualOffsetList-EUTRA-r18；源文件第 11380 行。
 * @note CellIndividualOffsetList-EUTRA-r18 ::= SEQUENCE { physCellId-r18, cellIndividualOffset-r18 }
 */
struct CellIndividualOffsetList_EUTRA_r18 {
    EUTRA_PhysCellId physCellId_r18; /**< ASN.1 physCellId-r18；INTEGER (0..503)，位宽 9 bit。 */
    EUTRA_Q_OffsetRange cellIndividualOffset_r18; /**< ASN.1 cellIndividualOffset-r18；枚举。 */
};


/**
 * @brief ReportCGI_ExtGroup1
 * @note ASN.1：ReportCGI_ExtGroup1；源文件第 11406 行。
 */
struct ReportCGI_ExtGroup1 {
    bool has_useAutonomousGaps_r16; /**< useAutonomousGaps-r16 是否存在。 */
    ReportCGI_ExtGroup1_UseAutonomousGaps_r16 useAutonomousGaps_r16; /**< ASN.1 useAutonomousGaps-r16；枚举；OPTIONAL。 */
};


/**
 * @brief ReportCGI
 * @note ASN.1：ReportCGI；源文件第 11403 行。
 * @note ReportCGI ::= SEQUENCE { cellForWhichToReportCGI, useAutonomousGaps-r16 }
 */
struct ReportCGI {
    PhysCellId cellForWhichToReportCGI; /**< ASN.1 cellForWhichToReportCGI；INTEGER (0..1007)，位宽 10 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ReportCGI_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ReportSFTD_NR_ExtGroup1
 * @note ASN.1：ReportSFTD_NR_ExtGroup1；源文件第 11416 行。
 */
struct ReportSFTD_NR_ExtGroup1 {
    bool has_reportSFTD_NeighMeas; /**< reportSFTD-NeighMeas 是否存在。 */
    ReportSFTD_NR_ExtGroup1_ReportSFTD_NeighMeas reportSFTD_NeighMeas; /**< ASN.1 reportSFTD-NeighMeas；枚举；OPTIONAL。 */
    bool has_drx_SFTD_NeighMeas; /**< drx-SFTD-NeighMeas 是否存在。 */
    ReportSFTD_NR_ExtGroup1_Drx_SFTD_NeighMeas drx_SFTD_NeighMeas; /**< ASN.1 drx-SFTD-NeighMeas；枚举；OPTIONAL。 */
    bool has_cellsForWhichToReportSFTD; /**< cellsForWhichToReportSFTD 是否存在。 */
    PhysCellId* cellsForWhichToReportSFTD_items; /**< ASN.1 cellsForWhichToReportSFTD；SEQUENCE OF PhysCellId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cellsForWhichToReportSFTD_count; /**< cellsForWhichToReportSFTD 元素个数。 */
};


/**
 * @brief ReportSFTD_NR
 * @note ASN.1：ReportSFTD-NR；源文件第 11412 行。
 * @note ReportSFTD-NR ::= SEQUENCE { reportSFTD-Meas, reportRSRP, reportSFTD-NeighMeas, drx-SFTD-NeighM...
 */
struct ReportSFTD_NR {
    bool reportSFTD_Meas; /**< ASN.1 reportSFTD-Meas；BOOLEAN，1 bit。 */
    bool reportRSRP; /**< ASN.1 reportRSRP；BOOLEAN，1 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ReportSFTD_NR_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CondTriggerConfig_r16_ExtGroup1
 * @note ASN.1：CondTriggerConfig_r16_ExtGroup1；源文件第 11464 行。
 */
struct CondTriggerConfig_r16_ExtGroup1 {
    bool has_nesEvent_r18; /**< nesEvent-r18 是否存在。 */
    CondTriggerConfig_r16_ExtGroup1_NesEvent_r18 nesEvent_r18; /**< ASN.1 nesEvent-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MeasTriggerQuantityOffset
 * @note ASN.1：MeasTriggerQuantityOffset；源文件第 11700 行。
 * @note MeasTriggerQuantityOffset ::= CHOICE { rsrp, rsrq, sinr }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasTriggerQuantityOffset_Tag {
    MeasTriggerQuantityOffset_Tag_rsrp = 0, /**< ASN.1 rsrp */
    MeasTriggerQuantityOffset_Tag_rsrq = 1, /**< ASN.1 rsrq */
    MeasTriggerQuantityOffset_Tag_sinr = 2, /**< ASN.1 sinr */
} MeasTriggerQuantityOffset_Tag;

struct MeasTriggerQuantityOffset {
    MeasTriggerQuantityOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t rsrp; /**< ASN.1 rsrp */
        int64_t rsrq; /**< ASN.1 rsrq */
        int64_t sinr; /**< ASN.1 sinr */
    } u;
};


/**
 * @brief CondTriggerConfig_r16_CondEventId_CondEventA3
 * @note ASN.1：condEventId/condEventA3；源文件第 11425 行。
 * @note SEQUENCE { a3-Offset, hysteresis, timeToTrigger }
 */
struct CondTriggerConfig_r16_CondEventId_CondEventA3 {
    MeasTriggerQuantityOffset a3_Offset; /**< ASN.1 a3-Offset；结构体。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief CondTriggerConfig_r16_CondEventId_CondEventA5
 * @note ASN.1：condEventId/condEventA5；源文件第 11430 行。
 * @note SEQUENCE { a5-Threshold1, a5-Threshold2, hysteresis, timeToTrigger }
 */
struct CondTriggerConfig_r16_CondEventId_CondEventA5 {
    MeasTriggerQuantity a5_Threshold1; /**< ASN.1 a5-Threshold1；结构体。 */
    MeasTriggerQuantity a5_Threshold2; /**< ASN.1 a5-Threshold2；结构体。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief CondTriggerConfig_r16_CondEventId_CondEventA4_r17
 * @note ASN.1：condEventId/condEventA4-r17；源文件第 11437 行。
 * @note SEQUENCE { a4-Threshold-r17, hysteresis-r17, timeToTrigger-r17 }
 */
struct CondTriggerConfig_r16_CondEventId_CondEventA4_r17 {
    MeasTriggerQuantity a4_Threshold_r17; /**< ASN.1 a4-Threshold-r17；结构体。 */
    Hysteresis hysteresis_r17; /**< ASN.1 hysteresis-r17；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
};


/**
 * @brief CondTriggerConfig_r16_CondEventId_CondEventD1_r17
 * @note ASN.1：condEventId/condEventD1-r17；源文件第 11442 行。
 * @note SEQUENCE { distanceThreshFromReference1-r17, distanceThreshFromReference2-r17...
 */
struct CondTriggerConfig_r16_CondEventId_CondEventD1_r17 {
    int64_t distanceThreshFromReference1_r17; /**< ASN.1 distanceThreshFromReference1-r17；INTEGER (0..65525)，位宽 16 bit。 */
    int64_t distanceThreshFromReference2_r17; /**< ASN.1 distanceThreshFromReference2-r17；INTEGER (0..65525)，位宽 16 bit。 */
    ReferenceLocation_r17 referenceLocation1_r17; /**< ASN.1 referenceLocation1-r17；SIZE 无上界（半约束长度）。 */
    ReferenceLocation_r17 referenceLocation2_r17; /**< ASN.1 referenceLocation2-r17；SIZE 无上界（半约束长度）。 */
    HysteresisLocation_r17 hysteresisLocation_r17; /**< ASN.1 hysteresisLocation-r17；INTEGER (0..32768)，位宽 16 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
};


/**
 * @brief CondTriggerConfig_r16_CondEventId_CondEventT1_r17
 * @note ASN.1：condEventId/condEventT1-r17；源文件第 11450 行。
 * @note SEQUENCE { t1-Threshold-r17, duration-r17 }
 */
struct CondTriggerConfig_r16_CondEventId_CondEventT1_r17 {
    int64_t t1_Threshold_r17; /**< ASN.1 t1-Threshold-r17；INTEGER (0..549755813887)，位宽 39 bit。 */
    int64_t duration_r17; /**< ASN.1 duration-r17；INTEGER (1..6000)，位宽 13 bit。 */
};


/**
 * @brief CondTriggerConfig_r16_CondEventId_CondEventD2_r18
 * @note ASN.1：condEventId/condEventD2-r18；源文件第 11454 行。
 * @note SEQUENCE { distanceThreshFromReference1-r18, distanceThreshFromReference2-r18...
 */
struct CondTriggerConfig_r16_CondEventId_CondEventD2_r18 {
    int64_t distanceThreshFromReference1_r18; /**< ASN.1 distanceThreshFromReference1-r18；INTEGER (0..65535)，位宽 16 bit。 */
    int64_t distanceThreshFromReference2_r18; /**< ASN.1 distanceThreshFromReference2-r18；INTEGER (0..65535)，位宽 16 bit。 */
    ReferenceLocation_r17 referenceLocation2_r18; /**< ASN.1 referenceLocation2-r18；SIZE 无上界（半约束长度）。 */
    HysteresisLocation_r17 hysteresisLocation_r18; /**< ASN.1 hysteresisLocation-r18；INTEGER (0..32768)，位宽 16 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
};


/**
 * @brief CondTriggerConfig_r16_CondEventId
 * @note ASN.1：condEventId；源文件第 11424 行。
 * @note CHOICE { condEventA3, condEventA5, condEventA4-r17, condEventD1-r17, condEven...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CondTriggerConfig_r16_CondEventId_Tag {
    CondTriggerConfig_r16_CondEventId_Tag_condEventA3 = 0, /**< ASN.1 condEventA3 */
    CondTriggerConfig_r16_CondEventId_Tag_condEventA5 = 1, /**< ASN.1 condEventA5 */
    CondTriggerConfig_r16_CondEventId_Tag_condEventA4_r17 = 2, /**< ASN.1 condEventA4-r17（扩展备选） */
    CondTriggerConfig_r16_CondEventId_Tag_condEventD1_r17 = 3, /**< ASN.1 condEventD1-r17（扩展备选） */
    CondTriggerConfig_r16_CondEventId_Tag_condEventT1_r17 = 4, /**< ASN.1 condEventT1-r17（扩展备选） */
    CondTriggerConfig_r16_CondEventId_Tag_condEventD2_r18 = 5, /**< ASN.1 condEventD2-r18（扩展备选） */
} CondTriggerConfig_r16_CondEventId_Tag;

struct CondTriggerConfig_r16_CondEventId {
    CondTriggerConfig_r16_CondEventId_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CondTriggerConfig_r16_CondEventId_CondEventA3 condEventA3; /**< ASN.1 condEventA3 */
        CondTriggerConfig_r16_CondEventId_CondEventA5 condEventA5; /**< ASN.1 condEventA5 */
        CondTriggerConfig_r16_CondEventId_CondEventA4_r17 condEventA4_r17; /**< ASN.1 condEventA4-r17 */
        CondTriggerConfig_r16_CondEventId_CondEventD1_r17 condEventD1_r17; /**< ASN.1 condEventD1-r17 */
        CondTriggerConfig_r16_CondEventId_CondEventT1_r17 condEventT1_r17; /**< ASN.1 condEventT1-r17 */
        CondTriggerConfig_r16_CondEventId_CondEventD2_r18 condEventD2_r18; /**< ASN.1 condEventD2-r18 */
    } u;
};


/**
 * @brief CondTriggerConfig_r16
 * @note ASN.1：CondTriggerConfig-r16；源文件第 11423 行。
 * @note CondTriggerConfig-r16 ::= SEQUENCE { condEventId, rsType-r16, nesEvent-r18 }
 */
struct CondTriggerConfig_r16 {
    CondTriggerConfig_r16_CondEventId condEventId; /**< ASN.1 condEventId；结构体。 */
    NR_RS_Type rsType_r16; /**< ASN.1 rsType-r16；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CondTriggerConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief EventTriggerConfig_ExtGroup3
 * @note ASN.1：EventTriggerConfig_ExtGroup3；源文件第 11656 行。
 */
struct EventTriggerConfig_ExtGroup3 {
    bool has_numberOfTriggeringCells_r18; /**< numberOfTriggeringCells-r18 是否存在。 */
    int64_t numberOfTriggeringCells_r18; /**< ASN.1 numberOfTriggeringCells-r18；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_cellIndividualOffsetList_r18; /**< cellIndividualOffsetList-r18 是否存在。 */
    CellIndividualOffsetList_r18* cellIndividualOffsetList_r18_items; /**< ASN.1 cellIndividualOffsetList-r18；SEQUENCE OF CellIndividualOffsetList_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cellIndividualOffsetList_r18_count; /**< cellIndividualOffsetList-r18 元素个数。 */
    bool has_eventX1_SD_Threshold1_r18; /**< eventX1-SD-Threshold1-r18 是否存在。 */
    SL_MeasTriggerQuantity_r16 eventX1_SD_Threshold1_r18; /**< ASN.1 eventX1-SD-Threshold1-r18；结构体；OPTIONAL。 */
    bool has_eventX2_SD_Threshold_r18; /**< eventX2-SD-Threshold-r18 是否存在。 */
    SL_MeasTriggerQuantity_r16 eventX2_SD_Threshold_r18; /**< ASN.1 eventX2-SD-Threshold-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MeasRSSI_ReportConfig_r16
 * @note ASN.1：MeasRSSI-ReportConfig-r16；源文件第 11713 行。
 * @note MeasRSSI-ReportConfig-r16 ::= SEQUENCE { channelOccupancyThreshold-r16 }
 */
struct MeasRSSI_ReportConfig_r16 {
    bool has_channelOccupancyThreshold_r16; /**< channelOccupancyThreshold-r16 是否存在。 */
    RSSI_Range_r16 channelOccupancyThreshold_r16; /**< ASN.1 channelOccupancyThreshold-r16；INTEGER (0..76)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief EventTriggerConfig_ExtGroup1
 * @note ASN.1：EventTriggerConfig_ExtGroup1；源文件第 11644 行。
 */
struct EventTriggerConfig_ExtGroup1 {
    bool has_measRSSI_ReportConfig_r16; /**< measRSSI-ReportConfig-r16 是否存在。 */
    MeasRSSI_ReportConfig_r16 measRSSI_ReportConfig_r16; /**< ASN.1 measRSSI-ReportConfig-r16；结构体；OPTIONAL。 */
    bool has_useT312_r16; /**< useT312-r16 是否存在。 */
    bool useT312_r16; /**< ASN.1 useT312-r16；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_includeCommonLocationInfo_r16; /**< includeCommonLocationInfo-r16 是否存在。 */
    EventTriggerConfig_ExtGroup1_IncludeCommonLocationInfo_r16 includeCommonLocationInfo_r16; /**< ASN.1 includeCommonLocationInfo-r16；枚举；OPTIONAL。 */
    bool has_includeBT_Meas_r16; /**< includeBT-Meas-r16 是否存在。 */
    SetupRelease_BT_NameList_r16 includeBT_Meas_r16; /**< ASN.1 includeBT-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeWLAN_Meas_r16; /**< includeWLAN-Meas-r16 是否存在。 */
    SetupRelease_WLAN_NameList_r16 includeWLAN_Meas_r16; /**< ASN.1 includeWLAN-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeSensor_Meas_r16; /**< includeSensor-Meas-r16 是否存在。 */
    SetupRelease_Sensor_NameList_r16 includeSensor_Meas_r16; /**< ASN.1 includeSensor-Meas-r16；结构体；OPTIONAL。 */
};


/**
 * @brief EventTriggerConfig_ExtGroup2
 * @note ASN.1：EventTriggerConfig_ExtGroup2；源文件第 11652 行。
 */
struct EventTriggerConfig_ExtGroup2 {
    bool has_coarseLocationRequest_r17; /**< coarseLocationRequest-r17 是否存在。 */
    EventTriggerConfig_ExtGroup2_CoarseLocationRequest_r17 coarseLocationRequest_r17; /**< ASN.1 coarseLocationRequest-r17；枚举；OPTIONAL。 */
    bool has_reportQuantityRelay_r17; /**< reportQuantityRelay-r17 是否存在。 */
    SL_MeasReportQuantity_r16 reportQuantityRelay_r17; /**< ASN.1 reportQuantityRelay-r17；结构体；OPTIONAL。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA1
 * @note ASN.1：eventId/eventA1；源文件第 11472 行。
 * @note SEQUENCE { a1-Threshold, reportOnLeave, hysteresis, timeToTrigger }
 */
struct EventTriggerConfig_EventId_EventA1 {
    MeasTriggerQuantity a1_Threshold; /**< ASN.1 a1-Threshold；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA2
 * @note ASN.1：eventId/eventA2；源文件第 11478 行。
 * @note SEQUENCE { a2-Threshold, reportOnLeave, hysteresis, timeToTrigger }
 */
struct EventTriggerConfig_EventId_EventA2 {
    MeasTriggerQuantity a2_Threshold; /**< ASN.1 a2-Threshold；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA3
 * @note ASN.1：eventId/eventA3；源文件第 11484 行。
 * @note SEQUENCE { a3-Offset, reportOnLeave, hysteresis, timeToTrigger, useAllowedCel...
 */
struct EventTriggerConfig_EventId_EventA3 {
    MeasTriggerQuantityOffset a3_Offset; /**< ASN.1 a3-Offset；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
    bool useAllowedCellList; /**< ASN.1 useAllowedCellList；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA4
 * @note ASN.1：eventId/eventA4；源文件第 11491 行。
 * @note SEQUENCE { a4-Threshold, reportOnLeave, hysteresis, timeToTrigger, useAllowed...
 */
struct EventTriggerConfig_EventId_EventA4 {
    MeasTriggerQuantity a4_Threshold; /**< ASN.1 a4-Threshold；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
    bool useAllowedCellList; /**< ASN.1 useAllowedCellList；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA5
 * @note ASN.1：eventId/eventA5；源文件第 11498 行。
 * @note SEQUENCE { a5-Threshold1, a5-Threshold2, reportOnLeave, hysteresis, timeToTri...
 */
struct EventTriggerConfig_EventId_EventA5 {
    MeasTriggerQuantity a5_Threshold1; /**< ASN.1 a5-Threshold1；结构体。 */
    MeasTriggerQuantity a5_Threshold2; /**< ASN.1 a5-Threshold2；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
    bool useAllowedCellList; /**< ASN.1 useAllowedCellList；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA6
 * @note ASN.1：eventId/eventA6；源文件第 11506 行。
 * @note SEQUENCE { a6-Offset, reportOnLeave, hysteresis, timeToTrigger, useAllowedCel...
 */
struct EventTriggerConfig_EventId_EventA6 {
    MeasTriggerQuantityOffset a6_Offset; /**< ASN.1 a6-Offset；结构体。 */
    bool reportOnLeave; /**< ASN.1 reportOnLeave；BOOLEAN，1 bit。 */
    Hysteresis hysteresis; /**< ASN.1 hysteresis；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger; /**< ASN.1 timeToTrigger；枚举。 */
    bool useAllowedCellList; /**< ASN.1 useAllowedCellList；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventX1_r17
 * @note ASN.1：eventId/eventX1-r17；源文件第 11515 行。
 * @note SEQUENCE { x1-Threshold1-Relay-r17, x1-Threshold2-r17, reportOnLeave-r17, hys...
 */
struct EventTriggerConfig_EventId_EventX1_r17 {
    SL_MeasTriggerQuantity_r16 x1_Threshold1_Relay_r17; /**< ASN.1 x1-Threshold1-Relay-r17；结构体。 */
    MeasTriggerQuantity x1_Threshold2_r17; /**< ASN.1 x1-Threshold2-r17；结构体。 */
    bool reportOnLeave_r17; /**< ASN.1 reportOnLeave-r17；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r17; /**< ASN.1 hysteresis-r17；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
    bool useAllowedCellList_r17; /**< ASN.1 useAllowedCellList-r17；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventX2_r17
 * @note ASN.1：eventId/eventX2-r17；源文件第 11523 行。
 * @note SEQUENCE { x2-Threshold-Relay-r17, reportOnLeave-r17, hysteresis-r17, timeToT...
 */
struct EventTriggerConfig_EventId_EventX2_r17 {
    SL_MeasTriggerQuantity_r16 x2_Threshold_Relay_r17; /**< ASN.1 x2-Threshold-Relay-r17；结构体。 */
    bool reportOnLeave_r17; /**< ASN.1 reportOnLeave-r17；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r17; /**< ASN.1 hysteresis-r17；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventD1_r17
 * @note ASN.1：eventId/eventD1-r17；源文件第 11529 行。
 * @note SEQUENCE { distanceThreshFromReference1-r17, distanceThreshFromReference2-r17...
 */
struct EventTriggerConfig_EventId_EventD1_r17 {
    int64_t distanceThreshFromReference1_r17; /**< ASN.1 distanceThreshFromReference1-r17；INTEGER (1..65525)，位宽 16 bit。 */
    int64_t distanceThreshFromReference2_r17; /**< ASN.1 distanceThreshFromReference2-r17；INTEGER (1..65525)，位宽 16 bit。 */
    ReferenceLocation_r17 referenceLocation1_r17; /**< ASN.1 referenceLocation1-r17；SIZE 无上界（半约束长度）。 */
    ReferenceLocation_r17 referenceLocation2_r17; /**< ASN.1 referenceLocation2-r17；SIZE 无上界（半约束长度）。 */
    bool reportOnLeave_r17; /**< ASN.1 reportOnLeave-r17；BOOLEAN，1 bit。 */
    HysteresisLocation_r17 hysteresisLocation_r17; /**< ASN.1 hysteresisLocation-r17；INTEGER (0..32768)，位宽 16 bit。 */
    TimeToTrigger timeToTrigger_r17; /**< ASN.1 timeToTrigger-r17；枚举。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventH1_r18
 * @note ASN.1：eventId/eventH1-r18；源文件第 11540 行。
 * @note SEQUENCE { h1-Threshold-r18, h1-Hysteresis-r18, reportOnLeave-r18, timeToTrig...
 */
struct EventTriggerConfig_EventId_EventH1_r18 {
    Altitude_r18 h1_Threshold_r18; /**< ASN.1 h1-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h1_Hysteresis_r18; /**< ASN.1 h1-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventH2_r18
 * @note ASN.1：eventId/eventH2-r18；源文件第 11548 行。
 * @note SEQUENCE { h2-Threshold-r18, h2-Hysteresis-r18, reportOnLeave-r18, timeToTrig...
 */
struct EventTriggerConfig_EventId_EventH2_r18 {
    Altitude_r18 h2_Threshold_r18; /**< ASN.1 h2-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h2_Hysteresis_r18; /**< ASN.1 h2-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA3H1_r18
 * @note ASN.1：eventId/eventA3H1-r18；源文件第 11556 行。
 * @note SEQUENCE { a3-Offset-r18, reportOnLeave-r18, a3-Hysteresis-r18, timeToTrigger...
 */
struct EventTriggerConfig_EventId_EventA3H1_r18 {
    MeasTriggerQuantityOffset a3_Offset_r18; /**< ASN.1 a3-Offset-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis a3_Hysteresis_r18; /**< ASN.1 a3-Hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool useAllowedCellList_r18; /**< ASN.1 useAllowedCellList-r18；BOOLEAN，1 bit。 */
    Altitude_r18 h1_Threshold_r18; /**< ASN.1 h1-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h1_Hysteresis_r18; /**< ASN.1 h1-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA3H2_r18
 * @note ASN.1：eventId/eventA3H2-r18；源文件第 11567 行。
 * @note SEQUENCE { a3-Offset-r18, reportOnLeave-r18, a3-Hysteresis-r18, timeToTrigger...
 */
struct EventTriggerConfig_EventId_EventA3H2_r18 {
    MeasTriggerQuantityOffset a3_Offset_r18; /**< ASN.1 a3-Offset-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis a3_Hysteresis_r18; /**< ASN.1 a3-Hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool useAllowedCellList_r18; /**< ASN.1 useAllowedCellList-r18；BOOLEAN，1 bit。 */
    Altitude_r18 h2_Threshold_r18; /**< ASN.1 h2-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h2_Hysteresis_r18; /**< ASN.1 h2-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA4H1_r18
 * @note ASN.1：eventId/eventA4H1-r18；源文件第 11578 行。
 * @note SEQUENCE { a4-Threshold-r18, reportOnLeave-r18, a4-Hysteresis-r18, timeToTrig...
 */
struct EventTriggerConfig_EventId_EventA4H1_r18 {
    MeasTriggerQuantity a4_Threshold_r18; /**< ASN.1 a4-Threshold-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis a4_Hysteresis_r18; /**< ASN.1 a4-Hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool useAllowedCellList_r18; /**< ASN.1 useAllowedCellList-r18；BOOLEAN，1 bit。 */
    Altitude_r18 h1_Threshold_r18; /**< ASN.1 h1-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h1_Hysteresis_r18; /**< ASN.1 h1-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA4H2_r18
 * @note ASN.1：eventId/eventA4H2-r18；源文件第 11589 行。
 * @note SEQUENCE { a4-Threshold-r18, reportOnLeave-r18, a4-Hysteresis-r18, timeToTrig...
 */
struct EventTriggerConfig_EventId_EventA4H2_r18 {
    MeasTriggerQuantity a4_Threshold_r18; /**< ASN.1 a4-Threshold-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis a4_Hysteresis_r18; /**< ASN.1 a4-Hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool useAllowedCellList_r18; /**< ASN.1 useAllowedCellList-r18；BOOLEAN，1 bit。 */
    Altitude_r18 h2_Threshold_r18; /**< ASN.1 h2-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h2_Hysteresis_r18; /**< ASN.1 h2-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA5H1_r18
 * @note ASN.1：eventId/eventA5H1-r18；源文件第 11600 行。
 * @note SEQUENCE { a5-Threshold1-r18, a5-Threshold2-r18, reportOnLeave-r18, a5-Hyster...
 */
struct EventTriggerConfig_EventId_EventA5H1_r18 {
    MeasTriggerQuantity a5_Threshold1_r18; /**< ASN.1 a5-Threshold1-r18；结构体。 */
    MeasTriggerQuantity a5_Threshold2_r18; /**< ASN.1 a5-Threshold2-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis a5_Hysteresis_r18; /**< ASN.1 a5-Hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool useAllowedCellList_r18; /**< ASN.1 useAllowedCellList-r18；BOOLEAN，1 bit。 */
    Altitude_r18 h1_Threshold_r18; /**< ASN.1 h1-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h1_Hysteresis_r18; /**< ASN.1 h1-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventA5H2_r18
 * @note ASN.1：eventId/eventA5H2-r18；源文件第 11612 行。
 * @note SEQUENCE { a5-Threshold1-r18, a5-Threshold2-r18, reportOnLeave-r18, a5-Hyster...
 */
struct EventTriggerConfig_EventId_EventA5H2_r18 {
    MeasTriggerQuantity a5_Threshold1_r18; /**< ASN.1 a5-Threshold1-r18；结构体。 */
    MeasTriggerQuantity a5_Threshold2_r18; /**< ASN.1 a5-Threshold2-r18；结构体。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    Hysteresis a5_Hysteresis_r18; /**< ASN.1 a5-Hysteresis-r18；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
    bool useAllowedCellList_r18; /**< ASN.1 useAllowedCellList-r18；BOOLEAN，1 bit。 */
    Altitude_r18 h2_Threshold_r18; /**< ASN.1 h2-Threshold-r18；INTEGER (-420..10000)，位宽 14 bit。 */
    HysteresisAltitude_r18 h2_Hysteresis_r18; /**< ASN.1 h2-Hysteresis-r18；INTEGER (0..64)，位宽 7 bit。 */
    bool includeAltitudeUE_r18; /**< ASN.1 includeAltitudeUE-r18；BOOLEAN，1 bit。 */
    bool simulMultiTriggerSingleMeasReport_r18; /**< ASN.1 simulMultiTriggerSingleMeasReport-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfig_EventId_EventD2_r18
 * @note ASN.1：eventId/eventD2-r18；源文件第 11624 行。
 * @note SEQUENCE { distanceThreshFromReference1-r18, distanceThreshFromReference2-r18...
 */
struct EventTriggerConfig_EventId_EventD2_r18 {
    int64_t distanceThreshFromReference1_r18; /**< ASN.1 distanceThreshFromReference1-r18；INTEGER (1..65535)，位宽 16 bit。 */
    int64_t distanceThreshFromReference2_r18; /**< ASN.1 distanceThreshFromReference2-r18；INTEGER (1..65535)，位宽 16 bit。 */
    ReferenceLocation_r17 referenceLocation2_r18; /**< ASN.1 referenceLocation2-r18；SIZE 无上界（半约束长度）。 */
    bool reportOnLeave_r18; /**< ASN.1 reportOnLeave-r18；BOOLEAN，1 bit。 */
    HysteresisLocation_r17 hysteresisLocation_r18; /**< ASN.1 hysteresisLocation-r18；INTEGER (0..32768)，位宽 16 bit。 */
    TimeToTrigger timeToTrigger_r18; /**< ASN.1 timeToTrigger-r18；枚举。 */
};


/**
 * @brief EventTriggerConfig_EventId
 * @note ASN.1：eventId；源文件第 11471 行。
 * @note CHOICE { eventA1, eventA2, eventA3, eventA4, eventA5, eventA6, eventX1-r17, e...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EventTriggerConfig_EventId_Tag {
    EventTriggerConfig_EventId_Tag_eventA1 = 0, /**< ASN.1 eventA1 */
    EventTriggerConfig_EventId_Tag_eventA2 = 1, /**< ASN.1 eventA2 */
    EventTriggerConfig_EventId_Tag_eventA3 = 2, /**< ASN.1 eventA3 */
    EventTriggerConfig_EventId_Tag_eventA4 = 3, /**< ASN.1 eventA4 */
    EventTriggerConfig_EventId_Tag_eventA5 = 4, /**< ASN.1 eventA5 */
    EventTriggerConfig_EventId_Tag_eventA6 = 5, /**< ASN.1 eventA6 */
    EventTriggerConfig_EventId_Tag_eventX1_r17 = 6, /**< ASN.1 eventX1-r17（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventX2_r17 = 7, /**< ASN.1 eventX2-r17（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventD1_r17 = 8, /**< ASN.1 eventD1-r17（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventH1_r18 = 9, /**< ASN.1 eventH1-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventH2_r18 = 10, /**< ASN.1 eventH2-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventA3H1_r18 = 11, /**< ASN.1 eventA3H1-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventA3H2_r18 = 12, /**< ASN.1 eventA3H2-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventA4H1_r18 = 13, /**< ASN.1 eventA4H1-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventA4H2_r18 = 14, /**< ASN.1 eventA4H2-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventA5H1_r18 = 15, /**< ASN.1 eventA5H1-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventA5H2_r18 = 16, /**< ASN.1 eventA5H2-r18（扩展备选） */
    EventTriggerConfig_EventId_Tag_eventD2_r18 = 17, /**< ASN.1 eventD2-r18（扩展备选） */
} EventTriggerConfig_EventId_Tag;

struct EventTriggerConfig_EventId {
    EventTriggerConfig_EventId_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        EventTriggerConfig_EventId_EventA1 eventA1; /**< ASN.1 eventA1 */
        EventTriggerConfig_EventId_EventA2 eventA2; /**< ASN.1 eventA2 */
        EventTriggerConfig_EventId_EventA3 eventA3; /**< ASN.1 eventA3 */
        EventTriggerConfig_EventId_EventA4 eventA4; /**< ASN.1 eventA4 */
        EventTriggerConfig_EventId_EventA5 eventA5; /**< ASN.1 eventA5 */
        EventTriggerConfig_EventId_EventA6 eventA6; /**< ASN.1 eventA6 */
        EventTriggerConfig_EventId_EventX1_r17 eventX1_r17; /**< ASN.1 eventX1-r17 */
        EventTriggerConfig_EventId_EventX2_r17 eventX2_r17; /**< ASN.1 eventX2-r17 */
        EventTriggerConfig_EventId_EventD1_r17 eventD1_r17; /**< ASN.1 eventD1-r17 */
        EventTriggerConfig_EventId_EventH1_r18 eventH1_r18; /**< ASN.1 eventH1-r18 */
        EventTriggerConfig_EventId_EventH2_r18 eventH2_r18; /**< ASN.1 eventH2-r18 */
        EventTriggerConfig_EventId_EventA3H1_r18 eventA3H1_r18; /**< ASN.1 eventA3H1-r18 */
        EventTriggerConfig_EventId_EventA3H2_r18 eventA3H2_r18; /**< ASN.1 eventA3H2-r18 */
        EventTriggerConfig_EventId_EventA4H1_r18 eventA4H1_r18; /**< ASN.1 eventA4H1-r18 */
        EventTriggerConfig_EventId_EventA4H2_r18 eventA4H2_r18; /**< ASN.1 eventA4H2-r18 */
        EventTriggerConfig_EventId_EventA5H1_r18 eventA5H1_r18; /**< ASN.1 eventA5H1-r18 */
        EventTriggerConfig_EventId_EventA5H2_r18 eventA5H2_r18; /**< ASN.1 eventA5H2-r18 */
        EventTriggerConfig_EventId_EventD2_r18 eventD2_r18; /**< ASN.1 eventD2-r18 */
    } u;
};


/**
 * @brief EventTriggerConfig
 * @note ASN.1：EventTriggerConfig；源文件第 11470 行。
 * @note EventTriggerConfig ::= SEQUENCE { eventId, rsType, reportInterval, reportAmount, reportQuantityCell,...
 */
struct EventTriggerConfig {
    EventTriggerConfig_EventId eventId; /**< ASN.1 eventId；结构体。 */
    NR_RS_Type rsType; /**< ASN.1 rsType；枚举。 */
    ReportInterval reportInterval; /**< ASN.1 reportInterval；枚举。 */
    EventTriggerConfig_ReportAmount reportAmount; /**< ASN.1 reportAmount；枚举。 */
    MeasReportQuantity reportQuantityCell; /**< ASN.1 reportQuantityCell；结构体。 */
    int64_t maxReportCells; /**< ASN.1 maxReportCells；INTEGER (1..8)，位宽 3 bit。 */
    bool has_reportQuantityRS_Indexes; /**< reportQuantityRS-Indexes 是否存在。 */
    MeasReportQuantity reportQuantityRS_Indexes; /**< ASN.1 reportQuantityRS-Indexes；结构体；OPTIONAL。 */
    bool has_maxNrofRS_IndexesToReport; /**< maxNrofRS-IndexesToReport 是否存在。 */
    int64_t maxNrofRS_IndexesToReport; /**< ASN.1 maxNrofRS-IndexesToReport；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool includeBeamMeasurements; /**< ASN.1 includeBeamMeasurements；BOOLEAN，1 bit。 */
    bool has_reportAddNeighMeas; /**< reportAddNeighMeas 是否存在。 */
    EventTriggerConfig_ReportAddNeighMeas reportAddNeighMeas; /**< ASN.1 reportAddNeighMeas；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    EventTriggerConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    EventTriggerConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    EventTriggerConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UL_DelayValueConfig_r16
 * @note ASN.1：UL-DelayValueConfig-r16；源文件第 13893 行。
 * @note UL-DelayValueConfig-r16 ::= SEQUENCE { delay-DRBlist-r16 }
 */
struct UL_DelayValueConfig_r16 {
    DRB_Identity* delay_DRBlist_r16_items; /**< ASN.1 delay-DRBlist-r16；SEQUENCE OF DRB_Identity，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t delay_DRBlist_r16_count; /**< delay-DRBlist-r16 元素个数。 */
};


/**
 * @brief SetupRelease_UL_DelayValueConfig_r16
 * @note ASN.1：SetupRelease<UL-DelayValueConfig-r16>；源文件第 11682 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_DelayValueConfig_r16_Tag {
    SetupRelease_UL_DelayValueConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_DelayValueConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_DelayValueConfig_r16_Tag;

struct SetupRelease_UL_DelayValueConfig_r16 {
    SetupRelease_UL_DelayValueConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_DelayValueConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PeriodicalReportConfig_ExtGroup1
 * @note ASN.1：PeriodicalReportConfig_ExtGroup1；源文件第 11676 行。
 */
struct PeriodicalReportConfig_ExtGroup1 {
    bool has_measRSSI_ReportConfig_r16; /**< measRSSI-ReportConfig-r16 是否存在。 */
    MeasRSSI_ReportConfig_r16 measRSSI_ReportConfig_r16; /**< ASN.1 measRSSI-ReportConfig-r16；结构体；OPTIONAL。 */
    bool has_includeCommonLocationInfo_r16; /**< includeCommonLocationInfo-r16 是否存在。 */
    PeriodicalReportConfig_ExtGroup1_IncludeCommonLocationInfo_r16 includeCommonLocationInfo_r16; /**< ASN.1 includeCommonLocationInfo-r16；枚举；OPTIONAL。 */
    bool has_includeBT_Meas_r16; /**< includeBT-Meas-r16 是否存在。 */
    SetupRelease_BT_NameList_r16 includeBT_Meas_r16; /**< ASN.1 includeBT-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeWLAN_Meas_r16; /**< includeWLAN-Meas-r16 是否存在。 */
    SetupRelease_WLAN_NameList_r16 includeWLAN_Meas_r16; /**< ASN.1 includeWLAN-Meas-r16；结构体；OPTIONAL。 */
    bool has_includeSensor_Meas_r16; /**< includeSensor-Meas-r16 是否存在。 */
    SetupRelease_Sensor_NameList_r16 includeSensor_Meas_r16; /**< ASN.1 includeSensor-Meas-r16；结构体；OPTIONAL。 */
    bool has_ul_DelayValueConfig_r16; /**< ul-DelayValueConfig-r16 是否存在。 */
    SetupRelease_UL_DelayValueConfig_r16 ul_DelayValueConfig_r16; /**< ASN.1 ul-DelayValueConfig-r16；结构体；OPTIONAL。 */
    bool has_reportAddNeighMeas_r16; /**< reportAddNeighMeas-r16 是否存在。 */
    PeriodicalReportConfig_ExtGroup1_ReportAddNeighMeas_r16 reportAddNeighMeas_r16; /**< ASN.1 reportAddNeighMeas-r16；枚举；OPTIONAL。 */
};


/**
 * @brief UL_ExcessDelayConfig_r17
 * @note ASN.1：UL-ExcessDelayConfig-r17；源文件第 13900 行。
 * @note UL-ExcessDelayConfig-r17 ::= SEQUENCE { excessDelay-DRBlist-r17 }
 */
struct UL_ExcessDelayConfig_r17 {
    ExcessDelay_DRB_IdentityInfo_r17* excessDelay_DRBlist_r17_items; /**< ASN.1 excessDelay-DRBlist-r17；SEQUENCE OF ExcessDelay_DRB_IdentityInfo_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t excessDelay_DRBlist_r17_count; /**< excessDelay-DRBlist-r17 元素个数。 */
};


/**
 * @brief SetupRelease_UL_ExcessDelayConfig_r17
 * @note ASN.1：SetupRelease<UL-ExcessDelayConfig-r17>；源文件第 11686 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_ExcessDelayConfig_r17_Tag {
    SetupRelease_UL_ExcessDelayConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_ExcessDelayConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_ExcessDelayConfig_r17_Tag;

struct SetupRelease_UL_ExcessDelayConfig_r17 {
    SetupRelease_UL_ExcessDelayConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_ExcessDelayConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PeriodicalReportConfig_ExtGroup2
 * @note ASN.1：PeriodicalReportConfig_ExtGroup2；源文件第 11685 行。
 */
struct PeriodicalReportConfig_ExtGroup2 {
    bool has_ul_ExcessDelayConfig_r17; /**< ul-ExcessDelayConfig-r17 是否存在。 */
    SetupRelease_UL_ExcessDelayConfig_r17 ul_ExcessDelayConfig_r17; /**< ASN.1 ul-ExcessDelayConfig-r17；结构体；OPTIONAL。 */
    bool has_coarseLocationRequest_r17; /**< coarseLocationRequest-r17 是否存在。 */
    PeriodicalReportConfig_ExtGroup2_CoarseLocationRequest_r17 coarseLocationRequest_r17; /**< ASN.1 coarseLocationRequest-r17；枚举；OPTIONAL。 */
    bool has_reportQuantityRelay_r17; /**< reportQuantityRelay-r17 是否存在。 */
    SL_MeasReportQuantity_r16 reportQuantityRelay_r17; /**< ASN.1 reportQuantityRelay-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PeriodicalReportConfig
 * @note ASN.1：PeriodicalReportConfig；源文件第 11665 行。
 * @note PeriodicalReportConfig ::= SEQUENCE { rsType, reportInterval, reportAmount, reportQuantityCell, maxRepor...
 */
struct PeriodicalReportConfig {
    NR_RS_Type rsType; /**< ASN.1 rsType；枚举。 */
    ReportInterval reportInterval; /**< ASN.1 reportInterval；枚举。 */
    PeriodicalReportConfig_ReportAmount reportAmount; /**< ASN.1 reportAmount；枚举。 */
    MeasReportQuantity reportQuantityCell; /**< ASN.1 reportQuantityCell；结构体。 */
    int64_t maxReportCells; /**< ASN.1 maxReportCells；INTEGER (1..8)，位宽 3 bit。 */
    bool has_reportQuantityRS_Indexes; /**< reportQuantityRS-Indexes 是否存在。 */
    MeasReportQuantity reportQuantityRS_Indexes; /**< ASN.1 reportQuantityRS-Indexes；结构体；OPTIONAL。 */
    bool has_maxNrofRS_IndexesToReport; /**< maxNrofRS-IndexesToReport 是否存在。 */
    int64_t maxNrofRS_IndexesToReport; /**< ASN.1 maxNrofRS-IndexesToReport；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool includeBeamMeasurements; /**< ASN.1 includeBeamMeasurements；BOOLEAN，1 bit。 */
    bool useAllowedCellList; /**< ASN.1 useAllowedCellList；BOOLEAN，1 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PeriodicalReportConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PeriodicalReportConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasTriggerQuantityCLI_r16
 * @note ASN.1：MeasTriggerQuantityCLI-r16；源文件第 11749 行。
 * @note MeasTriggerQuantityCLI-r16 ::= CHOICE { srs-RSRP-r16, cli-RSSI-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasTriggerQuantityCLI_r16_Tag {
    MeasTriggerQuantityCLI_r16_Tag_srs_RSRP_r16 = 0, /**< ASN.1 srs-RSRP-r16 */
    MeasTriggerQuantityCLI_r16_Tag_cli_RSSI_r16 = 1, /**< ASN.1 cli-RSSI-r16 */
} MeasTriggerQuantityCLI_r16_Tag;

struct MeasTriggerQuantityCLI_r16 {
    MeasTriggerQuantityCLI_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_RSRP_Range_r16 srs_RSRP_r16; /**< ASN.1 srs-RSRP-r16 */
        CLI_RSSI_Range_r16 cli_RSSI_r16; /**< ASN.1 cli-RSSI-r16 */
    } u;
};


/**
 * @brief CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16
 * @note ASN.1：eventId-r16/eventI1-r16；源文件第 11719 行。
 * @note SEQUENCE { i1-Threshold-r16, reportOnLeave-r16, hysteresis-r16, timeToTrigger...
 */
struct CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16 {
    MeasTriggerQuantityCLI_r16 i1_Threshold_r16; /**< ASN.1 i1-Threshold-r16；结构体。 */
    bool reportOnLeave_r16; /**< ASN.1 reportOnLeave-r16；BOOLEAN，1 bit。 */
    Hysteresis hysteresis_r16; /**< ASN.1 hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r16; /**< ASN.1 timeToTrigger-r16；枚举。 */
};


/**
 * @brief CLI_EventTriggerConfig_r16_EventId_r16
 * @note ASN.1：eventId-r16；源文件第 11718 行。
 * @note CHOICE { eventI1-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CLI_EventTriggerConfig_r16_EventId_r16_Tag {
    CLI_EventTriggerConfig_r16_EventId_r16_Tag_eventI1_r16 = 0, /**< ASN.1 eventI1-r16 */
} CLI_EventTriggerConfig_r16_EventId_r16_Tag;

struct CLI_EventTriggerConfig_r16_EventId_r16 {
    CLI_EventTriggerConfig_r16_EventId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CLI_EventTriggerConfig_r16_EventId_r16_EventI1_r16 eventI1_r16; /**< ASN.1 eventI1-r16 */
    } u;
};


/**
 * @brief CLI_EventTriggerConfig_r16
 * @note ASN.1：CLI-EventTriggerConfig-r16；源文件第 11717 行。
 * @note CLI-EventTriggerConfig-r16 ::= SEQUENCE { eventId-r16, reportInterval-r16, reportAmount-r16, maxReportCLI-r16 }
 */
struct CLI_EventTriggerConfig_r16 {
    CLI_EventTriggerConfig_r16_EventId_r16 eventId_r16; /**< ASN.1 eventId-r16；结构体。 */
    ReportInterval reportInterval_r16; /**< ASN.1 reportInterval-r16；枚举。 */
    CLI_EventTriggerConfig_r16_ReportAmount_r16 reportAmount_r16; /**< ASN.1 reportAmount-r16；枚举。 */
    int64_t maxReportCLI_r16; /**< ASN.1 maxReportCLI-r16；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief CLI_PeriodicalReportConfig_r16
 * @note ASN.1：CLI-PeriodicalReportConfig-r16；源文件第 11733 行。
 * @note CLI-PeriodicalReportConfig-r16 ::= SEQUENCE { reportInterval-r16, reportAmount-r16, reportQuantityCLI-r16, maxRe...
 */
struct CLI_PeriodicalReportConfig_r16 {
    ReportInterval reportInterval_r16; /**< ASN.1 reportInterval-r16；枚举。 */
    CLI_PeriodicalReportConfig_r16_ReportAmount_r16 reportAmount_r16; /**< ASN.1 reportAmount-r16；枚举。 */
    MeasReportQuantityCLI_r16 reportQuantityCLI_r16; /**< ASN.1 reportQuantityCLI-r16；枚举。 */
    int64_t maxReportCLI_r16; /**< ASN.1 maxReportCLI-r16；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief RxTxPeriodical_r17
 * @note ASN.1：RxTxPeriodical-r17；源文件第 11741 行。
 * @note RxTxPeriodical-r17 ::= SEQUENCE { rxTxReportInterval-r17, reportAmount-r17 }
 */
struct RxTxPeriodical_r17 {
    bool has_rxTxReportInterval_r17; /**< rxTxReportInterval-r17 是否存在。 */
    RxTxReportInterval_r17 rxTxReportInterval_r17; /**< ASN.1 rxTxReportInterval-r17；枚举；OPTIONAL。 */
    RxTxPeriodical_r17_ReportAmount_r17 reportAmount_r17; /**< ASN.1 reportAmount-r17；枚举。 */
};


/**
 * @brief ReportOnScellActivation_r18
 * @note ASN.1：ReportOnScellActivation-r18；源文件第 11756 行。
 * @note ReportOnScellActivation-r18 ::= SEQUENCE { rsType, reportQuantityRS-Indexes, maxNrofRS-IndexesToReport, inclu...
 */
struct ReportOnScellActivation_r18 {
    NR_RS_Type rsType; /**< ASN.1 rsType；枚举。 */
    MeasReportQuantity reportQuantityRS_Indexes; /**< ASN.1 reportQuantityRS-Indexes；结构体。 */
    int64_t maxNrofRS_IndexesToReport; /**< ASN.1 maxNrofRS-IndexesToReport；INTEGER (1..32)，位宽 5 bit。 */
    bool includeBeamMeasurements; /**< ASN.1 includeBeamMeasurements；BOOLEAN，1 bit。 */
};


/**
 * @brief ReportConfigNR_ReportType
 * @note ASN.1：reportType；源文件第 11389 行。
 * @note CHOICE { periodical, eventTriggered, reportCGI, reportSFTD, condTriggerConfig...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ReportConfigNR_ReportType_Tag {
    ReportConfigNR_ReportType_Tag_periodical = 0, /**< ASN.1 periodical */
    ReportConfigNR_ReportType_Tag_eventTriggered = 1, /**< ASN.1 eventTriggered */
    ReportConfigNR_ReportType_Tag_reportCGI = 2, /**< ASN.1 reportCGI（扩展备选） */
    ReportConfigNR_ReportType_Tag_reportSFTD = 3, /**< ASN.1 reportSFTD（扩展备选） */
    ReportConfigNR_ReportType_Tag_condTriggerConfig_r16 = 4, /**< ASN.1 condTriggerConfig-r16（扩展备选） */
    ReportConfigNR_ReportType_Tag_cli_Periodical_r16 = 5, /**< ASN.1 cli-Periodical-r16（扩展备选） */
    ReportConfigNR_ReportType_Tag_cli_EventTriggered_r16 = 6, /**< ASN.1 cli-EventTriggered-r16（扩展备选） */
    ReportConfigNR_ReportType_Tag_rxTxPeriodical_r17 = 7, /**< ASN.1 rxTxPeriodical-r17（扩展备选） */
    ReportConfigNR_ReportType_Tag_reportOnScellActivation_r18 = 8, /**< ASN.1 reportOnScellActivation-r18（扩展备选） */
} ReportConfigNR_ReportType_Tag;

struct ReportConfigNR_ReportType {
    ReportConfigNR_ReportType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PeriodicalReportConfig periodical; /**< ASN.1 periodical */
        EventTriggerConfig eventTriggered; /**< ASN.1 eventTriggered */
        ReportCGI reportCGI; /**< ASN.1 reportCGI */
        ReportSFTD_NR reportSFTD; /**< ASN.1 reportSFTD */
        CondTriggerConfig_r16 condTriggerConfig_r16; /**< ASN.1 condTriggerConfig-r16 */
        CLI_PeriodicalReportConfig_r16 cli_Periodical_r16; /**< ASN.1 cli-Periodical-r16 */
        CLI_EventTriggerConfig_r16 cli_EventTriggered_r16; /**< ASN.1 cli-EventTriggered-r16 */
        RxTxPeriodical_r17 rxTxPeriodical_r17; /**< ASN.1 rxTxPeriodical-r17 */
        ReportOnScellActivation_r18 reportOnScellActivation_r18; /**< ASN.1 reportOnScellActivation-r18 */
    } u;
};


/**
 * @brief ReportConfigNR
 * @note ASN.1：ReportConfigNR；源文件第 11388 行。
 * @note ReportConfigNR ::= SEQUENCE { reportType }
 */
struct ReportConfigNR {
    ReportConfigNR_ReportType reportType; /**< ASN.1 reportType；结构体。 */
};


/**
 * @brief CellIndividualOffsetList_r18
 * @note ASN.1：CellIndividualOffsetList-r18；源文件第 11763 行。
 * @note CellIndividualOffsetList-r18 ::= SEQUENCE { physCellId-r18, cellIndividualOffset-r18 }
 */
struct CellIndividualOffsetList_r18 {
    PhysCellId physCellId_r18; /**< ASN.1 physCellId-r18；INTEGER (0..1007)，位宽 10 bit。 */
    Q_OffsetRangeList cellIndividualOffset_r18; /**< ASN.1 cellIndividualOffset-r18；结构体。 */
};


/**
 * @brief MeasReportQuantity_r16
 * @note ASN.1：MeasReportQuantity-r16；源文件第 11805 行。
 * @note MeasReportQuantity-r16 ::= SEQUENCE { cbr-r16 }
 */
struct MeasReportQuantity_r16 {
    bool cbr_r16; /**< ASN.1 cbr-r16；BOOLEAN，1 bit。 */
};


/**
 * @brief EventTriggerConfigNR_SL_r16_EventId_r16_EventC1
 * @note ASN.1：eventId-r16/eventC1；源文件第 11780 行。
 * @note SEQUENCE { c1-Threshold-r16, hysteresis-r16, timeToTrigger-r16 }
 */
struct EventTriggerConfigNR_SL_r16_EventId_r16_EventC1 {
    SL_CBR_r16 c1_Threshold_r16; /**< ASN.1 c1-Threshold-r16；INTEGER (0..100)，位宽 7 bit。 */
    Hysteresis hysteresis_r16; /**< ASN.1 hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r16; /**< ASN.1 timeToTrigger-r16；枚举。 */
};


/**
 * @brief EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16
 * @note ASN.1：eventId-r16/eventC2-r16；源文件第 11785 行。
 * @note SEQUENCE { c2-Threshold-r16, hysteresis-r16, timeToTrigger-r16 }
 */
struct EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16 {
    SL_CBR_r16 c2_Threshold_r16; /**< ASN.1 c2-Threshold-r16；INTEGER (0..100)，位宽 7 bit。 */
    Hysteresis hysteresis_r16; /**< ASN.1 hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger timeToTrigger_r16; /**< ASN.1 timeToTrigger-r16；枚举。 */
};


/**
 * @brief EventTriggerConfigNR_SL_r16_EventId_r16
 * @note ASN.1：eventId-r16；源文件第 11779 行。
 * @note CHOICE { eventC1, eventC2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EventTriggerConfigNR_SL_r16_EventId_r16_Tag {
    EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC1 = 0, /**< ASN.1 eventC1 */
    EventTriggerConfigNR_SL_r16_EventId_r16_Tag_eventC2_r16 = 1, /**< ASN.1 eventC2-r16 */
} EventTriggerConfigNR_SL_r16_EventId_r16_Tag;

struct EventTriggerConfigNR_SL_r16_EventId_r16 {
    EventTriggerConfigNR_SL_r16_EventId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        EventTriggerConfigNR_SL_r16_EventId_r16_EventC1 eventC1; /**< ASN.1 eventC1 */
        EventTriggerConfigNR_SL_r16_EventId_r16_EventC2_r16 eventC2_r16; /**< ASN.1 eventC2-r16 */
    } u;
};


/**
 * @brief EventTriggerConfigNR_SL_r16
 * @note ASN.1：EventTriggerConfigNR-SL-r16；源文件第 11778 行。
 * @note EventTriggerConfigNR-SL-r16 ::= SEQUENCE { eventId-r16, reportInterval-r16, reportAmount-r16, reportQuantity-...
 */
struct EventTriggerConfigNR_SL_r16 {
    EventTriggerConfigNR_SL_r16_EventId_r16 eventId_r16; /**< ASN.1 eventId-r16；结构体。 */
    ReportInterval reportInterval_r16; /**< ASN.1 reportInterval-r16；枚举。 */
    EventTriggerConfigNR_SL_r16_ReportAmount_r16 reportAmount_r16; /**< ASN.1 reportAmount-r16；枚举。 */
    MeasReportQuantity_r16 reportQuantity_r16; /**< ASN.1 reportQuantity-r16；结构体。 */
};


/**
 * @brief PeriodicalReportConfigNR_SL_r16
 * @note ASN.1：PeriodicalReportConfigNR-SL-r16；源文件第 11798 行。
 * @note PeriodicalReportConfigNR-SL-r16 ::= SEQUENCE { reportInterval-r16, reportAmount-r16, reportQuantity-r16 }
 */
struct PeriodicalReportConfigNR_SL_r16 {
    ReportInterval reportInterval_r16; /**< ASN.1 reportInterval-r16；枚举。 */
    PeriodicalReportConfigNR_SL_r16_ReportAmount_r16 reportAmount_r16; /**< ASN.1 reportAmount-r16；枚举。 */
    MeasReportQuantity_r16 reportQuantity_r16; /**< ASN.1 reportQuantity-r16；结构体。 */
};


/**
 * @brief ReportConfigNR_SL_r16_ReportType_r16
 * @note ASN.1：reportType-r16；源文件第 11772 行。
 * @note CHOICE { periodical-r16, eventTriggered-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ReportConfigNR_SL_r16_ReportType_r16_Tag {
    ReportConfigNR_SL_r16_ReportType_r16_Tag_periodical_r16 = 0, /**< ASN.1 periodical-r16 */
    ReportConfigNR_SL_r16_ReportType_r16_Tag_eventTriggered_r16 = 1, /**< ASN.1 eventTriggered-r16 */
} ReportConfigNR_SL_r16_ReportType_r16_Tag;

struct ReportConfigNR_SL_r16_ReportType_r16 {
    ReportConfigNR_SL_r16_ReportType_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PeriodicalReportConfigNR_SL_r16 periodical_r16; /**< ASN.1 periodical-r16 */
        EventTriggerConfigNR_SL_r16 eventTriggered_r16; /**< ASN.1 eventTriggered-r16 */
    } u;
};


/**
 * @brief ReportConfigNR_SL_r16
 * @note ASN.1：ReportConfigNR-SL-r16；源文件第 11771 行。
 * @note ReportConfigNR-SL-r16 ::= SEQUENCE { reportType-r16 }
 */
struct ReportConfigNR_SL_r16 {
    ReportConfigNR_SL_r16_ReportType_r16 reportType_r16; /**< ASN.1 reportType-r16；结构体。 */
};


/**
 * @brief ReportConfigToAddMod_ReportConfig
 * @note ASN.1：reportConfig；源文件第 11817 行。
 * @note CHOICE { reportConfigNR, reportConfigInterRAT, reportConfigNR-SL-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ReportConfigToAddMod_ReportConfig_Tag {
    ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR = 0, /**< ASN.1 reportConfigNR */
    ReportConfigToAddMod_ReportConfig_Tag_reportConfigInterRAT = 1, /**< ASN.1 reportConfigInterRAT（扩展备选） */
    ReportConfigToAddMod_ReportConfig_Tag_reportConfigNR_SL_r16 = 2, /**< ASN.1 reportConfigNR-SL-r16（扩展备选） */
} ReportConfigToAddMod_ReportConfig_Tag;

struct ReportConfigToAddMod_ReportConfig {
    ReportConfigToAddMod_ReportConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ReportConfigNR reportConfigNR; /**< ASN.1 reportConfigNR */
        ReportConfigInterRAT reportConfigInterRAT; /**< ASN.1 reportConfigInterRAT */
        ReportConfigNR_SL_r16 reportConfigNR_SL_r16; /**< ASN.1 reportConfigNR-SL-r16 */
    } u;
};


/**
 * @brief ReportConfigToAddMod
 * @note ASN.1：ReportConfigToAddMod；源文件第 11815 行。
 * @note ReportConfigToAddMod ::= SEQUENCE { reportConfigId, reportConfig }
 */
struct ReportConfigToAddMod {
    ReportConfigId reportConfigId; /**< ASN.1 reportConfigId；INTEGER (1..64)，位宽 6 bit。 */
    ReportConfigToAddMod_ReportConfig reportConfig; /**< ASN.1 reportConfig；结构体。 */
};


/**
 * @brief DL_AM_RLC_v1610
 * @note ASN.1：DL-AM-RLC-v1610；源文件第 11985 行。
 * @note DL-AM-RLC-v1610 ::= SEQUENCE { t-StatusProhibit-v1610 }
 */
struct DL_AM_RLC_v1610 {
    bool has_t_StatusProhibit_v1610; /**< t-StatusProhibit-v1610 是否存在。 */
    T_StatusProhibit_v1610 t_StatusProhibit_v1610; /**< ASN.1 t-StatusProhibit-v1610；枚举；OPTIONAL。 */
};


/**
 * @brief RLC_Config_v1610
 * @note ASN.1：RLC-Config-v1610；源文件第 11976 行。
 * @note RLC-Config-v1610 ::= SEQUENCE { dl-AM-RLC-v1610 }
 */
struct RLC_Config_v1610 {
    DL_AM_RLC_v1610 dl_AM_RLC_v1610; /**< ASN.1 dl-AM-RLC-v1610；结构体。 */
};


/**
 * @brief RLC_BearerConfig_ExtGroup1
 * @note ASN.1：RLC_BearerConfig_ExtGroup1；源文件第 11861 行。
 */
struct RLC_BearerConfig_ExtGroup1 {
    bool has_rlc_Config_v1610; /**< rlc-Config-v1610 是否存在。 */
    RLC_Config_v1610 rlc_Config_v1610; /**< ASN.1 rlc-Config-v1610；结构体；OPTIONAL。 */
};


/**
 * @brief MulticastRLC_BearerConfig_r17
 * @note ASN.1：MulticastRLC-BearerConfig-r17；源文件第 11872 行。
 * @note MulticastRLC-BearerConfig-r17 ::= SEQUENCE { servedMBS-RadioBearer-r17, isPTM-Entity-r17 }
 */
struct MulticastRLC_BearerConfig_r17 {
    MRB_Identity_r17 servedMBS_RadioBearer_r17; /**< ASN.1 servedMBS-RadioBearer-r17；INTEGER (1..512)，位宽 9 bit。 */
    bool has_isPTM_Entity_r17; /**< isPTM-Entity-r17 是否存在。 */
    MulticastRLC_BearerConfig_r17_IsPTM_Entity_r17 isPTM_Entity_r17; /**< ASN.1 isPTM-Entity-r17；枚举；OPTIONAL。 */
};


/**
 * @brief DL_AM_RLC_v1700
 * @note ASN.1：DL-AM-RLC-v1700；源文件第 11990 行。
 * @note DL-AM-RLC-v1700 ::= SEQUENCE { t-ReassemblyExt-r17 }
 */
struct DL_AM_RLC_v1700 {
    bool has_t_ReassemblyExt_r17; /**< t-ReassemblyExt-r17 是否存在。 */
    T_ReassemblyExt_r17 t_ReassemblyExt_r17; /**< ASN.1 t-ReassemblyExt-r17；枚举；OPTIONAL。 */
};


/**
 * @brief DL_UM_RLC_v1700
 * @note ASN.1：DL-UM-RLC-v1700；源文件第 11994 行。
 * @note DL-UM-RLC-v1700 ::= SEQUENCE { t-ReassemblyExt-r17 }
 */
struct DL_UM_RLC_v1700 {
    bool has_t_ReassemblyExt_r17; /**< t-ReassemblyExt-r17 是否存在。 */
    T_ReassemblyExt_r17 t_ReassemblyExt_r17; /**< ASN.1 t-ReassemblyExt-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RLC_Config_v1700
 * @note ASN.1：RLC-Config-v1700；源文件第 11980 行。
 * @note RLC-Config-v1700 ::= SEQUENCE { dl-AM-RLC-v1700, dl-UM-RLC-v1700 }
 */
struct RLC_Config_v1700 {
    DL_AM_RLC_v1700 dl_AM_RLC_v1700; /**< ASN.1 dl-AM-RLC-v1700；结构体。 */
    DL_UM_RLC_v1700 dl_UM_RLC_v1700; /**< ASN.1 dl-UM-RLC-v1700；结构体。 */
};


/**
 * @brief RLC_BearerConfig_ExtGroup2
 * @note ASN.1：RLC_BearerConfig_ExtGroup2；源文件第 11864 行。
 */
struct RLC_BearerConfig_ExtGroup2 {
    bool has_rlc_Config_v1700; /**< rlc-Config-v1700 是否存在。 */
    RLC_Config_v1700 rlc_Config_v1700; /**< ASN.1 rlc-Config-v1700；结构体；OPTIONAL。 */
    bool has_logicalChannelIdentityExt_r17; /**< logicalChannelIdentityExt-r17 是否存在。 */
    LogicalChannelIdentityExt_r17 logicalChannelIdentityExt_r17; /**< ASN.1 logicalChannelIdentityExt-r17；INTEGER (320..65855)，位宽 16 bit；OPTIONAL。 */
    bool has_multicastRLC_BearerConfig_r17; /**< multicastRLC-BearerConfig-r17 是否存在。 */
    MulticastRLC_BearerConfig_r17 multicastRLC_BearerConfig_r17; /**< ASN.1 multicastRLC-BearerConfig-r17；结构体；OPTIONAL。 */
    bool has_servedRadioBearerSRB4_r17; /**< servedRadioBearerSRB4-r17 是否存在。 */
    SRB_Identity_v1700 servedRadioBearerSRB4_r17; /**< ASN.1 servedRadioBearerSRB4-r17；INTEGER (4)，单值 0 bit；OPTIONAL。 */
};


/**
 * @brief RLC_BearerConfig_ServedRadioBearer
 * @note ASN.1：servedRadioBearer；源文件第 11853 行。
 * @note CHOICE { srb-Identity, drb-Identity }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLC_BearerConfig_ServedRadioBearer_Tag {
    RLC_BearerConfig_ServedRadioBearer_Tag_srb_Identity = 0, /**< ASN.1 srb-Identity */
    RLC_BearerConfig_ServedRadioBearer_Tag_drb_Identity = 1, /**< ASN.1 drb-Identity */
} RLC_BearerConfig_ServedRadioBearer_Tag;

struct RLC_BearerConfig_ServedRadioBearer {
    RLC_BearerConfig_ServedRadioBearer_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRB_Identity srb_Identity; /**< ASN.1 srb-Identity */
        DRB_Identity drb_Identity; /**< ASN.1 drb-Identity */
    } u;
};


/**
 * @brief RLC_BearerConfig
 * @note ASN.1：RLC-BearerConfig；源文件第 11851 行。
 * @note RLC-BearerConfig ::= SEQUENCE { logicalChannelIdentity, servedRadioBearer, reestablishRLC, rlc-Con...
 */
struct RLC_BearerConfig {
    LogicalChannelIdentity logicalChannelIdentity; /**< ASN.1 logicalChannelIdentity；INTEGER (1..32)，位宽 5 bit。 */
    bool has_servedRadioBearer; /**< servedRadioBearer 是否存在。 */
    RLC_BearerConfig_ServedRadioBearer servedRadioBearer; /**< ASN.1 servedRadioBearer；结构体；OPTIONAL。 */
    bool has_reestablishRLC; /**< reestablishRLC 是否存在。 */
    RLC_BearerConfig_ReestablishRLC reestablishRLC; /**< ASN.1 reestablishRLC；枚举；OPTIONAL。 */
    bool has_rlc_Config; /**< rlc-Config 是否存在。 */
    RLC_Config rlc_Config; /**< ASN.1 rlc-Config；结构体；OPTIONAL。 */
    bool has_mac_LogicalChannelConfig; /**< mac-LogicalChannelConfig 是否存在。 */
    LogicalChannelConfig mac_LogicalChannelConfig; /**< ASN.1 mac-LogicalChannelConfig；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RLC_BearerConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RLC_BearerConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SCellActivationRS_Config_r17
 * @note ASN.1：SCellActivationRS-Config-r17；源文件第 12046 行。
 * @note SCellActivationRS-Config-r17 ::= SEQUENCE { scellActivationRS-Id-r17, resourceSet-r17, gapBetweenBursts-r17, q...
 */
struct SCellActivationRS_Config_r17 {
    SCellActivationRS_ConfigId_r17 scellActivationRS_Id_r17; /**< ASN.1 scellActivationRS-Id-r17；INTEGER (1..255)，位宽 8 bit。 */
    NZP_CSI_RS_ResourceSetId resourceSet_r17; /**< ASN.1 resourceSet-r17；INTEGER (0..63)，位宽 6 bit。 */
    bool has_gapBetweenBursts_r17; /**< gapBetweenBursts-r17 是否存在。 */
    int64_t gapBetweenBursts_r17; /**< ASN.1 gapBetweenBursts-r17；INTEGER (2..31)，位宽 5 bit；OPTIONAL。 */
    TCI_StateId qcl_Info_r17; /**< ASN.1 qcl-Info-r17；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief SchedulingRequestToAddMod
 * @note ASN.1：SchedulingRequestToAddMod；源文件第 12074 行。
 * @note SchedulingRequestToAddMod ::= SEQUENCE { schedulingRequestId, sr-ProhibitTimer, sr-TransMax }
 */
struct SchedulingRequestToAddMod {
    SchedulingRequestId schedulingRequestId; /**< ASN.1 schedulingRequestId；INTEGER (0..7)，位宽 3 bit。 */
    bool has_sr_ProhibitTimer; /**< sr-ProhibitTimer 是否存在。 */
    SchedulingRequestToAddMod_Sr_ProhibitTimer sr_ProhibitTimer; /**< ASN.1 sr-ProhibitTimer；枚举；OPTIONAL。 */
    SchedulingRequestToAddMod_Sr_TransMax sr_TransMax; /**< ASN.1 sr-TransMax；枚举。 */
};


/**
 * @brief SchedulingRequestToAddModExt_v1700
 * @note ASN.1：SchedulingRequestToAddModExt-v1700；源文件第 12085 行。
 * @note SchedulingRequestToAddModExt-v1700 ::= SEQUENCE { sr-ProhibitTimer-v1700 }
 */
struct SchedulingRequestToAddModExt_v1700 {
    bool has_sr_ProhibitTimer_v1700; /**< sr-ProhibitTimer-v1700 是否存在。 */
    SchedulingRequestToAddModExt_v1700_Sr_ProhibitTimer_v1700 sr_ProhibitTimer_v1700; /**< ASN.1 sr-ProhibitTimer-v1700；枚举；OPTIONAL。 */
};


/**
 * @brief SchedulingRequestResourceConfig_PeriodicityAndOffset
 * @note ASN.1：periodicityAndOffset；源文件第 12101 行。
 * @note CHOICE { sym2, sym6or7, sl1, sl2, sl4, sl5, sl8, sl10, sl16, sl20, sl40, sl80...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag {
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym2 = 0, /**< ASN.1 sym2 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sym6or7 = 1, /**< ASN.1 sym6or7 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl1 = 2, /**< ASN.1 sl1 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl2 = 3, /**< ASN.1 sl2 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl4 = 4, /**< ASN.1 sl4 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl5 = 5, /**< ASN.1 sl5 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl8 = 6, /**< ASN.1 sl8 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl10 = 7, /**< ASN.1 sl10 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl16 = 8, /**< ASN.1 sl16 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl20 = 9, /**< ASN.1 sl20 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl40 = 10, /**< ASN.1 sl40 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl80 = 11, /**< ASN.1 sl80 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl160 = 12, /**< ASN.1 sl160 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl320 = 13, /**< ASN.1 sl320 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag_sl640 = 14, /**< ASN.1 sl640 */
} SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag;

struct SchedulingRequestResourceConfig_PeriodicityAndOffset {
    SchedulingRequestResourceConfig_PeriodicityAndOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null sym2; /**< ASN.1 sym2 */
        Null sym6or7; /**< ASN.1 sym6or7 */
        Null sl1; /**< ASN.1 sl1 */
        int64_t sl2; /**< ASN.1 sl2 */
        int64_t sl4; /**< ASN.1 sl4 */
        int64_t sl5; /**< ASN.1 sl5 */
        int64_t sl8; /**< ASN.1 sl8 */
        int64_t sl10; /**< ASN.1 sl10 */
        int64_t sl16; /**< ASN.1 sl16 */
        int64_t sl20; /**< ASN.1 sl20 */
        int64_t sl40; /**< ASN.1 sl40 */
        int64_t sl80; /**< ASN.1 sl80 */
        int64_t sl160; /**< ASN.1 sl160 */
        int64_t sl320; /**< ASN.1 sl320 */
        int64_t sl640; /**< ASN.1 sl640 */
    } u;
};


/**
 * @brief SchedulingRequestResourceConfig
 * @note ASN.1：SchedulingRequestResourceConfig；源文件第 12098 行。
 * @note SchedulingRequestResourceConfig ::= SEQUENCE { schedulingRequestResourceId, schedulingRequestID, periodicityAndOf...
 */
struct SchedulingRequestResourceConfig {
    SchedulingRequestResourceId schedulingRequestResourceId; /**< ASN.1 schedulingRequestResourceId；INTEGER (1..8)，位宽 3 bit。 */
    SchedulingRequestId schedulingRequestID; /**< ASN.1 schedulingRequestID；INTEGER (0..7)，位宽 3 bit。 */
    bool has_periodicityAndOffset; /**< periodicityAndOffset 是否存在。 */
    SchedulingRequestResourceConfig_PeriodicityAndOffset periodicityAndOffset; /**< ASN.1 periodicityAndOffset；结构体；OPTIONAL。 */
    bool has_resource; /**< resource 是否存在。 */
    PUCCH_ResourceId resource; /**< ASN.1 resource；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SchedulingRequestResourceConfigExt_v1610
 * @note ASN.1：SchedulingRequestResourceConfigExt-v1610；源文件第 12121 行。
 * @note SchedulingRequestResourceConfigExt-v1610 ::= SEQUENCE { phy-PriorityIndex-r16 }
 */
struct SchedulingRequestResourceConfigExt_v1610 {
    bool has_phy_PriorityIndex_r16; /**< phy-PriorityIndex-r16 是否存在。 */
    SchedulingRequestResourceConfigExt_v1610_Phy_PriorityIndex_r16 phy_PriorityIndex_r16; /**< ASN.1 phy-PriorityIndex-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17
 * @note ASN.1：periodicityAndOffset-r17；源文件第 12127 行。
 * @note CHOICE { sl1280, sl2560, sl5120 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag {
    SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl1280 = 0, /**< ASN.1 sl1280 */
    SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl2560 = 1, /**< ASN.1 sl2560 */
    SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag_sl5120 = 2, /**< ASN.1 sl5120 */
} SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag;

struct SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17 {
    SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl1280; /**< ASN.1 sl1280 */
        int64_t sl2560; /**< ASN.1 sl2560 */
        int64_t sl5120; /**< ASN.1 sl5120 */
    } u;
};


/**
 * @brief SchedulingRequestResourceConfigExt_v1700
 * @note ASN.1：SchedulingRequestResourceConfigExt-v1700；源文件第 12126 行。
 * @note SchedulingRequestResourceConfigExt-v1700 ::= SEQUENCE { periodicityAndOffset-r17 }
 */
struct SchedulingRequestResourceConfigExt_v1700 {
    bool has_periodicityAndOffset_r17; /**< periodicityAndOffset-r17 是否存在。 */
    SchedulingRequestResourceConfigExt_v1700_PeriodicityAndOffset_r17 periodicityAndOffset_r17; /**< ASN.1 periodicityAndOffset-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SCS_SpecificCarrier_ExtGroup1
 * @note ASN.1：SCS_SpecificCarrier_ExtGroup1；源文件第 12152 行。
 */
struct SCS_SpecificCarrier_ExtGroup1 {
    bool has_txDirectCurrentLocation; /**< txDirectCurrentLocation 是否存在。 */
    int64_t txDirectCurrentLocation; /**< ASN.1 txDirectCurrentLocation；INTEGER (0..4095)，位宽 12 bit；OPTIONAL。 */
};


/**
 * @brief SCS_SpecificCarrier
 * @note ASN.1：SCS-SpecificCarrier；源文件第 12147 行。
 * @note SCS-SpecificCarrier ::= SEQUENCE { offsetToCarrier, subcarrierSpacing, carrierBandwidth, txDirectCurr...
 */
struct SCS_SpecificCarrier {
    int64_t offsetToCarrier; /**< ASN.1 offsetToCarrier；INTEGER (0..2199)，位宽 12 bit。 */
    SubcarrierSpacing subcarrierSpacing; /**< ASN.1 subcarrierSpacing；枚举。 */
    int64_t carrierBandwidth; /**< ASN.1 carrierBandwidth；INTEGER (1..275)，位宽 9 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SCS_SpecificCarrier_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16
 * @note ASN.1：searchSpaceType-r16/common-r16/dci-Format2-4-r16/nrofCandidates-CI-r16；源文件第 12252 行。
 * @note SEQUENCE { aggregationLevel1-r16, aggregationLevel2-r16, aggregationLevel4-r1...
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16 {
    bool has_aggregationLevel1_r16; /**< aggregationLevel1-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel1_r16 aggregationLevel1_r16; /**< ASN.1 aggregationLevel1-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel2_r16; /**< aggregationLevel2-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel2_r16 aggregationLevel2_r16; /**< ASN.1 aggregationLevel2-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel4_r16; /**< aggregationLevel4-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel4_r16 aggregationLevel4_r16; /**< ASN.1 aggregationLevel4-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel8_r16; /**< aggregationLevel8-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel8_r16 aggregationLevel8_r16; /**< ASN.1 aggregationLevel8-r16；枚举；OPTIONAL。 */
    bool has_aggregationLevel16_r16; /**< aggregationLevel16-r16 是否存在。 */
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16_AggregationLevel16_r16 aggregationLevel16_r16; /**< ASN.1 aggregationLevel16-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16
 * @note ASN.1：searchSpaceType-r16/common-r16/dci-Format2-4-r16；源文件第 12251 行。
 * @note SEQUENCE { nrofCandidates-CI-r16 }
 */
struct SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16 {
    SearchSpaceExt_r16_SearchSpaceType_r16_Common_r16_Dci_Format2_4_r16_NrofCandidates_CI_r16 nrofCandidates_CI_r16; /**< ASN.1 nrofCandidates-CI-r16；结构体。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART019_H */
