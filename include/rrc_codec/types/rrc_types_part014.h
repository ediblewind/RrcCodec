/* ============================================================================
 * types/rrc_types_part014.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART014_H
#define RRC_CODEC_TYPES_PART014_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17
 * @note ASN.1：dynamicDCI-0-2-r17/twoBits-r17；源文件第 10413 行。
 * @note SEQUENCE OF (size 4..4) OF BetaOffsetsCrossPri-r17
 */
struct BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17 {
    BetaOffsetsCrossPri_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17
 * @note ASN.1：dynamicDCI-0-2-r17；源文件第 10411 行。
 * @note CHOICE { oneBit-r17, twoBits-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag {
    BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_oneBit_r17 = 0, /**< ASN.1 oneBit-r17 */
    BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag_twoBits_r17 = 1, /**< ASN.1 twoBits-r17 */
} BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag;

struct BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17 {
    BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17 oneBit_r17; /**< ASN.1 oneBit-r17 */
        BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_TwoBits_r17 twoBits_r17; /**< ASN.1 twoBits-r17 */
    } u;
};


/**
 * @brief BetaOffsetsCrossPriSelDCI_0_2_r17
 * @note ASN.1：BetaOffsetsCrossPriSelDCI-0-2-r17；源文件第 10410 行。
 * @note BetaOffsetsCrossPriSelDCI-0-2-r17 ::= CHOICE { dynamicDCI-0-2-r17, semiStaticDCI-0-2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BetaOffsetsCrossPriSelDCI_0_2_r17_Tag {
    BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_dynamicDCI_0_2_r17 = 0, /**< ASN.1 dynamicDCI-0-2-r17 */
    BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_semiStaticDCI_0_2_r17 = 1, /**< ASN.1 semiStaticDCI-0-2-r17 */
} BetaOffsetsCrossPriSelDCI_0_2_r17_Tag;

struct BetaOffsetsCrossPriSelDCI_0_2_r17 {
    BetaOffsetsCrossPriSelDCI_0_2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17 dynamicDCI_0_2_r17; /**< ASN.1 dynamicDCI-0-2-r17 */
        BetaOffsetsCrossPri_r17 semiStaticDCI_0_2_r17; /**< ASN.1 semiStaticDCI-0-2-r17 */
    } u;
};


/**
 * @brief SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17
 * @note ASN.1：SetupRelease<BetaOffsetsCrossPriSelDCI-0-2-r17>；源文件第 10342 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag {
    SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag;

struct SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17 {
    SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BetaOffsetsCrossPriSelDCI_0_2_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_AccessConfigListDCI_0_1_r17
 * @note ASN.1：UL-AccessConfigListDCI-0-1-r17；源文件第 10401 行。
 * @note UL-AccessConfigListDCI-0-1-r17 ::= SEQUENCE OF (size 1..3) OF ULAccessConfigListDCI01R17Item
 */
struct UL_AccessConfigListDCI_0_1_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UL_AccessConfigListDCI_0_1_r17
 * @note ASN.1：SetupRelease<UL-AccessConfigListDCI-0-1-r17>；源文件第 10348 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag {
    SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag;

struct SetupRelease_UL_AccessConfigListDCI_0_1_r17 {
    SetupRelease_UL_AccessConfigListDCI_0_1_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_AccessConfigListDCI_0_1_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MinSchedulingOffsetK2_Values_r17
 * @note ASN.1：MinSchedulingOffsetK2-Values-r17；源文件第 10380 行。
 * @note MinSchedulingOffsetK2-Values-r17 ::= SEQUENCE OF (size 1..2) OF MinSchedulingOffsetK2ValuesR17Item
 */
struct MinSchedulingOffsetK2_Values_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_MinSchedulingOffsetK2_Values_r17
 * @note ASN.1：SetupRelease<MinSchedulingOffsetK2-Values-r17>；源文件第 10349 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag {
    SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag;

struct SetupRelease_MinSchedulingOffsetK2_Values_r17 {
    SetupRelease_MinSchedulingOffsetK2_Values_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MinSchedulingOffsetK2_Values_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DMRS_BundlingPUSCH_Config_r17
 * @note ASN.1：DMRS-BundlingPUSCH-Config-r17；源文件第 6456 行。
 * @note DMRS-BundlingPUSCH-Config-r17 ::= SEQUENCE { pusch-DMRS-Bundling-r17, pusch-TimeDomainWindowLength-r17, pusch-W...
 */
struct DMRS_BundlingPUSCH_Config_r17 {
    bool has_pusch_DMRS_Bundling_r17; /**< pusch-DMRS-Bundling-r17 是否存在。 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_DMRS_Bundling_r17 pusch_DMRS_Bundling_r17; /**< ASN.1 pusch-DMRS-Bundling-r17；枚举；OPTIONAL。 */
    bool has_pusch_TimeDomainWindowLength_r17; /**< pusch-TimeDomainWindowLength-r17 是否存在。 */
    int64_t pusch_TimeDomainWindowLength_r17; /**< ASN.1 pusch-TimeDomainWindowLength-r17；INTEGER (2..32)，位宽 5 bit；OPTIONAL。 */
    bool has_pusch_WindowRestart_r17; /**< pusch-WindowRestart-r17 是否存在。 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_WindowRestart_r17 pusch_WindowRestart_r17; /**< ASN.1 pusch-WindowRestart-r17；枚举；OPTIONAL。 */
    bool has_pusch_FrequencyHoppingInterval_r17; /**< pusch-FrequencyHoppingInterval-r17 是否存在。 */
    DMRS_BundlingPUSCH_Config_r17_Pusch_FrequencyHoppingInterval_r17 pusch_FrequencyHoppingInterval_r17; /**< ASN.1 pusch-FrequencyHoppingInterval-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DMRS_BundlingPUSCH_Config_r17
 * @note ASN.1：SetupRelease<DMRS-BundlingPUSCH-Config-r17>；源文件第 10351 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag {
    SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag;

struct SetupRelease_DMRS_BundlingPUSCH_Config_r17 {
    SetupRelease_DMRS_BundlingPUSCH_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DMRS_BundlingPUSCH_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_Config_ExtGroup2
 * @note ASN.1：PUSCH_Config_ExtGroup2；源文件第 10338 行。
 */
struct PUSCH_Config_ExtGroup2 {
    bool has_ul_AccessConfigListDCI_0_2_r17; /**< ul-AccessConfigListDCI-0-2-r17 是否存在。 */
    SetupRelease_UL_AccessConfigListDCI_0_2_r17 ul_AccessConfigListDCI_0_2_r17; /**< ASN.1 ul-AccessConfigListDCI-0-2-r17；结构体；OPTIONAL。 */
    bool has_betaOffsetsCrossPri0_r17; /**< betaOffsetsCrossPri0-r17 是否存在。 */
    SetupRelease_BetaOffsetsCrossPriSel_r17 betaOffsetsCrossPri0_r17; /**< ASN.1 betaOffsetsCrossPri0-r17；结构体；OPTIONAL。 */
    bool has_betaOffsetsCrossPri1_r17; /**< betaOffsetsCrossPri1-r17 是否存在。 */
    SetupRelease_BetaOffsetsCrossPriSel_r17 betaOffsetsCrossPri1_r17; /**< ASN.1 betaOffsetsCrossPri1-r17；结构体；OPTIONAL。 */
    bool has_betaOffsetsCrossPri0DCI_0_2_r17; /**< betaOffsetsCrossPri0DCI-0-2-r17 是否存在。 */
    SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17 betaOffsetsCrossPri0DCI_0_2_r17; /**< ASN.1 betaOffsetsCrossPri0DCI-0-2-r17；结构体；OPTIONAL。 */
    bool has_betaOffsetsCrossPri1DCI_0_2_r17; /**< betaOffsetsCrossPri1DCI-0-2-r17 是否存在。 */
    SetupRelease_BetaOffsetsCrossPriSelDCI_0_2_r17 betaOffsetsCrossPri1DCI_0_2_r17; /**< ASN.1 betaOffsetsCrossPri1DCI-0-2-r17；结构体；OPTIONAL。 */
    bool has_mappingPattern_r17; /**< mappingPattern-r17 是否存在。 */
    PUSCH_Config_ExtGroup2_MappingPattern_r17 mappingPattern_r17; /**< ASN.1 mappingPattern-r17；枚举；OPTIONAL。 */
    bool has_secondTPCFieldDCI_0_1_r17; /**< secondTPCFieldDCI-0-1-r17 是否存在。 */
    PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_1_r17 secondTPCFieldDCI_0_1_r17; /**< ASN.1 secondTPCFieldDCI-0-1-r17；枚举；OPTIONAL。 */
    bool has_secondTPCFieldDCI_0_2_r17; /**< secondTPCFieldDCI-0-2-r17 是否存在。 */
    PUSCH_Config_ExtGroup2_SecondTPCFieldDCI_0_2_r17 secondTPCFieldDCI_0_2_r17; /**< ASN.1 secondTPCFieldDCI-0-2-r17；枚举；OPTIONAL。 */
    bool has_sequenceOffsetForRV_r17; /**< sequenceOffsetForRV-r17 是否存在。 */
    int64_t sequenceOffsetForRV_r17; /**< ASN.1 sequenceOffsetForRV-r17；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_ul_AccessConfigListDCI_0_1_r17; /**< ul-AccessConfigListDCI-0-1-r17 是否存在。 */
    SetupRelease_UL_AccessConfigListDCI_0_1_r17 ul_AccessConfigListDCI_0_1_r17; /**< ASN.1 ul-AccessConfigListDCI-0-1-r17；结构体；OPTIONAL。 */
    bool has_minimumSchedulingOffsetK2_r17; /**< minimumSchedulingOffsetK2-r17 是否存在。 */
    SetupRelease_MinSchedulingOffsetK2_Values_r17 minimumSchedulingOffsetK2_r17; /**< ASN.1 minimumSchedulingOffsetK2-r17；结构体；OPTIONAL。 */
    bool has_availableSlotCounting_r17; /**< availableSlotCounting-r17 是否存在。 */
    PUSCH_Config_ExtGroup2_AvailableSlotCounting_r17 availableSlotCounting_r17; /**< ASN.1 availableSlotCounting-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUSCH_Config_r17; /**< dmrs-BundlingPUSCH-Config-r17 是否存在。 */
    SetupRelease_DMRS_BundlingPUSCH_Config_r17 dmrs_BundlingPUSCH_Config_r17; /**< ASN.1 dmrs-BundlingPUSCH-Config-r17；结构体；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_0_2_v1700; /**< harq-ProcessNumberSizeDCI-0-2-v1700 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_0_2_v1700; /**< ASN.1 harq-ProcessNumberSizeDCI-0-2-v1700；INTEGER (5)，单值 0 bit；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_0_1_r17; /**< harq-ProcessNumberSizeDCI-0-1-r17 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_0_1_r17; /**< ASN.1 harq-ProcessNumberSizeDCI-0-1-r17；INTEGER (5)，单值 0 bit；OPTIONAL。 */
    bool has_mpe_ResourcePoolToAddModList_r17; /**< mpe-ResourcePoolToAddModList-r17 是否存在。 */
    MPE_Resource_r17* mpe_ResourcePoolToAddModList_r17_items; /**< ASN.1 mpe-ResourcePoolToAddModList-r17；SEQUENCE OF MPE_Resource_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mpe_ResourcePoolToAddModList_r17_count; /**< mpe-ResourcePoolToAddModList-r17 元素个数。 */
    bool has_mpe_ResourcePoolToReleaseList_r17; /**< mpe-ResourcePoolToReleaseList-r17 是否存在。 */
    MPE_ResourceId_r17* mpe_ResourcePoolToReleaseList_r17_items; /**< ASN.1 mpe-ResourcePoolToReleaseList-r17；SEQUENCE OF MPE_ResourceId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mpe_ResourcePoolToReleaseList_r17_count; /**< mpe-ResourcePoolToReleaseList-r17 元素个数。 */
};


/**
 * @brief PUSCH_PowerControl
 * @note ASN.1：PUSCH-PowerControl；源文件第 10473 行。
 * @note PUSCH-PowerControl ::= SEQUENCE { tpc-Accumulation, msg3-Alpha, p0-NominalWithoutGrant, p0-AlphaSets...
 */
struct PUSCH_PowerControl {
    bool has_tpc_Accumulation; /**< tpc-Accumulation 是否存在。 */
    PUSCH_PowerControl_Tpc_Accumulation tpc_Accumulation; /**< ASN.1 tpc-Accumulation；枚举；OPTIONAL。 */
    bool has_msg3_Alpha; /**< msg3-Alpha 是否存在。 */
    Alpha msg3_Alpha; /**< ASN.1 msg3-Alpha；枚举；OPTIONAL。 */
    bool has_p0_NominalWithoutGrant; /**< p0-NominalWithoutGrant 是否存在。 */
    int64_t p0_NominalWithoutGrant; /**< ASN.1 p0-NominalWithoutGrant；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_p0_AlphaSets; /**< p0-AlphaSets 是否存在。 */
    P0_PUSCH_AlphaSet* p0_AlphaSets_items; /**< ASN.1 p0-AlphaSets；SEQUENCE OF P0_PUSCH_AlphaSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t p0_AlphaSets_count; /**< p0-AlphaSets 元素个数。 */
    bool has_pathlossReferenceRSToAddModList; /**< pathlossReferenceRSToAddModList 是否存在。 */
    PUSCH_PathlossReferenceRS* pathlossReferenceRSToAddModList_items; /**< ASN.1 pathlossReferenceRSToAddModList；SEQUENCE OF PUSCH_PathlossReferenceRS，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSToAddModList_count; /**< pathlossReferenceRSToAddModList 元素个数。 */
    bool has_pathlossReferenceRSToReleaseList; /**< pathlossReferenceRSToReleaseList 是否存在。 */
    PUSCH_PathlossReferenceRS_Id* pathlossReferenceRSToReleaseList_items; /**< ASN.1 pathlossReferenceRSToReleaseList；SEQUENCE OF PUSCH_PathlossReferenceRS_Id，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSToReleaseList_count; /**< pathlossReferenceRSToReleaseList 元素个数。 */
    bool has_twoPUSCH_PC_AdjustmentStates; /**< twoPUSCH-PC-AdjustmentStates 是否存在。 */
    PUSCH_PowerControl_TwoPUSCH_PC_AdjustmentStates twoPUSCH_PC_AdjustmentStates; /**< ASN.1 twoPUSCH-PC-AdjustmentStates；枚举；OPTIONAL。 */
    bool has_deltaMCS; /**< deltaMCS 是否存在。 */
    PUSCH_PowerControl_DeltaMCS deltaMCS; /**< ASN.1 deltaMCS；枚举；OPTIONAL。 */
    bool has_sri_PUSCH_MappingToAddModList; /**< sri-PUSCH-MappingToAddModList 是否存在。 */
    SRI_PUSCH_PowerControl* sri_PUSCH_MappingToAddModList_items; /**< ASN.1 sri-PUSCH-MappingToAddModList；SEQUENCE OF SRI_PUSCH_PowerControl，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sri_PUSCH_MappingToAddModList_count; /**< sri-PUSCH-MappingToAddModList 元素个数。 */
    bool has_sri_PUSCH_MappingToReleaseList; /**< sri-PUSCH-MappingToReleaseList 是否存在。 */
    SRI_PUSCH_PowerControlId* sri_PUSCH_MappingToReleaseList_items; /**< ASN.1 sri-PUSCH-MappingToReleaseList；SEQUENCE OF SRI_PUSCH_PowerControlId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sri_PUSCH_MappingToReleaseList_count; /**< sri-PUSCH-MappingToReleaseList 元素个数。 */
};


/**
 * @brief PUSCH_TimeDomainResourceAllocationList
 * @note ASN.1：PUSCH-TimeDomainResourceAllocationList；源文件第 10604 行。
 * @note PUSCH-TimeDomainResourceAllocationList ::= SEQUENCE OF (size 1..16) OF PUSCH-TimeDomainResourceAllocation
 */
struct PUSCH_TimeDomainResourceAllocationList {
    PUSCH_TimeDomainResourceAllocation* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PUSCH_TimeDomainResourceAllocationList
 * @note ASN.1：SetupRelease<PUSCH-TimeDomainResourceAllocationList>；源文件第 10280 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag {
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag;

struct SetupRelease_PUSCH_TimeDomainResourceAllocationList {
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_TimeDomainResourceAllocationList setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BetaOffsets
 * @note ASN.1：BetaOffsets；源文件第 4447 行。
 * @note BetaOffsets ::= SEQUENCE { betaOffsetACK-Index1, betaOffsetACK-Index2, betaOffsetACK-Index3, ...
 */
struct BetaOffsets {
    bool has_betaOffsetACK_Index1; /**< betaOffsetACK-Index1 是否存在。 */
    int64_t betaOffsetACK_Index1; /**< ASN.1 betaOffsetACK-Index1；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_betaOffsetACK_Index2; /**< betaOffsetACK-Index2 是否存在。 */
    int64_t betaOffsetACK_Index2; /**< ASN.1 betaOffsetACK-Index2；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_betaOffsetACK_Index3; /**< betaOffsetACK-Index3 是否存在。 */
    int64_t betaOffsetACK_Index3; /**< ASN.1 betaOffsetACK-Index3；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_betaOffsetCSI_Part1_Index1; /**< betaOffsetCSI-Part1-Index1 是否存在。 */
    int64_t betaOffsetCSI_Part1_Index1; /**< ASN.1 betaOffsetCSI-Part1-Index1；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_betaOffsetCSI_Part1_Index2; /**< betaOffsetCSI-Part1-Index2 是否存在。 */
    int64_t betaOffsetCSI_Part1_Index2; /**< ASN.1 betaOffsetCSI-Part1-Index2；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_betaOffsetCSI_Part2_Index1; /**< betaOffsetCSI-Part2-Index1 是否存在。 */
    int64_t betaOffsetCSI_Part2_Index1; /**< ASN.1 betaOffsetCSI-Part2-Index1；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_betaOffsetCSI_Part2_Index2; /**< betaOffsetCSI-Part2-Index2 是否存在。 */
    int64_t betaOffsetCSI_Part2_Index2; /**< ASN.1 betaOffsetCSI-Part2-Index2；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief UCI_OnPUSCH_BetaOffsets_Dynamic
 * @note ASN.1：betaOffsets/dynamic；源文件第 10372 行。
 * @note SEQUENCE OF (size 4..4) OF BetaOffsets
 */
struct UCI_OnPUSCH_BetaOffsets_Dynamic {
    BetaOffsets* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UCI_OnPUSCH_BetaOffsets
 * @note ASN.1：betaOffsets；源文件第 10371 行。
 * @note CHOICE { dynamic, semiStatic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UCI_OnPUSCH_BetaOffsets_Tag {
    UCI_OnPUSCH_BetaOffsets_Tag_dynamic = 0, /**< ASN.1 dynamic */
    UCI_OnPUSCH_BetaOffsets_Tag_semiStatic = 1, /**< ASN.1 semiStatic */
} UCI_OnPUSCH_BetaOffsets_Tag;

struct UCI_OnPUSCH_BetaOffsets {
    UCI_OnPUSCH_BetaOffsets_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UCI_OnPUSCH_BetaOffsets_Dynamic dynamic; /**< ASN.1 dynamic */
        BetaOffsets semiStatic; /**< ASN.1 semiStatic */
    } u;
};


/**
 * @brief UCI_OnPUSCH
 * @note ASN.1：UCI-OnPUSCH；源文件第 10370 行。
 * @note UCI-OnPUSCH ::= SEQUENCE { betaOffsets, scaling }
 */
struct UCI_OnPUSCH {
    bool has_betaOffsets; /**< betaOffsets 是否存在。 */
    UCI_OnPUSCH_BetaOffsets betaOffsets; /**< ASN.1 betaOffsets；结构体；OPTIONAL。 */
    UCI_OnPUSCH_Scaling scaling; /**< ASN.1 scaling；枚举。 */
};


/**
 * @brief SetupRelease_UCI_OnPUSCH
 * @note ASN.1：SetupRelease<UCI-OnPUSCH>；源文件第 10289 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UCI_OnPUSCH_Tag {
    SetupRelease_UCI_OnPUSCH_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UCI_OnPUSCH_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UCI_OnPUSCH_Tag;

struct SetupRelease_UCI_OnPUSCH {
    SetupRelease_UCI_OnPUSCH_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UCI_OnPUSCH setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_Config
 * @note ASN.1：PUSCH-Config；源文件第 10270 行。
 * @note PUSCH-Config ::= SEQUENCE { dataScramblingIdentityPUSCH, txConfig, dmrs-UplinkForPUSCH-Mapping...
 */
struct PUSCH_Config {
    bool has_dataScramblingIdentityPUSCH; /**< dataScramblingIdentityPUSCH 是否存在。 */
    int64_t dataScramblingIdentityPUSCH; /**< ASN.1 dataScramblingIdentityPUSCH；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_txConfig; /**< txConfig 是否存在。 */
    PUSCH_Config_TxConfig txConfig; /**< ASN.1 txConfig；枚举；OPTIONAL。 */
    bool has_dmrs_UplinkForPUSCH_MappingTypeA; /**< dmrs-UplinkForPUSCH-MappingTypeA 是否存在。 */
    SetupRelease_DMRS_UplinkConfig dmrs_UplinkForPUSCH_MappingTypeA; /**< ASN.1 dmrs-UplinkForPUSCH-MappingTypeA；结构体；OPTIONAL。 */
    bool has_dmrs_UplinkForPUSCH_MappingTypeB; /**< dmrs-UplinkForPUSCH-MappingTypeB 是否存在。 */
    SetupRelease_DMRS_UplinkConfig dmrs_UplinkForPUSCH_MappingTypeB; /**< ASN.1 dmrs-UplinkForPUSCH-MappingTypeB；结构体；OPTIONAL。 */
    bool has_pusch_PowerControl; /**< pusch-PowerControl 是否存在。 */
    PUSCH_PowerControl pusch_PowerControl; /**< ASN.1 pusch-PowerControl；结构体；OPTIONAL。 */
    bool has_frequencyHopping; /**< frequencyHopping 是否存在。 */
    PUSCH_Config_FrequencyHopping frequencyHopping; /**< ASN.1 frequencyHopping；枚举；OPTIONAL。 */
    bool has_frequencyHoppingOffsetLists; /**< frequencyHoppingOffsetLists 是否存在。 */
    int64_t* frequencyHoppingOffsetLists_items; /**< ASN.1 frequencyHoppingOffsetLists；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t frequencyHoppingOffsetLists_count; /**< frequencyHoppingOffsetLists 元素个数。 */
    PUSCH_Config_ResourceAllocation resourceAllocation; /**< ASN.1 resourceAllocation；枚举。 */
    bool has_pusch_TimeDomainAllocationList; /**< pusch-TimeDomainAllocationList 是否存在。 */
    SetupRelease_PUSCH_TimeDomainResourceAllocationList pusch_TimeDomainAllocationList; /**< ASN.1 pusch-TimeDomainAllocationList；结构体；OPTIONAL。 */
    bool has_pusch_AggregationFactor; /**< pusch-AggregationFactor 是否存在。 */
    PUSCH_Config_Pusch_AggregationFactor pusch_AggregationFactor; /**< ASN.1 pusch-AggregationFactor；枚举；OPTIONAL。 */
    bool has_mcs_Table; /**< mcs-Table 是否存在。 */
    PUSCH_Config_Mcs_Table mcs_Table; /**< ASN.1 mcs-Table；枚举；OPTIONAL。 */
    bool has_mcs_TableTransformPrecoder; /**< mcs-TableTransformPrecoder 是否存在。 */
    PUSCH_Config_Mcs_TableTransformPrecoder mcs_TableTransformPrecoder; /**< ASN.1 mcs-TableTransformPrecoder；枚举；OPTIONAL。 */
    bool has_transformPrecoder; /**< transformPrecoder 是否存在。 */
    PUSCH_Config_TransformPrecoder transformPrecoder; /**< ASN.1 transformPrecoder；枚举；OPTIONAL。 */
    bool has_codebookSubset; /**< codebookSubset 是否存在。 */
    PUSCH_Config_CodebookSubset codebookSubset; /**< ASN.1 codebookSubset；枚举；OPTIONAL。 */
    bool has_maxRank; /**< maxRank 是否存在。 */
    int64_t maxRank; /**< ASN.1 maxRank；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_rbg_Size; /**< rbg-Size 是否存在。 */
    PUSCH_Config_Rbg_Size rbg_Size; /**< ASN.1 rbg-Size；枚举；OPTIONAL。 */
    bool has_uci_OnPUSCH; /**< uci-OnPUSCH 是否存在。 */
    SetupRelease_UCI_OnPUSCH uci_OnPUSCH; /**< ASN.1 uci-OnPUSCH；结构体；OPTIONAL。 */
    bool has_tp_pi2BPSK; /**< tp-pi2BPSK 是否存在。 */
    PUSCH_Config_Tp_pi2BPSK tp_pi2BPSK; /**< ASN.1 tp-pi2BPSK；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUSCH_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PUSCH_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PUSCH_Config_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PUSCH_Config
 * @note ASN.1：SetupRelease<PUSCH-Config>；源文件第 1333 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_Config_Tag {
    SetupRelease_PUSCH_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_Config_Tag;

struct SetupRelease_PUSCH_Config {
    SetupRelease_PUSCH_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_UplinkDedicatedSDT_r17
 * @note ASN.1：BWP-UplinkDedicatedSDT-r17；源文件第 1332 行。
 * @note BWP-UplinkDedicatedSDT-r17 ::= SEQUENCE { pusch-Config-r17, configuredGrantConfigToAddModList-r17, configure...
 */
struct BWP_UplinkDedicatedSDT_r17 {
    bool has_pusch_Config_r17; /**< pusch-Config-r17 是否存在。 */
    SetupRelease_PUSCH_Config pusch_Config_r17; /**< ASN.1 pusch-Config-r17；结构体；OPTIONAL。 */
    bool has_configuredGrantConfigToAddModList_r17; /**< configuredGrantConfigToAddModList-r17 是否存在。 */
    ConfiguredGrantConfigToAddModList_r16 configuredGrantConfigToAddModList_r17; /**< ASN.1 configuredGrantConfigToAddModList-r17；SEQUENCE OF ConfiguredGrantConfig，SIZE (1..12)；OPTIONAL。 */
    bool has_configuredGrantConfigToReleaseList_r17; /**< configuredGrantConfigToReleaseList-r17 是否存在。 */
    ConfiguredGrantConfigToReleaseList_r16 configuredGrantConfigToReleaseList_r17; /**< ASN.1 configuredGrantConfigToReleaseList-r17；SEQUENCE OF ConfiguredGrantConfigIndex_r16，SIZE (1..12)；OPTIONAL。 */
};


/**
 * @brief SetupRelease_BWP_UplinkDedicatedSDT_r17
 * @note ASN.1：SetupRelease<BWP-UplinkDedicatedSDT-r17>；源文件第 1303 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag {
    SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag;

struct SetupRelease_BWP_UplinkDedicatedSDT_r17 {
    SetupRelease_BWP_UplinkDedicatedSDT_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BWP_UplinkDedicatedSDT_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief CG_SDT_TA_ValidationConfig_r17
 * @note ASN.1：CG-SDT-TA-ValidationConfig-r17；源文件第 1321 行。
 * @note CG-SDT-TA-ValidationConfig-r17 ::= SEQUENCE { cg-SDT-RSRP-ChangeThreshold-r17 }
 */
struct CG_SDT_TA_ValidationConfig_r17 {
    CG_SDT_TA_ValidationConfig_r17_Cg_SDT_RSRP_ChangeThreshold_r17 cg_SDT_RSRP_ChangeThreshold_r17; /**< ASN.1 cg-SDT-RSRP-ChangeThreshold-r17；枚举。 */
};


/**
 * @brief SetupRelease_CG_SDT_TA_ValidationConfig_r17
 * @note ASN.1：SetupRelease<CG-SDT-TA-ValidationConfig-r17>；源文件第 1308 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag {
    SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag;

struct SetupRelease_CG_SDT_TA_ValidationConfig_r17 {
    SetupRelease_CG_SDT_TA_ValidationConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CG_SDT_TA_ValidationConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SDT_MAC_PHY_CG_Config_r17
 * @note ASN.1：SDT-MAC-PHY-CG-Config-r17；源文件第 1299 行。
 * @note SDT-MAC-PHY-CG-Config-r17 ::= SEQUENCE { cg-SDT-ConfigLCH-RestrictionToAddModList-r17, cg-SDT-ConfigLCH-Res...
 */
struct SDT_MAC_PHY_CG_Config_r17 {
    bool has_cg_SDT_ConfigLCH_RestrictionToAddModList_r17; /**< cg-SDT-ConfigLCH-RestrictionToAddModList-r17 是否存在。 */
    CG_SDT_ConfigLCH_Restriction_r17* cg_SDT_ConfigLCH_RestrictionToAddModList_r17_items; /**< ASN.1 cg-SDT-ConfigLCH-RestrictionToAddModList-r17；SEQUENCE OF CG_SDT_ConfigLCH_Restriction_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_SDT_ConfigLCH_RestrictionToAddModList_r17_count; /**< cg-SDT-ConfigLCH-RestrictionToAddModList-r17 元素个数。 */
    bool has_cg_SDT_ConfigLCH_RestrictionToReleaseList_r17; /**< cg-SDT-ConfigLCH-RestrictionToReleaseList-r17 是否存在。 */
    LogicalChannelIdentity* cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_items; /**< ASN.1 cg-SDT-ConfigLCH-RestrictionToReleaseList-r17；SEQUENCE OF LogicalChannelIdentity，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_SDT_ConfigLCH_RestrictionToReleaseList_r17_count; /**< cg-SDT-ConfigLCH-RestrictionToReleaseList-r17 元素个数。 */
    bool has_cg_SDT_ConfigInitialBWP_NUL_r17; /**< cg-SDT-ConfigInitialBWP-NUL-r17 是否存在。 */
    SetupRelease_BWP_UplinkDedicatedSDT_r17 cg_SDT_ConfigInitialBWP_NUL_r17; /**< ASN.1 cg-SDT-ConfigInitialBWP-NUL-r17；结构体；OPTIONAL。 */
    bool has_cg_SDT_ConfigInitialBWP_SUL_r17; /**< cg-SDT-ConfigInitialBWP-SUL-r17 是否存在。 */
    SetupRelease_BWP_UplinkDedicatedSDT_r17 cg_SDT_ConfigInitialBWP_SUL_r17; /**< ASN.1 cg-SDT-ConfigInitialBWP-SUL-r17；结构体；OPTIONAL。 */
    bool has_cg_SDT_ConfigInitialBWP_DL_r17; /**< cg-SDT-ConfigInitialBWP-DL-r17 是否存在。 */
    BWP_DownlinkDedicatedSDT_r17 cg_SDT_ConfigInitialBWP_DL_r17; /**< ASN.1 cg-SDT-ConfigInitialBWP-DL-r17；结构体；OPTIONAL。 */
    bool has_cg_SDT_TimeAlignmentTimer_r17; /**< cg-SDT-TimeAlignmentTimer-r17 是否存在。 */
    TimeAlignmentTimer cg_SDT_TimeAlignmentTimer_r17; /**< ASN.1 cg-SDT-TimeAlignmentTimer-r17；枚举；OPTIONAL。 */
    bool has_cg_SDT_RSRP_ThresholdSSB_r17; /**< cg-SDT-RSRP-ThresholdSSB-r17 是否存在。 */
    RSRP_Range cg_SDT_RSRP_ThresholdSSB_r17; /**< ASN.1 cg-SDT-RSRP-ThresholdSSB-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_cg_SDT_TA_ValidationConfig_r17; /**< cg-SDT-TA-ValidationConfig-r17 是否存在。 */
    SetupRelease_CG_SDT_TA_ValidationConfig_r17 cg_SDT_TA_ValidationConfig_r17; /**< ASN.1 cg-SDT-TA-ValidationConfig-r17；结构体；OPTIONAL。 */
    bool has_cg_SDT_CS_RNTI_r17; /**< cg-SDT-CS-RNTI-r17 是否存在。 */
    RNTI_Value cg_SDT_CS_RNTI_r17; /**< ASN.1 cg-SDT-CS-RNTI-r17；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CG_SDT_ConfigLCH_Restriction_r17
 * @note ASN.1：CG-SDT-ConfigLCH-Restriction-r17；源文件第 1339 行。
 * @note CG-SDT-ConfigLCH-Restriction-r17 ::= SEQUENCE { logicalChannelIdentity-r17, configuredGrantType1Allowed-r17, allow...
 */
struct CG_SDT_ConfigLCH_Restriction_r17 {
    LogicalChannelIdentity logicalChannelIdentity_r17; /**< ASN.1 logicalChannelIdentity-r17；INTEGER (1..32)，位宽 5 bit。 */
    bool has_configuredGrantType1Allowed_r17; /**< configuredGrantType1Allowed-r17 是否存在。 */
    CG_SDT_ConfigLCH_Restriction_r17_ConfiguredGrantType1Allowed_r17 configuredGrantType1Allowed_r17; /**< ASN.1 configuredGrantType1Allowed-r17；枚举；OPTIONAL。 */
    bool has_allowedCG_List_r17; /**< allowedCG-List-r17 是否存在。 */
    ConfiguredGrantConfigIndexMAC_r16* allowedCG_List_r17_items; /**< ASN.1 allowedCG-List-r17；SEQUENCE OF ConfiguredGrantConfigIndexMAC_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t allowedCG_List_r17_count; /**< allowedCG-List-r17 元素个数。 */
};


/**
 * @brief CG_SDT_ConfigLCH_Restriction_v1800
 * @note ASN.1：CG-SDT-ConfigLCH-Restriction-v1800；源文件第 1346 行。
 * @note CG-SDT-ConfigLCH-Restriction-v1800 ::= SEQUENCE { cg-SDT-MaxDurationToNext-CG-Occasion-r18 }
 */
struct CG_SDT_ConfigLCH_Restriction_v1800 {
    bool has_cg_SDT_MaxDurationToNext_CG_Occasion_r18; /**< cg-SDT-MaxDurationToNext-CG-Occasion-r18 是否存在。 */
    CG_SDT_ConfigLCH_Restriction_v1800_Cg_SDT_MaxDurationToNext_CG_Occasion_r18 cg_SDT_MaxDurationToNext_CG_Occasion_r18; /**< ASN.1 cg-SDT-MaxDurationToNext-CG-Occasion-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_PosRRC_InactiveConfig_r17
 * @note ASN.1：SRS-PosRRC-InactiveConfig-r17；源文件第 1355 行。
 * @note SRS-PosRRC-InactiveConfig-r17 ::= SEQUENCE { srs-PosConfigNUL-r17, srs-PosConfigSUL-r17, bwp-NUL-r17, bwp-SUL-r...
 */
struct SRS_PosRRC_InactiveConfig_r17 {
    bool has_srs_PosConfigNUL_r17; /**< srs-PosConfigNUL-r17 是否存在。 */
    SRS_PosConfig_r17 srs_PosConfigNUL_r17; /**< ASN.1 srs-PosConfigNUL-r17；结构体；OPTIONAL。 */
    bool has_srs_PosConfigSUL_r17; /**< srs-PosConfigSUL-r17 是否存在。 */
    SRS_PosConfig_r17 srs_PosConfigSUL_r17; /**< ASN.1 srs-PosConfigSUL-r17；结构体；OPTIONAL。 */
    bool has_bwp_NUL_r17; /**< bwp-NUL-r17 是否存在。 */
    BWP bwp_NUL_r17; /**< ASN.1 bwp-NUL-r17；结构体；OPTIONAL。 */
    bool has_bwp_SUL_r17; /**< bwp-SUL-r17 是否存在。 */
    BWP bwp_SUL_r17; /**< ASN.1 bwp-SUL-r17；结构体；OPTIONAL。 */
    bool has_inactivePosSRS_TimeAlignmentTimer_r17; /**< inactivePosSRS-TimeAlignmentTimer-r17 是否存在。 */
    TimeAlignmentTimer inactivePosSRS_TimeAlignmentTimer_r17; /**< ASN.1 inactivePosSRS-TimeAlignmentTimer-r17；枚举；OPTIONAL。 */
    bool has_inactivePosSRS_RSRP_ChangeThreshold_r17; /**< inactivePosSRS-RSRP-ChangeThreshold-r17 是否存在。 */
    RSRP_ChangeThreshold_r17 inactivePosSRS_RSRP_ChangeThreshold_r17; /**< ASN.1 inactivePosSRS-RSRP-ChangeThreshold-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RRCResume_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1466 行。
 * @note SEQUENCE { }
 */
struct RRCResume_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCResume_v1800_IEs
 * @note ASN.1：RRCResume-v1800-IEs；源文件第 1463 行。
 * @note RRCResume-v1800-IEs ::= SEQUENCE { needForInterruptionConfigNR-r18, reselectionMeasurementReq-r18, no...
 */
struct RRCResume_v1800_IEs {
    bool has_needForInterruptionConfigNR_r18; /**< needForInterruptionConfigNR-r18 是否存在。 */
    RRCResume_v1800_IEs_NeedForInterruptionConfigNR_r18 needForInterruptionConfigNR_r18; /**< ASN.1 needForInterruptionConfigNR-r18；枚举；OPTIONAL。 */
    bool has_reselectionMeasurementReq_r18; /**< reselectionMeasurementReq-r18 是否存在。 */
    RRCResume_v1800_IEs_ReselectionMeasurementReq_r18 reselectionMeasurementReq_r18; /**< ASN.1 reselectionMeasurementReq-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResume_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResume_v1700_IEs
 * @note ASN.1：RRCResume-v1700-IEs；源文件第 1453 行。
 * @note RRCResume-v1700-IEs ::= SEQUENCE { sl-ConfigDedicatedNR-r17, sl-L2RemoteUE-Config-r17, needForGapNCSG...
 */
struct RRCResume_v1700_IEs {
    bool has_sl_ConfigDedicatedNR_r17; /**< sl-ConfigDedicatedNR-r17 是否存在。 */
    SetupRelease_SL_ConfigDedicatedNR_r16 sl_ConfigDedicatedNR_r17; /**< ASN.1 sl-ConfigDedicatedNR-r17；结构体；OPTIONAL。 */
    bool has_sl_L2RemoteUE_Config_r17; /**< sl-L2RemoteUE-Config-r17 是否存在。 */
    SetupRelease_SL_L2RemoteUE_Config_r17 sl_L2RemoteUE_Config_r17; /**< ASN.1 sl-L2RemoteUE-Config-r17；结构体；OPTIONAL。 */
    bool has_needForGapNCSG_ConfigNR_r17; /**< needForGapNCSG-ConfigNR-r17 是否存在。 */
    SetupRelease_NeedForGapNCSG_ConfigNR_r17 needForGapNCSG_ConfigNR_r17; /**< ASN.1 needForGapNCSG-ConfigNR-r17；结构体；OPTIONAL。 */
    bool has_needForGapNCSG_ConfigEUTRA_r17; /**< needForGapNCSG-ConfigEUTRA-r17 是否存在。 */
    SetupRelease_NeedForGapNCSG_ConfigEUTRA_r17 needForGapNCSG_ConfigEUTRA_r17; /**< ASN.1 needForGapNCSG-ConfigEUTRA-r17；结构体；OPTIONAL。 */
    bool has_scg_State_r17; /**< scg-State-r17 是否存在。 */
    RRCResume_v1700_IEs_Scg_State_r17 scg_State_r17; /**< ASN.1 scg-State-r17；枚举；OPTIONAL。 */
    bool has_appLayerMeasConfig_r17; /**< appLayerMeasConfig-r17 是否存在。 */
    AppLayerMeasConfig_r17 appLayerMeasConfig_r17; /**< ASN.1 appLayerMeasConfig-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResume_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16
 * @note ASN.1：mrdc-SecondaryCellGroup-r16；源文件第 1445 行。
 * @note CHOICE { nr-SCG-r16, eutra-SCG-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag {
    RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_nr_SCG_r16 = 0, /**< ASN.1 nr-SCG-r16 */
    RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag_eutra_SCG_r16 = 1, /**< ASN.1 eutra-SCG-r16 */
} RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag;

struct RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16 {
    RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReconfiguration* nr_SCG_r16; /**< ASN.1 nr-SCG-r16 */
        OctetString eutra_SCG_r16; /**< ASN.1 eutra-SCG-r16 */
    } u;
};


/**
 * @brief RRCResume_v1610_IEs
 * @note ASN.1：RRCResume-v1610-IEs；源文件第 1441 行。
 * @note RRCResume-v1610-IEs ::= SEQUENCE { idleModeMeasurementReq-r16, restoreMCG-SCells-r16, restoreSCG-r16,...
 */
struct RRCResume_v1610_IEs {
    bool has_idleModeMeasurementReq_r16; /**< idleModeMeasurementReq-r16 是否存在。 */
    RRCResume_v1610_IEs_IdleModeMeasurementReq_r16 idleModeMeasurementReq_r16; /**< ASN.1 idleModeMeasurementReq-r16；枚举；OPTIONAL。 */
    bool has_restoreMCG_SCells_r16; /**< restoreMCG-SCells-r16 是否存在。 */
    RRCResume_v1610_IEs_RestoreMCG_SCells_r16 restoreMCG_SCells_r16; /**< ASN.1 restoreMCG-SCells-r16；枚举；OPTIONAL。 */
    bool has_restoreSCG_r16; /**< restoreSCG-r16 是否存在。 */
    RRCResume_v1610_IEs_RestoreSCG_r16 restoreSCG_r16; /**< ASN.1 restoreSCG-r16；枚举；OPTIONAL。 */
    bool has_mrdc_SecondaryCellGroup_r16; /**< mrdc-SecondaryCellGroup-r16 是否存在。 */
    RRCResume_v1610_IEs_Mrdc_SecondaryCellGroup_r16 mrdc_SecondaryCellGroup_r16; /**< ASN.1 mrdc-SecondaryCellGroup-r16；结构体；OPTIONAL。 */
    bool has_needForGapsConfigNR_r16; /**< needForGapsConfigNR-r16 是否存在。 */
    SetupRelease_NeedForGapsConfigNR_r16 needForGapsConfigNR_r16; /**< ASN.1 needForGapsConfigNR-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResume_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResume_v1560_IEs
 * @note ASN.1：RRCResume-v1560-IEs；源文件第 1435 行。
 * @note RRCResume-v1560-IEs ::= SEQUENCE { radioBearerConfig2, sk-Counter, nonCriticalExtension }
 */
struct RRCResume_v1560_IEs {
    RadioBearerConfig* radioBearerConfig2; /**< ASN.1 radioBearerConfig2；OCTET STRING (CONTAINING RadioBearerConfig)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_sk_Counter; /**< sk-Counter 是否存在。 */
    SK_Counter sk_Counter; /**< ASN.1 sk-Counter；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResume_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResume_IEs
 * @note ASN.1：RRCResume-IEs；源文件第 1426 行。
 * @note RRCResume-IEs ::= SEQUENCE { radioBearerConfig, masterCellGroup, measConfig, fullConfig, lateNo...
 */
struct RRCResume_IEs {
    bool has_radioBearerConfig; /**< radioBearerConfig 是否存在。 */
    RadioBearerConfig radioBearerConfig; /**< ASN.1 radioBearerConfig；结构体；OPTIONAL。 */
    CellGroupConfig* masterCellGroup; /**< ASN.1 masterCellGroup；OCTET STRING (CONTAINING CellGroupConfig)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_measConfig; /**< measConfig 是否存在。 */
    MeasConfig measConfig; /**< ASN.1 measConfig；结构体；OPTIONAL。 */
    bool has_fullConfig; /**< fullConfig 是否存在。 */
    RRCResume_IEs_FullConfig fullConfig; /**< ASN.1 fullConfig；枚举；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResume_v1560_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResume_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1422 行。
 * @note SEQUENCE { }
 */
struct RRCResume_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCResume_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1420 行。
 * @note CHOICE { rrcResume, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCResume_CriticalExtensions_Tag {
    RRCResume_CriticalExtensions_Tag_rrcResume = 0, /**< ASN.1 rrcResume */
    RRCResume_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCResume_CriticalExtensions_Tag;

struct RRCResume_CriticalExtensions {
    RRCResume_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCResume_IEs rrcResume; /**< ASN.1 rrcResume */
        RRCResume_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCResume
 * @note ASN.1：RRCResume；源文件第 1418 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_RRCResume（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCResume ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCResume {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCResume_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ResultsPerSSB_IndexList_r16
 * @note ASN.1：ResultsPerSSB-IndexList-r16；源文件第 8217 行。
 * @note ResultsPerSSB-IndexList-r16 ::= SEQUENCE OF (size 1..32) OF ResultsPerSSB-IndexIdle-r16
 */
struct ResultsPerSSB_IndexList_r16 {
    ResultsPerSSB_IndexIdle_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultIdleNR_r16_MeasResultServingCell_r16
 * @note ASN.1：measResultServingCell-r16；源文件第 8188 行。
 * @note SEQUENCE { rsrp-Result-r16, rsrq-Result-r16, resultsSSB-Indexes-r16 }
 */
struct MeasResultIdleNR_r16_MeasResultServingCell_r16 {
    bool has_rsrp_Result_r16; /**< rsrp-Result-r16 是否存在。 */
    RSRP_Range rsrp_Result_r16; /**< ASN.1 rsrp-Result-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrq_Result_r16; /**< rsrq-Result-r16 是否存在。 */
    RSRQ_Range rsrq_Result_r16; /**< ASN.1 rsrq-Result-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_resultsSSB_Indexes_r16; /**< resultsSSB-Indexes-r16 是否存在。 */
    ResultsPerSSB_IndexList_r16 resultsSSB_Indexes_r16; /**< ASN.1 resultsSSB-Indexes-r16；SEQUENCE OF ResultsPerSSB_IndexIdle_r16，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief MeasResultIdleNR_r16
 * @note ASN.1：MeasResultIdleNR-r16；源文件第 8187 行。
 * @note MeasResultIdleNR-r16 ::= SEQUENCE { measResultServingCell-r16, measResultsPerCarrierListIdleNR-r16 }
 */
struct MeasResultIdleNR_r16 {
    MeasResultIdleNR_r16_MeasResultServingCell_r16 measResultServingCell_r16; /**< ASN.1 measResultServingCell-r16；结构体。 */
    bool has_measResultsPerCarrierListIdleNR_r16; /**< measResultsPerCarrierListIdleNR-r16 是否存在。 */
    MeasResultsPerCarrierIdleNR_r16* measResultsPerCarrierListIdleNR_r16_items; /**< ASN.1 measResultsPerCarrierListIdleNR-r16；SEQUENCE OF MeasResultsPerCarrierIdleNR_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measResultsPerCarrierListIdleNR_r16_count; /**< measResultsPerCarrierListIdleNR-r16 元素个数。 */
};


/**
 * @brief RRCResumeComplete_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1526 行。
 * @note SEQUENCE { }
 */
struct RRCResumeComplete_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCResumeComplete_v1800_IEs
 * @note ASN.1：RRCResumeComplete-v1800-IEs；源文件第 1519 行。
 * @note RRCResumeComplete-v1800-IEs ::= SEQUENCE { needForInterruptionInfoNR-r18, musim-CapRestrictionInd-r18, flight...
 */
struct RRCResumeComplete_v1800_IEs {
    bool has_needForInterruptionInfoNR_r18; /**< needForInterruptionInfoNR-r18 是否存在。 */
    NeedForInterruptionInfoNR_r18 needForInterruptionInfoNR_r18; /**< ASN.1 needForInterruptionInfoNR-r18；结构体；OPTIONAL。 */
    bool has_musim_CapRestrictionInd_r18; /**< musim-CapRestrictionInd-r18 是否存在。 */
    RRCResumeComplete_v1800_IEs_Musim_CapRestrictionInd_r18 musim_CapRestrictionInd_r18; /**< ASN.1 musim-CapRestrictionInd-r18；枚举；OPTIONAL。 */
    bool has_flightPathInfoAvailable_r18; /**< flightPathInfoAvailable-r18 是否存在。 */
    RRCResumeComplete_v1800_IEs_FlightPathInfoAvailable_r18 flightPathInfoAvailable_r18; /**< ASN.1 flightPathInfoAvailable-r18；枚举；OPTIONAL。 */
    bool has_measConfigReportAppLayerAvailable_r18; /**< measConfigReportAppLayerAvailable-r18 是否存在。 */
    RRCResumeComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 measConfigReportAppLayerAvailable_r18; /**< ASN.1 measConfigReportAppLayerAvailable-r18；枚举；OPTIONAL。 */
    bool has_measResultReselectionNR_r18; /**< measResultReselectionNR-r18 是否存在。 */
    MeasResultIdleNR_r16 measResultReselectionNR_r18; /**< ASN.1 measResultReselectionNR-r18；结构体；OPTIONAL。 */
    bool has_reselectionMeasAvailable_r18; /**< reselectionMeasAvailable-r18 是否存在。 */
    RRCResumeComplete_v1800_IEs_ReselectionMeasAvailable_r18 reselectionMeasAvailable_r18; /**< ASN.1 reselectionMeasAvailable-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResumeComplete_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResumeComplete_v1720_IEs
 * @note ASN.1：RRCResumeComplete-v1720-IEs；源文件第 1514 行。
 * @note RRCResumeComplete-v1720-IEs ::= SEQUENCE { uplinkTxDirectCurrentMoreCarrierList-r17, nonCriticalExtension }
 */
struct RRCResumeComplete_v1720_IEs {
    bool has_uplinkTxDirectCurrentMoreCarrierList_r17; /**< uplinkTxDirectCurrentMoreCarrierList-r17 是否存在。 */
    UplinkTxDirectCurrentMoreCarrierList_r17 uplinkTxDirectCurrentMoreCarrierList_r17; /**< ASN.1 uplinkTxDirectCurrentMoreCarrierList-r17；SEQUENCE OF CC_Group_r17，SIZE (1..16)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResumeComplete_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResumeComplete_v1700_IEs
 * @note ASN.1：RRCResumeComplete-v1700-IEs；源文件第 1508 行。
 * @note RRCResumeComplete-v1700-IEs ::= SEQUENCE { needForGapNCSG-InfoNR-r17, needForGapNCSG-InfoEUTRA-r17, nonCritic...
 */
struct RRCResumeComplete_v1700_IEs {
    bool has_needForGapNCSG_InfoNR_r17; /**< needForGapNCSG-InfoNR-r17 是否存在。 */
    NeedForGapNCSG_InfoNR_r17 needForGapNCSG_InfoNR_r17; /**< ASN.1 needForGapNCSG-InfoNR-r17；结构体；OPTIONAL。 */
    bool has_needForGapNCSG_InfoEUTRA_r17; /**< needForGapNCSG-InfoEUTRA-r17 是否存在。 */
    NeedForGapNCSG_InfoEUTRA_r17 needForGapNCSG_InfoEUTRA_r17; /**< ASN.1 needForGapNCSG-InfoEUTRA-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResumeComplete_v1720_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResumeComplete_v1640_IEs
 * @note ASN.1：RRCResumeComplete-v1640-IEs；源文件第 1503 行。
 * @note RRCResumeComplete-v1640-IEs ::= SEQUENCE { uplinkTxDirectCurrentTwoCarrierList-r16, nonCriticalExtension }
 */
struct RRCResumeComplete_v1640_IEs {
    bool has_uplinkTxDirectCurrentTwoCarrierList_r16; /**< uplinkTxDirectCurrentTwoCarrierList-r16 是否存在。 */
    UplinkTxDirectCurrentTwoCarrierList_r16 uplinkTxDirectCurrentTwoCarrierList_r16; /**< ASN.1 uplinkTxDirectCurrentTwoCarrierList-r16；SEQUENCE OF UplinkTxDirectCurrentTwoCarrier_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResumeComplete_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultIdleEUTRA_r16
 * @note ASN.1：MeasResultIdleEUTRA-r16；源文件第 8164 行。
 * @note MeasResultIdleEUTRA-r16 ::= SEQUENCE { measResultsPerCarrierListIdleEUTRA-r16 }
 */
struct MeasResultIdleEUTRA_r16 {
    MeasResultsPerCarrierIdleEUTRA_r16* measResultsPerCarrierListIdleEUTRA_r16_items; /**< ASN.1 measResultsPerCarrierListIdleEUTRA-r16；SEQUENCE OF MeasResultsPerCarrierIdleEUTRA_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t measResultsPerCarrierListIdleEUTRA_r16_count; /**< measResultsPerCarrierListIdleEUTRA-r16 元素个数。 */
};


/**
 * @brief RRCResumeComplete_v1610_IEs_Scg_Response_r16
 * @note ASN.1：scg-Response-r16；源文件第 1492 行。
 * @note CHOICE { nr-SCG-Response, eutra-SCG-Response }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag {
    RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_nr_SCG_Response = 0, /**< ASN.1 nr-SCG-Response */
    RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag_eutra_SCG_Response = 1, /**< ASN.1 eutra-SCG-Response */
} RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag;

struct RRCResumeComplete_v1610_IEs_Scg_Response_r16 {
    RRCResumeComplete_v1610_IEs_Scg_Response_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReconfigurationComplete* nr_SCG_Response; /**< ASN.1 nr-SCG-Response */
        OctetString eutra_SCG_Response; /**< ASN.1 eutra-SCG-Response */
    } u;
};


/**
 * @brief RRCResumeComplete_v1610_IEs
 * @note ASN.1：RRCResumeComplete-v1610-IEs；源文件第 1488 行。
 * @note RRCResumeComplete-v1610-IEs ::= SEQUENCE { idleMeasAvailable-r16, measResultIdleEUTRA-r16, measResultIdleNR-r...
 */
struct RRCResumeComplete_v1610_IEs {
    bool has_idleMeasAvailable_r16; /**< idleMeasAvailable-r16 是否存在。 */
    RRCResumeComplete_v1610_IEs_IdleMeasAvailable_r16 idleMeasAvailable_r16; /**< ASN.1 idleMeasAvailable-r16；枚举；OPTIONAL。 */
    bool has_measResultIdleEUTRA_r16; /**< measResultIdleEUTRA-r16 是否存在。 */
    MeasResultIdleEUTRA_r16 measResultIdleEUTRA_r16; /**< ASN.1 measResultIdleEUTRA-r16；结构体；OPTIONAL。 */
    bool has_measResultIdleNR_r16; /**< measResultIdleNR-r16 是否存在。 */
    MeasResultIdleNR_r16 measResultIdleNR_r16; /**< ASN.1 measResultIdleNR-r16；结构体；OPTIONAL。 */
    bool has_scg_Response_r16; /**< scg-Response-r16 是否存在。 */
    RRCResumeComplete_v1610_IEs_Scg_Response_r16 scg_Response_r16; /**< ASN.1 scg-Response-r16；结构体；OPTIONAL。 */
    bool has_ue_MeasurementsAvailable_r16; /**< ue-MeasurementsAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16 ue_MeasurementsAvailable_r16; /**< ASN.1 ue-MeasurementsAvailable-r16；结构体；OPTIONAL。 */
    bool has_mobilityHistoryAvail_r16; /**< mobilityHistoryAvail-r16 是否存在。 */
    RRCResumeComplete_v1610_IEs_MobilityHistoryAvail_r16 mobilityHistoryAvail_r16; /**< ASN.1 mobilityHistoryAvail-r16；枚举；OPTIONAL。 */
    bool has_mobilityState_r16; /**< mobilityState-r16 是否存在。 */
    RRCResumeComplete_v1610_IEs_MobilityState_r16 mobilityState_r16; /**< ASN.1 mobilityState-r16；枚举；OPTIONAL。 */
    bool has_needForGapsInfoNR_r16; /**< needForGapsInfoNR-r16 是否存在。 */
    NeedForGapsInfoNR_r16 needForGapsInfoNR_r16; /**< ASN.1 needForGapsInfoNR-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResumeComplete_v1640_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResumeComplete_IEs
 * @note ASN.1：RRCResumeComplete-IEs；源文件第 1480 行。
 * @note RRCResumeComplete-IEs ::= SEQUENCE { dedicatedNAS-Message, selectedPLMN-Identity, uplinkTxDirectCurrent...
 */
struct RRCResumeComplete_IEs {
    bool has_dedicatedNAS_Message; /**< dedicatedNAS-Message 是否存在。 */
    DedicatedNAS_Message dedicatedNAS_Message; /**< ASN.1 dedicatedNAS-Message；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_selectedPLMN_Identity; /**< selectedPLMN-Identity 是否存在。 */
    int64_t selectedPLMN_Identity; /**< ASN.1 selectedPLMN-Identity；INTEGER (1..12)，位宽 4 bit；OPTIONAL。 */
    bool has_uplinkTxDirectCurrentList; /**< uplinkTxDirectCurrentList 是否存在。 */
    UplinkTxDirectCurrentList uplinkTxDirectCurrentList; /**< ASN.1 uplinkTxDirectCurrentList；SEQUENCE OF UplinkTxDirectCurrentCell，SIZE (1..32)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCResumeComplete_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCResumeComplete_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1476 行。
 * @note SEQUENCE { }
 */
struct RRCResumeComplete_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCResumeComplete_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1474 行。
 * @note CHOICE { rrcResumeComplete, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCResumeComplete_CriticalExtensions_Tag {
    RRCResumeComplete_CriticalExtensions_Tag_rrcResumeComplete = 0, /**< ASN.1 rrcResumeComplete */
    RRCResumeComplete_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCResumeComplete_CriticalExtensions_Tag;

struct RRCResumeComplete_CriticalExtensions {
    RRCResumeComplete_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCResumeComplete_IEs rrcResumeComplete; /**< ASN.1 rrcResumeComplete */
        RRCResumeComplete_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCResumeComplete
 * @note ASN.1：RRCResumeComplete；源文件第 1472 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_RRCResumeComplete（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCResumeComplete ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCResumeComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCResumeComplete_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief RRCResumeRequest_IEs
 * @note ASN.1：RRCResumeRequest-IEs；源文件第 1536 行。
 * @note RRCResumeRequest-IEs ::= SEQUENCE { resumeIdentity, resumeMAC-I, resumeCause, spare }
 */
struct RRCResumeRequest_IEs {
    ShortI_RNTI_Value resumeIdentity; /**< ASN.1 resumeIdentity；SIZE (24)，定长。 */
    BitString resumeMAC_I; /**< ASN.1 resumeMAC-I；SIZE (16)，定长。 */
    ResumeCause resumeCause; /**< ASN.1 resumeCause；枚举。 */
    BitString spare; /**< ASN.1 spare；SIZE (1)，定长。 */
};


/**
 * @brief RRCResumeRequest
 * @note ASN.1：RRCResumeRequest；源文件第 1532 行。
 * @note 实际消息：ChannelType_UL_CCCH；MessageKind_RRCResumeRequest（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCResumeRequest ::= SEQUENCE { rrcResumeRequest }
 */
struct RRCResumeRequest {
    RRCResumeRequest_IEs rrcResumeRequest; /**< ASN.1 rrcResumeRequest；结构体。 */
};


/**
 * @brief RRCResumeRequest1_IEs
 * @note ASN.1：RRCResumeRequest1-IEs；源文件第 1550 行。
 * @note RRCResumeRequest1-IEs ::= SEQUENCE { resumeIdentity, resumeMAC-I, resumeCause, spare }
 */
struct RRCResumeRequest1_IEs {
    I_RNTI_Value resumeIdentity; /**< ASN.1 resumeIdentity；SIZE (40)，定长。 */
    BitString resumeMAC_I; /**< ASN.1 resumeMAC-I；SIZE (16)，定长。 */
    ResumeCause resumeCause; /**< ASN.1 resumeCause；枚举。 */
    BitString spare; /**< ASN.1 spare；SIZE (1)，定长。 */
};


/**
 * @brief RRCResumeRequest1
 * @note ASN.1：RRCResumeRequest1；源文件第 1546 行。
 * @note 实际消息：ChannelType_UL_CCCH1；MessageKind_RRCResumeRequest1（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCResumeRequest1 ::= SEQUENCE { rrcResumeRequest1 }
 */
struct RRCResumeRequest1 {
    RRCResumeRequest1_IEs rrcResumeRequest1; /**< ASN.1 rrcResumeRequest1；结构体。 */
};


/**
 * @brief RRCSetup_v1700_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1578 行。
 * @note SEQUENCE { }
 */
struct RRCSetup_v1700_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCSetup_v1700_IEs
 * @note ASN.1：RRCSetup-v1700-IEs；源文件第 1575 行。
 * @note RRCSetup-v1700-IEs ::= SEQUENCE { sl-ConfigDedicatedNR-r17, sl-L2RemoteUE-Config-r17, nonCriticalExt...
 */
struct RRCSetup_v1700_IEs {
    bool has_sl_ConfigDedicatedNR_r17; /**< sl-ConfigDedicatedNR-r17 是否存在。 */
    SL_ConfigDedicatedNR_r16 sl_ConfigDedicatedNR_r17; /**< ASN.1 sl-ConfigDedicatedNR-r17；结构体；OPTIONAL。 */
    bool has_sl_L2RemoteUE_Config_r17; /**< sl-L2RemoteUE-Config-r17 是否存在。 */
    SL_L2RemoteUE_Config_r17 sl_L2RemoteUE_Config_r17; /**< ASN.1 sl-L2RemoteUE-Config-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetup_v1700_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCSetup_IEs
 * @note ASN.1：RRCSetup-IEs；源文件第 1568 行。
 * @note RRCSetup-IEs ::= SEQUENCE { radioBearerConfig, masterCellGroup, lateNonCriticalExtension, nonC...
 */
struct RRCSetup_IEs {
    RadioBearerConfig radioBearerConfig; /**< ASN.1 radioBearerConfig；结构体。 */
    CellGroupConfig* masterCellGroup; /**< ASN.1 masterCellGroup；OCTET STRING (CONTAINING CellGroupConfig)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetup_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCSetup_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1564 行。
 * @note SEQUENCE { }
 */
struct RRCSetup_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCSetup_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1562 行。
 * @note CHOICE { rrcSetup, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCSetup_CriticalExtensions_Tag {
    RRCSetup_CriticalExtensions_Tag_rrcSetup = 0, /**< ASN.1 rrcSetup */
    RRCSetup_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCSetup_CriticalExtensions_Tag;

struct RRCSetup_CriticalExtensions {
    RRCSetup_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCSetup_IEs rrcSetup; /**< ASN.1 rrcSetup */
        RRCSetup_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCSetup
 * @note ASN.1：RRCSetup；源文件第 1560 行。
 * @note 实际消息：ChannelType_DL_CCCH；MessageKind_RRCSetup（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCSetup ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCSetup {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCSetup_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief RRCSetupComplete_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1632 行。
 * @note SEQUENCE { }
 */
struct RRCSetupComplete_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCSetupComplete_v1800_IEs
 * @note ASN.1：RRCSetupComplete-v1800-IEs；源文件第 1625 行。
 * @note RRCSetupComplete-v1800-IEs ::= SEQUENCE { ncr-NodeIndication-r18, musim-CapRestrictionInd-r18, flightPathInf...
 */
struct RRCSetupComplete_v1800_IEs {
    bool has_ncr_NodeIndication_r18; /**< ncr-NodeIndication-r18 是否存在。 */
    RRCSetupComplete_v1800_IEs_Ncr_NodeIndication_r18 ncr_NodeIndication_r18; /**< ASN.1 ncr-NodeIndication-r18；枚举；OPTIONAL。 */
    bool has_musim_CapRestrictionInd_r18; /**< musim-CapRestrictionInd-r18 是否存在。 */
    RRCSetupComplete_v1800_IEs_Musim_CapRestrictionInd_r18 musim_CapRestrictionInd_r18; /**< ASN.1 musim-CapRestrictionInd-r18；枚举；OPTIONAL。 */
    bool has_flightPathInfoAvailable_r18; /**< flightPathInfoAvailable-r18 是否存在。 */
    RRCSetupComplete_v1800_IEs_FlightPathInfoAvailable_r18 flightPathInfoAvailable_r18; /**< ASN.1 flightPathInfoAvailable-r18；枚举；OPTIONAL。 */
    bool has_measConfigReportAppLayerAvailable_r18; /**< measConfigReportAppLayerAvailable-r18 是否存在。 */
    RRCSetupComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 measConfigReportAppLayerAvailable_r18; /**< ASN.1 measConfigReportAppLayerAvailable-r18；枚举；OPTIONAL。 */
    bool has_mobileIAB_NodeIndication_r18; /**< mobileIAB-NodeIndication-r18 是否存在。 */
    RRCSetupComplete_v1800_IEs_MobileIAB_NodeIndication_r18 mobileIAB_NodeIndication_r18; /**< ASN.1 mobileIAB-NodeIndication-r18；枚举；OPTIONAL。 */
    bool has_reselectionMeasAvailable_r18; /**< reselectionMeasAvailable-r18 是否存在。 */
    RRCSetupComplete_v1800_IEs_ReselectionMeasAvailable_r18 reselectionMeasAvailable_r18; /**< ASN.1 reselectionMeasAvailable-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetupComplete_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCSetupComplete_v1700_IEs
 * @note ASN.1：RRCSetupComplete-v1700-IEs；源文件第 1620 行。
 * @note RRCSetupComplete-v1700-IEs ::= SEQUENCE { onboardingRequest-r17, nonCriticalExtension }
 */
struct RRCSetupComplete_v1700_IEs {
    bool has_onboardingRequest_r17; /**< onboardingRequest-r17 是否存在。 */
    RRCSetupComplete_v1700_IEs_OnboardingRequest_r17 onboardingRequest_r17; /**< ASN.1 onboardingRequest-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetupComplete_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCSetupComplete_v1690_IEs
 * @note ASN.1：RRCSetupComplete-v1690-IEs；源文件第 1615 行。
 * @note RRCSetupComplete-v1690-IEs ::= SEQUENCE { ul-RRC-Segmentation-r16, nonCriticalExtension }
 */
struct RRCSetupComplete_v1690_IEs {
    bool has_ul_RRC_Segmentation_r16; /**< ul-RRC-Segmentation-r16 是否存在。 */
    RRCSetupComplete_v1690_IEs_Ul_RRC_Segmentation_r16 ul_RRC_Segmentation_r16; /**< ASN.1 ul-RRC-Segmentation-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetupComplete_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCSetupComplete_v1610_IEs
 * @note ASN.1：RRCSetupComplete-v1610-IEs；源文件第 1606 行。
 * @note RRCSetupComplete-v1610-IEs ::= SEQUENCE { iab-NodeIndication-r16, idleMeasAvailable-r16, ue-MeasurementsAvai...
 */
struct RRCSetupComplete_v1610_IEs {
    bool has_iab_NodeIndication_r16; /**< iab-NodeIndication-r16 是否存在。 */
    RRCSetupComplete_v1610_IEs_Iab_NodeIndication_r16 iab_NodeIndication_r16; /**< ASN.1 iab-NodeIndication-r16；枚举；OPTIONAL。 */
    bool has_idleMeasAvailable_r16; /**< idleMeasAvailable-r16 是否存在。 */
    RRCSetupComplete_v1610_IEs_IdleMeasAvailable_r16 idleMeasAvailable_r16; /**< ASN.1 idleMeasAvailable-r16；枚举；OPTIONAL。 */
    bool has_ue_MeasurementsAvailable_r16; /**< ue-MeasurementsAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16 ue_MeasurementsAvailable_r16; /**< ASN.1 ue-MeasurementsAvailable-r16；结构体；OPTIONAL。 */
    bool has_mobilityHistoryAvail_r16; /**< mobilityHistoryAvail-r16 是否存在。 */
    RRCSetupComplete_v1610_IEs_MobilityHistoryAvail_r16 mobilityHistoryAvail_r16; /**< ASN.1 mobilityHistoryAvail-r16；枚举；OPTIONAL。 */
    bool has_mobilityState_r16; /**< mobilityState-r16 是否存在。 */
    RRCSetupComplete_v1610_IEs_MobilityState_r16 mobilityState_r16; /**< ASN.1 mobilityState-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetupComplete_v1690_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RegisteredAMF
 * @note ASN.1：RegisteredAMF；源文件第 1635 行。
 * @note RegisteredAMF ::= SEQUENCE { plmn-Identity, amf-Identifier }
 */
struct RegisteredAMF {
    bool has_plmn_Identity; /**< plmn-Identity 是否存在。 */
    PLMN_Identity plmn_Identity; /**< ASN.1 plmn-Identity；结构体；OPTIONAL。 */
    AMF_Identifier amf_Identifier; /**< ASN.1 amf-Identifier；SIZE (24)，定长。 */
};


/**
 * @brief RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value
 * @note ASN.1：ng-5G-S-TMSI-Value；源文件第 1598 行。
 * @note CHOICE { ng-5G-S-TMSI, ng-5G-S-TMSI-Part2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag {
    RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI = 0, /**< ASN.1 ng-5G-S-TMSI */
    RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag_ng_5G_S_TMSI_Part2 = 1, /**< ASN.1 ng-5G-S-TMSI-Part2 */
} RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag;

struct RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value {
    RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NG_5G_S_TMSI ng_5G_S_TMSI; /**< ASN.1 ng-5G-S-TMSI */
        BitString ng_5G_S_TMSI_Part2; /**< ASN.1 ng-5G-S-TMSI-Part2 */
    } u;
};


/**
 * @brief RRCSetupComplete_IEs
 * @note ASN.1：RRCSetupComplete-IEs；源文件第 1592 行。
 * @note RRCSetupComplete-IEs ::= SEQUENCE { selectedPLMN-Identity, registeredAMF, guami-Type, s-NSSAI-List, de...
 */
struct RRCSetupComplete_IEs {
    int64_t selectedPLMN_Identity; /**< ASN.1 selectedPLMN-Identity；INTEGER (1..12)，位宽 4 bit。 */
    bool has_registeredAMF; /**< registeredAMF 是否存在。 */
    RegisteredAMF registeredAMF; /**< ASN.1 registeredAMF；结构体；OPTIONAL。 */
    bool has_guami_Type; /**< guami-Type 是否存在。 */
    RRCSetupComplete_IEs_Guami_Type guami_Type; /**< ASN.1 guami-Type；枚举；OPTIONAL。 */
    bool has_s_NSSAI_List; /**< s-NSSAI-List 是否存在。 */
    S_NSSAI* s_NSSAI_List_items; /**< ASN.1 s-NSSAI-List；SEQUENCE OF S_NSSAI，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t s_NSSAI_List_count; /**< s-NSSAI-List 元素个数。 */
    DedicatedNAS_Message dedicatedNAS_Message; /**< ASN.1 dedicatedNAS-Message；SIZE 无上界（半约束长度）。 */
    bool has_ng_5G_S_TMSI_Value; /**< ng-5G-S-TMSI-Value 是否存在。 */
    RRCSetupComplete_IEs_Ng_5G_S_TMSI_Value ng_5G_S_TMSI_Value; /**< ASN.1 ng-5G-S-TMSI-Value；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCSetupComplete_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCSetupComplete_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1588 行。
 * @note SEQUENCE { }
 */
struct RRCSetupComplete_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCSetupComplete_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1586 行。
 * @note CHOICE { rrcSetupComplete, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCSetupComplete_CriticalExtensions_Tag {
    RRCSetupComplete_CriticalExtensions_Tag_rrcSetupComplete = 0, /**< ASN.1 rrcSetupComplete */
    RRCSetupComplete_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCSetupComplete_CriticalExtensions_Tag;

struct RRCSetupComplete_CriticalExtensions {
    RRCSetupComplete_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCSetupComplete_IEs rrcSetupComplete; /**< ASN.1 rrcSetupComplete */
        RRCSetupComplete_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCSetupComplete
 * @note ASN.1：RRCSetupComplete；源文件第 1584 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_RRCSetupComplete（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCSetupComplete ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCSetupComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCSetupComplete_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief InitialUE_Identity
 * @note ASN.1：InitialUE-Identity；源文件第 1653 行。
 * @note InitialUE-Identity ::= CHOICE { ng-5G-S-TMSI-Part1, randomValue }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum InitialUE_Identity_Tag {
    InitialUE_Identity_Tag_ng_5G_S_TMSI_Part1 = 0, /**< ASN.1 ng-5G-S-TMSI-Part1 */
    InitialUE_Identity_Tag_randomValue = 1, /**< ASN.1 randomValue */
} InitialUE_Identity_Tag;

struct InitialUE_Identity {
    InitialUE_Identity_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString ng_5G_S_TMSI_Part1; /**< ASN.1 ng-5G-S-TMSI-Part1 */
        BitString randomValue; /**< ASN.1 randomValue */
    } u;
};


/**
 * @brief RRCSetupRequest_IEs
 * @note ASN.1：RRCSetupRequest-IEs；源文件第 1647 行。
 * @note RRCSetupRequest-IEs ::= SEQUENCE { ue-Identity, establishmentCause, spare }
 */
struct RRCSetupRequest_IEs {
    InitialUE_Identity ue_Identity; /**< ASN.1 ue-Identity；结构体。 */
    EstablishmentCause establishmentCause; /**< ASN.1 establishmentCause；枚举。 */
    BitString spare; /**< ASN.1 spare；SIZE (1)，定长。 */
};


/**
 * @brief RRCSetupRequest
 * @note ASN.1：RRCSetupRequest；源文件第 1643 行。
 * @note 实际消息：ChannelType_UL_CCCH；MessageKind_RRCSetupRequest（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCSetupRequest ::= SEQUENCE { rrcSetupRequest }
 */
struct RRCSetupRequest {
    RRCSetupRequest_IEs rrcSetupRequest; /**< ASN.1 rrcSetupRequest；结构体。 */
};


/**
 * @brief RRCSystemInfoRequest_IEs
 * @note ASN.1：RRCSystemInfoRequest-IEs；源文件第 1676 行。
 * @note RRCSystemInfoRequest-IEs ::= SEQUENCE { requested-SI-List, spare }
 */
struct RRCSystemInfoRequest_IEs {
    BitString requested_SI_List; /**< ASN.1 requested-SI-List；SIZE (32)，定长。 */
    BitString spare; /**< ASN.1 spare；SIZE (12)，定长。 */
};


/**
 * @brief RRC_PosSystemInfoRequest_r16_IEs
 * @note ASN.1：RRC-PosSystemInfoRequest-r16-IEs；源文件第 1681 行。
 * @note RRC-PosSystemInfoRequest-r16-IEs ::= SEQUENCE { requestedPosSI-List, spare }
 */
struct RRC_PosSystemInfoRequest_r16_IEs {
    BitString requestedPosSI_List; /**< ASN.1 requestedPosSI-List；SIZE (32)，定长。 */
    BitString spare; /**< ASN.1 spare；SIZE (11)，定长。 */
};


/**
 * @brief RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture-r16/criticalExtensionsFuture；源文件第 1671 行。
 * @note SEQUENCE { }
 */
struct RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCSystemInfoRequest_CriticalExtensionsFuture_r16
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture-r16；源文件第 1669 行。
 * @note CHOICE { rrcPosSystemInfoRequest-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag {
    RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_rrcPosSystemInfoRequest_r16 = 0, /**< ASN.1 rrcPosSystemInfoRequest-r16 */
    RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag;

struct RRCSystemInfoRequest_CriticalExtensionsFuture_r16 {
    RRCSystemInfoRequest_CriticalExtensionsFuture_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRC_PosSystemInfoRequest_r16_IEs rrcPosSystemInfoRequest_r16; /**< ASN.1 rrcPosSystemInfoRequest-r16 */
        RRCSystemInfoRequest_CriticalExtensionsFuture_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCSystemInfoRequest_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1667 行。
 * @note CHOICE { rrcSystemInfoRequest, criticalExtensionsFuture-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCSystemInfoRequest_CriticalExtensions_Tag {
    RRCSystemInfoRequest_CriticalExtensions_Tag_rrcSystemInfoRequest = 0, /**< ASN.1 rrcSystemInfoRequest */
    RRCSystemInfoRequest_CriticalExtensions_Tag_criticalExtensionsFuture_r16 = 1, /**< ASN.1 criticalExtensionsFuture-r16 */
} RRCSystemInfoRequest_CriticalExtensions_Tag;

struct RRCSystemInfoRequest_CriticalExtensions {
    RRCSystemInfoRequest_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCSystemInfoRequest_IEs rrcSystemInfoRequest; /**< ASN.1 rrcSystemInfoRequest */
        RRCSystemInfoRequest_CriticalExtensionsFuture_r16 criticalExtensionsFuture_r16; /**< ASN.1 criticalExtensionsFuture-r16 */
    } u;
};


/**
 * @brief RRCSystemInfoRequest
 * @note ASN.1：RRCSystemInfoRequest；源文件第 1666 行。
 * @note 实际消息：ChannelType_UL_CCCH；MessageKind_RRCSystemInfoRequest（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCSystemInfoRequest ::= SEQUENCE { criticalExtensions }
 */
struct RRCSystemInfoRequest {
    RRCSystemInfoRequest_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SCGFailureInformation_v1590_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1703 行。
 * @note SEQUENCE { }
 */
struct SCGFailureInformation_v1590_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SCGFailureInformation_v1590_IEs
 * @note ASN.1：SCGFailureInformation-v1590-IEs；源文件第 1701 行。
 * @note SCGFailureInformation-v1590-IEs ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct SCGFailureInformation_v1590_IEs {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SCGFailureInformation_v1590_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief FailureReportSCG_ExtGroup1
 * @note ASN.1：FailureReportSCG_ExtGroup1；源文件第 1715 行。
 */
struct FailureReportSCG_ExtGroup1 {
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
    bool has_failureType_v1610; /**< failureType-v1610 是否存在。 */
    FailureReportSCG_ExtGroup1_FailureType_v1610 failureType_v1610; /**< ASN.1 failureType-v1610；枚举；OPTIONAL。 */
};


/**
 * @brief PerRAInfoList_r16
 * @note ASN.1：PerRAInfoList-r16；源文件第 2880 行。
 * @note PerRAInfoList-r16 ::= SEQUENCE OF (size 1..200) OF PerRAInfo-r16
 */
struct PerRAInfoList_r16 {
    PerRAInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FailureReportSCG_ExtGroup2_PreviousPSCellId_r17
 * @note ASN.1：previousPSCellId-r17；源文件第 1721 行。
 * @note SEQUENCE { physCellId-r17, carrierFreq-r17 }
 */
struct FailureReportSCG_ExtGroup2_PreviousPSCellId_r17 {
    PhysCellId physCellId_r17; /**< ASN.1 physCellId-r17；INTEGER (0..1007)，位宽 10 bit。 */
    ARFCN_ValueNR carrierFreq_r17; /**< ASN.1 carrierFreq-r17；INTEGER (0..3279165)，位宽 22 bit。 */
};


/**
 * @brief FailureReportSCG_ExtGroup2_FailedPSCellId_r17
 * @note ASN.1：failedPSCellId-r17；源文件第 1725 行。
 * @note SEQUENCE { physCellId-r17, carrierFreq-r17 }
 */
struct FailureReportSCG_ExtGroup2_FailedPSCellId_r17 {
    PhysCellId physCellId_r17; /**< ASN.1 physCellId-r17；INTEGER (0..1007)，位宽 10 bit。 */
    ARFCN_ValueNR carrierFreq_r17; /**< ASN.1 carrierFreq-r17；INTEGER (0..3279165)，位宽 22 bit。 */
};


/**
 * @brief FailureReportSCG_ExtGroup2
 * @note ASN.1：FailureReportSCG_ExtGroup2；源文件第 1720 行。
 */
struct FailureReportSCG_ExtGroup2 {
    bool has_previousPSCellId_r17; /**< previousPSCellId-r17 是否存在。 */
    FailureReportSCG_ExtGroup2_PreviousPSCellId_r17 previousPSCellId_r17; /**< ASN.1 previousPSCellId-r17；结构体；OPTIONAL。 */
    bool has_failedPSCellId_r17; /**< failedPSCellId-r17 是否存在。 */
    FailureReportSCG_ExtGroup2_FailedPSCellId_r17 failedPSCellId_r17; /**< ASN.1 failedPSCellId-r17；结构体；OPTIONAL。 */
    bool has_timeSCGFailure_r17; /**< timeSCGFailure-r17 是否存在。 */
    int64_t timeSCGFailure_r17; /**< ASN.1 timeSCGFailure-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_perRAInfoList_r17; /**< perRAInfoList-r17 是否存在。 */
    PerRAInfoList_r16 perRAInfoList_r17; /**< ASN.1 perRAInfoList-r17；SEQUENCE OF PerRAInfo_r16，SIZE (1..200)；OPTIONAL。 */
};


/**
 * @brief MeasResultFreqList
 * @note ASN.1：MeasResultFreqList；源文件第 1734 行。
 * @note MeasResultFreqList ::= SEQUENCE OF (size 1..8) OF MeasResult2NR
 */
struct MeasResultFreqList {
    MeasResult2NR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FailureReportSCG
 * @note ASN.1：FailureReportSCG；源文件第 1706 行。
 * @note FailureReportSCG ::= SEQUENCE { failureType, measResultFreqList, measResultSCG-Failure, locationIn...
 */
struct FailureReportSCG {
    FailureReportSCG_FailureType failureType; /**< ASN.1 failureType；枚举。 */
    bool has_measResultFreqList; /**< measResultFreqList 是否存在。 */
    MeasResultFreqList measResultFreqList; /**< ASN.1 measResultFreqList；SEQUENCE OF MeasResult2NR，SIZE (1..8)；OPTIONAL。 */
    MeasResultSCG_Failure* measResultSCG_Failure; /**< ASN.1 measResultSCG-Failure；OCTET STRING (CONTAINING MeasResultSCG_Failure)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FailureReportSCG_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    FailureReportSCG_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SCGFailureInformation_IEs
 * @note ASN.1：SCGFailureInformation-IEs；源文件第 1696 行。
 * @note SCGFailureInformation-IEs ::= SEQUENCE { failureReportSCG, nonCriticalExtension }
 */
struct SCGFailureInformation_IEs {
    bool has_failureReportSCG; /**< failureReportSCG 是否存在。 */
    FailureReportSCG failureReportSCG; /**< ASN.1 failureReportSCG；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SCGFailureInformation_v1590_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SCGFailureInformation_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1692 行。
 * @note SEQUENCE { }
 */
struct SCGFailureInformation_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SCGFailureInformation_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1690 行。
 * @note CHOICE { scgFailureInformation, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SCGFailureInformation_CriticalExtensions_Tag {
    SCGFailureInformation_CriticalExtensions_Tag_scgFailureInformation = 0, /**< ASN.1 scgFailureInformation */
    SCGFailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SCGFailureInformation_CriticalExtensions_Tag;

struct SCGFailureInformation_CriticalExtensions {
    SCGFailureInformation_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SCGFailureInformation_IEs scgFailureInformation; /**< ASN.1 scgFailureInformation */
        SCGFailureInformation_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SCGFailureInformation
 * @note ASN.1：SCGFailureInformation；源文件第 1689 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_SCGFailureInformation（包装位 2 级，入口 2 个 CHOICE）。
 * @note SCGFailureInformation ::= SEQUENCE { criticalExtensions }
 */
struct SCGFailureInformation {
    SCGFailureInformation_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1754 行。
 * @note SEQUENCE { }
 */
struct SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SCGFailureInformationEUTRA_v1590_IEs
 * @note ASN.1：SCGFailureInformationEUTRA-v1590-IEs；源文件第 1752 行。
 * @note SCGFailureInformationEUTRA-v1590-IEs ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct SCGFailureInformationEUTRA_v1590_IEs {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SCGFailureInformationEUTRA_v1590_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief FailureReportSCG_EUTRA_ExtGroup1
 * @note ASN.1：FailureReportSCG_EUTRA_ExtGroup1；源文件第 1765 行。
 */
struct FailureReportSCG_EUTRA_ExtGroup1 {
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultFreqListFailMRDC
 * @note ASN.1：MeasResultFreqListFailMRDC；源文件第 1770 行。
 * @note MeasResultFreqListFailMRDC ::= SEQUENCE OF (size 1..8) OF MeasResult2EUTRA
 */
struct MeasResultFreqListFailMRDC {
    MeasResult2EUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FailureReportSCG_EUTRA
 * @note ASN.1：FailureReportSCG-EUTRA；源文件第 1757 行。
 * @note FailureReportSCG-EUTRA ::= SEQUENCE { failureType, measResultFreqListMRDC, measResultSCG-FailureMRDC, lo...
 */
struct FailureReportSCG_EUTRA {
    FailureReportSCG_EUTRA_FailureType failureType; /**< ASN.1 failureType；枚举。 */
    bool has_measResultFreqListMRDC; /**< measResultFreqListMRDC 是否存在。 */
    MeasResultFreqListFailMRDC measResultFreqListMRDC; /**< ASN.1 measResultFreqListMRDC；SEQUENCE OF MeasResult2EUTRA，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultSCG_FailureMRDC; /**< measResultSCG-FailureMRDC 是否存在。 */
    OctetString measResultSCG_FailureMRDC; /**< ASN.1 measResultSCG-FailureMRDC；SIZE 无上界（半约束长度）；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FailureReportSCG_EUTRA_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SCGFailureInformationEUTRA_IEs
 * @note ASN.1：SCGFailureInformationEUTRA-IEs；源文件第 1747 行。
 * @note SCGFailureInformationEUTRA-IEs ::= SEQUENCE { failureReportSCG-EUTRA, nonCriticalExtension }
 */
struct SCGFailureInformationEUTRA_IEs {
    bool has_failureReportSCG_EUTRA; /**< failureReportSCG-EUTRA 是否存在。 */
    FailureReportSCG_EUTRA failureReportSCG_EUTRA; /**< ASN.1 failureReportSCG-EUTRA；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SCGFailureInformationEUTRA_v1590_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SCGFailureInformationEUTRA_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1743 行。
 * @note SEQUENCE { }
 */
struct SCGFailureInformationEUTRA_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SCGFailureInformationEUTRA_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1741 行。
 * @note CHOICE { scgFailureInformationEUTRA, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SCGFailureInformationEUTRA_CriticalExtensions_Tag {
    SCGFailureInformationEUTRA_CriticalExtensions_Tag_scgFailureInformationEUTRA = 0, /**< ASN.1 scgFailureInformationEUTRA */
    SCGFailureInformationEUTRA_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SCGFailureInformationEUTRA_CriticalExtensions_Tag;

struct SCGFailureInformationEUTRA_CriticalExtensions {
    SCGFailureInformationEUTRA_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SCGFailureInformationEUTRA_IEs scgFailureInformationEUTRA; /**< ASN.1 scgFailureInformationEUTRA */
        SCGFailureInformationEUTRA_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SCGFailureInformationEUTRA
 * @note ASN.1：SCGFailureInformationEUTRA；源文件第 1740 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_SCGFailureInformationEUTRA（包装位 2 级，入口 2 个 CHOICE）。
 * @note SCGFailureInformationEUTRA ::= SEQUENCE { criticalExtensions }
 */
struct SCGFailureInformationEUTRA {
    SCGFailureInformationEUTRA_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SecurityConfigSMC
 * @note ASN.1：SecurityConfigSMC；源文件第 1790 行。
 * @note SecurityConfigSMC ::= SEQUENCE { securityAlgorithmConfig }
 */
struct SecurityConfigSMC {
    SecurityAlgorithmConfig securityAlgorithmConfig; /**< ASN.1 securityAlgorithmConfig；结构体。 */
};


/**
 * @brief SecurityModeCommand_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1787 行。
 * @note SEQUENCE { }
 */
struct SecurityModeCommand_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SecurityModeCommand_IEs
 * @note ASN.1：SecurityModeCommand-IEs；源文件第 1783 行。
 * @note SecurityModeCommand-IEs ::= SEQUENCE { securityConfigSMC, lateNonCriticalExtension, nonCriticalExtension }
 */
struct SecurityModeCommand_IEs {
    SecurityConfigSMC securityConfigSMC; /**< ASN.1 securityConfigSMC；结构体。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SecurityModeCommand_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SecurityModeCommand_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1779 行。
 * @note SEQUENCE { }
 */
struct SecurityModeCommand_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SecurityModeCommand_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1777 行。
 * @note CHOICE { securityModeCommand, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SecurityModeCommand_CriticalExtensions_Tag {
    SecurityModeCommand_CriticalExtensions_Tag_securityModeCommand = 0, /**< ASN.1 securityModeCommand */
    SecurityModeCommand_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SecurityModeCommand_CriticalExtensions_Tag;

struct SecurityModeCommand_CriticalExtensions {
    SecurityModeCommand_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SecurityModeCommand_IEs securityModeCommand; /**< ASN.1 securityModeCommand */
        SecurityModeCommand_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SecurityModeCommand
 * @note ASN.1：SecurityModeCommand；源文件第 1775 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_SecurityModeCommand（包装位 2 级，入口 2 个 CHOICE）。
 * @note SecurityModeCommand ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct SecurityModeCommand {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    SecurityModeCommand_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SecurityModeComplete_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1808 行。
 * @note SEQUENCE { }
 */
struct SecurityModeComplete_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SecurityModeComplete_IEs
 * @note ASN.1：SecurityModeComplete-IEs；源文件第 1806 行。
 * @note SecurityModeComplete-IEs ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct SecurityModeComplete_IEs {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SecurityModeComplete_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SecurityModeComplete_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1802 行。
 * @note SEQUENCE { }
 */
struct SecurityModeComplete_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SecurityModeComplete_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1800 行。
 * @note CHOICE { securityModeComplete, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SecurityModeComplete_CriticalExtensions_Tag {
    SecurityModeComplete_CriticalExtensions_Tag_securityModeComplete = 0, /**< ASN.1 securityModeComplete */
    SecurityModeComplete_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SecurityModeComplete_CriticalExtensions_Tag;

struct SecurityModeComplete_CriticalExtensions {
    SecurityModeComplete_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SecurityModeComplete_IEs securityModeComplete; /**< ASN.1 securityModeComplete */
        SecurityModeComplete_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SecurityModeComplete
 * @note ASN.1：SecurityModeComplete；源文件第 1798 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_SecurityModeComplete（包装位 2 级，入口 2 个 CHOICE）。
 * @note SecurityModeComplete ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct SecurityModeComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    SecurityModeComplete_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SecurityModeFailure_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1824 行。
 * @note SEQUENCE { }
 */
struct SecurityModeFailure_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SecurityModeFailure_IEs
 * @note ASN.1：SecurityModeFailure-IEs；源文件第 1822 行。
 * @note SecurityModeFailure-IEs ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct SecurityModeFailure_IEs {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SecurityModeFailure_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SecurityModeFailure_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1818 行。
 * @note SEQUENCE { }
 */
struct SecurityModeFailure_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SecurityModeFailure_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1816 行。
 * @note CHOICE { securityModeFailure, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SecurityModeFailure_CriticalExtensions_Tag {
    SecurityModeFailure_CriticalExtensions_Tag_securityModeFailure = 0, /**< ASN.1 securityModeFailure */
    SecurityModeFailure_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SecurityModeFailure_CriticalExtensions_Tag;

struct SecurityModeFailure_CriticalExtensions {
    SecurityModeFailure_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SecurityModeFailure_IEs securityModeFailure; /**< ASN.1 securityModeFailure */
        SecurityModeFailure_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SecurityModeFailure
 * @note ASN.1：SecurityModeFailure；源文件第 1814 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_SecurityModeFailure（包装位 2 级，入口 2 个 CHOICE）。
 * @note SecurityModeFailure ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct SecurityModeFailure {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    SecurityModeFailure_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18
 * @note ASN.1：cellBarredeRedCap-r18；源文件第 1949 行。
 * @note SEQUENCE { cellBarredeRedCap1Rx-r18, cellBarredeRedCap2Rx-r18 }
 */
struct ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18 {
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap1Rx_r18 cellBarredeRedCap1Rx_r18; /**< ASN.1 cellBarredeRedCap1Rx-r18；枚举。 */
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18_CellBarredeRedCap2Rx_r18 cellBarredeRedCap2Rx_r18; /**< ASN.1 cellBarredeRedCap2Rx-r18；枚举。 */
};


/**
 * @brief ERedCap_ConfigCommonSIB_r18
 * @note ASN.1：ERedCap-ConfigCommonSIB-r18；源文件第 1948 行。
 * @note ERedCap-ConfigCommonSIB-r18 ::= SEQUENCE { cellBarredeRedCap-r18 }
 */
struct ERedCap_ConfigCommonSIB_r18 {
    ERedCap_ConfigCommonSIB_r18_CellBarredeRedCap_r18 cellBarredeRedCap_r18; /**< ASN.1 cellBarredeRedCap-r18；结构体。 */
};


/**
 * @brief MT_SDT_ConfigCommonSIB_r18
 * @note ASN.1：MT-SDT-ConfigCommonSIB-r18；源文件第 1957 行。
 * @note MT-SDT-ConfigCommonSIB-r18 ::= SEQUENCE { mt-SDT-RSRP-Threshold-r18, sdt-LogicalChannelSR-DelayTimer-r18, t3...
 */
struct MT_SDT_ConfigCommonSIB_r18 {
    bool has_mt_SDT_RSRP_Threshold_r18; /**< mt-SDT-RSRP-Threshold-r18 是否存在。 */
    RSRP_Range mt_SDT_RSRP_Threshold_r18; /**< ASN.1 mt-SDT-RSRP-Threshold-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_sdt_LogicalChannelSR_DelayTimer_r18; /**< sdt-LogicalChannelSR-DelayTimer-r18 是否存在。 */
    MT_SDT_ConfigCommonSIB_r18_Sdt_LogicalChannelSR_DelayTimer_r18 sdt_LogicalChannelSR_DelayTimer_r18; /**< ASN.1 sdt-LogicalChannelSR-DelayTimer-r18；枚举；OPTIONAL。 */
    bool has_t319a_r18; /**< t319a-r18 是否存在。 */
    MT_SDT_ConfigCommonSIB_r18_T319a_r18 t319a_r18; /**< ASN.1 t319a-r18；枚举；OPTIONAL。 */
};


/**
 * @brief RACH_ConfigGeneric_ExtGroup1
 * @note ASN.1：RACH_ConfigGeneric_ExtGroup1；源文件第 10896 行。
 */
struct RACH_ConfigGeneric_ExtGroup1 {
    bool has_prach_ConfigurationPeriodScaling_IAB_r16; /**< prach-ConfigurationPeriodScaling-IAB-r16 是否存在。 */
    RACH_ConfigGeneric_ExtGroup1_Prach_ConfigurationPeriodScaling_IAB_r16 prach_ConfigurationPeriodScaling_IAB_r16; /**< ASN.1 prach-ConfigurationPeriodScaling-IAB-r16；枚举；OPTIONAL。 */
    bool has_prach_ConfigurationFrameOffset_IAB_r16; /**< prach-ConfigurationFrameOffset-IAB-r16 是否存在。 */
    int64_t prach_ConfigurationFrameOffset_IAB_r16; /**< ASN.1 prach-ConfigurationFrameOffset-IAB-r16；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_prach_ConfigurationSOffset_IAB_r16; /**< prach-ConfigurationSOffset-IAB-r16 是否存在。 */
    int64_t prach_ConfigurationSOffset_IAB_r16; /**< ASN.1 prach-ConfigurationSOffset-IAB-r16；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_ra_ResponseWindow_v1610; /**< ra-ResponseWindow-v1610 是否存在。 */
    RACH_ConfigGeneric_ExtGroup1_Ra_ResponseWindow_v1610 ra_ResponseWindow_v1610; /**< ASN.1 ra-ResponseWindow-v1610；枚举；OPTIONAL。 */
    bool has_prach_ConfigurationIndex_v1610; /**< prach-ConfigurationIndex-v1610 是否存在。 */
    int64_t prach_ConfigurationIndex_v1610; /**< ASN.1 prach-ConfigurationIndex-v1610；INTEGER (256..262)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief RACH_ConfigGeneric_ExtGroup2
 * @note ASN.1：RACH_ConfigGeneric_ExtGroup2；源文件第 10903 行。
 */
struct RACH_ConfigGeneric_ExtGroup2 {
    bool has_ra_ResponseWindow_v1700; /**< ra-ResponseWindow-v1700 是否存在。 */
    RACH_ConfigGeneric_ExtGroup2_Ra_ResponseWindow_v1700 ra_ResponseWindow_v1700; /**< ASN.1 ra-ResponseWindow-v1700；枚举；OPTIONAL。 */
};


/**
 * @brief RACH_ConfigGeneric
 * @note ASN.1：RACH-ConfigGeneric；源文件第 10886 行。
 * @note RACH-ConfigGeneric ::= SEQUENCE { prach-ConfigurationIndex, msg1-FDM, msg1-FrequencyStart, zeroCorre...
 */
struct RACH_ConfigGeneric {
    int64_t prach_ConfigurationIndex; /**< ASN.1 prach-ConfigurationIndex；INTEGER (0..255)，位宽 8 bit。 */
    RACH_ConfigGeneric_Msg1_FDM msg1_FDM; /**< ASN.1 msg1-FDM；枚举。 */
    int64_t msg1_FrequencyStart; /**< ASN.1 msg1-FrequencyStart；INTEGER (0..274)，位宽 9 bit。 */
    int64_t zeroCorrelationZoneConfig; /**< ASN.1 zeroCorrelationZoneConfig；INTEGER (0..15)，位宽 4 bit。 */
    int64_t preambleReceivedTargetPower; /**< ASN.1 preambleReceivedTargetPower；INTEGER (-202..-60)，位宽 8 bit。 */
    RACH_ConfigGeneric_PreambleTransMax preambleTransMax; /**< ASN.1 preambleTransMax；枚举。 */
    RACH_ConfigGeneric_PowerRampingStep powerRampingStep; /**< ASN.1 powerRampingStep；枚举。 */
    RACH_ConfigGeneric_Ra_ResponseWindow ra_ResponseWindow; /**< ASN.1 ra-ResponseWindow；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RACH_ConfigGeneric_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RACH_ConfigGeneric_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18
 * @note ASN.1：rach-OccasionsSI-r18；源文件第 12789 行。
 * @note SEQUENCE { rach-ConfigSI-r18, ssb-perRACH-Occasion-r18 }
 */
struct SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18 {
    RACH_ConfigGeneric rach_ConfigSI_r18; /**< ASN.1 rach-ConfigSI-r18；结构体。 */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18_Ssb_perRACH_Occasion_r18 ssb_perRACH_Occasion_r18; /**< ASN.1 ssb-perRACH-Occasion-r18；枚举。 */
};


/**
 * @brief SI_RequestConfigRepetition_r18
 * @note ASN.1：SI-RequestConfigRepetition-r18；源文件第 12788 行。
 * @note SI-RequestConfigRepetition-r18 ::= SEQUENCE { rach-OccasionsSI-r18, si-RequestResourcesRepetitionNum2-r18, si-Re...
 */
struct SI_RequestConfigRepetition_r18 {
    bool has_rach_OccasionsSI_r18; /**< rach-OccasionsSI-r18 是否存在。 */
    SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18 rach_OccasionsSI_r18; /**< ASN.1 rach-OccasionsSI-r18；结构体；OPTIONAL。 */
    bool has_si_RequestResourcesRepetitionNum2_r18; /**< si-RequestResourcesRepetitionNum2-r18 是否存在。 */
    SI_RequestResourcesRepetition_r18* si_RequestResourcesRepetitionNum2_r18_items; /**< ASN.1 si-RequestResourcesRepetitionNum2-r18；SEQUENCE OF SI_RequestResourcesRepetition_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t si_RequestResourcesRepetitionNum2_r18_count; /**< si-RequestResourcesRepetitionNum2-r18 元素个数。 */
    bool has_si_RequestResourcesRepetitionNum4_r18; /**< si-RequestResourcesRepetitionNum4-r18 是否存在。 */
    SI_RequestResourcesRepetition_r18* si_RequestResourcesRepetitionNum4_r18_items; /**< ASN.1 si-RequestResourcesRepetitionNum4-r18；SEQUENCE OF SI_RequestResourcesRepetition_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t si_RequestResourcesRepetitionNum4_r18_count; /**< si-RequestResourcesRepetitionNum4-r18 元素个数。 */
    bool has_si_RequestResourcesRepetitionNum8_r18; /**< si-RequestResourcesRepetitionNum8-r18 是否存在。 */
    SI_RequestResourcesRepetition_r18* si_RequestResourcesRepetitionNum8_r18_items; /**< ASN.1 si-RequestResourcesRepetitionNum8-r18；SEQUENCE OF SI_RequestResourcesRepetition_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t si_RequestResourcesRepetitionNum8_r18_count; /**< si-RequestResourcesRepetitionNum8-r18 元素个数。 */
};


/**
 * @brief SI_SchedulingInfo_v1800
 * @note ASN.1：SI-SchedulingInfo-v1800；源文件第 12831 行。
 * @note SI-SchedulingInfo-v1800 ::= SEQUENCE { si-RequestConfigMSG1-Repetition-r18, si-RequestConfigRedCap-MSG1-R...
 */
struct SI_SchedulingInfo_v1800 {
    bool has_si_RequestConfigMSG1_Repetition_r18; /**< si-RequestConfigMSG1-Repetition-r18 是否存在。 */
    SI_RequestConfigRepetition_r18 si_RequestConfigMSG1_Repetition_r18; /**< ASN.1 si-RequestConfigMSG1-Repetition-r18；结构体；OPTIONAL。 */
    bool has_si_RequestConfigRedCap_MSG1_Repetition_r18; /**< si-RequestConfigRedCap-MSG1-Repetition-r18 是否存在。 */
    SI_RequestConfigRepetition_r18 si_RequestConfigRedCap_MSG1_Repetition_r18; /**< ASN.1 si-RequestConfigRedCap-MSG1-Repetition-r18；结构体；OPTIONAL。 */
    bool has_si_RequestConfigSUL_MSG1_Repetition_r18; /**< si-RequestConfigSUL-MSG1-Repetition-r18 是否存在。 */
    SI_RequestConfigRepetition_r18 si_RequestConfigSUL_MSG1_Repetition_r18; /**< ASN.1 si-RequestConfigSUL-MSG1-Repetition-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SIB1_v1800_IEs_FeaturePriorities_v1800
 * @note ASN.1：featurePriorities-v1800；源文件第 1904 行。
 * @note SEQUENCE { msg1-Repetitions-Priority-r18, eRedCapPriority-r18 }
 */
struct SIB1_v1800_IEs_FeaturePriorities_v1800 {
    bool has_msg1_Repetitions_Priority_r18; /**< msg1-Repetitions-Priority-r18 是否存在。 */
    FeaturePriority_r17 msg1_Repetitions_Priority_r18; /**< ASN.1 msg1-Repetitions-Priority-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_eRedCapPriority_r18; /**< eRedCapPriority-r18 是否存在。 */
    FeaturePriority_r17 eRedCapPriority_r18; /**< ASN.1 eRedCapPriority-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SIB1_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1923 行。
 * @note SEQUENCE { }
 */
struct SIB1_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SIB1_v1800_IEs
 * @note ASN.1：SIB1-v1800-IEs；源文件第 1900 行。
 * @note SIB1-v1800-IEs ::= SEQUENCE { ncr-Support-r18, mt-SDT-ConfigCommonSIB-r18, musim-CapRestrictionA...
 */
struct SIB1_v1800_IEs {
    bool has_ncr_Support_r18; /**< ncr-Support-r18 是否存在。 */
    SIB1_v1800_IEs_Ncr_Support_r18 ncr_Support_r18; /**< ASN.1 ncr-Support-r18；枚举；OPTIONAL。 */
    bool has_mt_SDT_ConfigCommonSIB_r18; /**< mt-SDT-ConfigCommonSIB-r18 是否存在。 */
    MT_SDT_ConfigCommonSIB_r18 mt_SDT_ConfigCommonSIB_r18; /**< ASN.1 mt-SDT-ConfigCommonSIB-r18；结构体；OPTIONAL。 */
    bool has_musim_CapRestrictionAllowed_r18; /**< musim-CapRestrictionAllowed-r18 是否存在。 */
    SIB1_v1800_IEs_Musim_CapRestrictionAllowed_r18 musim_CapRestrictionAllowed_r18; /**< ASN.1 musim-CapRestrictionAllowed-r18；枚举；OPTIONAL。 */
    bool has_featurePriorities_v1800; /**< featurePriorities-v1800 是否存在。 */
    SIB1_v1800_IEs_FeaturePriorities_v1800 featurePriorities_v1800; /**< ASN.1 featurePriorities-v1800；结构体；OPTIONAL。 */
    bool has_si_SchedulingInfo_v1800; /**< si-SchedulingInfo-v1800 是否存在。 */
    SI_SchedulingInfo_v1800 si_SchedulingInfo_v1800; /**< ASN.1 si-SchedulingInfo-v1800；结构体；OPTIONAL。 */
    bool has_cellBarredATG_r18; /**< cellBarredATG-r18 是否存在。 */
    SIB1_v1800_IEs_CellBarredATG_r18 cellBarredATG_r18; /**< ASN.1 cellBarredATG-r18；枚举；OPTIONAL。 */
    bool has_cellBarredNES_r18; /**< cellBarredNES-r18 是否存在。 */
    SIB1_v1800_IEs_CellBarredNES_r18 cellBarredNES_r18; /**< ASN.1 cellBarredNES-r18；枚举；OPTIONAL。 */
    bool has_mobileIAB_Cell_r18; /**< mobileIAB-Cell-r18 是否存在。 */
    SIB1_v1800_IEs_MobileIAB_Cell_r18 mobileIAB_Cell_r18; /**< ASN.1 mobileIAB-Cell-r18；枚举；OPTIONAL。 */
    bool has_eDRX_AllowedInactive_r18; /**< eDRX-AllowedInactive-r18 是否存在。 */
    SIB1_v1800_IEs_EDRX_AllowedInactive_r18 eDRX_AllowedInactive_r18; /**< ASN.1 eDRX-AllowedInactive-r18；枚举；OPTIONAL。 */
    bool has_intraFreqReselection_eRedCap_r18; /**< intraFreqReselection-eRedCap-r18 是否存在。 */
    SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18 intraFreqReselection_eRedCap_r18; /**< ASN.1 intraFreqReselection-eRedCap-r18；枚举；OPTIONAL。 */
    bool has_nonServingCellMII_r18; /**< nonServingCellMII-r18 是否存在。 */
    SIB1_v1800_IEs_NonServingCellMII_r18 nonServingCellMII_r18; /**< ASN.1 nonServingCellMII-r18；枚举；OPTIONAL。 */
    bool has_sdt_BeamFailureRecoveryProhibitTimer_r18; /**< sdt-BeamFailureRecoveryProhibitTimer-r18 是否存在。 */
    SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18 sdt_BeamFailureRecoveryProhibitTimer_r18; /**< ASN.1 sdt-BeamFailureRecoveryProhibitTimer-r18；枚举；OPTIONAL。 */
    bool has_eRedCap_ConfigCommon_r18; /**< eRedCap-ConfigCommon-r18 是否存在。 */
    ERedCap_ConfigCommonSIB_r18 eRedCap_ConfigCommon_r18; /**< ASN.1 eRedCap-ConfigCommon-r18；结构体；OPTIONAL。 */
    bool has_cellBarredFixedVSAT_r18; /**< cellBarredFixedVSAT-r18 是否存在。 */
    SIB1_v1800_IEs_CellBarredFixedVSAT_r18 cellBarredFixedVSAT_r18; /**< ASN.1 cellBarredFixedVSAT-r18；枚举；OPTIONAL。 */
    bool has_cellBarredMobileVSAT_r18; /**< cellBarredMobileVSAT-r18 是否存在。 */
    SIB1_v1800_IEs_CellBarredMobileVSAT_r18 cellBarredMobileVSAT_r18; /**< ASN.1 cellBarredMobileVSAT-r18；枚举；OPTIONAL。 */
    bool has_reselectionMeasurementsNR_r18; /**< reselectionMeasurementsNR-r18 是否存在。 */
    SIB1_v1800_IEs_ReselectionMeasurementsNR_r18 reselectionMeasurementsNR_r18; /**< ASN.1 reselectionMeasurementsNR-r18；枚举；OPTIONAL。 */
    bool has_cellBarred2RxXR_r18; /**< cellBarred2RxXR-r18 是否存在。 */
    SIB1_v1800_IEs_CellBarred2RxXR_r18 cellBarred2RxXR_r18; /**< ASN.1 cellBarred2RxXR-r18；枚举；OPTIONAL。 */
    bool has_intraFreqReselection2RxXR_r18; /**< intraFreqReselection2RxXR-r18 是否存在。 */
    SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18 intraFreqReselection2RxXR_r18; /**< ASN.1 intraFreqReselection2RxXR-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SIB1_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SI_RequestConfig_Rach_OccasionsSI
 * @note ASN.1：rach-OccasionsSI；源文件第 12771 行。
 * @note SEQUENCE { rach-ConfigSI, ssb-perRACH-Occasion }
 */
struct SI_RequestConfig_Rach_OccasionsSI {
    RACH_ConfigGeneric rach_ConfigSI; /**< ASN.1 rach-ConfigSI；结构体。 */
    SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion ssb_perRACH_Occasion; /**< ASN.1 ssb-perRACH-Occasion；枚举。 */
};


/**
 * @brief SI_RequestConfig
 * @note ASN.1：SI-RequestConfig；源文件第 12770 行。
 * @note SI-RequestConfig ::= SEQUENCE { rach-OccasionsSI, si-RequestPeriod, si-RequestResources }
 */
struct SI_RequestConfig {
    bool has_rach_OccasionsSI; /**< rach-OccasionsSI 是否存在。 */
    SI_RequestConfig_Rach_OccasionsSI rach_OccasionsSI; /**< ASN.1 rach-OccasionsSI；结构体；OPTIONAL。 */
    bool has_si_RequestPeriod; /**< si-RequestPeriod 是否存在。 */
    SI_RequestConfig_Si_RequestPeriod si_RequestPeriod; /**< ASN.1 si-RequestPeriod；枚举；OPTIONAL。 */
    SI_RequestResources* si_RequestResources_items; /**< ASN.1 si-RequestResources；SEQUENCE OF SI_RequestResources，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t si_RequestResources_count; /**< si-RequestResources 元素个数。 */
};


/**
 * @brief SI_SchedulingInfo_v1740
 * @note ASN.1：SI-SchedulingInfo-v1740；源文件第 12827 行。
 * @note SI-SchedulingInfo-v1740 ::= SEQUENCE { si-RequestConfigRedCap-r17 }
 */
struct SI_SchedulingInfo_v1740 {
    bool has_si_RequestConfigRedCap_r17; /**< si-RequestConfigRedCap-r17 是否存在。 */
    SI_RequestConfig si_RequestConfigRedCap_r17; /**< ASN.1 si-RequestConfigRedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SIB1_v1740_IEs
 * @note ASN.1：SIB1-v1740-IEs；源文件第 1895 行。
 * @note SIB1-v1740-IEs ::= SEQUENCE { si-SchedulingInfo-v1740, nonCriticalExtension }
 */
struct SIB1_v1740_IEs {
    bool has_si_SchedulingInfo_v1740; /**< si-SchedulingInfo-v1740 是否存在。 */
    SI_SchedulingInfo_v1740 si_SchedulingInfo_v1740; /**< ASN.1 si-SchedulingInfo-v1740；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SIB1_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SDT_ConfigCommonSIB_r17
 * @note ASN.1：SDT-ConfigCommonSIB-r17；源文件第 1930 行。
 * @note SDT-ConfigCommonSIB-r17 ::= SEQUENCE { sdt-RSRP-Threshold-r17, sdt-LogicalChannelSR-DelayTimer-r17, sdt-D...
 */
struct SDT_ConfigCommonSIB_r17 {
    bool has_sdt_RSRP_Threshold_r17; /**< sdt-RSRP-Threshold-r17 是否存在。 */
    RSRP_Range sdt_RSRP_Threshold_r17; /**< ASN.1 sdt-RSRP-Threshold-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_sdt_LogicalChannelSR_DelayTimer_r17; /**< sdt-LogicalChannelSR-DelayTimer-r17 是否存在。 */
    SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17 sdt_LogicalChannelSR_DelayTimer_r17; /**< ASN.1 sdt-LogicalChannelSR-DelayTimer-r17；枚举；OPTIONAL。 */
    SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17 sdt_DataVolumeThreshold_r17; /**< ASN.1 sdt-DataVolumeThreshold-r17；枚举。 */
    SDT_ConfigCommonSIB_r17_T319a_r17 t319a_r17; /**< ASN.1 t319a-r17；枚举。 */
};


/**
 * @brief RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17
 * @note ASN.1：cellBarredRedCap-r17；源文件第 1941 行。
 * @note SEQUENCE { cellBarredRedCap1Rx-r17, cellBarredRedCap2Rx-r17 }
 */
struct RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17 {
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17 cellBarredRedCap1Rx_r17; /**< ASN.1 cellBarredRedCap1Rx-r17；枚举。 */
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17 cellBarredRedCap2Rx_r17; /**< ASN.1 cellBarredRedCap2Rx-r17；枚举。 */
};


/**
 * @brief RedCap_ConfigCommonSIB_r17
 * @note ASN.1：RedCap-ConfigCommonSIB-r17；源文件第 1939 行。
 * @note RedCap-ConfigCommonSIB-r17 ::= SEQUENCE { halfDuplexRedCapAllowed-r17, cellBarredRedCap-r17 }
 */
struct RedCap_ConfigCommonSIB_r17 {
    bool has_halfDuplexRedCapAllowed_r17; /**< halfDuplexRedCapAllowed-r17 是否存在。 */
    RedCap_ConfigCommonSIB_r17_HalfDuplexRedCapAllowed_r17 halfDuplexRedCapAllowed_r17; /**< ASN.1 halfDuplexRedCapAllowed-r17；枚举；OPTIONAL。 */
    bool has_cellBarredRedCap_r17; /**< cellBarredRedCap-r17 是否存在。 */
    RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17 cellBarredRedCap_r17; /**< ASN.1 cellBarredRedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SI_SchedulingInfo_v1700
 * @note ASN.1：SI-SchedulingInfo-v1700；源文件第 12822 行。
 * @note SI-SchedulingInfo-v1700 ::= SEQUENCE { schedulingInfoList2-r17, dummy }
 */
struct SI_SchedulingInfo_v1700 {
    SchedulingInfo2_r17* schedulingInfoList2_r17_items; /**< ASN.1 schedulingInfoList2-r17；SEQUENCE OF SchedulingInfo2_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t schedulingInfoList2_r17_count; /**< schedulingInfoList2-r17 元素个数。 */
    bool has_dummy; /**< dummy 是否存在。 */
    SI_RequestConfig dummy; /**< ASN.1 dummy；结构体；OPTIONAL。 */
};


/**
 * @brief UAC_BarringInfoSetList_v1700
 * @note ASN.1：UAC-BarringInfoSetList-v1700；源文件第 13829 行。
 * @note UAC-BarringInfoSetList-v1700 ::= SEQUENCE OF (size 1..8) OF UAC-BarringInfoSet-v1700
 */
struct UAC_BarringInfoSetList_v1700 {
    UAC_BarringInfoSet_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB1_v1700_IEs_Uac_BarringInfo_v1700
 * @note ASN.1：uac-BarringInfo-v1700；源文件第 1875 行。
 * @note SEQUENCE { uac-BarringInfoSetList-v1700 }
 */
struct SIB1_v1700_IEs_Uac_BarringInfo_v1700 {
    UAC_BarringInfoSetList_v1700 uac_BarringInfoSetList_v1700; /**< ASN.1 uac-BarringInfoSetList-v1700；SEQUENCE OF UAC_BarringInfoSet_v1700，SIZE (1..8)。 */
};


/**
 * @brief SIB1_v1700_IEs_FeaturePriorities_r17
 * @note ASN.1：featurePriorities-r17；源文件第 1880 行。
 * @note SEQUENCE { redCapPriority-r17, slicingPriority-r17, msg3-Repetitions-Priority...
 */
struct SIB1_v1700_IEs_FeaturePriorities_r17 {
    bool has_redCapPriority_r17; /**< redCapPriority-r17 是否存在。 */
    FeaturePriority_r17 redCapPriority_r17; /**< ASN.1 redCapPriority-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_slicingPriority_r17; /**< slicingPriority-r17 是否存在。 */
    FeaturePriority_r17 slicingPriority_r17; /**< ASN.1 slicingPriority-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_msg3_Repetitions_Priority_r17; /**< msg3-Repetitions-Priority-r17 是否存在。 */
    FeaturePriority_r17 msg3_Repetitions_Priority_r17; /**< ASN.1 msg3-Repetitions-Priority-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_sdt_Priority_r17; /**< sdt-Priority-r17 是否存在。 */
    FeaturePriority_r17 sdt_Priority_r17; /**< ASN.1 sdt-Priority-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SIB1_v1700_IEs
 * @note ASN.1：SIB1-v1700-IEs；源文件第 1873 行。
 * @note SIB1-v1700-IEs ::= SEQUENCE { hsdn-Cell-r17, uac-BarringInfo-v1700, sdt-ConfigCommon-r17, redCap...
 */
struct SIB1_v1700_IEs {
    bool has_hsdn_Cell_r17; /**< hsdn-Cell-r17 是否存在。 */
    SIB1_v1700_IEs_Hsdn_Cell_r17 hsdn_Cell_r17; /**< ASN.1 hsdn-Cell-r17；枚举；OPTIONAL。 */
    bool has_uac_BarringInfo_v1700; /**< uac-BarringInfo-v1700 是否存在。 */
    SIB1_v1700_IEs_Uac_BarringInfo_v1700 uac_BarringInfo_v1700; /**< ASN.1 uac-BarringInfo-v1700；结构体；OPTIONAL。 */
    bool has_sdt_ConfigCommon_r17; /**< sdt-ConfigCommon-r17 是否存在。 */
    SDT_ConfigCommonSIB_r17 sdt_ConfigCommon_r17; /**< ASN.1 sdt-ConfigCommon-r17；结构体；OPTIONAL。 */
    bool has_redCap_ConfigCommon_r17; /**< redCap-ConfigCommon-r17 是否存在。 */
    RedCap_ConfigCommonSIB_r17 redCap_ConfigCommon_r17; /**< ASN.1 redCap-ConfigCommon-r17；结构体；OPTIONAL。 */
    bool has_featurePriorities_r17; /**< featurePriorities-r17 是否存在。 */
    SIB1_v1700_IEs_FeaturePriorities_r17 featurePriorities_r17; /**< ASN.1 featurePriorities-r17；结构体；OPTIONAL。 */
    bool has_si_SchedulingInfo_v1700; /**< si-SchedulingInfo-v1700 是否存在。 */
    SI_SchedulingInfo_v1700 si_SchedulingInfo_v1700; /**< ASN.1 si-SchedulingInfo-v1700；结构体；OPTIONAL。 */
    bool has_hyperSFN_r17; /**< hyperSFN-r17 是否存在。 */
    BitString hyperSFN_r17; /**< ASN.1 hyperSFN-r17；SIZE (10)，定长；OPTIONAL。 */
    bool has_eDRX_AllowedIdle_r17; /**< eDRX-AllowedIdle-r17 是否存在。 */
    SIB1_v1700_IEs_EDRX_AllowedIdle_r17 eDRX_AllowedIdle_r17; /**< ASN.1 eDRX-AllowedIdle-r17；枚举；OPTIONAL。 */
    bool has_eDRX_AllowedInactive_r17; /**< eDRX-AllowedInactive-r17 是否存在。 */
    SIB1_v1700_IEs_EDRX_AllowedInactive_r17 eDRX_AllowedInactive_r17; /**< ASN.1 eDRX-AllowedInactive-r17；枚举；OPTIONAL。 */
    bool has_intraFreqReselectionRedCap_r17; /**< intraFreqReselectionRedCap-r17 是否存在。 */
    SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17 intraFreqReselectionRedCap_r17; /**< ASN.1 intraFreqReselectionRedCap-r17；枚举；OPTIONAL。 */
    bool has_cellBarredNTN_r17; /**< cellBarredNTN-r17 是否存在。 */
    SIB1_v1700_IEs_CellBarredNTN_r17 cellBarredNTN_r17; /**< ASN.1 cellBarredNTN-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SIB1_v1740_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SIB1_v1630_IEs_Uac_BarringInfo_v1630
 * @note ASN.1：uac-BarringInfo-v1630；源文件第 1867 行。
 * @note SEQUENCE { uac-AC1-SelectAssistInfo-r16 }
 */
struct SIB1_v1630_IEs_Uac_BarringInfo_v1630 {
    UAC_AC1_SelectAssistInfo_r16* uac_AC1_SelectAssistInfo_r16_items; /**< ASN.1 uac-AC1-SelectAssistInfo-r16；SEQUENCE OF UAC_AC1_SelectAssistInfo_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t uac_AC1_SelectAssistInfo_r16_count; /**< uac-AC1-SelectAssistInfo-r16 元素个数。 */
};


/**
 * @brief SIB1_v1630_IEs
 * @note ASN.1：SIB1-v1630-IEs；源文件第 1866 行。
 * @note SIB1-v1630-IEs ::= SEQUENCE { uac-BarringInfo-v1630, nonCriticalExtension }
 */
struct SIB1_v1630_IEs {
    bool has_uac_BarringInfo_v1630; /**< uac-BarringInfo-v1630 是否存在。 */
    SIB1_v1630_IEs_Uac_BarringInfo_v1630 uac_BarringInfo_v1630; /**< ASN.1 uac-BarringInfo-v1630；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SIB1_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief PosSI_SchedulingInfo_r16_ExtGroup2
 * @note ASN.1：PosSI_SchedulingInfo_r16_ExtGroup2；源文件第 4201 行。
 */
struct PosSI_SchedulingInfo_r16_ExtGroup2 {
    bool has_posSI_RequestConfigMSG1_Repetition_r18; /**< posSI-RequestConfigMSG1-Repetition-r18 是否存在。 */
    SI_RequestConfigRepetition_r18 posSI_RequestConfigMSG1_Repetition_r18; /**< ASN.1 posSI-RequestConfigMSG1-Repetition-r18；结构体；OPTIONAL。 */
    bool has_posSI_RequestConfigSUL_MSG1_Repetition_r18; /**< posSI-RequestConfigSUL-MSG1-Repetition-r18 是否存在。 */
    SI_RequestConfigRepetition_r18 posSI_RequestConfigSUL_MSG1_Repetition_r18; /**< ASN.1 posSI-RequestConfigSUL-MSG1-Repetition-r18；结构体；OPTIONAL。 */
    bool has_posSI_RequestConfigRedCap_MSG1_Repetition_r18; /**< posSI-RequestConfigRedCap-MSG1-Repetition-r18 是否存在。 */
    SI_RequestConfigRepetition_r18 posSI_RequestConfigRedCap_MSG1_Repetition_r18; /**< ASN.1 posSI-RequestConfigRedCap-MSG1-Repetition-r18；结构体；OPTIONAL。 */
};


/**
 * @brief PosSI_SchedulingInfo_r16_ExtGroup1
 * @note ASN.1：PosSI_SchedulingInfo_r16_ExtGroup1；源文件第 4198 行。
 */
struct PosSI_SchedulingInfo_r16_ExtGroup1 {
    bool has_posSI_RequestConfigRedCap_r17; /**< posSI-RequestConfigRedCap-r17 是否存在。 */
    SI_RequestConfig posSI_RequestConfigRedCap_r17; /**< ASN.1 posSI-RequestConfigRedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PosSI_SchedulingInfo_r16
 * @note ASN.1：PosSI-SchedulingInfo-r16；源文件第 4193 行。
 * @note PosSI-SchedulingInfo-r16 ::= SEQUENCE { posSchedulingInfoList-r16, posSI-RequestConfig-r16, posSI-RequestC...
 */
struct PosSI_SchedulingInfo_r16 {
    PosSchedulingInfo_r16* posSchedulingInfoList_r16_items; /**< ASN.1 posSchedulingInfoList-r16；SEQUENCE OF PosSchedulingInfo_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t posSchedulingInfoList_r16_count; /**< posSchedulingInfoList-r16 元素个数。 */
    bool has_posSI_RequestConfig_r16; /**< posSI-RequestConfig-r16 是否存在。 */
    SI_RequestConfig posSI_RequestConfig_r16; /**< ASN.1 posSI-RequestConfig-r16；结构体；OPTIONAL。 */
    bool has_posSI_RequestConfigSUL_r16; /**< posSI-RequestConfigSUL-r16 是否存在。 */
    SI_RequestConfig posSI_RequestConfigSUL_r16; /**< ASN.1 posSI-RequestConfigSUL-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PosSI_SchedulingInfo_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PosSI_SchedulingInfo_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SIB1_v1610_IEs
 * @note ASN.1：SIB1-v1610-IEs；源文件第 1859 行。
 * @note SIB1-v1610-IEs ::= SEQUENCE { idleModeMeasurementsEUTRA-r16, idleModeMeasurementsNR-r16, posSI-S...
 */
struct SIB1_v1610_IEs {
    bool has_idleModeMeasurementsEUTRA_r16; /**< idleModeMeasurementsEUTRA-r16 是否存在。 */
    SIB1_v1610_IEs_IdleModeMeasurementsEUTRA_r16 idleModeMeasurementsEUTRA_r16; /**< ASN.1 idleModeMeasurementsEUTRA-r16；枚举；OPTIONAL。 */
    bool has_idleModeMeasurementsNR_r16; /**< idleModeMeasurementsNR-r16 是否存在。 */
    SIB1_v1610_IEs_IdleModeMeasurementsNR_r16 idleModeMeasurementsNR_r16; /**< ASN.1 idleModeMeasurementsNR-r16；枚举；OPTIONAL。 */
    bool has_posSI_SchedulingInfo_r16; /**< posSI-SchedulingInfo-r16 是否存在。 */
    PosSI_SchedulingInfo_r16 posSI_SchedulingInfo_r16; /**< ASN.1 posSI-SchedulingInfo-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SIB1_v1630_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief NPN_IdentityInfoList_r16
 * @note ASN.1：NPN-IdentityInfoList-r16；源文件第 8787 行。
 * @note NPN-IdentityInfoList-r16 ::= SEQUENCE OF (size 1..12) OF NPN-IdentityInfo-r16
 */
struct NPN_IdentityInfoList_r16 {
    NPN_IdentityInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CellAccessRelatedInfo_ExtGroup1
 * @note ASN.1：CellAccessRelatedInfo_ExtGroup1；源文件第 4746 行。
 */
struct CellAccessRelatedInfo_ExtGroup1 {
    bool has_cellReservedForFutureUse_r16; /**< cellReservedForFutureUse-r16 是否存在。 */
    CellAccessRelatedInfo_ExtGroup1_CellReservedForFutureUse_r16 cellReservedForFutureUse_r16; /**< ASN.1 cellReservedForFutureUse-r16；枚举；OPTIONAL。 */
    bool has_npn_IdentityInfoList_r16; /**< npn-IdentityInfoList-r16 是否存在。 */
    NPN_IdentityInfoList_r16 npn_IdentityInfoList_r16; /**< ASN.1 npn-IdentityInfoList-r16；SEQUENCE OF NPN_IdentityInfo_r16，SIZE (1..12)；OPTIONAL。 */
};


/**
 * @brief CellAccessRelatedInfo_ExtGroup2
 * @note ASN.1：CellAccessRelatedInfo_ExtGroup2；源文件第 4750 行。
 */
struct CellAccessRelatedInfo_ExtGroup2 {
    bool has_snpn_AccessInfoList_r17; /**< snpn-AccessInfoList-r17 是否存在。 */
    SNPN_AccessInfo_r17* snpn_AccessInfoList_r17_items; /**< ASN.1 snpn-AccessInfoList-r17；SEQUENCE OF SNPN_AccessInfo_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t snpn_AccessInfoList_r17_count; /**< snpn-AccessInfoList-r17 元素个数。 */
};


/**
 * @brief PLMN_IdentityInfoList
 * @note ASN.1：PLMN-IdentityInfoList；源文件第 9856 行。
 * @note PLMN-IdentityInfoList ::= SEQUENCE OF (size 1..12) OF PLMN-IdentityInfo
 */
struct PLMN_IdentityInfoList {
    PLMN_IdentityInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CellAccessRelatedInfo
 * @note ASN.1：CellAccessRelatedInfo；源文件第 4742 行。
 * @note CellAccessRelatedInfo ::= SEQUENCE { plmn-IdentityInfoList, cellReservedForOtherUse, cellReservedForFut...
 */
struct CellAccessRelatedInfo {
    PLMN_IdentityInfoList plmn_IdentityInfoList; /**< ASN.1 plmn-IdentityInfoList；SEQUENCE OF PLMN_IdentityInfo，SIZE (1..12)。 */
    bool has_cellReservedForOtherUse; /**< cellReservedForOtherUse 是否存在。 */
    CellAccessRelatedInfo_CellReservedForOtherUse cellReservedForOtherUse; /**< ASN.1 cellReservedForOtherUse；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CellAccessRelatedInfo_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CellAccessRelatedInfo_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ConnEstFailureControl
 * @note ASN.1：ConnEstFailureControl；源文件第 5716 行。
 * @note ConnEstFailureControl ::= SEQUENCE { connEstFailCount, connEstFailOffsetValidity, connEstFailOffset }
 */
struct ConnEstFailureControl {
    ConnEstFailureControl_ConnEstFailCount connEstFailCount; /**< ASN.1 connEstFailCount；枚举。 */
    ConnEstFailureControl_ConnEstFailOffsetValidity connEstFailOffsetValidity; /**< ASN.1 connEstFailOffsetValidity；枚举。 */
    bool has_connEstFailOffset; /**< connEstFailOffset 是否存在。 */
    int64_t connEstFailOffset; /**< ASN.1 connEstFailOffset；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief ControlResourceSet_ExtGroup2
 * @note ASN.1：ControlResourceSet_ExtGroup2；源文件第 5749 行。
 */
struct ControlResourceSet_ExtGroup2 {
    bool has_followUnifiedTCI_State_r17; /**< followUnifiedTCI-State-r17 是否存在。 */
    ControlResourceSet_ExtGroup2_FollowUnifiedTCI_State_r17 followUnifiedTCI_State_r17; /**< ASN.1 followUnifiedTCI-State-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ControlResourceSet_ExtGroup3
 * @note ASN.1：ControlResourceSet_ExtGroup3；源文件第 5752 行。
 */
struct ControlResourceSet_ExtGroup3 {
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；枚举；OPTIONAL。 */
};


/**
 * @brief ControlResourceSet_ExtGroup1
 * @note ASN.1：ControlResourceSet_ExtGroup1；源文件第 5743 行。
 */
struct ControlResourceSet_ExtGroup1 {
    bool has_rb_Offset_r16; /**< rb-Offset-r16 是否存在。 */
    int64_t rb_Offset_r16; /**< ASN.1 rb-Offset-r16；INTEGER (0..5)，位宽 3 bit；OPTIONAL。 */
    bool has_tci_PresentDCI_1_2_r16; /**< tci-PresentDCI-1-2-r16 是否存在。 */
    int64_t tci_PresentDCI_1_2_r16; /**< ASN.1 tci-PresentDCI-1-2-r16；INTEGER (1..3)，位宽 2 bit；OPTIONAL。 */
    bool has_coresetPoolIndex_r16; /**< coresetPoolIndex-r16 是否存在。 */
    int64_t coresetPoolIndex_r16; /**< ASN.1 coresetPoolIndex-r16；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_controlResourceSetId_v1610; /**< controlResourceSetId-v1610 是否存在。 */
    ControlResourceSetId_v1610 controlResourceSetId_v1610; /**< ASN.1 controlResourceSetId-v1610；INTEGER (12..15)，位宽 2 bit；OPTIONAL。 */
};


/**
 * @brief ControlResourceSet_Cce_REG_MappingType_Interleaved
 * @note ASN.1：cce-REG-MappingType/interleaved；源文件第 5730 行。
 * @note SEQUENCE { reg-BundleSize, interleaverSize, shiftIndex }
 */
struct ControlResourceSet_Cce_REG_MappingType_Interleaved {
    ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize reg_BundleSize; /**< ASN.1 reg-BundleSize；枚举。 */
    ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize interleaverSize; /**< ASN.1 interleaverSize；枚举。 */
    bool has_shiftIndex; /**< shiftIndex 是否存在。 */
    int64_t shiftIndex; /**< ASN.1 shiftIndex；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
};


/**
 * @brief ControlResourceSet_Cce_REG_MappingType
 * @note ASN.1：cce-REG-MappingType；源文件第 5729 行。
 * @note CHOICE { interleaved, nonInterleaved }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ControlResourceSet_Cce_REG_MappingType_Tag {
    ControlResourceSet_Cce_REG_MappingType_Tag_interleaved = 0, /**< ASN.1 interleaved */
    ControlResourceSet_Cce_REG_MappingType_Tag_nonInterleaved = 1, /**< ASN.1 nonInterleaved */
} ControlResourceSet_Cce_REG_MappingType_Tag;

struct ControlResourceSet_Cce_REG_MappingType {
    ControlResourceSet_Cce_REG_MappingType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ControlResourceSet_Cce_REG_MappingType_Interleaved interleaved; /**< ASN.1 interleaved */
        Null nonInterleaved; /**< ASN.1 nonInterleaved */
    } u;
};


/**
 * @brief ControlResourceSet
 * @note ASN.1：ControlResourceSet；源文件第 5725 行。
 * @note ControlResourceSet ::= SEQUENCE { controlResourceSetId, frequencyDomainResources, duration, cce-REG-...
 */
struct ControlResourceSet {
    ControlResourceSetId controlResourceSetId; /**< ASN.1 controlResourceSetId；INTEGER (0..11)，位宽 4 bit。 */
    BitString frequencyDomainResources; /**< ASN.1 frequencyDomainResources；SIZE (45)，定长。 */
    int64_t duration; /**< ASN.1 duration；INTEGER (1..3)，位宽 2 bit。 */
    ControlResourceSet_Cce_REG_MappingType cce_REG_MappingType; /**< ASN.1 cce-REG-MappingType；结构体。 */
    ControlResourceSet_PrecoderGranularity precoderGranularity; /**< ASN.1 precoderGranularity；枚举。 */
    bool has_tci_StatesPDCCH_ToAddList; /**< tci-StatesPDCCH-ToAddList 是否存在。 */
    TCI_StateId* tci_StatesPDCCH_ToAddList_items; /**< ASN.1 tci-StatesPDCCH-ToAddList；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tci_StatesPDCCH_ToAddList_count; /**< tci-StatesPDCCH-ToAddList 元素个数。 */
    bool has_tci_StatesPDCCH_ToReleaseList; /**< tci-StatesPDCCH-ToReleaseList 是否存在。 */
    TCI_StateId* tci_StatesPDCCH_ToReleaseList_items; /**< ASN.1 tci-StatesPDCCH-ToReleaseList；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tci_StatesPDCCH_ToReleaseList_count; /**< tci-StatesPDCCH-ToReleaseList 元素个数。 */
    bool has_tci_PresentInDCI; /**< tci-PresentInDCI 是否存在。 */
    ControlResourceSet_Tci_PresentInDCI tci_PresentInDCI; /**< ASN.1 tci-PresentInDCI；枚举；OPTIONAL。 */
    bool has_pdcch_DMRS_ScramblingID; /**< pdcch-DMRS-ScramblingID 是否存在。 */
    int64_t pdcch_DMRS_ScramblingID; /**< ASN.1 pdcch-DMRS-ScramblingID；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ControlResourceSet_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ControlResourceSet_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ControlResourceSet_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS15KHZoneT；源文件第 9203 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS15KHZoneTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS30KHZoneT-SCS15KHZhalfT；源文件第 9204 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS30KHZoneTSCS15KHZhalfTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT；源文件第 9205 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS60KHZoneTSCS30KHZhalfTSCS15KHZquarterTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT；源文件第 9206 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS120KHZoneTSCS60KHZhalfTSCS30KHZquarterTSCS15KHZoneEighthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT；源文件第 9207 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS120KHZhalfTSCS60KHZquarterTSCS30KHZoneEighthTSCS15KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT；源文件第 9208 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS120KHZquarterTSCS60KHZoneEighthTSCS30KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneEighthT-SCS60KHZoneSixteenthT；源文件第 9209 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS120KHZoneEighthTSCS60KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneSixteenthT；源文件第 9210 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOSCS120KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO；源文件第 9202 行。
 * @note CHOICE { sCS15KHZoneT, sCS30KHZoneT-SCS15KHZhalfT, sCS60KHZoneT-SCS30KHZhalfT...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag {
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT = 0, /**< ASN.1 sCS15KHZoneT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT = 1, /**< ASN.1 sCS30KHZoneT-SCS15KHZhalfT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT = 2, /**< ASN.1 sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT = 3, /**< ASN.1 sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT = 4, /**< ASN.1 sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT = 5, /**< ASN.1 sCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneEighthT_SCS60KHZoneSixteenthT = 6, /**< ASN.1 sCS120KHZoneEighthT-SCS60KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneSixteenthT = 7, /**< ASN.1 sCS120KHZoneSixteenthT */
} PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag;

struct PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO {
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT sCS15KHZoneT; /**< ASN.1 sCS15KHZoneT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT sCS30KHZoneT_SCS15KHZhalfT; /**< ASN.1 sCS30KHZoneT-SCS15KHZhalfT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT; /**< ASN.1 sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT; /**< ASN.1 sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9 sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT; /**< ASN.1 sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0 sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT; /**< ASN.1 sCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT sCS120KHZoneEighthT_SCS60KHZoneSixteenthT; /**< ASN.1 sCS120KHZoneEighthT-SCS60KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT sCS120KHZoneSixteenthT; /**< ASN.1 sCS120KHZoneSixteenthT */
    } u;
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup1
 * @note ASN.1：PDCCH_ConfigCommon_ExtGroup1；源文件第 9201 行。
 */
struct PDCCH_ConfigCommon_ExtGroup1 {
    bool has_firstPDCCH_MonitoringOccasionOfPO; /**< firstPDCCH-MonitoringOccasionOfPO 是否存在。 */
    PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO firstPDCCH_MonitoringOccasionOfPO; /**< ASN.1 firstPDCCH-MonitoringOccasionOfPO；结构体；OPTIONAL。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup2
 * @note ASN.1：PDCCH_ConfigCommon_ExtGroup2；源文件第 9213 行。
 */
struct PDCCH_ConfigCommon_ExtGroup2 {
    bool has_commonSearchSpaceListExt_r16; /**< commonSearchSpaceListExt-r16 是否存在。 */
    SearchSpaceExt_r16* commonSearchSpaceListExt_r16_items; /**< ASN.1 commonSearchSpaceListExt-r16；SEQUENCE OF SearchSpaceExt_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t commonSearchSpaceListExt_r16_count; /**< commonSearchSpaceListExt-r16 元素个数。 */
};


/**
 * @brief SearchSpace_MonitoringSlotPeriodicityAndOffset
 * @note ASN.1：monitoringSlotPeriodicityAndOffset；源文件第 12176 行。
 * @note CHOICE { sl1, sl2, sl4, sl5, sl8, sl10, sl16, sl20, sl40, sl80, sl160, sl320,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag {
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1 = 0, /**< ASN.1 sl1 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2 = 1, /**< ASN.1 sl2 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl4 = 2, /**< ASN.1 sl4 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl5 = 3, /**< ASN.1 sl5 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl8 = 4, /**< ASN.1 sl8 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl10 = 5, /**< ASN.1 sl10 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl16 = 6, /**< ASN.1 sl16 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl20 = 7, /**< ASN.1 sl20 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl40 = 8, /**< ASN.1 sl40 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl80 = 9, /**< ASN.1 sl80 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl160 = 10, /**< ASN.1 sl160 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl320 = 11, /**< ASN.1 sl320 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl640 = 12, /**< ASN.1 sl640 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1280 = 13, /**< ASN.1 sl1280 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2560 = 14, /**< ASN.1 sl2560 */
} SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag;

struct SearchSpace_MonitoringSlotPeriodicityAndOffset {
    SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
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
        int64_t sl1280; /**< ASN.1 sl1280 */
        int64_t sl2560; /**< ASN.1 sl2560 */
    } u;
};


/**
 * @brief SearchSpace_NrofCandidates
 * @note ASN.1：nrofCandidates；源文件第 12195 行。
 * @note SEQUENCE { aggregationLevel1, aggregationLevel2, aggregationLevel4, aggregati...
 */
struct SearchSpace_NrofCandidates {
    SearchSpace_NrofCandidates_AggregationLevel1 aggregationLevel1; /**< ASN.1 aggregationLevel1；枚举。 */
    SearchSpace_NrofCandidates_AggregationLevel2 aggregationLevel2; /**< ASN.1 aggregationLevel2；枚举。 */
    SearchSpace_NrofCandidates_AggregationLevel4 aggregationLevel4; /**< ASN.1 aggregationLevel4；枚举。 */
    SearchSpace_NrofCandidates_AggregationLevel8 aggregationLevel8; /**< ASN.1 aggregationLevel8；枚举。 */
    SearchSpace_NrofCandidates_AggregationLevel16 aggregationLevel16; /**< ASN.1 aggregationLevel16；枚举。 */
};


/**
 * @brief SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0
 * @note ASN.1：searchSpaceType/common/dci-Format0-0-AndFormat1-0；源文件第 12204 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI
 * @note ASN.1：searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI；源文件第 12208 行。
 * @note SEQUENCE { aggregationLevel1, aggregationLevel2, aggregationLevel4, aggregati...
 */
struct SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI {
    bool has_aggregationLevel1; /**< aggregationLevel1 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1 aggregationLevel1; /**< ASN.1 aggregationLevel1；枚举；OPTIONAL。 */
    bool has_aggregationLevel2; /**< aggregationLevel2 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2 aggregationLevel2; /**< ASN.1 aggregationLevel2；枚举；OPTIONAL。 */
    bool has_aggregationLevel4; /**< aggregationLevel4 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4 aggregationLevel4; /**< ASN.1 aggregationLevel4；枚举；OPTIONAL。 */
    bool has_aggregationLevel8; /**< aggregationLevel8 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8 aggregationLevel8; /**< ASN.1 aggregationLevel8；枚举；OPTIONAL。 */
    bool has_aggregationLevel16; /**< aggregationLevel16 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16 aggregationLevel16; /**< ASN.1 aggregationLevel16；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceType_Common_Dci_Format2_0
 * @note ASN.1：searchSpaceType/common/dci-Format2-0；源文件第 12207 行。
 * @note SEQUENCE { nrofCandidates-SFI }
 */
struct SearchSpaceType_Common_Dci_Format2_0 {
    SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI nrofCandidates_SFI; /**< ASN.1 nrofCandidates-SFI；结构体。 */
};


/**
 * @brief SearchSpaceType_Common_Dci_Format2_1
 * @note ASN.1：searchSpaceType/common/dci-Format2-1；源文件第 12217 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceType_Common_Dci_Format2_1 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceType_Common_Dci_Format2_2
 * @note ASN.1：searchSpaceType/common/dci-Format2-2；源文件第 12220 行。
 * @note SEQUENCE { }
 */
struct SearchSpaceType_Common_Dci_Format2_2 {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SearchSpaceType_Common_Dci_Format2_3
 * @note ASN.1：searchSpaceType/common/dci-Format2-3；源文件第 12223 行。
 * @note SEQUENCE { dummy1, dummy2 }
 */
struct SearchSpaceType_Common_Dci_Format2_3 {
    bool has_dummy1; /**< dummy1 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy1 dummy1; /**< ASN.1 dummy1；枚举；OPTIONAL。 */
    SearchSpaceType_Common_Dci_Format2_3_Dummy2 dummy2; /**< ASN.1 dummy2；枚举。 */
};


/**
 * @brief SearchSpaceType_Common
 * @note ASN.1：searchSpaceType/common；源文件第 12203 行。
 * @note SEQUENCE { dci-Format0-0-AndFormat1-0, dci-Format2-0, dci-Format2-1, dci-Form...
 */
struct SearchSpaceType_Common {
    bool has_dci_Format0_0_AndFormat1_0; /**< dci-Format0-0-AndFormat1-0 是否存在。 */
    SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0 dci_Format0_0_AndFormat1_0; /**< ASN.1 dci-Format0-0-AndFormat1-0；结构体；OPTIONAL。 */
    bool has_dci_Format2_0; /**< dci-Format2-0 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_0 dci_Format2_0; /**< ASN.1 dci-Format2-0；结构体；OPTIONAL。 */
    bool has_dci_Format2_1; /**< dci-Format2-1 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_1 dci_Format2_1; /**< ASN.1 dci-Format2-1；结构体；OPTIONAL。 */
    bool has_dci_Format2_2; /**< dci-Format2-2 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_2 dci_Format2_2; /**< ASN.1 dci-Format2-2；结构体；OPTIONAL。 */
    bool has_dci_Format2_3; /**< dci-Format2-3 是否存在。 */
    SearchSpaceType_Common_Dci_Format2_3 dci_Format2_3; /**< ASN.1 dci-Format2-3；结构体；OPTIONAL。 */
};


/**
 * @brief SearchSpaceType_Ue_Specific_ExtGroup1
 * @note ASN.1：SearchSpaceType_Ue_Specific_ExtGroup1；源文件第 12232 行。
 */
struct SearchSpaceType_Ue_Specific_ExtGroup1 {
    bool has_dci_Formats_MT_r16; /**< dci-Formats-MT-r16 是否存在。 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_Formats_MT_r16 dci_Formats_MT_r16; /**< ASN.1 dci-Formats-MT-r16；枚举；OPTIONAL。 */
    bool has_dci_FormatsSL_r16; /**< dci-FormatsSL-r16 是否存在。 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16 dci_FormatsSL_r16; /**< ASN.1 dci-FormatsSL-r16；枚举；OPTIONAL。 */
    bool has_dci_FormatsExt_r16; /**< dci-FormatsExt-r16 是否存在。 */
    SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16 dci_FormatsExt_r16; /**< ASN.1 dci-FormatsExt-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceType_Ue_Specific_ExtGroup2
 * @note ASN.1：SearchSpaceType_Ue_Specific_ExtGroup2；源文件第 12239 行。
 */
struct SearchSpaceType_Ue_Specific_ExtGroup2 {
    bool has_dci_FormatsMC; /**< dci-FormatsMC 是否存在。 */
    SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC dci_FormatsMC; /**< ASN.1 dci-FormatsMC；枚举；OPTIONAL。 */
    bool has_dci_FormatsNCR_r18; /**< dci-FormatsNCR-r18 是否存在。 */
    SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsNCR_r18 dci_FormatsNCR_r18; /**< ASN.1 dci-FormatsNCR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceType_Ue_Specific
 * @note ASN.1：searchSpaceType/ue-Specific；源文件第 12229 行。
 * @note SEQUENCE { dci-Formats, dci-Formats-MT-r16, dci-FormatsSL-r16, dci-FormatsExt...
 */
struct SearchSpaceType_Ue_Specific {
    SearchSpaceType_Ue_Specific_Dci_Formats dci_Formats; /**< ASN.1 dci-Formats；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SearchSpaceType_Ue_Specific_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SearchSpaceType_Ue_Specific_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SearchSpaceType
 * @note ASN.1：searchSpaceType；源文件第 12202 行。
 * @note CHOICE { common, ue-Specific }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SearchSpaceType_Tag {
    SearchSpaceType_Tag_common = 0, /**< ASN.1 common */
    SearchSpaceType_Tag_ue_Specific = 1, /**< ASN.1 ue-Specific */
} SearchSpaceType_Tag;

struct SearchSpaceType {
    SearchSpaceType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SearchSpaceType_Common common; /**< ASN.1 common */
        SearchSpaceType_Ue_Specific ue_Specific; /**< ASN.1 ue-Specific */
    } u;
};


/**
 * @brief SearchSpace
 * @note ASN.1：SearchSpace；源文件第 12173 行。
 * @note SearchSpace ::= SEQUENCE { searchSpaceId, controlResourceSetId, monitoringSlotPeriodicityAndO...
 */
struct SearchSpace {
    SearchSpaceId searchSpaceId; /**< ASN.1 searchSpaceId；INTEGER (0..39)，位宽 6 bit。 */
    bool has_controlResourceSetId; /**< controlResourceSetId 是否存在。 */
    ControlResourceSetId controlResourceSetId; /**< ASN.1 controlResourceSetId；INTEGER (0..11)，位宽 4 bit；OPTIONAL。 */
    bool has_monitoringSlotPeriodicityAndOffset; /**< monitoringSlotPeriodicityAndOffset 是否存在。 */
    SearchSpace_MonitoringSlotPeriodicityAndOffset monitoringSlotPeriodicityAndOffset; /**< ASN.1 monitoringSlotPeriodicityAndOffset；结构体；OPTIONAL。 */
    bool has_duration; /**< duration 是否存在。 */
    int64_t duration; /**< ASN.1 duration；INTEGER (2..2559)，位宽 12 bit；OPTIONAL。 */
    bool has_monitoringSymbolsWithinSlot; /**< monitoringSymbolsWithinSlot 是否存在。 */
    BitString monitoringSymbolsWithinSlot; /**< ASN.1 monitoringSymbolsWithinSlot；SIZE (14)，定长；OPTIONAL。 */
    bool has_nrofCandidates; /**< nrofCandidates 是否存在。 */
    SearchSpace_NrofCandidates nrofCandidates; /**< ASN.1 nrofCandidates；结构体；OPTIONAL。 */
    bool has_searchSpaceType; /**< searchSpaceType 是否存在。 */
    SearchSpaceType searchSpaceType; /**< ASN.1 searchSpaceType；结构体；OPTIONAL。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17
 * @note ASN.1：sdt-SearchSpace-r17；源文件第 9217 行。
 * @note CHOICE { newSearchSpace, existingSearchSpace }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag {
    PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_newSearchSpace = 0, /**< ASN.1 newSearchSpace */
    PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_existingSearchSpace = 1, /**< ASN.1 existingSearchSpace */
} PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag;

struct PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17 {
    PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SearchSpace newSearchSpace; /**< ASN.1 newSearchSpace */
        SearchSpaceId existingSearchSpace; /**< ASN.1 existingSearchSpace */
    } u;
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneEighthT；源文件第 9225 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOV1710SCS480KHZoneEighthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneSixteenthT；源文件第 9226 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonFirstPDCCHMonitoringOccasionOfPOV1710SCS480KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO-v1710；源文件第 9224 行。
 * @note CHOICE { sCS480KHZoneEighthT, sCS480KHZoneSixteenthT }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag {
    PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT = 0, /**< ASN.1 sCS480KHZoneEighthT */
    PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT = 1, /**< ASN.1 sCS480KHZoneSixteenthT */
} PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag;

struct PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710 {
    PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT sCS480KHZoneEighthT; /**< ASN.1 sCS480KHZoneEighthT */
        PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT sCS480KHZoneSixteenthT; /**< ASN.1 sCS480KHZoneSixteenthT */
    } u;
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS15KHZoneT；源文件第 9231 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS15KHZoneTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS30KHZoneT-SCS15KHZhalfT；源文件第 9232 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS30KHZoneTSCS15KHZhalfTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT；源文件第 9233 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS60KHZoneTSCS30KHZhalfTSCS15KHZquarterTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT；源文件第 9234 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS120KHZoneTSCS60KHZhalfTSCS30KHZquarterTSCS15KHZoneEighthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT；源文件第 9235 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS120KHZhalfTSCS60KHZquarterTSCS30KHZoneEighthTSCS15KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT；源文件第 9236 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS480KHZoneTSCS120KHZquarterTSCS60KHZoneEighthTSCS30KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT；源文件第 9237 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS480KHZhalfTSCS120KHZoneEighthTSCS60KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZquarterT-SCS120KHZoneSixteenthT；源文件第 9238 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS480KHZquarterTSCS120KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZoneEighthT；源文件第 9239 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS480KHZoneEighthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZoneSixteenthT；源文件第 9240 行。
 * @note SEQUENCE OF (size 1..4) OF PDCCHConfigCommonPeiConfigBWPR17FirstPDCCHMonitoringOccasionOfPEIOR17SCS480KHZoneSixteenthTItem
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17
 * @note ASN.1：pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17；源文件第 9230 行。
 * @note CHOICE { sCS15KHZoneT, sCS30KHZoneT-SCS15KHZhalfT, sCS60KHZoneT-SCS30KHZhalfT...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag {
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS15KHZoneT = 0, /**< ASN.1 sCS15KHZoneT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS30KHZoneT_SCS15KHZhalfT = 1, /**< ASN.1 sCS30KHZoneT-SCS15KHZhalfT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT = 2, /**< ASN.1 sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT = 3, /**< ASN.1 sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT = 4, /**< ASN.1 sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT = 5, /**< ASN.1 sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT = 6, /**< ASN.1 sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT = 7, /**< ASN.1 sCS480KHZquarterT-SCS120KHZoneSixteenthT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneEighthT = 8, /**< ASN.1 sCS480KHZoneEighthT */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneSixteenthT = 9, /**< ASN.1 sCS480KHZoneSixteenthT */
} PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag;

struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17 {
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT sCS15KHZoneT; /**< ASN.1 sCS15KHZoneT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT sCS30KHZoneT_SCS15KHZhalfT; /**< ASN.1 sCS30KHZoneT-SCS15KHZhalfT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208 sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT; /**< ASN.1 sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4 sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT; /**< ASN.1 sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92 sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT; /**< ASN.1 sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5 sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT; /**< ASN.1 sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT; /**< ASN.1 sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043 sCS480KHZquarterT_SCS120KHZoneSixteenthT; /**< ASN.1 sCS480KHZquarterT-SCS120KHZoneSixteenthT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT sCS480KHZoneEighthT; /**< ASN.1 sCS480KHZoneEighthT */
        PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT sCS480KHZoneSixteenthT; /**< ASN.1 sCS480KHZoneSixteenthT */
    } u;
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17
 * @note ASN.1：pei-ConfigBWP-r17；源文件第 9228 行。
 * @note SEQUENCE { pei-SearchSpace-r17, firstPDCCH-MonitoringOccasionOfPEI-O-r17 }
 */
struct PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17 {
    SearchSpaceId pei_SearchSpace_r17; /**< ASN.1 pei-SearchSpace-r17；INTEGER (0..39)，位宽 6 bit。 */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17 firstPDCCH_MonitoringOccasionOfPEI_O_r17; /**< ASN.1 firstPDCCH-MonitoringOccasionOfPEI-O-r17；结构体。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup3
 * @note ASN.1：PDCCH_ConfigCommon_ExtGroup3；源文件第 9216 行。
 */
struct PDCCH_ConfigCommon_ExtGroup3 {
    bool has_sdt_SearchSpace_r17; /**< sdt-SearchSpace-r17 是否存在。 */
    PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17 sdt_SearchSpace_r17; /**< ASN.1 sdt-SearchSpace-r17；结构体；OPTIONAL。 */
    bool has_searchSpaceMCCH_r17; /**< searchSpaceMCCH-r17 是否存在。 */
    SearchSpaceId searchSpaceMCCH_r17; /**< ASN.1 searchSpaceMCCH-r17；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_searchSpaceMTCH_r17; /**< searchSpaceMTCH-r17 是否存在。 */
    SearchSpaceId searchSpaceMTCH_r17; /**< ASN.1 searchSpaceMTCH-r17；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_commonSearchSpaceListExt2_r17; /**< commonSearchSpaceListExt2-r17 是否存在。 */
    SearchSpaceExt_v1700* commonSearchSpaceListExt2_r17_items; /**< ASN.1 commonSearchSpaceListExt2-r17；SEQUENCE OF SearchSpaceExt_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t commonSearchSpaceListExt2_r17_count; /**< commonSearchSpaceListExt2-r17 元素个数。 */
    bool has_firstPDCCH_MonitoringOccasionOfPO_v1710; /**< firstPDCCH-MonitoringOccasionOfPO-v1710 是否存在。 */
    PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710 firstPDCCH_MonitoringOccasionOfPO_v1710; /**< ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710；结构体；OPTIONAL。 */
    bool has_pei_ConfigBWP_r17; /**< pei-ConfigBWP-r17 是否存在。 */
    PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17 pei_ConfigBWP_r17; /**< ASN.1 pei-ConfigBWP-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup4
 * @note ASN.1：PDCCH_ConfigCommon_ExtGroup4；源文件第 9244 行。
 */
struct PDCCH_ConfigCommon_ExtGroup4 {
    bool has_followUnifiedTCI_State_v1720; /**< followUnifiedTCI-State-v1720 是否存在。 */
    PDCCH_ConfigCommon_ExtGroup4_FollowUnifiedTCI_State_v1720 followUnifiedTCI_State_v1720; /**< ASN.1 followUnifiedTCI-State-v1720；枚举；OPTIONAL。 */
};


/**
 * @brief PDCCH_ConfigCommon_ExtGroup5
 * @note ASN.1：PDCCH_ConfigCommon_ExtGroup5；源文件第 9247 行。
 */
struct PDCCH_ConfigCommon_ExtGroup5 {
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；枚举；OPTIONAL。 */
    bool has_commonSearchSpaceListExt_r18; /**< commonSearchSpaceListExt-r18 是否存在。 */
    SearchSpaceExt_v1800* commonSearchSpaceListExt_r18_items; /**< ASN.1 commonSearchSpaceListExt-r18；SEQUENCE OF SearchSpaceExt_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t commonSearchSpaceListExt_r18_count; /**< commonSearchSpaceListExt-r18 元素个数。 */
    bool has_searchSpaceMulticastMCCH_r18; /**< searchSpaceMulticastMCCH-r18 是否存在。 */
    SearchSpaceId searchSpaceMulticastMCCH_r18; /**< ASN.1 searchSpaceMulticastMCCH-r18；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_searchSpaceMulticastMTCH_r18; /**< searchSpaceMulticastMTCH-r18 是否存在。 */
    SearchSpaceId searchSpaceMulticastMTCH_r18; /**< ASN.1 searchSpaceMulticastMTCH-r18；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief PDCCH_ConfigCommon
 * @note ASN.1：PDCCH-ConfigCommon；源文件第 9191 行。
 * @note PDCCH-ConfigCommon ::= SEQUENCE { controlResourceSetZero, commonControlResourceSet, searchSpaceZero,...
 */
struct PDCCH_ConfigCommon {
    bool has_controlResourceSetZero; /**< controlResourceSetZero 是否存在。 */
    ControlResourceSetZero controlResourceSetZero; /**< ASN.1 controlResourceSetZero；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_commonControlResourceSet; /**< commonControlResourceSet 是否存在。 */
    ControlResourceSet commonControlResourceSet; /**< ASN.1 commonControlResourceSet；结构体；OPTIONAL。 */
    bool has_searchSpaceZero; /**< searchSpaceZero 是否存在。 */
    SearchSpaceZero searchSpaceZero; /**< ASN.1 searchSpaceZero；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_commonSearchSpaceList; /**< commonSearchSpaceList 是否存在。 */
    SearchSpace* commonSearchSpaceList_items; /**< ASN.1 commonSearchSpaceList；SEQUENCE OF SearchSpace，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t commonSearchSpaceList_count; /**< commonSearchSpaceList 元素个数。 */
    bool has_searchSpaceSIB1; /**< searchSpaceSIB1 是否存在。 */
    SearchSpaceId searchSpaceSIB1; /**< ASN.1 searchSpaceSIB1；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_searchSpaceOtherSystemInformation; /**< searchSpaceOtherSystemInformation 是否存在。 */
    SearchSpaceId searchSpaceOtherSystemInformation; /**< ASN.1 searchSpaceOtherSystemInformation；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_pagingSearchSpace; /**< pagingSearchSpace 是否存在。 */
    SearchSpaceId pagingSearchSpace; /**< ASN.1 pagingSearchSpace；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    bool has_ra_SearchSpace; /**< ra-SearchSpace 是否存在。 */
    SearchSpaceId ra_SearchSpace; /**< ASN.1 ra-SearchSpace；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDCCH_ConfigCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDCCH_ConfigCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PDCCH_ConfigCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    PDCCH_ConfigCommon_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    PDCCH_ConfigCommon_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PDCCH_ConfigCommon
 * @note ASN.1：SetupRelease<PDCCH-ConfigCommon>；源文件第 4528 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_ConfigCommon_Tag {
    SetupRelease_PDCCH_ConfigCommon_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_ConfigCommon_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_ConfigCommon_Tag;

struct SetupRelease_PDCCH_ConfigCommon {
    SetupRelease_PDCCH_ConfigCommon_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_ConfigCommon setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_ConfigCommon
 * @note ASN.1：PDSCH-ConfigCommon；源文件第 9549 行。
 * @note PDSCH-ConfigCommon ::= SEQUENCE { pdsch-TimeDomainAllocationList }
 */
struct PDSCH_ConfigCommon {
    bool has_pdsch_TimeDomainAllocationList; /**< pdsch-TimeDomainAllocationList 是否存在。 */
    PDSCH_TimeDomainResourceAllocationList pdsch_TimeDomainAllocationList; /**< ASN.1 pdsch-TimeDomainAllocationList；SEQUENCE OF PDSCH_TimeDomainResourceAllocation，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PDSCH_ConfigCommon
 * @note ASN.1：SetupRelease<PDSCH-ConfigCommon>；源文件第 4529 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_ConfigCommon_Tag {
    SetupRelease_PDSCH_ConfigCommon_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_ConfigCommon_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_ConfigCommon_Tag;

struct SetupRelease_PDSCH_ConfigCommon {
    SetupRelease_PDSCH_ConfigCommon_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_ConfigCommon setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_DownlinkCommon
 * @note ASN.1：BWP-DownlinkCommon；源文件第 4526 行。
 * @note BWP-DownlinkCommon ::= SEQUENCE { genericParameters, pdcch-ConfigCommon, pdsch-ConfigCommon }
 */
struct BWP_DownlinkCommon {
    BWP genericParameters; /**< ASN.1 genericParameters；结构体。 */
    bool has_pdcch_ConfigCommon; /**< pdcch-ConfigCommon 是否存在。 */
    SetupRelease_PDCCH_ConfigCommon pdcch_ConfigCommon; /**< ASN.1 pdcch-ConfigCommon；结构体；OPTIONAL。 */
    bool has_pdsch_ConfigCommon; /**< pdsch-ConfigCommon 是否存在。 */
    SetupRelease_PDSCH_ConfigCommon pdsch_ConfigCommon; /**< ASN.1 pdsch-ConfigCommon；结构体；OPTIONAL。 */
};


/**
 * @brief SubgroupConfig_r17
 * @note ASN.1：SubgroupConfig-r17；源文件第 6603 行。
 * @note SubgroupConfig-r17 ::= SEQUENCE { subgroupsNumPerPO-r17, subgroupsNumForUEID-r17 }
 */
struct SubgroupConfig_r17 {
    int64_t subgroupsNumPerPO_r17; /**< ASN.1 subgroupsNumPerPO-r17；INTEGER (1..8)，位宽 3 bit。 */
    bool has_subgroupsNumForUEID_r17; /**< subgroupsNumForUEID-r17 是否存在。 */
    int64_t subgroupsNumForUEID_r17; /**< ASN.1 subgroupsNumForUEID-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief PEI_Config_r17
 * @note ASN.1：PEI-Config-r17；源文件第 6594 行。
 * @note PEI-Config-r17 ::= SEQUENCE { po-NumPerPEI-r17, payloadSizeDCI-2-7-r17, pei-FrameOffset-r17, sub...
 */
struct PEI_Config_r17 {
    PEI_Config_r17_Po_NumPerPEI_r17 po_NumPerPEI_r17; /**< ASN.1 po-NumPerPEI-r17；枚举。 */
    int64_t payloadSizeDCI_2_7_r17; /**< ASN.1 payloadSizeDCI-2-7-r17；INTEGER (1..43)，位宽 6 bit。 */
    int64_t pei_FrameOffset_r17; /**< ASN.1 pei-FrameOffset-r17；INTEGER (0..16)，位宽 5 bit。 */
    SubgroupConfig_r17 subgroupConfig_r17; /**< ASN.1 subgroupConfig-r17；结构体。 */
    bool has_lastUsedCellOnly_r17; /**< lastUsedCellOnly-r17 是否存在。 */
    PEI_Config_r17_LastUsedCellOnly_r17 lastUsedCellOnly_r17; /**< ASN.1 lastUsedCellOnly-r17；枚举；OPTIONAL。 */
};


/**
 * @brief DownlinkConfigCommonSIB_ExtGroup1
 * @note ASN.1：DownlinkConfigCommonSIB_ExtGroup1；源文件第 6541 行。
 */
struct DownlinkConfigCommonSIB_ExtGroup1 {
    bool has_pei_Config_r17; /**< pei-Config-r17 是否存在。 */
    PEI_Config_r17 pei_Config_r17; /**< ASN.1 pei-Config-r17；结构体；OPTIONAL。 */
    bool has_initialDownlinkBWP_RedCap_r17; /**< initialDownlinkBWP-RedCap-r17 是否存在。 */
    BWP_DownlinkCommon initialDownlinkBWP_RedCap_r17; /**< ASN.1 initialDownlinkBWP-RedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MultiFrequencyBandListNR_Aerial_SIB_r18
 * @note ASN.1：MultiFrequencyBandListNR-Aerial-SIB-r18；源文件第 8393 行。
 * @note MultiFrequencyBandListNR-Aerial-SIB-r18 ::= SEQUENCE OF (size 1..8) OF NR-MultiBandInfoAerial-r18
 */
struct MultiFrequencyBandListNR_Aerial_SIB_r18 {
    NR_MultiBandInfoAerial_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FrequencyInfoDL_SIB_v1800
 * @note ASN.1：FrequencyInfoDL-SIB-v1800；源文件第 6938 行。
 * @note FrequencyInfoDL-SIB-v1800 ::= SEQUENCE { frequencyBandListAerial-r18 }
 */
struct FrequencyInfoDL_SIB_v1800 {
    MultiFrequencyBandListNR_Aerial_SIB_r18 frequencyBandListAerial_r18; /**< ASN.1 frequencyBandListAerial-r18；SEQUENCE OF NR_MultiBandInfoAerial_r18，SIZE (1..8)。 */
};


/**
 * @brief DownlinkConfigCommonSIB_ExtGroup2
 * @note ASN.1：DownlinkConfigCommonSIB_ExtGroup2；源文件第 6545 行。
 */
struct DownlinkConfigCommonSIB_ExtGroup2 {
    bool has_frequencyInfoDL_v1800; /**< frequencyInfoDL-v1800 是否存在。 */
    FrequencyInfoDL_SIB_v1800 frequencyInfoDL_v1800; /**< ASN.1 frequencyInfoDL-v1800；结构体；OPTIONAL。 */
};


/**
 * @brief BCCH_Config
 * @note ASN.1：BCCH-Config；源文件第 6554 行。
 * @note BCCH-Config ::= SEQUENCE { modificationPeriodCoeff }
 */
struct BCCH_Config {
    BCCH_Config_ModificationPeriodCoeff modificationPeriodCoeff; /**< ASN.1 modificationPeriodCoeff；枚举。 */
};


/**
 * @brief PCCH_Config_ExtGroup1
 * @note ASN.1：PCCH_Config_ExtGroup1；源文件第 6581 行。
 */
struct PCCH_Config_ExtGroup1 {
    bool has_nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16; /**< nrofPDCCH-MonitoringOccasionPerSSB-InPO-r16 是否存在。 */
    int64_t nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16; /**< ASN.1 nrofPDCCH-MonitoringOccasionPerSSB-InPO-r16；INTEGER (2..4)，位宽 2 bit；OPTIONAL。 */
};


/**
 * @brief PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneEighthT；源文件第 6588 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOV1710SCS480KHZoneEighthTItem
 */
struct PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneSixteenthT；源文件第 6589 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOV1710SCS480KHZoneSixteenthTItem
 */
struct PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO-v1710；源文件第 6587 行。
 * @note CHOICE { sCS480KHZoneEighthT, sCS480KHZoneSixteenthT }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag {
    PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT = 0, /**< ASN.1 sCS480KHZoneEighthT */
    PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT = 1, /**< ASN.1 sCS480KHZoneSixteenthT */
} PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag;

struct PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710 {
    PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT sCS480KHZoneEighthT; /**< ASN.1 sCS480KHZoneEighthT */
        PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT sCS480KHZoneSixteenthT; /**< ASN.1 sCS480KHZoneSixteenthT */
    } u;
};


/**
 * @brief PCCH_Config_ExtGroup2
 * @note ASN.1：PCCH_Config_ExtGroup2；源文件第 6584 行。
 */
struct PCCH_Config_ExtGroup2 {
    bool has_ranPagingInIdlePO_r17; /**< ranPagingInIdlePO-r17 是否存在。 */
    PCCH_Config_ExtGroup2_RanPagingInIdlePO_r17 ranPagingInIdlePO_r17; /**< ASN.1 ranPagingInIdlePO-r17；枚举；OPTIONAL。 */
    bool has_firstPDCCH_MonitoringOccasionOfPO_v1710; /**< firstPDCCH-MonitoringOccasionOfPO-v1710 是否存在。 */
    PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710 firstPDCCH_MonitoringOccasionOfPO_v1710; /**< ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710；结构体；OPTIONAL。 */
};


/**
 * @brief PCCH_Config_NAndPagingFrameOffset
 * @note ASN.1：nAndPagingFrameOffset；源文件第 6562 行。
 * @note CHOICE { oneT, halfT, quarterT, oneEighthT, oneSixteenthT }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PCCH_Config_NAndPagingFrameOffset_Tag {
    PCCH_Config_NAndPagingFrameOffset_Tag_oneT = 0, /**< ASN.1 oneT */
    PCCH_Config_NAndPagingFrameOffset_Tag_halfT = 1, /**< ASN.1 halfT */
    PCCH_Config_NAndPagingFrameOffset_Tag_quarterT = 2, /**< ASN.1 quarterT */
    PCCH_Config_NAndPagingFrameOffset_Tag_oneEighthT = 3, /**< ASN.1 oneEighthT */
    PCCH_Config_NAndPagingFrameOffset_Tag_oneSixteenthT = 4, /**< ASN.1 oneSixteenthT */
} PCCH_Config_NAndPagingFrameOffset_Tag;

struct PCCH_Config_NAndPagingFrameOffset {
    PCCH_Config_NAndPagingFrameOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null oneT; /**< ASN.1 oneT */
        int64_t halfT; /**< ASN.1 halfT */
        int64_t quarterT; /**< ASN.1 quarterT */
        int64_t oneEighthT; /**< ASN.1 oneEighthT */
        int64_t oneSixteenthT; /**< ASN.1 oneSixteenthT */
    } u;
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS15KHZoneT；源文件第 6571 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS15KHZoneTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS30KHZoneT-SCS15KHZhalfT；源文件第 6572 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS30KHZoneTSCS15KHZhalfTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT；源文件第 6573 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS60KHZoneTSCS30KHZhalfTSCS15KHZquarterTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT；源文件第 6574 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS120KHZoneTSCS60KHZhalfTSCS30KHZquarterTSCS15KHZoneEighthTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT；源文件第 6575 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS120KHZhalfTSCS60KHZquarterTSCS30KHZoneEighthTSCS15KHZoneSixteenthTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT；源文件第 6576 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS480KHZoneTSCS120KHZquarterTSCS60KHZoneEighthTSCS30KHZoneSixteenthTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT；源文件第 6577 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS480KHZhalfTSCS120KHZoneEighthTSCS60KHZoneSixteenthTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO/sCS480KHZquarterT-SCS120KHZoneSixteenthT；源文件第 6578 行。
 * @note SEQUENCE OF (size 1..4) OF PCCHConfigFirstPDCCHMonitoringOccasionOfPOSCS480KHZquarterTSCS120KHZoneSixteenthTItem
 */
struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO
 * @note ASN.1：firstPDCCH-MonitoringOccasionOfPO；源文件第 6570 行。
 * @note CHOICE { sCS15KHZoneT, sCS30KHZoneT-SCS15KHZhalfT, sCS60KHZoneT-SCS30KHZhalfT...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag {
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT = 0, /**< ASN.1 sCS15KHZoneT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT = 1, /**< ASN.1 sCS30KHZoneT-SCS15KHZhalfT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT = 2, /**< ASN.1 sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT = 3, /**< ASN.1 sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT = 4, /**< ASN.1 sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT = 5, /**< ASN.1 sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT = 6, /**< ASN.1 sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT = 7, /**< ASN.1 sCS480KHZquarterT-SCS120KHZoneSixteenthT */
} PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag;

struct PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO {
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT sCS15KHZoneT; /**< ASN.1 sCS15KHZoneT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT sCS30KHZoneT_SCS15KHZhalfT; /**< ASN.1 sCS30KHZoneT-SCS15KHZhalfT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT; /**< ASN.1 sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT; /**< ASN.1 sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT; /**< ASN.1 sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT; /**< ASN.1 sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT; /**< ASN.1 sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT */
        PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT sCS480KHZquarterT_SCS120KHZoneSixteenthT; /**< ASN.1 sCS480KHZquarterT-SCS120KHZoneSixteenthT */
    } u;
};


/**
 * @brief PCCH_Config
 * @note ASN.1：PCCH-Config；源文件第 6560 行。
 * @note PCCH-Config ::= SEQUENCE { defaultPagingCycle, nAndPagingFrameOffset, ns, firstPDCCH-Monitori...
 */
struct PCCH_Config {
    PagingCycle defaultPagingCycle; /**< ASN.1 defaultPagingCycle；枚举。 */
    PCCH_Config_NAndPagingFrameOffset nAndPagingFrameOffset; /**< ASN.1 nAndPagingFrameOffset；结构体。 */
    PCCH_Config_Ns ns; /**< ASN.1 ns；枚举。 */
    bool has_firstPDCCH_MonitoringOccasionOfPO; /**< firstPDCCH-MonitoringOccasionOfPO 是否存在。 */
    PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO firstPDCCH_MonitoringOccasionOfPO; /**< ASN.1 firstPDCCH-MonitoringOccasionOfPO；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PCCH_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PCCH_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MultiFrequencyBandListNR_SIB
 * @note ASN.1：MultiFrequencyBandListNR-SIB；源文件第 8380 行。
 * @note MultiFrequencyBandListNR-SIB ::= SEQUENCE OF (size 1..8) OF NR-MultiBandInfo
 */
struct MultiFrequencyBandListNR_SIB {
    NR_MultiBandInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FrequencyInfoDL_SIB
 * @note ASN.1：FrequencyInfoDL-SIB；源文件第 6928 行。
 * @note FrequencyInfoDL-SIB ::= SEQUENCE { frequencyBandList, offsetToPointA, scs-SpecificCarrierList }
 */
struct FrequencyInfoDL_SIB {
    MultiFrequencyBandListNR_SIB frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF NR_MultiBandInfo，SIZE (1..8)。 */
    int64_t offsetToPointA; /**< ASN.1 offsetToPointA；INTEGER (0..2199)，位宽 12 bit。 */
    SCS_SpecificCarrier* scs_SpecificCarrierList_items; /**< ASN.1 scs-SpecificCarrierList；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t scs_SpecificCarrierList_count; /**< scs-SpecificCarrierList 元素个数。 */
};


/**
 * @brief DownlinkConfigCommonSIB
 * @note ASN.1：DownlinkConfigCommonSIB；源文件第 6535 行。
 * @note DownlinkConfigCommonSIB ::= SEQUENCE { frequencyInfoDL, initialDownlinkBWP, bcch-Config, pcch-Config, pei...
 */
struct DownlinkConfigCommonSIB {
    FrequencyInfoDL_SIB frequencyInfoDL; /**< ASN.1 frequencyInfoDL；结构体。 */
    BWP_DownlinkCommon initialDownlinkBWP; /**< ASN.1 initialDownlinkBWP；结构体。 */
    BCCH_Config bcch_Config; /**< ASN.1 bcch-Config；结构体。 */
    PCCH_Config pcch_Config; /**< ASN.1 pcch-Config；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DownlinkConfigCommonSIB_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    DownlinkConfigCommonSIB_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief HighSpeedConfig_r16
 * @note ASN.1：HighSpeedConfig-r16；源文件第 6988 行。
 * @note HighSpeedConfig-r16 ::= SEQUENCE { highSpeedMeasFlag-r16, highSpeedDemodFlag-r16 }
 */
struct HighSpeedConfig_r16 {
    bool has_highSpeedMeasFlag_r16; /**< highSpeedMeasFlag-r16 是否存在。 */
    HighSpeedConfig_r16_HighSpeedMeasFlag_r16 highSpeedMeasFlag_r16; /**< ASN.1 highSpeedMeasFlag-r16；枚举；OPTIONAL。 */
    bool has_highSpeedDemodFlag_r16; /**< highSpeedDemodFlag-r16 是否存在。 */
    HighSpeedConfig_r16_HighSpeedDemodFlag_r16 highSpeedDemodFlag_r16; /**< ASN.1 highSpeedDemodFlag-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SemiStaticChannelAccessConfig_r16
 * @note ASN.1：SemiStaticChannelAccessConfig-r16；源文件第 12374 行。
 * @note SemiStaticChannelAccessConfig-r16 ::= SEQUENCE { period-r16 }
 */
struct SemiStaticChannelAccessConfig_r16 {
    SemiStaticChannelAccessConfig_r16_Period_r16 period_r16; /**< ASN.1 period-r16；枚举。 */
};


/**
 * @brief ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16
 * @note ASN.1：channelAccessMode-r16；源文件第 12727 行。
 * @note CHOICE { dynamic, semiStatic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag {
    ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic = 0, /**< ASN.1 dynamic */
    ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic = 1, /**< ASN.1 semiStatic */
} ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag;

struct ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16 {
    ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null dynamic; /**< ASN.1 dynamic */
        SemiStaticChannelAccessConfig_r16 semiStatic; /**< ASN.1 semiStatic */
    } u;
};


/**
 * @brief ServingCellConfigCommonSIB_ExtGroup1
 * @note ASN.1：ServingCellConfigCommonSIB_ExtGroup1；源文件第 12726 行。
 */
struct ServingCellConfigCommonSIB_ExtGroup1 {
    bool has_channelAccessMode_r16; /**< channelAccessMode-r16 是否存在。 */
    ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16 channelAccessMode_r16; /**< ASN.1 channelAccessMode-r16；结构体；OPTIONAL。 */
    bool has_discoveryBurstWindowLength_r16; /**< discoveryBurstWindowLength-r16 是否存在。 */
    ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16 discoveryBurstWindowLength_r16; /**< ASN.1 discoveryBurstWindowLength-r16；枚举；OPTIONAL。 */
    bool has_highSpeedConfig_r16; /**< highSpeedConfig-r16 是否存在。 */
    HighSpeedConfig_r16 highSpeedConfig_r16; /**< ASN.1 highSpeedConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief HighSpeedConfigFR2_r17
 * @note ASN.1：HighSpeedConfigFR2-r17；源文件第 7001 行。
 * @note HighSpeedConfigFR2-r17 ::= SEQUENCE { highSpeedMeasFlagFR2-r17, highSpeedDeploymentTypeFR2-r17, highSpee...
 */
struct HighSpeedConfigFR2_r17 {
    bool has_highSpeedMeasFlagFR2_r17; /**< highSpeedMeasFlagFR2-r17 是否存在。 */
    HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17 highSpeedMeasFlagFR2_r17; /**< ASN.1 highSpeedMeasFlagFR2-r17；枚举；OPTIONAL。 */
    bool has_highSpeedDeploymentTypeFR2_r17; /**< highSpeedDeploymentTypeFR2-r17 是否存在。 */
    HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17 highSpeedDeploymentTypeFR2_r17; /**< ASN.1 highSpeedDeploymentTypeFR2-r17；枚举；OPTIONAL。 */
    bool has_highSpeedLargeOneStepUL_TimingFR2_r17; /**< highSpeedLargeOneStepUL-TimingFR2-r17 是否存在。 */
    HighSpeedConfigFR2_r17_HighSpeedLargeOneStepUL_TimingFR2_r17 highSpeedLargeOneStepUL_TimingFR2_r17; /**< ASN.1 highSpeedLargeOneStepUL-TimingFR2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RA_Prioritization
 * @note ASN.1：RA-Prioritization；源文件第 10947 行。
 * @note RA-Prioritization ::= SEQUENCE { powerRampingStepHighPriority, scalingFactorBI }
 */
struct RA_Prioritization {
    RA_Prioritization_PowerRampingStepHighPriority powerRampingStepHighPriority; /**< ASN.1 powerRampingStepHighPriority；枚举。 */
    bool has_scalingFactorBI; /**< scalingFactorBI 是否存在。 */
    RA_Prioritization_ScalingFactorBI scalingFactorBI; /**< ASN.1 scalingFactorBI；枚举；OPTIONAL。 */
};


/**
 * @brief RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16
 * @note ASN.1：ra-PrioritizationForAccessIdentity-r16；源文件第 10747 行。
 * @note SEQUENCE { ra-Prioritization-r16, ra-PrioritizationForAI-r16 }
 */
struct RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16 {
    RA_Prioritization ra_Prioritization_r16; /**< ASN.1 ra-Prioritization-r16；结构体。 */
    BitString ra_PrioritizationForAI_r16; /**< ASN.1 ra-PrioritizationForAI-r16；SIZE (2)，定长。 */
};


/**
 * @brief RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16
 * @note ASN.1：prach-RootSequenceIndex-r16；源文件第 10751 行。
 * @note CHOICE { l571, l1151 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag {
    RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l571 = 0, /**< ASN.1 l571 */
    RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l1151 = 1, /**< ASN.1 l1151 */
} RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag;

struct RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16 {
    RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t l571; /**< ASN.1 l571 */
        int64_t l1151; /**< ASN.1 l1151 */
    } u;
};


/**
 * @brief RACH_ConfigCommon_ExtGroup1
 * @note ASN.1：RACH_ConfigCommon_ExtGroup1；源文件第 10746 行。
 */
struct RACH_ConfigCommon_ExtGroup1 {
    bool has_ra_PrioritizationForAccessIdentity_r16; /**< ra-PrioritizationForAccessIdentity-r16 是否存在。 */
    RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16 ra_PrioritizationForAccessIdentity_r16; /**< ASN.1 ra-PrioritizationForAccessIdentity-r16；结构体；OPTIONAL。 */
    bool has_prach_RootSequenceIndex_r16; /**< prach-RootSequenceIndex-r16 是否存在。 */
    RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16 prach_RootSequenceIndex_r16; /**< ASN.1 prach-RootSequenceIndex-r16；结构体；OPTIONAL。 */
};


/**
 * @brief RA_PrioritizationSliceInfoList_r17
 * @note ASN.1：RA-PrioritizationSliceInfoList-r17；源文件第 10961 行。
 * @note RA-PrioritizationSliceInfoList-r17 ::= SEQUENCE OF (size 1..8) OF RA-PrioritizationSliceInfo-r17
 */
struct RA_PrioritizationSliceInfoList_r17 {
    RA_PrioritizationSliceInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RA_PrioritizationForSlicing_r17
 * @note ASN.1：RA-PrioritizationForSlicing-r17；源文件第 10956 行。
 * @note RA-PrioritizationForSlicing-r17 ::= SEQUENCE { ra-PrioritizationSliceInfoList-r17 }
 */
struct RA_PrioritizationForSlicing_r17 {
    RA_PrioritizationSliceInfoList_r17 ra_PrioritizationSliceInfoList_r17; /**< ASN.1 ra-PrioritizationSliceInfoList-r17；SEQUENCE OF RA_PrioritizationSliceInfo_r17，SIZE (1..8)。 */
};


/**
 * @brief RACH_ConfigCommon_ExtGroup2
 * @note ASN.1：RACH_ConfigCommon_ExtGroup2；源文件第 10756 行。
 */
struct RACH_ConfigCommon_ExtGroup2 {
    bool has_ra_PrioritizationForSlicing_r17; /**< ra-PrioritizationForSlicing-r17 是否存在。 */
    RA_PrioritizationForSlicing_r17 ra_PrioritizationForSlicing_r17; /**< ASN.1 ra-PrioritizationForSlicing-r17；结构体；OPTIONAL。 */
    bool has_featureCombinationPreamblesList_r17; /**< featureCombinationPreamblesList-r17 是否存在。 */
    FeatureCombinationPreambles_r17* featureCombinationPreamblesList_r17_items; /**< ASN.1 featureCombinationPreamblesList-r17；SEQUENCE OF FeatureCombinationPreambles_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureCombinationPreamblesList_r17_count; /**< featureCombinationPreamblesList-r17 元素个数。 */
};


/**
 * @brief RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB
 * @note ASN.1：ssb-perRACH-OccasionAndCB-PreamblesPerSSB；源文件第 10718 行。
 * @note CHOICE { oneEighth, oneFourth, oneHalf, one, two, four, eight, sixteen }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneEighth = 0, /**< ASN.1 oneEighth */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneFourth = 1, /**< ASN.1 oneFourth */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_oneHalf = 2, /**< ASN.1 oneHalf */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_one = 3, /**< ASN.1 one */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_two = 4, /**< ASN.1 two */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_four = 5, /**< ASN.1 four */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_eight = 6, /**< ASN.1 eight */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag_sixteen = 7, /**< ASN.1 sixteen */
} RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag;

struct RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB {
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneEighth oneEighth; /**< ASN.1 oneEighth */
        RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneFourth oneFourth; /**< ASN.1 oneFourth */
        RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_OneHalf oneHalf; /**< ASN.1 oneHalf */
        RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_One one; /**< ASN.1 one */
        RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB_Two two; /**< ASN.1 two */
        int64_t four; /**< ASN.1 four */
        int64_t eight; /**< ASN.1 eight */
        int64_t sixteen; /**< ASN.1 sixteen */
    } u;
};


/**
 * @brief RACH_ConfigCommon_GroupBconfigured
 * @note ASN.1：groupBconfigured；源文件第 10729 行。
 * @note SEQUENCE { ra-Msg3SizeGroupA, messagePowerOffsetGroupB, numberOfRA-PreamblesG...
 */
struct RACH_ConfigCommon_GroupBconfigured {
    RACH_ConfigCommon_GroupBconfigured_Ra_Msg3SizeGroupA ra_Msg3SizeGroupA; /**< ASN.1 ra-Msg3SizeGroupA；枚举。 */
    RACH_ConfigCommon_GroupBconfigured_MessagePowerOffsetGroupB messagePowerOffsetGroupB; /**< ASN.1 messagePowerOffsetGroupB；枚举。 */
    int64_t numberOfRA_PreamblesGroupA; /**< ASN.1 numberOfRA-PreamblesGroupA；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief RACH_ConfigCommon_Prach_RootSequenceIndex
 * @note ASN.1：prach-RootSequenceIndex；源文件第 10738 行。
 * @note CHOICE { l839, l139 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_ConfigCommon_Prach_RootSequenceIndex_Tag {
    RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l839 = 0, /**< ASN.1 l839 */
    RACH_ConfigCommon_Prach_RootSequenceIndex_Tag_l139 = 1, /**< ASN.1 l139 */
} RACH_ConfigCommon_Prach_RootSequenceIndex_Tag;

struct RACH_ConfigCommon_Prach_RootSequenceIndex {
    RACH_ConfigCommon_Prach_RootSequenceIndex_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t l839; /**< ASN.1 l839 */
        int64_t l139; /**< ASN.1 l139 */
    } u;
};


/**
 * @brief RACH_ConfigCommon
 * @note ASN.1：RACH-ConfigCommon；源文件第 10715 行。
 * @note RACH-ConfigCommon ::= SEQUENCE { rach-ConfigGeneric, totalNumberOfRA-Preambles, ssb-perRACH-Occasio...
 */
struct RACH_ConfigCommon {
    RACH_ConfigGeneric rach_ConfigGeneric; /**< ASN.1 rach-ConfigGeneric；结构体。 */
    bool has_totalNumberOfRA_Preambles; /**< totalNumberOfRA-Preambles 是否存在。 */
    int64_t totalNumberOfRA_Preambles; /**< ASN.1 totalNumberOfRA-Preambles；INTEGER (1..63)，位宽 6 bit；OPTIONAL。 */
    bool has_ssb_perRACH_OccasionAndCB_PreamblesPerSSB; /**< ssb-perRACH-OccasionAndCB-PreamblesPerSSB 是否存在。 */
    RACH_ConfigCommon_Ssb_perRACH_OccasionAndCB_PreamblesPerSSB ssb_perRACH_OccasionAndCB_PreamblesPerSSB; /**< ASN.1 ssb-perRACH-OccasionAndCB-PreamblesPerSSB；结构体；OPTIONAL。 */
    bool has_groupBconfigured; /**< groupBconfigured 是否存在。 */
    RACH_ConfigCommon_GroupBconfigured groupBconfigured; /**< ASN.1 groupBconfigured；结构体；OPTIONAL。 */
    RACH_ConfigCommon_Ra_ContentionResolutionTimer ra_ContentionResolutionTimer; /**< ASN.1 ra-ContentionResolutionTimer；枚举。 */
    bool has_rsrp_ThresholdSSB; /**< rsrp-ThresholdSSB 是否存在。 */
    RSRP_Range rsrp_ThresholdSSB; /**< ASN.1 rsrp-ThresholdSSB；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrp_ThresholdSSB_SUL; /**< rsrp-ThresholdSSB-SUL 是否存在。 */
    RSRP_Range rsrp_ThresholdSSB_SUL; /**< ASN.1 rsrp-ThresholdSSB-SUL；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    RACH_ConfigCommon_Prach_RootSequenceIndex prach_RootSequenceIndex; /**< ASN.1 prach-RootSequenceIndex；结构体。 */
    bool has_msg1_SubcarrierSpacing; /**< msg1-SubcarrierSpacing 是否存在。 */
    SubcarrierSpacing msg1_SubcarrierSpacing; /**< ASN.1 msg1-SubcarrierSpacing；枚举；OPTIONAL。 */
    RACH_ConfigCommon_RestrictedSetConfig restrictedSetConfig; /**< ASN.1 restrictedSetConfig；枚举。 */
    bool has_msg3_transformPrecoder; /**< msg3-transformPrecoder 是否存在。 */
    RACH_ConfigCommon_Msg3_transformPrecoder msg3_transformPrecoder; /**< ASN.1 msg3-transformPrecoder；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RACH_ConfigCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RACH_ConfigCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_RACH_ConfigCommon
 * @note ASN.1：SetupRelease<RACH-ConfigCommon>；源文件第 4602 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RACH_ConfigCommon_Tag {
    SetupRelease_RACH_ConfigCommon_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RACH_ConfigCommon_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RACH_ConfigCommon_Tag;

struct SetupRelease_RACH_ConfigCommon {
    SetupRelease_RACH_ConfigCommon_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RACH_ConfigCommon setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MsgA_DMRS_Config_r16
 * @note ASN.1：MsgA-DMRS-Config-r16；源文件第 8363 行。
 * @note MsgA-DMRS-Config-r16 ::= SEQUENCE { msgA-DMRS-AdditionalPosition-r16, msgA-MaxLength-r16, msgA-PUSCH-D...
 */
struct MsgA_DMRS_Config_r16 {
    bool has_msgA_DMRS_AdditionalPosition_r16; /**< msgA-DMRS-AdditionalPosition-r16 是否存在。 */
    MsgA_DMRS_Config_r16_MsgA_DMRS_AdditionalPosition_r16 msgA_DMRS_AdditionalPosition_r16; /**< ASN.1 msgA-DMRS-AdditionalPosition-r16；枚举；OPTIONAL。 */
    bool has_msgA_MaxLength_r16; /**< msgA-MaxLength-r16 是否存在。 */
    MsgA_DMRS_Config_r16_MsgA_MaxLength_r16 msgA_MaxLength_r16; /**< ASN.1 msgA-MaxLength-r16；枚举；OPTIONAL。 */
    bool has_msgA_PUSCH_DMRS_CDM_Group_r16; /**< msgA-PUSCH-DMRS-CDM-Group-r16 是否存在。 */
    int64_t msgA_PUSCH_DMRS_CDM_Group_r16; /**< ASN.1 msgA-PUSCH-DMRS-CDM-Group-r16；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_msgA_PUSCH_NrofPorts_r16; /**< msgA-PUSCH-NrofPorts-r16 是否存在。 */
    int64_t msgA_PUSCH_NrofPorts_r16; /**< ASN.1 msgA-PUSCH-NrofPorts-r16；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_msgA_ScramblingID0_r16; /**< msgA-ScramblingID0-r16 是否存在。 */
    int64_t msgA_ScramblingID0_r16; /**< ASN.1 msgA-ScramblingID0-r16；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_msgA_ScramblingID1_r16; /**< msgA-ScramblingID1-r16 是否存在。 */
    int64_t msgA_ScramblingID1_r16; /**< ASN.1 msgA-ScramblingID1-r16；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
};


/**
 * @brief MsgA_PUSCH_Resource_r16
 * @note ASN.1：MsgA-PUSCH-Resource-r16；源文件第 8339 行。
 * @note MsgA-PUSCH-Resource-r16 ::= SEQUENCE { msgA-MCS-r16, nrofSlotsMsgA-PUSCH-r16, nrofMsgA-PO-PerSlot-r16, ms...
 */
struct MsgA_PUSCH_Resource_r16 {
    int64_t msgA_MCS_r16; /**< ASN.1 msgA-MCS-r16；INTEGER (0..15)，位宽 4 bit。 */
    int64_t nrofSlotsMsgA_PUSCH_r16; /**< ASN.1 nrofSlotsMsgA-PUSCH-r16；INTEGER (1..4)，位宽 2 bit。 */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_PerSlot_r16 nrofMsgA_PO_PerSlot_r16; /**< ASN.1 nrofMsgA-PO-PerSlot-r16；枚举。 */
    int64_t msgA_PUSCH_TimeDomainOffset_r16; /**< ASN.1 msgA-PUSCH-TimeDomainOffset-r16；INTEGER (1..32)，位宽 5 bit。 */
    bool has_msgA_PUSCH_TimeDomainAllocation_r16; /**< msgA-PUSCH-TimeDomainAllocation-r16 是否存在。 */
    int64_t msgA_PUSCH_TimeDomainAllocation_r16; /**< ASN.1 msgA-PUSCH-TimeDomainAllocation-r16；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_startSymbolAndLengthMsgA_PO_r16; /**< startSymbolAndLengthMsgA-PO-r16 是否存在。 */
    int64_t startSymbolAndLengthMsgA_PO_r16; /**< ASN.1 startSymbolAndLengthMsgA-PO-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_mappingTypeMsgA_PUSCH_r16; /**< mappingTypeMsgA-PUSCH-r16 是否存在。 */
    MsgA_PUSCH_Resource_r16_MappingTypeMsgA_PUSCH_r16 mappingTypeMsgA_PUSCH_r16; /**< ASN.1 mappingTypeMsgA-PUSCH-r16；枚举；OPTIONAL。 */
    bool has_guardPeriodMsgA_PUSCH_r16; /**< guardPeriodMsgA-PUSCH-r16 是否存在。 */
    int64_t guardPeriodMsgA_PUSCH_r16; /**< ASN.1 guardPeriodMsgA-PUSCH-r16；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    int64_t guardBandMsgA_PUSCH_r16; /**< ASN.1 guardBandMsgA-PUSCH-r16；INTEGER (0..1)，位宽 1 bit。 */
    int64_t frequencyStartMsgA_PUSCH_r16; /**< ASN.1 frequencyStartMsgA-PUSCH-r16；INTEGER (0..274)，位宽 9 bit。 */
    int64_t nrofPRBs_PerMsgA_PO_r16; /**< ASN.1 nrofPRBs-PerMsgA-PO-r16；INTEGER (1..32)，位宽 5 bit。 */
    MsgA_PUSCH_Resource_r16_NrofMsgA_PO_FDM_r16 nrofMsgA_PO_FDM_r16; /**< ASN.1 nrofMsgA-PO-FDM-r16；枚举。 */
    bool has_msgA_IntraSlotFrequencyHopping_r16; /**< msgA-IntraSlotFrequencyHopping-r16 是否存在。 */
    MsgA_PUSCH_Resource_r16_MsgA_IntraSlotFrequencyHopping_r16 msgA_IntraSlotFrequencyHopping_r16; /**< ASN.1 msgA-IntraSlotFrequencyHopping-r16；枚举；OPTIONAL。 */
    bool has_msgA_HoppingBits_r16; /**< msgA-HoppingBits-r16 是否存在。 */
    BitString msgA_HoppingBits_r16; /**< ASN.1 msgA-HoppingBits-r16；SIZE (2)，定长；OPTIONAL。 */
    MsgA_DMRS_Config_r16 msgA_DMRS_Config_r16; /**< ASN.1 msgA-DMRS-Config-r16；结构体。 */
    int64_t nrofDMRS_Sequences_r16; /**< ASN.1 nrofDMRS-Sequences-r16；INTEGER (1..2)，位宽 1 bit。 */
    bool has_msgA_Alpha_r16; /**< msgA-Alpha-r16 是否存在。 */
    MsgA_PUSCH_Resource_r16_MsgA_Alpha_r16 msgA_Alpha_r16; /**< ASN.1 msgA-Alpha-r16；枚举；OPTIONAL。 */
    bool has_interlaceIndexFirstPO_MsgA_PUSCH_r16; /**< interlaceIndexFirstPO-MsgA-PUSCH-r16 是否存在。 */
    int64_t interlaceIndexFirstPO_MsgA_PUSCH_r16; /**< ASN.1 interlaceIndexFirstPO-MsgA-PUSCH-r16；INTEGER (1..10)，位宽 4 bit；OPTIONAL。 */
    bool has_nrofInterlacesPerMsgA_PO_r16; /**< nrofInterlacesPerMsgA-PO-r16 是否存在。 */
    int64_t nrofInterlacesPerMsgA_PO_r16; /**< ASN.1 nrofInterlacesPerMsgA-PO-r16；INTEGER (1..10)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief MsgA_PUSCH_Config_r16
 * @note ASN.1：MsgA-PUSCH-Config-r16；源文件第 8331 行。
 * @note MsgA-PUSCH-Config-r16 ::= SEQUENCE { msgA-PUSCH-ResourceGroupA-r16, msgA-PUSCH-ResourceGroupB-r16, msgA...
 */
struct MsgA_PUSCH_Config_r16 {
    bool has_msgA_PUSCH_ResourceGroupA_r16; /**< msgA-PUSCH-ResourceGroupA-r16 是否存在。 */
    MsgA_PUSCH_Resource_r16 msgA_PUSCH_ResourceGroupA_r16; /**< ASN.1 msgA-PUSCH-ResourceGroupA-r16；结构体；OPTIONAL。 */
    bool has_msgA_PUSCH_ResourceGroupB_r16; /**< msgA-PUSCH-ResourceGroupB-r16 是否存在。 */
    MsgA_PUSCH_Resource_r16 msgA_PUSCH_ResourceGroupB_r16; /**< ASN.1 msgA-PUSCH-ResourceGroupB-r16；结构体；OPTIONAL。 */
    bool has_msgA_TransformPrecoder_r16; /**< msgA-TransformPrecoder-r16 是否存在。 */
    MsgA_PUSCH_Config_r16_MsgA_TransformPrecoder_r16 msgA_TransformPrecoder_r16; /**< ASN.1 msgA-TransformPrecoder-r16；枚举；OPTIONAL。 */
    bool has_msgA_DataScramblingIndex_r16; /**< msgA-DataScramblingIndex-r16 是否存在。 */
    int64_t msgA_DataScramblingIndex_r16; /**< ASN.1 msgA-DataScramblingIndex-r16；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_msgA_DeltaPreamble_r16; /**< msgA-DeltaPreamble-r16 是否存在。 */
    int64_t msgA_DeltaPreamble_r16; /**< ASN.1 msgA-DeltaPreamble-r16；INTEGER (-1..6)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief RACH_ConfigCommonTwoStepRA_r16_ExtGroup1
 * @note ASN.1：RACH_ConfigCommonTwoStepRA_r16_ExtGroup1；源文件第 10799 行。
 */
struct RACH_ConfigCommonTwoStepRA_r16_ExtGroup1 {
    bool has_ra_PrioritizationForSlicingTwoStep_r17; /**< ra-PrioritizationForSlicingTwoStep-r17 是否存在。 */
    RA_PrioritizationForSlicing_r17 ra_PrioritizationForSlicingTwoStep_r17; /**< ASN.1 ra-PrioritizationForSlicingTwoStep-r17；结构体；OPTIONAL。 */
    bool has_featureCombinationPreamblesList_r17; /**< featureCombinationPreamblesList-r17 是否存在。 */
    FeatureCombinationPreambles_r17* featureCombinationPreamblesList_r17_items; /**< ASN.1 featureCombinationPreamblesList-r17；SEQUENCE OF FeatureCombinationPreambles_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureCombinationPreamblesList_r17_count; /**< featureCombinationPreamblesList-r17 元素个数。 */
};


/**
 * @brief GroupB_ConfiguredTwoStepRA_r16
 * @note ASN.1：GroupB-ConfiguredTwoStepRA-r16；源文件第 10805 行。
 * @note GroupB-ConfiguredTwoStepRA-r16 ::= SEQUENCE { ra-MsgA-SizeGroupA-r16, messagePowerOffsetGroupB-r16, numberOfRA-P...
 */
struct GroupB_ConfiguredTwoStepRA_r16 {
    GroupB_ConfiguredTwoStepRA_r16_Ra_MsgA_SizeGroupA_r16 ra_MsgA_SizeGroupA_r16; /**< ASN.1 ra-MsgA-SizeGroupA-r16；枚举。 */
    GroupB_ConfiguredTwoStepRA_r16_MessagePowerOffsetGroupB_r16 messagePowerOffsetGroupB_r16; /**< ASN.1 messagePowerOffsetGroupB-r16；枚举。 */
    int64_t numberOfRA_PreamblesGroupA_r16; /**< ASN.1 numberOfRA-PreamblesGroupA-r16；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief RACH_ConfigGenericTwoStepRA_r16_ExtGroup1
 * @note ASN.1：RACH_ConfigGenericTwoStepRA_r16_ExtGroup1；源文件第 10922 行。
 */
struct RACH_ConfigGenericTwoStepRA_r16_ExtGroup1 {
    bool has_msgB_ResponseWindow_v1700; /**< msgB-ResponseWindow-v1700 是否存在。 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1_MsgB_ResponseWindow_v1700 msgB_ResponseWindow_v1700; /**< ASN.1 msgB-ResponseWindow-v1700；枚举；OPTIONAL。 */
};


/**
 * @brief RACH_ConfigGenericTwoStepRA_r16
 * @note ASN.1：RACH-ConfigGenericTwoStepRA-r16；源文件第 10911 行。
 * @note RACH-ConfigGenericTwoStepRA-r16 ::= SEQUENCE { msgA-PRACH-ConfigurationIndex-r16, msgA-RO-FDM-r16, msgA-RO-Freque...
 */
struct RACH_ConfigGenericTwoStepRA_r16 {
    bool has_msgA_PRACH_ConfigurationIndex_r16; /**< msgA-PRACH-ConfigurationIndex-r16 是否存在。 */
    int64_t msgA_PRACH_ConfigurationIndex_r16; /**< ASN.1 msgA-PRACH-ConfigurationIndex-r16；INTEGER (0..262)，位宽 9 bit；OPTIONAL。 */
    bool has_msgA_RO_FDM_r16; /**< msgA-RO-FDM-r16 是否存在。 */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_RO_FDM_r16 msgA_RO_FDM_r16; /**< ASN.1 msgA-RO-FDM-r16；枚举；OPTIONAL。 */
    bool has_msgA_RO_FrequencyStart_r16; /**< msgA-RO-FrequencyStart-r16 是否存在。 */
    int64_t msgA_RO_FrequencyStart_r16; /**< ASN.1 msgA-RO-FrequencyStart-r16；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    bool has_msgA_ZeroCorrelationZoneConfig_r16; /**< msgA-ZeroCorrelationZoneConfig-r16 是否存在。 */
    int64_t msgA_ZeroCorrelationZoneConfig_r16; /**< ASN.1 msgA-ZeroCorrelationZoneConfig-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_msgA_PreamblePowerRampingStep_r16; /**< msgA-PreamblePowerRampingStep-r16 是否存在。 */
    RACH_ConfigGenericTwoStepRA_r16_MsgA_PreamblePowerRampingStep_r16 msgA_PreamblePowerRampingStep_r16; /**< ASN.1 msgA-PreamblePowerRampingStep-r16；枚举；OPTIONAL。 */
    bool has_msgA_PreambleReceivedTargetPower_r16; /**< msgA-PreambleReceivedTargetPower-r16 是否存在。 */
    int64_t msgA_PreambleReceivedTargetPower_r16; /**< ASN.1 msgA-PreambleReceivedTargetPower-r16；INTEGER (-202..-60)，位宽 8 bit；OPTIONAL。 */
    bool has_msgB_ResponseWindow_r16; /**< msgB-ResponseWindow-r16 是否存在。 */
    RACH_ConfigGenericTwoStepRA_r16_MsgB_ResponseWindow_r16 msgB_ResponseWindow_r16; /**< ASN.1 msgB-ResponseWindow-r16；枚举；OPTIONAL。 */
    bool has_preambleTransMax_r16; /**< preambleTransMax-r16 是否存在。 */
    RACH_ConfigGenericTwoStepRA_r16_PreambleTransMax_r16 preambleTransMax_r16; /**< ASN.1 preambleTransMax-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RACH_ConfigGenericTwoStepRA_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16
 * @note ASN.1：msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16；源文件第 10768 行。
 * @note CHOICE { oneEighth, oneFourth, oneHalf, one, two, four, eight, sixteen }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneEighth = 0, /**< ASN.1 oneEighth */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneFourth = 1, /**< ASN.1 oneFourth */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_oneHalf = 2, /**< ASN.1 oneHalf */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_one = 3, /**< ASN.1 one */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_two = 4, /**< ASN.1 two */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_four = 5, /**< ASN.1 four */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_eight = 6, /**< ASN.1 eight */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag_sixteen = 7, /**< ASN.1 sixteen */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag;

struct RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16 {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneEighth oneEighth; /**< ASN.1 oneEighth */
        RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneFourth oneFourth; /**< ASN.1 oneFourth */
        RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_OneHalf oneHalf; /**< ASN.1 oneHalf */
        RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_One one; /**< ASN.1 one */
        RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16_Two two; /**< ASN.1 two */
        int64_t four; /**< ASN.1 four */
        int64_t eight; /**< ASN.1 eight */
        int64_t sixteen; /**< ASN.1 sixteen */
    } u;
};


/**
 * @brief RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16
 * @note ASN.1：msgA-PRACH-RootSequenceIndex-r16；源文件第 10781 行。
 * @note CHOICE { l839, l139, l571, l1151 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l839 = 0, /**< ASN.1 l839 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l139 = 1, /**< ASN.1 l139 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l571 = 2, /**< ASN.1 l571 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag_l1151 = 3, /**< ASN.1 l1151 */
} RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag;

struct RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16 {
    RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t l839; /**< ASN.1 l839 */
        int64_t l139; /**< ASN.1 l139 */
        int64_t l571; /**< ASN.1 l571 */
        int64_t l1151; /**< ASN.1 l1151 */
    } u;
};


/**
 * @brief RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16
 * @note ASN.1：ra-PrioritizationForAccessIdentityTwoStep-r16；源文件第 10793 行。
 * @note SEQUENCE { ra-Prioritization-r16, ra-PrioritizationForAI-r16 }
 */
struct RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16 {
    RA_Prioritization ra_Prioritization_r16; /**< ASN.1 ra-Prioritization-r16；结构体。 */
    BitString ra_PrioritizationForAI_r16; /**< ASN.1 ra-PrioritizationForAI-r16；SIZE (2)，定长。 */
};


/**
 * @brief RACH_ConfigCommonTwoStepRA_r16
 * @note ASN.1：RACH-ConfigCommonTwoStepRA-r16；源文件第 10765 行。
 * @note RACH-ConfigCommonTwoStepRA-r16 ::= SEQUENCE { rach-ConfigGenericTwoStepRA-r16, msgA-TotalNumberOfRA-Preambles-r1...
 */
struct RACH_ConfigCommonTwoStepRA_r16 {
    RACH_ConfigGenericTwoStepRA_r16 rach_ConfigGenericTwoStepRA_r16; /**< ASN.1 rach-ConfigGenericTwoStepRA-r16；结构体。 */
    bool has_msgA_TotalNumberOfRA_Preambles_r16; /**< msgA-TotalNumberOfRA-Preambles-r16 是否存在。 */
    int64_t msgA_TotalNumberOfRA_Preambles_r16; /**< ASN.1 msgA-TotalNumberOfRA-Preambles-r16；INTEGER (1..63)，位宽 6 bit；OPTIONAL。 */
    bool has_msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16; /**< msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16 是否存在。 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16 msgA_SSB_PerRACH_OccasionAndCB_PreamblesPerSSB_r16; /**< ASN.1 msgA-SSB-PerRACH-OccasionAndCB-PreamblesPerSSB-r16；结构体；OPTIONAL。 */
    bool has_msgA_CB_PreamblesPerSSB_PerSharedRO_r16; /**< msgA-CB-PreamblesPerSSB-PerSharedRO-r16 是否存在。 */
    int64_t msgA_CB_PreamblesPerSSB_PerSharedRO_r16; /**< ASN.1 msgA-CB-PreamblesPerSSB-PerSharedRO-r16；INTEGER (1..60)，位宽 6 bit；OPTIONAL。 */
    bool has_msgA_SSB_SharedRO_MaskIndex_r16; /**< msgA-SSB-SharedRO-MaskIndex-r16 是否存在。 */
    int64_t msgA_SSB_SharedRO_MaskIndex_r16; /**< ASN.1 msgA-SSB-SharedRO-MaskIndex-r16；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_groupB_ConfiguredTwoStepRA_r16; /**< groupB-ConfiguredTwoStepRA-r16 是否存在。 */
    GroupB_ConfiguredTwoStepRA_r16 groupB_ConfiguredTwoStepRA_r16; /**< ASN.1 groupB-ConfiguredTwoStepRA-r16；结构体；OPTIONAL。 */
    bool has_msgA_PRACH_RootSequenceIndex_r16; /**< msgA-PRACH-RootSequenceIndex-r16 是否存在。 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_PRACH_RootSequenceIndex_r16 msgA_PRACH_RootSequenceIndex_r16; /**< ASN.1 msgA-PRACH-RootSequenceIndex-r16；结构体；OPTIONAL。 */
    bool has_msgA_TransMax_r16; /**< msgA-TransMax-r16 是否存在。 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_TransMax_r16 msgA_TransMax_r16; /**< ASN.1 msgA-TransMax-r16；枚举；OPTIONAL。 */
    bool has_msgA_RSRP_Threshold_r16; /**< msgA-RSRP-Threshold-r16 是否存在。 */
    RSRP_Range msgA_RSRP_Threshold_r16; /**< ASN.1 msgA-RSRP-Threshold-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_msgA_RSRP_ThresholdSSB_r16; /**< msgA-RSRP-ThresholdSSB-r16 是否存在。 */
    RSRP_Range msgA_RSRP_ThresholdSSB_r16; /**< ASN.1 msgA-RSRP-ThresholdSSB-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_msgA_SubcarrierSpacing_r16; /**< msgA-SubcarrierSpacing-r16 是否存在。 */
    SubcarrierSpacing msgA_SubcarrierSpacing_r16; /**< ASN.1 msgA-SubcarrierSpacing-r16；枚举；OPTIONAL。 */
    bool has_msgA_RestrictedSetConfig_r16; /**< msgA-RestrictedSetConfig-r16 是否存在。 */
    RACH_ConfigCommonTwoStepRA_r16_MsgA_RestrictedSetConfig_r16 msgA_RestrictedSetConfig_r16; /**< ASN.1 msgA-RestrictedSetConfig-r16；枚举；OPTIONAL。 */
    bool has_ra_PrioritizationForAccessIdentityTwoStep_r16; /**< ra-PrioritizationForAccessIdentityTwoStep-r16 是否存在。 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_PrioritizationForAccessIdentityTwoStep_r16 ra_PrioritizationForAccessIdentityTwoStep_r16; /**< ASN.1 ra-PrioritizationForAccessIdentityTwoStep-r16；结构体；OPTIONAL。 */
    bool has_ra_ContentionResolutionTimer_r16; /**< ra-ContentionResolutionTimer-r16 是否存在。 */
    RACH_ConfigCommonTwoStepRA_r16_Ra_ContentionResolutionTimer_r16 ra_ContentionResolutionTimer_r16; /**< ASN.1 ra-ContentionResolutionTimer-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RACH_ConfigCommonTwoStepRA_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MsgA_ConfigCommon_r16
 * @note ASN.1：MsgA-ConfigCommon-r16；源文件第 8323 行。
 * @note MsgA-ConfigCommon-r16 ::= SEQUENCE { rach-ConfigCommonTwoStepRA-r16, msgA-PUSCH-Config-r16 }
 */
struct MsgA_ConfigCommon_r16 {
    RACH_ConfigCommonTwoStepRA_r16 rach_ConfigCommonTwoStepRA_r16; /**< ASN.1 rach-ConfigCommonTwoStepRA-r16；结构体。 */
    bool has_msgA_PUSCH_Config_r16; /**< msgA-PUSCH-Config-r16 是否存在。 */
    MsgA_PUSCH_Config_r16 msgA_PUSCH_Config_r16; /**< ASN.1 msgA-PUSCH-Config-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_MsgA_ConfigCommon_r16
 * @note ASN.1：SetupRelease<MsgA-ConfigCommon-r16>；源文件第 4609 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MsgA_ConfigCommon_r16_Tag {
    SetupRelease_MsgA_ConfigCommon_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MsgA_ConfigCommon_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MsgA_ConfigCommon_r16_Tag;

struct SetupRelease_MsgA_ConfigCommon_r16 {
    SetupRelease_MsgA_ConfigCommon_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MsgA_ConfigCommon_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_UplinkCommon_ExtGroup1
 * @note ASN.1：BWP_UplinkCommon_ExtGroup1；源文件第 4606 行。
 */
struct BWP_UplinkCommon_ExtGroup1 {
    bool has_rach_ConfigCommonIAB_r16; /**< rach-ConfigCommonIAB-r16 是否存在。 */
    SetupRelease_RACH_ConfigCommon rach_ConfigCommonIAB_r16; /**< ASN.1 rach-ConfigCommonIAB-r16；结构体；OPTIONAL。 */
    bool has_useInterlacePUCCH_PUSCH_r16; /**< useInterlacePUCCH-PUSCH-r16 是否存在。 */
    BWP_UplinkCommon_ExtGroup1_UseInterlacePUCCH_PUSCH_r16 useInterlacePUCCH_PUSCH_r16; /**< ASN.1 useInterlacePUCCH-PUSCH-r16；枚举；OPTIONAL。 */
    bool has_msgA_ConfigCommon_r16; /**< msgA-ConfigCommon-r16 是否存在。 */
    SetupRelease_MsgA_ConfigCommon_r16 msgA_ConfigCommon_r16; /**< ASN.1 msgA-ConfigCommon-r16；结构体；OPTIONAL。 */
};


/**
 * @brief AdditionalRACH_ConfigList_r17
 * @note ASN.1：AdditionalRACH-ConfigList-r17；源文件第 4630 行。
 * @note AdditionalRACH-ConfigList-r17 ::= SEQUENCE OF (size 1..256) OF AdditionalRACH-Config-r17
 */
struct AdditionalRACH_ConfigList_r17 {
    AdditionalRACH_Config_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_AdditionalRACH_ConfigList_r17
 * @note ASN.1：SetupRelease<AdditionalRACH-ConfigList-r17>；源文件第 4613 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_AdditionalRACH_ConfigList_r17_Tag {
    SetupRelease_AdditionalRACH_ConfigList_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_AdditionalRACH_ConfigList_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_AdditionalRACH_ConfigList_r17_Tag;

struct SetupRelease_AdditionalRACH_ConfigList_r17 {
    SetupRelease_AdditionalRACH_ConfigList_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        AdditionalRACH_ConfigList_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_UplinkCommon_ExtGroup2
 * @note ASN.1：BWP_UplinkCommon_ExtGroup2；源文件第 4611 行。
 */
struct BWP_UplinkCommon_ExtGroup2 {
    bool has_enableRA_PrioritizationForSlicing_r17; /**< enableRA-PrioritizationForSlicing-r17 是否存在。 */
    bool enableRA_PrioritizationForSlicing_r17; /**< ASN.1 enableRA-PrioritizationForSlicing-r17；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_additionalRACH_ConfigList_r17; /**< additionalRACH-ConfigList-r17 是否存在。 */
    SetupRelease_AdditionalRACH_ConfigList_r17 additionalRACH_ConfigList_r17; /**< ASN.1 additionalRACH-ConfigList-r17；结构体；OPTIONAL。 */
    bool has_rsrp_ThresholdMsg3_r17; /**< rsrp-ThresholdMsg3-r17 是否存在。 */
    RSRP_Range rsrp_ThresholdMsg3_r17; /**< ASN.1 rsrp-ThresholdMsg3-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_numberOfMsg3_RepetitionsList_r17; /**< numberOfMsg3-RepetitionsList-r17 是否存在。 */
    NumberOfMsg3_Repetitions_r17* numberOfMsg3_RepetitionsList_r17_items; /**< ASN.1 numberOfMsg3-RepetitionsList-r17；SEQUENCE OF NumberOfMsg3_Repetitions_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t numberOfMsg3_RepetitionsList_r17_count; /**< numberOfMsg3-RepetitionsList-r17 元素个数。 */
    bool has_mcs_Msg3_Repetitions_r17; /**< mcs-Msg3-Repetitions-r17 是否存在。 */
    int64_t* mcs_Msg3_Repetitions_r17_items; /**< ASN.1 mcs-Msg3-Repetitions-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mcs_Msg3_Repetitions_r17_count; /**< mcs-Msg3-Repetitions-r17 元素个数。 */
};


/**
 * @brief BWP_UplinkCommon_ExtGroup3
 * @note ASN.1：BWP_UplinkCommon_ExtGroup3；源文件第 4618 行。
 */
struct BWP_UplinkCommon_ExtGroup3 {
    bool has_additionalRACH_perPCI_ToAddModList_r18; /**< additionalRACH-perPCI-ToAddModList-r18 是否存在。 */
    RACH_ConfigTwoTA_r18* additionalRACH_perPCI_ToAddModList_r18_items; /**< ASN.1 additionalRACH-perPCI-ToAddModList-r18；SEQUENCE OF RACH_ConfigTwoTA_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t additionalRACH_perPCI_ToAddModList_r18_count; /**< additionalRACH-perPCI-ToAddModList-r18 元素个数。 */
    bool has_additionalRACH_perPCI_ToReleaseList_r18; /**< additionalRACH-perPCI-ToReleaseList-r18 是否存在。 */
    RACH_ConfigTwoTAIndex_r18* additionalRACH_perPCI_ToReleaseList_r18_items; /**< ASN.1 additionalRACH-perPCI-ToReleaseList-r18；SEQUENCE OF RACH_ConfigTwoTAIndex_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t additionalRACH_perPCI_ToReleaseList_r18_count; /**< additionalRACH-perPCI-ToReleaseList-r18 元素个数。 */
    bool has_rsrp_ThresholdMsg1_RepetitionNum2_r18; /**< rsrp-ThresholdMsg1-RepetitionNum2-r18 是否存在。 */
    RSRP_Range rsrp_ThresholdMsg1_RepetitionNum2_r18; /**< ASN.1 rsrp-ThresholdMsg1-RepetitionNum2-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrp_ThresholdMsg1_RepetitionNum4_r18; /**< rsrp-ThresholdMsg1-RepetitionNum4-r18 是否存在。 */
    RSRP_Range rsrp_ThresholdMsg1_RepetitionNum4_r18; /**< ASN.1 rsrp-ThresholdMsg1-RepetitionNum4-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrp_ThresholdMsg1_RepetitionNum8_r18; /**< rsrp-ThresholdMsg1-RepetitionNum8-r18 是否存在。 */
    RSRP_Range rsrp_ThresholdMsg1_RepetitionNum8_r18; /**< ASN.1 rsrp-ThresholdMsg1-RepetitionNum8-r18；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_preambleTransMax_Msg1_Repetition_r18; /**< preambleTransMax-Msg1-Repetition-r18 是否存在。 */
    BWP_UplinkCommon_ExtGroup3_PreambleTransMax_Msg1_Repetition_r18 preambleTransMax_Msg1_Repetition_r18; /**< ASN.1 preambleTransMax-Msg1-Repetition-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PUSCH_ConfigCommon
 * @note ASN.1：PUSCH-ConfigCommon；源文件第 10462 行。
 * @note PUSCH-ConfigCommon ::= SEQUENCE { groupHoppingEnabledTransformPrecoding, pusch-TimeDomainAllocationL...
 */
struct PUSCH_ConfigCommon {
    bool has_groupHoppingEnabledTransformPrecoding; /**< groupHoppingEnabledTransformPrecoding 是否存在。 */
    PUSCH_ConfigCommon_GroupHoppingEnabledTransformPrecoding groupHoppingEnabledTransformPrecoding; /**< ASN.1 groupHoppingEnabledTransformPrecoding；枚举；OPTIONAL。 */
    bool has_pusch_TimeDomainAllocationList; /**< pusch-TimeDomainAllocationList 是否存在。 */
    PUSCH_TimeDomainResourceAllocationList pusch_TimeDomainAllocationList; /**< ASN.1 pusch-TimeDomainAllocationList；SEQUENCE OF PUSCH_TimeDomainResourceAllocation，SIZE (1..16)；OPTIONAL。 */
    bool has_msg3_DeltaPreamble; /**< msg3-DeltaPreamble 是否存在。 */
    int64_t msg3_DeltaPreamble; /**< ASN.1 msg3-DeltaPreamble；INTEGER (-1..6)，位宽 3 bit；OPTIONAL。 */
    bool has_p0_NominalWithGrant; /**< p0-NominalWithGrant 是否存在。 */
    int64_t p0_NominalWithGrant; /**< ASN.1 p0-NominalWithGrant；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PUSCH_ConfigCommon
 * @note ASN.1：SetupRelease<PUSCH-ConfigCommon>；源文件第 4603 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_ConfigCommon_Tag {
    SetupRelease_PUSCH_ConfigCommon_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_ConfigCommon_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_ConfigCommon_Tag;

struct SetupRelease_PUSCH_ConfigCommon {
    SetupRelease_PUSCH_ConfigCommon_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_ConfigCommon setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_ConfigCommon_ExtGroup1
 * @note ASN.1：PUCCH_ConfigCommon_ExtGroup1；源文件第 10135 行。
 */
struct PUCCH_ConfigCommon_ExtGroup1 {
    bool has_nrofPRBs; /**< nrofPRBs 是否存在。 */
    int64_t nrofPRBs; /**< ASN.1 nrofPRBs；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_intra_SlotFH_r17; /**< intra-SlotFH-r17 是否存在。 */
    PUCCH_ConfigCommon_ExtGroup1_Intra_SlotFH_r17 intra_SlotFH_r17; /**< ASN.1 intra-SlotFH-r17；枚举；OPTIONAL。 */
    bool has_pucch_ResourceCommonRedCap_r17; /**< pucch-ResourceCommonRedCap-r17 是否存在。 */
    int64_t pucch_ResourceCommonRedCap_r17; /**< ASN.1 pucch-ResourceCommonRedCap-r17；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_additionalPRBOffset_r17; /**< additionalPRBOffset-r17 是否存在。 */
    PUCCH_ConfigCommon_ExtGroup1_AdditionalPRBOffset_r17 additionalPRBOffset_r17; /**< ASN.1 additionalPRBOffset-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PUCCH_ConfigCommon
 * @note ASN.1：PUCCH-ConfigCommon；源文件第 10129 行。
 * @note PUCCH-ConfigCommon ::= SEQUENCE { pucch-ResourceCommon, pucch-GroupHopping, hoppingId, p0-nominal, n...
 */
struct PUCCH_ConfigCommon {
    bool has_pucch_ResourceCommon; /**< pucch-ResourceCommon 是否存在。 */
    int64_t pucch_ResourceCommon; /**< ASN.1 pucch-ResourceCommon；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    PUCCH_ConfigCommon_Pucch_GroupHopping pucch_GroupHopping; /**< ASN.1 pucch-GroupHopping；枚举。 */
    bool has_hoppingId; /**< hoppingId 是否存在。 */
    int64_t hoppingId; /**< ASN.1 hoppingId；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_p0_nominal; /**< p0-nominal 是否存在。 */
    int64_t p0_nominal; /**< ASN.1 p0-nominal；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUCCH_ConfigCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PUCCH_ConfigCommon
 * @note ASN.1：SetupRelease<PUCCH-ConfigCommon>；源文件第 4604 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUCCH_ConfigCommon_Tag {
    SetupRelease_PUCCH_ConfigCommon_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUCCH_ConfigCommon_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUCCH_ConfigCommon_Tag;

struct SetupRelease_PUCCH_ConfigCommon {
    SetupRelease_PUCCH_ConfigCommon_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUCCH_ConfigCommon setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_UplinkCommon
 * @note ASN.1：BWP-UplinkCommon；源文件第 4600 行。
 * @note BWP-UplinkCommon ::= SEQUENCE { genericParameters, rach-ConfigCommon, pusch-ConfigCommon, pucch-Co...
 */
struct BWP_UplinkCommon {
    BWP genericParameters; /**< ASN.1 genericParameters；结构体。 */
    bool has_rach_ConfigCommon; /**< rach-ConfigCommon 是否存在。 */
    SetupRelease_RACH_ConfigCommon rach_ConfigCommon; /**< ASN.1 rach-ConfigCommon；结构体；OPTIONAL。 */
    bool has_pusch_ConfigCommon; /**< pusch-ConfigCommon 是否存在。 */
    SetupRelease_PUSCH_ConfigCommon pusch_ConfigCommon; /**< ASN.1 pusch-ConfigCommon；结构体；OPTIONAL。 */
    bool has_pucch_ConfigCommon; /**< pucch-ConfigCommon 是否存在。 */
    SetupRelease_PUCCH_ConfigCommon pucch_ConfigCommon; /**< ASN.1 pucch-ConfigCommon；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BWP_UplinkCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    BWP_UplinkCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    BWP_UplinkCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UplinkConfigCommonSIB_v1700
 * @note ASN.1：UplinkConfigCommonSIB-v1700；源文件第 13967 行。
 * @note UplinkConfigCommonSIB-v1700 ::= SEQUENCE { initialUplinkBWP-RedCap-r17 }
 */
struct UplinkConfigCommonSIB_v1700 {
    bool has_initialUplinkBWP_RedCap_r17; /**< initialUplinkBWP-RedCap-r17 是否存在。 */
    BWP_UplinkCommon initialUplinkBWP_RedCap_r17; /**< ASN.1 initialUplinkBWP-RedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommonSIB_ExtGroup2
 * @note ASN.1：ServingCellConfigCommonSIB_ExtGroup2；源文件第 12734 行。
 */
struct ServingCellConfigCommonSIB_ExtGroup2 {
    bool has_channelAccessMode2_r17; /**< channelAccessMode2-r17 是否存在。 */
    ServingCellConfigCommonSIB_ExtGroup2_ChannelAccessMode2_r17 channelAccessMode2_r17; /**< ASN.1 channelAccessMode2-r17；枚举；OPTIONAL。 */
    bool has_discoveryBurstWindowLength_v1700; /**< discoveryBurstWindowLength-v1700 是否存在。 */
    ServingCellConfigCommonSIB_ExtGroup2_DiscoveryBurstWindowLength_v1700 discoveryBurstWindowLength_v1700; /**< ASN.1 discoveryBurstWindowLength-v1700；枚举；OPTIONAL。 */
    bool has_highSpeedConfigFR2_r17; /**< highSpeedConfigFR2-r17 是否存在。 */
    HighSpeedConfigFR2_r17 highSpeedConfigFR2_r17; /**< ASN.1 highSpeedConfigFR2-r17；结构体；OPTIONAL。 */
    bool has_uplinkConfigCommon_v1700; /**< uplinkConfigCommon-v1700 是否存在。 */
    UplinkConfigCommonSIB_v1700 uplinkConfigCommon_v1700; /**< ASN.1 uplinkConfigCommon-v1700；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommonSIB_ExtGroup3
 * @note ASN.1：ServingCellConfigCommonSIB_ExtGroup3；源文件第 12740 行。
 */
struct ServingCellConfigCommonSIB_ExtGroup3 {
    bool has_enhancedMeasurementLEO_r17; /**< enhancedMeasurementLEO-r17 是否存在。 */
    ServingCellConfigCommonSIB_ExtGroup3_EnhancedMeasurementLEO_r17 enhancedMeasurementLEO_r17; /**< ASN.1 enhancedMeasurementLEO-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommonSIB_ExtGroup4
 * @note ASN.1：ServingCellConfigCommonSIB_ExtGroup4；源文件第 12743 行。
 */
struct ServingCellConfigCommonSIB_ExtGroup4 {
    bool has_ra_ChannelAccess_r17; /**< ra-ChannelAccess-r17 是否存在。 */
    ServingCellConfigCommonSIB_ExtGroup4_Ra_ChannelAccess_r17 ra_ChannelAccess_r17; /**< ASN.1 ra-ChannelAccess-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MultiFrequencyBandListNR_SIB_v1760
 * @note ASN.1：MultiFrequencyBandListNR-SIB-v1760；源文件第 8387 行。
 * @note MultiFrequencyBandListNR-SIB-v1760 ::= SEQUENCE OF (size 1..8) OF NR-MultiBandInfo-v1760
 */
struct MultiFrequencyBandListNR_SIB_v1760 {
    NR_MultiBandInfo_v1760* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FrequencyInfoDL_SIB_v1760
 * @note ASN.1：FrequencyInfoDL-SIB-v1760；源文件第 6934 行。
 * @note FrequencyInfoDL-SIB-v1760 ::= SEQUENCE { frequencyBandList-v1760 }
 */
struct FrequencyInfoDL_SIB_v1760 {
    MultiFrequencyBandListNR_SIB_v1760 frequencyBandList_v1760; /**< ASN.1 frequencyBandList-v1760；SEQUENCE OF NR_MultiBandInfo_v1760，SIZE (1..8)。 */
};


/**
 * @brief DownlinkConfigCommonSIB_v1760
 * @note ASN.1：DownlinkConfigCommonSIB-v1760；源文件第 6550 行。
 * @note DownlinkConfigCommonSIB-v1760 ::= SEQUENCE { frequencyInfoDL-v1760 }
 */
struct DownlinkConfigCommonSIB_v1760 {
    FrequencyInfoDL_SIB_v1760 frequencyInfoDL_v1760; /**< ASN.1 frequencyInfoDL-v1760；结构体。 */
};


/**
 * @brief FrequencyInfoUL_SIB_v1760
 * @note ASN.1：FrequencyInfoUL-SIB-v1760；源文件第 6976 行。
 * @note FrequencyInfoUL-SIB-v1760 ::= SEQUENCE { frequencyBandList-v1760 }
 */
struct FrequencyInfoUL_SIB_v1760 {
    MultiFrequencyBandListNR_SIB_v1760 frequencyBandList_v1760; /**< ASN.1 frequencyBandList-v1760；SEQUENCE OF NR_MultiBandInfo_v1760，SIZE (1..8)。 */
};


/**
 * @brief UplinkConfigCommonSIB_v1760
 * @note ASN.1：UplinkConfigCommonSIB-v1760；源文件第 13971 行。
 * @note UplinkConfigCommonSIB-v1760 ::= SEQUENCE { frequencyInfoUL-v1760 }
 */
struct UplinkConfigCommonSIB_v1760 {
    FrequencyInfoUL_SIB_v1760 frequencyInfoUL_v1760; /**< ASN.1 frequencyInfoUL-v1760；结构体。 */
};


/**
 * @brief ServingCellConfigCommonSIB_ExtGroup5
 * @note ASN.1：ServingCellConfigCommonSIB_ExtGroup5；源文件第 12746 行。
 */
struct ServingCellConfigCommonSIB_ExtGroup5 {
    bool has_downlinkConfigCommon_v1760; /**< downlinkConfigCommon-v1760 是否存在。 */
    DownlinkConfigCommonSIB_v1760 downlinkConfigCommon_v1760; /**< ASN.1 downlinkConfigCommon-v1760；结构体；OPTIONAL。 */
    bool has_uplinkConfigCommon_v1760; /**< uplinkConfigCommon-v1760 是否存在。 */
    UplinkConfigCommonSIB_v1760 uplinkConfigCommon_v1760; /**< ASN.1 uplinkConfigCommon-v1760；结构体；OPTIONAL。 */
};


/**
 * @brief TDD_UL_DL_Pattern_ExtGroup1
 * @note ASN.1：TDD_UL_DL_Pattern_ExtGroup1；源文件第 13741 行。
 */
struct TDD_UL_DL_Pattern_ExtGroup1 {
    bool has_dl_UL_TransmissionPeriodicity_v1530; /**< dl-UL-TransmissionPeriodicity-v1530 是否存在。 */
    TDD_UL_DL_Pattern_ExtGroup1_Dl_UL_TransmissionPeriodicity_v1530 dl_UL_TransmissionPeriodicity_v1530; /**< ASN.1 dl-UL-TransmissionPeriodicity-v1530；枚举；OPTIONAL。 */
};


/**
 * @brief TDD_UL_DL_Pattern
 * @note ASN.1：TDD-UL-DL-Pattern；源文件第 13734 行。
 * @note TDD-UL-DL-Pattern ::= SEQUENCE { dl-UL-TransmissionPeriodicity, nrofDownlinkSlots, nrofDownlinkSymb...
 */
struct TDD_UL_DL_Pattern {
    TDD_UL_DL_Pattern_Dl_UL_TransmissionPeriodicity dl_UL_TransmissionPeriodicity; /**< ASN.1 dl-UL-TransmissionPeriodicity；枚举。 */
    int64_t nrofDownlinkSlots; /**< ASN.1 nrofDownlinkSlots；INTEGER (0..320)，位宽 9 bit。 */
    int64_t nrofDownlinkSymbols; /**< ASN.1 nrofDownlinkSymbols；INTEGER (0..13)，位宽 4 bit。 */
    int64_t nrofUplinkSlots; /**< ASN.1 nrofUplinkSlots；INTEGER (0..320)，位宽 9 bit。 */
    int64_t nrofUplinkSymbols; /**< ASN.1 nrofUplinkSymbols；INTEGER (0..13)，位宽 4 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    TDD_UL_DL_Pattern_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief TDD_UL_DL_ConfigCommon
 * @note ASN.1：TDD-UL-DL-ConfigCommon；源文件第 13727 行。
 * @note TDD-UL-DL-ConfigCommon ::= SEQUENCE { referenceSubcarrierSpacing, pattern1, pattern2 }
 */
struct TDD_UL_DL_ConfigCommon {
    SubcarrierSpacing referenceSubcarrierSpacing; /**< ASN.1 referenceSubcarrierSpacing；枚举。 */
    TDD_UL_DL_Pattern pattern1; /**< ASN.1 pattern1；结构体。 */
    bool has_pattern2; /**< pattern2 是否存在。 */
    TDD_UL_DL_Pattern pattern2; /**< ASN.1 pattern2；结构体；OPTIONAL。 */
};


/**
 * @brief FrequencyInfoUL_SIB_ExtGroup1
 * @note ASN.1：FrequencyInfoUL_SIB_ExtGroup1；源文件第 6971 行。
 */
struct FrequencyInfoUL_SIB_ExtGroup1 {
    bool has_frequencyBandListAerial_r18; /**< frequencyBandListAerial-r18 是否存在。 */
    MultiFrequencyBandListNR_Aerial_SIB_r18 frequencyBandListAerial_r18; /**< ASN.1 frequencyBandListAerial-r18；SEQUENCE OF NR_MultiBandInfoAerial_r18，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief FrequencyInfoUL_SIB
 * @note ASN.1：FrequencyInfoUL-SIB；源文件第 6964 行。
 * @note FrequencyInfoUL-SIB ::= SEQUENCE { frequencyBandList, absoluteFrequencyPointA, scs-SpecificCarrierLis...
 */
struct FrequencyInfoUL_SIB {
    bool has_frequencyBandList; /**< frequencyBandList 是否存在。 */
    MultiFrequencyBandListNR_SIB frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF NR_MultiBandInfo，SIZE (1..8)；OPTIONAL。 */
    bool has_absoluteFrequencyPointA; /**< absoluteFrequencyPointA 是否存在。 */
    ARFCN_ValueNR absoluteFrequencyPointA; /**< ASN.1 absoluteFrequencyPointA；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    SCS_SpecificCarrier* scs_SpecificCarrierList_items; /**< ASN.1 scs-SpecificCarrierList；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t scs_SpecificCarrierList_count; /**< scs-SpecificCarrierList 元素个数。 */
    bool has_p_Max; /**< p-Max 是否存在。 */
    P_Max p_Max; /**< ASN.1 p-Max；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_frequencyShift7p5khz; /**< frequencyShift7p5khz 是否存在。 */
    FrequencyInfoUL_SIB_FrequencyShift7p5khz frequencyShift7p5khz; /**< ASN.1 frequencyShift7p5khz；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FrequencyInfoUL_SIB_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UplinkConfigCommonSIB
 * @note ASN.1：UplinkConfigCommonSIB；源文件第 13961 行。
 * @note UplinkConfigCommonSIB ::= SEQUENCE { frequencyInfoUL, initialUplinkBWP, timeAlignmentTimerCommon }
 */
struct UplinkConfigCommonSIB {
    FrequencyInfoUL_SIB frequencyInfoUL; /**< ASN.1 frequencyInfoUL；结构体。 */
    BWP_UplinkCommon initialUplinkBWP; /**< ASN.1 initialUplinkBWP；结构体。 */
    TimeAlignmentTimer timeAlignmentTimerCommon; /**< ASN.1 timeAlignmentTimerCommon；枚举。 */
};


/**
 * @brief ServingCellConfigCommonSIB_Ssb_PositionsInBurst
 * @note ASN.1：ssb-PositionsInBurst；源文件第 12718 行。
 * @note SEQUENCE { inOneGroup, groupPresence }
 */
struct ServingCellConfigCommonSIB_Ssb_PositionsInBurst {
    BitString inOneGroup; /**< ASN.1 inOneGroup；SIZE (8)，定长。 */
    bool has_groupPresence; /**< groupPresence 是否存在。 */
    BitString groupPresence; /**< ASN.1 groupPresence；SIZE (8)，定长；OPTIONAL。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART014_H */
