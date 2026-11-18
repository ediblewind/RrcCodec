/* ============================================================================
 * types/rrc_types_part018.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART018_H
#define RRC_CODEC_TYPES_PART018_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SCellConfig_ExtGroup1
 * @note ASN.1：SCellConfig_ExtGroup1；源文件第 4951 行。
 */
struct SCellConfig_ExtGroup1 {
    bool has_smtc; /**< smtc 是否存在。 */
    SSB_MTC smtc; /**< ASN.1 smtc；结构体；OPTIONAL。 */
};


/**
 * @brief SCellConfig_ExtGroup2
 * @note ASN.1：SCellConfig_ExtGroup2；源文件第 4954 行。
 */
struct SCellConfig_ExtGroup2 {
    bool has_sCellState_r16; /**< sCellState-r16 是否存在。 */
    SCellConfig_ExtGroup2_SCellState_r16 sCellState_r16; /**< ASN.1 sCellState-r16；枚举；OPTIONAL。 */
    bool has_secondaryDRX_GroupConfig_r16; /**< secondaryDRX-GroupConfig-r16 是否存在。 */
    SCellConfig_ExtGroup2_SecondaryDRX_GroupConfig_r16 secondaryDRX_GroupConfig_r16; /**< ASN.1 secondaryDRX-GroupConfig-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SCellSIB20_r17
 * @note ASN.1：SetupRelease<SCellSIB20-r17>；源文件第 4961 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SCellSIB20_r17_Tag {
    SetupRelease_SCellSIB20_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SCellSIB20_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SCellSIB20_r17_Tag;

struct SetupRelease_SCellSIB20_r17 {
    SetupRelease_SCellSIB20_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SystemInformation* setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SCellConfig_ExtGroup3
 * @note ASN.1：SCellConfig_ExtGroup3；源文件第 4958 行。
 */
struct SCellConfig_ExtGroup3 {
    bool has_preConfGapStatus_r17; /**< preConfGapStatus-r17 是否存在。 */
    BitString preConfGapStatus_r17; /**< ASN.1 preConfGapStatus-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_goodServingCellEvaluationBFD_r17; /**< goodServingCellEvaluationBFD-r17 是否存在。 */
    GoodServingCellEvaluation_r17 goodServingCellEvaluationBFD_r17; /**< ASN.1 goodServingCellEvaluationBFD-r17；结构体；OPTIONAL。 */
    bool has_sCellSIB20_r17; /**< sCellSIB20-r17 是否存在。 */
    SetupRelease_SCellSIB20_r17 sCellSIB20_r17; /**< ASN.1 sCellSIB20-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PLMN_IdentityInfoList
 * @note ASN.1：SetupRelease<PLMN-IdentityInfoList>；源文件第 4964 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PLMN_IdentityInfoList_Tag {
    SetupRelease_PLMN_IdentityInfoList_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PLMN_IdentityInfoList_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PLMN_IdentityInfoList_Tag;

struct SetupRelease_PLMN_IdentityInfoList {
    SetupRelease_PLMN_IdentityInfoList_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PLMN_IdentityInfoList setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_NPN_IdentityInfoList_r16
 * @note ASN.1：SetupRelease<NPN-IdentityInfoList-r16>；源文件第 4965 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NPN_IdentityInfoList_r16_Tag {
    SetupRelease_NPN_IdentityInfoList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NPN_IdentityInfoList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NPN_IdentityInfoList_r16_Tag;

struct SetupRelease_NPN_IdentityInfoList_r16 {
    SetupRelease_NPN_IdentityInfoList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NPN_IdentityInfoList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SCellConfig_ExtGroup4
 * @note ASN.1：SCellConfig_ExtGroup4；源文件第 4963 行。
 */
struct SCellConfig_ExtGroup4 {
    bool has_plmn_IdentityInfoList_r17; /**< plmn-IdentityInfoList-r17 是否存在。 */
    SetupRelease_PLMN_IdentityInfoList plmn_IdentityInfoList_r17; /**< ASN.1 plmn-IdentityInfoList-r17；结构体；OPTIONAL。 */
    bool has_npn_IdentityInfoList_r17; /**< npn-IdentityInfoList-r17 是否存在。 */
    SetupRelease_NPN_IdentityInfoList_r16 npn_IdentityInfoList_r17; /**< ASN.1 npn-IdentityInfoList-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SCellConfig
 * @note ASN.1：SCellConfig；源文件第 4946 行。
 * @note SCellConfig ::= SEQUENCE { sCellIndex, sCellConfigCommon, sCellConfigDedicated, smtc, sCellSt...
 */
struct SCellConfig {
    SCellIndex sCellIndex; /**< ASN.1 sCellIndex；INTEGER (1..31)，位宽 5 bit。 */
    bool has_sCellConfigCommon; /**< sCellConfigCommon 是否存在。 */
    ServingCellConfigCommon sCellConfigCommon; /**< ASN.1 sCellConfigCommon；结构体；OPTIONAL。 */
    bool has_sCellConfigDedicated; /**< sCellConfigDedicated 是否存在。 */
    ServingCellConfig sCellConfigDedicated; /**< ASN.1 sCellConfigDedicated；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SCellConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SCellConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SCellConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    SCellConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief IAB_ResourceConfig_r17
 * @note ASN.1：IAB-ResourceConfig-r17；源文件第 4986 行。
 * @note IAB-ResourceConfig-r17 ::= SEQUENCE { iab-ResourceConfigID-r17, slotList-r17, periodicitySlotList-r17, s...
 */
struct IAB_ResourceConfig_r17 {
    IAB_ResourceConfigID_r17 iab_ResourceConfigID_r17; /**< ASN.1 iab-ResourceConfigID-r17；INTEGER (0..65535)，位宽 16 bit。 */
    bool has_slotList_r17; /**< slotList-r17 是否存在。 */
    int64_t* slotList_r17_items; /**< ASN.1 slotList-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotList_r17_count; /**< slotList-r17 元素个数。 */
    bool has_periodicitySlotList_r17; /**< periodicitySlotList-r17 是否存在。 */
    IAB_ResourceConfig_r17_PeriodicitySlotList_r17 periodicitySlotList_r17; /**< ASN.1 periodicitySlotList-r17；枚举；OPTIONAL。 */
    bool has_slotListSubcarrierSpacing_r17; /**< slotListSubcarrierSpacing-r17 是否存在。 */
    SubcarrierSpacing slotListSubcarrierSpacing_r17; /**< ASN.1 slotListSubcarrierSpacing-r17；枚举；OPTIONAL。 */
};


/**
 * @brief IntraBandCC_CombinationReqList_r17
 * @note ASN.1：IntraBandCC-CombinationReqList-r17；源文件第 4997 行。
 * @note IntraBandCC-CombinationReqList-r17 ::= SEQUENCE { servCellIndexList-r17, cc-CombinationList-r17 }
 */
struct IntraBandCC_CombinationReqList_r17 {
    ServCellIndex* servCellIndexList_r17_items; /**< ASN.1 servCellIndexList-r17；SEQUENCE OF ServCellIndex，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t servCellIndexList_r17_count; /**< servCellIndexList-r17 元素个数。 */
    IntraBandCC_Combination_r17* cc_CombinationList_r17_items; /**< ASN.1 cc-CombinationList-r17；SEQUENCE OF IntraBandCC_Combination_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t cc_CombinationList_r17_count; /**< cc-CombinationList-r17 元素个数。 */
};


/**
 * @brief IntraBandCC_Combination_r17
 * @note ASN.1：IntraBandCC-Combination-r17；源文件第 5002 行。
 * @note IntraBandCC-Combination-r17 ::= SEQUENCE OF (size 1..32) OF CC-State-r17
 */
struct IntraBandCC_Combination_r17 {
    CC_State_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CarrierState_r17
 * @note ASN.1：CarrierState-r17；源文件第 5009 行。
 * @note CarrierState-r17 ::= CHOICE { deActivated-r17, activeBWP-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CarrierState_r17_Tag {
    CarrierState_r17_Tag_deActivated_r17 = 0, /**< ASN.1 deActivated-r17 */
    CarrierState_r17_Tag_activeBWP_r17 = 1, /**< ASN.1 activeBWP-r17 */
} CarrierState_r17_Tag;

struct CarrierState_r17 {
    CarrierState_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null deActivated_r17; /**< ASN.1 deActivated-r17 */
        int64_t activeBWP_r17; /**< ASN.1 activeBWP-r17 */
    } u;
};


/**
 * @brief CC_State_r17
 * @note ASN.1：CC-State-r17；源文件第 5004 行。
 * @note CC-State-r17 ::= SEQUENCE { dlCarrier-r17, ulCarrier-r17 }
 */
struct CC_State_r17 {
    bool has_dlCarrier_r17; /**< dlCarrier-r17 是否存在。 */
    CarrierState_r17 dlCarrier_r17; /**< ASN.1 dlCarrier-r17；结构体；OPTIONAL。 */
    bool has_ulCarrier_r17; /**< ulCarrier-r17 是否存在。 */
    CarrierState_r17 ulCarrier_r17; /**< ASN.1 ulCarrier-r17；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkTxSwitchingBandPairConfig_r18
 * @note ASN.1：UplinkTxSwitchingBandPairConfig-r18；源文件第 5037 行。
 * @note UplinkTxSwitchingBandPairConfig-r18 ::= SEQUENCE { bandInfoUL1-r18, bandInfoUL2-r18, switchingOptionConfigForBandPair...
 */
struct UplinkTxSwitchingBandPairConfig_r18 {
    UplinkTxSwitchingBandIndex_r18 bandInfoUL1_r18; /**< ASN.1 bandInfoUL1-r18；INTEGER (1..32)，位宽 5 bit。 */
    UplinkTxSwitchingBandIndex_r18 bandInfoUL2_r18; /**< ASN.1 bandInfoUL2-r18；INTEGER (1..32)，位宽 5 bit。 */
    UplinkTxSwitchingBandPairConfig_r18_SwitchingOptionConfigForBandPair_r18 switchingOptionConfigForBandPair_r18; /**< ASN.1 switchingOptionConfigForBandPair-r18；枚举。 */
    bool has_switching2T_Mode_r18; /**< switching2T-Mode-r18 是否存在。 */
    UplinkTxSwitchingBandPairConfig_r18_Switching2T_Mode_r18 switching2T_Mode_r18; /**< ASN.1 switching2T-Mode-r18；枚举；OPTIONAL。 */
    bool has_switchingPeriodConfigForBandPair_r18; /**< switchingPeriodConfigForBandPair-r18 是否存在。 */
    UplinkTxSwitchingBandPairConfig_r18_SwitchingPeriodConfigForBandPair_r18 switchingPeriodConfigForBandPair_r18; /**< ASN.1 switchingPeriodConfigForBandPair-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UplinkTxSwitchingAssociatedBandDualUL_r18
 * @note ASN.1：UplinkTxSwitchingAssociatedBandDualUL-r18；源文件第 5048 行。
 * @note UplinkTxSwitchingAssociatedBandDualUL-r18 ::= SEQUENCE { transmitBand-r18, associatedBand-r18 }
 */
struct UplinkTxSwitchingAssociatedBandDualUL_r18 {
    UplinkTxSwitchingBandIndex_r18 transmitBand_r18; /**< ASN.1 transmitBand-r18；INTEGER (1..32)，位宽 5 bit。 */
    UplinkTxSwitchingBandIndex_r18 associatedBand_r18; /**< ASN.1 associatedBand-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief MultiBandInfoListEUTRA
 * @note ASN.1：MultiBandInfoListEUTRA；源文件第 8057 行。
 * @note MultiBandInfoListEUTRA ::= SEQUENCE OF (size 1..8) OF FreqBandIndicatorEUTRA
 */
struct MultiBandInfoListEUTRA {
    FreqBandIndicatorEUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CGI_InfoEUTRA_Cgi_info_EPC
 * @note ASN.1：cgi-info-EPC；源文件第 5094 行。
 * @note SEQUENCE { cgi-info-EPC-legacy, cgi-info-EPC-list }
 */
struct CGI_InfoEUTRA_Cgi_info_EPC {
    CellAccessRelatedInfo_EUTRA_EPC cgi_info_EPC_legacy; /**< ASN.1 cgi-info-EPC-legacy；结构体。 */
    bool has_cgi_info_EPC_list; /**< cgi-info-EPC-list 是否存在。 */
    CellAccessRelatedInfo_EUTRA_EPC* cgi_info_EPC_list_items; /**< ASN.1 cgi-info-EPC-list；SEQUENCE OF CellAccessRelatedInfo_EUTRA_EPC，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cgi_info_EPC_list_count; /**< cgi-info-EPC-list 元素个数。 */
};


/**
 * @brief CGI_InfoEUTRA
 * @note ASN.1：CGI-InfoEUTRA；源文件第 5093 行。
 * @note CGI-InfoEUTRA ::= SEQUENCE { cgi-info-EPC, cgi-info-5GC, freqBandIndicator, multiBandInfoList, ...
 */
struct CGI_InfoEUTRA {
    bool has_cgi_info_EPC; /**< cgi-info-EPC 是否存在。 */
    CGI_InfoEUTRA_Cgi_info_EPC cgi_info_EPC; /**< ASN.1 cgi-info-EPC；结构体；OPTIONAL。 */
    bool has_cgi_info_5GC; /**< cgi-info-5GC 是否存在。 */
    CellAccessRelatedInfo_EUTRA_5GC* cgi_info_5GC_items; /**< ASN.1 cgi-info-5GC；SEQUENCE OF CellAccessRelatedInfo_EUTRA_5GC，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cgi_info_5GC_count; /**< cgi-info-5GC 元素个数。 */
    FreqBandIndicatorEUTRA freqBandIndicator; /**< ASN.1 freqBandIndicator；INTEGER (1..256)，位宽 8 bit。 */
    bool has_multiBandInfoList; /**< multiBandInfoList 是否存在。 */
    MultiBandInfoListEUTRA multiBandInfoList; /**< ASN.1 multiBandInfoList；SEQUENCE OF FreqBandIndicatorEUTRA，SIZE (1..8)；OPTIONAL。 */
    bool has_freqBandIndicatorPriority; /**< freqBandIndicatorPriority 是否存在。 */
    CGI_InfoEUTRA_FreqBandIndicatorPriority freqBandIndicatorPriority; /**< ASN.1 freqBandIndicatorPriority；枚举；OPTIONAL。 */
};


/**
 * @brief CGI_InfoNR_ExtGroup1
 * @note ASN.1：CGI_InfoNR_ExtGroup1；源文件第 5127 行。
 */
struct CGI_InfoNR_ExtGroup1 {
    bool has_npn_IdentityInfoList_r16; /**< npn-IdentityInfoList-r16 是否存在。 */
    NPN_IdentityInfoList_r16 npn_IdentityInfoList_r16; /**< ASN.1 npn-IdentityInfoList-r16；SEQUENCE OF NPN_IdentityInfo_r16，SIZE (1..12)；OPTIONAL。 */
};


/**
 * @brief CGI_InfoNR_ExtGroup2
 * @note ASN.1：CGI_InfoNR_ExtGroup2；源文件第 5130 行。
 */
struct CGI_InfoNR_ExtGroup2 {
    bool has_cellReservedForOtherUse_r16; /**< cellReservedForOtherUse-r16 是否存在。 */
    CGI_InfoNR_ExtGroup2_CellReservedForOtherUse_r16 cellReservedForOtherUse_r16; /**< ASN.1 cellReservedForOtherUse-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CGI_InfoNR_NoSIB1
 * @note ASN.1：noSIB1；源文件第 5122 行。
 * @note SEQUENCE { ssb-SubcarrierOffset, pdcch-ConfigSIB1 }
 */
struct CGI_InfoNR_NoSIB1 {
    int64_t ssb_SubcarrierOffset; /**< ASN.1 ssb-SubcarrierOffset；INTEGER (0..15)，位宽 4 bit。 */
    PDCCH_ConfigSIB1 pdcch_ConfigSIB1; /**< ASN.1 pdcch-ConfigSIB1；结构体。 */
};


/**
 * @brief CGI_InfoNR
 * @note ASN.1：CGI-InfoNR；源文件第 5119 行。
 * @note CGI-InfoNR ::= SEQUENCE { plmn-IdentityInfoList, frequencyBandList, noSIB1, npn-IdentityInfo...
 */
struct CGI_InfoNR {
    bool has_plmn_IdentityInfoList; /**< plmn-IdentityInfoList 是否存在。 */
    PLMN_IdentityInfoList plmn_IdentityInfoList; /**< ASN.1 plmn-IdentityInfoList；SEQUENCE OF PLMN_IdentityInfo，SIZE (1..12)；OPTIONAL。 */
    bool has_frequencyBandList; /**< frequencyBandList 是否存在。 */
    MultiFrequencyBandListNR frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF FreqBandIndicatorNR，SIZE (1..8)；OPTIONAL。 */
    bool has_noSIB1; /**< noSIB1 是否存在。 */
    CGI_InfoNR_NoSIB1 noSIB1; /**< ASN.1 noSIB1；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CGI_InfoNR_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CGI_InfoNR_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two
 * @note ASN.1：codebookType/type1/subType/typeI-SinglePanel/nrOfAntennaPorts/two；源文件第 5176 行。
 * @note SEQUENCE { twoTX-CodebookSubsetRestriction }
 */
struct CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two {
    BitString twoTX_CodebookSubsetRestriction; /**< ASN.1 twoTX-CodebookSubsetRestriction；SIZE (6)，定长。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2
 * @note ASN.1：codebookType/type1/subType/typeI-SinglePanel/nrOfAntennaPorts/moreThanTwo/n1-n2；源文件第 5180 行。
 * @note CHOICE { two-one-TypeI-SinglePanel-Restriction, two-two-TypeI-SinglePanel-Res...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction = 0, /**< ASN.1 two-one-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction = 1, /**< ASN.1 two-two-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction = 2, /**< ASN.1 four-one-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction = 3, /**< ASN.1 three-two-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction = 4, /**< ASN.1 six-one-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction = 5, /**< ASN.1 four-two-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction = 6, /**< ASN.1 eight-one-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction = 7, /**< ASN.1 four-three-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction = 8, /**< ASN.1 six-two-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction = 9, /**< ASN.1 twelve-one-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction = 10, /**< ASN.1 four-four-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction = 11, /**< ASN.1 eight-two-TypeI-SinglePanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction = 12, /**< ASN.1 sixteen-one-TypeI-SinglePanel-Restriction */
} CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag;

struct CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2 {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_one_TypeI_SinglePanel_Restriction; /**< ASN.1 two-one-TypeI-SinglePanel-Restriction */
        BitString two_two_TypeI_SinglePanel_Restriction; /**< ASN.1 two-two-TypeI-SinglePanel-Restriction */
        BitString four_one_TypeI_SinglePanel_Restriction; /**< ASN.1 four-one-TypeI-SinglePanel-Restriction */
        BitString three_two_TypeI_SinglePanel_Restriction; /**< ASN.1 three-two-TypeI-SinglePanel-Restriction */
        BitString six_one_TypeI_SinglePanel_Restriction; /**< ASN.1 six-one-TypeI-SinglePanel-Restriction */
        BitString four_two_TypeI_SinglePanel_Restriction; /**< ASN.1 four-two-TypeI-SinglePanel-Restriction */
        BitString eight_one_TypeI_SinglePanel_Restriction; /**< ASN.1 eight-one-TypeI-SinglePanel-Restriction */
        BitString four_three_TypeI_SinglePanel_Restriction; /**< ASN.1 four-three-TypeI-SinglePanel-Restriction */
        BitString six_two_TypeI_SinglePanel_Restriction; /**< ASN.1 six-two-TypeI-SinglePanel-Restriction */
        BitString twelve_one_TypeI_SinglePanel_Restriction; /**< ASN.1 twelve-one-TypeI-SinglePanel-Restriction */
        BitString four_four_TypeI_SinglePanel_Restriction; /**< ASN.1 four-four-TypeI-SinglePanel-Restriction */
        BitString eight_two_TypeI_SinglePanel_Restriction; /**< ASN.1 eight-two-TypeI-SinglePanel-Restriction */
        BitString sixteen_one_TypeI_SinglePanel_Restriction; /**< ASN.1 sixteen-one-TypeI-SinglePanel-Restriction */
    } u;
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo
 * @note ASN.1：codebookType/type1/subType/typeI-SinglePanel/nrOfAntennaPorts/moreThanTwo；源文件第 5179 行。
 * @note SEQUENCE { n1-n2, typeI-SinglePanel-codebookSubsetRestriction-i2 }
 */
struct CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo_N1_n2 n1_n2; /**< ASN.1 n1-n2；结构体。 */
    bool has_typeI_SinglePanel_codebookSubsetRestriction_i2; /**< typeI-SinglePanel-codebookSubsetRestriction-i2 是否存在。 */
    BitString typeI_SinglePanel_codebookSubsetRestriction_i2; /**< ASN.1 typeI-SinglePanel-codebookSubsetRestriction-i2；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts
 * @note ASN.1：codebookType/type1/subType/typeI-SinglePanel/nrOfAntennaPorts；源文件第 5175 行。
 * @note CHOICE { two, moreThanTwo }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_two = 0, /**< ASN.1 two */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag_moreThanTwo = 1, /**< ASN.1 moreThanTwo */
} CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag;

struct CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_Two two; /**< ASN.1 two */
        CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts_MoreThanTwo moreThanTwo; /**< ASN.1 moreThanTwo */
    } u;
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel
 * @note ASN.1：codebookType/type1/subType/typeI-SinglePanel；源文件第 5174 行。
 * @note SEQUENCE { nrOfAntennaPorts, typeI-SinglePanel-ri-Restriction }
 */
struct CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel_NrOfAntennaPorts nrOfAntennaPorts; /**< ASN.1 nrOfAntennaPorts；结构体。 */
    BitString typeI_SinglePanel_ri_Restriction; /**< ASN.1 typeI-SinglePanel-ri-Restriction；SIZE (8)，定长。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2
 * @note ASN.1：codebookType/type1/subType/typeI-MultiPanel/ng-n1-n2；源文件第 5201 行。
 * @note CHOICE { two-two-one-TypeI-MultiPanel-Restriction, two-four-one-TypeI-MultiPa...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_one_TypeI_MultiPanel_Restriction = 0, /**< ASN.1 two-two-one-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_one_TypeI_MultiPanel_Restriction = 1, /**< ASN.1 two-four-one-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_one_TypeI_MultiPanel_Restriction = 2, /**< ASN.1 four-two-one-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_two_two_TypeI_MultiPanel_Restriction = 3, /**< ASN.1 two-two-two-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_eight_one_TypeI_MultiPanel_Restriction = 4, /**< ASN.1 two-eight-one-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_four_one_TypeI_MultiPanel_Restriction = 5, /**< ASN.1 four-four-one-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_two_four_two_TypeI_MultiPanel_Restriction = 6, /**< ASN.1 two-four-two-TypeI-MultiPanel-Restriction */
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag_four_two_two_TypeI_MultiPanel_Restriction = 7, /**< ASN.1 four-two-two-TypeI-MultiPanel-Restriction */
} CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag;

struct CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2 {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_two_one_TypeI_MultiPanel_Restriction; /**< ASN.1 two-two-one-TypeI-MultiPanel-Restriction */
        BitString two_four_one_TypeI_MultiPanel_Restriction; /**< ASN.1 two-four-one-TypeI-MultiPanel-Restriction */
        BitString four_two_one_TypeI_MultiPanel_Restriction; /**< ASN.1 four-two-one-TypeI-MultiPanel-Restriction */
        BitString two_two_two_TypeI_MultiPanel_Restriction; /**< ASN.1 two-two-two-TypeI-MultiPanel-Restriction */
        BitString two_eight_one_TypeI_MultiPanel_Restriction; /**< ASN.1 two-eight-one-TypeI-MultiPanel-Restriction */
        BitString four_four_one_TypeI_MultiPanel_Restriction; /**< ASN.1 four-four-one-TypeI-MultiPanel-Restriction */
        BitString two_four_two_TypeI_MultiPanel_Restriction; /**< ASN.1 two-four-two-TypeI-MultiPanel-Restriction */
        BitString four_two_two_TypeI_MultiPanel_Restriction; /**< ASN.1 four-two-two-TypeI-MultiPanel-Restriction */
    } u;
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel
 * @note ASN.1：codebookType/type1/subType/typeI-MultiPanel；源文件第 5200 行。
 * @note SEQUENCE { ng-n1-n2, ri-Restriction }
 */
struct CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel {
    CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel_Ng_n1_n2 ng_n1_n2; /**< ASN.1 ng-n1-n2；结构体。 */
    BitString ri_Restriction; /**< ASN.1 ri-Restriction；SIZE (4)，定长。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type1_SubType
 * @note ASN.1：codebookType/type1/subType；源文件第 5173 行。
 * @note CHOICE { typeI-SinglePanel, typeI-MultiPanel }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Type1_SubType_Tag {
    CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_SinglePanel = 0, /**< ASN.1 typeI-SinglePanel */
    CodebookConfig_CodebookType_Type1_SubType_Tag_typeI_MultiPanel = 1, /**< ASN.1 typeI-MultiPanel */
} CodebookConfig_CodebookType_Type1_SubType_Tag;

struct CodebookConfig_CodebookType_Type1_SubType {
    CodebookConfig_CodebookType_Type1_SubType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_CodebookType_Type1_SubType_TypeI_SinglePanel typeI_SinglePanel; /**< ASN.1 typeI-SinglePanel */
        CodebookConfig_CodebookType_Type1_SubType_TypeI_MultiPanel typeI_MultiPanel; /**< ASN.1 typeI-MultiPanel */
    } u;
};


/**
 * @brief CodebookConfig_CodebookType_Type1
 * @note ASN.1：codebookType/type1；源文件第 5172 行。
 * @note SEQUENCE { subType, codebookMode }
 */
struct CodebookConfig_CodebookType_Type1 {
    CodebookConfig_CodebookType_Type1_SubType subType; /**< ASN.1 subType；结构体。 */
    int64_t codebookMode; /**< ASN.1 codebookMode；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction
 * @note ASN.1：codebookType/type2/subType/typeII/n1-n2-codebookSubsetRestriction；源文件第 5220 行。
 * @note CHOICE { two-one, two-two, four-one, three-two, six-one, four-two, eight-one,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag {
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_one = 0, /**< ASN.1 two-one */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_two_two = 1, /**< ASN.1 two-two */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_one = 2, /**< ASN.1 four-one */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_three_two = 3, /**< ASN.1 three-two */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_one = 4, /**< ASN.1 six-one */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_two = 5, /**< ASN.1 four-two */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_one = 6, /**< ASN.1 eight-one */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_three = 7, /**< ASN.1 four-three */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_six_two = 8, /**< ASN.1 six-two */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_twelve_one = 9, /**< ASN.1 twelve-one */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_four_four = 10, /**< ASN.1 four-four */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_eight_two = 11, /**< ASN.1 eight-two */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag_sixteen_one = 12, /**< ASN.1 sixteen-one */
} CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag;

struct CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction {
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_one; /**< ASN.1 two-one */
        BitString two_two; /**< ASN.1 two-two */
        BitString four_one; /**< ASN.1 four-one */
        BitString three_two; /**< ASN.1 three-two */
        BitString six_one; /**< ASN.1 six-one */
        BitString four_two; /**< ASN.1 four-two */
        BitString eight_one; /**< ASN.1 eight-one */
        BitString four_three; /**< ASN.1 four-three */
        BitString six_two; /**< ASN.1 six-two */
        BitString twelve_one; /**< ASN.1 twelve-one */
        BitString four_four; /**< ASN.1 four-four */
        BitString eight_two; /**< ASN.1 eight-two */
        BitString sixteen_one; /**< ASN.1 sixteen-one */
    } u;
};


/**
 * @brief CodebookConfig_CodebookType_Type2_SubType_TypeII
 * @note ASN.1：codebookType/type2/subType/typeII；源文件第 5219 行。
 * @note SEQUENCE { n1-n2-codebookSubsetRestriction, typeII-RI-Restriction }
 */
struct CodebookConfig_CodebookType_Type2_SubType_TypeII {
    CodebookConfig_CodebookType_Type2_SubType_TypeII_N1_n2_codebookSubsetRestriction n1_n2_codebookSubsetRestriction; /**< ASN.1 n1-n2-codebookSubsetRestriction；结构体。 */
    BitString typeII_RI_Restriction; /**< ASN.1 typeII-RI-Restriction；SIZE (2)，定长。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection
 * @note ASN.1：codebookType/type2/subType/typeII-PortSelection；源文件第 5237 行。
 * @note SEQUENCE { portSelectionSamplingSize, typeII-PortSelectionRI-Restriction }
 */
struct CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection {
    bool has_portSelectionSamplingSize; /**< portSelectionSamplingSize 是否存在。 */
    CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelectionSamplingSize portSelectionSamplingSize; /**< ASN.1 portSelectionSamplingSize；枚举；OPTIONAL。 */
    BitString typeII_PortSelectionRI_Restriction; /**< ASN.1 typeII-PortSelectionRI-Restriction；SIZE (2)，定长。 */
};


/**
 * @brief CodebookConfig_CodebookType_Type2_SubType
 * @note ASN.1：codebookType/type2/subType；源文件第 5218 行。
 * @note CHOICE { typeII, typeII-PortSelection }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Type2_SubType_Tag {
    CodebookConfig_CodebookType_Type2_SubType_Tag_typeII = 0, /**< ASN.1 typeII */
    CodebookConfig_CodebookType_Type2_SubType_Tag_typeII_PortSelection = 1, /**< ASN.1 typeII-PortSelection */
} CodebookConfig_CodebookType_Type2_SubType_Tag;

struct CodebookConfig_CodebookType_Type2_SubType {
    CodebookConfig_CodebookType_Type2_SubType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_CodebookType_Type2_SubType_TypeII typeII; /**< ASN.1 typeII */
        CodebookConfig_CodebookType_Type2_SubType_TypeII_PortSelection typeII_PortSelection; /**< ASN.1 typeII-PortSelection */
    } u;
};


/**
 * @brief CodebookConfig_CodebookType_Type2
 * @note ASN.1：codebookType/type2；源文件第 5217 行。
 * @note SEQUENCE { subType, phaseAlphabetSize, subbandAmplitude, numberOfBeams }
 */
struct CodebookConfig_CodebookType_Type2 {
    CodebookConfig_CodebookType_Type2_SubType subType; /**< ASN.1 subType；结构体。 */
    CodebookConfig_CodebookType_Type2_PhaseAlphabetSize phaseAlphabetSize; /**< ASN.1 phaseAlphabetSize；枚举。 */
    bool subbandAmplitude; /**< ASN.1 subbandAmplitude；BOOLEAN，1 bit。 */
    CodebookConfig_CodebookType_Type2_NumberOfBeams numberOfBeams; /**< ASN.1 numberOfBeams；枚举。 */
};


/**
 * @brief CodebookConfig_CodebookType
 * @note ASN.1：codebookType；源文件第 5171 行。
 * @note CHOICE { type1, type2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_CodebookType_Tag {
    CodebookConfig_CodebookType_Tag_type1 = 0, /**< ASN.1 type1 */
    CodebookConfig_CodebookType_Tag_type2 = 1, /**< ASN.1 type2 */
} CodebookConfig_CodebookType_Tag;

struct CodebookConfig_CodebookType {
    CodebookConfig_CodebookType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_CodebookType_Type1 type1; /**< ASN.1 type1 */
        CodebookConfig_CodebookType_Type2 type2; /**< ASN.1 type2 */
    } u;
};


/**
 * @brief CodebookConfig
 * @note ASN.1：CodebookConfig；源文件第 5170 行。
 * @note CodebookConfig ::= SEQUENCE { codebookType }
 */
struct CodebookConfig {
    CodebookConfig_CodebookType codebookType; /**< ASN.1 codebookType；结构体。 */
};


/**
 * @brief CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16
 * @note ASN.1：codebookType/type2/subType/typeII-r16/n1-n2-codebookSubsetRestriction-r16；源文件第 5254 行。
 * @note CHOICE { two-one, two-two, four-one, three-two, six-one, four-two, eight-one,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag {
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_one = 0, /**< ASN.1 two-one */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_two_two = 1, /**< ASN.1 two-two */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_one = 2, /**< ASN.1 four-one */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_three_two = 3, /**< ASN.1 three-two */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_one = 4, /**< ASN.1 six-one */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_two = 5, /**< ASN.1 four-two */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_one = 6, /**< ASN.1 eight-one */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_three = 7, /**< ASN.1 four-three */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_six_two = 8, /**< ASN.1 six-two */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_twelve_one = 9, /**< ASN.1 twelve-one */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_four_four = 10, /**< ASN.1 four-four */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_eight_two = 11, /**< ASN.1 eight-two */
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag_sixteen_one = 12, /**< ASN.1 sixteen-one */
} CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag;

struct CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16 {
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_one; /**< ASN.1 two-one */
        BitString two_two; /**< ASN.1 two-two */
        BitString four_one; /**< ASN.1 four-one */
        BitString three_two; /**< ASN.1 three-two */
        BitString six_one; /**< ASN.1 six-one */
        BitString four_two; /**< ASN.1 four-two */
        BitString eight_one; /**< ASN.1 eight-one */
        BitString four_three; /**< ASN.1 four-three */
        BitString six_two; /**< ASN.1 six-two */
        BitString twelve_one; /**< ASN.1 twelve-one */
        BitString four_four; /**< ASN.1 four-four */
        BitString eight_two; /**< ASN.1 eight-two */
        BitString sixteen_one; /**< ASN.1 sixteen-one */
    } u;
};


/**
 * @brief CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16
 * @note ASN.1：codebookType/type2/subType/typeII-r16；源文件第 5253 行。
 * @note SEQUENCE { n1-n2-codebookSubsetRestriction-r16, typeII-RI-Restriction-r16 }
 */
struct CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16 {
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16_N1_n2_codebookSubsetRestriction_r16 n1_n2_codebookSubsetRestriction_r16; /**< ASN.1 n1-n2-codebookSubsetRestriction-r16；结构体。 */
    BitString typeII_RI_Restriction_r16; /**< ASN.1 typeII-RI-Restriction-r16；SIZE (4)，定长。 */
};


/**
 * @brief CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16
 * @note ASN.1：codebookType/type2/subType/typeII-PortSelection-r16；源文件第 5271 行。
 * @note SEQUENCE { portSelectionSamplingSize-r16, typeII-PortSelectionRI-Restriction-...
 */
struct CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16 {
    CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16_PortSelectionSamplingSize_r16 portSelectionSamplingSize_r16; /**< ASN.1 portSelectionSamplingSize-r16；枚举。 */
    BitString typeII_PortSelectionRI_Restriction_r16; /**< ASN.1 typeII-PortSelectionRI-Restriction-r16；SIZE (4)，定长。 */
};


/**
 * @brief CodebookConfig_r16_CodebookType_Type2_SubType
 * @note ASN.1：codebookType/type2/subType；源文件第 5252 行。
 * @note CHOICE { typeII-r16, typeII-PortSelection-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r16_CodebookType_Type2_SubType_Tag {
    CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_r16 = 0, /**< ASN.1 typeII-r16 */
    CodebookConfig_r16_CodebookType_Type2_SubType_Tag_typeII_PortSelection_r16 = 1, /**< ASN.1 typeII-PortSelection-r16 */
} CodebookConfig_r16_CodebookType_Type2_SubType_Tag;

struct CodebookConfig_r16_CodebookType_Type2_SubType {
    CodebookConfig_r16_CodebookType_Type2_SubType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_r16 typeII_r16; /**< ASN.1 typeII-r16 */
        CodebookConfig_r16_CodebookType_Type2_SubType_TypeII_PortSelection_r16 typeII_PortSelection_r16; /**< ASN.1 typeII-PortSelection-r16 */
    } u;
};


/**
 * @brief CodebookConfig_r16_CodebookType_Type2
 * @note ASN.1：codebookType/type2；源文件第 5251 行。
 * @note SEQUENCE { subType, numberOfPMI-SubbandsPerCQI-Subband-r16, paramCombination-...
 */
struct CodebookConfig_r16_CodebookType_Type2 {
    CodebookConfig_r16_CodebookType_Type2_SubType subType; /**< ASN.1 subType；结构体。 */
    int64_t numberOfPMI_SubbandsPerCQI_Subband_r16; /**< ASN.1 numberOfPMI-SubbandsPerCQI-Subband-r16；INTEGER (1..2)，位宽 1 bit。 */
    int64_t paramCombination_r16; /**< ASN.1 paramCombination-r16；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief CodebookConfig_r16_CodebookType
 * @note ASN.1：codebookType；源文件第 5250 行。
 * @note CHOICE { type2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r16_CodebookType_Tag {
    CodebookConfig_r16_CodebookType_Tag_type2 = 0, /**< ASN.1 type2 */
} CodebookConfig_r16_CodebookType_Tag;

struct CodebookConfig_r16_CodebookType {
    CodebookConfig_r16_CodebookType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r16_CodebookType_Type2 type2; /**< ASN.1 type2 */
    } u;
};


/**
 * @brief CodebookConfig_r16
 * @note ASN.1：CodebookConfig-r16；源文件第 5249 行。
 * @note CodebookConfig-r16 ::= SEQUENCE { codebookType }
 */
struct CodebookConfig_r16 {
    CodebookConfig_r16_CodebookType codebookType; /**< ASN.1 codebookType；结构体。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group1-r17/nrOfAntennaPorts/two；源文件第 5287 行。
 * @note SEQUENCE { twoTX-CodebookSubsetRestriction1-r17 }
 */
struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two {
    BitString twoTX_CodebookSubsetRestriction1_r17; /**< ASN.1 twoTX-CodebookSubsetRestriction1-r17；SIZE (6)，定长。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group1-r17/nrOfAntennaPorts/moreThanTwo/n1-n2；源文件第 5291 行。
 * @note CHOICE { two-one-TypeI-SinglePanel-Restriction1-r17, two-two-TypeI-SinglePane...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction1_r17 = 0, /**< ASN.1 two-one-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction1_r17 = 1, /**< ASN.1 two-two-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction1_r17 = 2, /**< ASN.1 four-one-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction1_r17 = 3, /**< ASN.1 three-two-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction1_r17 = 4, /**< ASN.1 six-one-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction1_r17 = 5, /**< ASN.1 four-two-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction1_r17 = 6, /**< ASN.1 eight-one-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction1_r17 = 7, /**< ASN.1 four-three-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction1_r17 = 8, /**< ASN.1 six-two-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction1_r17 = 9, /**< ASN.1 twelve-one-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction1_r17 = 10, /**< ASN.1 four-four-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction1_r17 = 11, /**< ASN.1 eight-two-TypeI-SinglePanel-Restriction1-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction1_r17 = 12, /**< ASN.1 sixteen-one-TypeI-SinglePanel-Restriction1-r17 */
} CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag;

struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2 {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_one_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 two-one-TypeI-SinglePanel-Restriction1-r17 */
        BitString two_two_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 two-two-TypeI-SinglePanel-Restriction1-r17 */
        BitString four_one_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 four-one-TypeI-SinglePanel-Restriction1-r17 */
        BitString three_two_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 three-two-TypeI-SinglePanel-Restriction1-r17 */
        BitString six_one_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 six-one-TypeI-SinglePanel-Restriction1-r17 */
        BitString four_two_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 four-two-TypeI-SinglePanel-Restriction1-r17 */
        BitString eight_one_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 eight-one-TypeI-SinglePanel-Restriction1-r17 */
        BitString four_three_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 four-three-TypeI-SinglePanel-Restriction1-r17 */
        BitString six_two_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 six-two-TypeI-SinglePanel-Restriction1-r17 */
        BitString twelve_one_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 twelve-one-TypeI-SinglePanel-Restriction1-r17 */
        BitString four_four_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 four-four-TypeI-SinglePanel-Restriction1-r17 */
        BitString eight_two_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 eight-two-TypeI-SinglePanel-Restriction1-r17 */
        BitString sixteen_one_TypeI_SinglePanel_Restriction1_r17; /**< ASN.1 sixteen-one-TypeI-SinglePanel-Restriction1-r17 */
    } u;
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group1-r17/nrOfAntennaPorts/moreThanTwo；源文件第 5290 行。
 * @note SEQUENCE { n1-n2 }
 */
struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2 n1_n2; /**< ASN.1 n1-n2；结构体。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group1-r17/nrOfAntennaPorts；源文件第 5286 行。
 * @note CHOICE { two, moreThanTwo }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_two = 0, /**< ASN.1 two */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag_moreThanTwo = 1, /**< ASN.1 moreThanTwo */
} CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag;

struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_Two two; /**< ASN.1 two */
        CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts_MoreThanTwo moreThanTwo; /**< ASN.1 moreThanTwo */
    } u;
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group1-r17；源文件第 5285 行。
 * @note SEQUENCE { nrOfAntennaPorts }
 */
struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17 {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17_NrOfAntennaPorts nrOfAntennaPorts; /**< ASN.1 nrOfAntennaPorts；结构体。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group2-r17/nrOfAntennaPorts/two；源文件第 5311 行。
 * @note SEQUENCE { twoTX-CodebookSubsetRestriction2-r17 }
 */
struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two {
    BitString twoTX_CodebookSubsetRestriction2_r17; /**< ASN.1 twoTX-CodebookSubsetRestriction2-r17；SIZE (6)，定长。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group2-r17/nrOfAntennaPorts/moreThanTwo/n1-n2；源文件第 5315 行。
 * @note CHOICE { two-one-TypeI-SinglePanel-Restriction2-r17, two-two-TypeI-SinglePane...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_one_TypeI_SinglePanel_Restriction2_r17 = 0, /**< ASN.1 two-one-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_two_two_TypeI_SinglePanel_Restriction2_r17 = 1, /**< ASN.1 two-two-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_one_TypeI_SinglePanel_Restriction2_r17 = 2, /**< ASN.1 four-one-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_three_two_TypeI_SinglePanel_Restriction2_r17 = 3, /**< ASN.1 three-two-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_one_TypeI_SinglePanel_Restriction2_r17 = 4, /**< ASN.1 six-one-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_two_TypeI_SinglePanel_Restriction2_r17 = 5, /**< ASN.1 four-two-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_one_TypeI_SinglePanel_Restriction2_r17 = 6, /**< ASN.1 eight-one-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_three_TypeI_SinglePanel_Restriction2_r17 = 7, /**< ASN.1 four-three-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_six_two_TypeI_SinglePanel_Restriction2_r17 = 8, /**< ASN.1 six-two-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_twelve_one_TypeI_SinglePanel_Restriction2_r17 = 9, /**< ASN.1 twelve-one-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_four_four_TypeI_SinglePanel_Restriction2_r17 = 10, /**< ASN.1 four-four-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_eight_two_TypeI_SinglePanel_Restriction2_r17 = 11, /**< ASN.1 eight-two-TypeI-SinglePanel-Restriction2-r17 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag_sixteen_one_TypeI_SinglePanel_Restriction2_r17 = 12, /**< ASN.1 sixteen-one-TypeI-SinglePanel-Restriction2-r17 */
} CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag;

struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2 {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_one_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 two-one-TypeI-SinglePanel-Restriction2-r17 */
        BitString two_two_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 two-two-TypeI-SinglePanel-Restriction2-r17 */
        BitString four_one_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 four-one-TypeI-SinglePanel-Restriction2-r17 */
        BitString three_two_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 three-two-TypeI-SinglePanel-Restriction2-r17 */
        BitString six_one_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 six-one-TypeI-SinglePanel-Restriction2-r17 */
        BitString four_two_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 four-two-TypeI-SinglePanel-Restriction2-r17 */
        BitString eight_one_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 eight-one-TypeI-SinglePanel-Restriction2-r17 */
        BitString four_three_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 four-three-TypeI-SinglePanel-Restriction2-r17 */
        BitString six_two_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 six-two-TypeI-SinglePanel-Restriction2-r17 */
        BitString twelve_one_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 twelve-one-TypeI-SinglePanel-Restriction2-r17 */
        BitString four_four_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 four-four-TypeI-SinglePanel-Restriction2-r17 */
        BitString eight_two_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 eight-two-TypeI-SinglePanel-Restriction2-r17 */
        BitString sixteen_one_TypeI_SinglePanel_Restriction2_r17; /**< ASN.1 sixteen-one-TypeI-SinglePanel-Restriction2-r17 */
    } u;
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group2-r17/nrOfAntennaPorts/moreThanTwo；源文件第 5314 行。
 * @note SEQUENCE { n1-n2 }
 */
struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo_N1_n2 n1_n2; /**< ASN.1 n1-n2；结构体。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group2-r17/nrOfAntennaPorts；源文件第 5310 行。
 * @note CHOICE { two, moreThanTwo }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_two = 0, /**< ASN.1 two */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag_moreThanTwo = 1, /**< ASN.1 moreThanTwo */
} CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag;

struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_Two two; /**< ASN.1 two */
        CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts_MoreThanTwo moreThanTwo; /**< ASN.1 moreThanTwo */
    } u;
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17
 * @note ASN.1：codebookType/type1/typeI-SinglePanel-Group2-r17；源文件第 5309 行。
 * @note SEQUENCE { nrOfAntennaPorts }
 */
struct CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17 {
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17_NrOfAntennaPorts nrOfAntennaPorts; /**< ASN.1 nrOfAntennaPorts；结构体。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type1
 * @note ASN.1：codebookType/type1；源文件第 5284 行。
 * @note SEQUENCE { typeI-SinglePanel-Group1-r17, typeI-SinglePanel-Group2-r17, typeI-...
 */
struct CodebookConfig_r17_CodebookType_Type1 {
    bool has_typeI_SinglePanel_Group1_r17; /**< typeI-SinglePanel-Group1-r17 是否存在。 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group1_r17 typeI_SinglePanel_Group1_r17; /**< ASN.1 typeI-SinglePanel-Group1-r17；结构体；OPTIONAL。 */
    bool has_typeI_SinglePanel_Group2_r17; /**< typeI-SinglePanel-Group2-r17 是否存在。 */
    CodebookConfig_r17_CodebookType_Type1_TypeI_SinglePanel_Group2_r17 typeI_SinglePanel_Group2_r17; /**< ASN.1 typeI-SinglePanel-Group2-r17；结构体；OPTIONAL。 */
    bool has_typeI_SinglePanel_ri_RestrictionSTRP_r17; /**< typeI-SinglePanel-ri-RestrictionSTRP-r17 是否存在。 */
    BitString typeI_SinglePanel_ri_RestrictionSTRP_r17; /**< ASN.1 typeI-SinglePanel-ri-RestrictionSTRP-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_typeI_SinglePanel_ri_RestrictionSDM_r17; /**< typeI-SinglePanel-ri-RestrictionSDM-r17 是否存在。 */
    BitString typeI_SinglePanel_ri_RestrictionSDM_r17; /**< ASN.1 typeI-SinglePanel-ri-RestrictionSDM-r17；SIZE (4)，定长；OPTIONAL。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17
 * @note ASN.1：codebookType/type2/typeII-PortSelection-r17；源文件第 5337 行。
 * @note SEQUENCE { paramCombination-r17, valueOfN-r17, numberOfPMI-SubbandsPerCQI-Sub...
 */
struct CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17 {
    int64_t paramCombination_r17; /**< ASN.1 paramCombination-r17；INTEGER (1..8)，位宽 3 bit。 */
    bool has_valueOfN_r17; /**< valueOfN-r17 是否存在。 */
    CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17_ValueOfN_r17 valueOfN_r17; /**< ASN.1 valueOfN-r17；枚举；OPTIONAL。 */
    bool has_numberOfPMI_SubbandsPerCQI_Subband_r17; /**< numberOfPMI-SubbandsPerCQI-Subband-r17 是否存在。 */
    int64_t numberOfPMI_SubbandsPerCQI_Subband_r17; /**< ASN.1 numberOfPMI-SubbandsPerCQI-Subband-r17；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    BitString typeII_PortSelectionRI_Restriction_r17; /**< ASN.1 typeII-PortSelectionRI-Restriction-r17；SIZE (4)，定长。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType_Type2
 * @note ASN.1：codebookType/type2；源文件第 5336 行。
 * @note SEQUENCE { typeII-PortSelection-r17 }
 */
struct CodebookConfig_r17_CodebookType_Type2 {
    CodebookConfig_r17_CodebookType_Type2_TypeII_PortSelection_r17 typeII_PortSelection_r17; /**< ASN.1 typeII-PortSelection-r17；结构体。 */
};


/**
 * @brief CodebookConfig_r17_CodebookType
 * @note ASN.1：codebookType；源文件第 5283 行。
 * @note CHOICE { type1, type2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r17_CodebookType_Tag {
    CodebookConfig_r17_CodebookType_Tag_type1 = 0, /**< ASN.1 type1 */
    CodebookConfig_r17_CodebookType_Tag_type2 = 1, /**< ASN.1 type2 */
} CodebookConfig_r17_CodebookType_Tag;

struct CodebookConfig_r17_CodebookType {
    CodebookConfig_r17_CodebookType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r17_CodebookType_Type1 type1; /**< ASN.1 type1 */
        CodebookConfig_r17_CodebookType_Type2 type2; /**< ASN.1 type2 */
    } u;
};


/**
 * @brief CodebookConfig_r17
 * @note ASN.1：CodebookConfig-r17；源文件第 5282 行。
 * @note CodebookConfig-r17 ::= SEQUENCE { codebookType }
 */
struct CodebookConfig_r17 {
    CodebookConfig_r17_CodebookType codebookType; /**< ASN.1 codebookType；结构体。 */
};


/**
 * @brief CodebookConfig_v1730_CodebookType_Type1
 * @note ASN.1：codebookType/type1；源文件第 5349 行。
 * @note SEQUENCE { codebookMode }
 */
struct CodebookConfig_v1730_CodebookType_Type1 {
    bool has_codebookMode; /**< codebookMode 是否存在。 */
    int64_t codebookMode; /**< ASN.1 codebookMode；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief CodebookConfig_v1730_CodebookType
 * @note ASN.1：codebookType；源文件第 5348 行。
 * @note CHOICE { type1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_v1730_CodebookType_Tag {
    CodebookConfig_v1730_CodebookType_Tag_type1 = 0, /**< ASN.1 type1 */
} CodebookConfig_v1730_CodebookType_Tag;

struct CodebookConfig_v1730_CodebookType {
    CodebookConfig_v1730_CodebookType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_v1730_CodebookType_Type1 type1; /**< ASN.1 type1 */
    } u;
};


/**
 * @brief CodebookConfig_v1730
 * @note ASN.1：CodebookConfig-v1730；源文件第 5347 行。
 * @note CodebookConfig-v1730 ::= SEQUENCE { codebookType }
 */
struct CodebookConfig_v1730 {
    CodebookConfig_v1730_CodebookType codebookType; /**< ASN.1 codebookType；结构体。 */
};


/**
 * @brief CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18
 * @note ASN.1：codebookType/type2/typeII-CJT-r18；源文件第 5358 行。
 * @note SEQUENCE { n1-n2-codebookSubsetRestrictionList-r18, paramCombination-CJT-r18,...
 */
struct CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18 {
    CBSR_r18* n1_n2_codebookSubsetRestrictionList_r18_items; /**< ASN.1 n1-n2-codebookSubsetRestrictionList-r18；SEQUENCE OF CBSR_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t n1_n2_codebookSubsetRestrictionList_r18_count; /**< n1-n2-codebookSubsetRestrictionList-r18 元素个数。 */
    int64_t paramCombination_CJT_r18; /**< ASN.1 paramCombination-CJT-r18；INTEGER (1..7)，位宽 3 bit。 */
    int64_t* paramCombination_CJT_L_r18_items; /**< ASN.1 paramCombination-CJT-L-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t paramCombination_CJT_L_r18_count; /**< paramCombination-CJT-L-r18 元素个数。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_RestrictedCMR_Selection_r18 restrictedCMR_Selection_r18; /**< ASN.1 restrictedCMR-Selection-r18；枚举。 */
    bool has_valueOfO3_r18; /**< valueOfO3-r18 是否存在。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18_ValueOfO3_r18 valueOfO3_r18; /**< ASN.1 valueOfO3-r18；枚举；OPTIONAL。 */
    int64_t numberOfPMI_SubbandsPerCQI_Subband_r18; /**< ASN.1 numberOfPMI-SubbandsPerCQI-Subband-r18；INTEGER (1..2)，位宽 1 bit。 */
    BitString typeII_RI_Restriction_r18; /**< ASN.1 typeII-RI-Restriction-r18；SIZE (4)，定长。 */
    int64_t codebookMode_r18; /**< ASN.1 codebookMode-r18；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18
 * @note ASN.1：codebookType/type2/typeII-CJT-PortSelection-r18；源文件第 5368 行。
 * @note SEQUENCE { paramCombination-CJT-PS-r18, paramCombination-CJT-PS-alpha-r18, re...
 */
struct CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18 {
    int64_t paramCombination_CJT_PS_r18; /**< ASN.1 paramCombination-CJT-PS-r18；INTEGER (1..5)，位宽 3 bit。 */
    int64_t* paramCombination_CJT_PS_alpha_r18_items; /**< ASN.1 paramCombination-CJT-PS-alpha-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t paramCombination_CJT_PS_alpha_r18_count; /**< paramCombination-CJT-PS-alpha-r18 元素个数。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_RestrictedCMR_Selection_r18 restrictedCMR_Selection_r18; /**< ASN.1 restrictedCMR-Selection-r18；枚举。 */
    bool has_valueOfO3_r18; /**< valueOfO3-r18 是否存在。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfO3_r18 valueOfO3_r18; /**< ASN.1 valueOfO3-r18；枚举；OPTIONAL。 */
    bool has_valueOfN_CJT_r18; /**< valueOfN-CJT-r18 是否存在。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18_ValueOfN_CJT_r18 valueOfN_CJT_r18; /**< ASN.1 valueOfN-CJT-r18；枚举；OPTIONAL。 */
    int64_t numberOfPMI_SubbandsPerCQI_Subband_r18; /**< ASN.1 numberOfPMI-SubbandsPerCQI-Subband-r18；INTEGER (1..2)，位宽 1 bit。 */
    BitString typeII_PortSelectionRI_Restriction_r18; /**< ASN.1 typeII-PortSelectionRI-Restriction-r18；SIZE (4)，定长。 */
    int64_t codebookMode_r18; /**< ASN.1 codebookMode-r18；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief CBSR_r18
 * @note ASN.1：CBSR-r18；源文件第 5398 行。
 * @note CBSR-r18 ::= CHOICE { two-one, two-two, four-one, three-two, six-one, four-two, eight-one,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CBSR_r18_Tag {
    CBSR_r18_Tag_two_one = 0, /**< ASN.1 two-one */
    CBSR_r18_Tag_two_two = 1, /**< ASN.1 two-two */
    CBSR_r18_Tag_four_one = 2, /**< ASN.1 four-one */
    CBSR_r18_Tag_three_two = 3, /**< ASN.1 three-two */
    CBSR_r18_Tag_six_one = 4, /**< ASN.1 six-one */
    CBSR_r18_Tag_four_two = 5, /**< ASN.1 four-two */
    CBSR_r18_Tag_eight_one = 6, /**< ASN.1 eight-one */
    CBSR_r18_Tag_four_three = 7, /**< ASN.1 four-three */
    CBSR_r18_Tag_six_two = 8, /**< ASN.1 six-two */
    CBSR_r18_Tag_twelve_one = 9, /**< ASN.1 twelve-one */
    CBSR_r18_Tag_four_four = 10, /**< ASN.1 four-four */
    CBSR_r18_Tag_eight_two = 11, /**< ASN.1 eight-two */
    CBSR_r18_Tag_sixteen_one = 12, /**< ASN.1 sixteen-one */
} CBSR_r18_Tag;

struct CBSR_r18 {
    CBSR_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString two_one; /**< ASN.1 two-one */
        BitString two_two; /**< ASN.1 two-two */
        BitString four_one; /**< ASN.1 four-one */
        BitString three_two; /**< ASN.1 three-two */
        BitString six_one; /**< ASN.1 six-one */
        BitString four_two; /**< ASN.1 four-two */
        BitString eight_one; /**< ASN.1 eight-one */
        BitString four_three; /**< ASN.1 four-three */
        BitString six_two; /**< ASN.1 six-two */
        BitString twelve_one; /**< ASN.1 twelve-one */
        BitString four_four; /**< ASN.1 four-four */
        BitString eight_two; /**< ASN.1 eight-two */
        BitString sixteen_one; /**< ASN.1 sixteen-one */
    } u;
};


/**
 * @brief TD_DD_Config_r18
 * @note ASN.1：TD-DD-Config-r18；源文件第 5414 行。
 * @note TD-DD-Config-r18 ::= SEQUENCE { vectorLengthDD-r18, unitDurationDD-r18, aperiodicResourceOffset-r1...
 */
struct TD_DD_Config_r18 {
    TD_DD_Config_r18_VectorLengthDD_r18 vectorLengthDD_r18; /**< ASN.1 vectorLengthDD-r18；枚举。 */
    bool has_unitDurationDD_r18; /**< unitDurationDD-r18 是否存在。 */
    TD_DD_Config_r18_UnitDurationDD_r18 unitDurationDD_r18; /**< ASN.1 unitDurationDD-r18；枚举；OPTIONAL。 */
    bool has_aperiodicResourceOffset_r18; /**< aperiodicResourceOffset-r18 是否存在。 */
    int64_t aperiodicResourceOffset_r18; /**< ASN.1 aperiodicResourceOffset-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_tdCQI_r18; /**< tdCQI-r18 是否存在。 */
    TD_DD_Config_r18_TdCQI_r18 tdCQI_r18; /**< ASN.1 tdCQI-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18
 * @note ASN.1：codebookType/type2/typeII-Doppler-r18；源文件第 5378 行。
 * @note SEQUENCE { n1-n2-codebookSubsetRestriction-r18, paramCombination-Doppler-r18,...
 */
struct CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18 {
    CBSR_r18 n1_n2_codebookSubsetRestriction_r18; /**< ASN.1 n1-n2-codebookSubsetRestriction-r18；结构体。 */
    int64_t paramCombination_Doppler_r18; /**< ASN.1 paramCombination-Doppler-r18；INTEGER (1..9)，位宽 4 bit。 */
    TD_DD_Config_r18 td_dd_config_r18; /**< ASN.1 td-dd-config-r18；结构体。 */
    int64_t numberOfPMI_SubbandsPerCQI_Subband_r18; /**< ASN.1 numberOfPMI-SubbandsPerCQI-Subband-r18；INTEGER (1..2)，位宽 1 bit。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18_PredictionDelay_r18 predictionDelay_r18; /**< ASN.1 predictionDelay-r18；枚举。 */
    BitString typeII_RI_Restriction_r18; /**< ASN.1 typeII-RI-Restriction-r18；SIZE (4)，定长。 */
};


/**
 * @brief CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18
 * @note ASN.1：codebookType/type2/typeII-DopplerPortSelection-r18；源文件第 5386 行。
 * @note SEQUENCE { paramCombinationDoppler-PS-r18, td-dd-config-r18, valueOfN-Doppler...
 */
struct CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18 {
    int64_t paramCombinationDoppler_PS_r18; /**< ASN.1 paramCombinationDoppler-PS-r18；INTEGER (1..8)，位宽 3 bit。 */
    TD_DD_Config_r18 td_dd_config_r18; /**< ASN.1 td-dd-config-r18；结构体。 */
    bool has_valueOfN_Doppler_r18; /**< valueOfN-Doppler-r18 是否存在。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_ValueOfN_Doppler_r18 valueOfN_Doppler_r18; /**< ASN.1 valueOfN-Doppler-r18；枚举；OPTIONAL。 */
    int64_t numberOfPMI_SubbandsPerCQI_Subband_r18; /**< ASN.1 numberOfPMI-SubbandsPerCQI-Subband-r18；INTEGER (1..2)，位宽 1 bit。 */
    CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18_PredictionDelay_r18 predictionDelay_r18; /**< ASN.1 predictionDelay-r18；枚举。 */
    BitString typeII_PortSelectionRI_Restriction_r18; /**< ASN.1 typeII-PortSelectionRI-Restriction-r18；SIZE (4)，定长。 */
};


/**
 * @brief CodebookConfig_r18_CodebookType_Type2
 * @note ASN.1：codebookType/type2；源文件第 5357 行。
 * @note CHOICE { typeII-CJT-r18, typeII-CJT-PortSelection-r18, typeII-Doppler-r18, ty...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r18_CodebookType_Type2_Tag {
    CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_r18 = 0, /**< ASN.1 typeII-CJT-r18 */
    CodebookConfig_r18_CodebookType_Type2_Tag_typeII_CJT_PortSelection_r18 = 1, /**< ASN.1 typeII-CJT-PortSelection-r18 */
    CodebookConfig_r18_CodebookType_Type2_Tag_typeII_Doppler_r18 = 2, /**< ASN.1 typeII-Doppler-r18 */
    CodebookConfig_r18_CodebookType_Type2_Tag_typeII_DopplerPortSelection_r18 = 3, /**< ASN.1 typeII-DopplerPortSelection-r18 */
} CodebookConfig_r18_CodebookType_Type2_Tag;

struct CodebookConfig_r18_CodebookType_Type2 {
    CodebookConfig_r18_CodebookType_Type2_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_r18 typeII_CJT_r18; /**< ASN.1 typeII-CJT-r18 */
        CodebookConfig_r18_CodebookType_Type2_TypeII_CJT_PortSelection_r18 typeII_CJT_PortSelection_r18; /**< ASN.1 typeII-CJT-PortSelection-r18 */
        CodebookConfig_r18_CodebookType_Type2_TypeII_Doppler_r18 typeII_Doppler_r18; /**< ASN.1 typeII-Doppler-r18 */
        CodebookConfig_r18_CodebookType_Type2_TypeII_DopplerPortSelection_r18 typeII_DopplerPortSelection_r18; /**< ASN.1 typeII-DopplerPortSelection-r18 */
    } u;
};


/**
 * @brief CodebookConfig_r18_CodebookType
 * @note ASN.1：codebookType；源文件第 5356 行。
 * @note CHOICE { type2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookConfig_r18_CodebookType_Tag {
    CodebookConfig_r18_CodebookType_Tag_type2 = 0, /**< ASN.1 type2 */
} CodebookConfig_r18_CodebookType_Tag;

struct CodebookConfig_r18_CodebookType {
    CodebookConfig_r18_CodebookType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookConfig_r18_CodebookType_Type2 type2; /**< ASN.1 type2 */
    } u;
};


/**
 * @brief CodebookConfig_r18
 * @note ASN.1：CodebookConfig-r18；源文件第 5355 行。
 * @note CodebookConfig-r18 ::= SEQUENCE { codebookType }
 */
struct CodebookConfig_r18 {
    CodebookConfig_r18_CodebookType codebookType; /**< ASN.1 codebookType；结构体。 */
};


/**
 * @brief CondReconfigToAddMod_r16_ExtGroup1
 * @note ASN.1：CondReconfigToAddMod_r16_ExtGroup1；源文件第 5448 行。
 */
struct CondReconfigToAddMod_r16_ExtGroup1 {
    CondReconfigExecCondSCG_r17* condExecutionCondSCG_r17; /**< ASN.1 condExecutionCondSCG-r17；OCTET STRING (CONTAINING CondReconfigExecCondSCG_r17)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
};


/**
 * @brief CondExecutionCondToAddModList_r18
 * @note ASN.1：CondExecutionCondToAddModList-r18；源文件第 5467 行。
 * @note CondExecutionCondToAddModList-r18 ::= SEQUENCE OF (size 1..8) OF CondExecutionCondToAddMod-r18
 */
struct CondExecutionCondToAddModList_r18 {
    CondExecutionCondToAddMod_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CondExecutionCondToReleaseList_r18
 * @note ASN.1：CondExecutionCondToReleaseList-r18；源文件第 5476 行。
 * @note CondExecutionCondToReleaseList-r18 ::= SEQUENCE OF (size 1..8) OF CondReconfigId-r16
 */
struct CondExecutionCondToReleaseList_r18 {
    CondReconfigId_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SubsequentCondReconfig_r18
 * @note ASN.1：SubsequentCondReconfig-r18；源文件第 5461 行。
 * @note SubsequentCondReconfig-r18 ::= SEQUENCE { condExecutionCondToReleaseList-r18, condExecutionCondToAddModList-...
 */
struct SubsequentCondReconfig_r18 {
    bool has_condExecutionCondToReleaseList_r18; /**< condExecutionCondToReleaseList-r18 是否存在。 */
    CondExecutionCondToReleaseList_r18 condExecutionCondToReleaseList_r18; /**< ASN.1 condExecutionCondToReleaseList-r18；SEQUENCE OF CondReconfigId_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_condExecutionCondToAddModList_r18; /**< condExecutionCondToAddModList-r18 是否存在。 */
    CondExecutionCondToAddModList_r18 condExecutionCondToAddModList_r18; /**< ASN.1 condExecutionCondToAddModList-r18；SEQUENCE OF CondExecutionCondToAddMod_r18，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief CondReconfigToAddMod_r16_ExtGroup2
 * @note ASN.1：CondReconfigToAddMod_r16_ExtGroup2；源文件第 5451 行。
 */
struct CondReconfigToAddMod_r16_ExtGroup2 {
    bool has_condExecutionCondPSCell_r18; /**< condExecutionCondPSCell-r18 是否存在。 */
    MeasId* condExecutionCondPSCell_r18_items; /**< ASN.1 condExecutionCondPSCell-r18；SEQUENCE OF MeasId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t condExecutionCondPSCell_r18_count; /**< condExecutionCondPSCell-r18 元素个数。 */
    bool has_subsequentCondReconfig_r18; /**< subsequentCondReconfig-r18 是否存在。 */
    SubsequentCondReconfig_r18 subsequentCondReconfig_r18; /**< ASN.1 subsequentCondReconfig-r18；结构体；OPTIONAL。 */
    bool has_securityCellSetId_r18; /**< securityCellSetId-r18 是否存在。 */
    SecurityCellSetId_r18 securityCellSetId_r18; /**< ASN.1 securityCellSetId-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_scpac_ConfigComplete_r18; /**< scpac-ConfigComplete-r18 是否存在。 */
    CondReconfigToAddMod_r16_ExtGroup2_Scpac_ConfigComplete_r18 scpac_ConfigComplete_r18; /**< ASN.1 scpac-ConfigComplete-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CondReconfigToAddMod_r16
 * @note ASN.1：CondReconfigToAddMod-r16；源文件第 5443 行。
 * @note CondReconfigToAddMod-r16 ::= SEQUENCE { condReconfigId-r16, condExecutionCond-r16, condRRCReconfig-r16, co...
 */
struct CondReconfigToAddMod_r16 {
    CondReconfigId_r16 condReconfigId_r16; /**< ASN.1 condReconfigId-r16；INTEGER (1..8)，位宽 3 bit。 */
    bool has_condExecutionCond_r16; /**< condExecutionCond-r16 是否存在。 */
    MeasId* condExecutionCond_r16_items; /**< ASN.1 condExecutionCond-r16；SEQUENCE OF MeasId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t condExecutionCond_r16_count; /**< condExecutionCond-r16 元素个数。 */
    RRCReconfiguration* condRRCReconfig_r16; /**< ASN.1 condRRCReconfig-r16；OCTET STRING (CONTAINING RRCReconfiguration)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CondReconfigToAddMod_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CondReconfigToAddMod_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CondReconfigExecCondSCG_r17
 * @note ASN.1：CondReconfigExecCondSCG-r17；源文件第 5459 行。
 * @note CondReconfigExecCondSCG-r17 ::= SEQUENCE OF (size 1..2) OF MeasId
 */
struct CondReconfigExecCondSCG_r17 {
    MeasId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CondExecutionCondToAddMod_r18
 * @note ASN.1：CondExecutionCondToAddMod-r18；源文件第 5469 行。
 * @note CondExecutionCondToAddMod-r18 ::= SEQUENCE { subsequentCondReconfigId-r18, subsequentCondExecutionCond-r18, sub...
 */
struct CondExecutionCondToAddMod_r18 {
    CondReconfigId_r16 subsequentCondReconfigId_r18; /**< ASN.1 subsequentCondReconfigId-r18；INTEGER (1..8)，位宽 3 bit。 */
    bool has_subsequentCondExecutionCond_r18; /**< subsequentCondExecutionCond-r18 是否存在。 */
    MeasId* subsequentCondExecutionCond_r18_items; /**< ASN.1 subsequentCondExecutionCond-r18；SEQUENCE OF MeasId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t subsequentCondExecutionCond_r18_count; /**< subsequentCondExecutionCond-r18 元素个数。 */
    CondReconfigExecCondSCG_r17* subsequentCondExecutionCondSCG_r18; /**< ASN.1 subsequentCondExecutionCondSCG-r18；OCTET STRING (CONTAINING CondReconfigExecCondSCG_r17)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
};


/**
 * @brief SK_CounterConfig_r18
 * @note ASN.1：SK-CounterConfig-r18；源文件第 5500 行。
 * @note SK-CounterConfig-r18 ::= SEQUENCE { securityCellSetId-r18, sk-CounterList-r18 }
 */
struct SK_CounterConfig_r18 {
    SecurityCellSetId_r18 securityCellSetId_r18; /**< ASN.1 securityCellSetId-r18；INTEGER (1..9)，位宽 4 bit。 */
    SK_Counter* sk_CounterList_r18_items; /**< ASN.1 sk-CounterList-r18；SEQUENCE OF SK_Counter，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sk_CounterList_r18_count; /**< sk-CounterList-r18 元素个数。 */
};


/**
 * @brief CG_COT_Sharing_r16_Cot_Sharing_r16
 * @note ASN.1：cot-Sharing-r16；源文件第 5641 行。
 * @note SEQUENCE { duration-r16, offset-r16, channelAccessPriority-r16 }
 */
struct CG_COT_Sharing_r16_Cot_Sharing_r16 {
    int64_t duration_r16; /**< ASN.1 duration-r16；INTEGER (1..39)，位宽 6 bit。 */
    int64_t offset_r16; /**< ASN.1 offset-r16；INTEGER (1..39)，位宽 6 bit。 */
    int64_t channelAccessPriority_r16; /**< ASN.1 channelAccessPriority-r16；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief CG_COT_Sharing_r16
 * @note ASN.1：CG-COT-Sharing-r16；源文件第 5639 行。
 * @note CG-COT-Sharing-r16 ::= CHOICE { noCOT-Sharing-r16, cot-Sharing-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_COT_Sharing_r16_Tag {
    CG_COT_Sharing_r16_Tag_noCOT_Sharing_r16 = 0, /**< ASN.1 noCOT-Sharing-r16 */
    CG_COT_Sharing_r16_Tag_cot_Sharing_r16 = 1, /**< ASN.1 cot-Sharing-r16 */
} CG_COT_Sharing_r16_Tag;

struct CG_COT_Sharing_r16 {
    CG_COT_Sharing_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null noCOT_Sharing_r16; /**< ASN.1 noCOT-Sharing-r16 */
        CG_COT_Sharing_r16_Cot_Sharing_r16 cot_Sharing_r16; /**< ASN.1 cot-Sharing-r16 */
    } u;
};


/**
 * @brief CG_COT_Sharing_r17_Cot_Sharing_r17
 * @note ASN.1：cot-Sharing-r17；源文件第 5650 行。
 * @note SEQUENCE { duration-r17, offset-r17 }
 */
struct CG_COT_Sharing_r17_Cot_Sharing_r17 {
    int64_t duration_r17; /**< ASN.1 duration-r17；INTEGER (1..319)，位宽 9 bit。 */
    int64_t offset_r17; /**< ASN.1 offset-r17；INTEGER (1..319)，位宽 9 bit。 */
};


/**
 * @brief CG_COT_Sharing_r17
 * @note ASN.1：CG-COT-Sharing-r17；源文件第 5648 行。
 * @note CG-COT-Sharing-r17 ::= CHOICE { noCOT-Sharing-r17, cot-Sharing-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CG_COT_Sharing_r17_Tag {
    CG_COT_Sharing_r17_Tag_noCOT_Sharing_r17 = 0, /**< ASN.1 noCOT-Sharing-r17 */
    CG_COT_Sharing_r17_Tag_cot_Sharing_r17 = 1, /**< ASN.1 cot-Sharing-r17 */
} CG_COT_Sharing_r17_Tag;

struct CG_COT_Sharing_r17 {
    CG_COT_Sharing_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null noCOT_Sharing_r17; /**< ASN.1 noCOT-Sharing-r17 */
        CG_COT_Sharing_r17_Cot_Sharing_r17 cot_Sharing_r17; /**< ASN.1 cot-Sharing-r17 */
    } u;
};


/**
 * @brief CSI_AperiodicTriggerState_ExtGroup1
 * @note ASN.1：CSI_AperiodicTriggerState_ExtGroup1；源文件第 5806 行。
 */
struct CSI_AperiodicTriggerState_ExtGroup1 {
    bool has_ap_CSI_MultiplexingMode_r17; /**< ap-CSI-MultiplexingMode-r17 是否存在。 */
    CSI_AperiodicTriggerState_ExtGroup1_Ap_CSI_MultiplexingMode_r17 ap_CSI_MultiplexingMode_r17; /**< ASN.1 ap-CSI-MultiplexingMode-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CSI_AperiodicTriggerState_ExtGroup2
 * @note ASN.1：CSI_AperiodicTriggerState_ExtGroup2；源文件第 5809 行。
 */
struct CSI_AperiodicTriggerState_ExtGroup2 {
    bool has_ltm_AssociatedReportConfigInfo_r18; /**< ltm-AssociatedReportConfigInfo-r18 是否存在。 */
    LTM_CSI_ReportConfigId_r18 ltm_AssociatedReportConfigInfo_r18; /**< ASN.1 ltm-AssociatedReportConfigInfo-r18；INTEGER (0..47)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief CSI_AperiodicTriggerState
 * @note ASN.1：CSI-AperiodicTriggerState；源文件第 5803 行。
 * @note CSI-AperiodicTriggerState ::= SEQUENCE { associatedReportConfigInfoList, ap-CSI-MultiplexingMode-r17, ltm-A...
 */
struct CSI_AperiodicTriggerState {
    CSI_AssociatedReportConfigInfo* associatedReportConfigInfoList_items; /**< ASN.1 associatedReportConfigInfoList；SEQUENCE OF CSI_AssociatedReportConfigInfo，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t associatedReportConfigInfoList_count; /**< associatedReportConfigInfoList 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_AperiodicTriggerState_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CSI_AperiodicTriggerState_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17
 * @note ASN.1：resourcesForChannel2-r17/nzp-CSI-RS2-r17；源文件第 5829 行。
 * @note SEQUENCE { resourceSet2-r17, qcl-info2-r17 }
 */
struct CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17 {
    int64_t resourceSet2_r17; /**< ASN.1 resourceSet2-r17；INTEGER (1..16)，位宽 4 bit。 */
    bool has_qcl_info2_r17; /**< qcl-info2-r17 是否存在。 */
    TCI_StateId* qcl_info2_r17_items; /**< ASN.1 qcl-info2-r17；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t qcl_info2_r17_count; /**< qcl-info2-r17 元素个数。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17
 * @note ASN.1：resourcesForChannel2-r17；源文件第 5828 行。
 * @note CHOICE { nzp-CSI-RS2-r17, csi-SSB-ResourceSet2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag {
    CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_nzp_CSI_RS2_r17 = 0, /**< ASN.1 nzp-CSI-RS2-r17 */
    CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag_csi_SSB_ResourceSet2_r17 = 1, /**< ASN.1 csi-SSB-ResourceSet2-r17 */
} CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag;

struct CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17 {
    CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17_Nzp_CSI_RS2_r17 nzp_CSI_RS2_r17; /**< ASN.1 nzp-CSI-RS2-r17 */
        int64_t csi_SSB_ResourceSet2_r17; /**< ASN.1 csi-SSB-ResourceSet2-r17 */
    } u;
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup1
 * @note ASN.1：CSI_AssociatedReportConfigInfo_ExtGroup1；源文件第 5827 行。
 */
struct CSI_AssociatedReportConfigInfo_ExtGroup1 {
    bool has_resourcesForChannel2_r17; /**< resourcesForChannel2-r17 是否存在。 */
    CSI_AssociatedReportConfigInfo_ExtGroup1_ResourcesForChannel2_r17 resourcesForChannel2_r17; /**< ASN.1 resourcesForChannel2-r17；结构体；OPTIONAL。 */
    bool has_csi_SSB_ResourceSetExt; /**< csi-SSB-ResourceSetExt 是否存在。 */
    int64_t csi_SSB_ResourceSetExt; /**< ASN.1 csi-SSB-ResourceSetExt；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief CSI_ReportSubConfigTriggerList_r18
 * @note ASN.1：CSI-ReportSubConfigTriggerList-r18；源文件第 6175 行。
 * @note CSI-ReportSubConfigTriggerList-r18 ::= SEQUENCE OF (size 1..8) OF CSI-ReportSubConfigId-r18
 */
struct CSI_ReportSubConfigTriggerList_r18 {
    CSI_ReportSubConfigId_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18
 * @note ASN.1：resourcesForChannelTDCP-r18；源文件第 5839 行。
 * @note SEQUENCE { resourceSet2TDCP-r18, resourceSet3TDCP-r18 }
 */
struct CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18 {
    int64_t resourceSet2TDCP_r18; /**< ASN.1 resourceSet2TDCP-r18；INTEGER (1..16)，位宽 4 bit。 */
    bool has_resourceSet3TDCP_r18; /**< resourceSet3TDCP-r18 是否存在。 */
    int64_t resourceSet3TDCP_r18; /**< ASN.1 resourceSet3TDCP-r18；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18
 * @note ASN.1：applyIndicatedTCI-State-r18/perResource-r18；源文件第 5845 行。
 * @note SEQUENCE OF (size 1..16) OF CSIAssociatedReportConfigInfoApplyIndicatedTCIStateR18PerResourceR18Item
 */
struct CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18 {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18_Item* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18
 * @note ASN.1：applyIndicatedTCI-State-r18；源文件第 5843 行。
 * @note CHOICE { perSet-r18, perResource-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perSet_r18 = 0, /**< ASN.1 perSet-r18 */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag_perResource_r18 = 1, /**< ASN.1 perResource-r18 */
} CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag;

struct CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18 {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerSet_r18 perSet_r18; /**< ASN.1 perSet-r18 */
        CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18_PerResource_r18 perResource_r18; /**< ASN.1 perResource-r18 */
    } u;
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18
 * @note ASN.1：applyIndicatedTCI-State2-r18/perResource-r18；源文件第 5849 行。
 * @note SEQUENCE OF (size 1..16) OF CSIAssociatedReportConfigInfoApplyIndicatedTCIState2R18PerResourceR18Item
 */
struct CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18 {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18_Item* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18
 * @note ASN.1：applyIndicatedTCI-State2-r18；源文件第 5847 行。
 * @note CHOICE { perSet-r18, perResource-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perSet_r18 = 0, /**< ASN.1 perSet-r18 */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag_perResource_r18 = 1, /**< ASN.1 perResource-r18 */
} CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag;

struct CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18 {
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerSet_r18 perSet_r18; /**< ASN.1 perSet-r18 */
        CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18_PerResource_r18 perResource_r18; /**< ASN.1 perResource-r18 */
    } u;
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ExtGroup2
 * @note ASN.1：CSI_AssociatedReportConfigInfo_ExtGroup2；源文件第 5838 行。
 */
struct CSI_AssociatedReportConfigInfo_ExtGroup2 {
    bool has_resourcesForChannelTDCP_r18; /**< resourcesForChannelTDCP-r18 是否存在。 */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ResourcesForChannelTDCP_r18 resourcesForChannelTDCP_r18; /**< ASN.1 resourcesForChannelTDCP-r18；结构体；OPTIONAL。 */
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；结构体；OPTIONAL。 */
    bool has_applyIndicatedTCI_State2_r18; /**< applyIndicatedTCI-State2-r18 是否存在。 */
    CSI_AssociatedReportConfigInfo_ExtGroup2_ApplyIndicatedTCI_State2_r18 applyIndicatedTCI_State2_r18; /**< ASN.1 applyIndicatedTCI-State2-r18；结构体；OPTIONAL。 */
    bool has_csi_ReportSubConfigTriggerList_r18; /**< csi-ReportSubConfigTriggerList-r18 是否存在。 */
    CSI_ReportSubConfigTriggerList_r18 csi_ReportSubConfigTriggerList_r18; /**< ASN.1 csi-ReportSubConfigTriggerList-r18；SEQUENCE OF CSI_ReportSubConfigId_r18，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS
 * @note ASN.1：resourcesForChannel/nzp-CSI-RS；源文件第 5817 行。
 * @note SEQUENCE { resourceSet, qcl-info }
 */
struct CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS {
    int64_t resourceSet; /**< ASN.1 resourceSet；INTEGER (1..16)，位宽 4 bit。 */
    bool has_qcl_info; /**< qcl-info 是否存在。 */
    TCI_StateId* qcl_info_items; /**< ASN.1 qcl-info；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t qcl_info_count; /**< qcl-info 元素个数。 */
};


/**
 * @brief CSI_AssociatedReportConfigInfo_ResourcesForChannel
 * @note ASN.1：resourcesForChannel；源文件第 5816 行。
 * @note CHOICE { nzp-CSI-RS, csi-SSB-ResourceSet }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag {
    CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_nzp_CSI_RS = 0, /**< ASN.1 nzp-CSI-RS */
    CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag_csi_SSB_ResourceSet = 1, /**< ASN.1 csi-SSB-ResourceSet */
} CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag;

struct CSI_AssociatedReportConfigInfo_ResourcesForChannel {
    CSI_AssociatedReportConfigInfo_ResourcesForChannel_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_AssociatedReportConfigInfo_ResourcesForChannel_Nzp_CSI_RS nzp_CSI_RS; /**< ASN.1 nzp-CSI-RS */
        int64_t csi_SSB_ResourceSet; /**< ASN.1 csi-SSB-ResourceSet */
    } u;
};


/**
 * @brief CSI_AssociatedReportConfigInfo
 * @note ASN.1：CSI-AssociatedReportConfigInfo；源文件第 5814 行。
 * @note CSI-AssociatedReportConfigInfo ::= SEQUENCE { reportConfigId, resourcesForChannel, csi-IM-ResourcesForInterferen...
 */
struct CSI_AssociatedReportConfigInfo {
    CSI_ReportConfigId reportConfigId; /**< ASN.1 reportConfigId；INTEGER (0..47)，位宽 6 bit。 */
    CSI_AssociatedReportConfigInfo_ResourcesForChannel resourcesForChannel; /**< ASN.1 resourcesForChannel；结构体。 */
    bool has_csi_IM_ResourcesForInterference; /**< csi-IM-ResourcesForInterference 是否存在。 */
    int64_t csi_IM_ResourcesForInterference; /**< ASN.1 csi-IM-ResourcesForInterference；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_nzp_CSI_RS_ResourcesForInterference; /**< nzp-CSI-RS-ResourcesForInterference 是否存在。 */
    int64_t nzp_CSI_RS_ResourcesForInterference; /**< ASN.1 nzp-CSI-RS-ResourcesForInterference；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_AssociatedReportConfigInfo_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CSI_AssociatedReportConfigInfo_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_FrequencyOccupation
 * @note ASN.1：CSI-FrequencyOccupation；源文件第 5858 行。
 * @note CSI-FrequencyOccupation ::= SEQUENCE { startingRB, nrofRBs }
 */
struct CSI_FrequencyOccupation {
    int64_t startingRB; /**< ASN.1 startingRB；INTEGER (0..274)，位宽 9 bit。 */
    int64_t nrofRBs; /**< ASN.1 nrofRBs；INTEGER (24..276)，位宽 8 bit。 */
};


/**
 * @brief CSI_ResourcePeriodicityAndOffset
 * @note ASN.1：CSI-ResourcePeriodicityAndOffset；源文件第 6207 行。
 * @note CSI-ResourcePeriodicityAndOffset ::= CHOICE { slots4, slots5, slots8, slots10, slots16, slots20, slots32, slots40,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ResourcePeriodicityAndOffset_Tag {
    CSI_ResourcePeriodicityAndOffset_Tag_slots4 = 0, /**< ASN.1 slots4 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots5 = 1, /**< ASN.1 slots5 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots8 = 2, /**< ASN.1 slots8 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots10 = 3, /**< ASN.1 slots10 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots16 = 4, /**< ASN.1 slots16 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots20 = 5, /**< ASN.1 slots20 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots32 = 6, /**< ASN.1 slots32 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots40 = 7, /**< ASN.1 slots40 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots64 = 8, /**< ASN.1 slots64 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots80 = 9, /**< ASN.1 slots80 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots160 = 10, /**< ASN.1 slots160 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots320 = 11, /**< ASN.1 slots320 */
    CSI_ResourcePeriodicityAndOffset_Tag_slots640 = 12, /**< ASN.1 slots640 */
} CSI_ResourcePeriodicityAndOffset_Tag;

struct CSI_ResourcePeriodicityAndOffset {
    CSI_ResourcePeriodicityAndOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t slots4; /**< ASN.1 slots4 */
        int64_t slots5; /**< ASN.1 slots5 */
        int64_t slots8; /**< ASN.1 slots8 */
        int64_t slots10; /**< ASN.1 slots10 */
        int64_t slots16; /**< ASN.1 slots16 */
        int64_t slots20; /**< ASN.1 slots20 */
        int64_t slots32; /**< ASN.1 slots32 */
        int64_t slots40; /**< ASN.1 slots40 */
        int64_t slots64; /**< ASN.1 slots64 */
        int64_t slots80; /**< ASN.1 slots80 */
        int64_t slots160; /**< ASN.1 slots160 */
        int64_t slots320; /**< ASN.1 slots320 */
        int64_t slots640; /**< ASN.1 slots640 */
    } u;
};


/**
 * @brief CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0
 * @note ASN.1：csi-IM-ResourceElementPattern/pattern0；源文件第 5870 行。
 * @note SEQUENCE { subcarrierLocation-p0, symbolLocation-p0 }
 */
struct CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0 {
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0_SubcarrierLocation_p0 subcarrierLocation_p0; /**< ASN.1 subcarrierLocation-p0；枚举。 */
    int64_t symbolLocation_p0; /**< ASN.1 symbolLocation-p0；INTEGER (0..12)，位宽 4 bit。 */
};


/**
 * @brief CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1
 * @note ASN.1：csi-IM-ResourceElementPattern/pattern1；源文件第 5874 行。
 * @note SEQUENCE { subcarrierLocation-p1, symbolLocation-p1 }
 */
struct CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1 {
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1_SubcarrierLocation_p1 subcarrierLocation_p1; /**< ASN.1 subcarrierLocation-p1；枚举。 */
    int64_t symbolLocation_p1; /**< ASN.1 symbolLocation-p1；INTEGER (0..13)，位宽 4 bit。 */
};


/**
 * @brief CSI_IM_Resource_Csi_IM_ResourceElementPattern
 * @note ASN.1：csi-IM-ResourceElementPattern；源文件第 5869 行。
 * @note CHOICE { pattern0, pattern1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag {
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern0 = 0, /**< ASN.1 pattern0 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag_pattern1 = 1, /**< ASN.1 pattern1 */
} CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag;

struct CSI_IM_Resource_Csi_IM_ResourceElementPattern {
    CSI_IM_Resource_Csi_IM_ResourceElementPattern_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern0 pattern0; /**< ASN.1 pattern0 */
        CSI_IM_Resource_Csi_IM_ResourceElementPattern_Pattern1 pattern1; /**< ASN.1 pattern1 */
    } u;
};


/**
 * @brief CSI_IM_Resource
 * @note ASN.1：CSI-IM-Resource；源文件第 5867 行。
 * @note CSI-IM-Resource ::= SEQUENCE { csi-IM-ResourceId, csi-IM-ResourceElementPattern, freqBand, period...
 */
struct CSI_IM_Resource {
    CSI_IM_ResourceId csi_IM_ResourceId; /**< ASN.1 csi-IM-ResourceId；INTEGER (0..31)，位宽 5 bit。 */
    bool has_csi_IM_ResourceElementPattern; /**< csi-IM-ResourceElementPattern 是否存在。 */
    CSI_IM_Resource_Csi_IM_ResourceElementPattern csi_IM_ResourceElementPattern; /**< ASN.1 csi-IM-ResourceElementPattern；结构体；OPTIONAL。 */
    bool has_freqBand; /**< freqBand 是否存在。 */
    CSI_FrequencyOccupation freqBand; /**< ASN.1 freqBand；结构体；OPTIONAL。 */
    bool has_periodicityAndOffset; /**< periodicityAndOffset 是否存在。 */
    CSI_ResourcePeriodicityAndOffset periodicityAndOffset; /**< ASN.1 periodicityAndOffset；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_IM_ResourceSet
 * @note ASN.1：CSI-IM-ResourceSet；源文件第 5892 行。
 * @note CSI-IM-ResourceSet ::= SEQUENCE { csi-IM-ResourceSetId, csi-IM-Resources }
 */
struct CSI_IM_ResourceSet {
    CSI_IM_ResourceSetId csi_IM_ResourceSetId; /**< ASN.1 csi-IM-ResourceSetId；INTEGER (0..63)，位宽 6 bit。 */
    CSI_IM_ResourceId* csi_IM_Resources_items; /**< ASN.1 csi-IM-Resources；SEQUENCE OF CSI_IM_ResourceId，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t csi_IM_Resources_count; /**< csi-IM-Resources 元素个数。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530
 * @note ASN.1：semiPersistentOnPUSCH-v1530；源文件第 6023 行。
 * @note SEQUENCE { reportSlotConfig-v1530 }
 */
struct CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530 {
    CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530_ReportSlotConfig_v1530 reportSlotConfig_v1530; /**< ASN.1 reportSlotConfig-v1530；枚举。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup1
 * @note ASN.1：CSI_ReportConfig_ExtGroup1；源文件第 6022 行。
 */
struct CSI_ReportConfig_ExtGroup1 {
    bool has_semiPersistentOnPUSCH_v1530; /**< semiPersistentOnPUSCH-v1530 是否存在。 */
    CSI_ReportConfig_ExtGroup1_SemiPersistentOnPUSCH_v1530 semiPersistentOnPUSCH_v1530; /**< ASN.1 semiPersistentOnPUSCH-v1530；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610
 * @note ASN.1：semiPersistentOnPUSCH-v1610；源文件第 6028 行。
 * @note SEQUENCE { reportSlotOffsetListDCI-0-2-r16, reportSlotOffsetListDCI-0-1-r16 }
 */
struct CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610 {
    bool has_reportSlotOffsetListDCI_0_2_r16; /**< reportSlotOffsetListDCI-0-2-r16 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_2_r16_items; /**< ASN.1 reportSlotOffsetListDCI-0-2-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_2_r16_count; /**< reportSlotOffsetListDCI-0-2-r16 元素个数。 */
    bool has_reportSlotOffsetListDCI_0_1_r16; /**< reportSlotOffsetListDCI-0-1-r16 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_1_r16_items; /**< ASN.1 reportSlotOffsetListDCI-0-1-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_1_r16_count; /**< reportSlotOffsetListDCI-0-1-r16 元素个数。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup2_Aperiodic_v1610
 * @note ASN.1：aperiodic-v1610；源文件第 6032 行。
 * @note SEQUENCE { reportSlotOffsetListDCI-0-2-r16, reportSlotOffsetListDCI-0-1-r16 }
 */
struct CSI_ReportConfig_ExtGroup2_Aperiodic_v1610 {
    bool has_reportSlotOffsetListDCI_0_2_r16; /**< reportSlotOffsetListDCI-0-2-r16 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_2_r16_items; /**< ASN.1 reportSlotOffsetListDCI-0-2-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_2_r16_count; /**< reportSlotOffsetListDCI-0-2-r16 元素个数。 */
    bool has_reportSlotOffsetListDCI_0_1_r16; /**< reportSlotOffsetListDCI-0-1-r16 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_1_r16_items; /**< ASN.1 reportSlotOffsetListDCI-0-1-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_1_r16_count; /**< reportSlotOffsetListDCI-0-1-r16 元素个数。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup2_ReportQuantity_r16
 * @note ASN.1：reportQuantity-r16；源文件第 6036 行。
 * @note CHOICE { cri-SINR-r16, ssb-Index-SINR-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag {
    CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_cri_SINR_r16 = 0, /**< ASN.1 cri-SINR-r16 */
    CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag_ssb_Index_SINR_r16 = 1, /**< ASN.1 ssb-Index-SINR-r16 */
} CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag;

struct CSI_ReportConfig_ExtGroup2_ReportQuantity_r16 {
    CSI_ReportConfig_ExtGroup2_ReportQuantity_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null cri_SINR_r16; /**< ASN.1 cri-SINR-r16 */
        Null ssb_Index_SINR_r16; /**< ASN.1 ssb-Index-SINR-r16 */
    } u;
};


/**
 * @brief CSI_ReportConfig_ExtGroup2
 * @note ASN.1：CSI_ReportConfig_ExtGroup2；源文件第 6027 行。
 */
struct CSI_ReportConfig_ExtGroup2 {
    bool has_semiPersistentOnPUSCH_v1610; /**< semiPersistentOnPUSCH-v1610 是否存在。 */
    CSI_ReportConfig_ExtGroup2_SemiPersistentOnPUSCH_v1610 semiPersistentOnPUSCH_v1610; /**< ASN.1 semiPersistentOnPUSCH-v1610；结构体；OPTIONAL。 */
    bool has_aperiodic_v1610; /**< aperiodic-v1610 是否存在。 */
    CSI_ReportConfig_ExtGroup2_Aperiodic_v1610 aperiodic_v1610; /**< ASN.1 aperiodic-v1610；结构体；OPTIONAL。 */
    bool has_reportQuantity_r16; /**< reportQuantity-r16 是否存在。 */
    CSI_ReportConfig_ExtGroup2_ReportQuantity_r16 reportQuantity_r16; /**< ASN.1 reportQuantity-r16；结构体；OPTIONAL。 */
    bool has_codebookConfig_r16; /**< codebookConfig-r16 是否存在。 */
    CodebookConfig_r16 codebookConfig_r16; /**< ASN.1 codebookConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710
 * @note ASN.1：groupBasedBeamReporting-v1710；源文件第 6044 行。
 * @note SEQUENCE { nrofReportedGroups-r17 }
 */
struct CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710 {
    CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710_NrofReportedGroups_r17 nrofReportedGroups_r17; /**< ASN.1 nrofReportedGroups-r17；枚举。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup3_ReportQuantity_r17
 * @note ASN.1：reportQuantity-r17；源文件第 6051 行。
 * @note CHOICE { cri-RSRP-Index-r17, ssb-Index-RSRP-Index-r17, cri-SINR-Index-r17, ss...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag {
    CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_RSRP_Index_r17 = 0, /**< ASN.1 cri-RSRP-Index-r17 */
    CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_RSRP_Index_r17 = 1, /**< ASN.1 ssb-Index-RSRP-Index-r17 */
    CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_cri_SINR_Index_r17 = 2, /**< ASN.1 cri-SINR-Index-r17 */
    CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag_ssb_Index_SINR_Index_r17 = 3, /**< ASN.1 ssb-Index-SINR-Index-r17 */
} CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag;

struct CSI_ReportConfig_ExtGroup3_ReportQuantity_r17 {
    CSI_ReportConfig_ExtGroup3_ReportQuantity_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null cri_RSRP_Index_r17; /**< ASN.1 cri-RSRP-Index-r17 */
        Null ssb_Index_RSRP_Index_r17; /**< ASN.1 ssb-Index-RSRP-Index-r17 */
        Null cri_SINR_Index_r17; /**< ASN.1 cri-SINR-Index-r17 */
        Null ssb_Index_SINR_Index_r17; /**< ASN.1 ssb-Index-SINR-Index-r17 */
    } u;
};


/**
 * @brief CSI_ReportConfig_ExtGroup3
 * @note ASN.1：CSI_ReportConfig_ExtGroup3；源文件第 6042 行。
 */
struct CSI_ReportConfig_ExtGroup3 {
    bool has_cqi_BitsPerSubband_r17; /**< cqi-BitsPerSubband-r17 是否存在。 */
    CSI_ReportConfig_ExtGroup3_Cqi_BitsPerSubband_r17 cqi_BitsPerSubband_r17; /**< ASN.1 cqi-BitsPerSubband-r17；枚举；OPTIONAL。 */
    bool has_groupBasedBeamReporting_v1710; /**< groupBasedBeamReporting-v1710 是否存在。 */
    CSI_ReportConfig_ExtGroup3_GroupBasedBeamReporting_v1710 groupBasedBeamReporting_v1710; /**< ASN.1 groupBasedBeamReporting-v1710；结构体；OPTIONAL。 */
    bool has_codebookConfig_r17; /**< codebookConfig-r17 是否存在。 */
    CodebookConfig_r17 codebookConfig_r17; /**< ASN.1 codebookConfig-r17；结构体；OPTIONAL。 */
    bool has_sharedCMR_r17; /**< sharedCMR-r17 是否存在。 */
    CSI_ReportConfig_ExtGroup3_SharedCMR_r17 sharedCMR_r17; /**< ASN.1 sharedCMR-r17；枚举；OPTIONAL。 */
    bool has_csi_ReportMode_r17; /**< csi-ReportMode-r17 是否存在。 */
    CSI_ReportConfig_ExtGroup3_Csi_ReportMode_r17 csi_ReportMode_r17; /**< ASN.1 csi-ReportMode-r17；枚举；OPTIONAL。 */
    bool has_numberOfSingleTRP_CSI_Mode1_r17; /**< numberOfSingleTRP-CSI-Mode1-r17 是否存在。 */
    CSI_ReportConfig_ExtGroup3_NumberOfSingleTRP_CSI_Mode1_r17 numberOfSingleTRP_CSI_Mode1_r17; /**< ASN.1 numberOfSingleTRP-CSI-Mode1-r17；枚举；OPTIONAL。 */
    bool has_reportQuantity_r17; /**< reportQuantity-r17 是否存在。 */
    CSI_ReportConfig_ExtGroup3_ReportQuantity_r17 reportQuantity_r17; /**< ASN.1 reportQuantity-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720
 * @note ASN.1：semiPersistentOnPUSCH-v1720；源文件第 6059 行。
 * @note SEQUENCE { reportSlotOffsetList-r17, reportSlotOffsetListDCI-0-2-r17, reportS...
 */
struct CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720 {
    bool has_reportSlotOffsetList_r17; /**< reportSlotOffsetList-r17 是否存在。 */
    int64_t* reportSlotOffsetList_r17_items; /**< ASN.1 reportSlotOffsetList-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetList_r17_count; /**< reportSlotOffsetList-r17 元素个数。 */
    bool has_reportSlotOffsetListDCI_0_2_r17; /**< reportSlotOffsetListDCI-0-2-r17 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_2_r17_items; /**< ASN.1 reportSlotOffsetListDCI-0-2-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_2_r17_count; /**< reportSlotOffsetListDCI-0-2-r17 元素个数。 */
    bool has_reportSlotOffsetListDCI_0_1_r17; /**< reportSlotOffsetListDCI-0-1-r17 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_1_r17_items; /**< ASN.1 reportSlotOffsetListDCI-0-1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_1_r17_count; /**< reportSlotOffsetListDCI-0-1-r17 元素个数。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup4_Aperiodic_v1720
 * @note ASN.1：aperiodic-v1720；源文件第 6064 行。
 * @note SEQUENCE { reportSlotOffsetList-r17, reportSlotOffsetListDCI-0-2-r17, reportS...
 */
struct CSI_ReportConfig_ExtGroup4_Aperiodic_v1720 {
    bool has_reportSlotOffsetList_r17; /**< reportSlotOffsetList-r17 是否存在。 */
    int64_t* reportSlotOffsetList_r17_items; /**< ASN.1 reportSlotOffsetList-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetList_r17_count; /**< reportSlotOffsetList-r17 元素个数。 */
    bool has_reportSlotOffsetListDCI_0_2_r17; /**< reportSlotOffsetListDCI-0-2-r17 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_2_r17_items; /**< ASN.1 reportSlotOffsetListDCI-0-2-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_2_r17_count; /**< reportSlotOffsetListDCI-0-2-r17 元素个数。 */
    bool has_reportSlotOffsetListDCI_0_1_r17; /**< reportSlotOffsetListDCI-0-1-r17 是否存在。 */
    int64_t* reportSlotOffsetListDCI_0_1_r17_items; /**< ASN.1 reportSlotOffsetListDCI-0-1-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_1_r17_count; /**< reportSlotOffsetListDCI-0-1-r17 元素个数。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup4
 * @note ASN.1：CSI_ReportConfig_ExtGroup4；源文件第 6058 行。
 */
struct CSI_ReportConfig_ExtGroup4 {
    bool has_semiPersistentOnPUSCH_v1720; /**< semiPersistentOnPUSCH-v1720 是否存在。 */
    CSI_ReportConfig_ExtGroup4_SemiPersistentOnPUSCH_v1720 semiPersistentOnPUSCH_v1720; /**< ASN.1 semiPersistentOnPUSCH-v1720；结构体；OPTIONAL。 */
    bool has_aperiodic_v1720; /**< aperiodic-v1720 是否存在。 */
    CSI_ReportConfig_ExtGroup4_Aperiodic_v1720 aperiodic_v1720; /**< ASN.1 aperiodic-v1720；结构体；OPTIONAL。 */
};


/**
 * @brief TDCP_r18
 * @note ASN.1：TDCP-r18；源文件第 6127 行。
 * @note TDCP-r18 ::= SEQUENCE { delayDSetofLengthY-r18, phaseReporting-r18 }
 */
struct TDCP_r18 {
    DelayD* delayDSetofLengthY_r18_items; /**< ASN.1 delayDSetofLengthY-r18；SEQUENCE OF DelayD，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t delayDSetofLengthY_r18_count; /**< delayDSetofLengthY-r18 元素个数。 */
    bool has_phaseReporting_r18; /**< phaseReporting-r18 是否存在。 */
    TDCP_r18_PhaseReporting_r18 phaseReporting_r18; /**< ASN.1 phaseReporting-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800
 * @note ASN.1：groupBasedBeamReporting-v1800；源文件第 6074 行。
 * @note SEQUENCE { reportingMode-r18 }
 */
struct CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800 {
    CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800_ReportingMode_r18 reportingMode_r18; /**< ASN.1 reportingMode-r18；枚举。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup6
 * @note ASN.1：CSI_ReportConfig_ExtGroup6；源文件第 6073 行。
 */
struct CSI_ReportConfig_ExtGroup6 {
    bool has_groupBasedBeamReporting_v1800; /**< groupBasedBeamReporting-v1800 是否存在。 */
    CSI_ReportConfig_ExtGroup6_GroupBasedBeamReporting_v1800 groupBasedBeamReporting_v1800; /**< ASN.1 groupBasedBeamReporting-v1800；结构体；OPTIONAL。 */
    bool has_reportQuantity_r18; /**< reportQuantity-r18 是否存在。 */
    TDCP_r18 reportQuantity_r18; /**< ASN.1 reportQuantity-r18；结构体；OPTIONAL。 */
    bool has_codebookConfig_r18; /**< codebookConfig-r18 是否存在。 */
    CodebookConfig_r18 codebookConfig_r18; /**< ASN.1 codebookConfig-r18；结构体；OPTIONAL。 */
    bool has_csi_ReportSubConfigToAddModList_r18; /**< csi-ReportSubConfigToAddModList-r18 是否存在。 */
    CSI_ReportSubConfig_r18* csi_ReportSubConfigToAddModList_r18_items; /**< ASN.1 csi-ReportSubConfigToAddModList-r18；SEQUENCE OF CSI_ReportSubConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_ReportSubConfigToAddModList_r18_count; /**< csi-ReportSubConfigToAddModList-r18 元素个数。 */
    bool has_csi_ReportSubConfigToReleaseList_r18; /**< csi-ReportSubConfigToReleaseList-r18 是否存在。 */
    CSI_ReportSubConfigId_r18* csi_ReportSubConfigToReleaseList_r18_items; /**< ASN.1 csi-ReportSubConfigToReleaseList-r18；SEQUENCE OF CSI_ReportSubConfigId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_ReportSubConfigToReleaseList_r18_count; /**< csi-ReportSubConfigToReleaseList-r18 元素个数。 */
};


/**
 * @brief CSI_ReportConfig_ExtGroup5
 * @note ASN.1：CSI_ReportConfig_ExtGroup5；源文件第 6070 行。
 */
struct CSI_ReportConfig_ExtGroup5 {
    bool has_codebookConfig_v1730; /**< codebookConfig-v1730 是否存在。 */
    CodebookConfig_v1730 codebookConfig_v1730; /**< ASN.1 codebookConfig-v1730；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportPeriodicityAndOffset
 * @note ASN.1：CSI-ReportPeriodicityAndOffset；源文件第 6086 行。
 * @note CSI-ReportPeriodicityAndOffset ::= CHOICE { slots4, slots5, slots8, slots10, slots16, slots20, slots40, slots80,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportPeriodicityAndOffset_Tag {
    CSI_ReportPeriodicityAndOffset_Tag_slots4 = 0, /**< ASN.1 slots4 */
    CSI_ReportPeriodicityAndOffset_Tag_slots5 = 1, /**< ASN.1 slots5 */
    CSI_ReportPeriodicityAndOffset_Tag_slots8 = 2, /**< ASN.1 slots8 */
    CSI_ReportPeriodicityAndOffset_Tag_slots10 = 3, /**< ASN.1 slots10 */
    CSI_ReportPeriodicityAndOffset_Tag_slots16 = 4, /**< ASN.1 slots16 */
    CSI_ReportPeriodicityAndOffset_Tag_slots20 = 5, /**< ASN.1 slots20 */
    CSI_ReportPeriodicityAndOffset_Tag_slots40 = 6, /**< ASN.1 slots40 */
    CSI_ReportPeriodicityAndOffset_Tag_slots80 = 7, /**< ASN.1 slots80 */
    CSI_ReportPeriodicityAndOffset_Tag_slots160 = 8, /**< ASN.1 slots160 */
    CSI_ReportPeriodicityAndOffset_Tag_slots320 = 9, /**< ASN.1 slots320 */
} CSI_ReportPeriodicityAndOffset_Tag;

struct CSI_ReportPeriodicityAndOffset {
    CSI_ReportPeriodicityAndOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t slots4; /**< ASN.1 slots4 */
        int64_t slots5; /**< ASN.1 slots5 */
        int64_t slots8; /**< ASN.1 slots8 */
        int64_t slots10; /**< ASN.1 slots10 */
        int64_t slots16; /**< ASN.1 slots16 */
        int64_t slots20; /**< ASN.1 slots20 */
        int64_t slots40; /**< ASN.1 slots40 */
        int64_t slots80; /**< ASN.1 slots80 */
        int64_t slots160; /**< ASN.1 slots160 */
        int64_t slots320; /**< ASN.1 slots320 */
    } u;
};


/**
 * @brief CSI_ReportConfigType_Periodic
 * @note ASN.1：reportConfigType/periodic；源文件第 5954 行。
 * @note SEQUENCE { reportSlotConfig, pucch-CSI-ResourceList }
 */
struct CSI_ReportConfigType_Periodic {
    CSI_ReportPeriodicityAndOffset reportSlotConfig; /**< ASN.1 reportSlotConfig；结构体。 */
    PUCCH_CSI_Resource* pucch_CSI_ResourceList_items; /**< ASN.1 pucch-CSI-ResourceList；SEQUENCE OF PUCCH_CSI_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pucch_CSI_ResourceList_count; /**< pucch-CSI-ResourceList 元素个数。 */
};


/**
 * @brief CSI_ReportConfigType_SemiPersistentOnPUCCH
 * @note ASN.1：reportConfigType/semiPersistentOnPUCCH；源文件第 5958 行。
 * @note SEQUENCE { reportSlotConfig, pucch-CSI-ResourceList }
 */
struct CSI_ReportConfigType_SemiPersistentOnPUCCH {
    CSI_ReportPeriodicityAndOffset reportSlotConfig; /**< ASN.1 reportSlotConfig；结构体。 */
    PUCCH_CSI_Resource* pucch_CSI_ResourceList_items; /**< ASN.1 pucch-CSI-ResourceList；SEQUENCE OF PUCCH_CSI_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pucch_CSI_ResourceList_count; /**< pucch-CSI-ResourceList 元素个数。 */
};


/**
 * @brief CSI_ReportConfigType_SemiPersistentOnPUSCH
 * @note ASN.1：reportConfigType/semiPersistentOnPUSCH；源文件第 5962 行。
 * @note SEQUENCE { reportSlotConfig, reportSlotOffsetList, p0alpha }
 */
struct CSI_ReportConfigType_SemiPersistentOnPUSCH {
    CSI_ReportConfigType_SemiPersistentOnPUSCH_ReportSlotConfig reportSlotConfig; /**< ASN.1 reportSlotConfig；枚举。 */
    int64_t* reportSlotOffsetList_items; /**< ASN.1 reportSlotOffsetList；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetList_count; /**< reportSlotOffsetList 元素个数。 */
    P0_PUSCH_AlphaSetId p0alpha; /**< ASN.1 p0alpha；INTEGER (0..29)，位宽 5 bit。 */
};


/**
 * @brief CSI_ReportConfigType_Aperiodic
 * @note ASN.1：reportConfigType/aperiodic；源文件第 5967 行。
 * @note SEQUENCE { reportSlotOffsetList }
 */
struct CSI_ReportConfigType_Aperiodic {
    int64_t* reportSlotOffsetList_items; /**< ASN.1 reportSlotOffsetList；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetList_count; /**< reportSlotOffsetList 元素个数。 */
};


/**
 * @brief CSI_ReportConfigType
 * @note ASN.1：reportConfigType；源文件第 5953 行。
 * @note CHOICE { periodic, semiPersistentOnPUCCH, semiPersistentOnPUSCH, aperiodic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportConfigType_Tag {
    CSI_ReportConfigType_Tag_periodic = 0, /**< ASN.1 periodic */
    CSI_ReportConfigType_Tag_semiPersistentOnPUCCH = 1, /**< ASN.1 semiPersistentOnPUCCH */
    CSI_ReportConfigType_Tag_semiPersistentOnPUSCH = 2, /**< ASN.1 semiPersistentOnPUSCH */
    CSI_ReportConfigType_Tag_aperiodic = 3, /**< ASN.1 aperiodic */
} CSI_ReportConfigType_Tag;

struct CSI_ReportConfigType {
    CSI_ReportConfigType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_ReportConfigType_Periodic periodic; /**< ASN.1 periodic */
        CSI_ReportConfigType_SemiPersistentOnPUCCH semiPersistentOnPUCCH; /**< ASN.1 semiPersistentOnPUCCH */
        CSI_ReportConfigType_SemiPersistentOnPUSCH semiPersistentOnPUSCH; /**< ASN.1 semiPersistentOnPUSCH */
        CSI_ReportConfigType_Aperiodic aperiodic; /**< ASN.1 aperiodic */
    } u;
};


/**
 * @brief CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI
 * @note ASN.1：reportQuantity/cri-RI-i1-CQI；源文件第 5975 行。
 * @note SEQUENCE { pdsch-BundleSizeForCSI }
 */
struct CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI {
    bool has_pdsch_BundleSizeForCSI; /**< pdsch-BundleSizeForCSI 是否存在。 */
    CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI_Pdsch_BundleSizeForCSI pdsch_BundleSizeForCSI; /**< ASN.1 pdsch-BundleSizeForCSI；枚举；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_ReportQuantity
 * @note ASN.1：reportQuantity；源文件第 5971 行。
 * @note CHOICE { none, cri-RI-PMI-CQI, cri-RI-i1, cri-RI-i1-CQI, cri-RI-CQI, cri-RSRP...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportConfig_ReportQuantity_Tag {
    CSI_ReportConfig_ReportQuantity_Tag_none = 0, /**< ASN.1 none */
    CSI_ReportConfig_ReportQuantity_Tag_cri_RI_PMI_CQI = 1, /**< ASN.1 cri-RI-PMI-CQI */
    CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1 = 2, /**< ASN.1 cri-RI-i1 */
    CSI_ReportConfig_ReportQuantity_Tag_cri_RI_i1_CQI = 3, /**< ASN.1 cri-RI-i1-CQI */
    CSI_ReportConfig_ReportQuantity_Tag_cri_RI_CQI = 4, /**< ASN.1 cri-RI-CQI */
    CSI_ReportConfig_ReportQuantity_Tag_cri_RSRP = 5, /**< ASN.1 cri-RSRP */
    CSI_ReportConfig_ReportQuantity_Tag_ssb_Index_RSRP = 6, /**< ASN.1 ssb-Index-RSRP */
    CSI_ReportConfig_ReportQuantity_Tag_cri_RI_LI_PMI_CQI = 7, /**< ASN.1 cri-RI-LI-PMI-CQI */
} CSI_ReportConfig_ReportQuantity_Tag;

struct CSI_ReportConfig_ReportQuantity {
    CSI_ReportConfig_ReportQuantity_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null none; /**< ASN.1 none */
        Null cri_RI_PMI_CQI; /**< ASN.1 cri-RI-PMI-CQI */
        Null cri_RI_i1; /**< ASN.1 cri-RI-i1 */
        CSI_ReportConfig_ReportQuantity_Cri_RI_i1_CQI cri_RI_i1_CQI; /**< ASN.1 cri-RI-i1-CQI */
        Null cri_RI_CQI; /**< ASN.1 cri-RI-CQI */
        Null cri_RSRP; /**< ASN.1 cri-RSRP */
        Null ssb_Index_RSRP; /**< ASN.1 ssb-Index-RSRP */
        Null cri_RI_LI_PMI_CQI; /**< ASN.1 cri-RI-LI-PMI-CQI */
    } u;
};


/**
 * @brief CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand
 * @note ASN.1：reportFreqConfiguration/csi-ReportingBand；源文件第 5986 行。
 * @note CHOICE { subbands3, subbands4, subbands5, subbands6, subbands7, subbands8, su...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag {
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands3 = 0, /**< ASN.1 subbands3 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands4 = 1, /**< ASN.1 subbands4 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands5 = 2, /**< ASN.1 subbands5 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands6 = 3, /**< ASN.1 subbands6 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands7 = 4, /**< ASN.1 subbands7 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands8 = 5, /**< ASN.1 subbands8 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands9 = 6, /**< ASN.1 subbands9 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands10 = 7, /**< ASN.1 subbands10 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands11 = 8, /**< ASN.1 subbands11 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands12 = 9, /**< ASN.1 subbands12 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands13 = 10, /**< ASN.1 subbands13 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands14 = 11, /**< ASN.1 subbands14 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands15 = 12, /**< ASN.1 subbands15 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands16 = 13, /**< ASN.1 subbands16 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands17 = 14, /**< ASN.1 subbands17 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands18 = 15, /**< ASN.1 subbands18 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag_subbands19_v1530 = 16, /**< ASN.1 subbands19-v1530（扩展备选） */
} CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag;

struct CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand {
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString subbands3; /**< ASN.1 subbands3 */
        BitString subbands4; /**< ASN.1 subbands4 */
        BitString subbands5; /**< ASN.1 subbands5 */
        BitString subbands6; /**< ASN.1 subbands6 */
        BitString subbands7; /**< ASN.1 subbands7 */
        BitString subbands8; /**< ASN.1 subbands8 */
        BitString subbands9; /**< ASN.1 subbands9 */
        BitString subbands10; /**< ASN.1 subbands10 */
        BitString subbands11; /**< ASN.1 subbands11 */
        BitString subbands12; /**< ASN.1 subbands12 */
        BitString subbands13; /**< ASN.1 subbands13 */
        BitString subbands14; /**< ASN.1 subbands14 */
        BitString subbands15; /**< ASN.1 subbands15 */
        BitString subbands16; /**< ASN.1 subbands16 */
        BitString subbands17; /**< ASN.1 subbands17 */
        BitString subbands18; /**< ASN.1 subbands18 */
        BitString subbands19_v1530; /**< ASN.1 subbands19-v1530 */
    } u;
};


/**
 * @brief CSI_ReportConfig_ReportFreqConfiguration
 * @note ASN.1：reportFreqConfiguration；源文件第 5983 行。
 * @note SEQUENCE { cqi-FormatIndicator, pmi-FormatIndicator, csi-ReportingBand }
 */
struct CSI_ReportConfig_ReportFreqConfiguration {
    bool has_cqi_FormatIndicator; /**< cqi-FormatIndicator 是否存在。 */
    CSI_ReportConfig_ReportFreqConfiguration_Cqi_FormatIndicator cqi_FormatIndicator; /**< ASN.1 cqi-FormatIndicator；枚举；OPTIONAL。 */
    bool has_pmi_FormatIndicator; /**< pmi-FormatIndicator 是否存在。 */
    CSI_ReportConfig_ReportFreqConfiguration_Pmi_FormatIndicator pmi_FormatIndicator; /**< ASN.1 pmi-FormatIndicator；枚举；OPTIONAL。 */
    bool has_csi_ReportingBand; /**< csi-ReportingBand 是否存在。 */
    CSI_ReportConfig_ReportFreqConfiguration_Csi_ReportingBand csi_ReportingBand; /**< ASN.1 csi-ReportingBand；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_GroupBasedBeamReporting_Disabled
 * @note ASN.1：groupBasedBeamReporting/disabled；源文件第 6014 行。
 * @note SEQUENCE { nrofReportedRS }
 */
struct CSI_ReportConfig_GroupBasedBeamReporting_Disabled {
    bool has_nrofReportedRS; /**< nrofReportedRS 是否存在。 */
    CSI_ReportConfig_GroupBasedBeamReporting_Disabled_NrofReportedRS nrofReportedRS; /**< ASN.1 nrofReportedRS；枚举；OPTIONAL。 */
};


/**
 * @brief CSI_ReportConfig_GroupBasedBeamReporting
 * @note ASN.1：groupBasedBeamReporting；源文件第 6012 行。
 * @note CHOICE { enabled, disabled }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportConfig_GroupBasedBeamReporting_Tag {
    CSI_ReportConfig_GroupBasedBeamReporting_Tag_enabled = 0, /**< ASN.1 enabled */
    CSI_ReportConfig_GroupBasedBeamReporting_Tag_disabled = 1, /**< ASN.1 disabled */
} CSI_ReportConfig_GroupBasedBeamReporting_Tag;

struct CSI_ReportConfig_GroupBasedBeamReporting {
    CSI_ReportConfig_GroupBasedBeamReporting_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null enabled; /**< ASN.1 enabled */
        CSI_ReportConfig_GroupBasedBeamReporting_Disabled disabled; /**< ASN.1 disabled */
    } u;
};


/**
 * @brief CSI_ReportConfig
 * @note ASN.1：CSI-ReportConfig；源文件第 5947 行。
 * @note CSI-ReportConfig ::= SEQUENCE { reportConfigId, carrier, resourcesForChannelMeasurement, csi-IM-Re...
 */
struct CSI_ReportConfig {
    CSI_ReportConfigId reportConfigId; /**< ASN.1 reportConfigId；INTEGER (0..47)，位宽 6 bit。 */
    bool has_carrier; /**< carrier 是否存在。 */
    ServCellIndex carrier; /**< ASN.1 carrier；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    CSI_ResourceConfigId resourcesForChannelMeasurement; /**< ASN.1 resourcesForChannelMeasurement；INTEGER (0..111)，位宽 7 bit。 */
    bool has_csi_IM_ResourcesForInterference; /**< csi-IM-ResourcesForInterference 是否存在。 */
    CSI_ResourceConfigId csi_IM_ResourcesForInterference; /**< ASN.1 csi-IM-ResourcesForInterference；INTEGER (0..111)，位宽 7 bit；OPTIONAL。 */
    bool has_nzp_CSI_RS_ResourcesForInterference; /**< nzp-CSI-RS-ResourcesForInterference 是否存在。 */
    CSI_ResourceConfigId nzp_CSI_RS_ResourcesForInterference; /**< ASN.1 nzp-CSI-RS-ResourcesForInterference；INTEGER (0..111)，位宽 7 bit；OPTIONAL。 */
    CSI_ReportConfigType reportConfigType; /**< ASN.1 reportConfigType；结构体。 */
    CSI_ReportConfig_ReportQuantity reportQuantity; /**< ASN.1 reportQuantity；结构体。 */
    bool has_reportFreqConfiguration; /**< reportFreqConfiguration 是否存在。 */
    CSI_ReportConfig_ReportFreqConfiguration reportFreqConfiguration; /**< ASN.1 reportFreqConfiguration；结构体；OPTIONAL。 */
    CSI_ReportConfig_TimeRestrictionForChannelMeasurements timeRestrictionForChannelMeasurements; /**< ASN.1 timeRestrictionForChannelMeasurements；枚举。 */
    CSI_ReportConfig_TimeRestrictionForInterferenceMeasurements timeRestrictionForInterferenceMeasurements; /**< ASN.1 timeRestrictionForInterferenceMeasurements；枚举。 */
    bool has_codebookConfig; /**< codebookConfig 是否存在。 */
    CodebookConfig codebookConfig; /**< ASN.1 codebookConfig；结构体；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    CSI_ReportConfig_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    CSI_ReportConfig_GroupBasedBeamReporting groupBasedBeamReporting; /**< ASN.1 groupBasedBeamReporting；结构体。 */
    bool has_cqi_Table; /**< cqi-Table 是否存在。 */
    CSI_ReportConfig_Cqi_Table cqi_Table; /**< ASN.1 cqi-Table；枚举；OPTIONAL。 */
    CSI_ReportConfig_SubbandSize subbandSize; /**< ASN.1 subbandSize；枚举。 */
    bool has_non_PMI_PortIndication; /**< non-PMI-PortIndication 是否存在。 */
    PortIndexFor8Ranks* non_PMI_PortIndication_items; /**< ASN.1 non-PMI-PortIndication；SEQUENCE OF PortIndexFor8Ranks，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t non_PMI_PortIndication_count; /**< non-PMI-PortIndication 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_ReportConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CSI_ReportConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    CSI_ReportConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    CSI_ReportConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    CSI_ReportConfig_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    CSI_ReportConfig_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PortIndexFor8Ranks_PortIndex8
 * @note ASN.1：portIndex8；源文件第 6100 行。
 * @note SEQUENCE { rank1-8, rank2-8, rank3-8, rank4-8, rank5-8, rank6-8, rank7-8, ran...
 */
struct PortIndexFor8Ranks_PortIndex8 {
    bool has_rank1_8; /**< rank1-8 是否存在。 */
    PortIndex8 rank1_8; /**< ASN.1 rank1-8；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_rank2_8; /**< rank2-8 是否存在。 */
    PortIndex8* rank2_8_items; /**< ASN.1 rank2-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank2_8_count; /**< rank2-8 元素个数。 */
    bool has_rank3_8; /**< rank3-8 是否存在。 */
    PortIndex8* rank3_8_items; /**< ASN.1 rank3-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank3_8_count; /**< rank3-8 元素个数。 */
    bool has_rank4_8; /**< rank4-8 是否存在。 */
    PortIndex8* rank4_8_items; /**< ASN.1 rank4-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank4_8_count; /**< rank4-8 元素个数。 */
    bool has_rank5_8; /**< rank5-8 是否存在。 */
    PortIndex8* rank5_8_items; /**< ASN.1 rank5-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank5_8_count; /**< rank5-8 元素个数。 */
    bool has_rank6_8; /**< rank6-8 是否存在。 */
    PortIndex8* rank6_8_items; /**< ASN.1 rank6-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank6_8_count; /**< rank6-8 元素个数。 */
    bool has_rank7_8; /**< rank7-8 是否存在。 */
    PortIndex8* rank7_8_items; /**< ASN.1 rank7-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank7_8_count; /**< rank7-8 元素个数。 */
    bool has_rank8_8; /**< rank8-8 是否存在。 */
    PortIndex8* rank8_8_items; /**< ASN.1 rank8-8；SEQUENCE OF PortIndex8，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank8_8_count; /**< rank8-8 元素个数。 */
};


/**
 * @brief PortIndexFor8Ranks_PortIndex4
 * @note ASN.1：portIndex4；源文件第 6110 行。
 * @note SEQUENCE { rank1-4, rank2-4, rank3-4, rank4-4 }
 */
struct PortIndexFor8Ranks_PortIndex4 {
    bool has_rank1_4; /**< rank1-4 是否存在。 */
    PortIndex4 rank1_4; /**< ASN.1 rank1-4；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_rank2_4; /**< rank2-4 是否存在。 */
    PortIndex4* rank2_4_items; /**< ASN.1 rank2-4；SEQUENCE OF PortIndex4，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank2_4_count; /**< rank2-4 元素个数。 */
    bool has_rank3_4; /**< rank3-4 是否存在。 */
    PortIndex4* rank3_4_items; /**< ASN.1 rank3-4；SEQUENCE OF PortIndex4，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank3_4_count; /**< rank3-4 元素个数。 */
    bool has_rank4_4; /**< rank4-4 是否存在。 */
    PortIndex4* rank4_4_items; /**< ASN.1 rank4-4；SEQUENCE OF PortIndex4，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank4_4_count; /**< rank4-4 元素个数。 */
};


/**
 * @brief PortIndexFor8Ranks_PortIndex2
 * @note ASN.1：portIndex2；源文件第 6116 行。
 * @note SEQUENCE { rank1-2, rank2-2 }
 */
struct PortIndexFor8Ranks_PortIndex2 {
    bool has_rank1_2; /**< rank1-2 是否存在。 */
    PortIndex2 rank1_2; /**< ASN.1 rank1-2；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_rank2_2; /**< rank2-2 是否存在。 */
    PortIndex2* rank2_2_items; /**< ASN.1 rank2-2；SEQUENCE OF PortIndex2，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rank2_2_count; /**< rank2-2 元素个数。 */
};


/**
 * @brief PortIndexFor8Ranks
 * @note ASN.1：PortIndexFor8Ranks；源文件第 6099 行。
 * @note PortIndexFor8Ranks ::= CHOICE { portIndex8, portIndex4, portIndex2, portIndex1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PortIndexFor8Ranks_Tag {
    PortIndexFor8Ranks_Tag_portIndex8 = 0, /**< ASN.1 portIndex8 */
    PortIndexFor8Ranks_Tag_portIndex4 = 1, /**< ASN.1 portIndex4 */
    PortIndexFor8Ranks_Tag_portIndex2 = 2, /**< ASN.1 portIndex2 */
    PortIndexFor8Ranks_Tag_portIndex1 = 3, /**< ASN.1 portIndex1 */
} PortIndexFor8Ranks_Tag;

struct PortIndexFor8Ranks {
    PortIndexFor8Ranks_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PortIndexFor8Ranks_PortIndex8 portIndex8; /**< ASN.1 portIndex8 */
        PortIndexFor8Ranks_PortIndex4 portIndex4; /**< ASN.1 portIndex4 */
        PortIndexFor8Ranks_PortIndex2 portIndex2; /**< ASN.1 portIndex2 */
        Null portIndex1; /**< ASN.1 portIndex1 */
    } u;
};


/**
 * @brief CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18
 * @note ASN.1：reportSubConfigParams/a1-parameters/portSubsetIndicator-r18；源文件第 6147 行。
 * @note CHOICE { p2, p4, p8, p12, p16, p24, p32 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag {
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p2 = 0, /**< ASN.1 p2 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p4 = 1, /**< ASN.1 p4 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p8 = 2, /**< ASN.1 p8 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p12 = 3, /**< ASN.1 p12 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p16 = 4, /**< ASN.1 p16 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p24 = 5, /**< ASN.1 p24 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag_p32 = 6, /**< ASN.1 p32 */
} CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag;

struct CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18 {
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString p2; /**< ASN.1 p2 */
        BitString p4; /**< ASN.1 p4 */
        BitString p8; /**< ASN.1 p8 */
        BitString p12; /**< ASN.1 p12 */
        BitString p16; /**< ASN.1 p16 */
        BitString p24; /**< ASN.1 p24 */
        BitString p32; /**< ASN.1 p32 */
    } u;
};


/**
 * @brief CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters
 * @note ASN.1：reportSubConfigParams/a1-parameters；源文件第 6145 行。
 * @note SEQUENCE { codebookSubConfig-r18, portSubsetIndicator-r18, non-PMI-PortIndica...
 */
struct CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters {
    bool has_codebookSubConfig_r18; /**< codebookSubConfig-r18 是否存在。 */
    CodebookConfig codebookSubConfig_r18; /**< ASN.1 codebookSubConfig-r18；结构体；OPTIONAL。 */
    bool has_portSubsetIndicator_r18; /**< portSubsetIndicator-r18 是否存在。 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18 portSubsetIndicator_r18; /**< ASN.1 portSubsetIndicator-r18；结构体；OPTIONAL。 */
    bool has_non_PMI_PortIndication_r18; /**< non-PMI-PortIndication-r18 是否存在。 */
    PortIndexFor8Ranks non_PMI_PortIndication_r18; /**< ASN.1 non-PMI-PortIndication-r18；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters
 * @note ASN.1：reportSubConfigParams/a2-parameters；源文件第 6158 行。
 * @note SEQUENCE { nzp-CSI-RS-ResourceList-r18 }
 */
struct CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters {
    NZP_CSI_RS_ResourceIndex_r18* nzp_CSI_RS_ResourceList_r18_items; /**< ASN.1 nzp-CSI-RS-ResourceList-r18；SEQUENCE OF NZP_CSI_RS_ResourceIndex_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_ResourceList_r18_count; /**< nzp-CSI-RS-ResourceList-r18 元素个数。 */
};


/**
 * @brief CSI_ReportSubConfig_r18_ReportSubConfigParams
 * @note ASN.1：reportSubConfigParams；源文件第 6144 行。
 * @note CHOICE { a1-parameters, a2-parameters }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag {
    CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a1_parameters = 0, /**< ASN.1 a1-parameters */
    CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a2_parameters = 1, /**< ASN.1 a2-parameters */
} CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag;

struct CSI_ReportSubConfig_r18_ReportSubConfigParams {
    CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters a1_parameters; /**< ASN.1 a1-parameters */
        CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters a2_parameters; /**< ASN.1 a2-parameters */
    } u;
};


/**
 * @brief CSI_ReportSubConfig_r18
 * @note ASN.1：CSI-ReportSubConfig-r18；源文件第 6142 行。
 * @note CSI-ReportSubConfig-r18 ::= SEQUENCE { reportSubConfigId-r18, reportSubConfigParams, powerOffset-r18 }
 */
struct CSI_ReportSubConfig_r18 {
    CSI_ReportSubConfigId_r18 reportSubConfigId_r18; /**< ASN.1 reportSubConfigId-r18；INTEGER (0..7)，位宽 3 bit。 */
    bool has_reportSubConfigParams; /**< reportSubConfigParams 是否存在。 */
    CSI_ReportSubConfig_r18_ReportSubConfigParams reportSubConfigParams; /**< ASN.1 reportSubConfigParams；结构体；OPTIONAL。 */
    bool has_powerOffset_r18; /**< powerOffset-r18 是否存在。 */
    int64_t powerOffset_r18; /**< ASN.1 powerOffset-r18；INTEGER (0..23)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief CSI_ResourceConfig_ExtGroup1
 * @note ASN.1：CSI_ResourceConfig_ExtGroup1；源文件第 6194 行。
 */
struct CSI_ResourceConfig_ExtGroup1 {
    bool has_csi_SSB_ResourceSetListExt_r17; /**< csi-SSB-ResourceSetListExt-r17 是否存在。 */
    CSI_SSB_ResourceSetId csi_SSB_ResourceSetListExt_r17; /**< ASN.1 csi-SSB-ResourceSetListExt-r17；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB
 * @note ASN.1：csi-RS-ResourceSetList/nzp-CSI-RS-SSB；源文件第 6183 行。
 * @note SEQUENCE { nzp-CSI-RS-ResourceSetList, csi-SSB-ResourceSetList }
 */
struct CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB {
    bool has_nzp_CSI_RS_ResourceSetList; /**< nzp-CSI-RS-ResourceSetList 是否存在。 */
    NZP_CSI_RS_ResourceSetId* nzp_CSI_RS_ResourceSetList_items; /**< ASN.1 nzp-CSI-RS-ResourceSetList；SEQUENCE OF NZP_CSI_RS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_ResourceSetList_count; /**< nzp-CSI-RS-ResourceSetList 元素个数。 */
    bool has_csi_SSB_ResourceSetList; /**< csi-SSB-ResourceSetList 是否存在。 */
    CSI_SSB_ResourceSetId* csi_SSB_ResourceSetList_items; /**< ASN.1 csi-SSB-ResourceSetList；SEQUENCE OF CSI_SSB_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_SSB_ResourceSetList_count; /**< csi-SSB-ResourceSetList 元素个数。 */
};


/**
 * @brief CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList
 * @note ASN.1：csi-RS-ResourceSetList/csi-IM-ResourceSetList；源文件第 6188 行。
 * @note SEQUENCE OF (size 1..16) OF CSI-IM-ResourceSetId
 */
struct CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList {
    CSI_IM_ResourceSetId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CSI_ResourceConfig_Csi_RS_ResourceSetList
 * @note ASN.1：csi-RS-ResourceSetList；源文件第 6182 行。
 * @note CHOICE { nzp-CSI-RS-SSB, csi-IM-ResourceSetList }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag {
    CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_nzp_CSI_RS_SSB = 0, /**< ASN.1 nzp-CSI-RS-SSB */
    CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_csi_IM_ResourceSetList = 1, /**< ASN.1 csi-IM-ResourceSetList */
} CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag;

struct CSI_ResourceConfig_Csi_RS_ResourceSetList {
    CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB nzp_CSI_RS_SSB; /**< ASN.1 nzp-CSI-RS-SSB */
        CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList csi_IM_ResourceSetList; /**< ASN.1 csi-IM-ResourceSetList */
    } u;
};


/**
 * @brief CSI_ResourceConfig
 * @note ASN.1：CSI-ResourceConfig；源文件第 6180 行。
 * @note CSI-ResourceConfig ::= SEQUENCE { csi-ResourceConfigId, csi-RS-ResourceSetList, bwp-Id, resourceType...
 */
struct CSI_ResourceConfig {
    CSI_ResourceConfigId csi_ResourceConfigId; /**< ASN.1 csi-ResourceConfigId；INTEGER (0..111)，位宽 7 bit。 */
    CSI_ResourceConfig_Csi_RS_ResourceSetList csi_RS_ResourceSetList; /**< ASN.1 csi-RS-ResourceSetList；结构体。 */
    BWP_Id bwp_Id; /**< ASN.1 bwp-Id；INTEGER (0..4)，位宽 3 bit。 */
    CSI_ResourceConfig_ResourceType resourceType; /**< ASN.1 resourceType；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_ResourceConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_RS_ResourceConfigMobility_ExtGroup1
 * @note ASN.1：CSI_RS_ResourceConfigMobility_ExtGroup1；源文件第 6230 行。
 */
struct CSI_RS_ResourceConfigMobility_ExtGroup1 {
    bool has_refServCellIndex; /**< refServCellIndex 是否存在。 */
    ServCellIndex refServCellIndex; /**< ASN.1 refServCellIndex；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief CSI_RS_ResourceConfigMobility
 * @note ASN.1：CSI-RS-ResourceConfigMobility；源文件第 6226 行。
 * @note CSI-RS-ResourceConfigMobility ::= SEQUENCE { subcarrierSpacing, csi-RS-CellList-Mobility, refServCellIndex }
 */
struct CSI_RS_ResourceConfigMobility {
    SubcarrierSpacing subcarrierSpacing; /**< ASN.1 subcarrierSpacing；枚举。 */
    CSI_RS_CellMobility* csi_RS_CellList_Mobility_items; /**< ASN.1 csi-RS-CellList-Mobility；SEQUENCE OF CSI_RS_CellMobility，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t csi_RS_CellList_Mobility_count; /**< csi-RS-CellList-Mobility 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_RS_ResourceConfigMobility_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_RS_CellMobility_Csi_rs_MeasurementBW
 * @note ASN.1：csi-rs-MeasurementBW；源文件第 6239 行。
 * @note SEQUENCE { nrofPRBs, startPRB }
 */
struct CSI_RS_CellMobility_Csi_rs_MeasurementBW {
    CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs nrofPRBs; /**< ASN.1 nrofPRBs；枚举。 */
    int64_t startPRB; /**< ASN.1 startPRB；INTEGER (0..2169)，位宽 12 bit。 */
};


/**
 * @brief CSI_RS_CellMobility
 * @note ASN.1：CSI-RS-CellMobility；源文件第 6237 行。
 * @note CSI-RS-CellMobility ::= SEQUENCE { cellId, csi-rs-MeasurementBW, density, csi-rs-ResourceList-Mobility }
 */
struct CSI_RS_CellMobility {
    PhysCellId cellId; /**< ASN.1 cellId；INTEGER (0..1007)，位宽 10 bit。 */
    CSI_RS_CellMobility_Csi_rs_MeasurementBW csi_rs_MeasurementBW; /**< ASN.1 csi-rs-MeasurementBW；结构体。 */
    bool has_density; /**< density 是否存在。 */
    CSI_RS_CellMobility_Density density; /**< ASN.1 density；枚举；OPTIONAL。 */
    CSI_RS_Resource_Mobility* csi_rs_ResourceList_Mobility_items; /**< ASN.1 csi-rs-ResourceList-Mobility；SEQUENCE OF CSI_RS_Resource_Mobility，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t csi_rs_ResourceList_Mobility_count; /**< csi-rs-ResourceList-Mobility 元素个数。 */
};


/**
 * @brief CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17
 * @note ASN.1：slotConfig-r17；源文件第 6268 行。
 * @note CHOICE { ms4, ms5, ms10, ms20, ms40 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag {
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms4 = 0, /**< ASN.1 ms4 */
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms5 = 1, /**< ASN.1 ms5 */
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms10 = 2, /**< ASN.1 ms10 */
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms20 = 3, /**< ASN.1 ms20 */
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms40 = 4, /**< ASN.1 ms40 */
} CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag;

struct CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17 {
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms4; /**< ASN.1 ms4 */
        int64_t ms5; /**< ASN.1 ms5 */
        int64_t ms10; /**< ASN.1 ms10 */
        int64_t ms20; /**< ASN.1 ms20 */
        int64_t ms40; /**< ASN.1 ms40 */
    } u;
};


/**
 * @brief CSI_RS_Resource_Mobility_ExtGroup1
 * @note ASN.1：CSI_RS_Resource_Mobility_ExtGroup1；源文件第 6267 行。
 */
struct CSI_RS_Resource_Mobility_ExtGroup1 {
    bool has_slotConfig_r17; /**< slotConfig-r17 是否存在。 */
    CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17 slotConfig_r17; /**< ASN.1 slotConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_RS_Resource_Mobility_SlotConfig
 * @note ASN.1：slotConfig；源文件第 6249 行。
 * @note CHOICE { ms4, ms5, ms10, ms20, ms40 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_RS_Resource_Mobility_SlotConfig_Tag {
    CSI_RS_Resource_Mobility_SlotConfig_Tag_ms4 = 0, /**< ASN.1 ms4 */
    CSI_RS_Resource_Mobility_SlotConfig_Tag_ms5 = 1, /**< ASN.1 ms5 */
    CSI_RS_Resource_Mobility_SlotConfig_Tag_ms10 = 2, /**< ASN.1 ms10 */
    CSI_RS_Resource_Mobility_SlotConfig_Tag_ms20 = 3, /**< ASN.1 ms20 */
    CSI_RS_Resource_Mobility_SlotConfig_Tag_ms40 = 4, /**< ASN.1 ms40 */
} CSI_RS_Resource_Mobility_SlotConfig_Tag;

struct CSI_RS_Resource_Mobility_SlotConfig {
    CSI_RS_Resource_Mobility_SlotConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms4; /**< ASN.1 ms4 */
        int64_t ms5; /**< ASN.1 ms5 */
        int64_t ms10; /**< ASN.1 ms10 */
        int64_t ms20; /**< ASN.1 ms20 */
        int64_t ms40; /**< ASN.1 ms40 */
    } u;
};


/**
 * @brief CSI_RS_Resource_Mobility_AssociatedSSB
 * @note ASN.1：associatedSSB；源文件第 6256 行。
 * @note SEQUENCE { ssb-Index, isQuasiColocated }
 */
struct CSI_RS_Resource_Mobility_AssociatedSSB {
    SSB_Index ssb_Index; /**< ASN.1 ssb-Index；INTEGER (0..63)，位宽 6 bit。 */
    bool isQuasiColocated; /**< ASN.1 isQuasiColocated；BOOLEAN，1 bit。 */
};


/**
 * @brief CSI_RS_Resource_Mobility_FrequencyDomainAllocation
 * @note ASN.1：frequencyDomainAllocation；源文件第 6260 行。
 * @note CHOICE { row1, row2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag {
    CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row1 = 0, /**< ASN.1 row1 */
    CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row2 = 1, /**< ASN.1 row2 */
} CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag;

struct CSI_RS_Resource_Mobility_FrequencyDomainAllocation {
    CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString row1; /**< ASN.1 row1 */
        BitString row2; /**< ASN.1 row2 */
    } u;
};


/**
 * @brief CSI_RS_Resource_Mobility
 * @note ASN.1：CSI-RS-Resource-Mobility；源文件第 6247 行。
 * @note CSI-RS-Resource-Mobility ::= SEQUENCE { csi-RS-Index, slotConfig, associatedSSB, frequencyDomainAllocation...
 */
struct CSI_RS_Resource_Mobility {
    CSI_RS_Index csi_RS_Index; /**< ASN.1 csi-RS-Index；INTEGER (0..95)，位宽 7 bit。 */
    CSI_RS_Resource_Mobility_SlotConfig slotConfig; /**< ASN.1 slotConfig；结构体。 */
    bool has_associatedSSB; /**< associatedSSB 是否存在。 */
    CSI_RS_Resource_Mobility_AssociatedSSB associatedSSB; /**< ASN.1 associatedSSB；结构体；OPTIONAL。 */
    CSI_RS_Resource_Mobility_FrequencyDomainAllocation frequencyDomainAllocation; /**< ASN.1 frequencyDomainAllocation；结构体。 */
    int64_t firstOFDMSymbolInTimeDomain; /**< ASN.1 firstOFDMSymbolInTimeDomain；INTEGER (0..13)，位宽 4 bit。 */
    int64_t sequenceGenerationConfig; /**< ASN.1 sequenceGenerationConfig；INTEGER (0..1023)，位宽 10 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_RS_Resource_Mobility_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_RS_ResourceMapping_FrequencyDomainAllocation
 * @note ASN.1：frequencyDomainAllocation；源文件第 6284 行。
 * @note CHOICE { row1, row2, row4, other }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag {
    CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row1 = 0, /**< ASN.1 row1 */
    CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row2 = 1, /**< ASN.1 row2 */
    CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row4 = 2, /**< ASN.1 row4 */
    CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_other = 3, /**< ASN.1 other */
} CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag;

struct CSI_RS_ResourceMapping_FrequencyDomainAllocation {
    CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString row1; /**< ASN.1 row1 */
        BitString row2; /**< ASN.1 row2 */
        BitString row4; /**< ASN.1 row4 */
        BitString other; /**< ASN.1 other */
    } u;
};


/**
 * @brief CSI_RS_ResourceMapping_Density
 * @note ASN.1：density；源文件第 6294 行。
 * @note CHOICE { dot5, one, three, spare }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CSI_RS_ResourceMapping_Density_Tag {
    CSI_RS_ResourceMapping_Density_Tag_dot5 = 0, /**< ASN.1 dot5 */
    CSI_RS_ResourceMapping_Density_Tag_one = 1, /**< ASN.1 one */
    CSI_RS_ResourceMapping_Density_Tag_three = 2, /**< ASN.1 three */
    CSI_RS_ResourceMapping_Density_Tag_spare = 3, /**< ASN.1 spare */
} CSI_RS_ResourceMapping_Density_Tag;

struct CSI_RS_ResourceMapping_Density {
    CSI_RS_ResourceMapping_Density_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CSI_RS_ResourceMapping_Density_Dot5 dot5; /**< ASN.1 dot5 */
        Null one; /**< ASN.1 one */
        Null three; /**< ASN.1 three */
        Null spare; /**< ASN.1 spare */
    } u;
};


/**
 * @brief CSI_RS_ResourceMapping
 * @note ASN.1：CSI-RS-ResourceMapping；源文件第 6283 行。
 * @note CSI-RS-ResourceMapping ::= SEQUENCE { frequencyDomainAllocation, nrofPorts, firstOFDMSymbolInTimeDomain,...
 */
struct CSI_RS_ResourceMapping {
    CSI_RS_ResourceMapping_FrequencyDomainAllocation frequencyDomainAllocation; /**< ASN.1 frequencyDomainAllocation；结构体。 */
    CSI_RS_ResourceMapping_NrofPorts nrofPorts; /**< ASN.1 nrofPorts；枚举。 */
    int64_t firstOFDMSymbolInTimeDomain; /**< ASN.1 firstOFDMSymbolInTimeDomain；INTEGER (0..13)，位宽 4 bit。 */
    bool has_firstOFDMSymbolInTimeDomain2; /**< firstOFDMSymbolInTimeDomain2 是否存在。 */
    int64_t firstOFDMSymbolInTimeDomain2; /**< ASN.1 firstOFDMSymbolInTimeDomain2；INTEGER (2..12)，位宽 4 bit；OPTIONAL。 */
    CSI_RS_ResourceMapping_Cdm_Type cdm_Type; /**< ASN.1 cdm-Type；枚举。 */
    CSI_RS_ResourceMapping_Density density; /**< ASN.1 density；结构体。 */
    CSI_FrequencyOccupation freqBand; /**< ASN.1 freqBand；结构体。 */
};


/**
 * @brief CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1
 * @note ASN.1：CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1；源文件第 6312 行。
 */
struct CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1 {
    bool has_sp_CSI_MultiplexingMode_r17; /**< sp-CSI-MultiplexingMode-r17 是否存在。 */
    CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1_Sp_CSI_MultiplexingMode_r17 sp_CSI_MultiplexingMode_r17; /**< ASN.1 sp-CSI-MultiplexingMode-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2
 * @note ASN.1：CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2；源文件第 6315 行。
 */
struct CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2 {
    bool has_csi_ReportSubConfigTriggerList_r18; /**< csi-ReportSubConfigTriggerList-r18 是否存在。 */
    CSI_ReportSubConfigTriggerList_r18 csi_ReportSubConfigTriggerList_r18; /**< ASN.1 csi-ReportSubConfigTriggerList-r18；SEQUENCE OF CSI_ReportSubConfigId_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_ltm_AssociatedReportConfigInfo_r18; /**< ltm-AssociatedReportConfigInfo-r18 是否存在。 */
    LTM_CSI_ReportConfigId_r18 ltm_AssociatedReportConfigInfo_r18; /**< ASN.1 ltm-AssociatedReportConfigInfo-r18；INTEGER (0..47)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief CSI_SemiPersistentOnPUSCH_TriggerState
 * @note ASN.1：CSI-SemiPersistentOnPUSCH-TriggerState；源文件第 6309 行。
 * @note CSI-SemiPersistentOnPUSCH-TriggerState ::= SEQUENCE { associatedReportConfigInfo, sp-CSI-MultiplexingMode-r17, csi-Repor...
 */
struct CSI_SemiPersistentOnPUSCH_TriggerState {
    CSI_ReportConfigId associatedReportConfigInfo; /**< ASN.1 associatedReportConfigInfo；INTEGER (0..47)，位宽 6 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CSI_SSB_ResourceSet_ExtGroup1
 * @note ASN.1：CSI_SSB_ResourceSet_ExtGroup1；源文件第 6328 行。
 */
struct CSI_SSB_ResourceSet_ExtGroup1 {
    bool has_servingAdditionalPCIList_r17; /**< servingAdditionalPCIList-r17 是否存在。 */
    ServingAdditionalPCIIndex_r17* servingAdditionalPCIList_r17_items; /**< ASN.1 servingAdditionalPCIList-r17；SEQUENCE OF ServingAdditionalPCIIndex_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t servingAdditionalPCIList_r17_count; /**< servingAdditionalPCIList-r17 元素个数。 */
};


/**
 * @brief CSI_SSB_ResourceSet
 * @note ASN.1：CSI-SSB-ResourceSet；源文件第 6324 行。
 * @note CSI-SSB-ResourceSet ::= SEQUENCE { csi-SSB-ResourceSetId, csi-SSB-ResourceList, servingAdditionalPCIL...
 */
struct CSI_SSB_ResourceSet {
    CSI_SSB_ResourceSetId csi_SSB_ResourceSetId; /**< ASN.1 csi-SSB-ResourceSetId；INTEGER (0..63)，位宽 6 bit。 */
    SSB_Index* csi_SSB_ResourceList_items; /**< ASN.1 csi-SSB-ResourceList；SEQUENCE OF SSB_Index，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t csi_SSB_ResourceList_count; /**< csi-SSB-ResourceList 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_SSB_ResourceSet_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief DL_PPW_PeriodicityAndStartSlot_r17_Scs15
 * @note ASN.1：scs15；源文件第 6359 行。
 * @note CHOICE { n4, n5, n8, n10, n16, n20, n32, n40, n64, n80, n160, n320, n640, n12...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n4 = 0, /**< ASN.1 n4 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5 = 1, /**< ASN.1 n5 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n8 = 2, /**< ASN.1 n8 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10 = 3, /**< ASN.1 n10 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n16 = 4, /**< ASN.1 n16 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n20 = 5, /**< ASN.1 n20 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n32 = 6, /**< ASN.1 n32 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n40 = 7, /**< ASN.1 n40 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n64 = 8, /**< ASN.1 n64 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n80 = 9, /**< ASN.1 n80 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n160 = 10, /**< ASN.1 n160 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n320 = 11, /**< ASN.1 n320 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n640 = 12, /**< ASN.1 n640 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n1280 = 13, /**< ASN.1 n1280 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n2560 = 14, /**< ASN.1 n2560 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5120 = 15, /**< ASN.1 n5120 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10240 = 16, /**< ASN.1 n10240 */
} DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag;

struct DL_PPW_PeriodicityAndStartSlot_r17_Scs15 {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n4; /**< ASN.1 n4 */
        int64_t n5; /**< ASN.1 n5 */
        int64_t n8; /**< ASN.1 n8 */
        int64_t n10; /**< ASN.1 n10 */
        int64_t n16; /**< ASN.1 n16 */
        int64_t n20; /**< ASN.1 n20 */
        int64_t n32; /**< ASN.1 n32 */
        int64_t n40; /**< ASN.1 n40 */
        int64_t n64; /**< ASN.1 n64 */
        int64_t n80; /**< ASN.1 n80 */
        int64_t n160; /**< ASN.1 n160 */
        int64_t n320; /**< ASN.1 n320 */
        int64_t n640; /**< ASN.1 n640 */
        int64_t n1280; /**< ASN.1 n1280 */
        int64_t n2560; /**< ASN.1 n2560 */
        int64_t n5120; /**< ASN.1 n5120 */
        int64_t n10240; /**< ASN.1 n10240 */
    } u;
};


/**
 * @brief DL_PPW_PeriodicityAndStartSlot_r17_Scs30
 * @note ASN.1：scs30；源文件第 6379 行。
 * @note CHOICE { n8, n10, n16, n20, n32, n40, n64, n80, n128, n160, n320, n640, n1280...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n8 = 0, /**< ASN.1 n8 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10 = 1, /**< ASN.1 n10 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n16 = 2, /**< ASN.1 n16 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20 = 3, /**< ASN.1 n20 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n32 = 4, /**< ASN.1 n32 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n40 = 5, /**< ASN.1 n40 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n64 = 6, /**< ASN.1 n64 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n80 = 7, /**< ASN.1 n80 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n128 = 8, /**< ASN.1 n128 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n160 = 9, /**< ASN.1 n160 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n320 = 10, /**< ASN.1 n320 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n640 = 11, /**< ASN.1 n640 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n1280 = 12, /**< ASN.1 n1280 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n2560 = 13, /**< ASN.1 n2560 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n5120 = 14, /**< ASN.1 n5120 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10240 = 15, /**< ASN.1 n10240 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20480 = 16, /**< ASN.1 n20480 */
} DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag;

struct DL_PPW_PeriodicityAndStartSlot_r17_Scs30 {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n8; /**< ASN.1 n8 */
        int64_t n10; /**< ASN.1 n10 */
        int64_t n16; /**< ASN.1 n16 */
        int64_t n20; /**< ASN.1 n20 */
        int64_t n32; /**< ASN.1 n32 */
        int64_t n40; /**< ASN.1 n40 */
        int64_t n64; /**< ASN.1 n64 */
        int64_t n80; /**< ASN.1 n80 */
        int64_t n128; /**< ASN.1 n128 */
        int64_t n160; /**< ASN.1 n160 */
        int64_t n320; /**< ASN.1 n320 */
        int64_t n640; /**< ASN.1 n640 */
        int64_t n1280; /**< ASN.1 n1280 */
        int64_t n2560; /**< ASN.1 n2560 */
        int64_t n5120; /**< ASN.1 n5120 */
        int64_t n10240; /**< ASN.1 n10240 */
        int64_t n20480; /**< ASN.1 n20480 */
    } u;
};


/**
 * @brief DL_PPW_PeriodicityAndStartSlot_r17_Scs60
 * @note ASN.1：scs60；源文件第 6399 行。
 * @note CHOICE { n16, n20, n32, n40, n64, n80, n128, n160, n256, n320, n640, n1280, n...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n16 = 0, /**< ASN.1 n16 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20 = 1, /**< ASN.1 n20 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n32 = 2, /**< ASN.1 n32 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40 = 3, /**< ASN.1 n40 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n64 = 4, /**< ASN.1 n64 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n80 = 5, /**< ASN.1 n80 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n128 = 6, /**< ASN.1 n128 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n160 = 7, /**< ASN.1 n160 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n256 = 8, /**< ASN.1 n256 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n320 = 9, /**< ASN.1 n320 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n640 = 10, /**< ASN.1 n640 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n1280 = 11, /**< ASN.1 n1280 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n2560 = 12, /**< ASN.1 n2560 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n5120 = 13, /**< ASN.1 n5120 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n10240 = 14, /**< ASN.1 n10240 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20480 = 15, /**< ASN.1 n20480 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40960 = 16, /**< ASN.1 n40960 */
} DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag;

struct DL_PPW_PeriodicityAndStartSlot_r17_Scs60 {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n16; /**< ASN.1 n16 */
        int64_t n20; /**< ASN.1 n20 */
        int64_t n32; /**< ASN.1 n32 */
        int64_t n40; /**< ASN.1 n40 */
        int64_t n64; /**< ASN.1 n64 */
        int64_t n80; /**< ASN.1 n80 */
        int64_t n128; /**< ASN.1 n128 */
        int64_t n160; /**< ASN.1 n160 */
        int64_t n256; /**< ASN.1 n256 */
        int64_t n320; /**< ASN.1 n320 */
        int64_t n640; /**< ASN.1 n640 */
        int64_t n1280; /**< ASN.1 n1280 */
        int64_t n2560; /**< ASN.1 n2560 */
        int64_t n5120; /**< ASN.1 n5120 */
        int64_t n10240; /**< ASN.1 n10240 */
        int64_t n20480; /**< ASN.1 n20480 */
        int64_t n40960; /**< ASN.1 n40960 */
    } u;
};


/**
 * @brief DL_PPW_PeriodicityAndStartSlot_r17_Scs120
 * @note ASN.1：scs120；源文件第 6419 行。
 * @note CHOICE { n32, n40, n64, n80, n128, n160, n256, n320, n512, n640, n1280, n2560...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n32 = 0, /**< ASN.1 n32 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40 = 1, /**< ASN.1 n40 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n64 = 2, /**< ASN.1 n64 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n80 = 3, /**< ASN.1 n80 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n128 = 4, /**< ASN.1 n128 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n160 = 5, /**< ASN.1 n160 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n256 = 6, /**< ASN.1 n256 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n320 = 7, /**< ASN.1 n320 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n512 = 8, /**< ASN.1 n512 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n640 = 9, /**< ASN.1 n640 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n1280 = 10, /**< ASN.1 n1280 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n2560 = 11, /**< ASN.1 n2560 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n5120 = 12, /**< ASN.1 n5120 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n10240 = 13, /**< ASN.1 n10240 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n20480 = 14, /**< ASN.1 n20480 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40960 = 15, /**< ASN.1 n40960 */
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n81920 = 16, /**< ASN.1 n81920 */
} DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag;

struct DL_PPW_PeriodicityAndStartSlot_r17_Scs120 {
    DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n32; /**< ASN.1 n32 */
        int64_t n40; /**< ASN.1 n40 */
        int64_t n64; /**< ASN.1 n64 */
        int64_t n80; /**< ASN.1 n80 */
        int64_t n128; /**< ASN.1 n128 */
        int64_t n160; /**< ASN.1 n160 */
        int64_t n256; /**< ASN.1 n256 */
        int64_t n320; /**< ASN.1 n320 */
        int64_t n512; /**< ASN.1 n512 */
        int64_t n640; /**< ASN.1 n640 */
        int64_t n1280; /**< ASN.1 n1280 */
        int64_t n2560; /**< ASN.1 n2560 */
        int64_t n5120; /**< ASN.1 n5120 */
        int64_t n10240; /**< ASN.1 n10240 */
        int64_t n20480; /**< ASN.1 n20480 */
        int64_t n40960; /**< ASN.1 n40960 */
        int64_t n81920; /**< ASN.1 n81920 */
    } u;
};


/**
 * @brief DL_PPW_PeriodicityAndStartSlot_r17
 * @note ASN.1：DL-PPW-PeriodicityAndStartSlot-r17；源文件第 6358 行。
 * @note DL-PPW-PeriodicityAndStartSlot-r17 ::= CHOICE { scs15, scs30, scs60, scs120 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DL_PPW_PeriodicityAndStartSlot_r17_Tag {
    DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs15 = 0, /**< ASN.1 scs15 */
    DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs30 = 1, /**< ASN.1 scs30 */
    DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs60 = 2, /**< ASN.1 scs60 */
    DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs120 = 3, /**< ASN.1 scs120 */
} DL_PPW_PeriodicityAndStartSlot_r17_Tag;

struct DL_PPW_PeriodicityAndStartSlot_r17 {
    DL_PPW_PeriodicityAndStartSlot_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DL_PPW_PeriodicityAndStartSlot_r17_Scs15 scs15; /**< ASN.1 scs15 */
        DL_PPW_PeriodicityAndStartSlot_r17_Scs30 scs30; /**< ASN.1 scs30 */
        DL_PPW_PeriodicityAndStartSlot_r17_Scs60 scs60; /**< ASN.1 scs60 */
        DL_PPW_PeriodicityAndStartSlot_r17_Scs120 scs120; /**< ASN.1 scs120 */
    } u;
};


/**
 * @brief DL_PPW_PreConfig_r17
 * @note ASN.1：DL-PPW-PreConfig-r17；源文件第 6348 行。
 * @note DL-PPW-PreConfig-r17 ::= SEQUENCE { dl-PPW-ID-r17, dl-PPW-PeriodicityAndStartSlot-r17, length-r17, typ...
 */
struct DL_PPW_PreConfig_r17 {
    DL_PPW_ID_r17 dl_PPW_ID_r17; /**< ASN.1 dl-PPW-ID-r17；INTEGER (0..15)，位宽 4 bit。 */
    DL_PPW_PeriodicityAndStartSlot_r17 dl_PPW_PeriodicityAndStartSlot_r17; /**< ASN.1 dl-PPW-PeriodicityAndStartSlot-r17；结构体。 */
    int64_t length_r17; /**< ASN.1 length-r17；INTEGER (1..160)，位宽 8 bit。 */
    bool has_type_r17; /**< type-r17 是否存在。 */
    DL_PPW_PreConfig_r17_Type_r17 type_r17; /**< ASN.1 type-r17；枚举；OPTIONAL。 */
    bool has_priority_r17; /**< priority-r17 是否存在。 */
    DL_PPW_PreConfig_r17_Priority_r17 priority_r17; /**< ASN.1 priority-r17；枚举；OPTIONAL。 */
};


/**
 * @brief INT_ConfigurationPerServingCell
 * @note ASN.1：INT-ConfigurationPerServingCell；源文件第 6620 行。
 * @note INT-ConfigurationPerServingCell ::= SEQUENCE { servingCellId, positionInDCI }
 */
struct INT_ConfigurationPerServingCell {
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit。 */
    int64_t positionInDCI; /**< ASN.1 positionInDCI；INTEGER (0..125)，位宽 7 bit。 */
};


/**
 * @brief EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18
 * @note ASN.1：prach-RootSequenceIndex-r18；源文件第 6766 行。
 * @note CHOICE { l839, l139 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag {
    EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l839 = 0, /**< ASN.1 l839 */
    EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l139 = 1, /**< ASN.1 l139 */
} EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag;

struct EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18 {
    EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t l839; /**< ASN.1 l839 */
        int64_t l139; /**< ASN.1 l139 */
    } u;
};


/**
 * @brief EarlyUL_SyncConfig_r18
 * @note ASN.1：EarlyUL-SyncConfig-r18；源文件第 6761 行。
 * @note EarlyUL-SyncConfig-r18 ::= SEQUENCE { frequencyInfoUL-r18, rach-ConfigGeneric-r18, bwp-GenericParameters...
 */
struct EarlyUL_SyncConfig_r18 {
    FrequencyInfoUL frequencyInfoUL_r18; /**< ASN.1 frequencyInfoUL-r18；结构体。 */
    RACH_ConfigGeneric rach_ConfigGeneric_r18; /**< ASN.1 rach-ConfigGeneric-r18；结构体。 */
    BWP bwp_GenericParameters_r18; /**< ASN.1 bwp-GenericParameters-r18；结构体。 */
    bool has_ssb_PerRACH_Occasion_r18; /**< ssb-PerRACH-Occasion-r18 是否存在。 */
    EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18 ssb_PerRACH_Occasion_r18; /**< ASN.1 ssb-PerRACH-Occasion-r18；枚举；OPTIONAL。 */
    bool has_prach_RootSequenceIndex_r18; /**< prach-RootSequenceIndex-r18 是否存在。 */
    EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18 prach_RootSequenceIndex_r18; /**< ASN.1 prach-RootSequenceIndex-r18；结构体；OPTIONAL。 */
    bool has_ltm_PRACH_SubcarrierSpacing_r18; /**< ltm-PRACH-SubcarrierSpacing-r18 是否存在。 */
    SubcarrierSpacing ltm_PRACH_SubcarrierSpacing_r18; /**< ASN.1 ltm-PRACH-SubcarrierSpacing-r18；枚举；OPTIONAL。 */
    bool has_n_TimingAdvanceOffset_r18; /**< n-TimingAdvanceOffset-r18 是否存在。 */
    EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18 n_TimingAdvanceOffset_r18; /**< ASN.1 n-TimingAdvanceOffset-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureCombination_r17
 * @note ASN.1：FeatureCombination-r17；源文件第 6821 行。
 * @note FeatureCombination-r17 ::= SEQUENCE { redCap-r17, smallData-r17, nsag-r17, msg3-Repetitions-r17, msg1-Re...
 */
struct FeatureCombination_r17 {
    bool has_redCap_r17; /**< redCap-r17 是否存在。 */
    FeatureCombination_r17_RedCap_r17 redCap_r17; /**< ASN.1 redCap-r17；枚举；OPTIONAL。 */
    bool has_smallData_r17; /**< smallData-r17 是否存在。 */
    FeatureCombination_r17_SmallData_r17 smallData_r17; /**< ASN.1 smallData-r17；枚举；OPTIONAL。 */
    bool has_nsag_r17; /**< nsag-r17 是否存在。 */
    NSAG_List_r17 nsag_r17; /**< ASN.1 nsag-r17；SEQUENCE OF NSAG_ID_r17，SIZE (1..8)；OPTIONAL。 */
    bool has_msg3_Repetitions_r17; /**< msg3-Repetitions-r17 是否存在。 */
    FeatureCombination_r17_Msg3_Repetitions_r17 msg3_Repetitions_r17; /**< ASN.1 msg3-Repetitions-r17；枚举；OPTIONAL。 */
    bool has_msg1_Repetitions_r18; /**< msg1-Repetitions-r18 是否存在。 */
    FeatureCombination_r17_Msg1_Repetitions_r18 msg1_Repetitions_r18; /**< ASN.1 msg1-Repetitions-r18；枚举；OPTIONAL。 */
    bool has_eRedCap_r18; /**< eRedCap-r18 是否存在。 */
    FeatureCombination_r17_ERedCap_r18 eRedCap_r18; /**< ASN.1 eRedCap-r18；枚举；OPTIONAL。 */
    bool has_spare2; /**< spare2 是否存在。 */
    FeatureCombination_r17_Spare2 spare2; /**< ASN.1 spare2；枚举；OPTIONAL。 */
    bool has_spare1; /**< spare1 是否存在。 */
    FeatureCombination_r17_Spare1 spare1; /**< ASN.1 spare1；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureCombinationPreambles_r17_ExtGroup1
 * @note ASN.1：FeatureCombinationPreambles_r17_ExtGroup1；源文件第 6853 行。
 */
struct FeatureCombinationPreambles_r17_ExtGroup1 {
    bool has_msg1_RepetitionNum_r18; /**< msg1-RepetitionNum-r18 是否存在。 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18 msg1_RepetitionNum_r18; /**< ASN.1 msg1-RepetitionNum-r18；枚举；OPTIONAL。 */
    bool has_msg1_RepetitionTimeOffsetROGroup_r18; /**< msg1-RepetitionTimeOffsetROGroup-r18 是否存在。 */
    FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18 msg1_RepetitionTimeOffsetROGroup_r18; /**< ASN.1 msg1-RepetitionTimeOffsetROGroup-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureCombinationPreambles_r17_GroupBconfigured_r17
 * @note ASN.1：groupBconfigured-r17；源文件第 6842 行。
 * @note SEQUENCE { ra-SizeGroupA-r17, messagePowerOffsetGroupB-r17, numberOfRA-Preamb...
 */
struct FeatureCombinationPreambles_r17_GroupBconfigured_r17 {
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17 ra_SizeGroupA_r17; /**< ASN.1 ra-SizeGroupA-r17；枚举。 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17 messagePowerOffsetGroupB_r17; /**< ASN.1 messagePowerOffsetGroupB-r17；枚举。 */
    int64_t numberOfRA_PreamblesGroupA_r17; /**< ASN.1 numberOfRA-PreamblesGroupA-r17；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief FeatureCombinationPreambles_r17
 * @note ASN.1：FeatureCombinationPreambles-r17；源文件第 6837 行。
 * @note FeatureCombinationPreambles-r17 ::= SEQUENCE { featureCombination-r17, startPreambleForThisPartition-r17, numberO...
 */
struct FeatureCombinationPreambles_r17 {
    FeatureCombination_r17 featureCombination_r17; /**< ASN.1 featureCombination-r17；结构体。 */
    int64_t startPreambleForThisPartition_r17; /**< ASN.1 startPreambleForThisPartition-r17；INTEGER (0..63)，位宽 6 bit。 */
    int64_t numberOfPreamblesPerSSB_ForThisPartition_r17; /**< ASN.1 numberOfPreamblesPerSSB-ForThisPartition-r17；INTEGER (1..64)，位宽 6 bit。 */
    bool has_ssb_SharedRO_MaskIndex_r17; /**< ssb-SharedRO-MaskIndex-r17 是否存在。 */
    int64_t ssb_SharedRO_MaskIndex_r17; /**< ASN.1 ssb-SharedRO-MaskIndex-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_groupBconfigured_r17; /**< groupBconfigured-r17 是否存在。 */
    FeatureCombinationPreambles_r17_GroupBconfigured_r17 groupBconfigured_r17; /**< ASN.1 groupBconfigured-r17；结构体；OPTIONAL。 */
    bool has_separateMsgA_PUSCH_Config_r17; /**< separateMsgA-PUSCH-Config-r17 是否存在。 */
    MsgA_PUSCH_Config_r16 separateMsgA_PUSCH_Config_r17; /**< ASN.1 separateMsgA-PUSCH-Config-r17；结构体；OPTIONAL。 */
    bool has_msgA_RSRP_Threshold_r17; /**< msgA-RSRP-Threshold-r17 是否存在。 */
    RSRP_Range msgA_RSRP_Threshold_r17; /**< ASN.1 msgA-RSRP-Threshold-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrp_ThresholdSSB_r17; /**< rsrp-ThresholdSSB-r17 是否存在。 */
    RSRP_Range rsrp_ThresholdSSB_r17; /**< ASN.1 rsrp-ThresholdSSB-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_deltaPreamble_r17; /**< deltaPreamble-r17 是否存在。 */
    int64_t deltaPreamble_r17; /**< ASN.1 deltaPreamble-r17；INTEGER (-1..6)，位宽 3 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FeatureCombinationPreambles_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SliceInfoListDedicated_r17
 * @note ASN.1：SliceInfoListDedicated-r17；源文件第 6879 行。
 * @note SliceInfoListDedicated-r17 ::= SEQUENCE OF (size 1..8) OF SliceInfoDedicated-r17
 */
struct SliceInfoListDedicated_r17 {
    SliceInfoDedicated_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FreqPriorityDedicatedSlicing_r17
 * @note ASN.1：FreqPriorityDedicatedSlicing-r17；源文件第 6874 行。
 * @note FreqPriorityDedicatedSlicing-r17 ::= SEQUENCE { dl-ExplicitCarrierFreq-r17, sliceInfoListDedicated-r17 }
 */
struct FreqPriorityDedicatedSlicing_r17 {
    ARFCN_ValueNR dl_ExplicitCarrierFreq_r17; /**< ASN.1 dl-ExplicitCarrierFreq-r17；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_sliceInfoListDedicated_r17; /**< sliceInfoListDedicated-r17 是否存在。 */
    SliceInfoListDedicated_r17 sliceInfoListDedicated_r17; /**< ASN.1 sliceInfoListDedicated-r17；SEQUENCE OF SliceInfoDedicated_r17，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief NSAG_IdentityInfo_r17
 * @note ASN.1：NSAG-IdentityInfo-r17；源文件第 8978 行。
 * @note NSAG-IdentityInfo-r17 ::= SEQUENCE { nsag-ID-r17, trackingAreaCode-r17 }
 */
struct NSAG_IdentityInfo_r17 {
    NSAG_ID_r17 nsag_ID_r17; /**< ASN.1 nsag-ID-r17；SIZE (8)，定长。 */
    bool has_trackingAreaCode_r17; /**< trackingAreaCode-r17 是否存在。 */
    TrackingAreaCode trackingAreaCode_r17; /**< ASN.1 trackingAreaCode-r17；SIZE (24)，定长；OPTIONAL。 */
};


/**
 * @brief SliceInfoDedicated_r17
 * @note ASN.1：SliceInfoDedicated-r17；源文件第 6881 行。
 * @note SliceInfoDedicated-r17 ::= SEQUENCE { nsag-IdentityInfo-r17, nsag-CellReselectionPriority-r17, nsag-Cell...
 */
struct SliceInfoDedicated_r17 {
    NSAG_IdentityInfo_r17 nsag_IdentityInfo_r17; /**< ASN.1 nsag-IdentityInfo-r17；结构体。 */
    bool has_nsag_CellReselectionPriority_r17; /**< nsag-CellReselectionPriority-r17 是否存在。 */
    CellReselectionPriority nsag_CellReselectionPriority_r17; /**< ASN.1 nsag-CellReselectionPriority-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_nsag_CellReselectionSubPriority_r17; /**< nsag-CellReselectionSubPriority-r17 是否存在。 */
    CellReselectionSubPriority nsag_CellReselectionSubPriority_r17; /**< ASN.1 nsag-CellReselectionSubPriority-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SliceInfoList_r17
 * @note ASN.1：SliceInfoList-r17；源文件第 6897 行。
 * @note SliceInfoList-r17 ::= SEQUENCE OF (size 1..8) OF SliceInfo-r17
 */
struct SliceInfoList_r17 {
    SliceInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FreqPrioritySlicing_r17
 * @note ASN.1：FreqPrioritySlicing-r17；源文件第 6892 行。
 * @note FreqPrioritySlicing-r17 ::= SEQUENCE { dl-ImplicitCarrierFreq-r17, sliceInfoList-r17 }
 */
struct FreqPrioritySlicing_r17 {
    int64_t dl_ImplicitCarrierFreq_r17; /**< ASN.1 dl-ImplicitCarrierFreq-r17；INTEGER (0..8)，位宽 4 bit。 */
    bool has_sliceInfoList_r17; /**< sliceInfoList-r17 是否存在。 */
    SliceInfoList_r17 sliceInfoList_r17; /**< ASN.1 sliceInfoList-r17；SEQUENCE OF SliceInfo_r17，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SliceCellListNR_r17
 * @note ASN.1：SliceCellListNR-r17；源文件第 6909 行。
 * @note SliceCellListNR-r17 ::= SEQUENCE OF (size 1..16) OF PCI-Range
 */
struct SliceCellListNR_r17 {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SliceInfo_r17_SliceCellListNR_r17
 * @note ASN.1：sliceCellListNR-r17；源文件第 6903 行。
 * @note CHOICE { sliceAllowedCellListNR-r17, sliceExcludedCellListNR-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SliceInfo_r17_SliceCellListNR_r17_Tag {
    SliceInfo_r17_SliceCellListNR_r17_Tag_sliceAllowedCellListNR_r17 = 0, /**< ASN.1 sliceAllowedCellListNR-r17 */
    SliceInfo_r17_SliceCellListNR_r17_Tag_sliceExcludedCellListNR_r17 = 1, /**< ASN.1 sliceExcludedCellListNR-r17 */
} SliceInfo_r17_SliceCellListNR_r17_Tag;

struct SliceInfo_r17_SliceCellListNR_r17 {
    SliceInfo_r17_SliceCellListNR_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SliceCellListNR_r17 sliceAllowedCellListNR_r17; /**< ASN.1 sliceAllowedCellListNR-r17 */
        SliceCellListNR_r17 sliceExcludedCellListNR_r17; /**< ASN.1 sliceExcludedCellListNR-r17 */
    } u;
};


/**
 * @brief SliceInfo_r17
 * @note ASN.1：SliceInfo-r17；源文件第 6899 行。
 * @note SliceInfo-r17 ::= SEQUENCE { nsag-IdentityInfo-r17, nsag-CellReselectionPriority-r17, nsag-Cell...
 */
struct SliceInfo_r17 {
    NSAG_IdentityInfo_r17 nsag_IdentityInfo_r17; /**< ASN.1 nsag-IdentityInfo-r17；结构体。 */
    bool has_nsag_CellReselectionPriority_r17; /**< nsag-CellReselectionPriority-r17 是否存在。 */
    CellReselectionPriority nsag_CellReselectionPriority_r17; /**< ASN.1 nsag-CellReselectionPriority-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_nsag_CellReselectionSubPriority_r17; /**< nsag-CellReselectionSubPriority-r17 是否存在。 */
    CellReselectionSubPriority nsag_CellReselectionSubPriority_r17; /**< ASN.1 nsag-CellReselectionSubPriority-r17；枚举；OPTIONAL。 */
    bool has_sliceCellListNR_r17; /**< sliceCellListNR-r17 是否存在。 */
    SliceInfo_r17_SliceCellListNR_r17 sliceCellListNR_r17; /**< ASN.1 sliceCellListNR-r17；结构体；OPTIONAL。 */
};


/**
 * @brief EUTRA_RSTD_Info
 * @note ASN.1：EUTRA-RSTD-Info；源文件第 7080 行。
 * @note EUTRA-RSTD-Info ::= SEQUENCE { carrierFreq, measPRS-Offset }
 */
struct EUTRA_RSTD_Info {
    ARFCN_ValueEUTRA carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..262143)，位宽 18 bit。 */
    int64_t measPRS_Offset; /**< ASN.1 measPRS-Offset；INTEGER (0..39)，位宽 6 bit。 */
};


/**
 * @brief NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16
 * @note ASN.1：nr-MeasPRS-RepetitionAndOffset-r16；源文件第 7090 行。
 * @note CHOICE { ms20-r16, ms40-r16, ms80-r16, ms160-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag {
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms20_r16 = 0, /**< ASN.1 ms20-r16 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms40_r16 = 1, /**< ASN.1 ms40-r16 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms80_r16 = 2, /**< ASN.1 ms80-r16 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms160_r16 = 3, /**< ASN.1 ms160-r16 */
} NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag;

struct NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16 {
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms20_r16; /**< ASN.1 ms20-r16 */
        int64_t ms40_r16; /**< ASN.1 ms40-r16 */
        int64_t ms80_r16; /**< ASN.1 ms80-r16 */
        int64_t ms160_r16; /**< ASN.1 ms160-r16 */
    } u;
};


/**
 * @brief NR_PRS_MeasurementInfo_r16
 * @note ASN.1：NR-PRS-MeasurementInfo-r16；源文件第 7088 行。
 * @note NR-PRS-MeasurementInfo-r16 ::= SEQUENCE { dl-PRS-PointA-r16, nr-MeasPRS-RepetitionAndOffset-r16, nr-MeasPRS-...
 */
struct NR_PRS_MeasurementInfo_r16 {
    ARFCN_ValueNR dl_PRS_PointA_r16; /**< ASN.1 dl-PRS-PointA-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16 nr_MeasPRS_RepetitionAndOffset_r16; /**< ASN.1 nr-MeasPRS-RepetitionAndOffset-r16；结构体。 */
    NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16 nr_MeasPRS_length_r16; /**< ASN.1 nr-MeasPRS-length-r16；枚举。 */
};


/**
 * @brief LTE_NeighCellsCRS_AssistInfo_r17
 * @note ASN.1：LTE-NeighCellsCRS-AssistInfo-r17；源文件第 7150 行。
 * @note LTE-NeighCellsCRS-AssistInfo-r17 ::= SEQUENCE { neighCarrierBandwidthDL-r17, neighCarrierFreqDL-r17, neighCellId-r...
 */
struct LTE_NeighCellsCRS_AssistInfo_r17 {
    bool has_neighCarrierBandwidthDL_r17; /**< neighCarrierBandwidthDL-r17 是否存在。 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17 neighCarrierBandwidthDL_r17; /**< ASN.1 neighCarrierBandwidthDL-r17；枚举；OPTIONAL。 */
    bool has_neighCarrierFreqDL_r17; /**< neighCarrierFreqDL-r17 是否存在。 */
    int64_t neighCarrierFreqDL_r17; /**< ASN.1 neighCarrierFreqDL-r17；INTEGER (0..16383)，位宽 14 bit；OPTIONAL。 */
    bool has_neighCellId_r17; /**< neighCellId-r17 是否存在。 */
    EUTRA_PhysCellId neighCellId_r17; /**< ASN.1 neighCellId-r17；INTEGER (0..503)，位宽 9 bit；OPTIONAL。 */
    bool has_neighCRS_muting_r17; /**< neighCRS-muting-r17 是否存在。 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighCRS_muting_r17 neighCRS_muting_r17; /**< ASN.1 neighCRS-muting-r17；枚举；OPTIONAL。 */
    bool has_neighMBSFN_SubframeConfigList_r17; /**< neighMBSFN-SubframeConfigList-r17 是否存在。 */
    EUTRA_MBSFN_SubframeConfigList neighMBSFN_SubframeConfigList_r17; /**< ASN.1 neighMBSFN-SubframeConfigList-r17；SEQUENCE OF EUTRA_MBSFN_SubframeConfig，SIZE (1..8)；OPTIONAL。 */
    bool has_neighNrofCRS_Ports_r17; /**< neighNrofCRS-Ports-r17 是否存在。 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17 neighNrofCRS_Ports_r17; /**< ASN.1 neighNrofCRS-Ports-r17；枚举；OPTIONAL。 */
    bool has_neighV_Shift_r17; /**< neighV-Shift-r17 是否存在。 */
    LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17 neighV_Shift_r17; /**< ASN.1 neighV-Shift-r17；枚举；OPTIONAL。 */
};


/**
 * @brief LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18
 * @note ASN.1：ssb-PositionsInBurst-r18；源文件第 7186 行。
 * @note CHOICE { shortBitmap, mediumBitmap, longBitmap }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag {
    LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_shortBitmap = 0, /**< ASN.1 shortBitmap */
    LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_mediumBitmap = 1, /**< ASN.1 mediumBitmap */
    LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_longBitmap = 2, /**< ASN.1 longBitmap */
} LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag;

struct LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18 {
    LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString shortBitmap; /**< ASN.1 shortBitmap */
        BitString mediumBitmap; /**< ASN.1 mediumBitmap */
        BitString longBitmap; /**< ASN.1 longBitmap */
    } u;
};


/**
 * @brief LTM_SSB_Config_r18
 * @note ASN.1：LTM-SSB-Config-r18；源文件第 7182 行。
 * @note LTM-SSB-Config-r18 ::= SEQUENCE { ssb-Frequency-r18, subcarrierSpacing-r18, ssb-Periodicity-r18, ssb...
 */
struct LTM_SSB_Config_r18 {
    ARFCN_ValueNR ssb_Frequency_r18; /**< ASN.1 ssb-Frequency-r18；INTEGER (0..3279165)，位宽 22 bit。 */
    SubcarrierSpacing subcarrierSpacing_r18; /**< ASN.1 subcarrierSpacing-r18；枚举。 */
    bool has_ssb_Periodicity_r18; /**< ssb-Periodicity-r18 是否存在。 */
    LTM_SSB_Config_r18_Ssb_Periodicity_r18 ssb_Periodicity_r18; /**< ASN.1 ssb-Periodicity-r18；枚举；OPTIONAL。 */
    bool has_ssb_PositionsInBurst_r18; /**< ssb-PositionsInBurst-r18 是否存在。 */
    LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18 ssb_PositionsInBurst_r18; /**< ASN.1 ssb-PositionsInBurst-r18；结构体；OPTIONAL。 */
    bool has_ss_PBCH_BlockPower_r18; /**< ss-PBCH-BlockPower-r18 是否存在。 */
    int64_t ss_PBCH_BlockPower_r18; /**< ASN.1 ss-PBCH-BlockPower-r18；INTEGER (-60..50)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief LTM_TCI_Info_r18
 * @note ASN.1：LTM-TCI-Info-r18；源文件第 7279 行。
 * @note LTM-TCI-Info-r18 ::= SEQUENCE { ltm-DL-OrJointTCI-StateToAddModList-r18, ltm-DL-OrJointTCI-StateTo...
 */
struct LTM_TCI_Info_r18 {
    bool has_ltm_DL_OrJointTCI_StateToAddModList_r18; /**< ltm-DL-OrJointTCI-StateToAddModList-r18 是否存在。 */
    CandidateTCI_State_r18* ltm_DL_OrJointTCI_StateToAddModList_r18_items; /**< ASN.1 ltm-DL-OrJointTCI-StateToAddModList-r18；SEQUENCE OF CandidateTCI_State_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_DL_OrJointTCI_StateToAddModList_r18_count; /**< ltm-DL-OrJointTCI-StateToAddModList-r18 元素个数。 */
    bool has_ltm_DL_OrJointTCI_StateToReleaseList_r18; /**< ltm-DL-OrJointTCI-StateToReleaseList-r18 是否存在。 */
    TCI_StateId* ltm_DL_OrJointTCI_StateToReleaseList_r18_items; /**< ASN.1 ltm-DL-OrJointTCI-StateToReleaseList-r18；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_DL_OrJointTCI_StateToReleaseList_r18_count; /**< ltm-DL-OrJointTCI-StateToReleaseList-r18 元素个数。 */
    bool has_ltm_UL_TCI_StateToAddModList_r18; /**< ltm-UL-TCI-StateToAddModList-r18 是否存在。 */
    CandidateTCI_UL_State_r18* ltm_UL_TCI_StateToAddModList_r18_items; /**< ASN.1 ltm-UL-TCI-StateToAddModList-r18；SEQUENCE OF CandidateTCI_UL_State_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_UL_TCI_StateToAddModList_r18_count; /**< ltm-UL-TCI-StateToAddModList-r18 元素个数。 */
    bool has_ltm_UL_TCI_StateToReleaseList_r18; /**< ltm-UL-TCI-StateToReleaseList-r18 是否存在。 */
    TCI_UL_StateId_r17* ltm_UL_TCI_StateToReleaseList_r18_items; /**< ASN.1 ltm-UL-TCI-StateToReleaseList-r18；SEQUENCE OF TCI_UL_StateId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_UL_TCI_StateToReleaseList_r18_count; /**< ltm-UL-TCI-StateToReleaseList-r18 元素个数。 */
    bool has_ltm_NZP_CSI_RS_ResourceToAddModList_r18; /**< ltm-NZP-CSI-RS-ResourceToAddModList-r18 是否存在。 */
    NZP_CSI_RS_Resource* ltm_NZP_CSI_RS_ResourceToAddModList_r18_items; /**< ASN.1 ltm-NZP-CSI-RS-ResourceToAddModList-r18；SEQUENCE OF NZP_CSI_RS_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_NZP_CSI_RS_ResourceToAddModList_r18_count; /**< ltm-NZP-CSI-RS-ResourceToAddModList-r18 元素个数。 */
    bool has_ltm_NZP_CSI_RS_ResourceToReleaseList_r18; /**< ltm-NZP-CSI-RS-ResourceToReleaseList-r18 是否存在。 */
    NZP_CSI_RS_ResourceId* ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items; /**< ASN.1 ltm-NZP-CSI-RS-ResourceToReleaseList-r18；SEQUENCE OF NZP_CSI_RS_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count; /**< ltm-NZP-CSI-RS-ResourceToReleaseList-r18 元素个数。 */
    bool has_ltm_NZP_CSI_RS_ResourceSetToAddModList_r18; /**< ltm-NZP-CSI-RS-ResourceSetToAddModList-r18 是否存在。 */
    NZP_CSI_RS_ResourceSet* ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items; /**< ASN.1 ltm-NZP-CSI-RS-ResourceSetToAddModList-r18；SEQUENCE OF NZP_CSI_RS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count; /**< ltm-NZP-CSI-RS-ResourceSetToAddModList-r18 元素个数。 */
    bool has_ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18; /**< ltm-NZP-CSI-RS-ResourceSetToReleaseList-r18 是否存在。 */
    NZP_CSI_RS_ResourceSetId* ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items; /**< ASN.1 ltm-NZP-CSI-RS-ResourceSetToReleaseList-r18；SEQUENCE OF NZP_CSI_RS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count; /**< ltm-NZP-CSI-RS-ResourceSetToReleaseList-r18 元素个数。 */
    bool has_pathlossReferenceRS_ToAddModList_r18; /**< pathlossReferenceRS-ToAddModList-r18 是否存在。 */
    PathlossReferenceRS_r17* pathlossReferenceRS_ToAddModList_r18_items; /**< ASN.1 pathlossReferenceRS-ToAddModList-r18；SEQUENCE OF PathlossReferenceRS_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRS_ToAddModList_r18_count; /**< pathlossReferenceRS-ToAddModList-r18 元素个数。 */
    bool has_pathlossReferenceRS_ToReleaseList_r18; /**< pathlossReferenceRS-ToReleaseList-r18 是否存在。 */
    PathlossReferenceRS_Id_r17* pathlossReferenceRS_ToReleaseList_r18_items; /**< ASN.1 pathlossReferenceRS-ToReleaseList-r18；SEQUENCE OF PathlossReferenceRS_Id_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRS_ToReleaseList_r18_count; /**< pathlossReferenceRS-ToReleaseList-r18 元素个数。 */
    bool has_unifiedTCI_StateType_r18; /**< unifiedTCI-StateType-r18 是否存在。 */
    LTM_TCI_Info_r18_UnifiedTCI_StateType_r18 unifiedTCI_StateType_r18; /**< ASN.1 unifiedTCI-StateType-r18；枚举；OPTIONAL。 */
};


/**
 * @brief LTM_Candidate_r18
 * @note ASN.1：LTM-Candidate-r18；源文件第 7168 行。
 * @note LTM-Candidate-r18 ::= SEQUENCE { ltm-CandidateId-r18, ltm-CandidatePCI-r18, ltm-SSB-Config-r18, ltm...
 */
struct LTM_Candidate_r18 {
    LTM_CandidateId_r18 ltm_CandidateId_r18; /**< ASN.1 ltm-CandidateId-r18；INTEGER (1..8)，位宽 3 bit。 */
    bool has_ltm_CandidatePCI_r18; /**< ltm-CandidatePCI-r18 是否存在。 */
    PhysCellId ltm_CandidatePCI_r18; /**< ASN.1 ltm-CandidatePCI-r18；INTEGER (0..1007)，位宽 10 bit；OPTIONAL。 */
    bool has_ltm_SSB_Config_r18; /**< ltm-SSB-Config-r18 是否存在。 */
    LTM_SSB_Config_r18 ltm_SSB_Config_r18; /**< ASN.1 ltm-SSB-Config-r18；结构体；OPTIONAL。 */
    RRCReconfiguration* ltm_CandidateConfig_r18; /**< ASN.1 ltm-CandidateConfig-r18；OCTET STRING (CONTAINING RRCReconfiguration)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_ltm_ConfigComplete_r18; /**< ltm-ConfigComplete-r18 是否存在。 */
    LTM_Candidate_r18_Ltm_ConfigComplete_r18 ltm_ConfigComplete_r18; /**< ASN.1 ltm-ConfigComplete-r18；枚举；OPTIONAL。 */
    EarlyUL_SyncConfig_r18* ltm_EarlyUL_SyncConfig_r18; /**< ASN.1 ltm-EarlyUL-SyncConfig-r18；OCTET STRING (CONTAINING EarlyUL_SyncConfig_r18)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    EarlyUL_SyncConfig_r18* ltm_EarlyUL_SyncConfigSUL_r18; /**< ASN.1 ltm-EarlyUL-SyncConfigSUL-r18；OCTET STRING (CONTAINING EarlyUL_SyncConfig_r18)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_ltm_TCI_Info_r18; /**< ltm-TCI-Info-r18 是否存在。 */
    LTM_TCI_Info_r18 ltm_TCI_Info_r18; /**< ASN.1 ltm-TCI-Info-r18；结构体；OPTIONAL。 */
    bool has_ltm_NoResetID_r18; /**< ltm-NoResetID-r18 是否存在。 */
    int64_t ltm_NoResetID_r18; /**< ASN.1 ltm-NoResetID-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_ltm_UE_MeasuredTA_ID_r18; /**< ltm-UE-MeasuredTA-ID-r18 是否存在。 */
    int64_t ltm_UE_MeasuredTA_ID_r18; /**< ASN.1 ltm-UE-MeasuredTA-ID-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief LTM_ReportContent_r18
 * @note ASN.1：LTM-ReportContent-r18；源文件第 7245 行。
 * @note LTM-ReportContent-r18 ::= SEQUENCE { nrOfReportedCells-r18, nrOfReportedRS-PerCell-r18, spCellInclusion...
 */
struct LTM_ReportContent_r18 {
    LTM_ReportContent_r18_NrOfReportedCells_r18 nrOfReportedCells_r18; /**< ASN.1 nrOfReportedCells-r18；枚举。 */
    LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18 nrOfReportedRS_PerCell_r18; /**< ASN.1 nrOfReportedRS-PerCell-r18；枚举。 */
    bool has_spCellInclusion_r18; /**< spCellInclusion-r18 是否存在。 */
    LTM_ReportContent_r18_SpCellInclusion_r18 spCellInclusion_r18; /**< ASN.1 spCellInclusion-r18；枚举；OPTIONAL。 */
};


/**
 * @brief LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18
 * @note ASN.1：ltm-ReportConfigType-r18/periodic-r18；源文件第 7219 行。
 * @note SEQUENCE { reportSlotConfig-r18, pucch-CSI-ResourceList-r18 }
 */
struct LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18 {
    CSI_ReportPeriodicityAndOffset reportSlotConfig_r18; /**< ASN.1 reportSlotConfig-r18；结构体。 */
    PUCCH_CSI_Resource* pucch_CSI_ResourceList_r18_items; /**< ASN.1 pucch-CSI-ResourceList-r18；SEQUENCE OF PUCCH_CSI_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pucch_CSI_ResourceList_r18_count; /**< pucch-CSI-ResourceList-r18 元素个数。 */
};


/**
 * @brief LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18
 * @note ASN.1：ltm-ReportConfigType-r18/semiPersistentOnPUCCH-r18；源文件第 7223 行。
 * @note SEQUENCE { reportSlotConfig-r18, pucch-CSI-ResourceList-r18 }
 */
struct LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18 {
    CSI_ReportPeriodicityAndOffset reportSlotConfig_r18; /**< ASN.1 reportSlotConfig-r18；结构体。 */
    PUCCH_CSI_Resource* pucch_CSI_ResourceList_r18_items; /**< ASN.1 pucch-CSI-ResourceList-r18；SEQUENCE OF PUCCH_CSI_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pucch_CSI_ResourceList_r18_count; /**< pucch-CSI-ResourceList-r18 元素个数。 */
};


/**
 * @brief LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18
 * @note ASN.1：ltm-ReportConfigType-r18/semiPersistentOnPUSCH-r18；源文件第 7227 行。
 * @note SEQUENCE { reportSlotConfig-r18, reportSlotOffsetList-r18, reportSlotOffsetLi...
 */
struct LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18 {
    CSI_ReportPeriodicityAndOffset reportSlotConfig_r18; /**< ASN.1 reportSlotConfig-r18；结构体。 */
    int64_t* reportSlotOffsetList_r18_items; /**< ASN.1 reportSlotOffsetList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetList_r18_count; /**< reportSlotOffsetList-r18 元素个数。 */
    int64_t* reportSlotOffsetListDCI_0_2_r18_items; /**< ASN.1 reportSlotOffsetListDCI-0-2-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_2_r18_count; /**< reportSlotOffsetListDCI-0-2-r18 元素个数。 */
    int64_t* reportSlotOffsetListDCI_0_1_r18_items; /**< ASN.1 reportSlotOffsetListDCI-0-1-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_1_r18_count; /**< reportSlotOffsetListDCI-0-1-r18 元素个数。 */
    P0_PUSCH_AlphaSetId p0alpha; /**< ASN.1 p0alpha；INTEGER (0..29)，位宽 5 bit。 */
};


/**
 * @brief LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18
 * @note ASN.1：ltm-ReportConfigType-r18/aperiodic-r18；源文件第 7234 行。
 * @note SEQUENCE { reportSlotOffsetList-r18, reportSlotOffsetListDCI-0-2-r18, reportS...
 */
struct LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18 {
    int64_t* reportSlotOffsetList_r18_items; /**< ASN.1 reportSlotOffsetList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetList_r18_count; /**< reportSlotOffsetList-r18 元素个数。 */
    int64_t* reportSlotOffsetListDCI_0_2_r18_items; /**< ASN.1 reportSlotOffsetListDCI-0-2-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_2_r18_count; /**< reportSlotOffsetListDCI-0-2-r18 元素个数。 */
    int64_t* reportSlotOffsetListDCI_0_1_r18_items; /**< ASN.1 reportSlotOffsetListDCI-0-1-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t reportSlotOffsetListDCI_0_1_r18_count; /**< reportSlotOffsetListDCI-0-1-r18 元素个数。 */
};


/**
 * @brief LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18
 * @note ASN.1：ltm-ReportConfigType-r18；源文件第 7218 行。
 * @note CHOICE { periodic-r18, semiPersistentOnPUCCH-r18, semiPersistentOnPUSCH-r18, ...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag {
    LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_periodic_r18 = 0, /**< ASN.1 periodic-r18 */
    LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUCCH_r18 = 1, /**< ASN.1 semiPersistentOnPUCCH-r18 */
    LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUSCH_r18 = 2, /**< ASN.1 semiPersistentOnPUSCH-r18 */
    LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_aperiodic_r18 = 3, /**< ASN.1 aperiodic-r18 */
} LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag;

struct LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18 {
    LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18 periodic_r18; /**< ASN.1 periodic-r18 */
        LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18 semiPersistentOnPUCCH_r18; /**< ASN.1 semiPersistentOnPUCCH-r18 */
        LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18 semiPersistentOnPUSCH_r18; /**< ASN.1 semiPersistentOnPUSCH-r18 */
        LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18 aperiodic_r18; /**< ASN.1 aperiodic-r18 */
    } u;
};


/**
 * @brief LTM_CSI_ReportConfig_r18
 * @note ASN.1：LTM-CSI-ReportConfig-r18；源文件第 7215 行。
 * @note LTM-CSI-ReportConfig-r18 ::= SEQUENCE { ltm-CSI-ReportConfigId-r18, ltm-ResourcesForChannelMeasurement-r18...
 */
struct LTM_CSI_ReportConfig_r18 {
    LTM_CSI_ReportConfigId_r18 ltm_CSI_ReportConfigId_r18; /**< ASN.1 ltm-CSI-ReportConfigId-r18；INTEGER (0..47)，位宽 6 bit。 */
    LTM_CSI_ResourceConfigId_r18 ltm_ResourcesForChannelMeasurement_r18; /**< ASN.1 ltm-ResourcesForChannelMeasurement-r18；INTEGER (0..111)，位宽 7 bit。 */
    LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18 ltm_ReportConfigType_r18; /**< ASN.1 ltm-ReportConfigType-r18；结构体。 */
    LTM_ReportContent_r18 ltm_ReportContent_r18; /**< ASN.1 ltm-ReportContent-r18；结构体。 */
};


/**
 * @brief LTM_CSI_SSB_ResourceSet_r18
 * @note ASN.1：LTM-CSI-SSB-ResourceSet-r18；源文件第 7265 行。
 * @note LTM-CSI-SSB-ResourceSet-r18 ::= SEQUENCE { ltm-CSI-SSB-ResourceList-r18, ltm-CandidateIdList-r18 }
 */
struct LTM_CSI_SSB_ResourceSet_r18 {
    SSB_Index* ltm_CSI_SSB_ResourceList_r18_items; /**< ASN.1 ltm-CSI-SSB-ResourceList-r18；SEQUENCE OF SSB_Index，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ltm_CSI_SSB_ResourceList_r18_count; /**< ltm-CSI-SSB-ResourceList-r18 元素个数。 */
    LTM_CandidateId_r18* ltm_CandidateIdList_r18_items; /**< ASN.1 ltm-CandidateIdList-r18；SEQUENCE OF LTM_CandidateId_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ltm_CandidateIdList_r18_count; /**< ltm-CandidateIdList-r18 元素个数。 */
};


/**
 * @brief LTM_CSI_ResourceConfig_r18
 * @note ASN.1：LTM-CSI-ResourceConfig-r18；源文件第 7259 行。
 * @note LTM-CSI-ResourceConfig-r18 ::= SEQUENCE { ltm-CSI-ResourceConfigId-r18, ltm-CSI-SSB-ResourceSet-r18 }
 */
struct LTM_CSI_ResourceConfig_r18 {
    LTM_CSI_ResourceConfigId_r18 ltm_CSI_ResourceConfigId_r18; /**< ASN.1 ltm-CSI-ResourceConfigId-r18；INTEGER (0..111)，位宽 7 bit。 */
    LTM_CSI_SSB_ResourceSet_r18 ltm_CSI_SSB_ResourceSet_r18; /**< ASN.1 ltm-CSI-SSB-ResourceSet-r18；结构体。 */
};


/**
 * @brief MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17
 * @note ASN.1：groupCommon-RNTI-r17；源文件第 7363 行。
 * @note CHOICE { g-RNTI, g-CS-RNTI }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag {
    MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_RNTI = 0, /**< ASN.1 g-RNTI */
    MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_CS_RNTI = 1, /**< ASN.1 g-CS-RNTI */
} MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag;

struct MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17 {
    MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RNTI_Value g_RNTI; /**< ASN.1 g-RNTI */
        RNTI_Value g_CS_RNTI; /**< ASN.1 g-CS-RNTI */
    } u;
};


/**
 * @brief DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17
 * @note ASN.1：drx-onDurationTimerPTM-r17；源文件第 23451 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag {
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag;

struct DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17 {
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17
 * @note ASN.1：drx-LongCycleStartOffsetPTM-r17；源文件第 23470 行。
 * @note CHOICE { ms10, ms20, ms32, ms40, ms60, ms64, ms70, ms80, ms128, ms160, ms256,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag {
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10 = 0, /**< ASN.1 ms10 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms20 = 1, /**< ASN.1 ms20 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms32 = 2, /**< ASN.1 ms32 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms40 = 3, /**< ASN.1 ms40 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms60 = 4, /**< ASN.1 ms60 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms64 = 5, /**< ASN.1 ms64 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms70 = 6, /**< ASN.1 ms70 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms80 = 7, /**< ASN.1 ms80 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms128 = 8, /**< ASN.1 ms128 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms160 = 9, /**< ASN.1 ms160 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms256 = 10, /**< ASN.1 ms256 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms320 = 11, /**< ASN.1 ms320 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms512 = 12, /**< ASN.1 ms512 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms640 = 13, /**< ASN.1 ms640 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1024 = 14, /**< ASN.1 ms1024 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1280 = 15, /**< ASN.1 ms1280 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2048 = 16, /**< ASN.1 ms2048 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2560 = 17, /**< ASN.1 ms2560 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms5120 = 18, /**< ASN.1 ms5120 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10240 = 19, /**< ASN.1 ms10240 */
} DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag;

struct DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17 {
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms10; /**< ASN.1 ms10 */
        int64_t ms20; /**< ASN.1 ms20 */
        int64_t ms32; /**< ASN.1 ms32 */
        int64_t ms40; /**< ASN.1 ms40 */
        int64_t ms60; /**< ASN.1 ms60 */
        int64_t ms64; /**< ASN.1 ms64 */
        int64_t ms70; /**< ASN.1 ms70 */
        int64_t ms80; /**< ASN.1 ms80 */
        int64_t ms128; /**< ASN.1 ms128 */
        int64_t ms160; /**< ASN.1 ms160 */
        int64_t ms256; /**< ASN.1 ms256 */
        int64_t ms320; /**< ASN.1 ms320 */
        int64_t ms512; /**< ASN.1 ms512 */
        int64_t ms640; /**< ASN.1 ms640 */
        int64_t ms1024; /**< ASN.1 ms1024 */
        int64_t ms1280; /**< ASN.1 ms1280 */
        int64_t ms2048; /**< ASN.1 ms2048 */
        int64_t ms2560; /**< ASN.1 ms2560 */
        int64_t ms5120; /**< ASN.1 ms5120 */
        int64_t ms10240; /**< ASN.1 ms10240 */
    } u;
};


/**
 * @brief DRX_ConfigPTM_r17
 * @note ASN.1：DRX-ConfigPTM-r17；源文件第 23450 行。
 * @note DRX-ConfigPTM-r17 ::= SEQUENCE { drx-onDurationTimerPTM-r17, drx-InactivityTimerPTM-r17, drx-HARQ-R...
 */
struct DRX_ConfigPTM_r17 {
    DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17 drx_onDurationTimerPTM_r17; /**< ASN.1 drx-onDurationTimerPTM-r17；结构体。 */
    DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17 drx_InactivityTimerPTM_r17; /**< ASN.1 drx-InactivityTimerPTM-r17；枚举。 */
    bool has_drx_HARQ_RTT_TimerDL_PTM_r17; /**< drx-HARQ-RTT-TimerDL-PTM-r17 是否存在。 */
    int64_t drx_HARQ_RTT_TimerDL_PTM_r17; /**< ASN.1 drx-HARQ-RTT-TimerDL-PTM-r17；INTEGER (0..56)，位宽 6 bit；OPTIONAL。 */
    bool has_drx_RetransmissionTimerDL_PTM_r17; /**< drx-RetransmissionTimerDL-PTM-r17 是否存在。 */
    DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17 drx_RetransmissionTimerDL_PTM_r17; /**< ASN.1 drx-RetransmissionTimerDL-PTM-r17；枚举；OPTIONAL。 */
    DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17 drx_LongCycleStartOffsetPTM_r17; /**< ASN.1 drx-LongCycleStartOffsetPTM-r17；结构体。 */
    int64_t drx_SlotOffsetPTM_r17; /**< ASN.1 drx-SlotOffsetPTM-r17；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief SetupRelease_DRX_ConfigPTM_r17
 * @note ASN.1：SetupRelease<DRX-ConfigPTM-r17>；源文件第 7367 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_ConfigPTM_r17_Tag {
    SetupRelease_DRX_ConfigPTM_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_ConfigPTM_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_ConfigPTM_r17_Tag;

struct SetupRelease_DRX_ConfigPTM_r17 {
    SetupRelease_DRX_ConfigPTM_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_ConfigPTM_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MBS_RNTI_SpecificConfig_r17
 * @note ASN.1：MBS-RNTI-SpecificConfig-r17；源文件第 7361 行。
 * @note MBS-RNTI-SpecificConfig-r17 ::= SEQUENCE { mbs-RNTI-SpecificConfigId-r17, groupCommon-RNTI-r17, drx-ConfigPTM...
 */
struct MBS_RNTI_SpecificConfig_r17 {
    MBS_RNTI_SpecificConfigId_r17 mbs_RNTI_SpecificConfigId_r17; /**< ASN.1 mbs-RNTI-SpecificConfigId-r17；INTEGER (0..15)，位宽 4 bit。 */
    MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17 groupCommon_RNTI_r17; /**< ASN.1 groupCommon-RNTI-r17；结构体。 */
    bool has_drx_ConfigPTM_r17; /**< drx-ConfigPTM-r17 是否存在。 */
    SetupRelease_DRX_ConfigPTM_r17 drx_ConfigPTM_r17; /**< ASN.1 drx-ConfigPTM-r17；结构体；OPTIONAL。 */
    bool has_harq_FeedbackEnablerMulticast_r17; /**< harq-FeedbackEnablerMulticast-r17 是否存在。 */
    MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17 harq_FeedbackEnablerMulticast_r17; /**< ASN.1 harq-FeedbackEnablerMulticast-r17；枚举；OPTIONAL。 */
    bool has_harq_FeedbackOptionMulticast_r17; /**< harq-FeedbackOptionMulticast-r17 是否存在。 */
    MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17 harq_FeedbackOptionMulticast_r17; /**< ASN.1 harq-FeedbackOptionMulticast-r17；枚举；OPTIONAL。 */
    bool has_pdsch_AggregationFactor_r17; /**< pdsch-AggregationFactor-r17 是否存在。 */
    MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17 pdsch_AggregationFactor_r17; /**< ASN.1 pdsch-AggregationFactor-r17；枚举；OPTIONAL。 */
};


/**
 * @brief LCG_DSR_Config_r18
 * @note ASN.1：LCG-DSR-Config-r18；源文件第 7375 行。
 * @note LCG-DSR-Config-r18 ::= SEQUENCE { lcg-Id-r18, remainingTimeThreshold-r18 }
 */
struct LCG_DSR_Config_r18 {
    LCG_Id_r18 lcg_Id_r18; /**< ASN.1 lcg-Id-r18；INTEGER (0..7)，位宽 3 bit。 */
    int64_t remainingTimeThreshold_r18; /**< ASN.1 remainingTimeThreshold-r18；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief GapConfig_r17
 * @note ASN.1：GapConfig-r17；源文件第 7449 行。
 * @note GapConfig-r17 ::= SEQUENCE { measGapId-r17, gapType-r17, gapOffset-r17, mgl-r17, mgrp-r17, mgta...
 */
struct GapConfig_r17 {
    MeasGapId_r17 measGapId_r17; /**< ASN.1 measGapId-r17；INTEGER (1..8)，位宽 3 bit。 */
    GapConfig_r17_GapType_r17 gapType_r17; /**< ASN.1 gapType-r17；枚举。 */
    int64_t gapOffset_r17; /**< ASN.1 gapOffset-r17；INTEGER (0..159)，位宽 8 bit。 */
    GapConfig_r17_Mgl_r17 mgl_r17; /**< ASN.1 mgl-r17；枚举。 */
    GapConfig_r17_Mgrp_r17 mgrp_r17; /**< ASN.1 mgrp-r17；枚举。 */
    GapConfig_r17_Mgta_r17 mgta_r17; /**< ASN.1 mgta-r17；枚举。 */
    bool has_refServCellIndicator_r17; /**< refServCellIndicator-r17 是否存在。 */
    GapConfig_r17_RefServCellIndicator_r17 refServCellIndicator_r17; /**< ASN.1 refServCellIndicator-r17；枚举；OPTIONAL。 */
    bool has_refFR2_ServCellAsyncCA_r17; /**< refFR2-ServCellAsyncCA-r17 是否存在。 */
    ServCellIndex refFR2_ServCellAsyncCA_r17; /**< ASN.1 refFR2-ServCellAsyncCA-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_preConfigInd_r17; /**< preConfigInd-r17 是否存在。 */
    GapConfig_r17_PreConfigInd_r17 preConfigInd_r17; /**< ASN.1 preConfigInd-r17；枚举；OPTIONAL。 */
    bool has_ncsgInd_r17; /**< ncsgInd-r17 是否存在。 */
    GapConfig_r17_NcsgInd_r17 ncsgInd_r17; /**< ASN.1 ncsgInd-r17；枚举；OPTIONAL。 */
    bool has_gapAssociationPRS_r17; /**< gapAssociationPRS-r17 是否存在。 */
    GapConfig_r17_GapAssociationPRS_r17 gapAssociationPRS_r17; /**< ASN.1 gapAssociationPRS-r17；枚举；OPTIONAL。 */
    bool has_gapSharing_r17; /**< gapSharing-r17 是否存在。 */
    MeasGapSharingScheme gapSharing_r17; /**< ASN.1 gapSharing-r17；枚举；OPTIONAL。 */
    bool has_gapPriority_r17; /**< gapPriority-r17 是否存在。 */
    GapPriority_r17 gapPriority_r17; /**< ASN.1 gapPriority-r17；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief PosGapConfig_r17
 * @note ASN.1：PosGapConfig-r17；源文件第 7470 行。
 * @note PosGapConfig-r17 ::= SEQUENCE { measPosPreConfigGapId-r17, gapOffset-r17, mgl-r17, mgrp-r17, mgta-...
 */
struct PosGapConfig_r17 {
    MeasPosPreConfigGapId_r17 measPosPreConfigGapId_r17; /**< ASN.1 measPosPreConfigGapId-r17；INTEGER (1..16)，位宽 4 bit。 */
    int64_t gapOffset_r17; /**< ASN.1 gapOffset-r17；INTEGER (0..159)，位宽 8 bit。 */
    PosGapConfig_r17_Mgl_r17 mgl_r17; /**< ASN.1 mgl-r17；枚举。 */
    PosGapConfig_r17_Mgrp_r17 mgrp_r17; /**< ASN.1 mgrp-r17；枚举。 */
    PosGapConfig_r17_Mgta_r17 mgta_r17; /**< ASN.1 mgta-r17；枚举。 */
    PosGapConfig_r17_GapType_r17 gapType_r17; /**< ASN.1 gapType-r17；枚举。 */
};


/**
 * @brief ValidityCellList
 * @note ASN.1：ValidityCellList；源文件第 7540 行。
 * @note ValidityCellList ::= SEQUENCE OF (size 1..8) OF PCI-Range
 */
struct ValidityCellList {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ValidityArea_r16
 * @note ASN.1：ValidityArea-r16；源文件第 7535 行。
 * @note ValidityArea-r16 ::= SEQUENCE { carrierFreq-r16, validityCellList-r16 }
 */
struct ValidityArea_r16 {
    ARFCN_ValueNR carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_validityCellList_r16; /**< validityCellList-r16 是否存在。 */
    ValidityCellList validityCellList_r16; /**< ASN.1 validityCellList-r16；SEQUENCE OF PCI_Range，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief CellListNR_r16
 * @note ASN.1：CellListNR-r16；源文件第 7584 行。
 * @note CellListNR-r16 ::= SEQUENCE OF (size 1..8) OF PCI-Range
 */
struct CellListNR_r16 {
    PCI_Range* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BeamMeasConfigIdle_NR_r16
 * @note ASN.1：BeamMeasConfigIdle-NR-r16；源文件第 7588 行。
 * @note BeamMeasConfigIdle-NR-r16 ::= SEQUENCE { reportQuantityRS-Indexes-r16, maxNrofRS-IndexesToReport-r16, inclu...
 */
struct BeamMeasConfigIdle_NR_r16 {
    BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16 reportQuantityRS_Indexes_r16; /**< ASN.1 reportQuantityRS-Indexes-r16；枚举。 */
    int64_t maxNrofRS_IndexesToReport_r16; /**< ASN.1 maxNrofRS-IndexesToReport-r16；INTEGER (1..32)，位宽 5 bit。 */
    bool includeBeamMeasurements_r16; /**< ASN.1 includeBeamMeasurements-r16；BOOLEAN，1 bit。 */
};


/**
 * @brief MeasIdleCarrierNR_r16_QualityThreshold_r16
 * @note ASN.1：qualityThreshold-r16；源文件第 7548 行。
 * @note SEQUENCE { idleRSRP-Threshold-NR-r16, idleRSRQ-Threshold-NR-r16 }
 */
struct MeasIdleCarrierNR_r16_QualityThreshold_r16 {
    bool has_idleRSRP_Threshold_NR_r16; /**< idleRSRP-Threshold-NR-r16 是否存在。 */
    RSRP_Range idleRSRP_Threshold_NR_r16; /**< ASN.1 idleRSRP-Threshold-NR-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_idleRSRQ_Threshold_NR_r16; /**< idleRSRQ-Threshold-NR-r16 是否存在。 */
    RSRQ_Range idleRSRQ_Threshold_NR_r16; /**< ASN.1 idleRSRQ-Threshold-NR-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16
 * @note ASN.1：ssb-MeasConfig-r16；源文件第 7552 行。
 * @note SEQUENCE { nrofSS-BlocksToAverage-r16, absThreshSS-BlocksConsolidation-r16, s...
 */
struct MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16 {
    bool has_nrofSS_BlocksToAverage_r16; /**< nrofSS-BlocksToAverage-r16 是否存在。 */
    int64_t nrofSS_BlocksToAverage_r16; /**< ASN.1 nrofSS-BlocksToAverage-r16；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_absThreshSS_BlocksConsolidation_r16; /**< absThreshSS-BlocksConsolidation-r16 是否存在。 */
    ThresholdNR absThreshSS_BlocksConsolidation_r16; /**< ASN.1 absThreshSS-BlocksConsolidation-r16；结构体；OPTIONAL。 */
    bool has_smtc_r16; /**< smtc-r16 是否存在。 */
    SSB_MTC smtc_r16; /**< ASN.1 smtc-r16；结构体；OPTIONAL。 */
    bool has_ssb_ToMeasure_r16; /**< ssb-ToMeasure-r16 是否存在。 */
    SSB_ToMeasure ssb_ToMeasure_r16; /**< ASN.1 ssb-ToMeasure-r16；结构体；OPTIONAL。 */
    bool deriveSSB_IndexFromCell_r16; /**< ASN.1 deriveSSB-IndexFromCell-r16；BOOLEAN，1 bit。 */
    bool has_ss_RSSI_Measurement_r16; /**< ss-RSSI-Measurement-r16 是否存在。 */
    SS_RSSI_Measurement ss_RSSI_Measurement_r16; /**< ASN.1 ss-RSSI-Measurement-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasIdleCarrierNR_r16
 * @note ASN.1：MeasIdleCarrierNR-r16；源文件第 7542 行。
 * @note MeasIdleCarrierNR-r16 ::= SEQUENCE { carrierFreq-r16, ssbSubcarrierSpacing-r16, frequencyBandList, meas...
 */
struct MeasIdleCarrierNR_r16 {
    ARFCN_ValueNR carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    SubcarrierSpacing ssbSubcarrierSpacing_r16; /**< ASN.1 ssbSubcarrierSpacing-r16；枚举。 */
    bool has_frequencyBandList; /**< frequencyBandList 是否存在。 */
    MultiFrequencyBandListNR frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF FreqBandIndicatorNR，SIZE (1..8)；OPTIONAL。 */
    bool has_measCellListNR_r16; /**< measCellListNR-r16 是否存在。 */
    CellListNR_r16 measCellListNR_r16; /**< ASN.1 measCellListNR-r16；SEQUENCE OF PCI_Range，SIZE (1..8)；OPTIONAL。 */
    MeasIdleCarrierNR_r16_ReportQuantities_r16 reportQuantities_r16; /**< ASN.1 reportQuantities-r16；枚举。 */
    bool has_qualityThreshold_r16; /**< qualityThreshold-r16 是否存在。 */
    MeasIdleCarrierNR_r16_QualityThreshold_r16 qualityThreshold_r16; /**< ASN.1 qualityThreshold-r16；结构体；OPTIONAL。 */
    bool has_ssb_MeasConfig_r16; /**< ssb-MeasConfig-r16 是否存在。 */
    MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16 ssb_MeasConfig_r16; /**< ASN.1 ssb-MeasConfig-r16；结构体；OPTIONAL。 */
    bool has_beamMeasConfigIdle_r16; /**< beamMeasConfigIdle-r16 是否存在。 */
    BeamMeasConfigIdle_NR_r16 beamMeasConfigIdle_r16; /**< ASN.1 beamMeasConfigIdle-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CellListEUTRA_r16
 * @note ASN.1：CellListEUTRA-r16；源文件第 7586 行。
 * @note CellListEUTRA-r16 ::= SEQUENCE OF (size 1..8) OF EUTRA-PhysCellIdRange
 */
struct CellListEUTRA_r16 {
    EUTRA_PhysCellIdRange* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16
 * @note ASN.1：qualityThresholdEUTRA-r16；源文件第 7569 行。
 * @note SEQUENCE { idleRSRP-Threshold-EUTRA-r16, idleRSRQ-Threshold-EUTRA-r16 }
 */
struct MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16 {
    bool has_idleRSRP_Threshold_EUTRA_r16; /**< idleRSRP-Threshold-EUTRA-r16 是否存在。 */
    RSRP_RangeEUTRA idleRSRP_Threshold_EUTRA_r16; /**< ASN.1 idleRSRP-Threshold-EUTRA-r16；INTEGER (0..97)，位宽 7 bit；OPTIONAL。 */
    bool has_idleRSRQ_Threshold_EUTRA_r16; /**< idleRSRQ-Threshold-EUTRA-r16 是否存在。 */
    RSRQ_RangeEUTRA_r16 idleRSRQ_Threshold_EUTRA_r16; /**< ASN.1 idleRSRQ-Threshold-EUTRA-r16；INTEGER (-30..46)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasIdleCarrierEUTRA_r16
 * @note ASN.1：MeasIdleCarrierEUTRA-r16；源文件第 7564 行。
 * @note MeasIdleCarrierEUTRA-r16 ::= SEQUENCE { carrierFreqEUTRA-r16, allowedMeasBandwidth-r16, measCellListEUTRA-...
 */
struct MeasIdleCarrierEUTRA_r16 {
    ARFCN_ValueEUTRA carrierFreqEUTRA_r16; /**< ASN.1 carrierFreqEUTRA-r16；INTEGER (0..262143)，位宽 18 bit。 */
    EUTRA_AllowedMeasBandwidth allowedMeasBandwidth_r16; /**< ASN.1 allowedMeasBandwidth-r16；枚举。 */
    bool has_measCellListEUTRA_r16; /**< measCellListEUTRA-r16 是否存在。 */
    CellListEUTRA_r16 measCellListEUTRA_r16; /**< ASN.1 measCellListEUTRA-r16；SEQUENCE OF EUTRA_PhysCellIdRange，SIZE (1..8)；OPTIONAL。 */
    MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16 reportQuantitiesEUTRA_r16; /**< ASN.1 reportQuantitiesEUTRA-r16；枚举。 */
    bool has_qualityThresholdEUTRA_r16; /**< qualityThresholdEUTRA-r16 是否存在。 */
    MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16 qualityThresholdEUTRA_r16; /**< ASN.1 qualityThresholdEUTRA-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasReselectionCarrierNR_r18
 * @note ASN.1：MeasReselectionCarrierNR-r18；源文件第 7576 行。
 * @note MeasReselectionCarrierNR-r18 ::= SEQUENCE { carrierFreq-r18 }
 */
struct MeasReselectionCarrierNR_r18 {
    ARFCN_ValueNR carrierFreq_r18; /**< ASN.1 carrierFreq-r18；INTEGER (0..3279165)，位宽 22 bit。 */
};


/**
 * @brief MeasIdToAddMod
 * @note ASN.1：MeasIdToAddMod；源文件第 7601 行。
 * @note MeasIdToAddMod ::= SEQUENCE { measId, measObjectId, reportConfigId }
 */
struct MeasIdToAddMod {
    MeasId measId; /**< ASN.1 measId；INTEGER (1..64)，位宽 6 bit。 */
    MeasObjectId measObjectId; /**< ASN.1 measObjectId；INTEGER (1..64)，位宽 6 bit。 */
    ReportConfigId reportConfigId; /**< ASN.1 reportConfigId；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief SRS_ResourceListConfigCLI_r16
 * @note ASN.1：SRS-ResourceListConfigCLI-r16；源文件第 7620 行。
 * @note SRS-ResourceListConfigCLI-r16 ::= SEQUENCE OF (size 1..32) OF SRS-ResourceConfigCLI-r16
 */
struct SRS_ResourceListConfigCLI_r16 {
    SRS_ResourceConfigCLI_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SRS_ResourceListConfigCLI_r16
 * @note ASN.1：SetupRelease<SRS-ResourceListConfigCLI-r16>；源文件第 7616 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_ResourceListConfigCLI_r16_Tag {
    SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_ResourceListConfigCLI_r16_Tag;

struct SetupRelease_SRS_ResourceListConfigCLI_r16 {
    SetupRelease_SRS_ResourceListConfigCLI_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_ResourceListConfigCLI_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RSSI_ResourceListConfigCLI_r16
 * @note ASN.1：RSSI-ResourceListConfigCLI-r16；源文件第 7622 行。
 * @note RSSI-ResourceListConfigCLI-r16 ::= SEQUENCE OF (size 1..64) OF RSSI-ResourceConfigCLI-r16
 */
struct RSSI_ResourceListConfigCLI_r16 {
    RSSI_ResourceConfigCLI_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_RSSI_ResourceListConfigCLI_r16
 * @note ASN.1：SetupRelease<RSSI-ResourceListConfigCLI-r16>；源文件第 7617 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag {
    SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag;

struct SetupRelease_RSSI_ResourceListConfigCLI_r16 {
    SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RSSI_ResourceListConfigCLI_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief CLI_ResourceConfig_r16
 * @note ASN.1：CLI-ResourceConfig-r16；源文件第 7615 行。
 * @note CLI-ResourceConfig-r16 ::= SEQUENCE { srs-ResourceConfig-r16, rssi-ResourceConfig-r16 }
 */
struct CLI_ResourceConfig_r16 {
    bool has_srs_ResourceConfig_r16; /**< srs-ResourceConfig-r16 是否存在。 */
    SetupRelease_SRS_ResourceListConfigCLI_r16 srs_ResourceConfig_r16; /**< ASN.1 srs-ResourceConfig-r16；结构体；OPTIONAL。 */
    bool has_rssi_ResourceConfig_r16; /**< rssi-ResourceConfig-r16 是否存在。 */
    SetupRelease_RSSI_ResourceListConfigCLI_r16 rssi_ResourceConfig_r16; /**< ASN.1 rssi-ResourceConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasObjectCLI_r16
 * @note ASN.1：MeasObjectCLI-r16；源文件第 7610 行。
 * @note MeasObjectCLI-r16 ::= SEQUENCE { cli-ResourceConfig-r16 }
 */
struct MeasObjectCLI_r16 {
    CLI_ResourceConfig_r16 cli_ResourceConfig_r16; /**< ASN.1 cli-ResourceConfig-r16；结构体。 */
};


/**
 * @brief SRS_Resource_ExtGroup1_ResourceMapping_r16
 * @note ASN.1：resourceMapping-r16；源文件第 13214 行。
 * @note SEQUENCE { startPosition-r16, nrofSymbols-r16, repetitionFactor-r16 }
 */
struct SRS_Resource_ExtGroup1_ResourceMapping_r16 {
    int64_t startPosition_r16; /**< ASN.1 startPosition-r16；INTEGER (0..13)，位宽 4 bit。 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16 nrofSymbols_r16; /**< ASN.1 nrofSymbols-r16；枚举。 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16 repetitionFactor_r16; /**< ASN.1 repetitionFactor-r16；枚举。 */
};


/**
 * @brief SRS_Resource_ExtGroup1
 * @note ASN.1：SRS_Resource_ExtGroup1；源文件第 13213 行。
 */
struct SRS_Resource_ExtGroup1 {
    bool has_resourceMapping_r16; /**< resourceMapping-r16 是否存在。 */
    SRS_Resource_ExtGroup1_ResourceMapping_r16 resourceMapping_r16; /**< ASN.1 resourceMapping-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs
 * @note ASN.1：referenceSignal/srs；源文件第 13443 行。
 * @note SEQUENCE { resourceId, uplinkBWP }
 */
struct SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs {
    SRS_ResourceId resourceId; /**< ASN.1 resourceId；INTEGER (0..63)，位宽 6 bit。 */
    BWP_Id uplinkBWP; /**< ASN.1 uplinkBWP；INTEGER (0..4)，位宽 3 bit。 */
};


/**
 * @brief SpatialRelationInfo_PDC_r17_ReferenceSignal
 * @note ASN.1：referenceSignal；源文件第 13439 行。
 * @note CHOICE { ssb-Index, csi-RS-Index, dl-PRS-PDC, srs }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag {
    SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
    SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_dl_PRS_PDC = 2, /**< ASN.1 dl-PRS-PDC */
    SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_srs = 3, /**< ASN.1 srs */
} SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag;

struct SpatialRelationInfo_PDC_r17_ReferenceSignal {
    SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
        NR_DL_PRS_ResourceID_r17 dl_PRS_PDC; /**< ASN.1 dl-PRS-PDC */
        SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs srs; /**< ASN.1 srs */
    } u;
};


/**
 * @brief SpatialRelationInfo_PDC_r17
 * @note ASN.1：SpatialRelationInfo-PDC-r17；源文件第 13438 行。
 * @note SpatialRelationInfo-PDC-r17 ::= SEQUENCE { referenceSignal }
 */
struct SpatialRelationInfo_PDC_r17 {
    SpatialRelationInfo_PDC_r17_ReferenceSignal referenceSignal; /**< ASN.1 referenceSignal；结构体。 */
};


/**
 * @brief SetupRelease_SpatialRelationInfo_PDC_r17
 * @note ASN.1：SetupRelease<SpatialRelationInfo-PDC-r17>；源文件第 13221 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SpatialRelationInfo_PDC_r17_Tag {
    SetupRelease_SpatialRelationInfo_PDC_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SpatialRelationInfo_PDC_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SpatialRelationInfo_PDC_r17_Tag;

struct SetupRelease_SpatialRelationInfo_PDC_r17 {
    SetupRelease_SpatialRelationInfo_PDC_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SpatialRelationInfo_PDC_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_Resource_ExtGroup2_ResourceMapping_r17
 * @note ASN.1：resourceMapping-r17；源文件第 13222 行。
 * @note SEQUENCE { startPosition-r17, nrofSymbols-r17, repetitionFactor-r17 }
 */
struct SRS_Resource_ExtGroup2_ResourceMapping_r17 {
    int64_t startPosition_r17; /**< ASN.1 startPosition-r17；INTEGER (0..13)，位宽 4 bit。 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17 nrofSymbols_r17; /**< ASN.1 nrofSymbols-r17；枚举。 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17 repetitionFactor_r17; /**< ASN.1 repetitionFactor-r17；枚举。 */
};


/**
 * @brief SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17
 * @note ASN.1：partialFreqSounding-r17/startRBIndexFScaling-r17；源文件第 13228 行。
 * @note CHOICE { startRBIndexAndFreqScalingFactor2-r17, startRBIndexAndFreqScalingFac...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag {
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor2_r17 = 0, /**< ASN.1 startRBIndexAndFreqScalingFactor2-r17 */
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor4_r17 = 1, /**< ASN.1 startRBIndexAndFreqScalingFactor4-r17 */
} SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag;

struct SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17 {
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t startRBIndexAndFreqScalingFactor2_r17; /**< ASN.1 startRBIndexAndFreqScalingFactor2-r17 */
        int64_t startRBIndexAndFreqScalingFactor4_r17; /**< ASN.1 startRBIndexAndFreqScalingFactor4-r17 */
    } u;
};


/**
 * @brief SRS_Resource_ExtGroup2_PartialFreqSounding_r17
 * @note ASN.1：partialFreqSounding-r17；源文件第 13227 行。
 * @note SEQUENCE { startRBIndexFScaling-r17, enableStartRBHopping-r17 }
 */
struct SRS_Resource_ExtGroup2_PartialFreqSounding_r17 {
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17 startRBIndexFScaling_r17; /**< ASN.1 startRBIndexFScaling-r17；结构体。 */
    bool has_enableStartRBHopping_r17; /**< enableStartRBHopping-r17 是否存在。 */
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17_EnableStartRBHopping_r17 enableStartRBHopping_r17; /**< ASN.1 enableStartRBHopping-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_Resource_ExtGroup2_TransmissionComb_n8_r17
 * @note ASN.1：transmissionComb-n8-r17；源文件第 13234 行。
 * @note SEQUENCE { combOffset-n8-r17, cyclicShift-n8-r17 }
 */
struct SRS_Resource_ExtGroup2_TransmissionComb_n8_r17 {
    int64_t combOffset_n8_r17; /**< ASN.1 combOffset-n8-r17；INTEGER (0..7)，位宽 3 bit。 */
    int64_t cyclicShift_n8_r17; /**< ASN.1 cyclicShift-n8-r17；INTEGER (0..5)，位宽 3 bit。 */
};


/**
 * @brief SRS_Resource_ExtGroup2_Srs_TCI_State_r17
 * @note ASN.1：srs-TCI-State-r17；源文件第 13238 行。
 * @note CHOICE { srs-UL-TCI-State, srs-DLorJointTCI-State }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag {
    SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_UL_TCI_State = 0, /**< ASN.1 srs-UL-TCI-State */
    SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_DLorJointTCI_State = 1, /**< ASN.1 srs-DLorJointTCI-State */
} SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag;

struct SRS_Resource_ExtGroup2_Srs_TCI_State_r17 {
    SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        TCI_UL_StateId_r17 srs_UL_TCI_State; /**< ASN.1 srs-UL-TCI-State */
        TCI_StateId srs_DLorJointTCI_State; /**< ASN.1 srs-DLorJointTCI-State */
    } u;
};


/**
 * @brief SRS_Resource_ExtGroup2
 * @note ASN.1：SRS_Resource_ExtGroup2；源文件第 13220 行。
 */
struct SRS_Resource_ExtGroup2 {
    bool has_spatialRelationInfo_PDC_r17; /**< spatialRelationInfo-PDC-r17 是否存在。 */
    SetupRelease_SpatialRelationInfo_PDC_r17 spatialRelationInfo_PDC_r17; /**< ASN.1 spatialRelationInfo-PDC-r17；结构体；OPTIONAL。 */
    bool has_resourceMapping_r17; /**< resourceMapping-r17 是否存在。 */
    SRS_Resource_ExtGroup2_ResourceMapping_r17 resourceMapping_r17; /**< ASN.1 resourceMapping-r17；结构体；OPTIONAL。 */
    bool has_partialFreqSounding_r17; /**< partialFreqSounding-r17 是否存在。 */
    SRS_Resource_ExtGroup2_PartialFreqSounding_r17 partialFreqSounding_r17; /**< ASN.1 partialFreqSounding-r17；结构体；OPTIONAL。 */
    bool has_transmissionComb_n8_r17; /**< transmissionComb-n8-r17 是否存在。 */
    SRS_Resource_ExtGroup2_TransmissionComb_n8_r17 transmissionComb_n8_r17; /**< ASN.1 transmissionComb-n8-r17；结构体；OPTIONAL。 */
    bool has_srs_TCI_State_r17; /**< srs-TCI-State-r17 是否存在。 */
    SRS_Resource_ExtGroup2_Srs_TCI_State_r17 srs_TCI_State_r17; /**< ASN.1 srs-TCI-State-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730
 * @note ASN.1：srs-DLorJointTCI-State-v1730；源文件第 13245 行。
 * @note SEQUENCE { cellAndBWP-r17 }
 */
struct SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730 {
    ServingCellAndBWP_Id_r17 cellAndBWP_r17; /**< ASN.1 cellAndBWP-r17；结构体。 */
};


/**
 * @brief SRS_Resource_ExtGroup3
 * @note ASN.1：SRS_Resource_ExtGroup3；源文件第 13243 行。
 */
struct SRS_Resource_ExtGroup3 {
    bool has_repetitionFactor_v1730; /**< repetitionFactor-v1730 是否存在。 */
    SRS_Resource_ExtGroup3_RepetitionFactor_v1730 repetitionFactor_v1730; /**< ASN.1 repetitionFactor-v1730；枚举；OPTIONAL。 */
    bool has_srs_DLorJointTCI_State_v1730; /**< srs-DLorJointTCI-State-v1730 是否存在。 */
    SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730 srs_DLorJointTCI_State_v1730; /**< ASN.1 srs-DLorJointTCI-State-v1730；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18
 * @note ASN.1：combOffsetHopping-r18/hoppingSubset-r18；源文件第 13253 行。
 * @note CHOICE { transmissionComb-n4, transmissionComb-n8 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag {
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4 = 0, /**< ASN.1 transmissionComb-n4 */
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8 = 1, /**< ASN.1 transmissionComb-n8 */
} SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag;

struct SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18 {
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString transmissionComb_n4; /**< ASN.1 transmissionComb-n4 */
        BitString transmissionComb_n8; /**< ASN.1 transmissionComb-n8 */
    } u;
};


/**
 * @brief SRS_Resource_ExtGroup4_CombOffsetHopping_r18
 * @note ASN.1：combOffsetHopping-r18；源文件第 13251 行。
 * @note SEQUENCE { hoppingId-r18, hoppingSubset-r18, hoppingWithRepetition-r18 }
 */
struct SRS_Resource_ExtGroup4_CombOffsetHopping_r18 {
    bool has_hoppingId_r18; /**< hoppingId-r18 是否存在。 */
    int64_t hoppingId_r18; /**< ASN.1 hoppingId-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_hoppingSubset_r18; /**< hoppingSubset-r18 是否存在。 */
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18 hoppingSubset_r18; /**< ASN.1 hoppingSubset-r18；结构体；OPTIONAL。 */
    bool has_hoppingWithRepetition_r18; /**< hoppingWithRepetition-r18 是否存在。 */
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18 hoppingWithRepetition_r18; /**< ASN.1 hoppingWithRepetition-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18
 * @note ASN.1：cyclicShiftHopping-r18/hoppingSubset-r18；源文件第 13261 行。
 * @note CHOICE { transmissionComb-n2, transmissionComb-n4, transmissionComb-n8 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag {
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n2 = 0, /**< ASN.1 transmissionComb-n2 */
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4 = 1, /**< ASN.1 transmissionComb-n4 */
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8 = 2, /**< ASN.1 transmissionComb-n8 */
} SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag;

struct SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18 {
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString transmissionComb_n2; /**< ASN.1 transmissionComb-n2 */
        BitString transmissionComb_n4; /**< ASN.1 transmissionComb-n4 */
        BitString transmissionComb_n8; /**< ASN.1 transmissionComb-n8 */
    } u;
};


/**
 * @brief SRS_Resource_ExtGroup4_CyclicShiftHopping_r18
 * @note ASN.1：cyclicShiftHopping-r18；源文件第 13259 行。
 * @note SEQUENCE { hoppingId-r18, hoppingSubset-r18, hoppingFinerGranularity-r18 }
 */
struct SRS_Resource_ExtGroup4_CyclicShiftHopping_r18 {
    bool has_hoppingId_r18; /**< hoppingId-r18 是否存在。 */
    int64_t hoppingId_r18; /**< ASN.1 hoppingId-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_hoppingSubset_r18; /**< hoppingSubset-r18 是否存在。 */
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18 hoppingSubset_r18; /**< ASN.1 hoppingSubset-r18；结构体；OPTIONAL。 */
    bool has_hoppingFinerGranularity_r18; /**< hoppingFinerGranularity-r18 是否存在。 */
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingFinerGranularity_r18 hoppingFinerGranularity_r18; /**< ASN.1 hoppingFinerGranularity-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_Resource_ExtGroup4
 * @note ASN.1：SRS_Resource_ExtGroup4；源文件第 13249 行。
 */
struct SRS_Resource_ExtGroup4 {
    bool has_nrofSRS_Ports_n8_r18; /**< nrofSRS-Ports-n8-r18 是否存在。 */
    SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18 nrofSRS_Ports_n8_r18; /**< ASN.1 nrofSRS-Ports-n8-r18；枚举；OPTIONAL。 */
    bool has_combOffsetHopping_r18; /**< combOffsetHopping-r18 是否存在。 */
    SRS_Resource_ExtGroup4_CombOffsetHopping_r18 combOffsetHopping_r18; /**< ASN.1 combOffsetHopping-r18；结构体；OPTIONAL。 */
    bool has_cyclicShiftHopping_r18; /**< cyclicShiftHopping-r18 是否存在。 */
    SRS_Resource_ExtGroup4_CyclicShiftHopping_r18 cyclicShiftHopping_r18; /**< ASN.1 cyclicShiftHopping-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SRS_SpatialRelationInfo_ReferenceSignal_Srs
 * @note ASN.1：referenceSignal/srs；源文件第 13332 行。
 * @note SEQUENCE { resourceId, uplinkBWP }
 */
struct SRS_SpatialRelationInfo_ReferenceSignal_Srs {
    SRS_ResourceId resourceId; /**< ASN.1 resourceId；INTEGER (0..63)，位宽 6 bit。 */
    BWP_Id uplinkBWP; /**< ASN.1 uplinkBWP；INTEGER (0..4)，位宽 3 bit。 */
};


/**
 * @brief SRS_SpatialRelationInfo_ReferenceSignal
 * @note ASN.1：referenceSignal；源文件第 13329 行。
 * @note CHOICE { ssb-Index, csi-RS-Index, srs }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_SpatialRelationInfo_ReferenceSignal_Tag {
    SRS_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index = 0, /**< ASN.1 ssb-Index */
    SRS_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index = 1, /**< ASN.1 csi-RS-Index */
    SRS_SpatialRelationInfo_ReferenceSignal_Tag_srs = 2, /**< ASN.1 srs */
} SRS_SpatialRelationInfo_ReferenceSignal_Tag;

struct SRS_SpatialRelationInfo_ReferenceSignal {
    SRS_SpatialRelationInfo_ReferenceSignal_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SSB_Index ssb_Index; /**< ASN.1 ssb-Index */
        NZP_CSI_RS_ResourceId csi_RS_Index; /**< ASN.1 csi-RS-Index */
        SRS_SpatialRelationInfo_ReferenceSignal_Srs srs; /**< ASN.1 srs */
    } u;
};


/**
 * @brief SRS_SpatialRelationInfo
 * @note ASN.1：SRS-SpatialRelationInfo；源文件第 13327 行。
 * @note SRS-SpatialRelationInfo ::= SEQUENCE { servingCellId, referenceSignal }
 */
struct SRS_SpatialRelationInfo {
    bool has_servingCellId; /**< servingCellId 是否存在。 */
    ServCellIndex servingCellId; /**< ASN.1 servingCellId；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    SRS_SpatialRelationInfo_ReferenceSignal referenceSignal; /**< ASN.1 referenceSignal；结构体。 */
};


/**
 * @brief SRS_Resource_TransmissionComb_N2
 * @note ASN.1：transmissionComb/n2；源文件第 13175 行。
 * @note SEQUENCE { combOffset-n2, cyclicShift-n2 }
 */
struct SRS_Resource_TransmissionComb_N2 {
    int64_t combOffset_n2; /**< ASN.1 combOffset-n2；INTEGER (0..1)，位宽 1 bit。 */
    int64_t cyclicShift_n2; /**< ASN.1 cyclicShift-n2；INTEGER (0..7)，位宽 3 bit。 */
};


/**
 * @brief SRS_Resource_TransmissionComb_N4
 * @note ASN.1：transmissionComb/n4；源文件第 13179 行。
 * @note SEQUENCE { combOffset-n4, cyclicShift-n4 }
 */
struct SRS_Resource_TransmissionComb_N4 {
    int64_t combOffset_n4; /**< ASN.1 combOffset-n4；INTEGER (0..3)，位宽 2 bit。 */
    int64_t cyclicShift_n4; /**< ASN.1 cyclicShift-n4；INTEGER (0..11)，位宽 4 bit。 */
};


/**
 * @brief SRS_Resource_TransmissionComb
 * @note ASN.1：transmissionComb；源文件第 13174 行。
 * @note CHOICE { n2, n4 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_Resource_TransmissionComb_Tag {
    SRS_Resource_TransmissionComb_Tag_n2 = 0, /**< ASN.1 n2 */
    SRS_Resource_TransmissionComb_Tag_n4 = 1, /**< ASN.1 n4 */
} SRS_Resource_TransmissionComb_Tag;

struct SRS_Resource_TransmissionComb {
    SRS_Resource_TransmissionComb_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_Resource_TransmissionComb_N2 n2; /**< ASN.1 n2 */
        SRS_Resource_TransmissionComb_N4 n4; /**< ASN.1 n4 */
    } u;
};


/**
 * @brief SRS_ResourceMapping
 * @note ASN.1：resourceMapping；源文件第 13184 行。
 * @note SEQUENCE { startPosition, nrofSymbols, repetitionFactor }
 */
struct SRS_ResourceMapping {
    int64_t startPosition; /**< ASN.1 startPosition；INTEGER (0..5)，位宽 3 bit。 */
    SRS_ResourceMapping_NrofSymbols nrofSymbols; /**< ASN.1 nrofSymbols；枚举。 */
    SRS_ResourceMapping_RepetitionFactor repetitionFactor; /**< ASN.1 repetitionFactor；枚举。 */
};


/**
 * @brief SRS_Resource_FreqHopping
 * @note ASN.1：freqHopping；源文件第 13191 行。
 * @note SEQUENCE { c-SRS, b-SRS, b-hop }
 */
struct SRS_Resource_FreqHopping {
    int64_t c_SRS; /**< ASN.1 c-SRS；INTEGER (0..63)，位宽 6 bit。 */
    int64_t b_SRS; /**< ASN.1 b-SRS；INTEGER (0..3)，位宽 2 bit。 */
    int64_t b_hop; /**< ASN.1 b-hop；INTEGER (0..3)，位宽 2 bit。 */
};


/**
 * @brief SRS_ResourceType_Aperiodic
 * @note ASN.1：resourceType/aperiodic；源文件第 13198 行。
 * @note SEQUENCE { }
 */
struct SRS_ResourceType_Aperiodic {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SRS_PeriodicityAndOffset
 * @note ASN.1：SRS-PeriodicityAndOffset；源文件第 13386 行。
 * @note SRS-PeriodicityAndOffset ::= CHOICE { sl1, sl2, sl4, sl5, sl8, sl10, sl16, sl20, sl32, sl40, sl64, sl80, s...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PeriodicityAndOffset_Tag {
    SRS_PeriodicityAndOffset_Tag_sl1 = 0, /**< ASN.1 sl1 */
    SRS_PeriodicityAndOffset_Tag_sl2 = 1, /**< ASN.1 sl2 */
    SRS_PeriodicityAndOffset_Tag_sl4 = 2, /**< ASN.1 sl4 */
    SRS_PeriodicityAndOffset_Tag_sl5 = 3, /**< ASN.1 sl5 */
    SRS_PeriodicityAndOffset_Tag_sl8 = 4, /**< ASN.1 sl8 */
    SRS_PeriodicityAndOffset_Tag_sl10 = 5, /**< ASN.1 sl10 */
    SRS_PeriodicityAndOffset_Tag_sl16 = 6, /**< ASN.1 sl16 */
    SRS_PeriodicityAndOffset_Tag_sl20 = 7, /**< ASN.1 sl20 */
    SRS_PeriodicityAndOffset_Tag_sl32 = 8, /**< ASN.1 sl32 */
    SRS_PeriodicityAndOffset_Tag_sl40 = 9, /**< ASN.1 sl40 */
    SRS_PeriodicityAndOffset_Tag_sl64 = 10, /**< ASN.1 sl64 */
    SRS_PeriodicityAndOffset_Tag_sl80 = 11, /**< ASN.1 sl80 */
    SRS_PeriodicityAndOffset_Tag_sl160 = 12, /**< ASN.1 sl160 */
    SRS_PeriodicityAndOffset_Tag_sl320 = 13, /**< ASN.1 sl320 */
    SRS_PeriodicityAndOffset_Tag_sl640 = 14, /**< ASN.1 sl640 */
    SRS_PeriodicityAndOffset_Tag_sl1280 = 15, /**< ASN.1 sl1280 */
    SRS_PeriodicityAndOffset_Tag_sl2560 = 16, /**< ASN.1 sl2560 */
} SRS_PeriodicityAndOffset_Tag;

struct SRS_PeriodicityAndOffset {
    SRS_PeriodicityAndOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
        int64_t sl160; /**< ASN.1 sl160 */
        int64_t sl320; /**< ASN.1 sl320 */
        int64_t sl640; /**< ASN.1 sl640 */
        int64_t sl1280; /**< ASN.1 sl1280 */
        int64_t sl2560; /**< ASN.1 sl2560 */
    } u;
};


/**
 * @brief SRS_ResourceType_Semi_persistent
 * @note ASN.1：resourceType/semi-persistent；源文件第 13201 行。
 * @note SEQUENCE { periodicityAndOffset-sp }
 */
struct SRS_ResourceType_Semi_persistent {
    SRS_PeriodicityAndOffset periodicityAndOffset_sp; /**< ASN.1 periodicityAndOffset-sp；结构体。 */
};


/**
 * @brief SRS_ResourceType_Periodic
 * @note ASN.1：resourceType/periodic；源文件第 13205 行。
 * @note SEQUENCE { periodicityAndOffset-p }
 */
struct SRS_ResourceType_Periodic {
    SRS_PeriodicityAndOffset periodicityAndOffset_p; /**< ASN.1 periodicityAndOffset-p；结构体。 */
};


/**
 * @brief SRS_ResourceType
 * @note ASN.1：resourceType；源文件第 13197 行。
 * @note CHOICE { aperiodic, semi-persistent, periodic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_ResourceType_Tag {
    SRS_ResourceType_Tag_aperiodic = 0, /**< ASN.1 aperiodic */
    SRS_ResourceType_Tag_semi_persistent = 1, /**< ASN.1 semi-persistent */
    SRS_ResourceType_Tag_periodic = 2, /**< ASN.1 periodic */
} SRS_ResourceType_Tag;

struct SRS_ResourceType {
    SRS_ResourceType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_ResourceType_Aperiodic aperiodic; /**< ASN.1 aperiodic */
        SRS_ResourceType_Semi_persistent semi_persistent; /**< ASN.1 semi-persistent */
        SRS_ResourceType_Periodic periodic; /**< ASN.1 periodic */
    } u;
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART018_H */
