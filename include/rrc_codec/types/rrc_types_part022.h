/* ============================================================================
 * types/rrc_types_part022.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART022_H
#define RRC_CODEC_TYPES_PART022_H

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
#include "rrc_types_part020.h"
#include "rrc_types_part021.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief FeatureSetUplink_v1540
 * @note ASN.1：FeatureSetUplink-v1540；源文件第 16672 行。
 * @note FeatureSetUplink-v1540 ::= SEQUENCE { zeroSlotOffsetAperiodicSRS, pa-PhaseDiscontinuityImpacts, pusch-Se...
 */
struct FeatureSetUplink_v1540 {
    bool has_zeroSlotOffsetAperiodicSRS; /**< zeroSlotOffsetAperiodicSRS 是否存在。 */
    FeatureSetUplink_v1540_ZeroSlotOffsetAperiodicSRS zeroSlotOffsetAperiodicSRS; /**< ASN.1 zeroSlotOffsetAperiodicSRS；枚举；OPTIONAL。 */
    bool has_pa_PhaseDiscontinuityImpacts; /**< pa-PhaseDiscontinuityImpacts 是否存在。 */
    FeatureSetUplink_v1540_Pa_PhaseDiscontinuityImpacts pa_PhaseDiscontinuityImpacts; /**< ASN.1 pa-PhaseDiscontinuityImpacts；枚举；OPTIONAL。 */
    bool has_pusch_SeparationWithGap; /**< pusch-SeparationWithGap 是否存在。 */
    FeatureSetUplink_v1540_Pusch_SeparationWithGap pusch_SeparationWithGap; /**< ASN.1 pusch-SeparationWithGap；枚举；OPTIONAL。 */
    bool has_pusch_ProcessingType2; /**< pusch-ProcessingType2 是否存在。 */
    FeatureSetUplink_v1540_Pusch_ProcessingType2 pusch_ProcessingType2; /**< ASN.1 pusch-ProcessingType2；结构体；OPTIONAL。 */
    bool has_ul_MCS_TableAlt_DynamicIndication; /**< ul-MCS-TableAlt-DynamicIndication 是否存在。 */
    FeatureSetUplink_v1540_Ul_MCS_TableAlt_DynamicIndication ul_MCS_TableAlt_DynamicIndication; /**< ASN.1 ul-MCS-TableAlt-DynamicIndication；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_PosResources_r16
 * @note ASN.1：SRS-PosResources-r16；源文件第 16950 行。
 * @note SRS-PosResources-r16 ::= SEQUENCE { maxNumberSRS-PosResourceSetPerBWP-r16, maxNumberSRS-PosResourcesPe...
 */
struct SRS_PosResources_r16 {
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16 maxNumberSRS_PosResourceSetPerBWP_r16; /**< ASN.1 maxNumberSRS-PosResourceSetPerBWP-r16；枚举。 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16 maxNumberSRS_PosResourcesPerBWP_r16; /**< ASN.1 maxNumberSRS-PosResourcesPerBWP-r16；枚举。 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16 maxNumberSRS_ResourcesPerBWP_PerSlot_r16; /**< ASN.1 maxNumberSRS-ResourcesPerBWP-PerSlot-r16；枚举。 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16 maxNumberPeriodicSRS_PosResourcesPerBWP_r16; /**< ASN.1 maxNumberPeriodicSRS-PosResourcesPerBWP-r16；枚举。 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16 maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16; /**< ASN.1 maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r16；枚举。 */
};


/**
 * @brief SRS_PosResourceAP_r16
 * @note ASN.1：SRS-PosResourceAP-r16；源文件第 16958 行。
 * @note SRS-PosResourceAP-r16 ::= SEQUENCE { maxNumberAP-SRS-PosResourcesPerBWP-r16, maxNumberAP-SRS-PosResourc...
 */
struct SRS_PosResourceAP_r16 {
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16 maxNumberAP_SRS_PosResourcesPerBWP_r16; /**< ASN.1 maxNumberAP-SRS-PosResourcesPerBWP-r16；枚举。 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16 maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16; /**< ASN.1 maxNumberAP-SRS-PosResourcesPerBWP-PerSlot-r16；枚举。 */
};


/**
 * @brief SRS_PosResourceSP_r16
 * @note ASN.1：SRS-PosResourceSP-r16；源文件第 16963 行。
 * @note SRS-PosResourceSP-r16 ::= SEQUENCE { maxNumberSP-SRS-PosResourcesPerBWP-r16, maxNumberSP-SRS-PosResourc...
 */
struct SRS_PosResourceSP_r16 {
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16 maxNumberSP_SRS_PosResourcesPerBWP_r16; /**< ASN.1 maxNumberSP-SRS-PosResourcesPerBWP-r16；枚举。 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16 maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16; /**< ASN.1 maxNumberSP-SRS-PosResourcesPerBWP-PerSlot-r16；枚举。 */
};


/**
 * @brief SRS_AllPosResources_r16
 * @note ASN.1：SRS-AllPosResources-r16；源文件第 16944 行。
 * @note SRS-AllPosResources-r16 ::= SEQUENCE { srs-PosResources-r16, srs-PosResourceAP-r16, srs-PosResourceSP-r16 }
 */
struct SRS_AllPosResources_r16 {
    SRS_PosResources_r16 srs_PosResources_r16; /**< ASN.1 srs-PosResources-r16；结构体。 */
    bool has_srs_PosResourceAP_r16; /**< srs-PosResourceAP-r16 是否存在。 */
    SRS_PosResourceAP_r16 srs_PosResourceAP_r16; /**< ASN.1 srs-PosResourceAP-r16；结构体；OPTIONAL。 */
    bool has_srs_PosResourceSP_r16; /**< srs-PosResourceSP-r16 是否存在。 */
    SRS_PosResourceSP_r16 srs_PosResourceSP_r16; /**< ASN.1 srs-PosResourceSP-r16；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16
 * @note ASN.1：pusch-RepetitionTypeB-r16；源文件第 16686 行。
 * @note SEQUENCE { maxNumberPUSCH-Tx-r16, hoppingScheme-r16 }
 */
struct FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16 {
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16 maxNumberPUSCH_Tx_r16; /**< ASN.1 maxNumberPUSCH-Tx-r16；枚举。 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16 hoppingScheme_r16; /**< ASN.1 hoppingScheme-r16；枚举。 */
};


/**
 * @brief FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16
 * @note ASN.1：cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16；源文件第 16698 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16, scs-120kHz-r16 }
 */
struct FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16 scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16
 * @note ASN.1：cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16；源文件第 16706 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16, scs-120kHz-r16 }
 */
struct FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16 scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16
 * @note ASN.1：intraFreqDAPS-UL-r16；源文件第 16713 行。
 * @note SEQUENCE { dummy, intraFreqTwoTAGs-DAPS-r16, dummy1, dummy2, dummy3 }
 */
struct FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16 {
    bool has_dummy; /**< dummy 是否存在。 */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_intraFreqTwoTAGs_DAPS_r16; /**< intraFreqTwoTAGs-DAPS-r16 是否存在。 */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_IntraFreqTwoTAGs_DAPS_r16 intraFreqTwoTAGs_DAPS_r16; /**< ASN.1 intraFreqTwoTAGs-DAPS-r16；枚举；OPTIONAL。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy1 dummy1; /**< ASN.1 dummy1；枚举；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy2 dummy2; /**< ASN.1 dummy2；枚举；OPTIONAL。 */
    bool has_dummy3; /**< dummy3 是否存在。 */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3 dummy3; /**< ASN.1 dummy3；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610_MultiPUCCH_r16
 * @note ASN.1：multiPUCCH-r16；源文件第 16723 行。
 * @note SEQUENCE { sub-SlotConfig-NCP-r16, sub-SlotConfig-ECP-r16 }
 */
struct FeatureSetUplink_v1610_MultiPUCCH_r16 {
    bool has_sub_SlotConfig_NCP_r16; /**< sub-SlotConfig-NCP-r16 是否存在。 */
    FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16 sub_SlotConfig_NCP_r16; /**< ASN.1 sub-SlotConfig-NCP-r16；枚举；OPTIONAL。 */
    bool has_sub_SlotConfig_ECP_r16; /**< sub-SlotConfig-ECP-r16 是否存在。 */
    FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16 sub_SlotConfig_ECP_r16; /**< ASN.1 sub-SlotConfig-ECP-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16
 * @note ASN.1：ul-IntraUE-Mux-r16；源文件第 16760 行。
 * @note SEQUENCE { pusch-PreparationLowPriority-r16, pusch-PreparationHighPriority-r16 }
 */
struct FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16 {
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16 pusch_PreparationLowPriority_r16; /**< ASN.1 pusch-PreparationLowPriority-r16；枚举。 */
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16 pusch_PreparationHighPriority_r16; /**< ASN.1 pusch-PreparationHighPriority-r16；枚举。 */
};


/**
 * @brief FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16
 * @note ASN.1：crossCarrierSchedulingProcessing-DiffSCS-r16；源文件第 16767 行。
 * @note SEQUENCE { scs-15kHz-120kHz-r16, scs-15kHz-60kHz-r16, scs-30kHz-120kHz-r16, s...
 */
struct FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 {
    bool has_scs_15kHz_120kHz_r16; /**< scs-15kHz-120kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16 scs_15kHz_120kHz_r16; /**< ASN.1 scs-15kHz-120kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_15kHz_60kHz_r16; /**< scs-15kHz-60kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16 scs_15kHz_60kHz_r16; /**< ASN.1 scs-15kHz-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_120kHz_r16; /**< scs-30kHz-120kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16 scs_30kHz_120kHz_r16; /**< ASN.1 scs-30kHz-120kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_15kHz_30kHz_r16; /**< scs-15kHz-30kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16 scs_15kHz_30kHz_r16; /**< ASN.1 scs-15kHz-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_60kHz_r16; /**< scs-30kHz-60kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16 scs_30kHz_60kHz_r16; /**< ASN.1 scs-30kHz-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_120kHz_r16; /**< scs-60kHz-120kHz-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16 scs_60kHz_120kHz_r16; /**< ASN.1 scs-60kHz-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16
 * @note ASN.1：ul-FullPwrMode2-TPMIGroup-r16；源文件第 16780 行。
 * @note SEQUENCE { twoPorts-r16, fourPortsNonCoherent-r16, fourPortsPartialCoherent-r...
 */
struct FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16 {
    bool has_twoPorts_r16; /**< twoPorts-r16 是否存在。 */
    BitString twoPorts_r16; /**< ASN.1 twoPorts-r16；SIZE (2)，定长；OPTIONAL。 */
    bool has_fourPortsNonCoherent_r16; /**< fourPortsNonCoherent-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16 fourPortsNonCoherent_r16; /**< ASN.1 fourPortsNonCoherent-r16；枚举；OPTIONAL。 */
    bool has_fourPortsPartialCoherent_r16; /**< fourPortsPartialCoherent-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16 fourPortsPartialCoherent_r16; /**< ASN.1 fourPortsPartialCoherent-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1610
 * @note ASN.1：FeatureSetUplink-v1610；源文件第 16684 行。
 * @note FeatureSetUplink-v1610 ::= SEQUENCE { pusch-RepetitionTypeB-r16, ul-CancellationSelfCarrier-r16, ul-Canc...
 */
struct FeatureSetUplink_v1610 {
    bool has_pusch_RepetitionTypeB_r16; /**< pusch-RepetitionTypeB-r16 是否存在。 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16 pusch_RepetitionTypeB_r16; /**< ASN.1 pusch-RepetitionTypeB-r16；结构体；OPTIONAL。 */
    bool has_ul_CancellationSelfCarrier_r16; /**< ul-CancellationSelfCarrier-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_CancellationSelfCarrier_r16 ul_CancellationSelfCarrier_r16; /**< ASN.1 ul-CancellationSelfCarrier-r16；枚举；OPTIONAL。 */
    bool has_ul_CancellationCrossCarrier_r16; /**< ul-CancellationCrossCarrier-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_CancellationCrossCarrier_r16 ul_CancellationCrossCarrier_r16; /**< ASN.1 ul-CancellationCrossCarrier-r16；枚举；OPTIONAL。 */
    bool has_ul_FullPwrMode2_MaxSRS_ResInSet_r16; /**< ul-FullPwrMode2-MaxSRS-ResInSet-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16 ul_FullPwrMode2_MaxSRS_ResInSet_r16; /**< ASN.1 ul-FullPwrMode2-MaxSRS-ResInSet-r16；枚举；OPTIONAL。 */
    bool has_cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16; /**< cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16 cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16; /**< ASN.1 cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16；结构体；OPTIONAL。 */
    bool has_cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16; /**< cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16 是否存在。 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16 cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16; /**< ASN.1 cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16；结构体；OPTIONAL。 */
    bool has_supportedSRS_PosResources_r16; /**< supportedSRS-PosResources-r16 是否存在。 */
    SRS_AllPosResources_r16 supportedSRS_PosResources_r16; /**< ASN.1 supportedSRS-PosResources-r16；结构体；OPTIONAL。 */
    bool has_intraFreqDAPS_UL_r16; /**< intraFreqDAPS-UL-r16 是否存在。 */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16 intraFreqDAPS_UL_r16; /**< ASN.1 intraFreqDAPS-UL-r16；结构体；OPTIONAL。 */
    bool has_intraBandFreqSeparationUL_v1620; /**< intraBandFreqSeparationUL-v1620 是否存在。 */
    FreqSeparationClassUL_v1620 intraBandFreqSeparationUL_v1620; /**< ASN.1 intraBandFreqSeparationUL-v1620；枚举；OPTIONAL。 */
    bool has_multiPUCCH_r16; /**< multiPUCCH-r16 是否存在。 */
    FeatureSetUplink_v1610_MultiPUCCH_r16 multiPUCCH_r16; /**< ASN.1 multiPUCCH-r16；结构体；OPTIONAL。 */
    bool has_twoPUCCH_Type1_r16; /**< twoPUCCH-Type1-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type1_r16 twoPUCCH_Type1_r16; /**< ASN.1 twoPUCCH-Type1-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type2_r16; /**< twoPUCCH-Type2-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type2_r16 twoPUCCH_Type2_r16; /**< ASN.1 twoPUCCH-Type2-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type3_r16; /**< twoPUCCH-Type3-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type3_r16 twoPUCCH_Type3_r16; /**< ASN.1 twoPUCCH-Type3-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type4_r16; /**< twoPUCCH-Type4-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type4_r16 twoPUCCH_Type4_r16; /**< ASN.1 twoPUCCH-Type4-r16；枚举；OPTIONAL。 */
    bool has_mux_SR_HARQ_ACK_r16; /**< mux-SR-HARQ-ACK-r16 是否存在。 */
    FeatureSetUplink_v1610_Mux_SR_HARQ_ACK_r16 mux_SR_HARQ_ACK_r16; /**< ASN.1 mux-SR-HARQ-ACK-r16；枚举；OPTIONAL。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    FeatureSetUplink_v1610_Dummy1 dummy1; /**< ASN.1 dummy1；枚举；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    FeatureSetUplink_v1610_Dummy2 dummy2; /**< ASN.1 dummy2；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type5_r16; /**< twoPUCCH-Type5-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type5_r16 twoPUCCH_Type5_r16; /**< ASN.1 twoPUCCH-Type5-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type6_r16; /**< twoPUCCH-Type6-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type6_r16 twoPUCCH_Type6_r16; /**< ASN.1 twoPUCCH-Type6-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type7_r16; /**< twoPUCCH-Type7-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type7_r16 twoPUCCH_Type7_r16; /**< ASN.1 twoPUCCH-Type7-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type8_r16; /**< twoPUCCH-Type8-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type8_r16 twoPUCCH_Type8_r16; /**< ASN.1 twoPUCCH-Type8-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type9_r16; /**< twoPUCCH-Type9-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type9_r16 twoPUCCH_Type9_r16; /**< ASN.1 twoPUCCH-Type9-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type10_r16; /**< twoPUCCH-Type10-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type10_r16 twoPUCCH_Type10_r16; /**< ASN.1 twoPUCCH-Type10-r16；枚举；OPTIONAL。 */
    bool has_twoPUCCH_Type11_r16; /**< twoPUCCH-Type11-r16 是否存在。 */
    FeatureSetUplink_v1610_TwoPUCCH_Type11_r16 twoPUCCH_Type11_r16; /**< ASN.1 twoPUCCH-Type11-r16；枚举；OPTIONAL。 */
    bool has_ul_IntraUE_Mux_r16; /**< ul-IntraUE-Mux-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16 ul_IntraUE_Mux_r16; /**< ASN.1 ul-IntraUE-Mux-r16；结构体；OPTIONAL。 */
    bool has_ul_FullPwrMode_r16; /**< ul-FullPwrMode-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode_r16 ul_FullPwrMode_r16; /**< ASN.1 ul-FullPwrMode-r16；枚举；OPTIONAL。 */
    bool has_crossCarrierSchedulingProcessing_DiffSCS_r16; /**< crossCarrierSchedulingProcessing-DiffSCS-r16 是否存在。 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16 crossCarrierSchedulingProcessing_DiffSCS_r16; /**< ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16；结构体；OPTIONAL。 */
    bool has_ul_FullPwrMode1_r16; /**< ul-FullPwrMode1-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode1_r16 ul_FullPwrMode1_r16; /**< ASN.1 ul-FullPwrMode1-r16；枚举；OPTIONAL。 */
    bool has_ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16; /**< ul-FullPwrMode2-SRSConfig-diffNumSRSPorts-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16 ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16; /**< ASN.1 ul-FullPwrMode2-SRSConfig-diffNumSRSPorts-r16；枚举；OPTIONAL。 */
    bool has_ul_FullPwrMode2_TPMIGroup_r16; /**< ul-FullPwrMode2-TPMIGroup-r16 是否存在。 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16 ul_FullPwrMode2_TPMIGroup_r16; /**< ASN.1 ul-FullPwrMode2-TPMIGroup-r16；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1630
 * @note ASN.1：FeatureSetUplink-v1630；源文件第 16787 行。
 * @note FeatureSetUplink-v1630 ::= SEQUENCE { offsetSRS-CB-PUSCH-Ant-Switch-fr1-r16, offsetSRS-CB-PUSCH-PDCCH-Mo...
 */
struct FeatureSetUplink_v1630 {
    bool has_offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16; /**< offsetSRS-CB-PUSCH-Ant-Switch-fr1-r16 是否存在。 */
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_Ant_Switch_fr1_r16 offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16; /**< ASN.1 offsetSRS-CB-PUSCH-Ant-Switch-fr1-r16；枚举；OPTIONAL。 */
    bool has_offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16; /**< offsetSRS-CB-PUSCH-PDCCH-MonitorSingleOcc-fr1-r16 是否存在。 */
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16 offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16; /**< ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorSingleOcc-fr1-r16；枚举；OPTIONAL。 */
    bool has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16; /**< offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithoutGap-fr1-r16 是否存在。 */
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16 offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16; /**< ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithoutGap-fr1-r16；枚举；OPTIONAL。 */
    bool has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16; /**< offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithGap-fr1-r16 是否存在。 */
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16 offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16; /**< ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithGap-fr1-r16；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    FeatureSetUplink_v1630_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_partialCancellationPUCCH_PUSCH_PRACH_TX_r16; /**< partialCancellationPUCCH-PUSCH-PRACH-TX-r16 是否存在。 */
    FeatureSetUplink_v1630_PartialCancellationPUCCH_PUSCH_PRACH_TX_r16 partialCancellationPUCCH_PUSCH_PRACH_TX_r16; /**< ASN.1 partialCancellationPUCCH-PUSCH-PRACH-TX-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SubSlot_Config_r16
 * @note ASN.1：SubSlot-Config-r16；源文件第 16939 行。
 * @note SubSlot-Config-r16 ::= SEQUENCE { sub-SlotConfig-NCP-r16, sub-SlotConfig-ECP-r16 }
 */
struct SubSlot_Config_r16 {
    bool has_sub_SlotConfig_NCP_r16; /**< sub-SlotConfig-NCP-r16 是否存在。 */
    SubSlot_Config_r16_Sub_SlotConfig_NCP_r16 sub_SlotConfig_NCP_r16; /**< ASN.1 sub-SlotConfig-NCP-r16；枚举；OPTIONAL。 */
    bool has_sub_SlotConfig_ECP_r16; /**< sub-SlotConfig-ECP-r16 是否存在。 */
    SubSlot_Config_r16_Sub_SlotConfig_ECP_r16 sub_SlotConfig_ECP_r16; /**< ASN.1 sub-SlotConfig-ECP-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16
 * @note ASN.1：offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithSpanGap-fr1-r16；源文件第 16813 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16 }
 */
struct FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1640
 * @note ASN.1：FeatureSetUplink-v1640；源文件第 16804 行。
 * @note FeatureSetUplink-v1640 ::= SEQUENCE { twoHARQ-ACK-Codebook-type1-r16, twoHARQ-ACK-Codebook-type2-r16, of...
 */
struct FeatureSetUplink_v1640 {
    bool has_twoHARQ_ACK_Codebook_type1_r16; /**< twoHARQ-ACK-Codebook-type1-r16 是否存在。 */
    SubSlot_Config_r16 twoHARQ_ACK_Codebook_type1_r16; /**< ASN.1 twoHARQ-ACK-Codebook-type1-r16；结构体；OPTIONAL。 */
    bool has_twoHARQ_ACK_Codebook_type2_r16; /**< twoHARQ-ACK-Codebook-type2-r16 是否存在。 */
    SubSlot_Config_r16 twoHARQ_ACK_Codebook_type2_r16; /**< ASN.1 twoHARQ-ACK-Codebook-type2-r16；结构体；OPTIONAL。 */
    bool has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16; /**< offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithSpanGap-fr1-r16 是否存在。 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16 offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16; /**< ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithSpanGap-fr1-r16；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0
 * @note ASN.1：pusch-RepetitionTypeB-v16d0；源文件第 16821 行。
 * @note SEQUENCE { maxNumberPUSCH-Tx-Cap1-r16, maxNumberPUSCH-Tx-Cap2-r16 }
 */
struct FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0 {
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16 maxNumberPUSCH_Tx_Cap1_r16; /**< ASN.1 maxNumberPUSCH-Tx-Cap1-r16；枚举。 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16 maxNumberPUSCH_Tx_Cap2_r16; /**< ASN.1 maxNumberPUSCH-Tx-Cap2-r16；枚举。 */
};


/**
 * @brief FeatureSetUplink_v16d0
 * @note ASN.1：FeatureSetUplink-v16d0；源文件第 16820 行。
 * @note FeatureSetUplink-v16d0 ::= SEQUENCE { pusch-RepetitionTypeB-v16d0 }
 */
struct FeatureSetUplink_v16d0 {
    bool has_pusch_RepetitionTypeB_v16d0; /**< pusch-RepetitionTypeB-v16d0 是否存在。 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0 pusch_RepetitionTypeB_v16d0; /**< ASN.1 pusch-RepetitionTypeB-v16d0；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1710
 * @note ASN.1：FeatureSetUplink-v1710；源文件第 16827 行。
 * @note FeatureSetUplink-v1710 ::= SEQUENCE { mTRP-PUSCH-TypeA-CB-r17, mTRP-PUSCH-RepetitionTypeA-r17, mTRP-PUCC...
 */
struct FeatureSetUplink_v1710 {
    bool has_mTRP_PUSCH_TypeA_CB_r17; /**< mTRP-PUSCH-TypeA-CB-r17 是否存在。 */
    FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17 mTRP_PUSCH_TypeA_CB_r17; /**< ASN.1 mTRP-PUSCH-TypeA-CB-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_RepetitionTypeA_r17; /**< mTRP-PUSCH-RepetitionTypeA-r17 是否存在。 */
    FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17 mTRP_PUSCH_RepetitionTypeA_r17; /**< ASN.1 mTRP-PUSCH-RepetitionTypeA-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUCCH_IntraSlot_r17; /**< mTRP-PUCCH-IntraSlot-r17 是否存在。 */
    FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17 mTRP_PUCCH_IntraSlot_r17; /**< ASN.1 mTRP-PUCCH-IntraSlot-r17；枚举；OPTIONAL。 */
    bool has_srs_AntennaSwitching2SP_1Periodic_r17; /**< srs-AntennaSwitching2SP-1Periodic-r17 是否存在。 */
    FeatureSetUplink_v1710_Srs_AntennaSwitching2SP_1Periodic_r17 srs_AntennaSwitching2SP_1Periodic_r17; /**< ASN.1 srs-AntennaSwitching2SP-1Periodic-r17；枚举；OPTIONAL。 */
    bool has_srs_ExtensionAperiodicSRS_r17; /**< srs-ExtensionAperiodicSRS-r17 是否存在。 */
    FeatureSetUplink_v1710_Srs_ExtensionAperiodicSRS_r17 srs_ExtensionAperiodicSRS_r17; /**< ASN.1 srs-ExtensionAperiodicSRS-r17；枚举；OPTIONAL。 */
    bool has_srs_OneAP_SRS_r17; /**< srs-OneAP-SRS-r17 是否存在。 */
    FeatureSetUplink_v1710_Srs_OneAP_SRS_r17 srs_OneAP_SRS_r17; /**< ASN.1 srs-OneAP-SRS-r17；枚举；OPTIONAL。 */
    bool has_ue_PowerClassPerBandPerBC_r17; /**< ue-PowerClassPerBandPerBC-r17 是否存在。 */
    FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17 ue_PowerClassPerBandPerBC_r17; /**< ASN.1 ue-PowerClassPerBandPerBC-r17；枚举；OPTIONAL。 */
    bool has_tx_Support_UL_GapFR2_r17; /**< tx-Support-UL-GapFR2-r17 是否存在。 */
    FeatureSetUplink_v1710_Tx_Support_UL_GapFR2_r17 tx_Support_UL_GapFR2_r17; /**< ASN.1 tx-Support-UL-GapFR2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17
 * @note ASN.1：phy-PrioritizationHighPriorityDG-LowPriorityCG-r17/additionalCancellationTime-r17；源文件第 16860 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17, scs-60kHz-r17, scs-120kHz-r17 }
 */
struct FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_15kHz_r17 scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_30kHz_r17 scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_60kHz_r17 scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_120kHz_r17 scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17
 * @note ASN.1：phy-PrioritizationHighPriorityDG-LowPriorityCG-r17；源文件第 16858 行。
 * @note SEQUENCE { pusch-PreparationLowPriority-r17, additionalCancellationTime-r17, ...
 */
struct FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17 {
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17 pusch_PreparationLowPriority_r17; /**< ASN.1 pusch-PreparationLowPriority-r17；枚举。 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17 additionalCancellationTime_r17; /**< ASN.1 additionalCancellationTime-r17；结构体。 */
    int64_t maxNumberCarriers_r17; /**< ASN.1 maxNumberCarriers-r17；INTEGER (1..16)，位宽 4 bit。 */
};


/**
 * @brief FeatureSetUplink_v1720
 * @note ASN.1：FeatureSetUplink-v1720；源文件第 16846 行。
 * @note FeatureSetUplink-v1720 ::= SEQUENCE { pucch-Repetition-F0-1-2-3-4-RRC-Config-r17, pucch-Repetition-F0-1-...
 */
struct FeatureSetUplink_v1720 {
    bool has_pucch_Repetition_F0_1_2_3_4_RRC_Config_r17; /**< pucch-Repetition-F0-1-2-3-4-RRC-Config-r17 是否存在。 */
    FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_RRC_Config_r17 pucch_Repetition_F0_1_2_3_4_RRC_Config_r17; /**< ASN.1 pucch-Repetition-F0-1-2-3-4-RRC-Config-r17；枚举；OPTIONAL。 */
    bool has_pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17; /**< pucch-Repetition-F0-1-2-3-4-DynamicIndication-r17 是否存在。 */
    FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17 pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17; /**< ASN.1 pucch-Repetition-F0-1-2-3-4-DynamicIndication-r17；枚举；OPTIONAL。 */
    bool has_interSubslotFreqHopping_PUCCH_r17; /**< interSubslotFreqHopping-PUCCH-r17 是否存在。 */
    FeatureSetUplink_v1720_InterSubslotFreqHopping_PUCCH_r17 interSubslotFreqHopping_PUCCH_r17; /**< ASN.1 interSubslotFreqHopping-PUCCH-r17；枚举；OPTIONAL。 */
    bool has_semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17; /**< semiStaticHARQ-ACK-CodebookSub-SlotPUCCH-r17 是否存在。 */
    FeatureSetUplink_v1720_SemiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17 semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17; /**< ASN.1 semiStaticHARQ-ACK-CodebookSub-SlotPUCCH-r17；枚举；OPTIONAL。 */
    bool has_phy_PrioritizationLowPriorityDG_HighPriorityCG_r17; /**< phy-PrioritizationLowPriorityDG-HighPriorityCG-r17 是否存在。 */
    int64_t phy_PrioritizationLowPriorityDG_HighPriorityCG_r17; /**< ASN.1 phy-PrioritizationLowPriorityDG-HighPriorityCG-r17；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_phy_PrioritizationHighPriorityDG_LowPriorityCG_r17; /**< phy-PrioritizationHighPriorityDG-LowPriorityCG-r17 是否存在。 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17 phy_PrioritizationHighPriorityDG_LowPriorityCG_r17; /**< ASN.1 phy-PrioritizationHighPriorityDG-LowPriorityCG-r17；结构体；OPTIONAL。 */
    bool has_extendedDC_LocationReport_r17; /**< extendedDC-LocationReport-r17 是否存在。 */
    FeatureSetUplink_v1720_ExtendedDC_LocationReport_r17 extendedDC_LocationReport_r17; /**< ASN.1 extendedDC-LocationReport-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PosSRS_BWA_RRC_Connected_r18
 * @note ASN.1：PosSRS-BWA-RRC-Connected-r18；源文件第 16985 行。
 * @note PosSRS-BWA-RRC-Connected-r18 ::= SEQUENCE { numOfCarriersIntraBandContiguous-r18, maximumAggregatedBW-TwoCarri...
 */
struct PosSRS_BWA_RRC_Connected_r18 {
    bool has_numOfCarriersIntraBandContiguous_r18; /**< numOfCarriersIntraBandContiguous-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18 numOfCarriersIntraBandContiguous_r18; /**< ASN.1 numOfCarriersIntraBandContiguous-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_TwoCarriersFR1_r18; /**< maximumAggregatedBW-TwoCarriersFR1-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18 maximumAggregatedBW_TwoCarriersFR1_r18; /**< ASN.1 maximumAggregatedBW-TwoCarriersFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_TwoCarriersFR2_r18; /**< maximumAggregatedBW-TwoCarriersFR2-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18 maximumAggregatedBW_TwoCarriersFR2_r18; /**< ASN.1 maximumAggregatedBW-TwoCarriersFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_ThreeCarriersFR1_r18; /**< maximumAggregatedBW-ThreeCarriersFR1-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18 maximumAggregatedBW_ThreeCarriersFR1_r18; /**< ASN.1 maximumAggregatedBW-ThreeCarriersFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_ThreeCarriersFR2_r18; /**< maximumAggregatedBW-ThreeCarriersFR2-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18 maximumAggregatedBW_ThreeCarriersFR2_r18; /**< ASN.1 maximumAggregatedBW-ThreeCarriersFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSet_r18; /**< maximumAggregatedResourceSet-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18 maximumAggregatedResourceSet_r18; /**< ASN.1 maximumAggregatedResourceSet-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourcePeriodic_r18; /**< maximumAggregatedResourcePeriodic-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18 maximumAggregatedResourcePeriodic_r18; /**< ASN.1 maximumAggregatedResourcePeriodic-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceAperiodic_r18; /**< maximumAggregatedResourceAperiodic-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18 maximumAggregatedResourceAperiodic_r18; /**< ASN.1 maximumAggregatedResourceAperiodic-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSemi_r18; /**< maximumAggregatedResourceSemi-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18 maximumAggregatedResourceSemi_r18; /**< ASN.1 maximumAggregatedResourceSemi-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourcePeriodicPerSlot_r18; /**< maximumAggregatedResourcePeriodicPerSlot-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18 maximumAggregatedResourcePeriodicPerSlot_r18; /**< ASN.1 maximumAggregatedResourcePeriodicPerSlot-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceAperiodicPerSlot_r18; /**< maximumAggregatedResourceAperiodicPerSlot-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18 maximumAggregatedResourceAperiodicPerSlot_r18; /**< ASN.1 maximumAggregatedResourceAperiodicPerSlot-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSemiPerSlot_r18; /**< maximumAggregatedResourceSemiPerSlot-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18 maximumAggregatedResourceSemiPerSlot_r18; /**< ASN.1 maximumAggregatedResourceSemiPerSlot-r18；枚举；OPTIONAL。 */
    bool has_supportOfSameSRS_PowerReduction_r18; /**< supportOfSameSRS-PowerReduction-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18 supportOfSameSRS_PowerReduction_r18; /**< ASN.1 supportOfSameSRS-PowerReduction-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PosSRS_BWA_IndependentCA_RRC_Connected_r18
 * @note ASN.1：PosSRS-BWA-IndependentCA-RRC-Connected-r18；源文件第 17003 行。
 * @note PosSRS-BWA-IndependentCA-RRC-Connected-r18 ::= SEQUENCE { numOfCarriersIntraBandContiguous-r18, maximumAggregatedBW-TwoCarri...
 */
struct PosSRS_BWA_IndependentCA_RRC_Connected_r18 {
    bool has_numOfCarriersIntraBandContiguous_r18; /**< numOfCarriersIntraBandContiguous-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18 numOfCarriersIntraBandContiguous_r18; /**< ASN.1 numOfCarriersIntraBandContiguous-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_TwoCarriersFR1_r18; /**< maximumAggregatedBW-TwoCarriersFR1-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18 maximumAggregatedBW_TwoCarriersFR1_r18; /**< ASN.1 maximumAggregatedBW-TwoCarriersFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_TwoCarriersFR2_r18; /**< maximumAggregatedBW-TwoCarriersFR2-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18 maximumAggregatedBW_TwoCarriersFR2_r18; /**< ASN.1 maximumAggregatedBW-TwoCarriersFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_ThreeCarriersFR1_r18; /**< maximumAggregatedBW-ThreeCarriersFR1-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18 maximumAggregatedBW_ThreeCarriersFR1_r18; /**< ASN.1 maximumAggregatedBW-ThreeCarriersFR1-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedBW_ThreeCarriersFR2_r18; /**< maximumAggregatedBW-ThreeCarriersFR2-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18 maximumAggregatedBW_ThreeCarriersFR2_r18; /**< ASN.1 maximumAggregatedBW-ThreeCarriersFR2-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSet_r18; /**< maximumAggregatedResourceSet-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18 maximumAggregatedResourceSet_r18; /**< ASN.1 maximumAggregatedResourceSet-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourcePeriodic_r18; /**< maximumAggregatedResourcePeriodic-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18 maximumAggregatedResourcePeriodic_r18; /**< ASN.1 maximumAggregatedResourcePeriodic-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceAperiodic_r18; /**< maximumAggregatedResourceAperiodic-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18 maximumAggregatedResourceAperiodic_r18; /**< ASN.1 maximumAggregatedResourceAperiodic-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSemi_r18; /**< maximumAggregatedResourceSemi-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18 maximumAggregatedResourceSemi_r18; /**< ASN.1 maximumAggregatedResourceSemi-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourcePeriodicPerSlot_r18; /**< maximumAggregatedResourcePeriodicPerSlot-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18 maximumAggregatedResourcePeriodicPerSlot_r18; /**< ASN.1 maximumAggregatedResourcePeriodicPerSlot-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceAperiodicPerSlot_r18; /**< maximumAggregatedResourceAperiodicPerSlot-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18 maximumAggregatedResourceAperiodicPerSlot_r18; /**< ASN.1 maximumAggregatedResourceAperiodicPerSlot-r18；枚举；OPTIONAL。 */
    bool has_maximumAggregatedResourceSemiPerSlot_r18; /**< maximumAggregatedResourceSemiPerSlot-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18 maximumAggregatedResourceSemiPerSlot_r18; /**< ASN.1 maximumAggregatedResourceSemiPerSlot-r18；枚举；OPTIONAL。 */
    bool has_supportOfSameSRS_PowerReduction_r18; /**< supportOfSameSRS-PowerReduction-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18 supportOfSameSRS_PowerReduction_r18; /**< ASN.1 supportOfSameSRS-PowerReduction-r18；枚举；OPTIONAL。 */
    bool has_guardPeriod_r18; /**< guardPeriod-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18 guardPeriod_r18; /**< ASN.1 guardPeriod-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18
 * @note ASN.1：pusch-DMRS-TypeEnh-r18/pusch-TypeA-DMRS-r18；源文件第 16888 行。
 * @note SEQUENCE { dmrs-TypeA-r18, pusch-2SymbolFL-DMRS-r18, pusch-2SymbolFL-DMRS-Add...
 */
struct FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18 dmrs_TypeA_r18; /**< ASN.1 dmrs-TypeA-r18；枚举。 */
    bool has_pusch_2SymbolFL_DMRS_r18; /**< pusch-2SymbolFL-DMRS-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_r18 pusch_2SymbolFL_DMRS_r18; /**< ASN.1 pusch-2SymbolFL-DMRS-r18；枚举；OPTIONAL。 */
    bool has_pusch_2SymbolFL_DMRS_Addition2Symbol_r18; /**< pusch-2SymbolFL-DMRS-Addition2Symbol-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_Addition2Symbol_r18 pusch_2SymbolFL_DMRS_Addition2Symbol_r18; /**< ASN.1 pusch-2SymbolFL-DMRS-Addition2Symbol-r18；枚举；OPTIONAL。 */
    bool has_pusch_1SymbolFL_DMRS_Addition3Symbol_r18; /**< pusch-1SymbolFL-DMRS-Addition3Symbol-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_1SymbolFL_DMRS_Addition3Symbol_r18 pusch_1SymbolFL_DMRS_Addition3Symbol_r18; /**< ASN.1 pusch-1SymbolFL-DMRS-Addition3Symbol-r18；枚举；OPTIONAL。 */
    bool has_pusch_DMRS8Tx_r18; /**< pusch-DMRS8Tx-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18 pusch_DMRS8Tx_r18; /**< ASN.1 pusch-DMRS8Tx-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18
 * @note ASN.1：pusch-DMRS-TypeEnh-r18；源文件第 16886 行。
 * @note SEQUENCE { dmrs-Type-r18, pusch-TypeA-DMRS-r18, pusch-TypeB-DMRS-r18, pusch-r...
 */
struct FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18 dmrs_Type_r18; /**< ASN.1 dmrs-Type-r18；枚举。 */
    bool has_pusch_TypeA_DMRS_r18; /**< pusch-TypeA-DMRS-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18 pusch_TypeA_DMRS_r18; /**< ASN.1 pusch-TypeA-DMRS-r18；结构体；OPTIONAL。 */
    bool has_pusch_TypeB_DMRS_r18; /**< pusch-TypeB-DMRS-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeB_DMRS_r18 pusch_TypeB_DMRS_r18; /**< ASN.1 pusch-TypeB-DMRS-r18；枚举；OPTIONAL。 */
    bool has_pusch_rank_1_4_1Port_r18; /**< pusch-rank-1-4-1Port-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_1Port_r18 pusch_rank_1_4_1Port_r18; /**< ASN.1 pusch-rank-1-4-1Port-r18；枚举；OPTIONAL。 */
    bool has_pusch_rank_5_8_1Port_r18; /**< pusch-rank-5-8-1Port-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_1Port_r18 pusch_rank_5_8_1Port_r18; /**< ASN.1 pusch-rank-5-8-1Port-r18；枚举；OPTIONAL。 */
    bool has_pusch_rank_1_4_2Port_r18; /**< pusch-rank-1-4-2Port-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_2Port_r18 pusch_rank_1_4_2Port_r18; /**< ASN.1 pusch-rank-1-4-2Port-r18；枚举；OPTIONAL。 */
    bool has_pusch_rank_5_8_2Port_r18; /**< pusch-rank-5-8-2Port-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_2Port_r18 pusch_rank_5_8_2Port_r18; /**< ASN.1 pusch-rank-5-8-2Port-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplink_v1800
 * @note ASN.1：FeatureSetUplink-v1800；源文件第 16873 行。
 * @note FeatureSetUplink-v1800 ::= SEQUENCE { maxDelayValueBeyondD-Basic-r18, tdcp-NumberDelayValue-r18, phaseRe...
 */
struct FeatureSetUplink_v1800 {
    bool has_maxDelayValueBeyondD_Basic_r18; /**< maxDelayValueBeyondD-Basic-r18 是否存在。 */
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18 maxDelayValueBeyondD_Basic_r18; /**< ASN.1 maxDelayValueBeyondD-Basic-r18；枚举；OPTIONAL。 */
    bool has_tdcp_NumberDelayValue_r18; /**< tdcp-NumberDelayValue-r18 是否存在。 */
    int64_t tdcp_NumberDelayValue_r18; /**< ASN.1 tdcp-NumberDelayValue-r18；INTEGER (2..4)，位宽 2 bit；OPTIONAL。 */
    bool has_phaseReportMoreThanOne_r18; /**< phaseReportMoreThanOne-r18 是否存在。 */
    FeatureSetUplink_v1800_PhaseReportMoreThanOne_r18 phaseReportMoreThanOne_r18; /**< ASN.1 phaseReportMoreThanOne-r18；枚举；OPTIONAL。 */
    bool has_maxNumberTRS_ResourceSet_r18; /**< maxNumberTRS-ResourceSet-r18 是否存在。 */
    int64_t maxNumberTRS_ResourceSet_r18; /**< ASN.1 maxNumberTRS-ResourceSet-r18；INTEGER (2..3)，位宽 1 bit；OPTIONAL。 */
    bool has_maxNumberTDCP_PerBWP_r18; /**< maxNumberTDCP-PerBWP-r18 是否存在。 */
    int64_t maxNumberTDCP_PerBWP_r18; /**< ASN.1 maxNumberTDCP-PerBWP-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_pusch_DMRS_TypeEnh_r18; /**< pusch-DMRS-TypeEnh-r18 是否存在。 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18 pusch_DMRS_TypeEnh_r18; /**< ASN.1 pusch-DMRS-TypeEnh-r18；结构体；OPTIONAL。 */
    bool has_ul_DMRS_SingleDCI_M_TRP_r18; /**< ul-DMRS-SingleDCI-M-TRP-r18 是否存在。 */
    FeatureSetUplink_v1800_Ul_DMRS_SingleDCI_M_TRP_r18 ul_DMRS_SingleDCI_M_TRP_r18; /**< ASN.1 ul-DMRS-SingleDCI-M-TRP-r18；枚举；OPTIONAL。 */
    bool has_ul_DMRS_M_DCI_M_TRP_r18; /**< ul-DMRS-M-DCI-M-TRP-r18 是否存在。 */
    FeatureSetUplink_v1800_Ul_DMRS_M_DCI_M_TRP_r18 ul_DMRS_M_DCI_M_TRP_r18; /**< ASN.1 ul-DMRS-M-DCI-M-TRP-r18；枚举；OPTIONAL。 */
    bool has_srs_AntennaSwitching8T8R2SP_1Periodic_r18; /**< srs-AntennaSwitching8T8R2SP-1Periodic-r18 是否存在。 */
    FeatureSetUplink_v1800_Srs_AntennaSwitching8T8R2SP_1Periodic_r18 srs_AntennaSwitching8T8R2SP_1Periodic_r18; /**< ASN.1 srs-AntennaSwitching8T8R2SP-1Periodic-r18；枚举；OPTIONAL。 */
    bool has_pucch_SingleDCI_STx2P_SFN_r18; /**< pucch-SingleDCI-STx2P-SFN-r18 是否存在。 */
    FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18 pucch_SingleDCI_STx2P_SFN_r18; /**< ASN.1 pucch-SingleDCI-STx2P-SFN-r18；枚举；OPTIONAL。 */
    bool has_posSRS_BWA_RRC_Connected_r18; /**< posSRS-BWA-RRC-Connected-r18 是否存在。 */
    PosSRS_BWA_RRC_Connected_r18 posSRS_BWA_RRC_Connected_r18; /**< ASN.1 posSRS-BWA-RRC-Connected-r18；结构体；OPTIONAL。 */
    bool has_posSRS_BWA_IndependentCA_RRC_Connected_r18; /**< posSRS-BWA-IndependentCA-RRC-Connected-r18 是否存在。 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18 posSRS_BWA_IndependentCA_RRC_Connected_r18; /**< ASN.1 posSRS-BWA-IndependentCA-RRC-Connected-r18；结构体；OPTIONAL。 */
    bool has_posSRS_BWA_AffectedBandList_r18; /**< posSRS-BWA-AffectedBandList-r18 是否存在。 */
    FreqBandIndicatorNR* posSRS_BWA_AffectedBandList_r18_items; /**< ASN.1 posSRS-BWA-AffectedBandList-r18；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t posSRS_BWA_AffectedBandList_r18_count; /**< posSRS-BWA-AffectedBandList-r18 元素个数。 */
    bool has_txDiversity4Tx_r18; /**< txDiversity4Tx-r18 是否存在。 */
    FeatureSetUplink_v1800_TxDiversity4Tx_r18 txDiversity4Tx_r18; /**< ASN.1 txDiversity4Tx-r18；枚举；OPTIONAL。 */
    bool has_powerBoosting_pi2BPSK_QPSK_r18; /**< powerBoosting-pi2BPSK-QPSK-r18 是否存在。 */
    FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_r18 powerBoosting_pi2BPSK_QPSK_r18; /**< ASN.1 powerBoosting-pi2BPSK-QPSK-r18；枚举；OPTIONAL。 */
    bool has_powerBoosting_pi2BPSK_QPSK_Modified_r18; /**< powerBoosting-pi2BPSK-QPSK-Modified-r18 是否存在。 */
    FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_Modified_r18 powerBoosting_pi2BPSK_QPSK_Modified_r18; /**< ASN.1 powerBoosting-pi2BPSK-QPSK-Modified-r18；枚举；OPTIONAL。 */
    bool has_txDiversity2Tx_r18; /**< txDiversity2Tx-r18 是否存在。 */
    FeatureSetUplink_v1800_TxDiversity2Tx_r18 txDiversity2Tx_r18; /**< ASN.1 txDiversity2Tx-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_Mimo_CB_PUSCH
 * @note ASN.1：mimo-CB-PUSCH；源文件第 17034 行。
 * @note SEQUENCE { maxNumberMIMO-LayersCB-PUSCH, maxNumberSRS-ResourcePerSet }
 */
struct FeatureSetUplinkPerCC_Mimo_CB_PUSCH {
    bool has_maxNumberMIMO_LayersCB_PUSCH; /**< maxNumberMIMO-LayersCB-PUSCH 是否存在。 */
    MIMO_LayersUL maxNumberMIMO_LayersCB_PUSCH; /**< ASN.1 maxNumberMIMO-LayersCB-PUSCH；枚举；OPTIONAL。 */
    int64_t maxNumberSRS_ResourcePerSet; /**< ASN.1 maxNumberSRS-ResourcePerSet；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief FeatureSetUplinkPerCC
 * @note ASN.1：FeatureSetUplinkPerCC；源文件第 17030 行。
 * @note FeatureSetUplinkPerCC ::= SEQUENCE { supportedSubcarrierSpacingUL, supportedBandwidthUL, channelBW-90mh...
 */
struct FeatureSetUplinkPerCC {
    SubcarrierSpacing supportedSubcarrierSpacingUL; /**< ASN.1 supportedSubcarrierSpacingUL；枚举。 */
    SupportedBandwidth supportedBandwidthUL; /**< ASN.1 supportedBandwidthUL；结构体。 */
    bool has_channelBW_90mhz; /**< channelBW-90mhz 是否存在。 */
    FeatureSetUplinkPerCC_ChannelBW_90mhz channelBW_90mhz; /**< ASN.1 channelBW-90mhz；枚举；OPTIONAL。 */
    bool has_mimo_CB_PUSCH; /**< mimo-CB-PUSCH 是否存在。 */
    FeatureSetUplinkPerCC_Mimo_CB_PUSCH mimo_CB_PUSCH; /**< ASN.1 mimo-CB-PUSCH；结构体；OPTIONAL。 */
    bool has_maxNumberMIMO_LayersNonCB_PUSCH; /**< maxNumberMIMO-LayersNonCB-PUSCH 是否存在。 */
    MIMO_LayersUL maxNumberMIMO_LayersNonCB_PUSCH; /**< ASN.1 maxNumberMIMO-LayersNonCB-PUSCH；枚举；OPTIONAL。 */
    bool has_supportedModulationOrderUL; /**< supportedModulationOrderUL 是否存在。 */
    ModulationOrder supportedModulationOrderUL; /**< ASN.1 supportedModulationOrderUL；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH
 * @note ASN.1：mimo-NonCB-PUSCH；源文件第 17042 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet, maxNumberSimultaneousSRS-ResourceTx }
 */
struct FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH {
    int64_t maxNumberSRS_ResourcePerSet; /**< ASN.1 maxNumberSRS-ResourcePerSet；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberSimultaneousSRS_ResourceTx; /**< ASN.1 maxNumberSimultaneousSRS-ResourceTx；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1540
 * @note ASN.1：FeatureSetUplinkPerCC-v1540；源文件第 17041 行。
 * @note FeatureSetUplinkPerCC-v1540 ::= SEQUENCE { mimo-NonCB-PUSCH }
 */
struct FeatureSetUplinkPerCC_v1540 {
    bool has_mimo_NonCB_PUSCH; /**< mimo-NonCB-PUSCH 是否存在。 */
    FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH mimo_NonCB_PUSCH; /**< ASN.1 mimo-NonCB-PUSCH；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1700
 * @note ASN.1：FeatureSetUplinkPerCC-v1700；源文件第 17048 行。
 * @note FeatureSetUplinkPerCC-v1700 ::= SEQUENCE { supportedMinBandwidthUL-r17, mTRP-PUSCH-RepetitionTypeB-r17, mTRP-...
 */
struct FeatureSetUplinkPerCC_v1700 {
    bool has_supportedMinBandwidthUL_r17; /**< supportedMinBandwidthUL-r17 是否存在。 */
    SupportedBandwidth_v1700 supportedMinBandwidthUL_r17; /**< ASN.1 supportedMinBandwidthUL-r17；结构体；OPTIONAL。 */
    bool has_mTRP_PUSCH_RepetitionTypeB_r17; /**< mTRP-PUSCH-RepetitionTypeB-r17 是否存在。 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17 mTRP_PUSCH_RepetitionTypeB_r17; /**< ASN.1 mTRP-PUSCH-RepetitionTypeB-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_TypeB_CB_r17; /**< mTRP-PUSCH-TypeB-CB-r17 是否存在。 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17 mTRP_PUSCH_TypeB_CB_r17; /**< ASN.1 mTRP-PUSCH-TypeB-CB-r17；枚举；OPTIONAL。 */
    bool has_supportedBandwidthUL_v1710; /**< supportedBandwidthUL-v1710 是否存在。 */
    SupportedBandwidth_v1700 supportedBandwidthUL_v1710; /**< ASN.1 supportedBandwidthUL-v1710；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1780
 * @note ASN.1：FeatureSetUplinkPerCC-v1780；源文件第 17057 行。
 * @note FeatureSetUplinkPerCC-v1780 ::= SEQUENCE { supportedBandwidthUL-v1780 }
 */
struct FeatureSetUplinkPerCC_v1780 {
    bool has_supportedBandwidthUL_v1780; /**< supportedBandwidthUL-v1780 是否存在。 */
    SupportedBandwidth_v1700 supportedBandwidthUL_v1780; /**< ASN.1 supportedBandwidthUL-v1780；结构体；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18
 * @note ASN.1：pusch-CB-SingleDCI-STx2P-SDM-r18；源文件第 17065 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-r18, maxNumberLayerPerPanel-r18, maxNu...
 */
struct FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18 maxNumberSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSRS-ResourcePerSet-r18；枚举。 */
    int64_t maxNumberLayerPerPanel_r18; /**< ASN.1 maxNumberLayerPerPanel-r18；INTEGER (1..2)，位宽 1 bit。 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18 maxNumberNZP_PUSCH_PortsPerSet_r18; /**< ASN.1 maxNumberNZP-PUSCH-PortsPerSet-r18；枚举。 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18 maxNumberSRS_AntennaPortsPerSet_r18; /**< ASN.1 maxNumberSRS-AntennaPortsPerSet-r18；枚举。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18
 * @note ASN.1：pusch-NonCB-SingleDCI-STx2P-SDM-r18；源文件第 17072 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-r18, maxNumberLayerPerPanel-r18, maxNu...
 */
struct FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18 {
    int64_t maxNumberSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSRS-ResourcePerSet-r18；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberLayerPerPanel_r18; /**< ASN.1 maxNumberLayerPerPanel-r18；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxNumberSimulSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSimulSRS-ResourcePerSet-r18；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18
 * @note ASN.1：pusch-CB-SingleDCI-STx2P-SFN-r18；源文件第 17078 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-r18, maxNumberLayerPerSet-r18, maxNumb...
 */
struct FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18 maxNumberSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSRS-ResourcePerSet-r18；枚举。 */
    int64_t maxNumberLayerPerSet_r18; /**< ASN.1 maxNumberLayerPerSet-r18；INTEGER (1..2)，位宽 1 bit。 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18 maxNumberSRS_AntennaPortsPerSet_r18; /**< ASN.1 maxNumberSRS-AntennaPortsPerSet-r18；枚举。 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18 maxNumberNZP_PUSCH_PortsPerSet_r18; /**< ASN.1 maxNumberNZP-PUSCH-PortsPerSet-r18；枚举。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18
 * @note ASN.1：pusch-NonCB-SingleDCI-STx2P-SFN-r18；源文件第 17085 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-r18, maxNumberLayerPerSet-r18, maxNumb...
 */
struct FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18 {
    int64_t maxNumberSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSRS-ResourcePerSet-r18；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberLayerPerSet_r18; /**< ASN.1 maxNumberLayerPerSet-r18；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxNumberSimulSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSimulSRS-ResourcePerSet-r18；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18
 * @note ASN.1：twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18/maxNumberPUSCH-PerCORESET-PerSlot-r18；源文件第 17095 行。
 * @note SEQUENCE { scs-60kHz-r18, scs-120kHz-r18 }
 */
struct FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18 {
    bool has_scs_60kHz_r18; /**< scs-60kHz-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18 scs_60kHz_r18; /**< ASN.1 scs-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r18; /**< scs-120kHz-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18 scs_120kHz_r18; /**< ASN.1 scs-120kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18
 * @note ASN.1：twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18；源文件第 17091 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-r18, maxNumberLayerOverlapping-r18, ma...
 */
struct FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18 maxNumberSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSRS-ResourcePerSet-r18；枚举。 */
    int64_t maxNumberLayerOverlapping_r18; /**< ASN.1 maxNumberLayerOverlapping-r18；INTEGER (1..2)，位宽 1 bit。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18 maxNumberNZP_PUSCH_Overlapping_r18; /**< ASN.1 maxNumberNZP-PUSCH-Overlapping-r18；枚举。 */
    bool has_maxNumberPUSCH_PerCORESET_PerSlot_r18; /**< maxNumberPUSCH-PerCORESET-PerSlot-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18 maxNumberPUSCH_PerCORESET_PerSlot_r18; /**< ASN.1 maxNumberPUSCH-PerCORESET-PerSlot-r18；结构体；OPTIONAL。 */
    int64_t maxNumberTotalLayerOverlapping_r18; /**< ASN.1 maxNumberTotalLayerOverlapping-r18；INTEGER (2..4)，位宽 2 bit。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18 maxNumberSRS_AntennaPortsPerSet_r18; /**< ASN.1 maxNumberSRS-AntennaPortsPerSet-r18；枚举。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18
 * @note ASN.1：twoPUSCH-NonCB-MultiDCI-STx2P-DG-DG-r18/maxNumberPUSCH-PerCORESET-PerSlot-r18；源文件第 17107 行。
 * @note SEQUENCE { scs-60kHz-r18, scs-120kHz-r18 }
 */
struct FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18 {
    bool has_scs_60kHz_r18; /**< scs-60kHz-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18 scs_60kHz_r18; /**< ASN.1 scs-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r18; /**< scs-120kHz-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18 scs_120kHz_r18; /**< ASN.1 scs-120kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18
 * @note ASN.1：twoPUSCH-NonCB-MultiDCI-STx2P-DG-DG-r18；源文件第 17103 行。
 * @note SEQUENCE { maxNumberSRS-ResourcePerSet-r18, maxNumberLayerOverlapping-r18, ma...
 */
struct FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18 {
    int64_t maxNumberSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSRS-ResourcePerSet-r18；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberLayerOverlapping_r18; /**< ASN.1 maxNumberLayerOverlapping-r18；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxNumberSimulSRS_ResourcePerSet_r18; /**< ASN.1 maxNumberSimulSRS-ResourcePerSet-r18；INTEGER (1..4)，位宽 2 bit。 */
    bool has_maxNumberPUSCH_PerCORESET_PerSlot_r18; /**< maxNumberPUSCH-PerCORESET-PerSlot-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18 maxNumberPUSCH_PerCORESET_PerSlot_r18; /**< ASN.1 maxNumberPUSCH-PerCORESET-PerSlot-r18；结构体；OPTIONAL。 */
    int64_t maxNumberTotalLayerOverlapping_r18; /**< ASN.1 maxNumberTotalLayerOverlapping-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18
 * @note ASN.1：codebookParameter8TxPUSCH-r18/codebook-8TxBasic-r18；源文件第 17118 行。
 * @note SEQUENCE { maxNumberPUSCH-MIMO-Layer-r18, maxNumberSRS-Resource-r18, srs-8TxP...
 */
struct FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18 {
    int64_t maxNumberPUSCH_MIMO_Layer_r18; /**< ASN.1 maxNumberPUSCH-MIMO-Layer-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSRS_Resource_r18; /**< ASN.1 maxNumberSRS-Resource-r18；INTEGER (1..2)，位宽 1 bit。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18 srs_8TxPorts_r18; /**< ASN.1 srs-8TxPorts-r18；枚举。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18
 * @note ASN.1：codebookParameter8TxPUSCH-r18；源文件第 17116 行。
 * @note SEQUENCE { codebook-8TxBasic-r18, codebook1-8TxPUSCH-r18, codebook2-8TxPUSCH-...
 */
struct FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18 codebook_8TxBasic_r18; /**< ASN.1 codebook-8TxBasic-r18；结构体。 */
    bool has_codebook1_8TxPUSCH_r18; /**< codebook1-8TxPUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18 codebook1_8TxPUSCH_r18; /**< ASN.1 codebook1-8TxPUSCH-r18；枚举；OPTIONAL。 */
    bool has_codebook2_8TxPUSCH_r18; /**< codebook2-8TxPUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook2_8TxPUSCH_r18 codebook2_8TxPUSCH_r18; /**< ASN.1 codebook2-8TxPUSCH-r18；枚举；OPTIONAL。 */
    bool has_codebook3_8TxPUSCH_r18; /**< codebook3-8TxPUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook3_8TxPUSCH_r18 codebook3_8TxPUSCH_r18; /**< ASN.1 codebook3-8TxPUSCH-r18；枚举；OPTIONAL。 */
    bool has_codebook4_8TxPUSCH_r18; /**< codebook4-8TxPUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook4_8TxPUSCH_r18 codebook4_8TxPUSCH_r18; /**< ASN.1 codebook4-8TxPUSCH-r18；枚举；OPTIONAL。 */
    bool has_ul_FullPwrTransMode0_r18; /**< ul-FullPwrTransMode0-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode0_r18 ul_FullPwrTransMode0_r18; /**< ASN.1 ul-FullPwrTransMode0-r18；枚举；OPTIONAL。 */
    bool has_ul_FullPwrTransMode1_r18; /**< ul-FullPwrTransMode1-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode1_r18 ul_FullPwrTransMode1_r18; /**< ASN.1 ul-FullPwrTransMode1-r18；枚举；OPTIONAL。 */
    bool has_ul_FullPwrTransMode2_r18; /**< ul-FullPwrTransMode2-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18 ul_FullPwrTransMode2_r18; /**< ASN.1 ul-FullPwrTransMode2-r18；枚举；OPTIONAL。 */
    bool has_ul_SRS_TransMode2_r18; /**< ul-SRS-TransMode2-r18 是否存在。 */
    BitString ul_SRS_TransMode2_r18; /**< ASN.1 ul-SRS-TransMode2-r18；SIZE (3)，定长；OPTIONAL。 */
    bool has_tpmi_FullPwrCodebook2_r18; /**< tpmi-FullPwrCodebook2-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18 tpmi_FullPwrCodebook2_r18; /**< ASN.1 tpmi-FullPwrCodebook2-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18
 * @note ASN.1：nonCodebook-8TxPUSCH-r18；源文件第 17143 行。
 * @note SEQUENCE { maxNumberPUSCH-MIMO-Layer-r18, maxNumberSRS-Resource-r18, maxNumbe...
 */
struct FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18 {
    int64_t maxNumberPUSCH_MIMO_Layer_r18; /**< ASN.1 maxNumberPUSCH-MIMO-Layer-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSRS_Resource_r18; /**< ASN.1 maxNumberSRS-Resource-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSimultaneousSRS_r18; /**< ASN.1 maxNumberSimultaneousSRS-r18；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief FeatureSetUplinkPerCC_v1800
 * @note ASN.1：FeatureSetUplinkPerCC-v1800；源文件第 17061 行。
 * @note FeatureSetUplinkPerCC-v1800 ::= SEQUENCE { twoPUSCH-MultiDCI-STxMP-TwoTA-r18, pusch-CB-SingleDCI-STx2P-SDM-r1...
 */
struct FeatureSetUplinkPerCC_v1800 {
    bool has_twoPUSCH_MultiDCI_STxMP_TwoTA_r18; /**< twoPUSCH-MultiDCI-STxMP-TwoTA-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STxMP_TwoTA_r18 twoPUSCH_MultiDCI_STxMP_TwoTA_r18; /**< ASN.1 twoPUSCH-MultiDCI-STxMP-TwoTA-r18；枚举；OPTIONAL。 */
    bool has_pusch_CB_SingleDCI_STx2P_SDM_r18; /**< pusch-CB-SingleDCI-STx2P-SDM-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18 pusch_CB_SingleDCI_STx2P_SDM_r18; /**< ASN.1 pusch-CB-SingleDCI-STx2P-SDM-r18；结构体；OPTIONAL。 */
    bool has_pusch_NonCB_SingleDCI_STx2P_SDM_r18; /**< pusch-NonCB-SingleDCI-STx2P-SDM-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18 pusch_NonCB_SingleDCI_STx2P_SDM_r18; /**< ASN.1 pusch-NonCB-SingleDCI-STx2P-SDM-r18；结构体；OPTIONAL。 */
    bool has_pusch_CB_SingleDCI_STx2P_SFN_r18; /**< pusch-CB-SingleDCI-STx2P-SFN-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18 pusch_CB_SingleDCI_STx2P_SFN_r18; /**< ASN.1 pusch-CB-SingleDCI-STx2P-SFN-r18；结构体；OPTIONAL。 */
    bool has_pusch_NonCB_SingleDCI_STx2P_SFN_r18; /**< pusch-NonCB-SingleDCI-STx2P-SFN-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18 pusch_NonCB_SingleDCI_STx2P_SFN_r18; /**< ASN.1 pusch-NonCB-SingleDCI-STx2P-SFN-r18；结构体；OPTIONAL。 */
    bool has_twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18; /**< twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18 twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18; /**< ASN.1 twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18；结构体；OPTIONAL。 */
    bool has_twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18; /**< twoPUSCH-NonCB-MultiDCI-STx2P-DG-DG-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18 twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18; /**< ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-DG-DG-r18；结构体；OPTIONAL。 */
    bool has_twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18; /**< twoPUSCH-MultiDCI-STx2P-OutOfOrder-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STx2P_OutOfOrder_r18 twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18; /**< ASN.1 twoPUSCH-MultiDCI-STx2P-OutOfOrder-r18；枚举；OPTIONAL。 */
    bool has_codebookParameter8TxPUSCH_r18; /**< codebookParameter8TxPUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18 codebookParameter8TxPUSCH_r18; /**< ASN.1 codebookParameter8TxPUSCH-r18；结构体；OPTIONAL。 */
    bool has_nonCodebook_8TxPUSCH_r18; /**< nonCodebook-8TxPUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18 nonCodebook_8TxPUSCH_r18; /**< ASN.1 nonCodebook-8TxPUSCH-r18；结构体；OPTIONAL。 */
    bool has_nonCodebook_CSI_RS_SRS_r18; /**< nonCodebook-CSI-RS-SRS-r18 是否存在。 */
    CodebookVariantsList_r16 nonCodebook_CSI_RS_SRS_r18; /**< ASN.1 nonCodebook-CSI-RS-SRS-r18；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (1..512)；OPTIONAL。 */
    bool has_cgb_2CW_PUSCH_r18; /**< cgb-2CW-PUSCH-r18 是否存在。 */
    FeatureSetUplinkPerCC_v1800_Cgb_2CW_PUSCH_r18 cgb_2CW_PUSCH_r18; /**< ASN.1 cgb-2CW-PUSCH-r18；枚举；OPTIONAL。 */
};


/**
 * @brief FreqBandList
 * @note ASN.1：FreqBandList；源文件第 17167 行。
 * @note FreqBandList ::= SEQUENCE OF (size 1..1280) OF FreqBandInformation
 */
struct FreqBandList {
    FreqBandInformation* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FreqBandInformationEUTRA
 * @note ASN.1：FreqBandInformationEUTRA；源文件第 17174 行。
 * @note FreqBandInformationEUTRA ::= SEQUENCE { bandEUTRA, ca-BandwidthClassDL-EUTRA, ca-BandwidthClassUL-EUTRA }
 */
struct FreqBandInformationEUTRA {
    FreqBandIndicatorEUTRA bandEUTRA; /**< ASN.1 bandEUTRA；INTEGER (1..256)，位宽 8 bit。 */
    bool has_ca_BandwidthClassDL_EUTRA; /**< ca-BandwidthClassDL-EUTRA 是否存在。 */
    CA_BandwidthClassEUTRA ca_BandwidthClassDL_EUTRA; /**< ASN.1 ca-BandwidthClassDL-EUTRA；枚举；OPTIONAL。 */
    bool has_ca_BandwidthClassUL_EUTRA; /**< ca-BandwidthClassUL-EUTRA 是否存在。 */
    CA_BandwidthClassEUTRA ca_BandwidthClassUL_EUTRA; /**< ASN.1 ca-BandwidthClassUL-EUTRA；枚举；OPTIONAL。 */
};


/**
 * @brief FreqBandInformationNR
 * @note ASN.1：FreqBandInformationNR；源文件第 17180 行。
 * @note FreqBandInformationNR ::= SEQUENCE { bandNR, maxBandwidthRequestedDL, maxBandwidthRequestedUL, maxCarri...
 */
struct FreqBandInformationNR {
    FreqBandIndicatorNR bandNR; /**< ASN.1 bandNR；INTEGER (1..1024)，位宽 10 bit。 */
    bool has_maxBandwidthRequestedDL; /**< maxBandwidthRequestedDL 是否存在。 */
    AggregatedBandwidth maxBandwidthRequestedDL; /**< ASN.1 maxBandwidthRequestedDL；枚举；OPTIONAL。 */
    bool has_maxBandwidthRequestedUL; /**< maxBandwidthRequestedUL 是否存在。 */
    AggregatedBandwidth maxBandwidthRequestedUL; /**< ASN.1 maxBandwidthRequestedUL；枚举；OPTIONAL。 */
    bool has_maxCarriersRequestedDL; /**< maxCarriersRequestedDL 是否存在。 */
    int64_t maxCarriersRequestedDL; /**< ASN.1 maxCarriersRequestedDL；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_maxCarriersRequestedUL; /**< maxCarriersRequestedUL 是否存在。 */
    int64_t maxCarriersRequestedUL; /**< ASN.1 maxCarriersRequestedUL；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief FreqBandInformation
 * @note ASN.1：FreqBandInformation；源文件第 17169 行。
 * @note FreqBandInformation ::= CHOICE { bandInformationEUTRA, bandInformationNR }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum FreqBandInformation_Tag {
    FreqBandInformation_Tag_bandInformationEUTRA = 0, /**< ASN.1 bandInformationEUTRA */
    FreqBandInformation_Tag_bandInformationNR = 1, /**< ASN.1 bandInformationNR */
} FreqBandInformation_Tag;

struct FreqBandInformation {
    FreqBandInformation_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        FreqBandInformationEUTRA bandInformationEUTRA; /**< ASN.1 bandInformationEUTRA */
        FreqBandInformationNR bandInformationNR; /**< ASN.1 bandInformationNR */
    } u;
};


/**
 * @brief FR2_2_AccessParamsPerBand_r17_ExtGroup1
 * @note ASN.1：FR2_2_AccessParamsPerBand_r17_ExtGroup1；源文件第 17266 行。
 */
struct FR2_2_AccessParamsPerBand_r17_ExtGroup1 {
    bool has_modulation64_QAM_PUSCH_FR2_2_r17; /**< modulation64-QAM-PUSCH-FR2-2-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_ExtGroup1_Modulation64_QAM_PUSCH_FR2_2_r17 modulation64_QAM_PUSCH_FR2_2_r17; /**< ASN.1 modulation64-QAM-PUSCH-FR2-2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17
 * @note ASN.1：enhancedPDCCH-monitoringSCS-960kHz-r17；源文件第 17242 行。
 * @note SEQUENCE { pdcch-monitoring4-1-r17, pdcch-monitoring4-2-r17, pdcch-monitoring...
 */
struct FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17 {
    bool has_pdcch_monitoring4_1_r17; /**< pdcch-monitoring4-1-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_1_r17 pdcch_monitoring4_1_r17; /**< ASN.1 pdcch-monitoring4-1-r17；枚举；OPTIONAL。 */
    bool has_pdcch_monitoring4_2_r17; /**< pdcch-monitoring4-2-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_2_r17 pdcch_monitoring4_2_r17; /**< ASN.1 pdcch-monitoring4-2-r17；枚举；OPTIONAL。 */
    bool has_pdcch_monitoring8_4_r17; /**< pdcch-monitoring8-4-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring8_4_r17 pdcch_monitoring8_4_r17; /**< ASN.1 pdcch-monitoring8-4-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17
 * @note ASN.1：support32-DL-HARQ-ProcessPerSCS-r17；源文件第 17254 行。
 * @note SEQUENCE { scs-120kHz-r17, scs-480kHz-r17, scs-960kHz-r17 }
 */
struct FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17 {
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17 scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_480kHz_r17; /**< scs-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17 scs_480kHz_r17; /**< ASN.1 scs-480kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_960kHz_r17; /**< scs-960kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17 scs_960kHz_r17; /**< ASN.1 scs-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17
 * @note ASN.1：support32-UL-HARQ-ProcessPerSCS-r17；源文件第 17260 行。
 * @note SEQUENCE { scs-120kHz-r17, scs-480kHz-r17, scs-960kHz-r17 }
 */
struct FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17 {
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17 scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_480kHz_r17; /**< scs-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17 scs_480kHz_r17; /**< ASN.1 scs-480kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_960kHz_r17; /**< scs-960kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17 scs_960kHz_r17; /**< ASN.1 scs-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief FR2_2_AccessParamsPerBand_r17
 * @note ASN.1：FR2-2-AccessParamsPerBand-r17；源文件第 17208 行。
 * @note FR2-2-AccessParamsPerBand-r17 ::= SEQUENCE { dl-FR2-2-SCS-120kHz-r17, ul-FR2-2-SCS-120kHz-r17, initialAccessSSB...
 */
struct FR2_2_AccessParamsPerBand_r17 {
    bool has_dl_FR2_2_SCS_120kHz_r17; /**< dl-FR2-2-SCS-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_120kHz_r17 dl_FR2_2_SCS_120kHz_r17; /**< ASN.1 dl-FR2-2-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_ul_FR2_2_SCS_120kHz_r17; /**< ul-FR2-2-SCS-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_120kHz_r17 ul_FR2_2_SCS_120kHz_r17; /**< ASN.1 ul-FR2-2-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_initialAccessSSB_120kHz_r17; /**< initialAccessSSB-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_120kHz_r17 initialAccessSSB_120kHz_r17; /**< ASN.1 initialAccessSSB-120kHz-r17；枚举；OPTIONAL。 */
    bool has_widebandPRACH_SCS_120kHz_r17; /**< widebandPRACH-SCS-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_120kHz_r17 widebandPRACH_SCS_120kHz_r17; /**< ASN.1 widebandPRACH-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_multiRB_PUCCH_SCS_120kHz_r17; /**< multiRB-PUCCH-SCS-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_120kHz_r17 multiRB_PUCCH_SCS_120kHz_r17; /**< ASN.1 multiRB-PUCCH-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17; /**< multiPDSCH-SingleDCI-FR2-2-SCS-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_MultiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17 multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17; /**< ASN.1 multiPDSCH-SingleDCI-FR2-2-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17; /**< multiPUSCH-SingleDCI-FR2-2-SCS-120kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_MultiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17 multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17; /**< ASN.1 multiPUSCH-SingleDCI-FR2-2-SCS-120kHz-r17；枚举；OPTIONAL。 */
    bool has_dl_FR2_2_SCS_480kHz_r17; /**< dl-FR2-2-SCS-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_480kHz_r17 dl_FR2_2_SCS_480kHz_r17; /**< ASN.1 dl-FR2-2-SCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_ul_FR2_2_SCS_480kHz_r17; /**< ul-FR2-2-SCS-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_480kHz_r17 ul_FR2_2_SCS_480kHz_r17; /**< ASN.1 ul-FR2-2-SCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_initialAccessSSB_480kHz_r17; /**< initialAccessSSB-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_480kHz_r17 initialAccessSSB_480kHz_r17; /**< ASN.1 initialAccessSSB-480kHz-r17；枚举；OPTIONAL。 */
    bool has_widebandPRACH_SCS_480kHz_r17; /**< widebandPRACH-SCS-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_480kHz_r17 widebandPRACH_SCS_480kHz_r17; /**< ASN.1 widebandPRACH-SCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_multiRB_PUCCH_SCS_480kHz_r17; /**< multiRB-PUCCH-SCS-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_480kHz_r17 multiRB_PUCCH_SCS_480kHz_r17; /**< ASN.1 multiRB-PUCCH-SCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_enhancedPDCCH_monitoringSCS_480kHz_r17; /**< enhancedPDCCH-monitoringSCS-480kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_480kHz_r17 enhancedPDCCH_monitoringSCS_480kHz_r17; /**< ASN.1 enhancedPDCCH-monitoringSCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_dl_FR2_2_SCS_960kHz_r17; /**< dl-FR2-2-SCS-960kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_960kHz_r17 dl_FR2_2_SCS_960kHz_r17; /**< ASN.1 dl-FR2-2-SCS-960kHz-r17；枚举；OPTIONAL。 */
    bool has_ul_FR2_2_SCS_960kHz_r17; /**< ul-FR2-2-SCS-960kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_960kHz_r17 ul_FR2_2_SCS_960kHz_r17; /**< ASN.1 ul-FR2-2-SCS-960kHz-r17；枚举；OPTIONAL。 */
    bool has_multiRB_PUCCH_SCS_960kHz_r17; /**< multiRB-PUCCH-SCS-960kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_960kHz_r17 multiRB_PUCCH_SCS_960kHz_r17; /**< ASN.1 multiRB-PUCCH-SCS-960kHz-r17；枚举；OPTIONAL。 */
    bool has_enhancedPDCCH_monitoringSCS_960kHz_r17; /**< enhancedPDCCH-monitoringSCS-960kHz-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17 enhancedPDCCH_monitoringSCS_960kHz_r17; /**< ASN.1 enhancedPDCCH-monitoringSCS-960kHz-r17；结构体；OPTIONAL。 */
    bool has_type1_ChannelAccess_FR2_2_r17; /**< type1-ChannelAccess-FR2-2-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Type1_ChannelAccess_FR2_2_r17 type1_ChannelAccess_FR2_2_r17; /**< ASN.1 type1-ChannelAccess-FR2-2-r17；枚举；OPTIONAL。 */
    bool has_type2_ChannelAccess_FR2_2_r17; /**< type2-ChannelAccess-FR2-2-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Type2_ChannelAccess_FR2_2_r17 type2_ChannelAccess_FR2_2_r17; /**< ASN.1 type2-ChannelAccess-FR2-2-r17；枚举；OPTIONAL。 */
    bool has_reduced_BeamSwitchTiming_FR2_2_r17; /**< reduced-BeamSwitchTiming-FR2-2-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Reduced_BeamSwitchTiming_FR2_2_r17 reduced_BeamSwitchTiming_FR2_2_r17; /**< ASN.1 reduced-BeamSwitchTiming-FR2-2-r17；枚举；OPTIONAL。 */
    bool has_support32_DL_HARQ_ProcessPerSCS_r17; /**< support32-DL-HARQ-ProcessPerSCS-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17 support32_DL_HARQ_ProcessPerSCS_r17; /**< ASN.1 support32-DL-HARQ-ProcessPerSCS-r17；结构体；OPTIONAL。 */
    bool has_support32_UL_HARQ_ProcessPerSCS_r17; /**< support32-UL-HARQ-ProcessPerSCS-r17 是否存在。 */
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17 support32_UL_HARQ_ProcessPerSCS_r17; /**< ASN.1 support32-UL-HARQ-ProcessPerSCS-r17；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FR2_2_AccessParamsPerBand_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief HighSpeedParameters_r16
 * @note ASN.1：HighSpeedParameters-r16；源文件第 17275 行。
 * @note HighSpeedParameters-r16 ::= SEQUENCE { measurementEnhancement-r16, demodulationEnhancement-r16 }
 */
struct HighSpeedParameters_r16 {
    bool has_measurementEnhancement_r16; /**< measurementEnhancement-r16 是否存在。 */
    HighSpeedParameters_r16_MeasurementEnhancement_r16 measurementEnhancement_r16; /**< ASN.1 measurementEnhancement-r16；枚举；OPTIONAL。 */
    bool has_demodulationEnhancement_r16; /**< demodulationEnhancement-r16 是否存在。 */
    HighSpeedParameters_r16_DemodulationEnhancement_r16 demodulationEnhancement_r16; /**< ASN.1 demodulationEnhancement-r16；枚举；OPTIONAL。 */
};


/**
 * @brief HighSpeedParameters_v1650
 * @note ASN.1：HighSpeedParameters-v1650；源文件第 17280 行。
 * @note HighSpeedParameters-v1650 ::= CHOICE { intraNR-MeasurementEnhancement-r16, interRAT-MeasurementEnhancement-...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum HighSpeedParameters_v1650_Tag {
    HighSpeedParameters_v1650_Tag_intraNR_MeasurementEnhancement_r16 = 0, /**< ASN.1 intraNR-MeasurementEnhancement-r16 */
    HighSpeedParameters_v1650_Tag_interRAT_MeasurementEnhancement_r16 = 1, /**< ASN.1 interRAT-MeasurementEnhancement-r16 */
} HighSpeedParameters_v1650_Tag;

struct HighSpeedParameters_v1650 {
    HighSpeedParameters_v1650_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16 intraNR_MeasurementEnhancement_r16; /**< ASN.1 intraNR-MeasurementEnhancement-r16 */
        HighSpeedParameters_v1650_InterRAT_MeasurementEnhancement_r16 interRAT_MeasurementEnhancement_r16; /**< ASN.1 interRAT-MeasurementEnhancement-r16 */
    } u;
};


/**
 * @brief HighSpeedParameters_v1700
 * @note ASN.1：HighSpeedParameters-v1700；源文件第 17285 行。
 * @note HighSpeedParameters-v1700 ::= SEQUENCE { measurementEnhancementCA-r17, measurementEnhancementInterFreq-r17 }
 */
struct HighSpeedParameters_v1700 {
    bool has_measurementEnhancementCA_r17; /**< measurementEnhancementCA-r17 是否存在。 */
    HighSpeedParameters_v1700_MeasurementEnhancementCA_r17 measurementEnhancementCA_r17; /**< ASN.1 measurementEnhancementCA-r17；枚举；OPTIONAL。 */
    bool has_measurementEnhancementInterFreq_r17; /**< measurementEnhancementInterFreq-r17 是否存在。 */
    HighSpeedParameters_v1700_MeasurementEnhancementInterFreq_r17 measurementEnhancementInterFreq_r17; /**< ASN.1 measurementEnhancementInterFreq-r17；枚举；OPTIONAL。 */
};


/**
 * @brief IMS_ParametersCommon_ExtGroup1
 * @note ASN.1：IMS_ParametersCommon_ExtGroup1；源文件第 17308 行。
 */
struct IMS_ParametersCommon_ExtGroup1 {
    bool has_voiceOverSCG_BearerEUTRA_5GC; /**< voiceOverSCG-BearerEUTRA-5GC 是否存在。 */
    IMS_ParametersCommon_ExtGroup1_VoiceOverSCG_BearerEUTRA_5GC voiceOverSCG_BearerEUTRA_5GC; /**< ASN.1 voiceOverSCG-BearerEUTRA-5GC；枚举；OPTIONAL。 */
};


/**
 * @brief IMS_ParametersCommon_ExtGroup2
 * @note ASN.1：IMS_ParametersCommon_ExtGroup2；源文件第 17311 行。
 */
struct IMS_ParametersCommon_ExtGroup2 {
    bool has_voiceFallbackIndicationEPS_r16; /**< voiceFallbackIndicationEPS-r16 是否存在。 */
    IMS_ParametersCommon_ExtGroup2_VoiceFallbackIndicationEPS_r16 voiceFallbackIndicationEPS_r16; /**< ASN.1 voiceFallbackIndicationEPS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief IMS_ParametersCommon
 * @note ASN.1：IMS-ParametersCommon；源文件第 17305 行。
 * @note IMS-ParametersCommon ::= SEQUENCE { voiceOverEUTRA-5GC, voiceOverSCG-BearerEUTRA-5GC, voiceFallbackInd...
 */
struct IMS_ParametersCommon {
    bool has_voiceOverEUTRA_5GC; /**< voiceOverEUTRA-5GC 是否存在。 */
    IMS_ParametersCommon_VoiceOverEUTRA_5GC voiceOverEUTRA_5GC; /**< ASN.1 voiceOverEUTRA-5GC；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    IMS_ParametersCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    IMS_ParametersCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief IMS_ParametersFRX_Diff
 * @note ASN.1：IMS-ParametersFRX-Diff；源文件第 17316 行。
 * @note IMS-ParametersFRX-Diff ::= SEQUENCE { voiceOverNR }
 */
struct IMS_ParametersFRX_Diff {
    bool has_voiceOverNR; /**< voiceOverNR 是否存在。 */
    IMS_ParametersFRX_Diff_VoiceOverNR voiceOverNR; /**< ASN.1 voiceOverNR；枚举；OPTIONAL。 */
};


/**
 * @brief IMS_Parameters
 * @note ASN.1：IMS-Parameters；源文件第 17295 行。
 * @note IMS-Parameters ::= SEQUENCE { ims-ParametersCommon, ims-ParametersFRX-Diff }
 */
struct IMS_Parameters {
    bool has_ims_ParametersCommon; /**< ims-ParametersCommon 是否存在。 */
    IMS_ParametersCommon ims_ParametersCommon; /**< ASN.1 ims-ParametersCommon；结构体；OPTIONAL。 */
    bool has_ims_ParametersFRX_Diff; /**< ims-ParametersFRX-Diff 是否存在。 */
    IMS_ParametersFRX_Diff ims_ParametersFRX_Diff; /**< ASN.1 ims-ParametersFRX-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief IMS_ParametersFR2_2_r17
 * @note ASN.1：IMS-ParametersFR2-2-r17；源文件第 17321 行。
 * @note IMS-ParametersFR2-2-r17 ::= SEQUENCE { voiceOverNR-r17 }
 */
struct IMS_ParametersFR2_2_r17 {
    bool has_voiceOverNR_r17; /**< voiceOverNR-r17 是否存在。 */
    IMS_ParametersFR2_2_r17_VoiceOverNR_r17 voiceOverNR_r17; /**< ASN.1 voiceOverNR-r17；枚举；OPTIONAL。 */
};


/**
 * @brief IMS_Parameters_v1700
 * @note ASN.1：IMS-Parameters-v1700；源文件第 17301 行。
 * @note IMS-Parameters-v1700 ::= SEQUENCE { ims-ParametersFR2-2-r17 }
 */
struct IMS_Parameters_v1700 {
    bool has_ims_ParametersFR2_2_r17; /**< ims-ParametersFR2-2-r17 是否存在。 */
    IMS_ParametersFR2_2_r17 ims_ParametersFR2_2_r17; /**< ASN.1 ims-ParametersFR2-2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief UTRA_FDD_Parameters_r16
 * @note ASN.1：UTRA-FDD-Parameters-r16；源文件第 17364 行。
 * @note UTRA-FDD-Parameters-r16 ::= SEQUENCE { supportedBandListUTRA-FDD-r16 }
 */
struct UTRA_FDD_Parameters_r16 {
    SupportedBandUTRA_FDD_r16* supportedBandListUTRA_FDD_r16_items; /**< ASN.1 supportedBandListUTRA-FDD-r16；SEQUENCE OF SupportedBandUTRA_FDD_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedBandListUTRA_FDD_r16_count; /**< supportedBandListUTRA-FDD-r16 元素个数。 */
};


/**
 * @brief InterRAT_Parameters_ExtGroup1
 * @note ASN.1：InterRAT_Parameters_ExtGroup1；源文件第 17332 行。
 */
struct InterRAT_Parameters_ExtGroup1 {
    bool has_utra_FDD_r16; /**< utra-FDD-r16 是否存在。 */
    UTRA_FDD_Parameters_r16 utra_FDD_r16; /**< ASN.1 utra-FDD-r16；结构体；OPTIONAL。 */
};


/**
 * @brief EUTRA_ParametersCommon_ExtGroup1
 * @note ASN.1：EUTRA_ParametersCommon_ExtGroup1；源文件第 17351 行。
 */
struct EUTRA_ParametersCommon_ExtGroup1 {
    bool has_ne_DC; /**< ne-DC 是否存在。 */
    EUTRA_ParametersCommon_ExtGroup1_Ne_DC ne_DC; /**< ASN.1 ne-DC；枚举；OPTIONAL。 */
};


/**
 * @brief EUTRA_ParametersCommon_ExtGroup2
 * @note ASN.1：EUTRA_ParametersCommon_ExtGroup2；源文件第 17354 行。
 */
struct EUTRA_ParametersCommon_ExtGroup2 {
    bool has_nr_HO_ToEN_DC_r16; /**< nr-HO-ToEN-DC-r16 是否存在。 */
    EUTRA_ParametersCommon_ExtGroup2_Nr_HO_ToEN_DC_r16 nr_HO_ToEN_DC_r16; /**< ASN.1 nr-HO-ToEN-DC-r16；枚举；OPTIONAL。 */
};


/**
 * @brief EUTRA_ParametersCommon
 * @note ASN.1：EUTRA-ParametersCommon；源文件第 17345 行。
 * @note EUTRA-ParametersCommon ::= SEQUENCE { mfbi-EUTRA, modifiedMPR-BehaviorEUTRA, multiNS-Pmax-EUTRA, rs-SINR...
 */
struct EUTRA_ParametersCommon {
    bool has_mfbi_EUTRA; /**< mfbi-EUTRA 是否存在。 */
    EUTRA_ParametersCommon_Mfbi_EUTRA mfbi_EUTRA; /**< ASN.1 mfbi-EUTRA；枚举；OPTIONAL。 */
    bool has_modifiedMPR_BehaviorEUTRA; /**< modifiedMPR-BehaviorEUTRA 是否存在。 */
    BitString modifiedMPR_BehaviorEUTRA; /**< ASN.1 modifiedMPR-BehaviorEUTRA；SIZE (32)，定长；OPTIONAL。 */
    bool has_multiNS_Pmax_EUTRA; /**< multiNS-Pmax-EUTRA 是否存在。 */
    EUTRA_ParametersCommon_MultiNS_Pmax_EUTRA multiNS_Pmax_EUTRA; /**< ASN.1 multiNS-Pmax-EUTRA；枚举；OPTIONAL。 */
    bool has_rs_SINR_MeasEUTRA; /**< rs-SINR-MeasEUTRA 是否存在。 */
    EUTRA_ParametersCommon_Rs_SINR_MeasEUTRA rs_SINR_MeasEUTRA; /**< ASN.1 rs-SINR-MeasEUTRA；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    EUTRA_ParametersCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    EUTRA_ParametersCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief EUTRA_ParametersXDD_Diff
 * @note ASN.1：EUTRA-ParametersXDD-Diff；源文件第 17359 行。
 * @note EUTRA-ParametersXDD-Diff ::= SEQUENCE { rsrqMeasWidebandEUTRA }
 */
struct EUTRA_ParametersXDD_Diff {
    bool has_rsrqMeasWidebandEUTRA; /**< rsrqMeasWidebandEUTRA 是否存在。 */
    EUTRA_ParametersXDD_Diff_RsrqMeasWidebandEUTRA rsrqMeasWidebandEUTRA; /**< ASN.1 rsrqMeasWidebandEUTRA；枚举；OPTIONAL。 */
};


/**
 * @brief EUTRA_Parameters
 * @note ASN.1：EUTRA-Parameters；源文件第 17338 行。
 * @note EUTRA-Parameters ::= SEQUENCE { supportedBandListEUTRA, eutra-ParametersCommon, eutra-ParametersXD...
 */
struct EUTRA_Parameters {
    FreqBandIndicatorEUTRA* supportedBandListEUTRA_items; /**< ASN.1 supportedBandListEUTRA；SEQUENCE OF FreqBandIndicatorEUTRA，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedBandListEUTRA_count; /**< supportedBandListEUTRA 元素个数。 */
    bool has_eutra_ParametersCommon; /**< eutra-ParametersCommon 是否存在。 */
    EUTRA_ParametersCommon eutra_ParametersCommon; /**< ASN.1 eutra-ParametersCommon；结构体；OPTIONAL。 */
    bool has_eutra_ParametersXDD_Diff; /**< eutra-ParametersXDD-Diff 是否存在。 */
    EUTRA_ParametersXDD_Diff eutra_ParametersXDD_Diff; /**< ASN.1 eutra-ParametersXDD-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief InterRAT_Parameters
 * @note ASN.1：InterRAT-Parameters；源文件第 17329 行。
 * @note InterRAT-Parameters ::= SEQUENCE { eutra, utra-FDD-r16 }
 */
struct InterRAT_Parameters {
    bool has_eutra; /**< eutra 是否存在。 */
    EUTRA_Parameters eutra; /**< ASN.1 eutra；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    InterRAT_Parameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MAC_ParametersCommon_ExtGroup1
 * @note ASN.1：MAC_ParametersCommon_ExtGroup1；源文件第 17399 行。
 */
struct MAC_ParametersCommon_ExtGroup1 {
    bool has_recommendedBitRate; /**< recommendedBitRate 是否存在。 */
    MAC_ParametersCommon_ExtGroup1_RecommendedBitRate recommendedBitRate; /**< ASN.1 recommendedBitRate；枚举；OPTIONAL。 */
    bool has_recommendedBitRateQuery; /**< recommendedBitRateQuery 是否存在。 */
    MAC_ParametersCommon_ExtGroup1_RecommendedBitRateQuery recommendedBitRateQuery; /**< ASN.1 recommendedBitRateQuery；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersCommon_ExtGroup2
 * @note ASN.1：MAC_ParametersCommon_ExtGroup2；源文件第 17403 行。
 */
struct MAC_ParametersCommon_ExtGroup2 {
    bool has_recommendedBitRateMultiplier_r16; /**< recommendedBitRateMultiplier-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_RecommendedBitRateMultiplier_r16 recommendedBitRateMultiplier_r16; /**< ASN.1 recommendedBitRateMultiplier-r16；枚举；OPTIONAL。 */
    bool has_preEmptiveBSR_r16; /**< preEmptiveBSR-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_PreEmptiveBSR_r16 preEmptiveBSR_r16; /**< ASN.1 preEmptiveBSR-r16；枚举；OPTIONAL。 */
    bool has_autonomousTransmission_r16; /**< autonomousTransmission-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_AutonomousTransmission_r16 autonomousTransmission_r16; /**< ASN.1 autonomousTransmission-r16；枚举；OPTIONAL。 */
    bool has_lch_PriorityBasedPrioritization_r16; /**< lch-PriorityBasedPrioritization-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_Lch_PriorityBasedPrioritization_r16 lch_PriorityBasedPrioritization_r16; /**< ASN.1 lch-PriorityBasedPrioritization-r16；枚举；OPTIONAL。 */
    bool has_lch_ToConfiguredGrantMapping_r16; /**< lch-ToConfiguredGrantMapping-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_Lch_ToConfiguredGrantMapping_r16 lch_ToConfiguredGrantMapping_r16; /**< ASN.1 lch-ToConfiguredGrantMapping-r16；枚举；OPTIONAL。 */
    bool has_lch_ToGrantPriorityRestriction_r16; /**< lch-ToGrantPriorityRestriction-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_Lch_ToGrantPriorityRestriction_r16 lch_ToGrantPriorityRestriction_r16; /**< ASN.1 lch-ToGrantPriorityRestriction-r16；枚举；OPTIONAL。 */
    bool has_singlePHR_P_r16; /**< singlePHR-P-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_SinglePHR_P_r16 singlePHR_P_r16; /**< ASN.1 singlePHR-P-r16；枚举；OPTIONAL。 */
    bool has_ul_LBT_FailureDetectionRecovery_r16; /**< ul-LBT-FailureDetectionRecovery-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_Ul_LBT_FailureDetectionRecovery_r16 ul_LBT_FailureDetectionRecovery_r16; /**< ASN.1 ul-LBT-FailureDetectionRecovery-r16；枚举；OPTIONAL。 */
    bool has_tdd_MPE_P_MPR_Reporting_r16; /**< tdd-MPE-P-MPR-Reporting-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_Tdd_MPE_P_MPR_Reporting_r16 tdd_MPE_P_MPR_Reporting_r16; /**< ASN.1 tdd-MPE-P-MPR-Reporting-r16；枚举；OPTIONAL。 */
    bool has_lcid_ExtensionIAB_r16; /**< lcid-ExtensionIAB-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup2_Lcid_ExtensionIAB_r16 lcid_ExtensionIAB_r16; /**< ASN.1 lcid-ExtensionIAB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersCommon_ExtGroup3
 * @note ASN.1：MAC_ParametersCommon_ExtGroup3；源文件第 17416 行。
 */
struct MAC_ParametersCommon_ExtGroup3 {
    bool has_spCell_BFR_CBRA_r16; /**< spCell-BFR-CBRA-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup3_SpCell_BFR_CBRA_r16 spCell_BFR_CBRA_r16; /**< ASN.1 spCell-BFR-CBRA-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersCommon_ExtGroup4
 * @note ASN.1：MAC_ParametersCommon_ExtGroup4；源文件第 17419 行。
 */
struct MAC_ParametersCommon_ExtGroup4 {
    bool has_srs_ResourceId_Ext_r16; /**< srs-ResourceId-Ext-r16 是否存在。 */
    MAC_ParametersCommon_ExtGroup4_Srs_ResourceId_Ext_r16 srs_ResourceId_Ext_r16; /**< ASN.1 srs-ResourceId-Ext-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersCommon_ExtGroup5
 * @note ASN.1：MAC_ParametersCommon_ExtGroup5；源文件第 17422 行。
 */
struct MAC_ParametersCommon_ExtGroup5 {
    bool has_enhancedUuDRX_forSidelink_r17; /**< enhancedUuDRX-forSidelink-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_EnhancedUuDRX_forSidelink_r17 enhancedUuDRX_forSidelink_r17; /**< ASN.1 enhancedUuDRX-forSidelink-r17；枚举；OPTIONAL。 */
    bool has_mg_ActivationRequestPRS_Meas_r17; /**< mg-ActivationRequestPRS-Meas-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_Mg_ActivationRequestPRS_Meas_r17 mg_ActivationRequestPRS_Meas_r17; /**< ASN.1 mg-ActivationRequestPRS-Meas-r17；枚举；OPTIONAL。 */
    bool has_mg_ActivationCommPRS_Meas_r17; /**< mg-ActivationCommPRS-Meas-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_Mg_ActivationCommPRS_Meas_r17 mg_ActivationCommPRS_Meas_r17; /**< ASN.1 mg-ActivationCommPRS-Meas-r17；枚举；OPTIONAL。 */
    bool has_intraCG_Prioritization_r17; /**< intraCG-Prioritization-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_IntraCG_Prioritization_r17 intraCG_Prioritization_r17; /**< ASN.1 intraCG-Prioritization-r17；枚举；OPTIONAL。 */
    bool has_jointPrioritizationCG_Retx_Timer_r17; /**< jointPrioritizationCG-Retx-Timer-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_JointPrioritizationCG_Retx_Timer_r17 jointPrioritizationCG_Retx_Timer_r17; /**< ASN.1 jointPrioritizationCG-Retx-Timer-r17；枚举；OPTIONAL。 */
    bool has_survivalTime_r17; /**< survivalTime-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_SurvivalTime_r17 survivalTime_r17; /**< ASN.1 survivalTime-r17；枚举；OPTIONAL。 */
    bool has_lcg_ExtensionIAB_r17; /**< lcg-ExtensionIAB-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_Lcg_ExtensionIAB_r17 lcg_ExtensionIAB_r17; /**< ASN.1 lcg-ExtensionIAB-r17；枚举；OPTIONAL。 */
    bool has_harq_FeedbackDisabled_r17; /**< harq-FeedbackDisabled-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_Harq_FeedbackDisabled_r17 harq_FeedbackDisabled_r17; /**< ASN.1 harq-FeedbackDisabled-r17；枚举；OPTIONAL。 */
    bool has_uplink_Harq_ModeB_r17; /**< uplink-Harq-ModeB-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_Uplink_Harq_ModeB_r17 uplink_Harq_ModeB_r17; /**< ASN.1 uplink-Harq-ModeB-r17；枚举；OPTIONAL。 */
    bool has_sr_TriggeredBy_TA_Report_r17; /**< sr-TriggeredBy-TA-Report-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_Sr_TriggeredBy_TA_Report_r17 sr_TriggeredBy_TA_Report_r17; /**< ASN.1 sr-TriggeredBy-TA-Report-r17；枚举；OPTIONAL。 */
    bool has_extendedDRX_CycleInactive_r17; /**< extendedDRX-CycleInactive-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_ExtendedDRX_CycleInactive_r17 extendedDRX_CycleInactive_r17; /**< ASN.1 extendedDRX-CycleInactive-r17；枚举；OPTIONAL。 */
    bool has_simultaneousSR_PUSCH_DiffPUCCH_groups_r17; /**< simultaneousSR-PUSCH-DiffPUCCH-groups-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_SimultaneousSR_PUSCH_DiffPUCCH_groups_r17 simultaneousSR_PUSCH_DiffPUCCH_groups_r17; /**< ASN.1 simultaneousSR-PUSCH-DiffPUCCH-groups-r17；枚举；OPTIONAL。 */
    bool has_lastTransmissionUL_r17; /**< lastTransmissionUL-r17 是否存在。 */
    MAC_ParametersCommon_ExtGroup5_LastTransmissionUL_r17 lastTransmissionUL_r17; /**< ASN.1 lastTransmissionUL-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersCommon_ExtGroup6
 * @note ASN.1：MAC_ParametersCommon_ExtGroup6；源文件第 17439 行。
 */
struct MAC_ParametersCommon_ExtGroup6 {
    bool has_sr_TriggeredByTA_ReportATG_r18; /**< sr-TriggeredByTA-ReportATG-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_Sr_TriggeredByTA_ReportATG_r18 sr_TriggeredByTA_ReportATG_r18; /**< ASN.1 sr-TriggeredByTA-ReportATG-r18；枚举；OPTIONAL。 */
    bool has_uplinkTA_ReportingATG_r18; /**< uplinkTA-ReportingATG-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_UplinkTA_ReportingATG_r18 uplinkTA_ReportingATG_r18; /**< ASN.1 uplinkTA-ReportingATG-r18；枚举；OPTIONAL。 */
    bool has_extendedDRX_CycleInactive_r18; /**< extendedDRX-CycleInactive-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_ExtendedDRX_CycleInactive_r18 extendedDRX_CycleInactive_r18; /**< ASN.1 extendedDRX-CycleInactive-r18；枚举；OPTIONAL。 */
    bool has_additionalBS_Table_r18; /**< additionalBS-Table-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_AdditionalBS_Table_r18 additionalBS_Table_r18; /**< ASN.1 additionalBS-Table-r18；枚举；OPTIONAL。 */
    bool has_delayStatusReport_r18; /**< delayStatusReport-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_DelayStatusReport_r18 delayStatusReport_r18; /**< ASN.1 delayStatusReport-r18；枚举；OPTIONAL。 */
    bool has_disableCG_RetransmissionMonitoring_r18; /**< disableCG-RetransmissionMonitoring-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_DisableCG_RetransmissionMonitoring_r18 disableCG_RetransmissionMonitoring_r18; /**< ASN.1 disableCG-RetransmissionMonitoring-r18；枚举；OPTIONAL。 */
    bool has_non_IntegerDRX_r18; /**< non-IntegerDRX-r18 是否存在。 */
    MAC_ParametersCommon_ExtGroup6_Non_IntegerDRX_r18 non_IntegerDRX_r18; /**< ASN.1 non-IntegerDRX-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersCommon
 * @note ASN.1：MAC-ParametersCommon；源文件第 17394 行。
 * @note MAC-ParametersCommon ::= SEQUENCE { lcp-Restriction, dummy, lch-ToSCellRestriction, recommendedBitRate...
 */
struct MAC_ParametersCommon {
    bool has_lcp_Restriction; /**< lcp-Restriction 是否存在。 */
    MAC_ParametersCommon_Lcp_Restriction lcp_Restriction; /**< ASN.1 lcp-Restriction；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    MAC_ParametersCommon_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_lch_ToSCellRestriction; /**< lch-ToSCellRestriction 是否存在。 */
    MAC_ParametersCommon_Lch_ToSCellRestriction lch_ToSCellRestriction; /**< ASN.1 lch-ToSCellRestriction；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MAC_ParametersCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MAC_ParametersCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MAC_ParametersCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MAC_ParametersCommon_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MAC_ParametersCommon_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    MAC_ParametersCommon_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MAC_ParametersXDD_Diff_ExtGroup1
 * @note ASN.1：MAC_ParametersXDD_Diff_ExtGroup1；源文件第 17484 行。
 */
struct MAC_ParametersXDD_Diff_ExtGroup1 {
    bool has_secondaryDRX_Group_r16; /**< secondaryDRX-Group-r16 是否存在。 */
    MAC_ParametersXDD_Diff_ExtGroup1_SecondaryDRX_Group_r16 secondaryDRX_Group_r16; /**< ASN.1 secondaryDRX-Group-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersXDD_Diff_ExtGroup2
 * @note ASN.1：MAC_ParametersXDD_Diff_ExtGroup2；源文件第 17487 行。
 */
struct MAC_ParametersXDD_Diff_ExtGroup2 {
    bool has_enhancedSkipUplinkTxDynamic_r16; /**< enhancedSkipUplinkTxDynamic-r16 是否存在。 */
    MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxDynamic_r16 enhancedSkipUplinkTxDynamic_r16; /**< ASN.1 enhancedSkipUplinkTxDynamic-r16；枚举；OPTIONAL。 */
    bool has_enhancedSkipUplinkTxConfigured_r16; /**< enhancedSkipUplinkTxConfigured-r16 是否存在。 */
    MAC_ParametersXDD_Diff_ExtGroup2_EnhancedSkipUplinkTxConfigured_r16 enhancedSkipUplinkTxConfigured_r16; /**< ASN.1 enhancedSkipUplinkTxConfigured-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersXDD_Diff_ExtGroup3
 * @note ASN.1：MAC_ParametersXDD_Diff_ExtGroup3；源文件第 17491 行。
 */
struct MAC_ParametersXDD_Diff_ExtGroup3 {
    bool has_ptm_Retransmission_r18; /**< ptm-Retransmission-r18 是否存在。 */
    MAC_ParametersXDD_Diff_ExtGroup3_Ptm_Retransmission_r18 ptm_Retransmission_r18; /**< ASN.1 ptm-Retransmission-r18；枚举；OPTIONAL。 */
    bool has_ptm_RetransmissionInactive_r18; /**< ptm-RetransmissionInactive-r18 是否存在。 */
    MAC_ParametersXDD_Diff_ExtGroup3_Ptm_RetransmissionInactive_r18 ptm_RetransmissionInactive_r18; /**< ASN.1 ptm-RetransmissionInactive-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersXDD_Diff
 * @note ASN.1：MAC-ParametersXDD-Diff；源文件第 17476 行。
 * @note MAC-ParametersXDD-Diff ::= SEQUENCE { skipUplinkTxDynamic, logicalChannelSR-DelayTimer, longDRX-Cycle, s...
 */
struct MAC_ParametersXDD_Diff {
    bool has_skipUplinkTxDynamic; /**< skipUplinkTxDynamic 是否存在。 */
    MAC_ParametersXDD_Diff_SkipUplinkTxDynamic skipUplinkTxDynamic; /**< ASN.1 skipUplinkTxDynamic；枚举；OPTIONAL。 */
    bool has_logicalChannelSR_DelayTimer; /**< logicalChannelSR-DelayTimer 是否存在。 */
    MAC_ParametersXDD_Diff_LogicalChannelSR_DelayTimer logicalChannelSR_DelayTimer; /**< ASN.1 logicalChannelSR-DelayTimer；枚举；OPTIONAL。 */
    bool has_longDRX_Cycle; /**< longDRX-Cycle 是否存在。 */
    MAC_ParametersXDD_Diff_LongDRX_Cycle longDRX_Cycle; /**< ASN.1 longDRX-Cycle；枚举；OPTIONAL。 */
    bool has_shortDRX_Cycle; /**< shortDRX-Cycle 是否存在。 */
    MAC_ParametersXDD_Diff_ShortDRX_Cycle shortDRX_Cycle; /**< ASN.1 shortDRX-Cycle；枚举；OPTIONAL。 */
    bool has_multipleSR_Configurations; /**< multipleSR-Configurations 是否存在。 */
    MAC_ParametersXDD_Diff_MultipleSR_Configurations multipleSR_Configurations; /**< ASN.1 multipleSR-Configurations；枚举；OPTIONAL。 */
    bool has_multipleConfiguredGrants; /**< multipleConfiguredGrants 是否存在。 */
    MAC_ParametersXDD_Diff_MultipleConfiguredGrants multipleConfiguredGrants; /**< ASN.1 multipleConfiguredGrants；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MAC_ParametersXDD_Diff_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MAC_ParametersXDD_Diff_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MAC_ParametersXDD_Diff_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MAC_Parameters
 * @note ASN.1：MAC-Parameters；源文件第 17381 行。
 * @note MAC-Parameters ::= SEQUENCE { mac-ParametersCommon, mac-ParametersXDD-Diff }
 */
struct MAC_Parameters {
    bool has_mac_ParametersCommon; /**< mac-ParametersCommon 是否存在。 */
    MAC_ParametersCommon mac_ParametersCommon; /**< ASN.1 mac-ParametersCommon；结构体；OPTIONAL。 */
    bool has_mac_ParametersXDD_Diff; /**< mac-ParametersXDD-Diff 是否存在。 */
    MAC_ParametersXDD_Diff mac_ParametersXDD_Diff; /**< ASN.1 mac-ParametersXDD-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief MinTimeGap_r16
 * @note ASN.1：MinTimeGap-r16；源文件第 17497 行。
 * @note MinTimeGap-r16 ::= SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16, scs-120kHz-r16 }
 */
struct MinTimeGap_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    MinTimeGap_r16_Scs_15kHz_r16 scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    MinTimeGap_r16_Scs_30kHz_r16 scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    MinTimeGap_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    MinTimeGap_r16_Scs_120kHz_r16 scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16
 * @note ASN.1：drx-Adaptation-r16；源文件第 17457 行。
 * @note SEQUENCE { non-SharedSpectrumChAccess-r16, sharedSpectrumChAccess-r16 }
 */
struct MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16 {
    bool has_non_SharedSpectrumChAccess_r16; /**< non-SharedSpectrumChAccess-r16 是否存在。 */
    MinTimeGap_r16 non_SharedSpectrumChAccess_r16; /**< ASN.1 non-SharedSpectrumChAccess-r16；结构体；OPTIONAL。 */
    bool has_sharedSpectrumChAccess_r16; /**< sharedSpectrumChAccess-r16 是否存在。 */
    MinTimeGap_r16 sharedSpectrumChAccess_r16; /**< ASN.1 sharedSpectrumChAccess-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersFRX_Diff_r16
 * @note ASN.1：MAC-ParametersFRX-Diff-r16；源文件第 17451 行。
 * @note MAC-ParametersFRX-Diff-r16 ::= SEQUENCE { directMCG-SCellActivation-r16, directMCG-SCellActivationResume-r16...
 */
struct MAC_ParametersFRX_Diff_r16 {
    bool has_directMCG_SCellActivation_r16; /**< directMCG-SCellActivation-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivation_r16 directMCG_SCellActivation_r16; /**< ASN.1 directMCG-SCellActivation-r16；枚举；OPTIONAL。 */
    bool has_directMCG_SCellActivationResume_r16; /**< directMCG-SCellActivationResume-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16_DirectMCG_SCellActivationResume_r16 directMCG_SCellActivationResume_r16; /**< ASN.1 directMCG-SCellActivationResume-r16；枚举；OPTIONAL。 */
    bool has_directSCG_SCellActivation_r16; /**< directSCG-SCellActivation-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivation_r16 directSCG_SCellActivation_r16; /**< ASN.1 directSCG-SCellActivation-r16；枚举；OPTIONAL。 */
    bool has_directSCG_SCellActivationResume_r16; /**< directSCG-SCellActivationResume-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16_DirectSCG_SCellActivationResume_r16 directSCG_SCellActivationResume_r16; /**< ASN.1 directSCG-SCellActivationResume-r16；枚举；OPTIONAL。 */
    bool has_drx_Adaptation_r16; /**< drx-Adaptation-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16_Drx_Adaptation_r16 drx_Adaptation_r16; /**< ASN.1 drx-Adaptation-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MAC_Parameters_v1610
 * @note ASN.1：MAC-Parameters-v1610；源文件第 17386 行。
 * @note MAC-Parameters-v1610 ::= SEQUENCE { mac-ParametersFRX-Diff-r16 }
 */
struct MAC_Parameters_v1610 {
    bool has_mac_ParametersFRX_Diff_r16; /**< mac-ParametersFRX-Diff-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16 mac_ParametersFRX_Diff_r16; /**< ASN.1 mac-ParametersFRX-Diff-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MinTimeGapFR2_2_r17
 * @note ASN.1：MinTimeGapFR2-2-r17；源文件第 17504 行。
 * @note MinTimeGapFR2-2-r17 ::= SEQUENCE { scs-120kHz-r17, scs-480kHz-r17, scs-960kHz-r17 }
 */
struct MinTimeGapFR2_2_r17 {
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    MinTimeGapFR2_2_r17_Scs_120kHz_r17 scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_480kHz_r17; /**< scs-480kHz-r17 是否存在。 */
    MinTimeGapFR2_2_r17_Scs_480kHz_r17 scs_480kHz_r17; /**< ASN.1 scs-480kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_960kHz_r17; /**< scs-960kHz-r17 是否存在。 */
    MinTimeGapFR2_2_r17_Scs_960kHz_r17 scs_960kHz_r17; /**< ASN.1 scs-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersFR2_2_r17_Drx_Adaptation_r17
 * @note ASN.1：drx-Adaptation-r17；源文件第 17469 行。
 * @note SEQUENCE { non-SharedSpectrumChAccess-r17, sharedSpectrumChAccess-r17 }
 */
struct MAC_ParametersFR2_2_r17_Drx_Adaptation_r17 {
    bool has_non_SharedSpectrumChAccess_r17; /**< non-SharedSpectrumChAccess-r17 是否存在。 */
    MinTimeGapFR2_2_r17 non_SharedSpectrumChAccess_r17; /**< ASN.1 non-SharedSpectrumChAccess-r17；结构体；OPTIONAL。 */
    bool has_sharedSpectrumChAccess_r17; /**< sharedSpectrumChAccess-r17 是否存在。 */
    MinTimeGapFR2_2_r17 sharedSpectrumChAccess_r17; /**< ASN.1 sharedSpectrumChAccess-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersFR2_2_r17
 * @note ASN.1：MAC-ParametersFR2-2-r17；源文件第 17464 行。
 * @note MAC-ParametersFR2-2-r17 ::= SEQUENCE { directMCG-SCellActivation-r17, directMCG-SCellActivationResume-r17...
 */
struct MAC_ParametersFR2_2_r17 {
    bool has_directMCG_SCellActivation_r17; /**< directMCG-SCellActivation-r17 是否存在。 */
    MAC_ParametersFR2_2_r17_DirectMCG_SCellActivation_r17 directMCG_SCellActivation_r17; /**< ASN.1 directMCG-SCellActivation-r17；枚举；OPTIONAL。 */
    bool has_directMCG_SCellActivationResume_r17; /**< directMCG-SCellActivationResume-r17 是否存在。 */
    MAC_ParametersFR2_2_r17_DirectMCG_SCellActivationResume_r17 directMCG_SCellActivationResume_r17; /**< ASN.1 directMCG-SCellActivationResume-r17；枚举；OPTIONAL。 */
    bool has_directSCG_SCellActivation_r17; /**< directSCG-SCellActivation-r17 是否存在。 */
    MAC_ParametersFR2_2_r17_DirectSCG_SCellActivation_r17 directSCG_SCellActivation_r17; /**< ASN.1 directSCG-SCellActivation-r17；枚举；OPTIONAL。 */
    bool has_directSCG_SCellActivationResume_r17; /**< directSCG-SCellActivationResume-r17 是否存在。 */
    MAC_ParametersFR2_2_r17_DirectSCG_SCellActivationResume_r17 directSCG_SCellActivationResume_r17; /**< ASN.1 directSCG-SCellActivationResume-r17；枚举；OPTIONAL。 */
    bool has_drx_Adaptation_r17; /**< drx-Adaptation-r17 是否存在。 */
    MAC_ParametersFR2_2_r17_Drx_Adaptation_r17 drx_Adaptation_r17; /**< ASN.1 drx-Adaptation-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MAC_Parameters_v1700
 * @note ASN.1：MAC-Parameters-v1700；源文件第 17390 行。
 * @note MAC-Parameters-v1700 ::= SEQUENCE { mac-ParametersFR2-2-r17 }
 */
struct MAC_Parameters_v1700 {
    bool has_mac_ParametersFR2_2_r17; /**< mac-ParametersFR2-2-r17 是否存在。 */
    MAC_ParametersFR2_2_r17 mac_ParametersFR2_2_r17; /**< ASN.1 mac-ParametersFR2-2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup1
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup1；源文件第 17528 行。
 */
struct MeasAndMobParametersCommon_ExtGroup1 {
    bool has_eventB_MeasAndReport; /**< eventB-MeasAndReport 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup1_EventB_MeasAndReport eventB_MeasAndReport; /**< ASN.1 eventB-MeasAndReport；枚举；OPTIONAL。 */
    bool has_handoverFDD_TDD; /**< handoverFDD-TDD 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup1_HandoverFDD_TDD handoverFDD_TDD; /**< ASN.1 handoverFDD-TDD；枚举；OPTIONAL。 */
    bool has_eutra_CGI_Reporting; /**< eutra-CGI-Reporting 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup1_Eutra_CGI_Reporting eutra_CGI_Reporting; /**< ASN.1 eutra-CGI-Reporting；枚举；OPTIONAL。 */
    bool has_nr_CGI_Reporting; /**< nr-CGI-Reporting 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup1_Nr_CGI_Reporting nr_CGI_Reporting; /**< ASN.1 nr-CGI-Reporting；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup2
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup2；源文件第 17534 行。
 */
struct MeasAndMobParametersCommon_ExtGroup2 {
    bool has_independentGapConfig; /**< independentGapConfig 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup2_IndependentGapConfig independentGapConfig; /**< ASN.1 independentGapConfig；枚举；OPTIONAL。 */
    bool has_periodicEUTRA_MeasAndReport; /**< periodicEUTRA-MeasAndReport 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup2_PeriodicEUTRA_MeasAndReport periodicEUTRA_MeasAndReport; /**< ASN.1 periodicEUTRA-MeasAndReport；枚举；OPTIONAL。 */
    bool has_handoverFR1_FR2; /**< handoverFR1-FR2 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup2_HandoverFR1_FR2 handoverFR1_FR2; /**< ASN.1 handoverFR1-FR2；枚举；OPTIONAL。 */
    bool has_maxNumberCSI_RS_RRM_RS_SINR; /**< maxNumberCSI-RS-RRM-RS-SINR 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup2_MaxNumberCSI_RS_RRM_RS_SINR maxNumberCSI_RS_RRM_RS_SINR; /**< ASN.1 maxNumberCSI-RS-RRM-RS-SINR；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup3
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup3；源文件第 17540 行。
 */
struct MeasAndMobParametersCommon_ExtGroup3 {
    bool has_nr_CGI_Reporting_ENDC; /**< nr-CGI-Reporting-ENDC 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup3_Nr_CGI_Reporting_ENDC nr_CGI_Reporting_ENDC; /**< ASN.1 nr-CGI-Reporting-ENDC；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup4
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup4；源文件第 17543 行。
 */
struct MeasAndMobParametersCommon_ExtGroup4 {
    bool has_eutra_CGI_Reporting_NEDC; /**< eutra-CGI-Reporting-NEDC 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NEDC eutra_CGI_Reporting_NEDC; /**< ASN.1 eutra-CGI-Reporting-NEDC；枚举；OPTIONAL。 */
    bool has_eutra_CGI_Reporting_NRDC; /**< eutra-CGI-Reporting-NRDC 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup4_Eutra_CGI_Reporting_NRDC eutra_CGI_Reporting_NRDC; /**< ASN.1 eutra-CGI-Reporting-NRDC；枚举；OPTIONAL。 */
    bool has_nr_CGI_Reporting_NEDC; /**< nr-CGI-Reporting-NEDC 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NEDC nr_CGI_Reporting_NEDC; /**< ASN.1 nr-CGI-Reporting-NEDC；枚举；OPTIONAL。 */
    bool has_nr_CGI_Reporting_NRDC; /**< nr-CGI-Reporting-NRDC 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup4_Nr_CGI_Reporting_NRDC nr_CGI_Reporting_NRDC; /**< ASN.1 nr-CGI-Reporting-NRDC；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16
 * @note ASN.1：condHandoverParametersCommon-r16；源文件第 17551 行。
 * @note SEQUENCE { condHandoverFDD-TDD-r16, condHandoverFR1-FR2-r16 }
 */
struct MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16 {
    bool has_condHandoverFDD_TDD_r16; /**< condHandoverFDD-TDD-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFDD_TDD_r16 condHandoverFDD_TDD_r16; /**< ASN.1 condHandoverFDD-TDD-r16；枚举；OPTIONAL。 */
    bool has_condHandoverFR1_FR2_r16; /**< condHandoverFR1-FR2-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16_CondHandoverFR1_FR2_r16 condHandoverFR1_FR2_r16; /**< ASN.1 condHandoverFR1-FR2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup5
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup5；源文件第 17549 行。
 */
struct MeasAndMobParametersCommon_ExtGroup5 {
    bool has_reportAddNeighMeasForPeriodic_r16; /**< reportAddNeighMeasForPeriodic-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_ReportAddNeighMeasForPeriodic_r16 reportAddNeighMeasForPeriodic_r16; /**< ASN.1 reportAddNeighMeasForPeriodic-r16；枚举；OPTIONAL。 */
    bool has_condHandoverParametersCommon_r16; /**< condHandoverParametersCommon-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_CondHandoverParametersCommon_r16 condHandoverParametersCommon_r16; /**< ASN.1 condHandoverParametersCommon-r16；结构体；OPTIONAL。 */
    bool has_nr_NeedForGap_Reporting_r16; /**< nr-NeedForGap-Reporting-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Nr_NeedForGap_Reporting_r16 nr_NeedForGap_Reporting_r16; /**< ASN.1 nr-NeedForGap-Reporting-r16；枚举；OPTIONAL。 */
    bool has_supportedGapPattern_NRonly_r16; /**< supportedGapPattern-NRonly-r16 是否存在。 */
    BitString supportedGapPattern_NRonly_r16; /**< ASN.1 supportedGapPattern-NRonly-r16；SIZE (10)，定长；OPTIONAL。 */
    bool has_supportedGapPattern_NRonly_NEDC_r16; /**< supportedGapPattern-NRonly-NEDC-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_SupportedGapPattern_NRonly_NEDC_r16 supportedGapPattern_NRonly_NEDC_r16; /**< ASN.1 supportedGapPattern-NRonly-NEDC-r16；枚举；OPTIONAL。 */
    bool has_maxNumberCLI_RSSI_r16; /**< maxNumberCLI-RSSI-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_RSSI_r16 maxNumberCLI_RSSI_r16; /**< ASN.1 maxNumberCLI-RSSI-r16；枚举；OPTIONAL。 */
    bool has_maxNumberCLI_SRS_RSRP_r16; /**< maxNumberCLI-SRS-RSRP-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberCLI_SRS_RSRP_r16 maxNumberCLI_SRS_RSRP_r16; /**< ASN.1 maxNumberCLI-SRS-RSRP-r16；枚举；OPTIONAL。 */
    bool has_maxNumberPerSlotCLI_SRS_RSRP_r16; /**< maxNumberPerSlotCLI-SRS-RSRP-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_MaxNumberPerSlotCLI_SRS_RSRP_r16 maxNumberPerSlotCLI_SRS_RSRP_r16; /**< ASN.1 maxNumberPerSlotCLI-SRS-RSRP-r16；枚举；OPTIONAL。 */
    bool has_mfbi_IAB_r16; /**< mfbi-IAB-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Mfbi_IAB_r16 mfbi_IAB_r16; /**< ASN.1 mfbi-IAB-r16；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_nr_CGI_Reporting_NPN_r16; /**< nr-CGI-Reporting-NPN-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Nr_CGI_Reporting_NPN_r16 nr_CGI_Reporting_NPN_r16; /**< ASN.1 nr-CGI-Reporting-NPN-r16；枚举；OPTIONAL。 */
    bool has_idleInactiveEUTRA_MeasReport_r16; /**< idleInactiveEUTRA-MeasReport-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_IdleInactiveEUTRA_MeasReport_r16 idleInactiveEUTRA_MeasReport_r16; /**< ASN.1 idleInactiveEUTRA-MeasReport-r16；枚举；OPTIONAL。 */
    bool has_idleInactive_ValidityArea_r16; /**< idleInactive-ValidityArea-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_IdleInactive_ValidityArea_r16 idleInactive_ValidityArea_r16; /**< ASN.1 idleInactive-ValidityArea-r16；枚举；OPTIONAL。 */
    bool has_eutra_AutonomousGaps_r16; /**< eutra-AutonomousGaps-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_r16 eutra_AutonomousGaps_r16; /**< ASN.1 eutra-AutonomousGaps-r16；枚举；OPTIONAL。 */
    bool has_eutra_AutonomousGaps_NEDC_r16; /**< eutra-AutonomousGaps-NEDC-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NEDC_r16 eutra_AutonomousGaps_NEDC_r16; /**< ASN.1 eutra-AutonomousGaps-NEDC-r16；枚举；OPTIONAL。 */
    bool has_eutra_AutonomousGaps_NRDC_r16; /**< eutra-AutonomousGaps-NRDC-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_Eutra_AutonomousGaps_NRDC_r16 eutra_AutonomousGaps_NRDC_r16; /**< ASN.1 eutra-AutonomousGaps-NRDC-r16；枚举；OPTIONAL。 */
    bool has_pcellT312_r16; /**< pcellT312-r16 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup5_PcellT312_r16 pcellT312_r16; /**< ASN.1 pcellT312-r16；枚举；OPTIONAL。 */
    bool has_supportedGapPattern_r16; /**< supportedGapPattern-r16 是否存在。 */
    BitString supportedGapPattern_r16; /**< ASN.1 supportedGapPattern-r16；SIZE (2)，定长；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17
 * @note ASN.1：concurrentMeasGap-r17；源文件第 17574 行。
 * @note CHOICE { concurrentPerUE-OnlyMeasGap-r17, concurrentPerUE-PerFRCombMeasGap-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag {
    MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_OnlyMeasGap_r17 = 0, /**< ASN.1 concurrentPerUE-OnlyMeasGap-r17 */
    MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag_concurrentPerUE_PerFRCombMeasGap_r17 = 1, /**< ASN.1 concurrentPerUE-PerFRCombMeasGap-r17 */
} MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag;

struct MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17 {
    MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_OnlyMeasGap_r17 concurrentPerUE_OnlyMeasGap_r17; /**< ASN.1 concurrentPerUE-OnlyMeasGap-r17 */
        MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17_ConcurrentPerUE_PerFRCombMeasGap_r17 concurrentPerUE_PerFRCombMeasGap_r17; /**< ASN.1 concurrentPerUE-PerFRCombMeasGap-r17 */
    } u;
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup6
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup6；源文件第 17572 行。
 */
struct MeasAndMobParametersCommon_ExtGroup6 {
    bool has_concurrentMeasGap_r17; /**< concurrentMeasGap-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_ConcurrentMeasGap_r17 concurrentMeasGap_r17; /**< ASN.1 concurrentMeasGap-r17；结构体；OPTIONAL。 */
    bool has_nr_NeedForGapNCSG_Reporting_r17; /**< nr-NeedForGapNCSG-Reporting-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_Nr_NeedForGapNCSG_Reporting_r17 nr_NeedForGapNCSG_Reporting_r17; /**< ASN.1 nr-NeedForGapNCSG-Reporting-r17；枚举；OPTIONAL。 */
    bool has_eutra_NeedForGapNCSG_Reporting_r17; /**< eutra-NeedForGapNCSG-Reporting-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_Eutra_NeedForGapNCSG_Reporting_r17 eutra_NeedForGapNCSG_Reporting_r17; /**< ASN.1 eutra-NeedForGapNCSG-Reporting-r17；枚举；OPTIONAL。 */
    bool has_ncsg_MeasGapPerFR_r17; /**< ncsg-MeasGapPerFR-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_Ncsg_MeasGapPerFR_r17 ncsg_MeasGapPerFR_r17; /**< ASN.1 ncsg-MeasGapPerFR-r17；枚举；OPTIONAL。 */
    bool has_ncsg_MeasGapPatterns_r17; /**< ncsg-MeasGapPatterns-r17 是否存在。 */
    BitString ncsg_MeasGapPatterns_r17; /**< ASN.1 ncsg-MeasGapPatterns-r17；SIZE (24)，定长；OPTIONAL。 */
    bool has_ncsg_MeasGapNR_Patterns_r17; /**< ncsg-MeasGapNR-Patterns-r17 是否存在。 */
    BitString ncsg_MeasGapNR_Patterns_r17; /**< ASN.1 ncsg-MeasGapNR-Patterns-r17；SIZE (24)，定长；OPTIONAL。 */
    bool has_preconfiguredUE_AutonomousMeasGap_r17; /**< preconfiguredUE-AutonomousMeasGap-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_PreconfiguredUE_AutonomousMeasGap_r17 preconfiguredUE_AutonomousMeasGap_r17; /**< ASN.1 preconfiguredUE-AutonomousMeasGap-r17；枚举；OPTIONAL。 */
    bool has_preconfiguredNW_ControlledMeasGap_r17; /**< preconfiguredNW-ControlledMeasGap-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_PreconfiguredNW_ControlledMeasGap_r17 preconfiguredNW_ControlledMeasGap_r17; /**< ASN.1 preconfiguredNW-ControlledMeasGap-r17；枚举；OPTIONAL。 */
    bool has_handoverFR1_FR2_2_r17; /**< handoverFR1-FR2-2-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_HandoverFR1_FR2_2_r17 handoverFR1_FR2_2_r17; /**< ASN.1 handoverFR1-FR2-2-r17；枚举；OPTIONAL。 */
    bool has_handoverFR2_1_FR2_2_r17; /**< handoverFR2-1-FR2-2-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_HandoverFR2_1_FR2_2_r17 handoverFR2_1_FR2_2_r17; /**< ASN.1 handoverFR2-1-FR2-2-r17；枚举；OPTIONAL。 */
    bool has_independentGapConfigPRS_r17; /**< independentGapConfigPRS-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_IndependentGapConfigPRS_r17 independentGapConfigPRS_r17; /**< ASN.1 independentGapConfigPRS-r17；枚举；OPTIONAL。 */
    bool has_rrm_RelaxationRRC_ConnectedRedCap_r17; /**< rrm-RelaxationRRC-ConnectedRedCap-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_Rrm_RelaxationRRC_ConnectedRedCap_r17 rrm_RelaxationRRC_ConnectedRedCap_r17; /**< ASN.1 rrm-RelaxationRRC-ConnectedRedCap-r17；枚举；OPTIONAL。 */
    bool has_parallelMeasurementGap_r17; /**< parallelMeasurementGap-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_ParallelMeasurementGap_r17 parallelMeasurementGap_r17; /**< ASN.1 parallelMeasurementGap-r17；枚举；OPTIONAL。 */
    bool has_condHandoverWithSCG_NRDC_r17; /**< condHandoverWithSCG-NRDC-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_CondHandoverWithSCG_NRDC_r17 condHandoverWithSCG_NRDC_r17; /**< ASN.1 condHandoverWithSCG-NRDC-r17；枚举；OPTIONAL。 */
    bool has_gNB_ID_LengthReporting_r17; /**< gNB-ID-LengthReporting-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_r17 gNB_ID_LengthReporting_r17; /**< ASN.1 gNB-ID-LengthReporting-r17；枚举；OPTIONAL。 */
    bool has_gNB_ID_LengthReporting_ENDC_r17; /**< gNB-ID-LengthReporting-ENDC-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_ENDC_r17 gNB_ID_LengthReporting_ENDC_r17; /**< ASN.1 gNB-ID-LengthReporting-ENDC-r17；枚举；OPTIONAL。 */
    bool has_gNB_ID_LengthReporting_NEDC_r17; /**< gNB-ID-LengthReporting-NEDC-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NEDC_r17 gNB_ID_LengthReporting_NEDC_r17; /**< ASN.1 gNB-ID-LengthReporting-NEDC-r17；枚举；OPTIONAL。 */
    bool has_gNB_ID_LengthReporting_NRDC_r17; /**< gNB-ID-LengthReporting-NRDC-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NRDC_r17 gNB_ID_LengthReporting_NRDC_r17; /**< ASN.1 gNB-ID-LengthReporting-NRDC-r17；枚举；OPTIONAL。 */
    bool has_gNB_ID_LengthReporting_NPN_r17; /**< gNB-ID-LengthReporting-NPN-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup6_GNB_ID_LengthReporting_NPN_r17 gNB_ID_LengthReporting_NPN_r17; /**< ASN.1 gNB-ID-LengthReporting-NPN-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup7
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup7；源文件第 17605 行。
 */
struct MeasAndMobParametersCommon_ExtGroup7 {
    bool has_parallelSMTC_r17; /**< parallelSMTC-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup7_ParallelSMTC_r17 parallelSMTC_r17; /**< ASN.1 parallelSMTC-r17；枚举；OPTIONAL。 */
    bool has_concurrentMeasGapEUTRA_r17; /**< concurrentMeasGapEUTRA-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup7_ConcurrentMeasGapEUTRA_r17 concurrentMeasGapEUTRA_r17; /**< ASN.1 concurrentMeasGapEUTRA-r17；枚举；OPTIONAL。 */
    bool has_serviceLinkPropDelayDiffReporting_r17; /**< serviceLinkPropDelayDiffReporting-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup7_ServiceLinkPropDelayDiffReporting_r17 serviceLinkPropDelayDiffReporting_r17; /**< ASN.1 serviceLinkPropDelayDiffReporting-r17；枚举；OPTIONAL。 */
    bool has_ncsg_SymbolLevelScheduleRestrictionInter_r17; /**< ncsg-SymbolLevelScheduleRestrictionInter-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup7_Ncsg_SymbolLevelScheduleRestrictionInter_r17 ncsg_SymbolLevelScheduleRestrictionInter_r17; /**< ASN.1 ncsg-SymbolLevelScheduleRestrictionInter-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17
 * @note ASN.1：independentGapConfig-maxCC-r17；源文件第 17616 行。
 * @note SEQUENCE { fr1-Only-r17, fr2-Only-r17, fr1-AndFR2-r17 }
 */
struct MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17 {
    bool has_fr1_Only_r17; /**< fr1-Only-r17 是否存在。 */
    int64_t fr1_Only_r17; /**< ASN.1 fr1-Only-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_fr2_Only_r17; /**< fr2-Only-r17 是否存在。 */
    int64_t fr2_Only_r17; /**< ASN.1 fr2-Only-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_fr1_AndFR2_r17; /**< fr1-AndFR2-r17 是否存在。 */
    int64_t fr1_AndFR2_r17; /**< ASN.1 fr1-AndFR2-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup8
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup8；源文件第 17614 行。
 */
struct MeasAndMobParametersCommon_ExtGroup8 {
    bool has_eventD1_MeasReportTrigger_r17; /**< eventD1-MeasReportTrigger-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup8_EventD1_MeasReportTrigger_r17 eventD1_MeasReportTrigger_r17; /**< ASN.1 eventD1-MeasReportTrigger-r17；枚举；OPTIONAL。 */
    bool has_independentGapConfig_maxCC_r17; /**< independentGapConfig-maxCC-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup8_IndependentGapConfig_maxCC_r17 independentGapConfig_maxCC_r17; /**< ASN.1 independentGapConfig-maxCC-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup9
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup9；源文件第 17622 行。
 */
struct MeasAndMobParametersCommon_ExtGroup9 {
    bool has_interSatMeas_r17; /**< interSatMeas-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup9_InterSatMeas_r17 interSatMeas_r17; /**< ASN.1 interSatMeas-r17；枚举；OPTIONAL。 */
    bool has_deriveSSB_IndexFromCellInterNon_NCSG_r17; /**< deriveSSB-IndexFromCellInterNon-NCSG-r17 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup9_DeriveSSB_IndexFromCellInterNon_NCSG_r17 deriveSSB_IndexFromCellInterNon_NCSG_r17; /**< ASN.1 deriveSSB-IndexFromCellInterNon-NCSG-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18
 * @note ASN.1：ltm-FastUE-Processing-r18；源文件第 17655 行。
 * @note SEQUENCE { fr1-r18, fr2-r18, fr1-AndFR2-r18 }
 */
struct MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18 {
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_r18 fr1_r18; /**< ASN.1 fr1-r18；枚举。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr2_r18 fr2_r18; /**< ASN.1 fr2-r18；枚举。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18_Fr1_AndFR2_r18 fr1_AndFR2_r18; /**< ASN.1 fr1-AndFR2-r18；枚举。 */
};


/**
 * @brief MeasAndMobParametersCommon_ExtGroup10
 * @note ASN.1：MeasAndMobParametersCommon_ExtGroup10；源文件第 17626 行。
 */
struct MeasAndMobParametersCommon_ExtGroup10 {
    bool has_l3_MeasUnknownSCellActivation_r18; /**< l3-MeasUnknownSCellActivation-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_L3_MeasUnknownSCellActivation_r18 l3_MeasUnknownSCellActivation_r18; /**< ASN.1 l3-MeasUnknownSCellActivation-r18；枚举；OPTIONAL。 */
    bool has_shortMeasInterval_r18; /**< shortMeasInterval-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_ShortMeasInterval_r18 shortMeasInterval_r18; /**< ASN.1 shortMeasInterval-r18；枚举；OPTIONAL。 */
    bool has_nr_NeedForInterruptionReport_r18; /**< nr-NeedForInterruptionReport-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Nr_NeedForInterruptionReport_r18 nr_NeedForInterruptionReport_r18; /**< ASN.1 nr-NeedForInterruptionReport-r18；枚举；OPTIONAL。 */
    bool has_measSequenceConfig_r18; /**< measSequenceConfig-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_MeasSequenceConfig_r18 measSequenceConfig_r18; /**< ASN.1 measSequenceConfig-r18；枚举；OPTIONAL。 */
    bool has_cellIndividualOffsetPerMeasEvent_r18; /**< cellIndividualOffsetPerMeasEvent-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_CellIndividualOffsetPerMeasEvent_r18 cellIndividualOffsetPerMeasEvent_r18; /**< ASN.1 cellIndividualOffsetPerMeasEvent-r18；枚举；OPTIONAL。 */
    bool has_ltm_MCG_r18; /**< ltm-MCG-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_r18 ltm_MCG_r18; /**< ASN.1 ltm-MCG-r18；枚举；OPTIONAL。 */
    bool has_ltm_SCG_r18; /**< ltm-SCG-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_SCG_r18 ltm_SCG_r18; /**< ASN.1 ltm-SCG-r18；枚举；OPTIONAL。 */
    bool has_ltm_MCG_NRDC_r18; /**< ltm-MCG-NRDC-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_MCG_NRDC_r18 ltm_MCG_NRDC_r18; /**< ASN.1 ltm-MCG-NRDC-r18；枚举；OPTIONAL。 */
    bool has_ltm_RACH_LessDG_r18; /**< ltm-RACH-LessDG-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessDG_r18 ltm_RACH_LessDG_r18; /**< ASN.1 ltm-RACH-LessDG-r18；枚举；OPTIONAL。 */
    bool has_ltm_RACH_LessCG_r18; /**< ltm-RACH-LessCG-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_RACH_LessCG_r18 ltm_RACH_LessCG_r18; /**< ASN.1 ltm-RACH-LessCG-r18；枚举；OPTIONAL。 */
    bool has_ltm_Recovery_r18; /**< ltm-Recovery-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_Recovery_r18 ltm_Recovery_r18; /**< ASN.1 ltm-Recovery-r18；枚举；OPTIONAL。 */
    bool has_ltm_ReferenceConfig_r18; /**< ltm-ReferenceConfig-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_ReferenceConfig_r18 ltm_ReferenceConfig_r18; /**< ASN.1 ltm-ReferenceConfig-r18；枚举；OPTIONAL。 */
    bool has_eventD2_MeasReportTrigger_r18; /**< eventD2-MeasReportTrigger-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_EventD2_MeasReportTrigger_r18 eventD2_MeasReportTrigger_r18; /**< ASN.1 eventD2-MeasReportTrigger-r18；枚举；OPTIONAL。 */
    bool has_concurrentMeasGapsPreMG_r18; /**< concurrentMeasGapsPreMG-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsPreMG_r18 concurrentMeasGapsPreMG_r18; /**< ASN.1 concurrentMeasGapsPreMG-r18；枚举；OPTIONAL。 */
    bool has_concurrentMeasGapsNCSG_r18; /**< concurrentMeasGapsNCSG-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasGapsNCSG_r18 concurrentMeasGapsNCSG_r18; /**< ASN.1 concurrentMeasGapsNCSG-r18；枚举；OPTIONAL。 */
    bool has_eutra_NoGapMeasurement_r18; /**< eutra-NoGapMeasurement-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Eutra_NoGapMeasurement_r18 eutra_NoGapMeasurement_r18; /**< ASN.1 eutra-NoGapMeasurement-r18；枚举；OPTIONAL。 */
    bool has_eutra_MeasEMW_r18; /**< eutra-MeasEMW-r18 是否存在。 */
    BitString eutra_MeasEMW_r18; /**< ASN.1 eutra-MeasEMW-r18；SIZE (6)，定长；OPTIONAL。 */
    bool has_concurrentMeasCRS_InsideBWP_EUTRA_r18; /**< concurrentMeasCRS-InsideBWP-EUTRA-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_ConcurrentMeasCRS_InsideBWP_EUTRA_r18 concurrentMeasCRS_InsideBWP_EUTRA_r18; /**< ASN.1 concurrentMeasCRS-InsideBWP-EUTRA-r18；枚举；OPTIONAL。 */
    bool has_ltm_InterFreqMeasGap_r18; /**< ltm-InterFreqMeasGap-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_InterFreqMeasGap_r18 ltm_InterFreqMeasGap_r18; /**< ASN.1 ltm-InterFreqMeasGap-r18；枚举；OPTIONAL。 */
    bool has_ltm_FastUE_Processing_r18; /**< ltm-FastUE-Processing-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_Ltm_FastUE_Processing_r18 ltm_FastUE_Processing_r18; /**< ASN.1 ltm-FastUE-Processing-r18；结构体；OPTIONAL。 */
    bool has_measValidationReportEMR_r18; /**< measValidationReportEMR-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportEMR_r18 measValidationReportEMR_r18; /**< ASN.1 measValidationReportEMR-r18；枚举；OPTIONAL。 */
    bool has_measValidationReportNonEMR_r18; /**< measValidationReportNonEMR-r18 是否存在。 */
    MeasAndMobParametersCommon_ExtGroup10_MeasValidationReportNonEMR_r18 measValidationReportNonEMR_r18; /**< ASN.1 measValidationReportNonEMR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersCommon
 * @note ASN.1：MeasAndMobParametersCommon；源文件第 17523 行。
 * @note MeasAndMobParametersCommon ::= SEQUENCE { supportedGapPattern, ssb-RLM, ssb-AndCSI-RS-RLM, eventB-MeasAndRep...
 */
struct MeasAndMobParametersCommon {
    bool has_supportedGapPattern; /**< supportedGapPattern 是否存在。 */
    BitString supportedGapPattern; /**< ASN.1 supportedGapPattern；SIZE (22)，定长；OPTIONAL。 */
    bool has_ssb_RLM; /**< ssb-RLM 是否存在。 */
    MeasAndMobParametersCommon_Ssb_RLM ssb_RLM; /**< ASN.1 ssb-RLM；枚举；OPTIONAL。 */
    bool has_ssb_AndCSI_RS_RLM; /**< ssb-AndCSI-RS-RLM 是否存在。 */
    MeasAndMobParametersCommon_Ssb_AndCSI_RS_RLM ssb_AndCSI_RS_RLM; /**< ASN.1 ssb-AndCSI-RS-RLM；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    MeasAndMobParametersCommon_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasAndMobParametersXDD_Diff_ExtGroup1
 * @note ASN.1：MeasAndMobParametersXDD_Diff_ExtGroup1；源文件第 17671 行。
 */
struct MeasAndMobParametersXDD_Diff_ExtGroup1 {
    bool has_handoverInterF; /**< handoverInterF 是否存在。 */
    MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverInterF handoverInterF; /**< ASN.1 handoverInterF；枚举；OPTIONAL。 */
    bool has_handoverLTE_EPC; /**< handoverLTE-EPC 是否存在。 */
    MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_EPC handoverLTE_EPC; /**< ASN.1 handoverLTE-EPC；枚举；OPTIONAL。 */
    bool has_handoverLTE_5GC; /**< handoverLTE-5GC 是否存在。 */
    MeasAndMobParametersXDD_Diff_ExtGroup1_HandoverLTE_5GC handoverLTE_5GC; /**< ASN.1 handoverLTE-5GC；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersXDD_Diff_ExtGroup2
 * @note ASN.1：MeasAndMobParametersXDD_Diff_ExtGroup2；源文件第 17676 行。
 */
struct MeasAndMobParametersXDD_Diff_ExtGroup2 {
    bool has_sftd_MeasNR_Neigh; /**< sftd-MeasNR-Neigh 是否存在。 */
    MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh sftd_MeasNR_Neigh; /**< ASN.1 sftd-MeasNR-Neigh；枚举；OPTIONAL。 */
    bool has_sftd_MeasNR_Neigh_DRX; /**< sftd-MeasNR-Neigh-DRX 是否存在。 */
    MeasAndMobParametersXDD_Diff_ExtGroup2_Sftd_MeasNR_Neigh_DRX sftd_MeasNR_Neigh_DRX; /**< ASN.1 sftd-MeasNR-Neigh-DRX；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersXDD_Diff_ExtGroup3
 * @note ASN.1：MeasAndMobParametersXDD_Diff_ExtGroup3；源文件第 17680 行。
 */
struct MeasAndMobParametersXDD_Diff_ExtGroup3 {
    bool has_dummy; /**< dummy 是否存在。 */
    MeasAndMobParametersXDD_Diff_ExtGroup3_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersXDD_Diff
 * @note ASN.1：MeasAndMobParametersXDD-Diff；源文件第 17667 行。
 * @note MeasAndMobParametersXDD-Diff ::= SEQUENCE { intraAndInterF-MeasAndReport, eventA-MeasAndReport, handoverInterF...
 */
struct MeasAndMobParametersXDD_Diff {
    bool has_intraAndInterF_MeasAndReport; /**< intraAndInterF-MeasAndReport 是否存在。 */
    MeasAndMobParametersXDD_Diff_IntraAndInterF_MeasAndReport intraAndInterF_MeasAndReport; /**< ASN.1 intraAndInterF-MeasAndReport；枚举；OPTIONAL。 */
    bool has_eventA_MeasAndReport; /**< eventA-MeasAndReport 是否存在。 */
    MeasAndMobParametersXDD_Diff_EventA_MeasAndReport eventA_MeasAndReport; /**< ASN.1 eventA-MeasAndReport；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasAndMobParametersXDD_Diff_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasAndMobParametersXDD_Diff_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MeasAndMobParametersXDD_Diff_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasAndMobParametersFRX_Diff_ExtGroup1
 * @note ASN.1：MeasAndMobParametersFRX_Diff_ExtGroup1；源文件第 17692 行。
 */
struct MeasAndMobParametersFRX_Diff_ExtGroup1 {
    bool has_handoverInterF; /**< handoverInterF 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverInterF handoverInterF; /**< ASN.1 handoverInterF；枚举；OPTIONAL。 */
    bool has_handoverLTE_EPC; /**< handoverLTE-EPC 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_EPC handoverLTE_EPC; /**< ASN.1 handoverLTE-EPC；枚举；OPTIONAL。 */
    bool has_handoverLTE_5GC; /**< handoverLTE-5GC 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup1_HandoverLTE_5GC handoverLTE_5GC; /**< ASN.1 handoverLTE-5GC；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersFRX_Diff_ExtGroup2
 * @note ASN.1：MeasAndMobParametersFRX_Diff_ExtGroup2；源文件第 17697 行。
 */
struct MeasAndMobParametersFRX_Diff_ExtGroup2 {
    bool has_maxNumberResource_CSI_RS_RLM; /**< maxNumberResource-CSI-RS-RLM 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup2_MaxNumberResource_CSI_RS_RLM maxNumberResource_CSI_RS_RLM; /**< ASN.1 maxNumberResource-CSI-RS-RLM；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersFRX_Diff_ExtGroup3
 * @note ASN.1：MeasAndMobParametersFRX_Diff_ExtGroup3；源文件第 17700 行。
 */
struct MeasAndMobParametersFRX_Diff_ExtGroup3 {
    bool has_simultaneousRxDataSSB_DiffNumerology; /**< simultaneousRxDataSSB-DiffNumerology 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup3_SimultaneousRxDataSSB_DiffNumerology simultaneousRxDataSSB_DiffNumerology; /**< ASN.1 simultaneousRxDataSSB-DiffNumerology；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersFRX_Diff_ExtGroup4
 * @note ASN.1：MeasAndMobParametersFRX_Diff_ExtGroup4；源文件第 17703 行。
 */
struct MeasAndMobParametersFRX_Diff_ExtGroup4 {
    bool has_nr_AutonomousGaps_r16; /**< nr-AutonomousGaps-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_r16 nr_AutonomousGaps_r16; /**< ASN.1 nr-AutonomousGaps-r16；枚举；OPTIONAL。 */
    bool has_nr_AutonomousGaps_ENDC_r16; /**< nr-AutonomousGaps-ENDC-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_ENDC_r16 nr_AutonomousGaps_ENDC_r16; /**< ASN.1 nr-AutonomousGaps-ENDC-r16；枚举；OPTIONAL。 */
    bool has_nr_AutonomousGaps_NEDC_r16; /**< nr-AutonomousGaps-NEDC-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NEDC_r16 nr_AutonomousGaps_NEDC_r16; /**< ASN.1 nr-AutonomousGaps-NEDC-r16；枚举；OPTIONAL。 */
    bool has_nr_AutonomousGaps_NRDC_r16; /**< nr-AutonomousGaps-NRDC-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Nr_AutonomousGaps_NRDC_r16 nr_AutonomousGaps_NRDC_r16; /**< ASN.1 nr-AutonomousGaps-NRDC-r16；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_cli_RSSI_Meas_r16; /**< cli-RSSI-Meas-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_RSSI_Meas_r16 cli_RSSI_Meas_r16; /**< ASN.1 cli-RSSI-Meas-r16；枚举；OPTIONAL。 */
    bool has_cli_SRS_RSRP_Meas_r16; /**< cli-SRS-RSRP-Meas-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_Cli_SRS_RSRP_Meas_r16 cli_SRS_RSRP_Meas_r16; /**< ASN.1 cli-SRS-RSRP-Meas-r16；枚举；OPTIONAL。 */
    bool has_interFrequencyMeas_NoGap_r16; /**< interFrequencyMeas-NoGap-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_InterFrequencyMeas_NoGap_r16 interFrequencyMeas_NoGap_r16; /**< ASN.1 interFrequencyMeas-NoGap-r16；枚举；OPTIONAL。 */
    bool has_simultaneousRxDataSSB_DiffNumerology_Inter_r16; /**< simultaneousRxDataSSB-DiffNumerology-Inter-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_SimultaneousRxDataSSB_DiffNumerology_Inter_r16 simultaneousRxDataSSB_DiffNumerology_Inter_r16; /**< ASN.1 simultaneousRxDataSSB-DiffNumerology-Inter-r16；枚举；OPTIONAL。 */
    bool has_idleInactiveNR_MeasReport_r16; /**< idleInactiveNR-MeasReport-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasReport_r16 idleInactiveNR_MeasReport_r16; /**< ASN.1 idleInactiveNR-MeasReport-r16；枚举；OPTIONAL。 */
    bool has_idleInactiveNR_MeasBeamReport_r16; /**< idleInactiveNR-MeasBeamReport-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4_IdleInactiveNR_MeasBeamReport_r16 idleInactiveNR_MeasBeamReport_r16; /**< ASN.1 idleInactiveNR-MeasBeamReport-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersFRX_Diff_ExtGroup5
 * @note ASN.1：MeasAndMobParametersFRX_Diff_ExtGroup5；源文件第 17717 行。
 */
struct MeasAndMobParametersFRX_Diff_ExtGroup5 {
    bool has_increasedNumberofCSIRSPerMO_r16; /**< increasedNumberofCSIRSPerMO-r16 是否存在。 */
    MeasAndMobParametersFRX_Diff_ExtGroup5_IncreasedNumberofCSIRSPerMO_r16 increasedNumberofCSIRSPerMO_r16; /**< ASN.1 increasedNumberofCSIRSPerMO-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersFRX_Diff
 * @note ASN.1：MeasAndMobParametersFRX-Diff；源文件第 17685 行。
 * @note MeasAndMobParametersFRX-Diff ::= SEQUENCE { ss-SINR-Meas, csi-RSRP-AndRSRQ-MeasWithSSB, csi-RSRP-AndRSRQ-MeasW...
 */
struct MeasAndMobParametersFRX_Diff {
    bool has_ss_SINR_Meas; /**< ss-SINR-Meas 是否存在。 */
    MeasAndMobParametersFRX_Diff_Ss_SINR_Meas ss_SINR_Meas; /**< ASN.1 ss-SINR-Meas；枚举；OPTIONAL。 */
    bool has_csi_RSRP_AndRSRQ_MeasWithSSB; /**< csi-RSRP-AndRSRQ-MeasWithSSB 是否存在。 */
    MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithSSB csi_RSRP_AndRSRQ_MeasWithSSB; /**< ASN.1 csi-RSRP-AndRSRQ-MeasWithSSB；枚举；OPTIONAL。 */
    bool has_csi_RSRP_AndRSRQ_MeasWithoutSSB; /**< csi-RSRP-AndRSRQ-MeasWithoutSSB 是否存在。 */
    MeasAndMobParametersFRX_Diff_Csi_RSRP_AndRSRQ_MeasWithoutSSB csi_RSRP_AndRSRQ_MeasWithoutSSB; /**< ASN.1 csi-RSRP-AndRSRQ-MeasWithoutSSB；枚举；OPTIONAL。 */
    bool has_csi_SINR_Meas; /**< csi-SINR-Meas 是否存在。 */
    MeasAndMobParametersFRX_Diff_Csi_SINR_Meas csi_SINR_Meas; /**< ASN.1 csi-SINR-Meas；枚举；OPTIONAL。 */
    bool has_csi_RS_RLM; /**< csi-RS-RLM 是否存在。 */
    MeasAndMobParametersFRX_Diff_Csi_RS_RLM csi_RS_RLM; /**< ASN.1 csi-RS-RLM；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasAndMobParametersFRX_Diff_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasAndMobParametersFRX_Diff_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MeasAndMobParametersFRX_Diff_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MeasAndMobParametersFRX_Diff_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MeasAndMobParametersFRX_Diff_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasAndMobParameters
 * @note ASN.1：MeasAndMobParameters；源文件第 17513 行。
 * @note MeasAndMobParameters ::= SEQUENCE { measAndMobParametersCommon, measAndMobParametersXDD-Diff, measAndM...
 */
struct MeasAndMobParameters {
    bool has_measAndMobParametersCommon; /**< measAndMobParametersCommon 是否存在。 */
    MeasAndMobParametersCommon measAndMobParametersCommon; /**< ASN.1 measAndMobParametersCommon；结构体；OPTIONAL。 */
    bool has_measAndMobParametersXDD_Diff; /**< measAndMobParametersXDD-Diff 是否存在。 */
    MeasAndMobParametersXDD_Diff measAndMobParametersXDD_Diff; /**< ASN.1 measAndMobParametersXDD-Diff；结构体；OPTIONAL。 */
    bool has_measAndMobParametersFRX_Diff; /**< measAndMobParametersFRX-Diff 是否存在。 */
    MeasAndMobParametersFRX_Diff measAndMobParametersFRX_Diff; /**< ASN.1 measAndMobParametersFRX-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersFR2_2_r17
 * @note ASN.1：MeasAndMobParametersFR2-2-r17；源文件第 17722 行。
 * @note MeasAndMobParametersFR2-2-r17 ::= SEQUENCE { handoverInterF-r17, handoverLTE-EPC-r17, handoverLTE-5GC-r17, idle...
 */
struct MeasAndMobParametersFR2_2_r17 {
    bool has_handoverInterF_r17; /**< handoverInterF-r17 是否存在。 */
    MeasAndMobParametersFR2_2_r17_HandoverInterF_r17 handoverInterF_r17; /**< ASN.1 handoverInterF-r17；枚举；OPTIONAL。 */
    bool has_handoverLTE_EPC_r17; /**< handoverLTE-EPC-r17 是否存在。 */
    MeasAndMobParametersFR2_2_r17_HandoverLTE_EPC_r17 handoverLTE_EPC_r17; /**< ASN.1 handoverLTE-EPC-r17；枚举；OPTIONAL。 */
    bool has_handoverLTE_5GC_r17; /**< handoverLTE-5GC-r17 是否存在。 */
    MeasAndMobParametersFR2_2_r17_HandoverLTE_5GC_r17 handoverLTE_5GC_r17; /**< ASN.1 handoverLTE-5GC-r17；枚举；OPTIONAL。 */
    bool has_idleInactiveNR_MeasReport_r17; /**< idleInactiveNR-MeasReport-r17 是否存在。 */
    MeasAndMobParametersFR2_2_r17_IdleInactiveNR_MeasReport_r17 idleInactiveNR_MeasReport_r17; /**< ASN.1 idleInactiveNR-MeasReport-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParameters_v1700
 * @note ASN.1：MeasAndMobParameters-v1700；源文件第 17519 行。
 * @note MeasAndMobParameters-v1700 ::= SEQUENCE { measAndMobParametersFR2-2-r17 }
 */
struct MeasAndMobParameters_v1700 {
    bool has_measAndMobParametersFR2_2_r17; /**< measAndMobParametersFR2-2-r17 是否存在。 */
    MeasAndMobParametersFR2_2_r17 measAndMobParametersFR2_2_r17; /**< ASN.1 measAndMobParametersFR2-2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common
 * @note ASN.1：MeasAndMobParametersMRDC-Common；源文件第 17760 行。
 * @note MeasAndMobParametersMRDC-Common ::= SEQUENCE { independentGapConfig }
 */
struct MeasAndMobParametersMRDC_Common {
    bool has_independentGapConfig; /**< independentGapConfig 是否存在。 */
    MeasAndMobParametersMRDC_Common_IndependentGapConfig independentGapConfig; /**< ASN.1 independentGapConfig；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_XDD_Diff
 * @note ASN.1：MeasAndMobParametersMRDC-XDD-Diff；源文件第 17806 行。
 * @note MeasAndMobParametersMRDC-XDD-Diff ::= SEQUENCE { sftd-MeasPSCell, sftd-MeasNR-Cell }
 */
struct MeasAndMobParametersMRDC_XDD_Diff {
    bool has_sftd_MeasPSCell; /**< sftd-MeasPSCell 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasPSCell sftd_MeasPSCell; /**< ASN.1 sftd-MeasPSCell；枚举；OPTIONAL。 */
    bool has_sftd_MeasNR_Cell; /**< sftd-MeasNR-Cell 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff_Sftd_MeasNR_Cell sftd_MeasNR_Cell; /**< ASN.1 sftd-MeasNR-Cell；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_FRX_Diff
 * @note ASN.1：MeasAndMobParametersMRDC-FRX-Diff；源文件第 17815 行。
 * @note MeasAndMobParametersMRDC-FRX-Diff ::= SEQUENCE { simultaneousRxDataSSB-DiffNumerology }
 */
struct MeasAndMobParametersMRDC_FRX_Diff {
    bool has_simultaneousRxDataSSB_DiffNumerology; /**< simultaneousRxDataSSB-DiffNumerology 是否存在。 */
    MeasAndMobParametersMRDC_FRX_Diff_SimultaneousRxDataSSB_DiffNumerology simultaneousRxDataSSB_DiffNumerology; /**< ASN.1 simultaneousRxDataSSB-DiffNumerology；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC
 * @note ASN.1：MeasAndMobParametersMRDC；源文件第 17733 行。
 * @note MeasAndMobParametersMRDC ::= SEQUENCE { measAndMobParametersMRDC-Common, measAndMobParametersMRDC-XDD-Diff...
 */
struct MeasAndMobParametersMRDC {
    bool has_measAndMobParametersMRDC_Common; /**< measAndMobParametersMRDC-Common 是否存在。 */
    MeasAndMobParametersMRDC_Common measAndMobParametersMRDC_Common; /**< ASN.1 measAndMobParametersMRDC-Common；结构体；OPTIONAL。 */
    bool has_measAndMobParametersMRDC_XDD_Diff; /**< measAndMobParametersMRDC-XDD-Diff 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff measAndMobParametersMRDC_XDD_Diff; /**< ASN.1 measAndMobParametersMRDC-XDD-Diff；结构体；OPTIONAL。 */
    bool has_measAndMobParametersMRDC_FRX_Diff; /**< measAndMobParametersMRDC-FRX-Diff 是否存在。 */
    MeasAndMobParametersMRDC_FRX_Diff measAndMobParametersMRDC_FRX_Diff; /**< ASN.1 measAndMobParametersMRDC-FRX-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_XDD_Diff_v1560
 * @note ASN.1：MeasAndMobParametersMRDC-XDD-Diff-v1560；源文件第 17811 行。
 * @note MeasAndMobParametersMRDC-XDD-Diff-v1560 ::= SEQUENCE { sftd-MeasPSCell-NEDC }
 */
struct MeasAndMobParametersMRDC_XDD_Diff_v1560 {
    bool has_sftd_MeasPSCell_NEDC; /**< sftd-MeasPSCell-NEDC 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff_v1560_Sftd_MeasPSCell_NEDC sftd_MeasPSCell_NEDC; /**< ASN.1 sftd-MeasPSCell-NEDC；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_v1560
 * @note ASN.1：MeasAndMobParametersMRDC-v1560；源文件第 17739 行。
 * @note MeasAndMobParametersMRDC-v1560 ::= SEQUENCE { measAndMobParametersMRDC-XDD-Diff-v1560 }
 */
struct MeasAndMobParametersMRDC_v1560 {
    bool has_measAndMobParametersMRDC_XDD_Diff_v1560; /**< measAndMobParametersMRDC-XDD-Diff-v1560 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff_v1560 measAndMobParametersMRDC_XDD_Diff_v1560; /**< ASN.1 measAndMobParametersMRDC-XDD-Diff-v1560；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16
 * @note ASN.1：condPSCellChangeParametersCommon-r16；源文件第 17765 行。
 * @note SEQUENCE { condPSCellChangeFDD-TDD-r16, condPSCellChangeFR1-FR2-r16 }
 */
struct MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16 {
    bool has_condPSCellChangeFDD_TDD_r16; /**< condPSCellChangeFDD-TDD-r16 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFDD_TDD_r16 condPSCellChangeFDD_TDD_r16; /**< ASN.1 condPSCellChangeFDD-TDD-r16；枚举；OPTIONAL。 */
    bool has_condPSCellChangeFR1_FR2_r16; /**< condPSCellChangeFR1-FR2-r16 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16_CondPSCellChangeFR1_FR2_r16 condPSCellChangeFR1_FR2_r16; /**< ASN.1 condPSCellChangeFR1-FR2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1610
 * @note ASN.1：MeasAndMobParametersMRDC-Common-v1610；源文件第 17764 行。
 * @note MeasAndMobParametersMRDC-Common-v1610 ::= SEQUENCE { condPSCellChangeParametersCommon-r16, pscellT312-r16 }
 */
struct MeasAndMobParametersMRDC_Common_v1610 {
    bool has_condPSCellChangeParametersCommon_r16; /**< condPSCellChangeParametersCommon-r16 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1610_CondPSCellChangeParametersCommon_r16 condPSCellChangeParametersCommon_r16; /**< ASN.1 condPSCellChangeParametersCommon-r16；结构体；OPTIONAL。 */
    bool has_pscellT312_r16; /**< pscellT312-r16 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1610_PscellT312_r16 pscellT312_r16; /**< ASN.1 pscellT312-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_v1610
 * @note ASN.1：MeasAndMobParametersMRDC-v1610；源文件第 17743 行。
 * @note MeasAndMobParametersMRDC-v1610 ::= SEQUENCE { measAndMobParametersMRDC-Common-v1610, interNR-MeasEUTRA-IAB-r16 }
 */
struct MeasAndMobParametersMRDC_v1610 {
    bool has_measAndMobParametersMRDC_Common_v1610; /**< measAndMobParametersMRDC-Common-v1610 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1610 measAndMobParametersMRDC_Common_v1610; /**< ASN.1 measAndMobParametersMRDC-Common-v1610；结构体；OPTIONAL。 */
    bool has_interNR_MeasEUTRA_IAB_r16; /**< interNR-MeasEUTRA-IAB-r16 是否存在。 */
    MeasAndMobParametersMRDC_v1610_InterNR_MeasEUTRA_IAB_r16 interNR_MeasEUTRA_IAB_r16; /**< ASN.1 interNR-MeasEUTRA-IAB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17
 * @note ASN.1：condPSCellChangeParameters-r17；源文件第 17773 行。
 * @note SEQUENCE { inter-SN-condPSCellChangeFDD-TDD-NRDC-r17, inter-SN-condPSCellChan...
 */
struct MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17 {
    bool has_inter_SN_condPSCellChangeFDD_TDD_NRDC_r17; /**< inter-SN-condPSCellChangeFDD-TDD-NRDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_NRDC_r17 inter_SN_condPSCellChangeFDD_TDD_NRDC_r17; /**< ASN.1 inter-SN-condPSCellChangeFDD-TDD-NRDC-r17；枚举；OPTIONAL。 */
    bool has_inter_SN_condPSCellChangeFR1_FR2_NRDC_r17; /**< inter-SN-condPSCellChangeFR1-FR2-NRDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_NRDC_r17 inter_SN_condPSCellChangeFR1_FR2_NRDC_r17; /**< ASN.1 inter-SN-condPSCellChangeFR1-FR2-NRDC-r17；枚举；OPTIONAL。 */
    bool has_inter_SN_condPSCellChangeFDD_TDD_ENDC_r17; /**< inter-SN-condPSCellChangeFDD-TDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFDD_TDD_ENDC_r17 inter_SN_condPSCellChangeFDD_TDD_ENDC_r17; /**< ASN.1 inter-SN-condPSCellChangeFDD-TDD-ENDC-r17；枚举；OPTIONAL。 */
    bool has_inter_SN_condPSCellChangeFR1_FR2_ENDC_r17; /**< inter-SN-condPSCellChangeFR1-FR2-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Inter_SN_condPSCellChangeFR1_FR2_ENDC_r17 inter_SN_condPSCellChangeFR1_FR2_ENDC_r17; /**< ASN.1 inter-SN-condPSCellChangeFR1-FR2-ENDC-r17；枚举；OPTIONAL。 */
    bool has_mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17; /**< mn-InitiatedCondPSCellChange-FR1FDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17 mn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17; /**< ASN.1 mn-InitiatedCondPSCellChange-FR1FDD-ENDC-r17；枚举；OPTIONAL。 */
    bool has_mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17; /**< mn-InitiatedCondPSCellChange-FR1TDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17 mn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17; /**< ASN.1 mn-InitiatedCondPSCellChange-FR1TDD-ENDC-r17；枚举；OPTIONAL。 */
    bool has_mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17; /**< mn-InitiatedCondPSCellChange-FR2TDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17 mn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17; /**< ASN.1 mn-InitiatedCondPSCellChange-FR2TDD-ENDC-r17；枚举；OPTIONAL。 */
    bool has_sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17; /**< sn-InitiatedCondPSCellChange-FR1FDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17 sn_InitiatedCondPSCellChange_FR1FDD_ENDC_r17; /**< ASN.1 sn-InitiatedCondPSCellChange-FR1FDD-ENDC-r17；枚举；OPTIONAL。 */
    bool has_sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17; /**< sn-InitiatedCondPSCellChange-FR1TDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17 sn_InitiatedCondPSCellChange_FR1TDD_ENDC_r17; /**< ASN.1 sn-InitiatedCondPSCellChange-FR1TDD-ENDC-r17；枚举；OPTIONAL。 */
    bool has_sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17; /**< sn-InitiatedCondPSCellChange-FR2TDD-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17_Sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17 sn_InitiatedCondPSCellChange_FR2TDD_ENDC_r17; /**< ASN.1 sn-InitiatedCondPSCellChange-FR2TDD-ENDC-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1700
 * @note ASN.1：MeasAndMobParametersMRDC-Common-v1700；源文件第 17772 行。
 * @note MeasAndMobParametersMRDC-Common-v1700 ::= SEQUENCE { condPSCellChangeParameters-r17, condHandoverWithSCG-ENDC-r17, cond...
 */
struct MeasAndMobParametersMRDC_Common_v1700 {
    bool has_condPSCellChangeParameters_r17; /**< condPSCellChangeParameters-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondPSCellChangeParameters_r17 condPSCellChangeParameters_r17; /**< ASN.1 condPSCellChangeParameters-r17；结构体；OPTIONAL。 */
    bool has_condHandoverWithSCG_ENDC_r17; /**< condHandoverWithSCG-ENDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_ENDC_r17 condHandoverWithSCG_ENDC_r17; /**< ASN.1 condHandoverWithSCG-ENDC-r17；枚举；OPTIONAL。 */
    bool has_condHandoverWithSCG_NEDC_r17; /**< condHandoverWithSCG-NEDC-r17 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700_CondHandoverWithSCG_NEDC_r17 condHandoverWithSCG_NEDC_r17; /**< ASN.1 condHandoverWithSCG-NEDC-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_v1700
 * @note ASN.1：MeasAndMobParametersMRDC-v1700；源文件第 17748 行。
 * @note MeasAndMobParametersMRDC-v1700 ::= SEQUENCE { measAndMobParametersMRDC-Common-v1700 }
 */
struct MeasAndMobParametersMRDC_v1700 {
    bool has_measAndMobParametersMRDC_Common_v1700; /**< measAndMobParametersMRDC-Common-v1700 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1700 measAndMobParametersMRDC_Common_v1700; /**< ASN.1 measAndMobParametersMRDC-Common-v1700；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17
 * @note ASN.1：independentGapConfig-maxCC-r17；源文件第 17790 行。
 * @note SEQUENCE { fr1-Only-r17, fr2-Only-r17, fr1-AndFR2-r17 }
 */
struct MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17 {
    bool has_fr1_Only_r17; /**< fr1-Only-r17 是否存在。 */
    int64_t fr1_Only_r17; /**< ASN.1 fr1-Only-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_fr2_Only_r17; /**< fr2-Only-r17 是否存在。 */
    int64_t fr2_Only_r17; /**< ASN.1 fr2-Only-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_fr1_AndFR2_r17; /**< fr1-AndFR2-r17 是否存在。 */
    int64_t fr1_AndFR2_r17; /**< ASN.1 fr1-AndFR2-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1730
 * @note ASN.1：MeasAndMobParametersMRDC-Common-v1730；源文件第 17789 行。
 * @note MeasAndMobParametersMRDC-Common-v1730 ::= SEQUENCE { independentGapConfig-maxCC-r17 }
 */
struct MeasAndMobParametersMRDC_Common_v1730 {
    MeasAndMobParametersMRDC_Common_v1730_IndependentGapConfig_maxCC_r17 independentGapConfig_maxCC_r17; /**< ASN.1 independentGapConfig-maxCC-r17；结构体。 */
};


/**
 * @brief MeasAndMobParametersMRDC_v1730
 * @note ASN.1：MeasAndMobParametersMRDC-v1730；源文件第 17752 行。
 * @note MeasAndMobParametersMRDC-v1730 ::= SEQUENCE { measAndMobParametersMRDC-Common-v1730 }
 */
struct MeasAndMobParametersMRDC_v1730 {
    bool has_measAndMobParametersMRDC_Common_v1730; /**< measAndMobParametersMRDC-Common-v1730 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1730 measAndMobParametersMRDC_Common_v1730; /**< ASN.1 measAndMobParametersMRDC-Common-v1730；结构体；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_Common_v1810
 * @note ASN.1：MeasAndMobParametersMRDC-Common-v1810；源文件第 17797 行。
 * @note MeasAndMobParametersMRDC-Common-v1810 ::= SEQUENCE { mn-ConfiguredMN-TriggerSCPAC-r18, mn-ConfiguredSN-TriggerSCPAC-r18...
 */
struct MeasAndMobParametersMRDC_Common_v1810 {
    bool has_mn_ConfiguredMN_TriggerSCPAC_r18; /**< mn-ConfiguredMN-TriggerSCPAC-r18 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_r18 mn_ConfiguredMN_TriggerSCPAC_r18; /**< ASN.1 mn-ConfiguredMN-TriggerSCPAC-r18；枚举；OPTIONAL。 */
    bool has_mn_ConfiguredSN_TriggerSCPAC_r18; /**< mn-ConfiguredSN-TriggerSCPAC-r18 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredSN_TriggerSCPAC_r18 mn_ConfiguredSN_TriggerSCPAC_r18; /**< ASN.1 mn-ConfiguredSN-TriggerSCPAC-r18；枚举；OPTIONAL。 */
    bool has_sn_ConfiguredSCPAC_r18; /**< sn-ConfiguredSCPAC-r18 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredSCPAC_r18 sn_ConfiguredSCPAC_r18; /**< ASN.1 sn-ConfiguredSCPAC-r18；枚举；OPTIONAL。 */
    bool has_mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18; /**< mn-ConfiguredMN-TriggerSCPAC-afterSCG-release-r18 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18 mn_ConfiguredMN_TriggerSCPAC_afterSCG_release_r18; /**< ASN.1 mn-ConfiguredMN-TriggerSCPAC-afterSCG-release-r18；枚举；OPTIONAL。 */
    bool has_mn_ConfiguredReferenceConfigSCPAC_r18; /**< mn-ConfiguredReferenceConfigSCPAC-r18 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810_Mn_ConfiguredReferenceConfigSCPAC_r18 mn_ConfiguredReferenceConfigSCPAC_r18; /**< ASN.1 mn-ConfiguredReferenceConfigSCPAC-r18；枚举；OPTIONAL。 */
    bool has_sn_ConfiguredReferenceConfigSCPAC_r18; /**< sn-ConfiguredReferenceConfigSCPAC-r18 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810_Sn_ConfiguredReferenceConfigSCPAC_r18 sn_ConfiguredReferenceConfigSCPAC_r18; /**< ASN.1 sn-ConfiguredReferenceConfigSCPAC-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MeasAndMobParametersMRDC_v1810
 * @note ASN.1：MeasAndMobParametersMRDC-v1810；源文件第 17756 行。
 * @note MeasAndMobParametersMRDC-v1810 ::= SEQUENCE { measAndMobParametersMRDC-Common-v1810 }
 */
struct MeasAndMobParametersMRDC_v1810 {
    bool has_measAndMobParametersMRDC_Common_v1810; /**< measAndMobParametersMRDC-Common-v1810 是否存在。 */
    MeasAndMobParametersMRDC_Common_v1810 measAndMobParametersMRDC_Common_v1810; /**< ASN.1 measAndMobParametersMRDC-Common-v1810；结构体；OPTIONAL。 */
};


/**
 * @brief BeamManagementSSB_CSI_RS
 * @note ASN.1：BeamManagementSSB-CSI-RS；源文件第 18428 行。
 * @note BeamManagementSSB-CSI-RS ::= SEQUENCE { maxNumberSSB-CSI-RS-ResourceOneTx, maxNumberCSI-RS-Resource, maxNu...
 */
struct BeamManagementSSB_CSI_RS {
    BeamManagementSSB_CSI_RS_MaxNumberSSB_CSI_RS_ResourceOneTx maxNumberSSB_CSI_RS_ResourceOneTx; /**< ASN.1 maxNumberSSB-CSI-RS-ResourceOneTx；枚举。 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_Resource maxNumberCSI_RS_Resource; /**< ASN.1 maxNumberCSI-RS-Resource；枚举。 */
    BeamManagementSSB_CSI_RS_MaxNumberCSI_RS_ResourceTwoTx maxNumberCSI_RS_ResourceTwoTx; /**< ASN.1 maxNumberCSI-RS-ResourceTwoTx；枚举。 */
    bool has_supportedCSI_RS_Density; /**< supportedCSI-RS-Density 是否存在。 */
    BeamManagementSSB_CSI_RS_SupportedCSI_RS_Density supportedCSI_RS_Density; /**< ASN.1 supportedCSI-RS-Density；枚举；OPTIONAL。 */
    BeamManagementSSB_CSI_RS_MaxNumberAperiodicCSI_RS_Resource maxNumberAperiodicCSI_RS_Resource; /**< ASN.1 maxNumberAperiodicCSI-RS-Resource；枚举。 */
};


/**
 * @brief CSI_RS_ForTracking
 * @note ASN.1：CSI-RS-ForTracking；源文件第 18443 行。
 * @note CSI-RS-ForTracking ::= SEQUENCE { maxBurstLength, maxSimultaneousResourceSetsPerCC, maxConfiguredRes...
 */
struct CSI_RS_ForTracking {
    int64_t maxBurstLength; /**< ASN.1 maxBurstLength；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxSimultaneousResourceSetsPerCC; /**< ASN.1 maxSimultaneousResourceSetsPerCC；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxConfiguredResourceSetsPerCC; /**< ASN.1 maxConfiguredResourceSetsPerCC；INTEGER (1..64)，位宽 6 bit。 */
    int64_t maxConfiguredResourceSetsAllCC; /**< ASN.1 maxConfiguredResourceSetsAllCC；INTEGER (1..256)，位宽 8 bit。 */
};


/**
 * @brief CSI_RS_IM_ReceptionForFeedback
 * @note ASN.1：CSI-RS-IM-ReceptionForFeedback；源文件第 18450 行。
 * @note CSI-RS-IM-ReceptionForFeedback ::= SEQUENCE { maxConfigNumberNZP-CSI-RS-PerCC, maxConfigNumberPortsAcrossNZP-CSI...
 */
struct CSI_RS_IM_ReceptionForFeedback {
    int64_t maxConfigNumberNZP_CSI_RS_PerCC; /**< ASN.1 maxConfigNumberNZP-CSI-RS-PerCC；INTEGER (1..64)，位宽 6 bit。 */
    int64_t maxConfigNumberPortsAcrossNZP_CSI_RS_PerCC; /**< ASN.1 maxConfigNumberPortsAcrossNZP-CSI-RS-PerCC；INTEGER (2..256)，位宽 8 bit。 */
    CSI_RS_IM_ReceptionForFeedback_MaxConfigNumberCSI_IM_PerCC maxConfigNumberCSI_IM_PerCC; /**< ASN.1 maxConfigNumberCSI-IM-PerCC；枚举。 */
    int64_t maxNumberSimultaneousNZP_CSI_RS_PerCC; /**< ASN.1 maxNumberSimultaneousNZP-CSI-RS-PerCC；INTEGER (1..64)，位宽 6 bit。 */
    int64_t totalNumberPortsSimultaneousNZP_CSI_RS_PerCC; /**< ASN.1 totalNumberPortsSimultaneousNZP-CSI-RS-PerCC；INTEGER (2..256)，位宽 8 bit。 */
};


/**
 * @brief CSI_RS_ProcFrameworkForSRS
 * @note ASN.1：CSI-RS-ProcFrameworkForSRS；源文件第 18458 行。
 * @note CSI-RS-ProcFrameworkForSRS ::= SEQUENCE { maxNumberPeriodicSRS-AssocCSI-RS-PerBWP, maxNumberAperiodicSRS-Ass...
 */
struct CSI_RS_ProcFrameworkForSRS {
    int64_t maxNumberPeriodicSRS_AssocCSI_RS_PerBWP; /**< ASN.1 maxNumberPeriodicSRS-AssocCSI-RS-PerBWP；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberAperiodicSRS_AssocCSI_RS_PerBWP; /**< ASN.1 maxNumberAperiodicSRS-AssocCSI-RS-PerBWP；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberSP_SRS_AssocCSI_RS_PerBWP; /**< ASN.1 maxNumberSP-SRS-AssocCSI-RS-PerBWP；INTEGER (0..4)，位宽 3 bit。 */
    int64_t simultaneousSRS_AssocCSI_RS_PerCC; /**< ASN.1 simultaneousSRS-AssocCSI-RS-PerCC；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief CSI_ReportFramework
 * @note ASN.1：CSI-ReportFramework；源文件第 18465 行。
 * @note CSI-ReportFramework ::= SEQUENCE { maxNumberPeriodicCSI-PerBWP-ForCSI-Report, maxNumberAperiodicCSI-P...
 */
struct CSI_ReportFramework {
    int64_t maxNumberPeriodicCSI_PerBWP_ForCSI_Report; /**< ASN.1 maxNumberPeriodicCSI-PerBWP-ForCSI-Report；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberAperiodicCSI_PerBWP_ForCSI_Report; /**< ASN.1 maxNumberAperiodicCSI-PerBWP-ForCSI-Report；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report; /**< ASN.1 maxNumberSemiPersistentCSI-PerBWP-ForCSI-Report；INTEGER (0..4)，位宽 3 bit。 */
    int64_t maxNumberPeriodicCSI_PerBWP_ForBeamReport; /**< ASN.1 maxNumberPeriodicCSI-PerBWP-ForBeamReport；INTEGER (1..4)，位宽 2 bit。 */
    int64_t maxNumberAperiodicCSI_PerBWP_ForBeamReport; /**< ASN.1 maxNumberAperiodicCSI-PerBWP-ForBeamReport；INTEGER (1..4)，位宽 2 bit。 */
    CSI_ReportFramework_MaxNumberAperiodicCSI_triggeringStatePerCC maxNumberAperiodicCSI_triggeringStatePerCC; /**< ASN.1 maxNumberAperiodicCSI-triggeringStatePerCC；枚举。 */
    int64_t maxNumberSemiPersistentCSI_PerBWP_ForBeamReport; /**< ASN.1 maxNumberSemiPersistentCSI-PerBWP-ForBeamReport；INTEGER (0..4)，位宽 3 bit。 */
    int64_t simultaneousCSI_ReportsPerCC; /**< ASN.1 simultaneousCSI-ReportsPerCC；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief SpatialRelations
 * @note ASN.1：SpatialRelations；源文件第 18501 行。
 * @note SpatialRelations ::= SEQUENCE { maxNumberConfiguredSpatialRelations, maxNumberActiveSpatialRelatio...
 */
struct SpatialRelations {
    SpatialRelations_MaxNumberConfiguredSpatialRelations maxNumberConfiguredSpatialRelations; /**< ASN.1 maxNumberConfiguredSpatialRelations；枚举。 */
    SpatialRelations_MaxNumberActiveSpatialRelations maxNumberActiveSpatialRelations; /**< ASN.1 maxNumberActiveSpatialRelations；枚举。 */
    bool has_additionalActiveSpatialRelationPUCCH; /**< additionalActiveSpatialRelationPUCCH 是否存在。 */
    SpatialRelations_AdditionalActiveSpatialRelationPUCCH additionalActiveSpatialRelationPUCCH; /**< ASN.1 additionalActiveSpatialRelationPUCCH；枚举；OPTIONAL。 */
    SpatialRelations_MaxNumberDL_RS_QCL_TypeD maxNumberDL_RS_QCL_TypeD; /**< ASN.1 maxNumberDL-RS-QCL-TypeD；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming
 * @note ASN.1：beamSwitchTiming；源文件第 17887 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_60kHz scs_60kHz; /**< ASN.1 scs-60kHz；枚举；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming_Scs_120kHz scs_120kHz; /**< ASN.1 scs-120kHz；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup1
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup1；源文件第 17884 行。
 */
struct MIMO_ParametersPerBand_ExtGroup1 {
    bool has_dummy6; /**< dummy6 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup1_Dummy6 dummy6; /**< ASN.1 dummy6；枚举；OPTIONAL。 */
    bool has_beamManagementSSB_CSI_RS; /**< beamManagementSSB-CSI-RS 是否存在。 */
    BeamManagementSSB_CSI_RS beamManagementSSB_CSI_RS; /**< ASN.1 beamManagementSSB-CSI-RS；结构体；OPTIONAL。 */
    bool has_beamSwitchTiming; /**< beamSwitchTiming 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup1_BeamSwitchTiming beamSwitchTiming; /**< ASN.1 beamSwitchTiming；结构体；OPTIONAL。 */
    bool has_codebookParameters; /**< codebookParameters 是否存在。 */
    CodebookParameters codebookParameters; /**< ASN.1 codebookParameters；结构体；OPTIONAL。 */
    bool has_csi_RS_IM_ReceptionForFeedback; /**< csi-RS-IM-ReceptionForFeedback 是否存在。 */
    CSI_RS_IM_ReceptionForFeedback csi_RS_IM_ReceptionForFeedback; /**< ASN.1 csi-RS-IM-ReceptionForFeedback；结构体；OPTIONAL。 */
    bool has_csi_RS_ProcFrameworkForSRS; /**< csi-RS-ProcFrameworkForSRS 是否存在。 */
    CSI_RS_ProcFrameworkForSRS csi_RS_ProcFrameworkForSRS; /**< ASN.1 csi-RS-ProcFrameworkForSRS；结构体；OPTIONAL。 */
    bool has_csi_ReportFramework; /**< csi-ReportFramework 是否存在。 */
    CSI_ReportFramework csi_ReportFramework; /**< ASN.1 csi-ReportFramework；结构体；OPTIONAL。 */
    bool has_csi_RS_ForTracking; /**< csi-RS-ForTracking 是否存在。 */
    CSI_RS_ForTracking csi_RS_ForTracking; /**< ASN.1 csi-RS-ForTracking；结构体；OPTIONAL。 */
    bool has_srs_AssocCSI_RS; /**< srs-AssocCSI-RS 是否存在。 */
    SupportedCSI_RS_Resource* srs_AssocCSI_RS_items; /**< ASN.1 srs-AssocCSI-RS；SEQUENCE OF SupportedCSI_RS_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_AssocCSI_RS_count; /**< srs-AssocCSI-RS 元素个数。 */
    bool has_spatialRelations; /**< spatialRelations 是否存在。 */
    SpatialRelations spatialRelations; /**< ASN.1 spatialRelations；结构体；OPTIONAL。 */
};


/**
 * @brief CSI_ReportFrameworkExt_r16
 * @note ASN.1：CSI-ReportFrameworkExt-r16；源文件第 18476 行。
 * @note CSI-ReportFrameworkExt-r16 ::= SEQUENCE { maxNumberAperiodicCSI-PerBWP-ForCSI-ReportExt-r16 }
 */
struct CSI_ReportFrameworkExt_r16 {
    int64_t maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16; /**< ASN.1 maxNumberAperiodicCSI-PerBWP-ForCSI-ReportExt-r16；INTEGER (5..8)，位宽 2 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16
 * @note ASN.1：ssb-csirs-SINR-measurement-r16；源文件第 17912 行。
 * @note SEQUENCE { maxNumberSSB-CSIRS-OneTx-CMR-r16, maxNumberCSI-IM-NZP-IMR-res-r16,...
 */
struct MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16 {
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_OneTx_CMR_r16 maxNumberSSB_CSIRS_OneTx_CMR_r16; /**< ASN.1 maxNumberSSB-CSIRS-OneTx-CMR-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_r16 maxNumberCSI_IM_NZP_IMR_res_r16; /**< ASN.1 maxNumberCSI-IM-NZP-IMR-res-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSIRS_2Tx_res_r16 maxNumberCSIRS_2Tx_res_r16; /**< ASN.1 maxNumberCSIRS-2Tx-res-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberSSB_CSIRS_res_r16 maxNumberSSB_CSIRS_res_r16; /**< ASN.1 maxNumberSSB-CSIRS-res-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberCSI_IM_NZP_IMR_res_mem_r16 maxNumberCSI_IM_NZP_IMR_res_mem_r16; /**< ASN.1 maxNumberCSI-IM-NZP-IMR-res-mem-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedCSI_RS_Density_CMR_r16 supportedCSI_RS_Density_CMR_r16; /**< ASN.1 supportedCSI-RS-Density-CMR-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_MaxNumberAperiodicCSI_RS_Res_r16 maxNumberAperiodicCSI_RS_Res_r16; /**< ASN.1 maxNumberAperiodicCSI-RS-Res-r16；枚举。 */
    bool has_supportedSINR_meas_r16; /**< supportedSINR-meas-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16_SupportedSINR_meas_r16 supportedSINR_meas_r16; /**< ASN.1 supportedSINR-meas-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16
 * @note ASN.1：multiDCI-multiTRP-Parameters-r16/outOfOrderOperationDL-r16；源文件第 17933 行。
 * @note SEQUENCE { supportPDCCH-ToPDSCH-r16, supportPDSCH-ToHARQ-ACK-r16 }
 */
struct MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16 {
    bool has_supportPDCCH_ToPDSCH_r16; /**< supportPDCCH-ToPDSCH-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDCCH_ToPDSCH_r16 supportPDCCH_ToPDSCH_r16; /**< ASN.1 supportPDCCH-ToPDSCH-r16；枚举；OPTIONAL。 */
    bool has_supportPDSCH_ToHARQ_ACK_r16; /**< supportPDSCH-ToHARQ-ACK-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16_SupportPDSCH_ToHARQ_ACK_r16 supportPDSCH_ToHARQ_ACK_r16; /**< ASN.1 supportPDSCH-ToHARQ-ACK-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16
 * @note ASN.1：multiDCI-multiTRP-Parameters-r16/maxNumberActivatedTCI-States-r16；源文件第 17944 行。
 * @note SEQUENCE { maxNumberPerCORESET-Pool-r16, maxTotalNumberAcrossCORESET-Pool-r16 }
 */
struct MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16 {
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_c1d091ea maxNumberPerCORESET_Pool_r16; /**< ASN.1 maxNumberPerCORESET-Pool-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16_M_df654597 maxTotalNumberAcrossCORESET_Pool_r16; /**< ASN.1 maxTotalNumberAcrossCORESET-Pool-r16；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16
 * @note ASN.1：multiDCI-multiTRP-Parameters-r16；源文件第 17927 行。
 * @note SEQUENCE { overlapPDSCHsFullyFreqTime-r16, overlapPDSCHsInTimePartiallyFreq-r...
 */
struct MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16 {
    bool has_overlapPDSCHsFullyFreqTime_r16; /**< overlapPDSCHsFullyFreqTime-r16 是否存在。 */
    int64_t overlapPDSCHsFullyFreqTime_r16; /**< ASN.1 overlapPDSCHsFullyFreqTime-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_overlapPDSCHsInTimePartiallyFreq_r16; /**< overlapPDSCHsInTimePartiallyFreq-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OverlapPDSCHsInTimePartiallyFreq_r16 overlapPDSCHsInTimePartiallyFreq_r16; /**< ASN.1 overlapPDSCHsInTimePartiallyFreq-r16；枚举；OPTIONAL。 */
    bool has_outOfOrderOperationDL_r16; /**< outOfOrderOperationDL-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationDL_r16 outOfOrderOperationDL_r16; /**< ASN.1 outOfOrderOperationDL-r16；结构体；OPTIONAL。 */
    bool has_outOfOrderOperationUL_r16; /**< outOfOrderOperationUL-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_OutOfOrderOperationUL_r16 outOfOrderOperationUL_r16; /**< ASN.1 outOfOrderOperationUL-r16；枚举；OPTIONAL。 */
    bool has_separateCRS_RateMatching_r16; /**< separateCRS-RateMatching-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_SeparateCRS_RateMatching_r16 separateCRS_RateMatching_r16; /**< ASN.1 separateCRS-RateMatching-r16；枚举；OPTIONAL。 */
    bool has_defaultQCL_PerCORESETPoolIndex_r16; /**< defaultQCL-PerCORESETPoolIndex-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_DefaultQCL_PerCORESETPoolIndex_r16 defaultQCL_PerCORESETPoolIndex_r16; /**< ASN.1 defaultQCL-PerCORESETPoolIndex-r16；枚举；OPTIONAL。 */
    bool has_maxNumberActivatedTCI_States_r16; /**< maxNumberActivatedTCI-States-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16_MaxNumberActivatedTCI_States_r16 maxNumberActivatedTCI_States_r16; /**< ASN.1 maxNumberActivatedTCI-States-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16
 * @note ASN.1：singleDCI-SDM-scheme-Parameters-r16；源文件第 17949 行。
 * @note SEQUENCE { supportNewDMRS-Port-r16, supportTwoPortDL-PTRS-r16 }
 */
struct MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16 {
    bool has_supportNewDMRS_Port_r16; /**< supportNewDMRS-Port-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportNewDMRS_Port_r16 supportNewDMRS_Port_r16; /**< ASN.1 supportNewDMRS-Port-r16；枚举；OPTIONAL。 */
    bool has_supportTwoPortDL_PTRS_r16; /**< supportTwoPortDL-PTRS-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16_SupportTwoPortDL_PTRS_r16 supportTwoPortDL_PTRS_r16; /**< ASN.1 supportTwoPortDL-PTRS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16
 * @note ASN.1：supportInter-slotTDM-r16；源文件第 17962 行。
 * @note SEQUENCE { supportRepNumPDSCH-TDRA-r16, maxTBS-Size-r16, maxNumberTCI-states-...
 */
struct MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16 {
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_SupportRepNumPDSCH_TDRA_r16 supportRepNumPDSCH_TDRA_r16; /**< ASN.1 supportRepNumPDSCH-TDRA-r16；枚举。 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16_MaxTBS_Size_r16 maxTBS_Size_r16; /**< ASN.1 maxTBS-Size-r16；枚举。 */
    int64_t maxNumberTCI_states_r16; /**< ASN.1 maxNumberTCI-states-r16；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16
 * @note ASN.1：beamSwitchTiming-r16；源文件第 17985 行。
 * @note SEQUENCE { scs-60kHz-r16, scs-120kHz-r16 }
 */
struct MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16 {
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_60kHz_r16 scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16_Scs_120kHz_r16 scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup2
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup2；源文件第 17899 行。
 */
struct MIMO_ParametersPerBand_ExtGroup2 {
    bool has_defaultQCL_TwoTCI_r16; /**< defaultQCL-TwoTCI-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_DefaultQCL_TwoTCI_r16 defaultQCL_TwoTCI_r16; /**< ASN.1 defaultQCL-TwoTCI-r16；枚举；OPTIONAL。 */
    bool has_codebookParametersPerBand_r16; /**< codebookParametersPerBand-r16 是否存在。 */
    CodebookParameters_v1610 codebookParametersPerBand_r16; /**< ASN.1 codebookParametersPerBand-r16；结构体；OPTIONAL。 */
    bool has_simul_SpatialRelationUpdatePUCCHResGroup_r16; /**< simul-SpatialRelationUpdatePUCCHResGroup-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_Simul_SpatialRelationUpdatePUCCHResGroup_r16 simul_SpatialRelationUpdatePUCCHResGroup_r16; /**< ASN.1 simul-SpatialRelationUpdatePUCCHResGroup-r16；枚举；OPTIONAL。 */
    bool has_maxNumberSCellBFR_r16; /**< maxNumberSCellBFR-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MaxNumberSCellBFR_r16 maxNumberSCellBFR_r16; /**< ASN.1 maxNumberSCellBFR-r16；枚举；OPTIONAL。 */
    bool has_simultaneousReceptionDiffTypeD_r16; /**< simultaneousReceptionDiffTypeD-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SimultaneousReceptionDiffTypeD_r16 simultaneousReceptionDiffTypeD_r16; /**< ASN.1 simultaneousReceptionDiffTypeD-r16；枚举；OPTIONAL。 */
    bool has_ssb_csirs_SINR_measurement_r16; /**< ssb-csirs-SINR-measurement-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_Ssb_csirs_SINR_measurement_r16 ssb_csirs_SINR_measurement_r16; /**< ASN.1 ssb-csirs-SINR-measurement-r16；结构体；OPTIONAL。 */
    bool has_nonGroupSINR_reporting_r16; /**< nonGroupSINR-reporting-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_NonGroupSINR_reporting_r16 nonGroupSINR_reporting_r16; /**< ASN.1 nonGroupSINR-reporting-r16；枚举；OPTIONAL。 */
    bool has_groupSINR_reporting_r16; /**< groupSINR-reporting-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_GroupSINR_reporting_r16 groupSINR_reporting_r16; /**< ASN.1 groupSINR-reporting-r16；枚举；OPTIONAL。 */
    bool has_multiDCI_multiTRP_Parameters_r16; /**< multiDCI-multiTRP-Parameters-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_MultiDCI_multiTRP_Parameters_r16 multiDCI_multiTRP_Parameters_r16; /**< ASN.1 multiDCI-multiTRP-Parameters-r16；结构体；OPTIONAL。 */
    bool has_singleDCI_SDM_scheme_Parameters_r16; /**< singleDCI-SDM-scheme-Parameters-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SingleDCI_SDM_scheme_Parameters_r16 singleDCI_SDM_scheme_Parameters_r16; /**< ASN.1 singleDCI-SDM-scheme-Parameters-r16；结构体；OPTIONAL。 */
    bool has_supportFDM_SchemeA_r16; /**< supportFDM-SchemeA-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SupportFDM_SchemeA_r16 supportFDM_SchemeA_r16; /**< ASN.1 supportFDM-SchemeA-r16；枚举；OPTIONAL。 */
    bool has_supportCodeWordSoftCombining_r16; /**< supportCodeWordSoftCombining-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SupportCodeWordSoftCombining_r16 supportCodeWordSoftCombining_r16; /**< ASN.1 supportCodeWordSoftCombining-r16；枚举；OPTIONAL。 */
    bool has_supportTDM_SchemeA_r16; /**< supportTDM-SchemeA-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SupportTDM_SchemeA_r16 supportTDM_SchemeA_r16; /**< ASN.1 supportTDM-SchemeA-r16；枚举；OPTIONAL。 */
    bool has_supportInter_slotTDM_r16; /**< supportInter-slotTDM-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_SupportInter_slotTDM_r16 supportInter_slotTDM_r16; /**< ASN.1 supportInter-slotTDM-r16；结构体；OPTIONAL。 */
    bool has_lowPAPR_DMRS_PDSCH_r16; /**< lowPAPR-DMRS-PDSCH-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PDSCH_r16 lowPAPR_DMRS_PDSCH_r16; /**< ASN.1 lowPAPR-DMRS-PDSCH-r16；枚举；OPTIONAL。 */
    bool has_lowPAPR_DMRS_PUSCHwithoutPrecoding_r16; /**< lowPAPR-DMRS-PUSCHwithoutPrecoding-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithoutPrecoding_r16 lowPAPR_DMRS_PUSCHwithoutPrecoding_r16; /**< ASN.1 lowPAPR-DMRS-PUSCHwithoutPrecoding-r16；枚举；OPTIONAL。 */
    bool has_lowPAPR_DMRS_PUCCH_r16; /**< lowPAPR-DMRS-PUCCH-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUCCH_r16 lowPAPR_DMRS_PUCCH_r16; /**< ASN.1 lowPAPR-DMRS-PUCCH-r16；枚举；OPTIONAL。 */
    bool has_lowPAPR_DMRS_PUSCHwithPrecoding_r16; /**< lowPAPR-DMRS-PUSCHwithPrecoding-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_LowPAPR_DMRS_PUSCHwithPrecoding_r16 lowPAPR_DMRS_PUSCHwithPrecoding_r16; /**< ASN.1 lowPAPR-DMRS-PUSCHwithPrecoding-r16；枚举；OPTIONAL。 */
    bool has_csi_ReportFrameworkExt_r16; /**< csi-ReportFrameworkExt-r16 是否存在。 */
    CSI_ReportFrameworkExt_r16 csi_ReportFrameworkExt_r16; /**< ASN.1 csi-ReportFrameworkExt-r16；结构体；OPTIONAL。 */
    bool has_codebookParametersAddition_r16; /**< codebookParametersAddition-r16 是否存在。 */
    CodebookParametersAddition_r16 codebookParametersAddition_r16; /**< ASN.1 codebookParametersAddition-r16；结构体；OPTIONAL。 */
    bool has_codebookComboParametersAddition_r16; /**< codebookComboParametersAddition-r16 是否存在。 */
    CodebookComboParametersAddition_r16 codebookComboParametersAddition_r16; /**< ASN.1 codebookComboParametersAddition-r16；结构体；OPTIONAL。 */
    bool has_beamCorrespondenceSSB_based_r16; /**< beamCorrespondenceSSB-based-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceSSB_based_r16 beamCorrespondenceSSB_based_r16; /**< ASN.1 beamCorrespondenceSSB-based-r16；枚举；OPTIONAL。 */
    bool has_beamCorrespondenceCSI_RS_based_r16; /**< beamCorrespondenceCSI-RS-based-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_BeamCorrespondenceCSI_RS_based_r16 beamCorrespondenceCSI_RS_based_r16; /**< ASN.1 beamCorrespondenceCSI-RS-based-r16；枚举；OPTIONAL。 */
    bool has_beamSwitchTiming_r16; /**< beamSwitchTiming-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup2_BeamSwitchTiming_r16 beamSwitchTiming_r16; /**< ASN.1 beamSwitchTiming-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16
 * @note ASN.1：semi-PersistentL1-SINR-Report-PUCCH-r16；源文件第 17992 行。
 * @note SEQUENCE { supportReportFormat1-2OFDM-syms-r16, supportReportFormat4-14OFDM-s...
 */
struct MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16 {
    bool has_supportReportFormat1_2OFDM_syms_r16; /**< supportReportFormat1-2OFDM-syms-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat1_2OFDM_syms_r16 supportReportFormat1_2OFDM_syms_r16; /**< ASN.1 supportReportFormat1-2OFDM-syms-r16；枚举；OPTIONAL。 */
    bool has_supportReportFormat4_14OFDM_syms_r16; /**< supportReportFormat4-14OFDM-syms-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16_SupportReportFormat4_14OFDM_syms_r16 supportReportFormat4_14OFDM_syms_r16; /**< ASN.1 supportReportFormat4-14OFDM-syms-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup3
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup3；源文件第 17990 行。
 */
struct MIMO_ParametersPerBand_ExtGroup3 {
    bool has_semi_PersistentL1_SINR_Report_PUCCH_r16; /**< semi-PersistentL1-SINR-Report-PUCCH-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUCCH_r16 semi_PersistentL1_SINR_Report_PUCCH_r16; /**< ASN.1 semi-PersistentL1-SINR-Report-PUCCH-r16；结构体；OPTIONAL。 */
    bool has_semi_PersistentL1_SINR_Report_PUSCH_r16; /**< semi-PersistentL1-SINR-Report-PUSCH-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup3_Semi_PersistentL1_SINR_Report_PUSCH_r16 semi_PersistentL1_SINR_Report_PUSCH_r16; /**< ASN.1 semi-PersistentL1-SINR-Report-PUSCH-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640
 * @note ASN.1：spatialRelations-v1640；源文件第 18001 行。
 * @note SEQUENCE { maxNumberConfiguredSpatialRelations-v1640 }
 */
struct MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640 {
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640_MaxNumberConfiguredSpatialRelations_v1640 maxNumberConfiguredSpatialRelations_v1640; /**< ASN.1 maxNumberConfiguredSpatialRelations-v1640；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup4
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup4；源文件第 17999 行。
 */
struct MIMO_ParametersPerBand_ExtGroup4 {
    bool has_spatialRelations_v1640; /**< spatialRelations-v1640 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup4_SpatialRelations_v1640 spatialRelations_v1640; /**< ASN.1 spatialRelations-v1640；结构体；OPTIONAL。 */
    bool has_support64CandidateBeamRS_BFR_r16; /**< support64CandidateBeamRS-BFR-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup4_Support64CandidateBeamRS_BFR_r16 support64CandidateBeamRS_BFR_r16; /**< ASN.1 support64CandidateBeamRS-BFR-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup5
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup5；源文件第 18007 行。
 */
struct MIMO_ParametersPerBand_ExtGroup5 {
    bool has_maxMIMO_LayersForMulti_DCI_mTRP_r16; /**< maxMIMO-LayersForMulti-DCI-mTRP-r16 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup5_MaxMIMO_LayersForMulti_DCI_mTRP_r16 maxMIMO_LayersForMulti_DCI_mTRP_r16; /**< ASN.1 maxMIMO-LayersForMulti-DCI-mTRP-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup6
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup6；源文件第 18011 行。
 */
struct MIMO_ParametersPerBand_ExtGroup6 {
    bool has_supportedSINR_meas_v1670; /**< supportedSINR-meas-v1670 是否存在。 */
    BitString supportedSINR_meas_v1670; /**< ASN.1 supportedSINR-meas-v1670；SIZE (4)，定长；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17
 * @note ASN.1：mTRP-BFR-twoBFD-RS-Set-r17；源文件第 18034 行。
 * @note SEQUENCE { maxBFD-RS-resourcesPerSetPerBWP-r17, maxBFR-r17, maxBFD-RS-resourc...
 */
struct MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17 {
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesPerSetPerBWP_r17 maxBFD_RS_resourcesPerSetPerBWP_r17; /**< ASN.1 maxBFD-RS-resourcesPerSetPerBWP-r17；枚举。 */
    int64_t maxBFR_r17; /**< ASN.1 maxBFR-r17；INTEGER (1..9)，位宽 4 bit。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17_MaxBFD_RS_resourcesAcrossSetsPerBWP_r17 maxBFD_RS_resourcesAcrossSetsPerBWP_r17; /**< ASN.1 maxBFD-RS-resourcesAcrossSetsPerBWP-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17
 * @note ASN.1：unifiedJointTCI-r17；源文件第 18056 行。
 * @note SEQUENCE { maxConfiguredJointTCI-r17, maxActivatedTCIAcrossCC-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxConfiguredJointTCI_r17 maxConfiguredJointTCI_r17; /**< ASN.1 maxConfiguredJointTCI-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17_MaxActivatedTCIAcrossCC_r17 maxActivatedTCIAcrossCC_r17; /**< ASN.1 maxActivatedTCIAcrossCC-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17
 * @note ASN.1：unifiedJointTCI-multiMAC-CE-r17；源文件第 18061 行。
 * @note SEQUENCE { minBeamApplicationTime-r17, maxNumMAC-CE-PerCC }
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17 {
    bool has_minBeamApplicationTime_r17; /**< minBeamApplicationTime-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17 minBeamApplicationTime_r17; /**< ASN.1 minBeamApplicationTime-r17；枚举；OPTIONAL。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17_MaxNumMAC_CE_PerCC maxNumMAC_CE_PerCC; /**< ASN.1 maxNumMAC-CE-PerCC；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17
 * @note ASN.1：unifiedJointTCI-InterCell-r17；源文件第 18085 行。
 * @note SEQUENCE { additionalMAC-CE-PerCC-r17, additionalMAC-CE-AcrossCC-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_PerCC_r17 additionalMAC_CE_PerCC_r17; /**< ASN.1 additionalMAC-CE-PerCC-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17_AdditionalMAC_CE_AcrossCC_r17 additionalMAC_CE_AcrossCC_r17; /**< ASN.1 additionalMAC-CE-AcrossCC-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17
 * @note ASN.1：unifiedSeparateTCI-r17；源文件第 18090 行。
 * @note SEQUENCE { maxConfiguredDL-TCI-r17, maxConfiguredUL-TCI-r17, maxActivatedDL-T...
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredDL_TCI_r17 maxConfiguredDL_TCI_r17; /**< ASN.1 maxConfiguredDL-TCI-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxConfiguredUL_TCI_r17 maxConfiguredUL_TCI_r17; /**< ASN.1 maxConfiguredUL-TCI-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedDL_TCIAcrossCC_r17 maxActivatedDL_TCIAcrossCC_r17; /**< ASN.1 maxActivatedDL-TCIAcrossCC-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17_MaxActivatedUL_TCIAcrossCC_r17 maxActivatedUL_TCIAcrossCC_r17; /**< ASN.1 maxActivatedUL-TCIAcrossCC-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17
 * @note ASN.1：unifiedSeparateTCI-multiMAC-CE-r17；源文件第 18097 行。
 * @note SEQUENCE { minBeamApplicationTime-r17, maxActivatedDL-TCIPerCC-r17, maxActiva...
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17_MinBeamApplicationTime_r17 minBeamApplicationTime_r17; /**< ASN.1 minBeamApplicationTime-r17；枚举。 */
    int64_t maxActivatedDL_TCIPerCC_r17; /**< ASN.1 maxActivatedDL-TCIPerCC-r17；INTEGER (2..8)，位宽 3 bit。 */
    int64_t maxActivatedUL_TCIPerCC_r17; /**< ASN.1 maxActivatedUL-TCIPerCC-r17；INTEGER (2..8)，位宽 3 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17
 * @note ASN.1：unifiedSeparateTCI-ListSharingCA-r17；源文件第 18105 行。
 * @note SEQUENCE { maxNumListDL-TCI-r17, maxNumListUL-TCI-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17 {
    bool has_maxNumListDL_TCI_r17; /**< maxNumListDL-TCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListDL_TCI_r17 maxNumListDL_TCI_r17; /**< ASN.1 maxNumListDL-TCI-r17；枚举；OPTIONAL。 */
    bool has_maxNumListUL_TCI_r17; /**< maxNumListUL-TCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17_MaxNumListUL_TCI_r17 maxNumListUL_TCI_r17; /**< ASN.1 maxNumListUL-TCI-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17
 * @note ASN.1：unifiedSeparateTCI-InterCell-r17；源文件第 18112 行。
 * @note SEQUENCE { k-DL-PerCC-r17, k-UL-PerCC-r17, k-DL-AcrossCC-r17, k-UL-AcrossCC-r...
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17 {
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_PerCC_r17 k_DL_PerCC_r17; /**< ASN.1 k-DL-PerCC-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_PerCC_r17 k_UL_PerCC_r17; /**< ASN.1 k-UL-PerCC-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_DL_AcrossCC_r17 k_DL_AcrossCC_r17; /**< ASN.1 k-DL-AcrossCC-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17_K_UL_AcrossCC_r17 k_UL_AcrossCC_r17; /**< ASN.1 k-UL-AcrossCC-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17
 * @note ASN.1：unifiedJointTCI-mTRP-InterCell-BM-r17；源文件第 18119 行。
 * @note SEQUENCE { maxNumAdditionalPCI-L1-RSRP-r17, maxNumSSB-ResourceL1-RSRP-AcrossC...
 */
struct MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17 {
    int64_t maxNumAdditionalPCI_L1_RSRP_r17; /**< ASN.1 maxNumAdditionalPCI-L1-RSRP-r17；INTEGER (1..7)，位宽 3 bit。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17_MaxNumSSB_ResourceL1_RSRP_AcrossCC_r17 maxNumSSB_ResourceL1_RSRP_AcrossCC_r17; /**< ASN.1 maxNumSSB-ResourceL1-RSRP-AcrossCC-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17
 * @note ASN.1：mpe-Mitigation-r17；源文件第 18124 行。
 * @note SEQUENCE { maxNumP-MPR-RI-pairs-r17, maxNumConfRS-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17 {
    int64_t maxNumP_MPR_RI_pairs_r17; /**< ASN.1 maxNumP-MPR-RI-pairs-r17；INTEGER (1..4)，位宽 2 bit。 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17_MaxNumConfRS_r17 maxNumConfRS_r17; /**< ASN.1 maxNumConfRS-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17
 * @note ASN.1：srs-PortReport-r17；源文件第 18129 行。
 * @note SEQUENCE { capVal1-r17, capVal2-r17, capVal3-r17, capVal4-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17 {
    bool has_capVal1_r17; /**< capVal1-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal1_r17 capVal1_r17; /**< ASN.1 capVal1-r17；枚举；OPTIONAL。 */
    bool has_capVal2_r17; /**< capVal2-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal2_r17 capVal2_r17; /**< ASN.1 capVal2-r17；枚举；OPTIONAL。 */
    bool has_capVal3_r17; /**< capVal3-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal3_r17 capVal3_r17; /**< ASN.1 capVal3-r17；枚举；OPTIONAL。 */
    bool has_capVal4_r17; /**< capVal4-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17_CapVal4_r17 capVal4_r17; /**< ASN.1 capVal4-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17
 * @note ASN.1：mTRP-PUSCH-CSI-RS-r17；源文件第 18142 行。
 * @note SEQUENCE { maxNumPeriodicSRS-r17, maxNumAperiodicSRS-r17, maxNumSP-SRS-r17, n...
 */
struct MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17 {
    int64_t maxNumPeriodicSRS_r17; /**< ASN.1 maxNumPeriodicSRS-r17；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumAperiodicSRS_r17; /**< ASN.1 maxNumAperiodicSRS-r17；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumSP_SRS_r17; /**< ASN.1 maxNumSP-SRS-r17；INTEGER (0..8)，位宽 4 bit。 */
    int64_t numSRS_ResourcePerCC_r17; /**< ASN.1 numSRS-ResourcePerCC-r17；INTEGER (1..16)，位宽 4 bit。 */
    int64_t numSRS_ResourceNonCodebook_r17; /**< ASN.1 numSRS-ResourceNonCodebook-r17；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17
 * @note ASN.1：mTRP-inter-Cell-r17；源文件第 18166 行。
 * @note SEQUENCE { maxNumAdditionalPCI-Case1-r17, maxNumAdditionalPCI-Case2-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17 {
    int64_t maxNumAdditionalPCI_Case1_r17; /**< ASN.1 maxNumAdditionalPCI-Case1-r17；INTEGER (1..7)，位宽 3 bit。 */
    int64_t maxNumAdditionalPCI_Case2_r17; /**< ASN.1 maxNumAdditionalPCI-Case2-r17；INTEGER (0..7)，位宽 3 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17
 * @note ASN.1：mTRP-GroupBasedL1-RSRP-r17；源文件第 18171 行。
 * @note SEQUENCE { maxNumBeamGroups-r17, maxNumRS-WithinSlot-r17, maxNumRS-AcrossSlot...
 */
struct MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17 {
    int64_t maxNumBeamGroups_r17; /**< ASN.1 maxNumBeamGroups-r17；INTEGER (1..4)，位宽 2 bit。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_WithinSlot_r17 maxNumRS_WithinSlot_r17; /**< ASN.1 maxNumRS-WithinSlot-r17；枚举。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17_MaxNumRS_AcrossSlot_r17 maxNumRS_AcrossSlot_r17; /**< ASN.1 maxNumRS-AcrossSlot-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17
 * @note ASN.1：mTRP-CSI-EnhancementPerBand-r17；源文件第 18179 行。
 * @note SEQUENCE { maxNumNZP-CSI-RS-r17, cSI-Report-mode-r17, supportedComboAcrossCCs...
 */
struct MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17 {
    int64_t maxNumNZP_CSI_RS_r17; /**< ASN.1 maxNumNZP-CSI-RS-r17；INTEGER (2..8)，位宽 3 bit。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CSI_Report_mode_r17 cSI_Report_mode_r17; /**< ASN.1 cSI-Report-mode-r17；枚举。 */
    CSI_MultiTRP_SupportedCombinations_r17* supportedComboAcrossCCs_r17_items; /**< ASN.1 supportedComboAcrossCCs-r17；SEQUENCE OF CSI_MultiTRP_SupportedCombinations_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t supportedComboAcrossCCs_r17_count; /**< supportedComboAcrossCCs-r17 元素个数。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17_CodebookModeNCJT_r17 codebookModeNCJT_r17; /**< ASN.1 codebookModeNCJT-r17；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710
 * @note ASN.1：beamSwitchTiming-v1710；源文件第 18196 行。
 * @note SEQUENCE { scs-480kHz, scs-960kHz }
 */
struct MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710 {
    bool has_scs_480kHz; /**< scs-480kHz 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_480kHz scs_480kHz; /**< ASN.1 scs-480kHz；枚举；OPTIONAL。 */
    bool has_scs_960kHz; /**< scs-960kHz 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710_Scs_960kHz scs_960kHz; /**< ASN.1 scs-960kHz；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17
 * @note ASN.1：beamSwitchTiming-r17；源文件第 18201 行。
 * @note SEQUENCE { scs-480kHz-r17, scs-960kHz-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17 {
    bool has_scs_480kHz_r17; /**< scs-480kHz-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_480kHz_r17 scs_480kHz_r17; /**< ASN.1 scs-480kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_960kHz_r17; /**< scs-960kHz-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17_Scs_960kHz_r17 scs_960kHz_r17; /**< ASN.1 scs-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710
 * @note ASN.1：beamReportTiming-v1710；源文件第 18206 行。
 * @note SEQUENCE { scs-480kHz-r17, scs-960kHz-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710 {
    bool has_scs_480kHz_r17; /**< scs-480kHz-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_480kHz_r17 scs_480kHz_r17; /**< ASN.1 scs-480kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_960kHz_r17; /**< scs-960kHz-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710_Scs_960kHz_r17 scs_960kHz_r17; /**< ASN.1 scs-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710
 * @note ASN.1：maxNumberRxTxBeamSwitchDL-v1710；源文件第 18211 行。
 * @note SEQUENCE { scs-480kHz-r17, scs-960kHz-r17 }
 */
struct MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710 {
    bool has_scs_480kHz_r17; /**< scs-480kHz-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_480kHz_r17 scs_480kHz_r17; /**< ASN.1 scs-480kHz-r17；枚举；OPTIONAL。 */
    bool has_scs_960kHz_r17; /**< scs-960kHz-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710_Scs_960kHz_r17 scs_960kHz_r17; /**< ASN.1 scs-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup7
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup7；源文件第 18014 行。
 */
struct MIMO_ParametersPerBand_ExtGroup7 {
    bool has_srs_increasedRepetition_r17; /**< srs-increasedRepetition-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_increasedRepetition_r17 srs_increasedRepetition_r17; /**< ASN.1 srs-increasedRepetition-r17；枚举；OPTIONAL。 */
    bool has_srs_partialFrequencySounding_r17; /**< srs-partialFrequencySounding-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_partialFrequencySounding_r17 srs_partialFrequencySounding_r17; /**< ASN.1 srs-partialFrequencySounding-r17；枚举；OPTIONAL。 */
    bool has_srs_startRB_locationHoppingPartial_r17; /**< srs-startRB-locationHoppingPartial-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_startRB_locationHoppingPartial_r17 srs_startRB_locationHoppingPartial_r17; /**< ASN.1 srs-startRB-locationHoppingPartial-r17；枚举；OPTIONAL。 */
    bool has_srs_combEight_r17; /**< srs-combEight-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_combEight_r17 srs_combEight_r17; /**< ASN.1 srs-combEight-r17；枚举；OPTIONAL。 */
    bool has_codebookParametersfetype2_r17; /**< codebookParametersfetype2-r17 是否存在。 */
    CodebookParametersfetype2_r17 codebookParametersfetype2_r17; /**< ASN.1 codebookParametersfetype2-r17；结构体；OPTIONAL。 */
    bool has_mTRP_PUSCH_twoCSI_RS_r17; /**< mTRP-PUSCH-twoCSI-RS-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoCSI_RS_r17 mTRP_PUSCH_twoCSI_RS_r17; /**< ASN.1 mTRP-PUSCH-twoCSI-RS-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUCCH_InterSlot_r17; /**< mTRP-PUCCH-InterSlot-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_InterSlot_r17 mTRP_PUCCH_InterSlot_r17; /**< ASN.1 mTRP-PUCCH-InterSlot-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUCCH_CyclicMapping_r17; /**< mTRP-PUCCH-CyclicMapping-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_CyclicMapping_r17 mTRP_PUCCH_CyclicMapping_r17; /**< ASN.1 mTRP-PUCCH-CyclicMapping-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUCCH_SecondTPC_r17; /**< mTRP-PUCCH-SecondTPC-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_SecondTPC_r17 mTRP_PUCCH_SecondTPC_r17; /**< ASN.1 mTRP-PUCCH-SecondTPC-r17；枚举；OPTIONAL。 */
    bool has_mTRP_BFR_twoBFD_RS_Set_r17; /**< mTRP-BFR-twoBFD-RS-Set-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_twoBFD_RS_Set_r17 mTRP_BFR_twoBFD_RS_Set_r17; /**< ASN.1 mTRP-BFR-twoBFD-RS-Set-r17；结构体；OPTIONAL。 */
    bool has_mTRP_BFR_PUCCH_SR_perCG_r17; /**< mTRP-BFR-PUCCH-SR-perCG-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_PUCCH_SR_perCG_r17 mTRP_BFR_PUCCH_SR_perCG_r17; /**< ASN.1 mTRP-BFR-PUCCH-SR-perCG-r17；枚举；OPTIONAL。 */
    bool has_mTRP_BFR_association_PUCCH_SR_r17; /**< mTRP-BFR-association-PUCCH-SR-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFR_association_PUCCH_SR_r17 mTRP_BFR_association_PUCCH_SR_r17; /**< ASN.1 mTRP-BFR-association-PUCCH-SR-r17；枚举；OPTIONAL。 */
    bool has_sfn_SimulTwoTCI_AcrossMultiCC_r17; /**< sfn-SimulTwoTCI-AcrossMultiCC-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Sfn_SimulTwoTCI_AcrossMultiCC_r17 sfn_SimulTwoTCI_AcrossMultiCC_r17; /**< ASN.1 sfn-SimulTwoTCI-AcrossMultiCC-r17；枚举；OPTIONAL。 */
    bool has_sfn_DefaultDL_BeamSetup_r17; /**< sfn-DefaultDL-BeamSetup-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultDL_BeamSetup_r17 sfn_DefaultDL_BeamSetup_r17; /**< ASN.1 sfn-DefaultDL-BeamSetup-r17；枚举；OPTIONAL。 */
    bool has_sfn_DefaultUL_BeamSetup_r17; /**< sfn-DefaultUL-BeamSetup-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Sfn_DefaultUL_BeamSetup_r17 sfn_DefaultUL_BeamSetup_r17; /**< ASN.1 sfn-DefaultUL-BeamSetup-r17；枚举；OPTIONAL。 */
    bool has_srs_TriggeringOffset_r17; /**< srs-TriggeringOffset-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringOffset_r17 srs_TriggeringOffset_r17; /**< ASN.1 srs-TriggeringOffset-r17；枚举；OPTIONAL。 */
    bool has_srs_TriggeringDCI_r17; /**< srs-TriggeringDCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_TriggeringDCI_r17 srs_TriggeringDCI_r17; /**< ASN.1 srs-TriggeringDCI-r17；枚举；OPTIONAL。 */
    bool has_codebookComboParameterMixedType_r17; /**< codebookComboParameterMixedType-r17 是否存在。 */
    CodebookComboParameterMixedType_r17 codebookComboParameterMixedType_r17; /**< ASN.1 codebookComboParameterMixedType-r17；结构体；OPTIONAL。 */
    bool has_unifiedJointTCI_r17; /**< unifiedJointTCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_r17 unifiedJointTCI_r17; /**< ASN.1 unifiedJointTCI-r17；结构体；OPTIONAL。 */
    bool has_unifiedJointTCI_multiMAC_CE_r17; /**< unifiedJointTCI-multiMAC-CE-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_multiMAC_CE_r17 unifiedJointTCI_multiMAC_CE_r17; /**< ASN.1 unifiedJointTCI-multiMAC-CE-r17；结构体；OPTIONAL。 */
    bool has_unifiedJointTCI_perBWP_CA_r17; /**< unifiedJointTCI-perBWP-CA-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_perBWP_CA_r17 unifiedJointTCI_perBWP_CA_r17; /**< ASN.1 unifiedJointTCI-perBWP-CA-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_ListSharingCA_r17; /**< unifiedJointTCI-ListSharingCA-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_ListSharingCA_r17 unifiedJointTCI_ListSharingCA_r17; /**< ASN.1 unifiedJointTCI-ListSharingCA-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_commonMultiCC_r17; /**< unifiedJointTCI-commonMultiCC-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_commonMultiCC_r17 unifiedJointTCI_commonMultiCC_r17; /**< ASN.1 unifiedJointTCI-commonMultiCC-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_BeamAlignDLRS_r17; /**< unifiedJointTCI-BeamAlignDLRS-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_BeamAlignDLRS_r17 unifiedJointTCI_BeamAlignDLRS_r17; /**< ASN.1 unifiedJointTCI-BeamAlignDLRS-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_PC_association_r17; /**< unifiedJointTCI-PC-association-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_PC_association_r17 unifiedJointTCI_PC_association_r17; /**< ASN.1 unifiedJointTCI-PC-association-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_Legacy_r17; /**< unifiedJointTCI-Legacy-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_r17 unifiedJointTCI_Legacy_r17; /**< ASN.1 unifiedJointTCI-Legacy-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_Legacy_SRS_r17; /**< unifiedJointTCI-Legacy-SRS-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_SRS_r17 unifiedJointTCI_Legacy_SRS_r17; /**< ASN.1 unifiedJointTCI-Legacy-SRS-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_Legacy_CORESET0_r17; /**< unifiedJointTCI-Legacy-CORESET0-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_Legacy_CORESET0_r17 unifiedJointTCI_Legacy_CORESET0_r17; /**< ASN.1 unifiedJointTCI-Legacy-CORESET0-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_SCellBFR_r17; /**< unifiedJointTCI-SCellBFR-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_SCellBFR_r17 unifiedJointTCI_SCellBFR_r17; /**< ASN.1 unifiedJointTCI-SCellBFR-r17；枚举；OPTIONAL。 */
    bool has_unifiedJointTCI_InterCell_r17; /**< unifiedJointTCI-InterCell-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_InterCell_r17 unifiedJointTCI_InterCell_r17; /**< ASN.1 unifiedJointTCI-InterCell-r17；结构体；OPTIONAL。 */
    bool has_unifiedSeparateTCI_r17; /**< unifiedSeparateTCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_r17 unifiedSeparateTCI_r17; /**< ASN.1 unifiedSeparateTCI-r17；结构体；OPTIONAL。 */
    bool has_unifiedSeparateTCI_multiMAC_CE_r17; /**< unifiedSeparateTCI-multiMAC-CE-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_multiMAC_CE_r17 unifiedSeparateTCI_multiMAC_CE_r17; /**< ASN.1 unifiedSeparateTCI-multiMAC-CE-r17；结构体；OPTIONAL。 */
    bool has_unifiedSeparateTCI_perBWP_CA_r17; /**< unifiedSeparateTCI-perBWP-CA-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_perBWP_CA_r17 unifiedSeparateTCI_perBWP_CA_r17; /**< ASN.1 unifiedSeparateTCI-perBWP-CA-r17；枚举；OPTIONAL。 */
    bool has_unifiedSeparateTCI_ListSharingCA_r17; /**< unifiedSeparateTCI-ListSharingCA-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_ListSharingCA_r17 unifiedSeparateTCI_ListSharingCA_r17; /**< ASN.1 unifiedSeparateTCI-ListSharingCA-r17；结构体；OPTIONAL。 */
    bool has_unifiedSeparateTCI_commonMultiCC_r17; /**< unifiedSeparateTCI-commonMultiCC-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_commonMultiCC_r17 unifiedSeparateTCI_commonMultiCC_r17; /**< ASN.1 unifiedSeparateTCI-commonMultiCC-r17；枚举；OPTIONAL。 */
    bool has_unifiedSeparateTCI_InterCell_r17; /**< unifiedSeparateTCI-InterCell-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedSeparateTCI_InterCell_r17 unifiedSeparateTCI_InterCell_r17; /**< ASN.1 unifiedSeparateTCI-InterCell-r17；结构体；OPTIONAL。 */
    bool has_unifiedJointTCI_mTRP_InterCell_BM_r17; /**< unifiedJointTCI-mTRP-InterCell-BM-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_UnifiedJointTCI_mTRP_InterCell_BM_r17 unifiedJointTCI_mTRP_InterCell_BM_r17; /**< ASN.1 unifiedJointTCI-mTRP-InterCell-BM-r17；结构体；OPTIONAL。 */
    bool has_mpe_Mitigation_r17; /**< mpe-Mitigation-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Mpe_Mitigation_r17 mpe_Mitigation_r17; /**< ASN.1 mpe-Mitigation-r17；结构体；OPTIONAL。 */
    bool has_srs_PortReport_r17; /**< srs-PortReport-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_PortReport_r17 srs_PortReport_r17; /**< ASN.1 srs-PortReport-r17；结构体；OPTIONAL。 */
    bool has_mTRP_PDCCH_individual_r17; /**< mTRP-PDCCH-individual-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_individual_r17 mTRP_PDCCH_individual_r17; /**< ASN.1 mTRP-PDCCH-individual-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PDCCH_anySpan_3Symbols_r17; /**< mTRP-PDCCH-anySpan-3Symbols-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_anySpan_3Symbols_r17 mTRP_PDCCH_anySpan_3Symbols_r17; /**< ASN.1 mTRP-PDCCH-anySpan-3Symbols-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PDCCH_TwoQCL_TypeD_r17; /**< mTRP-PDCCH-TwoQCL-TypeD-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PDCCH_TwoQCL_TypeD_r17 mTRP_PDCCH_TwoQCL_TypeD_r17; /**< ASN.1 mTRP-PDCCH-TwoQCL-TypeD-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_CSI_RS_r17; /**< mTRP-PUSCH-CSI-RS-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CSI_RS_r17 mTRP_PUSCH_CSI_RS_r17; /**< ASN.1 mTRP-PUSCH-CSI-RS-r17；结构体；OPTIONAL。 */
    bool has_mTRP_PUSCH_cyclicMapping_r17; /**< mTRP-PUSCH-cyclicMapping-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_cyclicMapping_r17 mTRP_PUSCH_cyclicMapping_r17; /**< ASN.1 mTRP-PUSCH-cyclicMapping-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_secondTPC_r17; /**< mTRP-PUSCH-secondTPC-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_secondTPC_r17 mTRP_PUSCH_secondTPC_r17; /**< ASN.1 mTRP-PUSCH-secondTPC-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_twoPHR_Reporting_r17; /**< mTRP-PUSCH-twoPHR-Reporting-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_twoPHR_Reporting_r17 mTRP_PUSCH_twoPHR_Reporting_r17; /**< ASN.1 mTRP-PUSCH-twoPHR-Reporting-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_A_CSI_r17; /**< mTRP-PUSCH-A-CSI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_A_CSI_r17 mTRP_PUSCH_A_CSI_r17; /**< ASN.1 mTRP-PUSCH-A-CSI-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_SP_CSI_r17; /**< mTRP-PUSCH-SP-CSI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_SP_CSI_r17 mTRP_PUSCH_SP_CSI_r17; /**< ASN.1 mTRP-PUSCH-SP-CSI-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUSCH_CG_r17; /**< mTRP-PUSCH-CG-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUSCH_CG_r17 mTRP_PUSCH_CG_r17; /**< ASN.1 mTRP-PUSCH-CG-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUCCH_MAC_CE_r17; /**< mTRP-PUCCH-MAC-CE-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_PUCCH_MAC_CE_r17 mTRP_PUCCH_MAC_CE_r17; /**< ASN.1 mTRP-PUCCH-MAC-CE-r17；枚举；OPTIONAL。 */
    bool has_mTRP_PUCCH_maxNum_PC_FR1_r17; /**< mTRP-PUCCH-maxNum-PC-FR1-r17 是否存在。 */
    int64_t mTRP_PUCCH_maxNum_PC_FR1_r17; /**< ASN.1 mTRP-PUCCH-maxNum-PC-FR1-r17；INTEGER (3..8)，位宽 3 bit；OPTIONAL。 */
    bool has_mTRP_inter_Cell_r17; /**< mTRP-inter-Cell-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_inter_Cell_r17 mTRP_inter_Cell_r17; /**< ASN.1 mTRP-inter-Cell-r17；结构体；OPTIONAL。 */
    bool has_mTRP_GroupBasedL1_RSRP_r17; /**< mTRP-GroupBasedL1-RSRP-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_GroupBasedL1_RSRP_r17 mTRP_GroupBasedL1_RSRP_r17; /**< ASN.1 mTRP-GroupBasedL1-RSRP-r17；结构体；OPTIONAL。 */
    bool has_mTRP_BFD_RS_MAC_CE_r17; /**< mTRP-BFD-RS-MAC-CE-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_BFD_RS_MAC_CE_r17 mTRP_BFD_RS_MAC_CE_r17; /**< ASN.1 mTRP-BFD-RS-MAC-CE-r17；枚举；OPTIONAL。 */
    bool has_mTRP_CSI_EnhancementPerBand_r17; /**< mTRP-CSI-EnhancementPerBand-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_EnhancementPerBand_r17 mTRP_CSI_EnhancementPerBand_r17; /**< ASN.1 mTRP-CSI-EnhancementPerBand-r17；结构体；OPTIONAL。 */
    bool has_codebookComboParameterMultiTRP_r17; /**< codebookComboParameterMultiTRP-r17 是否存在。 */
    CodebookComboParameterMultiTRP_r17 codebookComboParameterMultiTRP_r17; /**< ASN.1 codebookComboParameterMultiTRP-r17；结构体；OPTIONAL。 */
    bool has_mTRP_CSI_additionalCSI_r17; /**< mTRP-CSI-additionalCSI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_additionalCSI_r17 mTRP_CSI_additionalCSI_r17; /**< ASN.1 mTRP-CSI-additionalCSI-r17；枚举；OPTIONAL。 */
    bool has_mTRP_CSI_N_Max2_r17; /**< mTRP-CSI-N-Max2-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_N_Max2_r17 mTRP_CSI_N_Max2_r17; /**< ASN.1 mTRP-CSI-N-Max2-r17；枚举；OPTIONAL。 */
    bool has_mTRP_CSI_CMR_r17; /**< mTRP-CSI-CMR-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MTRP_CSI_CMR_r17 mTRP_CSI_CMR_r17; /**< ASN.1 mTRP-CSI-CMR-r17；枚举；OPTIONAL。 */
    bool has_srs_partialFreqSounding_r17; /**< srs-partialFreqSounding-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_Srs_partialFreqSounding_r17 srs_partialFreqSounding_r17; /**< ASN.1 srs-partialFreqSounding-r17；枚举；OPTIONAL。 */
    bool has_beamSwitchTiming_v1710; /**< beamSwitchTiming-v1710 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_v1710 beamSwitchTiming_v1710; /**< ASN.1 beamSwitchTiming-v1710；结构体；OPTIONAL。 */
    bool has_beamSwitchTiming_r17; /**< beamSwitchTiming-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamSwitchTiming_r17 beamSwitchTiming_r17; /**< ASN.1 beamSwitchTiming-r17；结构体；OPTIONAL。 */
    bool has_beamReportTiming_v1710; /**< beamReportTiming-v1710 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_BeamReportTiming_v1710 beamReportTiming_v1710; /**< ASN.1 beamReportTiming-v1710；结构体；OPTIONAL。 */
    bool has_maxNumberRxTxBeamSwitchDL_v1710; /**< maxNumberRxTxBeamSwitchDL-v1710 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup7_MaxNumberRxTxBeamSwitchDL_v1710 maxNumberRxTxBeamSwitchDL_v1710; /**< ASN.1 maxNumberRxTxBeamSwitchDL-v1710；结构体；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup8
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup8；源文件第 18216 行。
 */
struct MIMO_ParametersPerBand_ExtGroup8 {
    bool has_srs_PortReportSP_AP_r17; /**< srs-PortReportSP-AP-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup8_Srs_PortReportSP_AP_r17 srs_PortReportSP_AP_r17; /**< ASN.1 srs-PortReportSP-AP-r17；枚举；OPTIONAL。 */
    bool has_maxNumberRxBeam_v1720; /**< maxNumberRxBeam-v1720 是否存在。 */
    int64_t maxNumberRxBeam_v1720; /**< ASN.1 maxNumberRxBeam-v1720；INTEGER (9..12)，位宽 2 bit；OPTIONAL。 */
    bool has_sfn_ImplicitRS_twoTCI_r17; /**< sfn-ImplicitRS-twoTCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup8_Sfn_ImplicitRS_twoTCI_r17 sfn_ImplicitRS_twoTCI_r17; /**< ASN.1 sfn-ImplicitRS-twoTCI-r17；枚举；OPTIONAL。 */
    bool has_sfn_QCL_TypeD_Collision_twoTCI_r17; /**< sfn-QCL-TypeD-Collision-twoTCI-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup8_Sfn_QCL_TypeD_Collision_twoTCI_r17 sfn_QCL_TypeD_Collision_twoTCI_r17; /**< ASN.1 sfn-QCL-TypeD-Collision-twoTCI-r17；枚举；OPTIONAL。 */
    bool has_mTRP_CSI_numCPU_r17; /**< mTRP-CSI-numCPU-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup8_MTRP_CSI_numCPU_r17 mTRP_CSI_numCPU_r17; /**< ASN.1 mTRP-CSI-numCPU-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup9
 * @note ASN.1：MIMO_ParametersPerBand_ExtGroup9；源文件第 18227 行。
 */
struct MIMO_ParametersPerBand_ExtGroup9 {
    bool has_supportRepNumPDSCH_TDRA_DCI_1_2_r17; /**< supportRepNumPDSCH-TDRA-DCI-1-2-r17 是否存在。 */
    MIMO_ParametersPerBand_ExtGroup9_SupportRepNumPDSCH_TDRA_DCI_1_2_r17 supportRepNumPDSCH_TDRA_DCI_1_2_r17; /**< ASN.1 supportRepNumPDSCH-TDRA-DCI-1-2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18
 * @note ASN.1：tci-JointTCI-UpdateSingleActiveTCI-PerCC-r18；源文件第 18239 行。
 * @note SEQUENCE { maxNumberConfigJointTCIPerCC-PerBWP-r18, maxNumberActiveJointTCI-A...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberConfigJointTCIPerCC_PerBWP_r18 maxNumberConfigJointTCIPerCC_PerBWP_r18; /**< ASN.1 maxNumberConfigJointTCIPerCC-PerBWP-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumberActiveJointTCI_AcrossCC_r18 maxNumberActiveJointTCI_AcrossCC_r18; /**< ASN.1 maxNumberActiveJointTCI-AcrossCC-r18；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18
 * @note ASN.1：tci-JointTCI-UpdateMultiActiveTCI-PerCC-r18；源文件第 18245 行。
 * @note SEQUENCE { tci-StateInd-r18, maxNumberActiveJointTCI-PerCC-r18 }
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateMultiActiveTCI_PerCC_r18_Tci_StateInd_r18 tci_StateInd_r18; /**< ASN.1 tci-StateInd-r18；枚举。 */
    int64_t maxNumberActiveJointTCI_PerCC_r18; /**< ASN.1 maxNumberActiveJointTCI-PerCC-r18；INTEGER (2..8)，位宽 3 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18
 * @note ASN.1：tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-r18；源文件第 18253 行。
 * @note SEQUENCE { maxNumConfigDL-TCI-PerCC-PerBWP-r18, maxNumConfigUL-TCI-PerCC-PerB...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigDL_TCI_PerCC_PerBWP_r18 maxNumConfigDL_TCI_PerCC_PerBWP_r18; /**< ASN.1 maxNumConfigDL-TCI-PerCC-PerBWP-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumConfigUL_TCI_PerCC_PerBWP_r18 maxNumConfigUL_TCI_PerCC_PerBWP_r18; /**< ASN.1 maxNumConfigUL-TCI-PerCC-PerBWP-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18 maxNumActiveDL_TCI_AcrossCC_r18; /**< ASN.1 maxNumActiveDL-TCI-AcrossCC-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18 maxNumActiveUL_TCI_AcrossCC_r18; /**< ASN.1 maxNumActiveUL-TCI-AcrossCC-r18；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18
 * @note ASN.1：tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-r18；源文件第 18261 行。
 * @note SEQUENCE { maxNumActiveDL-TCI-AcrossCC-r18, maxNumActiveUL-TCI-AcrossCC-r18 }
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveDL_TCI_AcrossCC_r18 maxNumActiveDL_TCI_AcrossCC_r18; /**< ASN.1 maxNumActiveDL-TCI-AcrossCC-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_r18_MaxNumActiveUL_TCI_AcrossCC_r18 maxNumActiveUL_TCI_AcrossCC_r18; /**< ASN.1 maxNumActiveUL-TCI-AcrossCC-r18；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18
 * @note ASN.1：tci-JointTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18；源文件第 18271 行。
 * @note SEQUENCE { mTRP-Operation-r18, maxNumberConfigJointTCIPerCC-PerBWP-r18, maxNu...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18 mTRP_Operation_r18; /**< ASN.1 mTRP-Operation-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberC_cc111947 maxNumberConfigJointTCIPerCC_PerBWP_r18; /**< ASN.1 maxNumberConfigJointTCIPerCC-PerBWP-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_JointTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumberA_df52a587 maxNumberActiveJointTCIAcrossCC_PerCORESET_r18; /**< ASN.1 maxNumberActiveJointTCIAcrossCC-PerCORESET-r18；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18
 * @note ASN.1：tci-SeparateTCI-UpdateSingleActiveTCI-PerCC-PerCORESET-r18；源文件第 18283 行。
 * @note SEQUENCE { mTRP-Operation-r18, maxNumConfigDL-TCI-PerCC-PerBWP-r18, maxNumCon...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MTRP_Operation_r18 mTRP_Operation_r18; /**< ASN.1 mTRP-Operation-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_dd9c66c8 maxNumConfigDL_TCI_PerCC_PerBWP_r18; /**< ASN.1 maxNumConfigDL-TCI-PerCC-PerBWP-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumC_793818c0 maxNumConfigUL_TCI_PerCC_PerBWP_r18; /**< ASN.1 maxNumConfigUL-TCI-PerCC-PerBWP-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_056c1fed maxNumActiveDL_TCI_AcrossCC_r18; /**< ASN.1 maxNumActiveDL-TCI-AcrossCC-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateSingleActiveTCI_PerCC_PerCORESET_r18_MaxNumA_54f40dd5 maxNumActiveUL_TCI_AcrossCC_r18; /**< ASN.1 maxNumActiveUL-TCI-AcrossCC-r18；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18
 * @note ASN.1：tci-SeparateTCI-UpdateMultiActiveTCI-PerCC-PerCORESET-r18；源文件第 18292 行。
 * @note SEQUENCE { maxNumConfigDL-TCI-PerCC-PerBWP-r18, maxNumConfigUL-TCI-PerCC-PerB...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tci_SeparateTCI_UpdateMultiActiveTCI_PerCC_PerCORESET_r18 {
    int64_t maxNumConfigDL_TCI_PerCC_PerBWP_r18; /**< ASN.1 maxNumConfigDL-TCI-PerCC-PerBWP-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumConfigUL_TCI_PerCC_PerBWP_r18; /**< ASN.1 maxNumConfigUL-TCI-PerCC-PerBWP-r18；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18
 * @note ASN.1：tdcp-Report-r18；源文件第 18311 行。
 * @note SEQUENCE { valueX-r18, maxNumberActiveResource-r18 }
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tdcp_Report_r18 {
    int64_t valueX_r18; /**< ASN.1 valueX-r18；INTEGER (1..2)，位宽 1 bit。 */
    int64_t maxNumberActiveResource_r18; /**< ASN.1 maxNumberActiveResource-r18；INTEGER (2..32)，位宽 5 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18
 * @note ASN.1：tdcp-Resource-r18；源文件第 18316 行。
 * @note SEQUENCE { maxNumberConfigPerCC-r18, maxNumberConfigAcrossCC-r18, maxNumberSi...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18 {
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberConfigPerCC_r18 maxNumberConfigPerCC_r18; /**< ASN.1 maxNumberConfigPerCC-r18；枚举。 */
    int64_t maxNumberConfigAcrossCC_r18; /**< ASN.1 maxNumberConfigAcrossCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    MIMO_ParametersPerBand_ExtGroup10_Tdcp_Resource_r18_MaxNumberSimultaneousPerCC_r18 maxNumberSimultaneousPerCC_r18; /**< ASN.1 maxNumberSimultaneousPerCC-r18；枚举。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18
 * @note ASN.1：pusch-NonCB-SingleDCI-STx2P-SDM-CSI-RS-SRS-r18；源文件第 18349 行。
 * @note SEQUENCE { maxNumberPeriodicSRS-Resource-PerBWP-r18, maxNumberAperiodicSRS-Re...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SDM_CSI_RS_SRS_r18 {
    int64_t maxNumberPeriodicSRS_Resource_PerBWP_r18; /**< ASN.1 maxNumberPeriodicSRS-Resource-PerBWP-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberAperiodicSRS_Resource_PerBWP_r18; /**< ASN.1 maxNumberAperiodicSRS-Resource-PerBWP-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSemiPersistentSRS_ResourcePerBWP_r18; /**< ASN.1 maxNumberSemiPersistentSRS-ResourcePerBWP-r18；INTEGER (0..8)，位宽 4 bit。 */
    int64_t valueY_SRS_ResourceAssociate_r18; /**< ASN.1 valueY-SRS-ResourceAssociate-r18；INTEGER (1..16)，位宽 4 bit。 */
    int64_t valueX_CSI_RS_ResourceAssociate_r18; /**< ASN.1 valueX-CSI-RS-ResourceAssociate-r18；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18
 * @note ASN.1：twoPUSCH-NonCB-Multi-DCI-STx2P-CSI-RS-Resource-r18；源文件第 18357 行。
 * @note SEQUENCE { maxNumberPeriodicSRS-r18, maxNumberAperiodicSRS-r18, maxNumberSemi...
 */
struct MIMO_ParametersPerBand_ExtGroup10_TwoPUSCH_NonCB_Multi_DCI_STx2P_CSI_RS_Resource_r18 {
    int64_t maxNumberPeriodicSRS_r18; /**< ASN.1 maxNumberPeriodicSRS-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberAperiodicSRS_r18; /**< ASN.1 maxNumberAperiodicSRS-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSemiPersistentSRS_r18; /**< ASN.1 maxNumberSemiPersistentSRS-r18；INTEGER (0..8)，位宽 4 bit。 */
    int64_t simultaneousSRS_PerCC_r18; /**< ASN.1 simultaneousSRS-PerCC-r18；INTEGER (1..16)，位宽 4 bit。 */
    int64_t simultaneousCSI_RS_NonCB_r18; /**< ASN.1 simultaneousCSI-RS-NonCB-r18；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18
 * @note ASN.1：pusch-NonCB-SingleDCI-STx2P-SFN-CSI-RS-SRS-r18；源文件第 18371 行。
 * @note SEQUENCE { maxNumberPeriodicSRS-Resource-PerBWP-r18, maxNumberAperiodicSRS-Re...
 */
struct MIMO_ParametersPerBand_ExtGroup10_Pusch_NonCB_SingleDCI_STx2P_SFN_CSI_RS_SRS_r18 {
    int64_t maxNumberPeriodicSRS_Resource_PerBWP_r18; /**< ASN.1 maxNumberPeriodicSRS-Resource-PerBWP-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberAperiodicSRS_Resource_PerBWP_r18; /**< ASN.1 maxNumberAperiodicSRS-Resource-PerBWP-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberSemiPersistentSRS_ResourcePerBWP_r18; /**< ASN.1 maxNumberSemiPersistentSRS-ResourcePerBWP-r18；INTEGER (0..8)，位宽 4 bit。 */
    int64_t valueY_SRS_ResourceAssociate_r18; /**< ASN.1 valueY-SRS-ResourceAssociate-r18；INTEGER (1..16)，位宽 4 bit。 */
    int64_t valueX_CSI_RS_ResourceAssociate_r18; /**< ASN.1 valueX-CSI-RS-ResourceAssociate-r18；INTEGER (1..2)，位宽 1 bit。 */
};


/**
 * @brief MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18
 * @note ASN.1：groupBeamReporting-STx2P-r18；源文件第 18413 行。
 * @note SEQUENCE { groupL1-RSRP-Reporting-r18, maxNumberBeamGroups-r18, maxNumberResW...
 */
struct MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18 {
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_GroupL1_RSRP_Reporting_r18 groupL1_RSRP_Reporting_r18; /**< ASN.1 groupL1-RSRP-Reporting-r18；枚举。 */
    int64_t maxNumberBeamGroups_r18; /**< ASN.1 maxNumberBeamGroups-r18；INTEGER (1..4)，位宽 2 bit。 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResWithinSlotAcrossCC_r18 maxNumberResWithinSlotAcrossCC_r18; /**< ASN.1 maxNumberResWithinSlotAcrossCC-r18；枚举。 */
    MIMO_ParametersPerBand_ExtGroup10_GroupBeamReporting_STx2P_r18_MaxNumberResAcrossCC_r18 maxNumberResAcrossCC_r18; /**< ASN.1 maxNumberResAcrossCC-r18；枚举。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART022_H */
