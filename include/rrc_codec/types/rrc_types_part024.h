/* ============================================================================
 * types/rrc_types_part024.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART024_H
#define RRC_CODEC_TYPES_PART024_H

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
#include "rrc_types_part022.h"
#include "rrc_types_part023.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief BandNR_ExtGroup13
 * @note ASN.1：BandNR_ExtGroup13；源文件第 19808 行。
 */
struct BandNR_ExtGroup13 {
    bool has_ue_OneShotUL_TimingAdj_r17; /**< ue-OneShotUL-TimingAdj-r17 是否存在。 */
    BandNR_ExtGroup13_Ue_OneShotUL_TimingAdj_r17 ue_OneShotUL_TimingAdj_r17; /**< ASN.1 ue-OneShotUL-TimingAdj-r17；枚举；OPTIONAL。 */
    bool has_pucch_Repetition_F0_2_r17; /**< pucch-Repetition-F0-2-r17 是否存在。 */
    BandNR_ExtGroup13_Pucch_Repetition_F0_2_r17 pucch_Repetition_F0_2_r17; /**< ASN.1 pucch-Repetition-F0-2-r17；枚举；OPTIONAL。 */
    bool has_cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17; /**< cqi-4-BitsSubbandNTN-SharedSpectrumChAccess-r17 是否存在。 */
    BandNR_ExtGroup13_Cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17 cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17; /**< ASN.1 cqi-4-BitsSubbandNTN-SharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
    bool has_mux_HARQ_ACK_DiffPriorities_r17; /**< mux-HARQ-ACK-DiffPriorities-r17 是否存在。 */
    BandNR_ExtGroup13_Mux_HARQ_ACK_DiffPriorities_r17 mux_HARQ_ACK_DiffPriorities_r17; /**< ASN.1 mux-HARQ-ACK-DiffPriorities-r17；枚举；OPTIONAL。 */
    bool has_ta_BasedPDC_NTN_SharedSpectrumChAccess_r17; /**< ta-BasedPDC-NTN-SharedSpectrumChAccess-r17 是否存在。 */
    BandNR_ExtGroup13_Ta_BasedPDC_NTN_SharedSpectrumChAccess_r17 ta_BasedPDC_NTN_SharedSpectrumChAccess_r17; /**< ASN.1 ta-BasedPDC-NTN-SharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
    bool has_ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17; /**< ack-NACK-FeedbackForMulticastWithDCI-Enabler-r17 是否存在。 */
    BandNR_ExtGroup13_Ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17 ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17; /**< ASN.1 ack-NACK-FeedbackForMulticastWithDCI-Enabler-r17；枚举；OPTIONAL。 */
    bool has_maxNumberG_RNTI_r17; /**< maxNumberG-RNTI-r17 是否存在。 */
    int64_t maxNumberG_RNTI_r17; /**< ASN.1 maxNumberG-RNTI-r17；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_dynamicMulticastDCI_Format4_2_r17; /**< dynamicMulticastDCI-Format4-2-r17 是否存在。 */
    BandNR_ExtGroup13_DynamicMulticastDCI_Format4_2_r17 dynamicMulticastDCI_Format4_2_r17; /**< ASN.1 dynamicMulticastDCI-Format4-2-r17；枚举；OPTIONAL。 */
    bool has_maxModulationOrderForMulticast_r17; /**< maxModulationOrderForMulticast-r17 是否存在。 */
    BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17 maxModulationOrderForMulticast_r17; /**< ASN.1 maxModulationOrderForMulticast-r17；结构体；OPTIONAL。 */
    bool has_dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17; /**< dynamicSlotRepetitionMulticastTN-NonSharedSpectrumChAccess-r17 是否存在。 */
    BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17 dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17; /**< ASN.1 dynamicSlotRepetitionMulticastTN-NonSharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
    bool has_dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17; /**< dynamicSlotRepetitionMulticastNTN-SharedSpectrumChAccess-r17 是否存在。 */
    BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17 dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17; /**< ASN.1 dynamicSlotRepetitionMulticastNTN-SharedSpectrumChAccess-r17；枚举；OPTIONAL。 */
    bool has_nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17; /**< nack-OnlyFeedbackForMulticastWithDCI-Enabler-r17 是否存在。 */
    BandNR_ExtGroup13_Nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17 nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17; /**< ASN.1 nack-OnlyFeedbackForMulticastWithDCI-Enabler-r17；枚举；OPTIONAL。 */
    bool has_ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17; /**< ack-NACK-FeedbackForSPS-MulticastWithDCI-Enabler-r17 是否存在。 */
    BandNR_ExtGroup13_Ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17 ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17; /**< ASN.1 ack-NACK-FeedbackForSPS-MulticastWithDCI-Enabler-r17；枚举；OPTIONAL。 */
    bool has_maxNumberG_CS_RNTI_r17; /**< maxNumberG-CS-RNTI-r17 是否存在。 */
    int64_t maxNumberG_CS_RNTI_r17; /**< ASN.1 maxNumberG-CS-RNTI-r17；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_re_LevelRateMatchingForMulticast_r17; /**< re-LevelRateMatchingForMulticast-r17 是否存在。 */
    BandNR_ExtGroup13_Re_LevelRateMatchingForMulticast_r17 re_LevelRateMatchingForMulticast_r17; /**< ASN.1 re-LevelRateMatchingForMulticast-r17；枚举；OPTIONAL。 */
    bool has_pdsch_1024QAM_2MIMO_FR1_r17; /**< pdsch-1024QAM-2MIMO-FR1-r17 是否存在。 */
    BandNR_ExtGroup13_Pdsch_1024QAM_2MIMO_FR1_r17 pdsch_1024QAM_2MIMO_FR1_r17; /**< ASN.1 pdsch-1024QAM-2MIMO-FR1-r17；枚举；OPTIONAL。 */
    bool has_prs_MeasurementWithoutMG_r17; /**< prs-MeasurementWithoutMG-r17 是否存在。 */
    BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17 prs_MeasurementWithoutMG_r17; /**< ASN.1 prs-MeasurementWithoutMG-r17；枚举；OPTIONAL。 */
    bool has_maxNumber_LEO_SatellitesPerCarrier_r17; /**< maxNumber-LEO-SatellitesPerCarrier-r17 是否存在。 */
    int64_t maxNumber_LEO_SatellitesPerCarrier_r17; /**< ASN.1 maxNumber-LEO-SatellitesPerCarrier-r17；INTEGER (3..4)，位宽 1 bit；OPTIONAL。 */
    bool has_prs_ProcessingCapabilityOutsideMGinPPW_r17; /**< prs-ProcessingCapabilityOutsideMGinPPW-r17 是否存在。 */
    PRS_ProcessingCapabilityOutsideMGinPPWperType_r17* prs_ProcessingCapabilityOutsideMGinPPW_r17_items; /**< ASN.1 prs-ProcessingCapabilityOutsideMGinPPW-r17；SEQUENCE OF PRS_ProcessingCapabilityOutsideMGinPPWperType_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t prs_ProcessingCapabilityOutsideMGinPPW_r17_count; /**< prs-ProcessingCapabilityOutsideMGinPPW-r17 元素个数。 */
    bool has_srs_SemiPersistent_PosResourcesRRC_Inactive_r17; /**< srs-SemiPersistent-PosResourcesRRC-Inactive-r17 是否存在。 */
    BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17 srs_SemiPersistent_PosResourcesRRC_Inactive_r17; /**< ASN.1 srs-SemiPersistent-PosResourcesRRC-Inactive-r17；结构体；OPTIONAL。 */
    bool has_channelBWs_DL_SCS_120kHz_FR2_2_r17; /**< channelBWs-DL-SCS-120kHz-FR2-2-r17 是否存在。 */
    BitString channelBWs_DL_SCS_120kHz_FR2_2_r17; /**< ASN.1 channelBWs-DL-SCS-120kHz-FR2-2-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_channelBWs_UL_SCS_120kHz_FR2_2_r17; /**< channelBWs-UL-SCS-120kHz-FR2-2-r17 是否存在。 */
    BitString channelBWs_UL_SCS_120kHz_FR2_2_r17; /**< ASN.1 channelBWs-UL-SCS-120kHz-FR2-2-r17；SIZE (8)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup14
 * @note ASN.1：BandNR_ExtGroup14；源文件第 19859 行。
 */
struct BandNR_ExtGroup14 {
    bool has_dmrs_BundlingPUSCH_RepTypeA_r17; /**< dmrs-BundlingPUSCH-RepTypeA-r17 是否存在。 */
    BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeA_r17 dmrs_BundlingPUSCH_RepTypeA_r17; /**< ASN.1 dmrs-BundlingPUSCH-RepTypeA-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUSCH_RepTypeB_r17; /**< dmrs-BundlingPUSCH-RepTypeB-r17 是否存在。 */
    BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeB_r17 dmrs_BundlingPUSCH_RepTypeB_r17; /**< ASN.1 dmrs-BundlingPUSCH-RepTypeB-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUSCH_multiSlot_r17; /**< dmrs-BundlingPUSCH-multiSlot-r17 是否存在。 */
    BandNR_ExtGroup14_Dmrs_BundlingPUSCH_multiSlot_r17 dmrs_BundlingPUSCH_multiSlot_r17; /**< ASN.1 dmrs-BundlingPUSCH-multiSlot-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingPUCCH_Rep_r17; /**< dmrs-BundlingPUCCH-Rep-r17 是否存在。 */
    BandNR_ExtGroup14_Dmrs_BundlingPUCCH_Rep_r17 dmrs_BundlingPUCCH_Rep_r17; /**< ASN.1 dmrs-BundlingPUCCH-Rep-r17；枚举；OPTIONAL。 */
    bool has_interSlotFreqHopInterSlotBundlingPUSCH_r17; /**< interSlotFreqHopInterSlotBundlingPUSCH-r17 是否存在。 */
    BandNR_ExtGroup14_InterSlotFreqHopInterSlotBundlingPUSCH_r17 interSlotFreqHopInterSlotBundlingPUSCH_r17; /**< ASN.1 interSlotFreqHopInterSlotBundlingPUSCH-r17；枚举；OPTIONAL。 */
    bool has_interSlotFreqHopPUCCH_r17; /**< interSlotFreqHopPUCCH-r17 是否存在。 */
    BandNR_ExtGroup14_InterSlotFreqHopPUCCH_r17 interSlotFreqHopPUCCH_r17; /**< ASN.1 interSlotFreqHopPUCCH-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingRestart_r17; /**< dmrs-BundlingRestart-r17 是否存在。 */
    BandNR_ExtGroup14_Dmrs_BundlingRestart_r17 dmrs_BundlingRestart_r17; /**< ASN.1 dmrs-BundlingRestart-r17；枚举；OPTIONAL。 */
    bool has_dmrs_BundlingNonBackToBackTX_r17; /**< dmrs-BundlingNonBackToBackTX-r17 是否存在。 */
    BandNR_ExtGroup14_Dmrs_BundlingNonBackToBackTX_r17 dmrs_BundlingNonBackToBackTX_r17; /**< ASN.1 dmrs-BundlingNonBackToBackTX-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup15
 * @note ASN.1：BandNR_ExtGroup15；源文件第 19877 行。
 */
struct BandNR_ExtGroup15 {
    bool has_maxDynamicSlotRepetitionForSPS_Multicast_r17; /**< maxDynamicSlotRepetitionForSPS-Multicast-r17 是否存在。 */
    BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17 maxDynamicSlotRepetitionForSPS_Multicast_r17; /**< ASN.1 maxDynamicSlotRepetitionForSPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17; /**< nack-OnlyFeedbackForSPS-MulticastWithDCI-Enabler-r17 是否存在。 */
    BandNR_ExtGroup15_Nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17 nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17; /**< ASN.1 nack-OnlyFeedbackForSPS-MulticastWithDCI-Enabler-r17；枚举；OPTIONAL。 */
    bool has_sps_MulticastDCI_Format4_2_r17; /**< sps-MulticastDCI-Format4-2-r17 是否存在。 */
    BandNR_ExtGroup15_Sps_MulticastDCI_Format4_2_r17 sps_MulticastDCI_Format4_2_r17; /**< ASN.1 sps-MulticastDCI-Format4-2-r17；枚举；OPTIONAL。 */
    bool has_sps_MulticastMultiConfig_r17; /**< sps-MulticastMultiConfig-r17 是否存在。 */
    int64_t sps_MulticastMultiConfig_r17; /**< ASN.1 sps-MulticastMultiConfig-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_priorityIndicatorInDCI_Multicast_r17; /**< priorityIndicatorInDCI-Multicast-r17 是否存在。 */
    BandNR_ExtGroup15_PriorityIndicatorInDCI_Multicast_r17 priorityIndicatorInDCI_Multicast_r17; /**< ASN.1 priorityIndicatorInDCI-Multicast-r17；枚举；OPTIONAL。 */
    bool has_priorityIndicatorInDCI_SPS_Multicast_r17; /**< priorityIndicatorInDCI-SPS-Multicast-r17 是否存在。 */
    BandNR_ExtGroup15_PriorityIndicatorInDCI_SPS_Multicast_r17 priorityIndicatorInDCI_SPS_Multicast_r17; /**< ASN.1 priorityIndicatorInDCI-SPS-Multicast-r17；枚举；OPTIONAL。 */
    bool has_twoHARQ_ACK_CodebookForUnicastAndMulticast_r17; /**< twoHARQ-ACK-CodebookForUnicastAndMulticast-r17 是否存在。 */
    BandNR_ExtGroup15_TwoHARQ_ACK_CodebookForUnicastAndMulticast_r17 twoHARQ_ACK_CodebookForUnicastAndMulticast_r17; /**< ASN.1 twoHARQ-ACK-CodebookForUnicastAndMulticast-r17；枚举；OPTIONAL。 */
    bool has_multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17; /**< multiPUCCH-HARQ-ACK-ForMulticastUnicast-r17 是否存在。 */
    BandNR_ExtGroup15_MultiPUCCH_HARQ_ACK_ForMulticastUnicast_r17 multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17; /**< ASN.1 multiPUCCH-HARQ-ACK-ForMulticastUnicast-r17；枚举；OPTIONAL。 */
    bool has_releaseSPS_MulticastWithCS_RNTI_r17; /**< releaseSPS-MulticastWithCS-RNTI-r17 是否存在。 */
    BandNR_ExtGroup15_ReleaseSPS_MulticastWithCS_RNTI_r17 releaseSPS_MulticastWithCS_RNTI_r17; /**< ASN.1 releaseSPS-MulticastWithCS-RNTI-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18
 * @note ASN.1：spatialAdaptation-CSI-Feedback-r18/maxNumberCSI-ResourcePerCC-r18；源文件第 19925 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18 {
    int64_t sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
    int64_t sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18
 * @note ASN.1：spatialAdaptation-CSI-Feedback-r18/maxNumberTotalCSI-ResourcePerCC-r18；源文件第 19929 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18 sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；枚举。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18 sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；枚举。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18
 * @note ASN.1：spatialAdaptation-CSI-Feedback-r18；源文件第 19922 行。
 * @note SEQUENCE { csiFeedbackType-r18, maxNumberLmax-r18, maxNumberCSI-ResourcePerCC...
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18 csiFeedbackType_r18; /**< ASN.1 csiFeedbackType-r18；枚举。 */
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..4)，位宽 2 bit。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18 maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；结构体。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；结构体。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPUSCH-r18；源文件第 19937 行。
 * @note SEQUENCE { csiFeedbackType-r18, maxNumberLmax-r18, subReportCSI-r18, maxNumbe...
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18 csiFeedbackType_r18; /**< ASN.1 csiFeedbackType-r18；枚举。 */
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..8)，位宽 3 bit。 */
    int64_t subReportCSI_r18; /**< ASN.1 subReportCSI-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；枚举。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..12)，位宽 4 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackAperiodic-r18/maxNumberCSI-ResourcePerCC-r18；源文件第 19950 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18 {
    int64_t sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
    int64_t sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackAperiodic-r18/maxNumberTotalCSI-ResourcePerCC-r18；源文件第 19954 行。
 * @note SEQUENCE { sdType1-Resource-r18, sdType2-Resource-r18 }
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18 sdType1_Resource_r18; /**< ASN.1 sdType1-Resource-r18；枚举。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18 sdType2_Resource_r18; /**< ASN.1 sdType2-Resource-r18；枚举。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackAperiodic-r18；源文件第 19946 行。
 * @note SEQUENCE { csiFeedbackType-r18, maxNumberLmax-r18, subReportCSI-r18, maxNumbe...
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18 csiFeedbackType_r18; /**< ASN.1 csiFeedbackType-r18；枚举。 */
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..8)，位宽 3 bit。 */
    int64_t subReportCSI_r18; /**< ASN.1 subReportCSI-r18；INTEGER (2..4)，位宽 2 bit。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18 maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；结构体。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；结构体。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..12)，位宽 4 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18
 * @note ASN.1：spatialAdaptation-CSI-FeedbackPUCCH-r18；源文件第 19962 行。
 * @note SEQUENCE { csiFeedbackType-r18, maxNumberLmax-r18, subReportCSI-r18, maxNumbe...
 */
struct BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18 {
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18 csiFeedbackType_r18; /**< ASN.1 csiFeedbackType-r18；枚举。 */
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t subReportCSI_r18; /**< ASN.1 subReportCSI-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；枚举。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18
 * @note ASN.1：powerAdaptation-CSI-Feedback-r18；源文件第 19971 行。
 * @note SEQUENCE { maxNumberLmax-r18, maxNumberCSI-ResourcePerCC-r18, maxNumberTotalC...
 */
struct BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18 {
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；枚举。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackPUSCH-r18；源文件第 19979 行。
 * @note SEQUENCE { maxNumberLmax-r18, subReportCSI-r18, maxNumberCSI-ResourcePerCC-r1...
 */
struct BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18 {
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..8)，位宽 3 bit。 */
    int64_t subReportCSI_r18; /**< ASN.1 subReportCSI-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；枚举。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..12)，位宽 4 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackAperiodic-r18；源文件第 19987 行。
 * @note SEQUENCE { maxNumberLmax-r18, subReportCSI-r18, maxNumberCSI-ResourcePerCC-r1...
 */
struct BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18 {
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..8)，位宽 3 bit。 */
    int64_t subReportCSI_r18; /**< ASN.1 subReportCSI-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；枚举。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..12)，位宽 4 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18
 * @note ASN.1：powerAdaptation-CSI-FeedbackPUCCH-r18；源文件第 19996 行。
 * @note SEQUENCE { maxNumberLmax-r18, subReportCSI-r18, maxNumberCSI-ResourcePerCC-r1...
 */
struct BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18 {
    int64_t maxNumberLmax_r18; /**< ASN.1 maxNumberLmax-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t subReportCSI_r18; /**< ASN.1 subReportCSI-r18；INTEGER (2..4)，位宽 2 bit。 */
    int64_t maxNumberCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberCSI-ResourcePerCC-r18；INTEGER (1..32)，位宽 5 bit。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18 maxNumberTotalCSI_ResourcePerCC_r18; /**< ASN.1 maxNumberTotalCSI-ResourcePerCC-r18；枚举。 */
    int64_t totalNumberCSI_Reporting_r18; /**< ASN.1 totalNumberCSI-Reporting-r18；INTEGER (2..4)，位宽 2 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18
 * @note ASN.1：ltm-BeamIndicationJointTCI-r18；源文件第 20013 行。
 * @note SEQUENCE { maxNumberJointTCI-PerCell-r18, qcl-Resource-r18, maxNumberJointTCI...
 */
struct BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18 maxNumberJointTCI_PerCell_r18; /**< ASN.1 maxNumberJointTCI-PerCell-r18；枚举。 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18 qcl_Resource_r18; /**< ASN.1 qcl-Resource-r18；枚举。 */
    int64_t maxNumberJointTCI_AcrossCells_r18; /**< ASN.1 maxNumberJointTCI-AcrossCells-r18；INTEGER (1..128)，位宽 7 bit。 */
    int64_t maxNumberCells_r18; /**< ASN.1 maxNumberCells-r18；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18
 * @note ASN.1：ltm-MAC-CE-JointTCI-r18；源文件第 20020 行。
 * @note SEQUENCE { qcl-Resource-r18, maxNumberJointTCI-PerCell-r18, maxNumberJointTCI...
 */
struct BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18 qcl_Resource_r18; /**< ASN.1 qcl-Resource-r18；枚举。 */
    int64_t maxNumberJointTCI_PerCell_r18; /**< ASN.1 maxNumberJointTCI-PerCell-r18；INTEGER (1..16)，位宽 4 bit。 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18 maxNumberJointTCI_AcrossCells_r18; /**< ASN.1 maxNumberJointTCI-AcrossCells-r18；枚举。 */
};


/**
 * @brief BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18
 * @note ASN.1：ltm-BeamIndicationSeparateTCI-r18；源文件第 20026 行。
 * @note SEQUENCE { maxNumberDL-TCI-PerCell-r18, maxNumberUL-TCI-PerCell-r18, qcl-Reso...
 */
struct BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18 {
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18 maxNumberDL_TCI_PerCell_r18; /**< ASN.1 maxNumberDL-TCI-PerCell-r18；枚举。 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18 maxNumberUL_TCI_PerCell_r18; /**< ASN.1 maxNumberUL-TCI-PerCell-r18；枚举。 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18 qcl_Resource_r18; /**< ASN.1 qcl-Resource-r18；枚举。 */
    int64_t maxNumberDL_TCI_AcrossCells_r18; /**< ASN.1 maxNumberDL-TCI-AcrossCells-r18；INTEGER (1..128)，位宽 7 bit。 */
    int64_t maxNumberUL_TCI_AcrossCells_r18; /**< ASN.1 maxNumberUL-TCI-AcrossCells-r18；INTEGER (1..64)，位宽 6 bit。 */
    int64_t maxNumberCells_r18; /**< ASN.1 maxNumberCells-r18；INTEGER (1..8)，位宽 3 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18
 * @note ASN.1：ltm-MAC-CE-SeparateTCI-r18；源文件第 20035 行。
 * @note SEQUENCE { qcl-Resource-r18, maxNumberDL-TCI-PerCell-r18, maxNumberUL-TCI-Per...
 */
struct BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18 {
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18 qcl_Resource_r18; /**< ASN.1 qcl-Resource-r18；枚举。 */
    int64_t maxNumberDL_TCI_PerCell_r18; /**< ASN.1 maxNumberDL-TCI-PerCell-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t maxNumberUL_TCI_PerCell_r18; /**< ASN.1 maxNumberUL-TCI-PerCell-r18；INTEGER (1..8)，位宽 3 bit。 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18 maxNumberDL_TCI_AcrossCells_r18; /**< ASN.1 maxNumberDL-TCI-AcrossCells-r18；枚举。 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18 maxNumberUL_TCI_AcrossCells_r18; /**< ASN.1 maxNumberUL-TCI-AcrossCells-r18；枚举。 */
};


/**
 * @brief BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18
 * @note ASN.1：multiPUSCH-ActiveConfiguredGrant-r18；源文件第 20052 行。
 * @note SEQUENCE { maxNumberConfigsPerBWP, maxNumberConfigsAllCC-FR1, maxNumberConfig...
 */
struct BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18 {
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP maxNumberConfigsPerBWP; /**< ASN.1 maxNumberConfigsPerBWP；枚举。 */
    int64_t maxNumberConfigsAllCC_FR1; /**< ASN.1 maxNumberConfigsAllCC-FR1；INTEGER (2..32)，位宽 5 bit。 */
    int64_t maxNumberConfigsAllCC_FR2; /**< ASN.1 maxNumberConfigsAllCC-FR2；INTEGER (2..32)，位宽 5 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18
 * @note ASN.1：nr-PDCCH-OverlapLTE-CRS-RE-r18；源文件第 20071 行。
 * @note SEQUENCE { overlapInRE-r18, overlapInSymbol-r18 }
 */
struct BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18 {
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18 overlapInRE_r18; /**< ASN.1 overlapInRE-r18；枚举。 */
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18 overlapInSymbol_r18; /**< ASN.1 overlapInSymbol-r18；枚举。 */
};


/**
 * @brief BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18
 * @note ASN.1：twoRateMatchingEUTRA-CRS-patterns-3-4-r18；源文件第 20084 行。
 * @note SEQUENCE { maxNumberPatterns-r18, maxNumberNon-OverlapPatterns-r18 }
 */
struct BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18 {
    int64_t maxNumberPatterns_r18; /**< ASN.1 maxNumberPatterns-r18；INTEGER (2..6)，位宽 3 bit。 */
    int64_t maxNumberNon_OverlapPatterns_r18; /**< ASN.1 maxNumberNon-OverlapPatterns-r18；INTEGER (1..3)，位宽 2 bit。 */
};


/**
 * @brief BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18
 * @note ASN.1：pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr1-r18；源文件第 20112 行。
 * @note SEQUENCE { scs-15kHz-r18, scs-30kHz-r18, scs-60kHz-r18 }
 */
struct BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18 {
    bool has_scs_15kHz_r18; /**< scs-15kHz-r18 是否存在。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18 scs_15kHz_r18; /**< ASN.1 scs-15kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_30kHz_r18; /**< scs-30kHz-r18 是否存在。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18 scs_30kHz_r18; /**< ASN.1 scs-30kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_60kHz_r18; /**< scs-60kHz-r18 是否存在。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18 scs_60kHz_r18; /**< ASN.1 scs-60kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18
 * @note ASN.1：pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr2-r18；源文件第 20117 行。
 * @note SEQUENCE { scs-60kHz-r18, scs-120kHz-r18 }
 */
struct BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18 {
    bool has_scs_60kHz_r18; /**< scs-60kHz-r18 是否存在。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18 scs_60kHz_r18; /**< ASN.1 scs-60kHz-r18；枚举；OPTIONAL。 */
    bool has_scs_120kHz_r18; /**< scs-120kHz-r18 是否存在。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18 scs_120kHz_r18; /**< ASN.1 scs-120kHz-r18；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18
 * @note ASN.1：pdc-maxNumberPRS-ResourceProcessedPerSlot-r18；源文件第 20111 行。
 * @note SEQUENCE { fr1-r18, fr2-r18 }
 */
struct BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18 {
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18 fr1_r18; /**< ASN.1 fr1-r18；结构体。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18 fr2_r18; /**< ASN.1 fr2-r18；结构体。 */
};


/**
 * @brief BandNR_ExtGroup16_BeamSweepingFactorReduction_r18
 * @note ASN.1：beamSweepingFactorReduction-r18；源文件第 20129 行。
 * @note SEQUENCE { reduceForCellDetection, reduceForSSB-L1-RSRP-Meas }
 */
struct BandNR_ExtGroup16_BeamSweepingFactorReduction_r18 {
    BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection reduceForCellDetection; /**< ASN.1 reduceForCellDetection；枚举。 */
    int64_t reduceForSSB_L1_RSRP_Meas; /**< ASN.1 reduceForSSB-L1-RSRP-Meas；INTEGER (0..7)，位宽 3 bit。 */
};


/**
 * @brief BandNR_ExtGroup16
 * @note ASN.1：BandNR_ExtGroup16；源文件第 19898 行。
 */
struct BandNR_ExtGroup16 {
    bool has_posUE_TA_AutoAdjustment_r18; /**< posUE-TA-AutoAdjustment-r18 是否存在。 */
    BandNR_ExtGroup16_PosUE_TA_AutoAdjustment_r18 posUE_TA_AutoAdjustment_r18; /**< ASN.1 posUE-TA-AutoAdjustment-r18；枚举；OPTIONAL。 */
    bool has_posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18; /**< posSRS-ValidityAreaRRC-InactiveInitialUL-BWP-r18 是否存在。 */
    BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18 posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18; /**< ASN.1 posSRS-ValidityAreaRRC-InactiveInitialUL-BWP-r18；枚举；OPTIONAL。 */
    bool has_posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18; /**< posSRS-ValidityAreaRRC-InactiveOutsideInitialUL-BWP-r18 是否存在。 */
    BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18 posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18; /**< ASN.1 posSRS-ValidityAreaRRC-InactiveOutsideInitialUL-BWP-r18；枚举；OPTIONAL。 */
    bool has_dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18; /**< dl-PRS-MeasurementWithRxFH-RRC-ConnectedForRedCap-r18 是否存在。 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18 dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18; /**< ASN.1 dl-PRS-MeasurementWithRxFH-RRC-ConnectedForRedCap-r18；结构体；OPTIONAL。 */
    bool has_posSRS_TxFH_RRC_ConnectedForRedCap_r18; /**< posSRS-TxFH-RRC-ConnectedForRedCap-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Connected_r18 posSRS_TxFH_RRC_ConnectedForRedCap_r18; /**< ASN.1 posSRS-TxFH-RRC-ConnectedForRedCap-r18；结构体；OPTIONAL。 */
    bool has_posSRS_TxFH_RRC_InactiveForRedCap_r18; /**< posSRS-TxFH-RRC-InactiveForRedCap-r18 是否存在。 */
    PosSRS_TxFrequencyHoppingRRC_Inactive_r18 posSRS_TxFH_RRC_InactiveForRedCap_r18; /**< ASN.1 posSRS-TxFH-RRC-InactiveForRedCap-r18；结构体；OPTIONAL。 */
    bool has_posSRS_BWA_RRC_Inactive_r18; /**< posSRS-BWA-RRC-Inactive-r18 是否存在。 */
    PosSRS_BWA_RRC_Inactive_r18 posSRS_BWA_RRC_Inactive_r18; /**< ASN.1 posSRS-BWA-RRC-Inactive-r18；结构体；OPTIONAL。 */
    bool has_posJointTriggerBySingleDCI_RRC_Connected_r18; /**< posJointTriggerBySingleDCI-RRC-Connected-r18 是否存在。 */
    BandNR_ExtGroup16_PosJointTriggerBySingleDCI_RRC_Connected_r18 posJointTriggerBySingleDCI_RRC_Connected_r18; /**< ASN.1 posJointTriggerBySingleDCI-RRC-Connected-r18；枚举；OPTIONAL。 */
    bool has_dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18; /**< dl-PRS-MeasurementWithRxFH-RRC-InactiveforRedCap-r18 是否存在。 */
    BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18 dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18; /**< ASN.1 dl-PRS-MeasurementWithRxFH-RRC-InactiveforRedCap-r18；枚举；OPTIONAL。 */
    bool has_dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18; /**< dl-PRS-MeasurementWithRxFH-RRC-IdleforRedCap-r18 是否存在。 */
    BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18 dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18; /**< ASN.1 dl-PRS-MeasurementWithRxFH-RRC-IdleforRedCap-r18；枚举；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_Feedback_r18; /**< spatialAdaptation-CSI-Feedback-r18 是否存在。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18 spatialAdaptation_CSI_Feedback_r18; /**< ASN.1 spatialAdaptation-CSI-Feedback-r18；结构体；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackPUSCH_r18; /**< spatialAdaptation-CSI-FeedbackPUSCH-r18 是否存在。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18 spatialAdaptation_CSI_FeedbackPUSCH_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-r18；结构体；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackAperiodic_r18; /**< spatialAdaptation-CSI-FeedbackAperiodic-r18 是否存在。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18 spatialAdaptation_CSI_FeedbackAperiodic_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18；结构体；OPTIONAL。 */
    bool has_spatialAdaptation_CSI_FeedbackPUCCH_r18; /**< spatialAdaptation-CSI-FeedbackPUCCH-r18 是否存在。 */
    BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18 spatialAdaptation_CSI_FeedbackPUCCH_r18; /**< ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_Feedback_r18; /**< powerAdaptation-CSI-Feedback-r18 是否存在。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18 powerAdaptation_CSI_Feedback_r18; /**< ASN.1 powerAdaptation-CSI-Feedback-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackPUSCH_r18; /**< powerAdaptation-CSI-FeedbackPUSCH-r18 是否存在。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18 powerAdaptation_CSI_FeedbackPUSCH_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackPUSCH-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackAperiodic_r18; /**< powerAdaptation-CSI-FeedbackAperiodic-r18 是否存在。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18 powerAdaptation_CSI_FeedbackAperiodic_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackAperiodic-r18；结构体；OPTIONAL。 */
    bool has_powerAdaptation_CSI_FeedbackPUCCH_r18; /**< powerAdaptation-CSI-FeedbackPUCCH-r18 是否存在。 */
    BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18 powerAdaptation_CSI_FeedbackPUCCH_r18; /**< ASN.1 powerAdaptation-CSI-FeedbackPUCCH-r18；结构体；OPTIONAL。 */
    bool has_nes_CellDTX_DRX_r18; /**< nes-CellDTX-DRX-r18 是否存在。 */
    BandNR_ExtGroup16_Nes_CellDTX_DRX_r18 nes_CellDTX_DRX_r18; /**< ASN.1 nes-CellDTX-DRX-r18；枚举；OPTIONAL。 */
    bool has_nes_CellDTX_DRX_DCI2_9_r18; /**< nes-CellDTX-DRX-DCI2-9-r18 是否存在。 */
    BandNR_ExtGroup16_Nes_CellDTX_DRX_DCI2_9_r18 nes_CellDTX_DRX_DCI2_9_r18; /**< ASN.1 nes-CellDTX-DRX-DCI2-9-r18；枚举；OPTIONAL。 */
    bool has_mixCodeBookSpatialAdaptation_r18; /**< mixCodeBookSpatialAdaptation-r18 是否存在。 */
    BandNR_ExtGroup16_MixCodeBookSpatialAdaptation_r18 mixCodeBookSpatialAdaptation_r18; /**< ASN.1 mixCodeBookSpatialAdaptation-r18；枚举；OPTIONAL。 */
    bool has_ntn_DMRS_BundlingNGSO_r18; /**< ntn-DMRS-BundlingNGSO-r18 是否存在。 */
    BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18 ntn_DMRS_BundlingNGSO_r18; /**< ASN.1 ntn-DMRS-BundlingNGSO-r18；枚举；OPTIONAL。 */
    bool has_ltm_BeamIndicationJointTCI_r18; /**< ltm-BeamIndicationJointTCI-r18 是否存在。 */
    BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18 ltm_BeamIndicationJointTCI_r18; /**< ASN.1 ltm-BeamIndicationJointTCI-r18；结构体；OPTIONAL。 */
    bool has_ltm_MAC_CE_JointTCI_r18; /**< ltm-MAC-CE-JointTCI-r18 是否存在。 */
    BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18 ltm_MAC_CE_JointTCI_r18; /**< ASN.1 ltm-MAC-CE-JointTCI-r18；结构体；OPTIONAL。 */
    bool has_ltm_BeamIndicationSeparateTCI_r18; /**< ltm-BeamIndicationSeparateTCI-r18 是否存在。 */
    BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18 ltm_BeamIndicationSeparateTCI_r18; /**< ASN.1 ltm-BeamIndicationSeparateTCI-r18；结构体；OPTIONAL。 */
    bool has_ltm_MAC_CE_SeparateTCI_r18; /**< ltm-MAC-CE-SeparateTCI-r18 是否存在。 */
    BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18 ltm_MAC_CE_SeparateTCI_r18; /**< ASN.1 ltm-MAC-CE-SeparateTCI-r18；结构体；OPTIONAL。 */
    bool has_rach_EarlyTA_Measurement_r18; /**< rach-EarlyTA-Measurement-r18 是否存在。 */
    int64_t rach_EarlyTA_Measurement_r18; /**< ASN.1 rach-EarlyTA-Measurement-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_ue_TA_Measurement_r18; /**< ue-TA-Measurement-r18 是否存在。 */
    int64_t ue_TA_Measurement_r18; /**< ASN.1 ue-TA-Measurement-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_ta_IndicationCellSwitch_r18; /**< ta-IndicationCellSwitch-r18 是否存在。 */
    BandNR_ExtGroup16_Ta_IndicationCellSwitch_r18 ta_IndicationCellSwitch_r18; /**< ASN.1 ta-IndicationCellSwitch-r18；枚举；OPTIONAL。 */
    bool has_multiPUSCH_CG_r18; /**< multiPUSCH-CG-r18 是否存在。 */
    BandNR_ExtGroup16_MultiPUSCH_CG_r18 multiPUSCH_CG_r18; /**< ASN.1 multiPUSCH-CG-r18；枚举；OPTIONAL。 */
    bool has_multiPUSCH_ActiveConfiguredGrant_r18; /**< multiPUSCH-ActiveConfiguredGrant-r18 是否存在。 */
    BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18 multiPUSCH_ActiveConfiguredGrant_r18; /**< ASN.1 multiPUSCH-ActiveConfiguredGrant-r18；结构体；OPTIONAL。 */
    bool has_jointReleaseDCI_r18; /**< jointReleaseDCI-r18 是否存在。 */
    BandNR_ExtGroup16_JointReleaseDCI_r18 jointReleaseDCI_r18; /**< ASN.1 jointReleaseDCI-r18；枚举；OPTIONAL。 */
    bool has_cg_PUSCH_UTO_UCI_Ind_r18; /**< cg-PUSCH-UTO-UCI-Ind-r18 是否存在。 */
    BandNR_ExtGroup16_Cg_PUSCH_UTO_UCI_Ind_r18 cg_PUSCH_UTO_UCI_Ind_r18; /**< ASN.1 cg-PUSCH-UTO-UCI-Ind-r18；枚举；OPTIONAL。 */
    bool has_pdcch_MonitoringResumptionAfterUL_NACK_r18; /**< pdcch-MonitoringResumptionAfterUL-NACK-r18 是否存在。 */
    BandNR_ExtGroup16_Pdcch_MonitoringResumptionAfterUL_NACK_r18 pdcch_MonitoringResumptionAfterUL_NACK_r18; /**< ASN.1 pdcch-MonitoringResumptionAfterUL-NACK-r18；枚举；OPTIONAL。 */
    bool has_support_3MHz_ChannelBW_r18; /**< support-3MHz-ChannelBW-r18 是否存在。 */
    BandNR_ExtGroup16_Support_3MHz_ChannelBW_r18 support_3MHz_ChannelBW_r18; /**< ASN.1 support-3MHz-ChannelBW-r18；枚举；OPTIONAL。 */
    bool has_support_12PRB_CORESET0_r18; /**< support-12PRB-CORESET0-r18 是否存在。 */
    BandNR_ExtGroup16_Support_12PRB_CORESET0_r18 support_12PRB_CORESET0_r18; /**< ASN.1 support-12PRB-CORESET0-r18；枚举；OPTIONAL。 */
    bool has_nr_PDCCH_OverlapLTE_CRS_RE_r18; /**< nr-PDCCH-OverlapLTE-CRS-RE-r18 是否存在。 */
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18 nr_PDCCH_OverlapLTE_CRS_RE_r18; /**< ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-r18；结构体；OPTIONAL。 */
    bool has_nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18; /**< nr-PDCCH-OverlapLTE-CRS-RE-MultiPatterns-r18 是否存在。 */
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18 nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18; /**< ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-MultiPatterns-r18；枚举；OPTIONAL。 */
    bool has_nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18; /**< nr-PDCCH-OverlapLTE-CRS-RE-Span-3-4-r18 是否存在。 */
    BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18 nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18; /**< ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-Span-3-4-r18；枚举；OPTIONAL。 */
    bool has_twoRateMatchingEUTRA_CRS_patterns_3_4_r18; /**< twoRateMatchingEUTRA-CRS-patterns-3-4-r18 是否存在。 */
    BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18 twoRateMatchingEUTRA_CRS_patterns_3_4_r18; /**< ASN.1 twoRateMatchingEUTRA-CRS-patterns-3-4-r18；结构体；OPTIONAL。 */
    bool has_overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18; /**< overlapRateMatchingEUTRA-CRS-Patterns-3-4-Diff-CS-Pool-r18 是否存在。 */
    BandNR_ExtGroup16_OverlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18 overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18; /**< ASN.1 overlapRateMatchingEUTRA-CRS-Patterns-3-4-Diff-CS-Pool-r18；枚举；OPTIONAL。 */
    bool has_ncd_SSB_BWP_Wor_r18; /**< ncd-SSB-BWP-Wor-r18 是否存在。 */
    BandNR_ExtGroup16_Ncd_SSB_BWP_Wor_r18 ncd_SSB_BWP_Wor_r18; /**< ASN.1 ncd-SSB-BWP-Wor-r18；枚举；OPTIONAL。 */
    bool has_rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18; /**< rlm-BM-BFD-CSI-RS-OutsideActiveBWP-r18 是否存在。 */
    BandNR_ExtGroup16_Rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18 rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18; /**< ASN.1 rlm-BM-BFD-CSI-RS-OutsideActiveBWP-r18；枚举；OPTIONAL。 */
    bool has_prach_CoverageEnh_r18; /**< prach-CoverageEnh-r18 是否存在。 */
    BandNR_ExtGroup16_Prach_CoverageEnh_r18 prach_CoverageEnh_r18; /**< ASN.1 prach-CoverageEnh-r18；枚举；OPTIONAL。 */
    bool has_prach_Repetition_r18; /**< prach-Repetition-r18 是否存在。 */
    BandNR_ExtGroup16_Prach_Repetition_r18 prach_Repetition_r18; /**< ASN.1 prach-Repetition-r18；枚举；OPTIONAL。 */
    bool has_dynamicWaveformSwitch_r18; /**< dynamicWaveformSwitch-r18 是否存在。 */
    BandNR_ExtGroup16_DynamicWaveformSwitch_r18 dynamicWaveformSwitch_r18; /**< ASN.1 dynamicWaveformSwitch-r18；枚举；OPTIONAL。 */
    bool has_dynamicWaveformSwitchPHR_r18; /**< dynamicWaveformSwitchPHR-r18 是否存在。 */
    BandNR_ExtGroup16_DynamicWaveformSwitchPHR_r18 dynamicWaveformSwitchPHR_r18; /**< ASN.1 dynamicWaveformSwitchPHR-r18；枚举；OPTIONAL。 */
    bool has_dynamicWaveformSwitchIntraCA_r18; /**< dynamicWaveformSwitchIntraCA-r18 是否存在。 */
    int64_t dynamicWaveformSwitchIntraCA_r18; /**< ASN.1 dynamicWaveformSwitchIntraCA-r18；INTEGER (2..8)，位宽 3 bit；OPTIONAL。 */
    bool has_multiPUSCH_SingleDCI_NonConsSlots_r18; /**< multiPUSCH-SingleDCI-NonConsSlots-r18 是否存在。 */
    BandNR_ExtGroup16_MultiPUSCH_SingleDCI_NonConsSlots_r18 multiPUSCH_SingleDCI_NonConsSlots_r18; /**< ASN.1 multiPUSCH-SingleDCI-NonConsSlots-r18；枚举；OPTIONAL。 */
    bool has_pdc_maxNumberPRS_ResourceProcessedPerSlot_r18; /**< pdc-maxNumberPRS-ResourceProcessedPerSlot-r18 是否存在。 */
    BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18 pdc_maxNumberPRS_ResourceProcessedPerSlot_r18; /**< ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18；结构体；OPTIONAL。 */
    bool has_lowerMSD_r18; /**< lowerMSD-r18 是否存在。 */
    LowerMSD_r18* lowerMSD_r18_items; /**< ASN.1 lowerMSD-r18；SEQUENCE OF LowerMSD_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t lowerMSD_r18_count; /**< lowerMSD-r18 元素个数。 */
    bool has_lowerMSD_ENDC_r18; /**< lowerMSD-ENDC-r18 是否存在。 */
    LowerMSD_r18* lowerMSD_ENDC_r18_items; /**< ASN.1 lowerMSD-ENDC-r18；SEQUENCE OF LowerMSD_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t lowerMSD_ENDC_r18_count; /**< lowerMSD-ENDC-r18 元素个数。 */
    bool has_enhancedChannelRaster_r18; /**< enhancedChannelRaster-r18 是否存在。 */
    BandNR_ExtGroup16_EnhancedChannelRaster_r18 enhancedChannelRaster_r18; /**< ASN.1 enhancedChannelRaster-r18；枚举；OPTIONAL。 */
    bool has_beamSweepingFactorReduction_r18; /**< beamSweepingFactorReduction-r18 是否存在。 */
    BandNR_ExtGroup16_BeamSweepingFactorReduction_r18 beamSweepingFactorReduction_r18; /**< ASN.1 beamSweepingFactorReduction-r18；结构体；OPTIONAL。 */
    bool has_simultaneousReceptionTwoQCL_r18; /**< simultaneousReceptionTwoQCL-r18 是否存在。 */
    BandNR_ExtGroup16_SimultaneousReceptionTwoQCL_r18 simultaneousReceptionTwoQCL_r18; /**< ASN.1 simultaneousReceptionTwoQCL-r18；枚举；OPTIONAL。 */
    bool has_measEnhCAInterFreqFR2_r18; /**< measEnhCAInterFreqFR2-r18 是否存在。 */
    BandNR_ExtGroup16_MeasEnhCAInterFreqFR2_r18 measEnhCAInterFreqFR2_r18; /**< ASN.1 measEnhCAInterFreqFR2-r18；枚举；OPTIONAL。 */
    bool has_tci_StateSwitchInd_r18; /**< tci-StateSwitchInd-r18 是否存在。 */
    BandNR_ExtGroup16_Tci_StateSwitchInd_r18 tci_StateSwitchInd_r18; /**< ASN.1 tci-StateSwitchInd-r18；枚举；OPTIONAL。 */
    bool has_antennaArrayType_r18; /**< antennaArrayType-r18 是否存在。 */
    BandNR_ExtGroup16_AntennaArrayType_r18 antennaArrayType_r18; /**< ASN.1 antennaArrayType-r18；枚举；OPTIONAL。 */
    bool has_locationBasedCondHandoverATG_r18; /**< locationBasedCondHandoverATG-r18 是否存在。 */
    BandNR_ExtGroup16_LocationBasedCondHandoverATG_r18 locationBasedCondHandoverATG_r18; /**< ASN.1 locationBasedCondHandoverATG-r18；枚举；OPTIONAL。 */
    bool has_maxOutputPowerATG_r18; /**< maxOutputPowerATG-r18 是否存在。 */
    int64_t maxOutputPowerATG_r18; /**< ASN.1 maxOutputPowerATG-r18；INTEGER (1..18)，位宽 5 bit；OPTIONAL。 */
    bool has_eventA4BasedCondHandoverNES_r18; /**< eventA4BasedCondHandoverNES-r18 是否存在。 */
    BandNR_ExtGroup16_EventA4BasedCondHandoverNES_r18 eventA4BasedCondHandoverNES_r18; /**< ASN.1 eventA4BasedCondHandoverNES-r18；枚举；OPTIONAL。 */
    bool has_nesBasedCondHandoverWithDCI_r18; /**< nesBasedCondHandoverWithDCI-r18 是否存在。 */
    BandNR_ExtGroup16_NesBasedCondHandoverWithDCI_r18 nesBasedCondHandoverWithDCI_r18; /**< ASN.1 nesBasedCondHandoverWithDCI-r18；枚举；OPTIONAL。 */
    bool has_rachLessHandoverNTN_r18; /**< rachLessHandoverNTN-r18 是否存在。 */
    BandNR_ExtGroup16_RachLessHandoverNTN_r18 rachLessHandoverNTN_r18; /**< ASN.1 rachLessHandoverNTN-r18；枚举；OPTIONAL。 */
    bool has_locationBasedCondHandoverEMC_r18; /**< locationBasedCondHandoverEMC-r18 是否存在。 */
    BandNR_ExtGroup16_LocationBasedCondHandoverEMC_r18 locationBasedCondHandoverEMC_r18; /**< ASN.1 locationBasedCondHandoverEMC-r18；枚举；OPTIONAL。 */
    bool has_mt_CG_SDT_r18; /**< mt-CG-SDT-r18 是否存在。 */
    BandNR_ExtGroup16_Mt_CG_SDT_r18 mt_CG_SDT_r18; /**< ASN.1 mt-CG-SDT-r18；枚举；OPTIONAL。 */
    bool has_posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18; /**< posSRS-PreconfigureRRC-InactiveInitialUL-BWP-r18 是否存在。 */
    BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18 posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18; /**< ASN.1 posSRS-PreconfigureRRC-InactiveInitialUL-BWP-r18；枚举；OPTIONAL。 */
    bool has_posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18; /**< posSRS-PreconfigureRRC-InactiveOutsideInitialUL-BWP-r18 是否存在。 */
    BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18 posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18; /**< ASN.1 posSRS-PreconfigureRRC-InactiveOutsideInitialUL-BWP-r18；枚举；OPTIONAL。 */
    bool has_cg_SDT_PeriodicityExt_r18; /**< cg-SDT-PeriodicityExt-r18 是否存在。 */
    BandNR_ExtGroup16_Cg_SDT_PeriodicityExt_r18 cg_SDT_PeriodicityExt_r18; /**< ASN.1 cg-SDT-PeriodicityExt-r18；枚举；OPTIONAL。 */
    bool has_supportOf2RxXR_r18; /**< supportOf2RxXR-r18 是否存在。 */
    BandNR_ExtGroup16_SupportOf2RxXR_r18 supportOf2RxXR_r18; /**< ASN.1 supportOf2RxXR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief BandNR_ChannelBWs_DL_Fr1
 * @note ASN.1：channelBWs-DL/fr1；源文件第 19533 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct BandNR_ChannelBWs_DL_Fr1 {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    BitString scs_15kHz; /**< ASN.1 scs-15kHz；SIZE (10)，定长；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    BitString scs_30kHz; /**< ASN.1 scs-30kHz；SIZE (10)，定长；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (10)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ChannelBWs_DL_Fr2
 * @note ASN.1：channelBWs-DL/fr2；源文件第 19538 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct BandNR_ChannelBWs_DL_Fr2 {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (3)，定长；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    BitString scs_120kHz; /**< ASN.1 scs-120kHz；SIZE (3)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ChannelBWs_DL
 * @note ASN.1：channelBWs-DL；源文件第 19532 行。
 * @note CHOICE { fr1, fr2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ChannelBWs_DL_Tag {
    BandNR_ChannelBWs_DL_Tag_fr1 = 0, /**< ASN.1 fr1 */
    BandNR_ChannelBWs_DL_Tag_fr2 = 1, /**< ASN.1 fr2 */
} BandNR_ChannelBWs_DL_Tag;

struct BandNR_ChannelBWs_DL {
    BandNR_ChannelBWs_DL_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ChannelBWs_DL_Fr1 fr1; /**< ASN.1 fr1 */
        BandNR_ChannelBWs_DL_Fr2 fr2; /**< ASN.1 fr2 */
    } u;
};


/**
 * @brief BandNR_ChannelBWs_UL_Fr1
 * @note ASN.1：channelBWs-UL/fr1；源文件第 19544 行。
 * @note SEQUENCE { scs-15kHz, scs-30kHz, scs-60kHz }
 */
struct BandNR_ChannelBWs_UL_Fr1 {
    bool has_scs_15kHz; /**< scs-15kHz 是否存在。 */
    BitString scs_15kHz; /**< ASN.1 scs-15kHz；SIZE (10)，定长；OPTIONAL。 */
    bool has_scs_30kHz; /**< scs-30kHz 是否存在。 */
    BitString scs_30kHz; /**< ASN.1 scs-30kHz；SIZE (10)，定长；OPTIONAL。 */
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (10)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ChannelBWs_UL_Fr2
 * @note ASN.1：channelBWs-UL/fr2；源文件第 19549 行。
 * @note SEQUENCE { scs-60kHz, scs-120kHz }
 */
struct BandNR_ChannelBWs_UL_Fr2 {
    bool has_scs_60kHz; /**< scs-60kHz 是否存在。 */
    BitString scs_60kHz; /**< ASN.1 scs-60kHz；SIZE (3)，定长；OPTIONAL。 */
    bool has_scs_120kHz; /**< scs-120kHz 是否存在。 */
    BitString scs_120kHz; /**< ASN.1 scs-120kHz；SIZE (3)，定长；OPTIONAL。 */
};


/**
 * @brief BandNR_ChannelBWs_UL
 * @note ASN.1：channelBWs-UL；源文件第 19543 行。
 * @note CHOICE { fr1, fr2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandNR_ChannelBWs_UL_Tag {
    BandNR_ChannelBWs_UL_Tag_fr1 = 0, /**< ASN.1 fr1 */
    BandNR_ChannelBWs_UL_Tag_fr2 = 1, /**< ASN.1 fr2 */
} BandNR_ChannelBWs_UL_Tag;

struct BandNR_ChannelBWs_UL {
    BandNR_ChannelBWs_UL_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandNR_ChannelBWs_UL_Fr1 fr1; /**< ASN.1 fr1 */
        BandNR_ChannelBWs_UL_Fr2 fr2; /**< ASN.1 fr2 */
    } u;
};


/**
 * @brief BandNR
 * @note ASN.1：BandNR；源文件第 19518 行。
 * @note BandNR ::= SEQUENCE { bandNR, modifiedMPR-Behaviour, mimo-ParametersPerBand, extendedCP,...
 */
struct BandNR {
    FreqBandIndicatorNR bandNR; /**< ASN.1 bandNR；INTEGER (1..1024)，位宽 10 bit。 */
    bool has_modifiedMPR_Behaviour; /**< modifiedMPR-Behaviour 是否存在。 */
    BitString modifiedMPR_Behaviour; /**< ASN.1 modifiedMPR-Behaviour；SIZE (8)，定长；OPTIONAL。 */
    bool has_mimo_ParametersPerBand; /**< mimo-ParametersPerBand 是否存在。 */
    MIMO_ParametersPerBand mimo_ParametersPerBand; /**< ASN.1 mimo-ParametersPerBand；结构体；OPTIONAL。 */
    bool has_extendedCP; /**< extendedCP 是否存在。 */
    BandNR_ExtendedCP extendedCP; /**< ASN.1 extendedCP；枚举；OPTIONAL。 */
    bool has_multipleTCI; /**< multipleTCI 是否存在。 */
    BandNR_MultipleTCI multipleTCI; /**< ASN.1 multipleTCI；枚举；OPTIONAL。 */
    bool has_bwp_WithoutRestriction; /**< bwp-WithoutRestriction 是否存在。 */
    BandNR_Bwp_WithoutRestriction bwp_WithoutRestriction; /**< ASN.1 bwp-WithoutRestriction；枚举；OPTIONAL。 */
    bool has_bwp_SameNumerology; /**< bwp-SameNumerology 是否存在。 */
    BandNR_Bwp_SameNumerology bwp_SameNumerology; /**< ASN.1 bwp-SameNumerology；枚举；OPTIONAL。 */
    bool has_bwp_DiffNumerology; /**< bwp-DiffNumerology 是否存在。 */
    BandNR_Bwp_DiffNumerology bwp_DiffNumerology; /**< ASN.1 bwp-DiffNumerology；枚举；OPTIONAL。 */
    bool has_crossCarrierScheduling_SameSCS; /**< crossCarrierScheduling-SameSCS 是否存在。 */
    BandNR_CrossCarrierScheduling_SameSCS crossCarrierScheduling_SameSCS; /**< ASN.1 crossCarrierScheduling-SameSCS；枚举；OPTIONAL。 */
    bool has_pdsch_256QAM_FR2; /**< pdsch-256QAM-FR2 是否存在。 */
    BandNR_Pdsch_256QAM_FR2 pdsch_256QAM_FR2; /**< ASN.1 pdsch-256QAM-FR2；枚举；OPTIONAL。 */
    bool has_pusch_256QAM; /**< pusch-256QAM 是否存在。 */
    BandNR_Pusch_256QAM pusch_256QAM; /**< ASN.1 pusch-256QAM；枚举；OPTIONAL。 */
    bool has_ue_PowerClass; /**< ue-PowerClass 是否存在。 */
    BandNR_Ue_PowerClass ue_PowerClass; /**< ASN.1 ue-PowerClass；枚举；OPTIONAL。 */
    bool has_rateMatchingLTE_CRS; /**< rateMatchingLTE-CRS 是否存在。 */
    BandNR_RateMatchingLTE_CRS rateMatchingLTE_CRS; /**< ASN.1 rateMatchingLTE-CRS；枚举；OPTIONAL。 */
    bool has_channelBWs_DL; /**< channelBWs-DL 是否存在。 */
    BandNR_ChannelBWs_DL channelBWs_DL; /**< ASN.1 channelBWs-DL；结构体；OPTIONAL。 */
    bool has_channelBWs_UL; /**< channelBWs-UL 是否存在。 */
    BandNR_ChannelBWs_UL channelBWs_UL; /**< ASN.1 channelBWs-UL；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BandNR_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    BandNR_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    BandNR_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    BandNR_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    BandNR_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    BandNR_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    BandNR_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    BandNR_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    BandNR_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    BandNR_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup11; /**< 第 11 组是否出现。 */
    BandNR_ExtGroup11 extGroup11; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup12; /**< 第 12 组是否出现。 */
    BandNR_ExtGroup12 extGroup12; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup13; /**< 第 13 组是否出现。 */
    BandNR_ExtGroup13 extGroup13; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup14; /**< 第 14 组是否出现。 */
    BandNR_ExtGroup14 extGroup14; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup15; /**< 第 15 组是否出现。 */
    BandNR_ExtGroup15 extGroup15; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup16; /**< 第 16 组是否出现。 */
    BandNR_ExtGroup16 extGroup16; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief BandNR_v16c0
 * @note ASN.1：BandNR-v16c0；源文件第 20159 行。
 * @note BandNR-v16c0 ::= SEQUENCE { pusch-RepetitionTypeA-v16c0 }
 */
struct BandNR_v16c0 {
    bool has_pusch_RepetitionTypeA_v16c0; /**< pusch-RepetitionTypeA-v16c0 是否存在。 */
    BandNR_v16c0_Pusch_RepetitionTypeA_v16c0 pusch_RepetitionTypeA_v16c0; /**< ASN.1 pusch-RepetitionTypeA-v16c0；枚举；OPTIONAL。 */
};


/**
 * @brief LowerMSD_r18_Aggressorband1_r18
 * @note ASN.1：aggressorband1-r18；源文件第 20165 行。
 * @note CHOICE { nr, eutra }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum LowerMSD_r18_Aggressorband1_r18_Tag {
    LowerMSD_r18_Aggressorband1_r18_Tag_nr = 0, /**< ASN.1 nr */
    LowerMSD_r18_Aggressorband1_r18_Tag_eutra = 1, /**< ASN.1 eutra */
} LowerMSD_r18_Aggressorband1_r18_Tag;

struct LowerMSD_r18_Aggressorband1_r18 {
    LowerMSD_r18_Aggressorband1_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        FreqBandIndicatorNR nr; /**< ASN.1 nr */
        FreqBandIndicatorEUTRA eutra; /**< ASN.1 eutra */
    } u;
};


/**
 * @brief LowerMSD_r18
 * @note ASN.1：LowerMSD-r18；源文件第 20164 行。
 * @note LowerMSD-r18 ::= SEQUENCE { aggressorband1-r18, aggressorband2-r18, msd-Information-r18 }
 */
struct LowerMSD_r18 {
    LowerMSD_r18_Aggressorband1_r18 aggressorband1_r18; /**< ASN.1 aggressorband1-r18；结构体。 */
    bool has_aggressorband2_r18; /**< aggressorband2-r18 是否存在。 */
    FreqBandIndicatorNR aggressorband2_r18; /**< ASN.1 aggressorband2-r18；INTEGER (1..1024)，位宽 10 bit；OPTIONAL。 */
    MSD_Information_r18* msd_Information_r18_items; /**< ASN.1 msd-Information-r18；SEQUENCE OF MSD_Information_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t msd_Information_r18_count; /**< msd-Information-r18 元素个数。 */
};


/**
 * @brief MSD_Information_r18
 * @note ASN.1：MSD-Information-r18；源文件第 20173 行。
 * @note MSD-Information-r18 ::= SEQUENCE { msd-Type-r18, msd-PowerClass-r18, msd-Class-r18 }
 */
struct MSD_Information_r18 {
    MSD_Information_r18_Msd_Type_r18 msd_Type_r18; /**< ASN.1 msd-Type-r18；枚举。 */
    MSD_Information_r18_Msd_PowerClass_r18 msd_PowerClass_r18; /**< ASN.1 msd-PowerClass-r18；枚举。 */
    MSD_Information_r18_Msd_Class_r18 msd_Class_r18; /**< ASN.1 msd-Class-r18；枚举。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup1
 * @note ASN.1：RF_ParametersMRDC_ExtGroup1；源文件第 20187 行。
 */
struct RF_ParametersMRDC_ExtGroup1 {
    bool has_srs_SwitchingTimeRequested; /**< srs-SwitchingTimeRequested 是否存在。 */
    RF_ParametersMRDC_ExtGroup1_Srs_SwitchingTimeRequested srs_SwitchingTimeRequested; /**< ASN.1 srs-SwitchingTimeRequested；枚举；OPTIONAL。 */
    bool has_supportedBandCombinationList_v1540; /**< supportedBandCombinationList-v1540 是否存在。 */
    BandCombinationList_v1540 supportedBandCombinationList_v1540; /**< ASN.1 supportedBandCombinationList-v1540；SEQUENCE OF BandCombination_v1540，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup2
 * @note ASN.1：RF_ParametersMRDC_ExtGroup2；源文件第 20191 行。
 */
struct RF_ParametersMRDC_ExtGroup2 {
    bool has_supportedBandCombinationList_v1550; /**< supportedBandCombinationList-v1550 是否存在。 */
    BandCombinationList_v1550 supportedBandCombinationList_v1550; /**< ASN.1 supportedBandCombinationList-v1550；SEQUENCE OF BandCombination_v1550，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup3
 * @note ASN.1：RF_ParametersMRDC_ExtGroup3；源文件第 20194 行。
 */
struct RF_ParametersMRDC_ExtGroup3 {
    bool has_supportedBandCombinationList_v1560; /**< supportedBandCombinationList-v1560 是否存在。 */
    BandCombinationList_v1560 supportedBandCombinationList_v1560; /**< ASN.1 supportedBandCombinationList-v1560；SEQUENCE OF BandCombination_v1560，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only; /**< supportedBandCombinationListNEDC-Only 是否存在。 */
    BandCombinationList supportedBandCombinationListNEDC_Only; /**< ASN.1 supportedBandCombinationListNEDC-Only；SEQUENCE OF BandCombination，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup4
 * @note ASN.1：RF_ParametersMRDC_ExtGroup4；源文件第 20198 行。
 */
struct RF_ParametersMRDC_ExtGroup4 {
    bool has_supportedBandCombinationList_v1570; /**< supportedBandCombinationList-v1570 是否存在。 */
    BandCombinationList_v1570 supportedBandCombinationList_v1570; /**< ASN.1 supportedBandCombinationList-v1570；SEQUENCE OF BandCombination_v1570，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup5
 * @note ASN.1：RF_ParametersMRDC_ExtGroup5；源文件第 20201 行。
 */
struct RF_ParametersMRDC_ExtGroup5 {
    bool has_supportedBandCombinationList_v1580; /**< supportedBandCombinationList-v1580 是否存在。 */
    BandCombinationList_v1580 supportedBandCombinationList_v1580; /**< ASN.1 supportedBandCombinationList-v1580；SEQUENCE OF BandCombination_v1580，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup6
 * @note ASN.1：RF_ParametersMRDC_ExtGroup6；源文件第 20204 行。
 */
struct RF_ParametersMRDC_ExtGroup6 {
    bool has_supportedBandCombinationList_v1590; /**< supportedBandCombinationList-v1590 是否存在。 */
    BandCombinationList_v1590 supportedBandCombinationList_v1590; /**< ASN.1 supportedBandCombinationList-v1590；SEQUENCE OF BandCombination_v1590，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0
 * @note ASN.1：supportedBandCombinationListNEDC-Only-v15a0；源文件第 20208 行。
 * @note SEQUENCE { supportedBandCombinationList-v1540, supportedBandCombinationList-v...
 */
struct RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0 {
    bool has_supportedBandCombinationList_v1540; /**< supportedBandCombinationList-v1540 是否存在。 */
    BandCombinationList_v1540 supportedBandCombinationList_v1540; /**< ASN.1 supportedBandCombinationList-v1540；SEQUENCE OF BandCombination_v1540，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_v1560; /**< supportedBandCombinationList-v1560 是否存在。 */
    BandCombinationList_v1560 supportedBandCombinationList_v1560; /**< ASN.1 supportedBandCombinationList-v1560；SEQUENCE OF BandCombination_v1560，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_v1570; /**< supportedBandCombinationList-v1570 是否存在。 */
    BandCombinationList_v1570 supportedBandCombinationList_v1570; /**< ASN.1 supportedBandCombinationList-v1570；SEQUENCE OF BandCombination_v1570，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_v1580; /**< supportedBandCombinationList-v1580 是否存在。 */
    BandCombinationList_v1580 supportedBandCombinationList_v1580; /**< ASN.1 supportedBandCombinationList-v1580；SEQUENCE OF BandCombination_v1580，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_v1590; /**< supportedBandCombinationList-v1590 是否存在。 */
    BandCombinationList_v1590 supportedBandCombinationList_v1590; /**< ASN.1 supportedBandCombinationList-v1590；SEQUENCE OF BandCombination_v1590，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup7
 * @note ASN.1：RF_ParametersMRDC_ExtGroup7；源文件第 20207 行。
 */
struct RF_ParametersMRDC_ExtGroup7 {
    bool has_supportedBandCombinationListNEDC_Only_v15a0; /**< supportedBandCombinationListNEDC-Only-v15a0 是否存在。 */
    RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0 supportedBandCombinationListNEDC_Only_v15a0; /**< ASN.1 supportedBandCombinationListNEDC-Only-v15a0；结构体；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup8
 * @note ASN.1：RF_ParametersMRDC_ExtGroup8；源文件第 20216 行。
 */
struct RF_ParametersMRDC_ExtGroup8 {
    bool has_supportedBandCombinationList_v1610; /**< supportedBandCombinationList-v1610 是否存在。 */
    BandCombinationList_v1610 supportedBandCombinationList_v1610; /**< ASN.1 supportedBandCombinationList-v1610；SEQUENCE OF BandCombination_v1610，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1610; /**< supportedBandCombinationListNEDC-Only-v1610 是否存在。 */
    BandCombinationList_v1610 supportedBandCombinationListNEDC_Only_v1610; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1610；SEQUENCE OF BandCombination_v1610，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_r16; /**< supportedBandCombinationList-UplinkTxSwitch-r16 是否存在。 */
    BandCombinationList_UplinkTxSwitch_r16 supportedBandCombinationList_UplinkTxSwitch_r16; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-r16；SEQUENCE OF BandCombination_UplinkTxSwitch_r16，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup9
 * @note ASN.1：RF_ParametersMRDC_ExtGroup9；源文件第 20221 行。
 */
struct RF_ParametersMRDC_ExtGroup9 {
    bool has_supportedBandCombinationList_v1630; /**< supportedBandCombinationList-v1630 是否存在。 */
    BandCombinationList_v1630 supportedBandCombinationList_v1630; /**< ASN.1 supportedBandCombinationList-v1630；SEQUENCE OF BandCombination_v1630，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1630; /**< supportedBandCombinationListNEDC-Only-v1630 是否存在。 */
    BandCombinationList_v1630 supportedBandCombinationListNEDC_Only_v1630; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1630；SEQUENCE OF BandCombination_v1630，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1630; /**< supportedBandCombinationList-UplinkTxSwitch-v1630 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1630 supportedBandCombinationList_UplinkTxSwitch_v1630; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1630；SEQUENCE OF BandCombination_UplinkTxSwitch_v1630，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup10
 * @note ASN.1：RF_ParametersMRDC_ExtGroup10；源文件第 20226 行。
 */
struct RF_ParametersMRDC_ExtGroup10 {
    bool has_supportedBandCombinationList_v1640; /**< supportedBandCombinationList-v1640 是否存在。 */
    BandCombinationList_v1640 supportedBandCombinationList_v1640; /**< ASN.1 supportedBandCombinationList-v1640；SEQUENCE OF BandCombination_v1640，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1640; /**< supportedBandCombinationListNEDC-Only-v1640 是否存在。 */
    BandCombinationList_v1640 supportedBandCombinationListNEDC_Only_v1640; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1640；SEQUENCE OF BandCombination_v1640，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1640; /**< supportedBandCombinationList-UplinkTxSwitch-v1640 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1640 supportedBandCombinationList_UplinkTxSwitch_v1640; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1640；SEQUENCE OF BandCombination_UplinkTxSwitch_v1640，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup11
 * @note ASN.1：RF_ParametersMRDC_ExtGroup11；源文件第 20231 行。
 */
struct RF_ParametersMRDC_ExtGroup11 {
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1670; /**< supportedBandCombinationList-UplinkTxSwitch-v1670 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1670 supportedBandCombinationList_UplinkTxSwitch_v1670; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1670；SEQUENCE OF BandCombination_UplinkTxSwitch_v1670，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup12
 * @note ASN.1：RF_ParametersMRDC_ExtGroup12；源文件第 20234 行。
 */
struct RF_ParametersMRDC_ExtGroup12 {
    bool has_supportedBandCombinationList_v1700; /**< supportedBandCombinationList-v1700 是否存在。 */
    BandCombinationList_v1700 supportedBandCombinationList_v1700; /**< ASN.1 supportedBandCombinationList-v1700；SEQUENCE OF BandCombination_v1700，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1700; /**< supportedBandCombinationList-UplinkTxSwitch-v1700 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1700 supportedBandCombinationList_UplinkTxSwitch_v1700; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1700；SEQUENCE OF BandCombination_UplinkTxSwitch_v1700，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720
 * @note ASN.1：supportedBandCombinationListNEDC-Only-v1720；源文件第 20240 行。
 * @note SEQUENCE { supportedBandCombinationList-v1700, supportedBandCombinationList-v...
 */
struct RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720 {
    bool has_supportedBandCombinationList_v1700; /**< supportedBandCombinationList-v1700 是否存在。 */
    BandCombinationList_v1700 supportedBandCombinationList_v1700; /**< ASN.1 supportedBandCombinationList-v1700；SEQUENCE OF BandCombination_v1700，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_v1720; /**< supportedBandCombinationList-v1720 是否存在。 */
    BandCombinationList_v1720 supportedBandCombinationList_v1720; /**< ASN.1 supportedBandCombinationList-v1720；SEQUENCE OF BandCombination_v1720，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup13
 * @note ASN.1：RF_ParametersMRDC_ExtGroup13；源文件第 20238 行。
 */
struct RF_ParametersMRDC_ExtGroup13 {
    bool has_supportedBandCombinationList_v1720; /**< supportedBandCombinationList-v1720 是否存在。 */
    BandCombinationList_v1720 supportedBandCombinationList_v1720; /**< ASN.1 supportedBandCombinationList-v1720；SEQUENCE OF BandCombination_v1720，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1720; /**< supportedBandCombinationListNEDC-Only-v1720 是否存在。 */
    RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720 supportedBandCombinationListNEDC_Only_v1720; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1720；结构体；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1720; /**< supportedBandCombinationList-UplinkTxSwitch-v1720 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1720 supportedBandCombinationList_UplinkTxSwitch_v1720; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1720；SEQUENCE OF BandCombination_UplinkTxSwitch_v1720，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup14
 * @note ASN.1：RF_ParametersMRDC_ExtGroup14；源文件第 20246 行。
 */
struct RF_ParametersMRDC_ExtGroup14 {
    bool has_supportedBandCombinationList_v1730; /**< supportedBandCombinationList-v1730 是否存在。 */
    BandCombinationList_v1730 supportedBandCombinationList_v1730; /**< ASN.1 supportedBandCombinationList-v1730；SEQUENCE OF BandCombination_v1730，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1730; /**< supportedBandCombinationListNEDC-Only-v1730 是否存在。 */
    BandCombinationList_v1730 supportedBandCombinationListNEDC_Only_v1730; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1730；SEQUENCE OF BandCombination_v1730，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1730; /**< supportedBandCombinationList-UplinkTxSwitch-v1730 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1730 supportedBandCombinationList_UplinkTxSwitch_v1730; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1730；SEQUENCE OF BandCombination_UplinkTxSwitch_v1730，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup15
 * @note ASN.1：RF_ParametersMRDC_ExtGroup15；源文件第 20251 行。
 */
struct RF_ParametersMRDC_ExtGroup15 {
    bool has_supportedBandCombinationList_v1740; /**< supportedBandCombinationList-v1740 是否存在。 */
    BandCombinationList_v1740 supportedBandCombinationList_v1740; /**< ASN.1 supportedBandCombinationList-v1740；SEQUENCE OF BandCombination_v1740，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1740; /**< supportedBandCombinationListNEDC-Only-v1740 是否存在。 */
    BandCombinationList_v1740 supportedBandCombinationListNEDC_Only_v1740; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1740；SEQUENCE OF BandCombination_v1740，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1740; /**< supportedBandCombinationList-UplinkTxSwitch-v1740 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1740 supportedBandCombinationList_UplinkTxSwitch_v1740; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1740；SEQUENCE OF BandCombination_UplinkTxSwitch_v1740，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup16
 * @note ASN.1：RF_ParametersMRDC_ExtGroup16；源文件第 20256 行。
 */
struct RF_ParametersMRDC_ExtGroup16 {
    bool has_dummy1; /**< dummy1 是否存在。 */
    BandCombinationList_v1770 dummy1; /**< ASN.1 dummy1；SEQUENCE OF BandCombination_v1770，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1770 dummy2; /**< ASN.1 dummy2；SEQUENCE OF BandCombination_UplinkTxSwitch_v1770，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup17
 * @note ASN.1：RF_ParametersMRDC_ExtGroup17；源文件第 20260 行。
 */
struct RF_ParametersMRDC_ExtGroup17 {
    bool has_supportedBandCombinationList_v1780; /**< supportedBandCombinationList-v1780 是否存在。 */
    BandCombinationList_v1780 supportedBandCombinationList_v1780; /**< ASN.1 supportedBandCombinationList-v1780；SEQUENCE OF BandCombination_v1780，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v1780; /**< supportedBandCombinationListNEDC-Only-v1780 是否存在。 */
    BandCombinationList_v1780 supportedBandCombinationListNEDC_Only_v1780; /**< ASN.1 supportedBandCombinationListNEDC-Only-v1780；SEQUENCE OF BandCombination_v1780，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1780; /**< supportedBandCombinationList-UplinkTxSwitch-v1780 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1780 supportedBandCombinationList_UplinkTxSwitch_v1780; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1780；SEQUENCE OF BandCombination_UplinkTxSwitch_v1780，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_ExtGroup18
 * @note ASN.1：RF_ParametersMRDC_ExtGroup18；源文件第 20265 行。
 */
struct RF_ParametersMRDC_ExtGroup18 {
    bool has_supportedBandCombinationList_v1800; /**< supportedBandCombinationList-v1800 是否存在。 */
    BandCombinationList_v1800 supportedBandCombinationList_v1800; /**< ASN.1 supportedBandCombinationList-v1800；SEQUENCE OF BandCombination_v1800，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationList_UplinkTxSwitch_v1800; /**< supportedBandCombinationList-UplinkTxSwitch-v1800 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v1800 supportedBandCombinationList_UplinkTxSwitch_v1800; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v1800；SEQUENCE OF BandCombination_UplinkTxSwitch_v1800，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC
 * @note ASN.1：RF-ParametersMRDC；源文件第 20183 行。
 * @note RF-ParametersMRDC ::= SEQUENCE { supportedBandCombinationList, appliedFreqBandListFilter, srs-Switc...
 */
struct RF_ParametersMRDC {
    bool has_supportedBandCombinationList; /**< supportedBandCombinationList 是否存在。 */
    BandCombinationList supportedBandCombinationList; /**< ASN.1 supportedBandCombinationList；SEQUENCE OF BandCombination，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_appliedFreqBandListFilter; /**< appliedFreqBandListFilter 是否存在。 */
    FreqBandList appliedFreqBandListFilter; /**< ASN.1 appliedFreqBandListFilter；SEQUENCE OF FreqBandInformation，SIZE (1..1280)；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RF_ParametersMRDC_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RF_ParametersMRDC_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    RF_ParametersMRDC_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    RF_ParametersMRDC_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    RF_ParametersMRDC_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    RF_ParametersMRDC_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    RF_ParametersMRDC_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    RF_ParametersMRDC_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    RF_ParametersMRDC_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    RF_ParametersMRDC_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup11; /**< 第 11 组是否出现。 */
    RF_ParametersMRDC_ExtGroup11 extGroup11; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup12; /**< 第 12 组是否出现。 */
    RF_ParametersMRDC_ExtGroup12 extGroup12; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup13; /**< 第 13 组是否出现。 */
    RF_ParametersMRDC_ExtGroup13 extGroup13; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup14; /**< 第 14 组是否出现。 */
    RF_ParametersMRDC_ExtGroup14 extGroup14; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup15; /**< 第 15 组是否出现。 */
    RF_ParametersMRDC_ExtGroup15 extGroup15; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup16; /**< 第 16 组是否出现。 */
    RF_ParametersMRDC_ExtGroup16 extGroup16; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup17; /**< 第 17 组是否出现。 */
    RF_ParametersMRDC_ExtGroup17 extGroup17; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup18; /**< 第 18 组是否出现。 */
    RF_ParametersMRDC_ExtGroup18 extGroup18; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RF_ParametersMRDC_v15g0
 * @note ASN.1：RF-ParametersMRDC-v15g0；源文件第 20272 行。
 * @note RF-ParametersMRDC-v15g0 ::= SEQUENCE { supportedBandCombinationList-v15g0, supportedBandCombinationListNE...
 */
struct RF_ParametersMRDC_v15g0 {
    bool has_supportedBandCombinationList_v15g0; /**< supportedBandCombinationList-v15g0 是否存在。 */
    BandCombinationList_v15g0 supportedBandCombinationList_v15g0; /**< ASN.1 supportedBandCombinationList-v15g0；SEQUENCE OF BandCombination_v15g0，SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandCombinationListNEDC_Only_v15g0; /**< supportedBandCombinationListNEDC-Only-v15g0 是否存在。 */
    BandCombinationList_v15g0 supportedBandCombinationListNEDC_Only_v15g0; /**< ASN.1 supportedBandCombinationListNEDC-Only-v15g0；SEQUENCE OF BandCombination_v15g0，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_v15n0
 * @note ASN.1：RF-ParametersMRDC-v15n0；源文件第 20277 行。
 * @note RF-ParametersMRDC-v15n0 ::= SEQUENCE { supportedBandCombinationList-v15n0 }
 */
struct RF_ParametersMRDC_v15n0 {
    bool has_supportedBandCombinationList_v15n0; /**< supportedBandCombinationList-v15n0 是否存在。 */
    BandCombinationList_v15n0 supportedBandCombinationList_v15n0; /**< ASN.1 supportedBandCombinationList-v15n0；SEQUENCE OF BandCombination_v15n0，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RF_ParametersMRDC_v16e0
 * @note ASN.1：RF-ParametersMRDC-v16e0；源文件第 20281 行。
 * @note RF-ParametersMRDC-v16e0 ::= SEQUENCE { supportedBandCombinationList-UplinkTxSwitch-v16e0 }
 */
struct RF_ParametersMRDC_v16e0 {
    bool has_supportedBandCombinationList_UplinkTxSwitch_v16e0; /**< supportedBandCombinationList-UplinkTxSwitch-v16e0 是否存在。 */
    BandCombinationList_UplinkTxSwitch_v16e0 supportedBandCombinationList_UplinkTxSwitch_v16e0; /**< ASN.1 supportedBandCombinationList-UplinkTxSwitch-v16e0；SEQUENCE OF BandCombination_UplinkTxSwitch_v16e0，SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RLC_Parameters_ExtGroup1
 * @note ASN.1：RLC_Parameters_ExtGroup1；源文件第 20293 行。
 */
struct RLC_Parameters_ExtGroup1 {
    bool has_extendedT_PollRetransmit_r16; /**< extendedT-PollRetransmit-r16 是否存在。 */
    RLC_Parameters_ExtGroup1_ExtendedT_PollRetransmit_r16 extendedT_PollRetransmit_r16; /**< ASN.1 extendedT-PollRetransmit-r16；枚举；OPTIONAL。 */
    bool has_extendedT_StatusProhibit_r16; /**< extendedT-StatusProhibit-r16 是否存在。 */
    RLC_Parameters_ExtGroup1_ExtendedT_StatusProhibit_r16 extendedT_StatusProhibit_r16; /**< ASN.1 extendedT-StatusProhibit-r16；枚举；OPTIONAL。 */
};


/**
 * @brief RLC_Parameters_ExtGroup2
 * @note ASN.1：RLC_Parameters_ExtGroup2；源文件第 20297 行。
 */
struct RLC_Parameters_ExtGroup2 {
    bool has_am_WithLongSN_RedCap_r17; /**< am-WithLongSN-RedCap-r17 是否存在。 */
    RLC_Parameters_ExtGroup2_Am_WithLongSN_RedCap_r17 am_WithLongSN_RedCap_r17; /**< ASN.1 am-WithLongSN-RedCap-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RLC_Parameters_ExtGroup3
 * @note ASN.1：RLC_Parameters_ExtGroup3；源文件第 20300 行。
 */
struct RLC_Parameters_ExtGroup3 {
    bool has_am_WithLongSN_NCR_r18; /**< am-WithLongSN-NCR-r18 是否存在。 */
    RLC_Parameters_ExtGroup3_Am_WithLongSN_NCR_r18 am_WithLongSN_NCR_r18; /**< ASN.1 am-WithLongSN-NCR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief RLC_Parameters
 * @note ASN.1：RLC-Parameters；源文件第 20288 行。
 * @note RLC-Parameters ::= SEQUENCE { am-WithShortSN, um-WithShortSN, um-WithLongSN, extendedT-PollRetra...
 */
struct RLC_Parameters {
    bool has_am_WithShortSN; /**< am-WithShortSN 是否存在。 */
    RLC_Parameters_Am_WithShortSN am_WithShortSN; /**< ASN.1 am-WithShortSN；枚举；OPTIONAL。 */
    bool has_um_WithShortSN; /**< um-WithShortSN 是否存在。 */
    RLC_Parameters_Um_WithShortSN um_WithShortSN; /**< ASN.1 um-WithShortSN；枚举；OPTIONAL。 */
    bool has_um_WithLongSN; /**< um-WithLongSN 是否存在。 */
    RLC_Parameters_Um_WithLongSN um_WithLongSN; /**< ASN.1 um-WithLongSN；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RLC_Parameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RLC_Parameters_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    RLC_Parameters_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SDAP_Parameters_ExtGroup1
 * @note ASN.1：SDAP_Parameters_ExtGroup1；源文件第 20311 行。
 */
struct SDAP_Parameters_ExtGroup1 {
    bool has_sdap_QOS_IAB_r16; /**< sdap-QOS-IAB-r16 是否存在。 */
    SDAP_Parameters_ExtGroup1_Sdap_QOS_IAB_r16 sdap_QOS_IAB_r16; /**< ASN.1 sdap-QOS-IAB-r16；枚举；OPTIONAL。 */
    bool has_sdapHeaderIAB_r16; /**< sdapHeaderIAB-r16 是否存在。 */
    SDAP_Parameters_ExtGroup1_SdapHeaderIAB_r16 sdapHeaderIAB_r16; /**< ASN.1 sdapHeaderIAB-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SDAP_Parameters_ExtGroup2
 * @note ASN.1：SDAP_Parameters_ExtGroup2；源文件第 20315 行。
 */
struct SDAP_Parameters_ExtGroup2 {
    bool has_sdap_QOS_NCR_r18; /**< sdap-QOS-NCR-r18 是否存在。 */
    SDAP_Parameters_ExtGroup2_Sdap_QOS_NCR_r18 sdap_QOS_NCR_r18; /**< ASN.1 sdap-QOS-NCR-r18；枚举；OPTIONAL。 */
    bool has_sdap_HeaderNCR_r18; /**< sdap-HeaderNCR-r18 是否存在。 */
    SDAP_Parameters_ExtGroup2_Sdap_HeaderNCR_r18 sdap_HeaderNCR_r18; /**< ASN.1 sdap-HeaderNCR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SDAP_Parameters
 * @note ASN.1：SDAP-Parameters；源文件第 20308 行。
 * @note SDAP-Parameters ::= SEQUENCE { as-ReflectiveQoS, sdap-QOS-IAB-r16, sdapHeaderIAB-r16, sdap-QOS-NC...
 */
struct SDAP_Parameters {
    bool has_as_ReflectiveQoS; /**< as-ReflectiveQoS 是否存在。 */
    SDAP_Parameters_As_ReflectiveQoS as_ReflectiveQoS; /**< ASN.1 as-ReflectiveQoS；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SDAP_Parameters_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SDAP_Parameters_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SharedSpectrumChAccessParamsSidelinkPerBand_r18
 * @note ASN.1：SharedSpectrumChAccessParamsSidelinkPerBand-r18；源文件第 20446 行。
 * @note SharedSpectrumChAccessParamsSidelinkPerBand-r18 ::= SEQUENCE { sl-DynamicChannelAccess-r18, sl-LBT-Option1-r18, sl-LBT-Option2-r1...
 */
struct SharedSpectrumChAccessParamsSidelinkPerBand_r18 {
    bool has_sl_DynamicChannelAccess_r18; /**< sl-DynamicChannelAccess-r18 是否存在。 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_DynamicChannelAccess_r18 sl_DynamicChannelAccess_r18; /**< ASN.1 sl-DynamicChannelAccess-r18；枚举；OPTIONAL。 */
    bool has_sl_LBT_Option1_r18; /**< sl-LBT-Option1-r18 是否存在。 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option1_r18 sl_LBT_Option1_r18; /**< ASN.1 sl-LBT-Option1-r18；枚举；OPTIONAL。 */
    bool has_sl_LBT_Option2_r18; /**< sl-LBT-Option2-r18 是否存在。 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option2_r18 sl_LBT_Option2_r18; /**< ASN.1 sl-LBT-Option2-r18；枚举；OPTIONAL。 */
    bool has_sl_Interlace_RB_TxRx_r18; /**< sl-Interlace-RB-TxRx-r18 是否存在。 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_Interlace_RB_TxRx_r18 sl_Interlace_RB_TxRx_r18; /**< ASN.1 sl-Interlace-RB-TxRx-r18；枚举；OPTIONAL。 */
    bool has_sl_PowerClassUnlicensed_r18; /**< sl-PowerClassUnlicensed-r18 是否存在。 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18 sl_PowerClassUnlicensed_r18; /**< ASN.1 sl-PowerClassUnlicensed-r18；枚举；OPTIONAL。 */
};


/**
 * @brief RelayParameters_r17_ExtGroup1
 * @note ASN.1：RelayParameters_r17_ExtGroup1；源文件第 20684 行。
 */
struct RelayParameters_r17_ExtGroup1 {
    bool has_relayUE_U2U_OperationL2_r18; /**< relayUE-U2U-OperationL2-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_RelayUE_U2U_OperationL2_r18 relayUE_U2U_OperationL2_r18; /**< ASN.1 relayUE-U2U-OperationL2-r18；枚举；OPTIONAL。 */
    bool has_remoteUE_U2U_OperationL2_r18; /**< remoteUE-U2U-OperationL2-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_RemoteUE_U2U_OperationL2_r18 remoteUE_U2U_OperationL2_r18; /**< ASN.1 remoteUE-U2U-OperationL2-r18；枚举；OPTIONAL。 */
    bool has_remoteUE_U2N_PathSwitchOperationL2_r18; /**< remoteUE-U2N-PathSwitchOperationL2-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_RemoteUE_U2N_PathSwitchOperationL2_r18 remoteUE_U2N_PathSwitchOperationL2_r18; /**< ASN.1 remoteUE-U2N-PathSwitchOperationL2-r18；枚举；OPTIONAL。 */
    bool has_multipathRemoteUE_PC5L2_r18; /**< multipathRemoteUE-PC5L2-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_MultipathRemoteUE_PC5L2_r18 multipathRemoteUE_PC5L2_r18; /**< ASN.1 multipathRemoteUE-PC5L2-r18；枚举；OPTIONAL。 */
    bool has_multipathRelayUE_N3C_r18; /**< multipathRelayUE-N3C-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_MultipathRelayUE_N3C_r18 multipathRelayUE_N3C_r18; /**< ASN.1 multipathRelayUE-N3C-r18；枚举；OPTIONAL。 */
    bool has_multipathRemoteUE_N3C_r18; /**< multipathRemoteUE-N3C-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_MultipathRemoteUE_N3C_r18 multipathRemoteUE_N3C_r18; /**< ASN.1 multipathRemoteUE-N3C-r18；枚举；OPTIONAL。 */
    bool has_remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18; /**< remoteUE-IndirectPathAddChangeToIdleInactiveRelay-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_RemoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18 remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18; /**< ASN.1 remoteUE-IndirectPathAddChangeToIdleInactiveRelay-r18；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationMoreThanOneUuRLC_r18; /**< pdcp-DuplicationMoreThanOneUuRLC-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMoreThanOneUuRLC_r18 pdcp_DuplicationMoreThanOneUuRLC_r18; /**< ASN.1 pdcp-DuplicationMoreThanOneUuRLC-r18；枚举；OPTIONAL。 */
    bool has_pdcp_CADuplicationDirectpath_DRB_r18; /**< pdcp-CADuplicationDirectpath-DRB-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_DRB_r18 pdcp_CADuplicationDirectpath_DRB_r18; /**< ASN.1 pdcp-CADuplicationDirectpath-DRB-r18；枚举；OPTIONAL。 */
    bool has_pdcp_CADuplicationDirectpath_SRB_r18; /**< pdcp-CADuplicationDirectpath-SRB-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_SRB_r18 pdcp_CADuplicationDirectpath_SRB_r18; /**< ASN.1 pdcp-CADuplicationDirectpath-SRB-r18；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationMP_SplitDRB_r18; /**< pdcp-DuplicationMP-SplitDRB-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitDRB_r18 pdcp_DuplicationMP_SplitDRB_r18; /**< ASN.1 pdcp-DuplicationMP-SplitDRB-r18；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationMP_SplitSRB_r18; /**< pdcp-DuplicationMP-SplitSRB-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitSRB_r18 pdcp_DuplicationMP_SplitSRB_r18; /**< ASN.1 pdcp-DuplicationMP-SplitSRB-r18；枚举；OPTIONAL。 */
    bool has_directpathRLF_RecoveryViaSRB1_r18; /**< directpathRLF-RecoveryViaSRB1-r18 是否存在。 */
    RelayParameters_r17_ExtGroup1_DirectpathRLF_RecoveryViaSRB1_r18 directpathRLF_RecoveryViaSRB1_r18; /**< ASN.1 directpathRLF-RecoveryViaSRB1-r18；枚举；OPTIONAL。 */
};


/**
 * @brief RelayParameters_r17
 * @note ASN.1：RelayParameters-r17；源文件第 20679 行。
 * @note RelayParameters-r17 ::= SEQUENCE { relayUE-Operation-L2-r17, remoteUE-Operation-L2-r17, remoteUE-Path...
 */
struct RelayParameters_r17 {
    bool has_relayUE_Operation_L2_r17; /**< relayUE-Operation-L2-r17 是否存在。 */
    RelayParameters_r17_RelayUE_Operation_L2_r17 relayUE_Operation_L2_r17; /**< ASN.1 relayUE-Operation-L2-r17；枚举；OPTIONAL。 */
    bool has_remoteUE_Operation_L2_r17; /**< remoteUE-Operation-L2-r17 是否存在。 */
    RelayParameters_r17_RemoteUE_Operation_L2_r17 remoteUE_Operation_L2_r17; /**< ASN.1 remoteUE-Operation-L2-r17；枚举；OPTIONAL。 */
    bool has_remoteUE_PathSwitchToIdleInactiveRelay_r17; /**< remoteUE-PathSwitchToIdleInactiveRelay-r17 是否存在。 */
    RelayParameters_r17_RemoteUE_PathSwitchToIdleInactiveRelay_r17 remoteUE_PathSwitchToIdleInactiveRelay_r17; /**< ASN.1 remoteUE-PathSwitchToIdleInactiveRelay-r17；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RelayParameters_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SidelinkParametersNR_r16_ExtGroup1
 * @note ASN.1：SidelinkParametersNR_r16_ExtGroup1；源文件第 20475 行。
 */
struct SidelinkParametersNR_r16_ExtGroup1 {
    bool has_relayParameters_r17; /**< relayParameters-r17 是否存在。 */
    RelayParameters_r17 relayParameters_r17; /**< ASN.1 relayParameters-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SidelinkParametersNR_r16_ExtGroup2
 * @note ASN.1：SidelinkParametersNR_r16_ExtGroup2；源文件第 20478 行。
 */
struct SidelinkParametersNR_r16_ExtGroup2 {
    bool has_p0_OLPC_Sidelink_r17; /**< p0-OLPC-Sidelink-r17 是否存在。 */
    SidelinkParametersNR_r16_ExtGroup2_P0_OLPC_Sidelink_r17 p0_OLPC_Sidelink_r17; /**< ASN.1 p0-OLPC-Sidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_ParametersSidelink_r18
 * @note ASN.1：PDCP-ParametersSidelink-r18；源文件第 20701 行。
 * @note PDCP-ParametersSidelink-r18 ::= SEQUENCE { pdcp-DuplicationSRB-sidelink-r18, pdcp-DuplicationDRB-sidelink-r18 }
 */
struct PDCP_ParametersSidelink_r18 {
    bool has_pdcp_DuplicationSRB_sidelink_r18; /**< pdcp-DuplicationSRB-sidelink-r18 是否存在。 */
    PDCP_ParametersSidelink_r18_Pdcp_DuplicationSRB_sidelink_r18 pdcp_DuplicationSRB_sidelink_r18; /**< ASN.1 pdcp-DuplicationSRB-sidelink-r18；枚举；OPTIONAL。 */
    bool has_pdcp_DuplicationDRB_sidelink_r18; /**< pdcp-DuplicationDRB-sidelink-r18 是否存在。 */
    PDCP_ParametersSidelink_r18_Pdcp_DuplicationDRB_sidelink_r18 pdcp_DuplicationDRB_sidelink_r18; /**< ASN.1 pdcp-DuplicationDRB-sidelink-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SidelinkParametersNR_r16_ExtGroup3
 * @note ASN.1：SidelinkParametersNR_r16_ExtGroup3；源文件第 20482 行。
 */
struct SidelinkParametersNR_r16_ExtGroup3 {
    bool has_pdcp_ParametersSidelink_r18; /**< pdcp-ParametersSidelink-r18 是否存在。 */
    PDCP_ParametersSidelink_r18 pdcp_ParametersSidelink_r18; /**< ASN.1 pdcp-ParametersSidelink-r18；结构体；OPTIONAL。 */
};


/**
 * @brief RLC_ParametersSidelink_r16
 * @note ASN.1：RLC-ParametersSidelink-r16；源文件第 20495 行。
 * @note RLC-ParametersSidelink-r16 ::= SEQUENCE { am-WithLongSN-Sidelink-r16, um-WithLongSN-Sidelink-r16 }
 */
struct RLC_ParametersSidelink_r16 {
    bool has_am_WithLongSN_Sidelink_r16; /**< am-WithLongSN-Sidelink-r16 是否存在。 */
    RLC_ParametersSidelink_r16_Am_WithLongSN_Sidelink_r16 am_WithLongSN_Sidelink_r16; /**< ASN.1 am-WithLongSN-Sidelink-r16；枚举；OPTIONAL。 */
    bool has_um_WithLongSN_Sidelink_r16; /**< um-WithLongSN-Sidelink-r16 是否存在。 */
    RLC_ParametersSidelink_r16_Um_WithLongSN_Sidelink_r16 um_WithLongSN_Sidelink_r16; /**< ASN.1 um-WithLongSN-Sidelink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersSidelinkCommon_r16_ExtGroup1
 * @note ASN.1：MAC_ParametersSidelinkCommon_r16_ExtGroup1；源文件第 20515 行。
 */
struct MAC_ParametersSidelinkCommon_r16_ExtGroup1 {
    bool has_drx_OnSidelink_r17; /**< drx-OnSidelink-r17 是否存在。 */
    MAC_ParametersSidelinkCommon_r16_ExtGroup1_Drx_OnSidelink_r17 drx_OnSidelink_r17; /**< ASN.1 drx-OnSidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersSidelinkCommon_r16_ExtGroup2
 * @note ASN.1：MAC_ParametersSidelinkCommon_r16_ExtGroup2；源文件第 20518 行。
 */
struct MAC_ParametersSidelinkCommon_r16_ExtGroup2 {
    bool has_sl_LBT_FailureDectectionRecovery_r18; /**< sl-LBT-FailureDectectionRecovery-r18 是否存在。 */
    MAC_ParametersSidelinkCommon_r16_ExtGroup2_Sl_LBT_FailureDectectionRecovery_r18 sl_LBT_FailureDectectionRecovery_r18; /**< ASN.1 sl-LBT-FailureDectectionRecovery-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersSidelinkCommon_r16
 * @note ASN.1：MAC-ParametersSidelinkCommon-r16；源文件第 20511 行。
 * @note MAC-ParametersSidelinkCommon-r16 ::= SEQUENCE { lcp-RestrictionSidelink-r16, multipleConfiguredGrantsSidelink-r16,...
 */
struct MAC_ParametersSidelinkCommon_r16 {
    bool has_lcp_RestrictionSidelink_r16; /**< lcp-RestrictionSidelink-r16 是否存在。 */
    MAC_ParametersSidelinkCommon_r16_Lcp_RestrictionSidelink_r16 lcp_RestrictionSidelink_r16; /**< ASN.1 lcp-RestrictionSidelink-r16；枚举；OPTIONAL。 */
    bool has_multipleConfiguredGrantsSidelink_r16; /**< multipleConfiguredGrantsSidelink-r16 是否存在。 */
    MAC_ParametersSidelinkCommon_r16_MultipleConfiguredGrantsSidelink_r16 multipleConfiguredGrantsSidelink_r16; /**< ASN.1 multipleConfiguredGrantsSidelink-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MAC_ParametersSidelinkCommon_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MAC_ParametersSidelinkCommon_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MAC_ParametersSidelinkXDD_Diff_r16
 * @note ASN.1：MAC-ParametersSidelinkXDD-Diff-r16；源文件第 20523 行。
 * @note MAC-ParametersSidelinkXDD-Diff-r16 ::= SEQUENCE { multipleSR-ConfigurationsSidelink-r16, logicalChannelSR-DelayTimer...
 */
struct MAC_ParametersSidelinkXDD_Diff_r16 {
    bool has_multipleSR_ConfigurationsSidelink_r16; /**< multipleSR-ConfigurationsSidelink-r16 是否存在。 */
    MAC_ParametersSidelinkXDD_Diff_r16_MultipleSR_ConfigurationsSidelink_r16 multipleSR_ConfigurationsSidelink_r16; /**< ASN.1 multipleSR-ConfigurationsSidelink-r16；枚举；OPTIONAL。 */
    bool has_logicalChannelSR_DelayTimerSidelink_r16; /**< logicalChannelSR-DelayTimerSidelink-r16 是否存在。 */
    MAC_ParametersSidelinkXDD_Diff_r16_LogicalChannelSR_DelayTimerSidelink_r16 logicalChannelSR_DelayTimerSidelink_r16; /**< ASN.1 logicalChannelSR-DelayTimerSidelink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_ParametersSidelink_r16
 * @note ASN.1：MAC-ParametersSidelink-r16；源文件第 20501 行。
 * @note MAC-ParametersSidelink-r16 ::= SEQUENCE { mac-ParametersSidelinkCommon-r16, mac-ParametersSidelinkXDD-Diff-r...
 */
struct MAC_ParametersSidelink_r16 {
    bool has_mac_ParametersSidelinkCommon_r16; /**< mac-ParametersSidelinkCommon-r16 是否存在。 */
    MAC_ParametersSidelinkCommon_r16 mac_ParametersSidelinkCommon_r16; /**< ASN.1 mac-ParametersSidelinkCommon-r16；结构体；OPTIONAL。 */
    bool has_mac_ParametersSidelinkXDD_Diff_r16; /**< mac-ParametersSidelinkXDD-Diff-r16 是否存在。 */
    MAC_ParametersSidelinkXDD_Diff_r16 mac_ParametersSidelinkXDD_Diff_r16; /**< ASN.1 mac-ParametersSidelinkXDD-Diff-r16；结构体；OPTIONAL。 */
};


/**
 * @brief UE_SidelinkCapabilityAddXDD_Mode_r16
 * @note ASN.1：UE-SidelinkCapabilityAddXDD-Mode-r16；源文件第 20507 行。
 * @note UE-SidelinkCapabilityAddXDD-Mode-r16 ::= SEQUENCE { mac-ParametersSidelinkXDD-Diff-r16 }
 */
struct UE_SidelinkCapabilityAddXDD_Mode_r16 {
    bool has_mac_ParametersSidelinkXDD_Diff_r16; /**< mac-ParametersSidelinkXDD-Diff-r16 是否存在。 */
    MAC_ParametersSidelinkXDD_Diff_r16 mac_ParametersSidelinkXDD_Diff_r16; /**< ASN.1 mac-ParametersSidelinkXDD-Diff-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SidelinkParametersNR_r16
 * @note ASN.1：SidelinkParametersNR-r16；源文件第 20468 行。
 * @note SidelinkParametersNR-r16 ::= SEQUENCE { rlc-ParametersSidelink-r16, mac-ParametersSidelink-r16, fdd-Add-UE...
 */
struct SidelinkParametersNR_r16 {
    bool has_rlc_ParametersSidelink_r16; /**< rlc-ParametersSidelink-r16 是否存在。 */
    RLC_ParametersSidelink_r16 rlc_ParametersSidelink_r16; /**< ASN.1 rlc-ParametersSidelink-r16；结构体；OPTIONAL。 */
    bool has_mac_ParametersSidelink_r16; /**< mac-ParametersSidelink-r16 是否存在。 */
    MAC_ParametersSidelink_r16 mac_ParametersSidelink_r16; /**< ASN.1 mac-ParametersSidelink-r16；结构体；OPTIONAL。 */
    bool has_fdd_Add_UE_Sidelink_Capabilities_r16; /**< fdd-Add-UE-Sidelink-Capabilities-r16 是否存在。 */
    UE_SidelinkCapabilityAddXDD_Mode_r16 fdd_Add_UE_Sidelink_Capabilities_r16; /**< ASN.1 fdd-Add-UE-Sidelink-Capabilities-r16；结构体；OPTIONAL。 */
    bool has_tdd_Add_UE_Sidelink_Capabilities_r16; /**< tdd-Add-UE-Sidelink-Capabilities-r16 是否存在。 */
    UE_SidelinkCapabilityAddXDD_Mode_r16 tdd_Add_UE_Sidelink_Capabilities_r16; /**< ASN.1 tdd-Add-UE-Sidelink-Capabilities-r16；结构体；OPTIONAL。 */
    bool has_supportedBandListSidelink_r16; /**< supportedBandListSidelink-r16 是否存在。 */
    BandSidelink_r16* supportedBandListSidelink_r16_items; /**< ASN.1 supportedBandListSidelink-r16；SEQUENCE OF BandSidelink_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t supportedBandListSidelink_r16_count; /**< supportedBandListSidelink-r16 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SidelinkParametersNR_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SidelinkParametersNR_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SidelinkParametersNR_r16_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SidelinkParametersEUTRA_r16
 * @note ASN.1：SidelinkParametersEUTRA-r16；源文件第 20487 行。
 * @note SidelinkParametersEUTRA-r16 ::= SEQUENCE { sl-ParametersEUTRA1-r16, sl-ParametersEUTRA2-r16, sl-ParametersEUT...
 */
struct SidelinkParametersEUTRA_r16 {
    bool has_sl_ParametersEUTRA1_r16; /**< sl-ParametersEUTRA1-r16 是否存在。 */
    OctetString sl_ParametersEUTRA1_r16; /**< ASN.1 sl-ParametersEUTRA1-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sl_ParametersEUTRA2_r16; /**< sl-ParametersEUTRA2-r16 是否存在。 */
    OctetString sl_ParametersEUTRA2_r16; /**< ASN.1 sl-ParametersEUTRA2-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sl_ParametersEUTRA3_r16; /**< sl-ParametersEUTRA3-r16 是否存在。 */
    OctetString sl_ParametersEUTRA3_r16; /**< ASN.1 sl-ParametersEUTRA3-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_supportedBandListSidelinkEUTRA_r16; /**< supportedBandListSidelinkEUTRA-r16 是否存在。 */
    BandSidelinkEUTRA_r16* supportedBandListSidelinkEUTRA_r16_items; /**< ASN.1 supportedBandListSidelinkEUTRA-r16；SEQUENCE OF BandSidelinkEUTRA_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t supportedBandListSidelinkEUTRA_r16_count; /**< supportedBandListSidelinkEUTRA-r16 元素个数。 */
};


/**
 * @brief SidelinkParameters_r16
 * @note ASN.1：SidelinkParameters-r16；源文件第 20463 行。
 * @note SidelinkParameters-r16 ::= SEQUENCE { sidelinkParametersNR-r16, sidelinkParametersEUTRA-r16 }
 */
struct SidelinkParameters_r16 {
    bool has_sidelinkParametersNR_r16; /**< sidelinkParametersNR-r16 是否存在。 */
    SidelinkParametersNR_r16 sidelinkParametersNR_r16; /**< ASN.1 sidelinkParametersNR-r16；结构体；OPTIONAL。 */
    bool has_sidelinkParametersEUTRA_r16; /**< sidelinkParametersEUTRA-r16 是否存在。 */
    SidelinkParametersEUTRA_r16 sidelinkParametersEUTRA_r16; /**< ASN.1 sidelinkParametersEUTRA-r16；结构体；OPTIONAL。 */
};


/**
 * @brief BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16
 * @note ASN.1：gnb-ScheduledMode3SidelinkEUTRA-r16；源文件第 20532 行。
 * @note SEQUENCE { gnb-ScheduledMode3DelaySidelinkEUTRA-r16 }
 */
struct BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16 {
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16 gnb_ScheduledMode3DelaySidelinkEUTRA_r16; /**< ASN.1 gnb-ScheduledMode3DelaySidelinkEUTRA-r16；枚举。 */
};


/**
 * @brief BandSidelinkEUTRA_r16
 * @note ASN.1：BandSidelinkEUTRA-r16；源文件第 20529 行。
 * @note BandSidelinkEUTRA-r16 ::= SEQUENCE { freqBandSidelinkEUTRA-r16, gnb-ScheduledMode3SidelinkEUTRA-r16, gn...
 */
struct BandSidelinkEUTRA_r16 {
    FreqBandIndicatorEUTRA freqBandSidelinkEUTRA_r16; /**< ASN.1 freqBandSidelinkEUTRA-r16；INTEGER (1..256)，位宽 8 bit。 */
    bool has_gnb_ScheduledMode3SidelinkEUTRA_r16; /**< gnb-ScheduledMode3SidelinkEUTRA-r16 是否存在。 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16 gnb_ScheduledMode3SidelinkEUTRA_r16; /**< ASN.1 gnb-ScheduledMode3SidelinkEUTRA-r16；结构体；OPTIONAL。 */
    bool has_gnb_ScheduledMode4SidelinkEUTRA_r16; /**< gnb-ScheduledMode4SidelinkEUTRA-r16 是否存在。 */
    BandSidelinkEUTRA_r16_Gnb_ScheduledMode4SidelinkEUTRA_r16 gnb_ScheduledMode4SidelinkEUTRA_r16; /**< ASN.1 gnb-ScheduledMode4SidelinkEUTRA-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16
 * @note ASN.1：sl-TransmissionMode2-r16；源文件第 20597 行。
 * @note SEQUENCE { harq-TxProcessModeTwoSidelink-r16, scs-CP-PatternTxSidelinkModeTwo...
 */
struct BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16 {
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16 harq_TxProcessModeTwoSidelink_r16; /**< ASN.1 harq-TxProcessModeTwoSidelink-r16；枚举。 */
    bool has_scs_CP_PatternTxSidelinkModeTwo_r16; /**< scs-CP-PatternTxSidelinkModeTwo-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Scs_CP_PatternTxSidelinkModeTwo_r16 scs_CP_PatternTxSidelinkModeTwo_r16; /**< ASN.1 scs-CP-PatternTxSidelinkModeTwo-r16；枚举；OPTIONAL。 */
    bool has_dl_openLoopPC_Sidelink_r16; /**< dl-openLoopPC-Sidelink-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Dl_openLoopPC_Sidelink_r16 dl_openLoopPC_Sidelink_r16; /**< ASN.1 dl-openLoopPC-Sidelink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16
 * @note ASN.1：congestionControlSidelink-r16；源文件第 20603 行。
 * @note SEQUENCE { cbr-ReportSidelink-r16, cbr-CR-TimeLimitSidelink-r16 }
 */
struct BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16 {
    bool has_cbr_ReportSidelink_r16; /**< cbr-ReportSidelink-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_ReportSidelink_r16 cbr_ReportSidelink_r16; /**< ASN.1 cbr-ReportSidelink-r16；枚举；OPTIONAL。 */
    BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16 cbr_CR_TimeLimitSidelink_r16; /**< ASN.1 cbr-CR-TimeLimitSidelink-r16；枚举。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup1
 * @note ASN.1：BandSidelink_r16_ExtGroup1；源文件第 20595 行。
 */
struct BandSidelink_r16_ExtGroup1 {
    bool has_sl_TransmissionMode2_r16; /**< sl-TransmissionMode2-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16 sl_TransmissionMode2_r16; /**< ASN.1 sl-TransmissionMode2-r16；结构体；OPTIONAL。 */
    bool has_congestionControlSidelink_r16; /**< congestionControlSidelink-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16 congestionControlSidelink_r16; /**< ASN.1 congestionControlSidelink-r16；结构体；OPTIONAL。 */
    bool has_fewerSymbolSlotSidelink_r16; /**< fewerSymbolSlotSidelink-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_FewerSymbolSlotSidelink_r16 fewerSymbolSlotSidelink_r16; /**< ASN.1 fewerSymbolSlotSidelink-r16；枚举；OPTIONAL。 */
    bool has_sl_openLoopPC_RSRP_ReportSidelink_r16; /**< sl-openLoopPC-RSRP-ReportSidelink-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_Sl_openLoopPC_RSRP_ReportSidelink_r16 sl_openLoopPC_RSRP_ReportSidelink_r16; /**< ASN.1 sl-openLoopPC-RSRP-ReportSidelink-r16；枚举；OPTIONAL。 */
    bool has_sl_Rx_256QAM_r16; /**< sl-Rx-256QAM-r16 是否存在。 */
    BandSidelink_r16_ExtGroup1_Sl_Rx_256QAM_r16 sl_Rx_256QAM_r16; /**< ASN.1 sl-Rx-256QAM-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup2
 * @note ASN.1：BandSidelink_r16_ExtGroup2；源文件第 20614 行。
 */
struct BandSidelink_r16_ExtGroup2 {
    bool has_ue_PowerClassSidelink_r16; /**< ue-PowerClassSidelink-r16 是否存在。 */
    BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16 ue_PowerClassSidelink_r16; /**< ASN.1 ue-PowerClassSidelink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17
 * @note ASN.1：sl-TransmissionMode2-RandomResourceSelection-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr1-r17；源文件第 20623 行。
 * @note SEQUENCE { scs-15kHz-r17, scs-30kHz-r17, scs-60kHz-r17 }
 */
struct BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 {
    bool has_scs_15kHz_r17; /**< scs-15kHz-r17 是否存在。 */
    BitString scs_15kHz_r17; /**< ASN.1 scs-15kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz_r17; /**< scs-30kHz-r17 是否存在。 */
    BitString scs_30kHz_r17; /**< ASN.1 scs-30kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    BitString scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17
 * @note ASN.1：sl-TransmissionMode2-RandomResourceSelection-r17/scs-CP-PatternTxSidelinkModeTwo-r17/fr2-r17；源文件第 20628 行。
 * @note SEQUENCE { scs-60kHz-r17, scs-120kHz-r17 }
 */
struct BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 {
    bool has_scs_60kHz_r17; /**< scs-60kHz-r17 是否存在。 */
    BitString scs_60kHz_r17; /**< ASN.1 scs-60kHz-r17；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_120kHz_r17; /**< scs-120kHz-r17 是否存在。 */
    BitString scs_120kHz_r17; /**< ASN.1 scs-120kHz-r17；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17
 * @note ASN.1：sl-TransmissionMode2-RandomResourceSelection-r17/scs-CP-PatternTxSidelinkModeTwo-r17；源文件第 20622 行。
 * @note CHOICE { fr1-r17, fr2-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag {
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17 = 0, /**< ASN.1 fr1-r17 */
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17 = 1, /**< ASN.1 fr2-r17 */
} BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag;

struct BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 {
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17 fr1_r17; /**< ASN.1 fr1-r17 */
        BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17 fr2_r17; /**< ASN.1 fr2-r17 */
    } u;
};


/**
 * @brief BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17
 * @note ASN.1：sl-TransmissionMode2-RandomResourceSelection-r17；源文件第 20620 行。
 * @note SEQUENCE { harq-TxProcessModeTwoSidelink-r17, scs-CP-PatternTxSidelinkModeTwo...
 */
struct BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17 {
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17 harq_TxProcessModeTwoSidelink_r17; /**< ASN.1 harq-TxProcessModeTwoSidelink-r17；枚举。 */
    bool has_scs_CP_PatternTxSidelinkModeTwo_r17; /**< scs-CP-PatternTxSidelinkModeTwo-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17 scs_CP_PatternTxSidelinkModeTwo_r17; /**< ASN.1 scs-CP-PatternTxSidelinkModeTwo-r17；结构体；OPTIONAL。 */
    bool has_extendedCP_Mode2Random_r17; /**< extendedCP-Mode2Random-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_ExtendedCP_Mode2Random_r17 extendedCP_Mode2Random_r17; /**< ASN.1 extendedCP-Mode2Random-r17；枚举；OPTIONAL。 */
    bool has_dl_openLoopPC_Sidelink_r17; /**< dl-openLoopPC-Sidelink-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Dl_openLoopPC_Sidelink_r17 dl_openLoopPC_Sidelink_r17; /**< ASN.1 dl-openLoopPC-Sidelink-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710
 * @note ASN.1：sync-Sidelink-v1710；源文件第 20637 行。
 * @note SEQUENCE { sync-GNSS-r17, gNB-Sync-r17, gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB...
 */
struct BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710 {
    bool has_sync_GNSS_r17; /**< sync-GNSS-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_Sync_GNSS_r17 sync_GNSS_r17; /**< ASN.1 sync-GNSS-r17；枚举；OPTIONAL。 */
    bool has_gNB_Sync_r17; /**< gNB-Sync-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_Sync_r17 gNB_Sync_r17; /**< ASN.1 gNB-Sync-r17；枚举；OPTIONAL。 */
    bool has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17; /**< gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17 gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17; /**< ASN.1 gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r17；枚举；OPTIONAL。 */
    bool has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17; /**< gNB-GNSS-UE-SyncWithPriorityOnGNSS-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r17 gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17; /**< ASN.1 gNB-GNSS-UE-SyncWithPriorityOnGNSS-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup3
 * @note ASN.1：BandSidelink_r16_ExtGroup3；源文件第 20618 行。
 */
struct BandSidelink_r16_ExtGroup3 {
    bool has_sl_TransmissionMode2_RandomResourceSelection_r17; /**< sl-TransmissionMode2-RandomResourceSelection-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17 sl_TransmissionMode2_RandomResourceSelection_r17; /**< ASN.1 sl-TransmissionMode2-RandomResourceSelection-r17；结构体；OPTIONAL。 */
    bool has_sync_Sidelink_v1710; /**< sync-Sidelink-v1710 是否存在。 */
    BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710 sync_Sidelink_v1710; /**< ASN.1 sync-Sidelink-v1710；结构体；OPTIONAL。 */
    bool has_enb_sync_Sidelink_v1710; /**< enb-sync-Sidelink-v1710 是否存在。 */
    BandSidelink_r16_ExtGroup3_Enb_sync_Sidelink_v1710 enb_sync_Sidelink_v1710; /**< ASN.1 enb-sync-Sidelink-v1710；枚举；OPTIONAL。 */
    bool has_rx_IUC_Scheme1_PreferredMode2Sidelink_r17; /**< rx-IUC-Scheme1-PreferredMode2Sidelink-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_PreferredMode2Sidelink_r17 rx_IUC_Scheme1_PreferredMode2Sidelink_r17; /**< ASN.1 rx-IUC-Scheme1-PreferredMode2Sidelink-r17；枚举；OPTIONAL。 */
    bool has_rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17; /**< rx-IUC-Scheme1-NonPreferredMode2Sidelink-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17 rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17; /**< ASN.1 rx-IUC-Scheme1-NonPreferredMode2Sidelink-r17；枚举；OPTIONAL。 */
    bool has_rx_IUC_Scheme2_Mode2Sidelink_r17; /**< rx-IUC-Scheme2-Mode2Sidelink-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17 rx_IUC_Scheme2_Mode2Sidelink_r17; /**< ASN.1 rx-IUC-Scheme2-Mode2Sidelink-r17；枚举；OPTIONAL。 */
    bool has_rx_IUC_Scheme1_SCI_r17; /**< rx-IUC-Scheme1-SCI-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_r17 rx_IUC_Scheme1_SCI_r17; /**< ASN.1 rx-IUC-Scheme1-SCI-r17；枚举；OPTIONAL。 */
    bool has_rx_IUC_Scheme1_SCI_ExplicitReq_r17; /**< rx-IUC-Scheme1-SCI-ExplicitReq-r17 是否存在。 */
    BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_ExplicitReq_r17 rx_IUC_Scheme1_SCI_ExplicitReq_r17; /**< ASN.1 rx-IUC-Scheme1-SCI-ExplicitReq-r17；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_ExtGroup4
 * @note ASN.1：BandSidelink_r16_ExtGroup4；源文件第 20656 行。
 */
struct BandSidelink_r16_ExtGroup4 {
    bool has_sharedSpectrumChAccessParamsSidelinkPerBand_r18; /**< sharedSpectrumChAccessParamsSidelinkPerBand-r18 是否存在。 */
    SharedSpectrumChAccessParamsSidelinkPerBand_r18 sharedSpectrumChAccessParamsSidelinkPerBand_r18; /**< ASN.1 sharedSpectrumChAccessParamsSidelinkPerBand-r18；结构体；OPTIONAL。 */
    bool has_sl_PRS_RxInSharedResourcePool_r18; /**< sl-PRS-RxInSharedResourcePool-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_RxInSharedResourcePool_r18 sl_PRS_RxInSharedResourcePool_r18; /**< ASN.1 sl-PRS-RxInSharedResourcePool-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_RxInDedicatedResourcePool_r18; /**< sl-PRS-RxInDedicatedResourcePool-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_RxInDedicatedResourcePool_r18 sl_PRS_RxInDedicatedResourcePool_r18; /**< ASN.1 sl-PRS-RxInDedicatedResourcePool-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_TxInSharedResourcePool_r18; /**< sl-PRS-TxInSharedResourcePool-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxInSharedResourcePool_r18 sl_PRS_TxInSharedResourcePool_r18; /**< ASN.1 sl-PRS-TxInSharedResourcePool-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_TxScheme1InDedicatedResourcePool_r18; /**< sl-PRS-TxScheme1InDedicatedResourcePool-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme1InDedicatedResourcePool_r18 sl_PRS_TxScheme1InDedicatedResourcePool_r18; /**< ASN.1 sl-PRS-TxScheme1InDedicatedResourcePool-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_TxScheme2InDedicatedResourcePool_r18; /**< sl-PRS-TxScheme2InDedicatedResourcePool-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme2InDedicatedResourcePool_r18 sl_PRS_TxScheme2InDedicatedResourcePool_r18; /**< ASN.1 sl-PRS-TxScheme2InDedicatedResourcePool-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_CongestionCtrl_r18; /**< sl-PRS-CongestionCtrl-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_CongestionCtrl_r18 sl_PRS_CongestionCtrl_r18; /**< ASN.1 sl-PRS-CongestionCtrl-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_TxRandomSelection_r18; /**< sl-PRS-TxRandomSelection-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_PRS_TxRandomSelection_r18 sl_PRS_TxRandomSelection_r18; /**< ASN.1 sl-PRS-TxRandomSelection-r18；枚举；OPTIONAL。 */
    bool has_sl_DynamicSharingTxRx_r18; /**< sl-DynamicSharingTxRx-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_DynamicSharingTxRx_r18 sl_DynamicSharingTxRx_r18; /**< ASN.1 sl-DynamicSharingTxRx-r18；枚举；OPTIONAL。 */
    bool has_sl_ReceptionIntraCarrierGuardBand_r18; /**< sl-ReceptionIntraCarrierGuardBand-r18 是否存在。 */
    BandSidelink_r16_ExtGroup4_Sl_ReceptionIntraCarrierGuardBand_r18 sl_ReceptionIntraCarrierGuardBand_r18; /**< ASN.1 sl-ReceptionIntraCarrierGuardBand-r18；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16
 * @note ASN.1：sl-Reception-r16/scs-CP-PatternRxSidelink-r16/fr1-r16；源文件第 20548 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16 }
 */
struct BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    BitString scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    BitString scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    BitString scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16
 * @note ASN.1：sl-Reception-r16/scs-CP-PatternRxSidelink-r16/fr2-r16；源文件第 20553 行。
 * @note SEQUENCE { scs-60kHz-r16, scs-120kHz-r16 }
 */
struct BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16 {
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    BitString scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    BitString scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16
 * @note ASN.1：sl-Reception-r16/scs-CP-PatternRxSidelink-r16；源文件第 20547 行。
 * @note CHOICE { fr1-r16, fr2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag {
    BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr1_r16 = 0, /**< ASN.1 fr1-r16 */
    BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr2_r16 = 1, /**< ASN.1 fr2-r16 */
} BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag;

struct BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16 {
    BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16 fr1_r16; /**< ASN.1 fr1-r16 */
        BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16 fr2_r16; /**< ASN.1 fr2-r16 */
    } u;
};


/**
 * @brief BandSidelink_r16_Sl_Reception_r16
 * @note ASN.1：sl-Reception-r16；源文件第 20544 行。
 * @note SEQUENCE { harq-RxProcessSidelink-r16, pscch-RxSidelink-r16, scs-CP-PatternRx...
 */
struct BandSidelink_r16_Sl_Reception_r16 {
    BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16 harq_RxProcessSidelink_r16; /**< ASN.1 harq-RxProcessSidelink-r16；枚举。 */
    BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16 pscch_RxSidelink_r16; /**< ASN.1 pscch-RxSidelink-r16；枚举。 */
    bool has_scs_CP_PatternRxSidelink_r16; /**< scs-CP-PatternRxSidelink-r16 是否存在。 */
    BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16 scs_CP_PatternRxSidelink_r16; /**< ASN.1 scs-CP-PatternRxSidelink-r16；结构体；OPTIONAL。 */
    bool has_extendedCP_RxSidelink_r16; /**< extendedCP-RxSidelink-r16 是否存在。 */
    BandSidelink_r16_Sl_Reception_r16_ExtendedCP_RxSidelink_r16 extendedCP_RxSidelink_r16; /**< ASN.1 extendedCP-RxSidelink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16
 * @note ASN.1：sl-TransmissionMode1-r16/scs-CP-PatternTxSidelinkModeOne-r16/fr1-r16；源文件第 20564 行。
 * @note SEQUENCE { scs-15kHz-r16, scs-30kHz-r16, scs-60kHz-r16 }
 */
struct BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16 {
    bool has_scs_15kHz_r16; /**< scs-15kHz-r16 是否存在。 */
    BitString scs_15kHz_r16; /**< ASN.1 scs-15kHz-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_30kHz_r16; /**< scs-30kHz-r16 是否存在。 */
    BitString scs_30kHz_r16; /**< ASN.1 scs-30kHz-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    BitString scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16
 * @note ASN.1：sl-TransmissionMode1-r16/scs-CP-PatternTxSidelinkModeOne-r16/fr2-r16；源文件第 20569 行。
 * @note SEQUENCE { scs-60kHz-r16, scs-120kHz-r16 }
 */
struct BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16 {
    bool has_scs_60kHz_r16; /**< scs-60kHz-r16 是否存在。 */
    BitString scs_60kHz_r16; /**< ASN.1 scs-60kHz-r16；SIZE (16)，定长；OPTIONAL。 */
    bool has_scs_120kHz_r16; /**< scs-120kHz-r16 是否存在。 */
    BitString scs_120kHz_r16; /**< ASN.1 scs-120kHz-r16；SIZE (16)，定长；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16
 * @note ASN.1：sl-TransmissionMode1-r16/scs-CP-PatternTxSidelinkModeOne-r16；源文件第 20563 行。
 * @note CHOICE { fr1-r16, fr2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag {
    BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr1_r16 = 0, /**< ASN.1 fr1-r16 */
    BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr2_r16 = 1, /**< ASN.1 fr2-r16 */
} BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag;

struct BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16 {
    BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16 fr1_r16; /**< ASN.1 fr1-r16 */
        BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16 fr2_r16; /**< ASN.1 fr2-r16 */
    } u;
};


/**
 * @brief BandSidelink_r16_Sl_TransmissionMode1_r16
 * @note ASN.1：sl-TransmissionMode1-r16；源文件第 20561 行。
 * @note SEQUENCE { harq-TxProcessModeOneSidelink-r16, scs-CP-PatternTxSidelinkModeOne...
 */
struct BandSidelink_r16_Sl_TransmissionMode1_r16 {
    BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16 harq_TxProcessModeOneSidelink_r16; /**< ASN.1 harq-TxProcessModeOneSidelink-r16；枚举。 */
    BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16 scs_CP_PatternTxSidelinkModeOne_r16; /**< ASN.1 scs-CP-PatternTxSidelinkModeOne-r16；结构体。 */
    bool has_extendedCP_TxSidelink_r16; /**< extendedCP-TxSidelink-r16 是否存在。 */
    BandSidelink_r16_Sl_TransmissionMode1_r16_ExtendedCP_TxSidelink_r16 extendedCP_TxSidelink_r16; /**< ASN.1 extendedCP-TxSidelink-r16；枚举；OPTIONAL。 */
    bool has_harq_ReportOnPUCCH_r16; /**< harq-ReportOnPUCCH-r16 是否存在。 */
    BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_ReportOnPUCCH_r16 harq_ReportOnPUCCH_r16; /**< ASN.1 harq-ReportOnPUCCH-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Sync_Sidelink_r16
 * @note ASN.1：sync-Sidelink-r16；源文件第 20578 行。
 * @note SEQUENCE { gNB-Sync-r16, gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r16, gNB-GNSS-...
 */
struct BandSidelink_r16_Sync_Sidelink_r16 {
    bool has_gNB_Sync_r16; /**< gNB-Sync-r16 是否存在。 */
    BandSidelink_r16_Sync_Sidelink_r16_GNB_Sync_r16 gNB_Sync_r16; /**< ASN.1 gNB-Sync-r16；枚举；OPTIONAL。 */
    bool has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16; /**< gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r16 是否存在。 */
    BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16 gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16; /**< ASN.1 gNB-GNSS-UE-SyncWithPriorityOnGNB-ENB-r16；枚举；OPTIONAL。 */
    bool has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16; /**< gNB-GNSS-UE-SyncWithPriorityOnGNSS-r16 是否存在。 */
    BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r16 gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16; /**< ASN.1 gNB-GNSS-UE-SyncWithPriorityOnGNSS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief BandSidelink_r16_Psfch_FormatZeroSidelink_r16
 * @note ASN.1：psfch-FormatZeroSidelink-r16；源文件第 20586 行。
 * @note SEQUENCE { psfch-RxNumber, psfch-TxNumber }
 */
struct BandSidelink_r16_Psfch_FormatZeroSidelink_r16 {
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber psfch_RxNumber; /**< ASN.1 psfch-RxNumber；枚举。 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber psfch_TxNumber; /**< ASN.1 psfch-TxNumber；枚举。 */
};


/**
 * @brief BandSidelink_r16
 * @note ASN.1：BandSidelink-r16；源文件第 20541 行。
 * @note BandSidelink-r16 ::= SEQUENCE { freqBandSidelink-r16, sl-Reception-r16, sl-TransmissionMode1-r16, ...
 */
struct BandSidelink_r16 {
    FreqBandIndicatorNR freqBandSidelink_r16; /**< ASN.1 freqBandSidelink-r16；INTEGER (1..1024)，位宽 10 bit。 */
    bool has_sl_Reception_r16; /**< sl-Reception-r16 是否存在。 */
    BandSidelink_r16_Sl_Reception_r16 sl_Reception_r16; /**< ASN.1 sl-Reception-r16；结构体；OPTIONAL。 */
    bool has_sl_TransmissionMode1_r16; /**< sl-TransmissionMode1-r16 是否存在。 */
    BandSidelink_r16_Sl_TransmissionMode1_r16 sl_TransmissionMode1_r16; /**< ASN.1 sl-TransmissionMode1-r16；结构体；OPTIONAL。 */
    bool has_sync_Sidelink_r16; /**< sync-Sidelink-r16 是否存在。 */
    BandSidelink_r16_Sync_Sidelink_r16 sync_Sidelink_r16; /**< ASN.1 sync-Sidelink-r16；结构体；OPTIONAL。 */
    bool has_sl_Tx_256QAM_r16; /**< sl-Tx-256QAM-r16 是否存在。 */
    BandSidelink_r16_Sl_Tx_256QAM_r16 sl_Tx_256QAM_r16; /**< ASN.1 sl-Tx-256QAM-r16；枚举；OPTIONAL。 */
    bool has_psfch_FormatZeroSidelink_r16; /**< psfch-FormatZeroSidelink-r16 是否存在。 */
    BandSidelink_r16_Psfch_FormatZeroSidelink_r16 psfch_FormatZeroSidelink_r16; /**< ASN.1 psfch-FormatZeroSidelink-r16；结构体；OPTIONAL。 */
    bool has_lowSE_64QAM_MCS_TableSidelink_r16; /**< lowSE-64QAM-MCS-TableSidelink-r16 是否存在。 */
    BandSidelink_r16_LowSE_64QAM_MCS_TableSidelink_r16 lowSE_64QAM_MCS_TableSidelink_r16; /**< ASN.1 lowSE-64QAM-MCS-TableSidelink-r16；枚举；OPTIONAL。 */
    bool has_enb_sync_Sidelink_r16; /**< enb-sync-Sidelink-r16 是否存在。 */
    BandSidelink_r16_Enb_sync_Sidelink_r16 enb_sync_Sidelink_r16; /**< ASN.1 enb-sync-Sidelink-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    BandSidelink_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    BandSidelink_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    BandSidelink_r16_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    BandSidelink_r16_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SRS_SwitchingTimeNR
 * @note ASN.1：SRS-SwitchingTimeNR；源文件第 20763 行。
 * @note SRS-SwitchingTimeNR ::= SEQUENCE { switchingTimeDL, switchingTimeUL }
 */
struct SRS_SwitchingTimeNR {
    bool has_switchingTimeDL; /**< switchingTimeDL 是否存在。 */
    SRS_SwitchingTimeNR_SwitchingTimeDL switchingTimeDL; /**< ASN.1 switchingTimeDL；枚举；OPTIONAL。 */
    bool has_switchingTimeUL; /**< switchingTimeUL 是否存在。 */
    SRS_SwitchingTimeNR_SwitchingTimeUL switchingTimeUL; /**< ASN.1 switchingTimeUL；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_SwitchingTimeEUTRA
 * @note ASN.1：SRS-SwitchingTimeEUTRA；源文件第 20771 行。
 * @note SRS-SwitchingTimeEUTRA ::= SEQUENCE { switchingTimeDL, switchingTimeUL }
 */
struct SRS_SwitchingTimeEUTRA {
    bool has_switchingTimeDL; /**< switchingTimeDL 是否存在。 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeDL switchingTimeDL; /**< ASN.1 switchingTimeDL；枚举；OPTIONAL。 */
    bool has_switchingTimeUL; /**< switchingTimeUL 是否存在。 */
    SRS_SwitchingTimeEUTRA_SwitchingTimeUL switchingTimeUL; /**< ASN.1 switchingTimeUL；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRAT_Container
 * @note ASN.1：UE-CapabilityRAT-Container；源文件第 20834 行。
 * @note UE-CapabilityRAT-Container ::= SEQUENCE { rat-Type, ue-CapabilityRAT-Container }
 */
struct UE_CapabilityRAT_Container {
    RAT_Type rat_Type; /**< ASN.1 rat-Type；枚举。 */
    OctetString ue_CapabilityRAT_Container; /**< ASN.1 ue-CapabilityRAT-Container；SIZE 无上界（半约束长度）。 */
};


/**
 * @brief UE_CapabilityRAT_Request
 * @note ASN.1：UE-CapabilityRAT-Request；源文件第 20844 行。
 * @note UE-CapabilityRAT-Request ::= SEQUENCE { rat-Type, capabilityRequestFilter }
 */
struct UE_CapabilityRAT_Request {
    RAT_Type rat_Type; /**< ASN.1 rat-Type；枚举。 */
    bool has_capabilityRequestFilter; /**< capabilityRequestFilter 是否存在。 */
    OctetString capabilityRequestFilter; /**< ASN.1 capabilityRequestFilter；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief CellGrouping_r16
 * @note ASN.1：CellGrouping-r16；源文件第 20884 行。
 * @note CellGrouping-r16 ::= SEQUENCE { mcg-r16, scg-r16, mode-r16 }
 */
struct CellGrouping_r16 {
    FreqBandIndicatorNR* mcg_r16_items; /**< ASN.1 mcg-r16；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t mcg_r16_count; /**< mcg-r16 元素个数。 */
    FreqBandIndicatorNR* scg_r16_items; /**< ASN.1 scg-r16；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t scg_r16_count; /**< scg-r16 元素个数。 */
    CellGrouping_r16_Mode_r16 mode_r16; /**< ASN.1 mode-r16；枚举。 */
};


/**
 * @brief UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 20906 行。
 * @note SEQUENCE { }
 */
struct UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UE_CapabilityRequestFilterNR_v1710
 * @note ASN.1：UE-CapabilityRequestFilterNR-v1710；源文件第 20904 行。
 * @note UE-CapabilityRequestFilterNR-v1710 ::= SEQUENCE { sidelinkRequest-r17, nonCriticalExtension }
 */
struct UE_CapabilityRequestFilterNR_v1710 {
    bool has_sidelinkRequest_r17; /**< sidelinkRequest-r17 是否存在。 */
    UE_CapabilityRequestFilterNR_v1710_SidelinkRequest_r17 sidelinkRequest_r17; /**< ASN.1 sidelinkRequest-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterNR_v1540
 * @note ASN.1：UE-CapabilityRequestFilterNR-v1540；源文件第 20899 行。
 * @note UE-CapabilityRequestFilterNR-v1540 ::= SEQUENCE { srs-SwitchingTimeRequest, nonCriticalExtension }
 */
struct UE_CapabilityRequestFilterNR_v1540 {
    bool has_srs_SwitchingTimeRequest; /**< srs-SwitchingTimeRequest 是否存在。 */
    UE_CapabilityRequestFilterNR_v1540_Srs_SwitchingTimeRequest srs_SwitchingTimeRequest; /**< ASN.1 srs-SwitchingTimeRequest；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_CapabilityRequestFilterNR_v1710 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterNR
 * @note ASN.1：UE-CapabilityRequestFilterNR；源文件第 20894 行。
 * @note UE-CapabilityRequestFilterNR ::= SEQUENCE { frequencyBandListFilter, nonCriticalExtension }
 */
struct UE_CapabilityRequestFilterNR {
    bool has_frequencyBandListFilter; /**< frequencyBandListFilter 是否存在。 */
    FreqBandList frequencyBandListFilter; /**< ASN.1 frequencyBandListFilter；SEQUENCE OF FreqBandInformation，SIZE (1..1280)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_CapabilityRequestFilterNR_v1540 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v1800_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 20957 行。
 * @note SEQUENCE { }
 */
struct UE_MRDC_Capability_v1800_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UE_MRDC_Capability_v1800
 * @note ASN.1：UE-MRDC-Capability-v1800；源文件第 20953 行。
 * @note UE-MRDC-Capability-v1800 ::= SEQUENCE { requirementTypeIndication-r18, measAndMobParametersMRDC-v1810, non...
 */
struct UE_MRDC_Capability_v1800 {
    bool has_requirementTypeIndication_r18; /**< requirementTypeIndication-r18 是否存在。 */
    UE_MRDC_Capability_v1800_RequirementTypeIndication_r18 requirementTypeIndication_r18; /**< ASN.1 requirementTypeIndication-r18；枚举；OPTIONAL。 */
    bool has_measAndMobParametersMRDC_v1810; /**< measAndMobParametersMRDC-v1810 是否存在。 */
    MeasAndMobParametersMRDC_v1810 measAndMobParametersMRDC_v1810; /**< ASN.1 measAndMobParametersMRDC-v1810；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v1800_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v1730
 * @note ASN.1：UE-MRDC-Capability-v1730；源文件第 20948 行。
 * @note UE-MRDC-Capability-v1730 ::= SEQUENCE { measAndMobParametersMRDC-v1730, nonCriticalExtension }
 */
struct UE_MRDC_Capability_v1730 {
    bool has_measAndMobParametersMRDC_v1730; /**< measAndMobParametersMRDC-v1730 是否存在。 */
    MeasAndMobParametersMRDC_v1730 measAndMobParametersMRDC_v1730; /**< ASN.1 measAndMobParametersMRDC-v1730；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v1800 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v1700
 * @note ASN.1：UE-MRDC-Capability-v1700；源文件第 20943 行。
 * @note UE-MRDC-Capability-v1700 ::= SEQUENCE { measAndMobParametersMRDC-v1700, nonCriticalExtension }
 */
struct UE_MRDC_Capability_v1700 {
    MeasAndMobParametersMRDC_v1700 measAndMobParametersMRDC_v1700; /**< ASN.1 measAndMobParametersMRDC-v1700；结构体。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v1730 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief GeneralParametersMRDC_v1610
 * @note ASN.1：GeneralParametersMRDC-v1610；源文件第 21000 行。
 * @note GeneralParametersMRDC-v1610 ::= SEQUENCE { f1c-OverEUTRA-r16 }
 */
struct GeneralParametersMRDC_v1610 {
    bool has_f1c_OverEUTRA_r16; /**< f1c-OverEUTRA-r16 是否存在。 */
    GeneralParametersMRDC_v1610_F1c_OverEUTRA_r16 f1c_OverEUTRA_r16; /**< ASN.1 f1c-OverEUTRA-r16；枚举；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v1610
 * @note ASN.1：UE-MRDC-Capability-v1610；源文件第 20936 行。
 * @note UE-MRDC-Capability-v1610 ::= SEQUENCE { measAndMobParametersMRDC-v1610, generalParametersMRDC-v1610, pdcp-...
 */
struct UE_MRDC_Capability_v1610 {
    bool has_measAndMobParametersMRDC_v1610; /**< measAndMobParametersMRDC-v1610 是否存在。 */
    MeasAndMobParametersMRDC_v1610 measAndMobParametersMRDC_v1610; /**< ASN.1 measAndMobParametersMRDC-v1610；结构体；OPTIONAL。 */
    bool has_generalParametersMRDC_v1610; /**< generalParametersMRDC-v1610 是否存在。 */
    GeneralParametersMRDC_v1610 generalParametersMRDC_v1610; /**< ASN.1 generalParametersMRDC-v1610；结构体；OPTIONAL。 */
    bool has_pdcp_ParametersMRDC_v1610; /**< pdcp-ParametersMRDC-v1610 是否存在。 */
    PDCP_ParametersMRDC_v1610 pdcp_ParametersMRDC_v1610; /**< ASN.1 pdcp-ParametersMRDC-v1610；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v1700 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_CapabilityAddXDD_Mode_v1560
 * @note ASN.1：UE-MRDC-CapabilityAddXDD-Mode-v1560；源文件第 20983 行。
 * @note UE-MRDC-CapabilityAddXDD-Mode-v1560 ::= SEQUENCE { measAndMobParametersMRDC-XDD-Diff-v1560 }
 */
struct UE_MRDC_CapabilityAddXDD_Mode_v1560 {
    bool has_measAndMobParametersMRDC_XDD_Diff_v1560; /**< measAndMobParametersMRDC-XDD-Diff-v1560 是否存在。 */
    MeasAndMobParametersMRDC_XDD_Diff_v1560 measAndMobParametersMRDC_XDD_Diff_v1560; /**< ASN.1 measAndMobParametersMRDC-XDD-Diff-v1560；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v1560
 * @note ASN.1：UE-MRDC-Capability-v1560；源文件第 20928 行。
 * @note UE-MRDC-Capability-v1560 ::= SEQUENCE { receivedFilters, measAndMobParametersMRDC-v1560, fdd-Add-UE-MRDC-C...
 */
struct UE_MRDC_Capability_v1560 {
    UECapabilityEnquiry_v1560_IEs* receivedFilters; /**< ASN.1 receivedFilters；OCTET STRING (CONTAINING UECapabilityEnquiry_v1560_IEs)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_measAndMobParametersMRDC_v1560; /**< measAndMobParametersMRDC-v1560 是否存在。 */
    MeasAndMobParametersMRDC_v1560 measAndMobParametersMRDC_v1560; /**< ASN.1 measAndMobParametersMRDC-v1560；结构体；OPTIONAL。 */
    bool has_fdd_Add_UE_MRDC_Capabilities_v1560; /**< fdd-Add-UE-MRDC-Capabilities-v1560 是否存在。 */
    UE_MRDC_CapabilityAddXDD_Mode_v1560 fdd_Add_UE_MRDC_Capabilities_v1560; /**< ASN.1 fdd-Add-UE-MRDC-Capabilities-v1560；结构体；OPTIONAL。 */
    bool has_tdd_Add_UE_MRDC_Capabilities_v1560; /**< tdd-Add-UE-MRDC-Capabilities-v1560 是否存在。 */
    UE_MRDC_CapabilityAddXDD_Mode_v1560 tdd_Add_UE_MRDC_Capabilities_v1560; /**< ASN.1 tdd-Add-UE-MRDC-Capabilities-v1560；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v1610 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability
 * @note ASN.1：UE-MRDC-Capability；源文件第 20912 行。
 * @note UE-MRDC-Capability ::= SEQUENCE { measAndMobParametersMRDC, phy-ParametersMRDC-v1530, rf-ParametersM...
 */
struct UE_MRDC_Capability {
    bool has_measAndMobParametersMRDC; /**< measAndMobParametersMRDC 是否存在。 */
    MeasAndMobParametersMRDC measAndMobParametersMRDC; /**< ASN.1 measAndMobParametersMRDC；结构体；OPTIONAL。 */
    bool has_phy_ParametersMRDC_v1530; /**< phy-ParametersMRDC-v1530 是否存在。 */
    Phy_ParametersMRDC phy_ParametersMRDC_v1530; /**< ASN.1 phy-ParametersMRDC-v1530；结构体；OPTIONAL。 */
    RF_ParametersMRDC rf_ParametersMRDC; /**< ASN.1 rf-ParametersMRDC；结构体。 */
    bool has_generalParametersMRDC; /**< generalParametersMRDC 是否存在。 */
    GeneralParametersMRDC_XDD_Diff generalParametersMRDC; /**< ASN.1 generalParametersMRDC；结构体；OPTIONAL。 */
    bool has_fdd_Add_UE_MRDC_Capabilities; /**< fdd-Add-UE-MRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddXDD_Mode fdd_Add_UE_MRDC_Capabilities; /**< ASN.1 fdd-Add-UE-MRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_tdd_Add_UE_MRDC_Capabilities; /**< tdd-Add-UE-MRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddXDD_Mode tdd_Add_UE_MRDC_Capabilities; /**< ASN.1 tdd-Add-UE-MRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_fr1_Add_UE_MRDC_Capabilities; /**< fr1-Add-UE-MRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddFRX_Mode fr1_Add_UE_MRDC_Capabilities; /**< ASN.1 fr1-Add-UE-MRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_fr2_Add_UE_MRDC_Capabilities; /**< fr2-Add-UE-MRDC-Capabilities 是否存在。 */
    UE_MRDC_CapabilityAddFRX_Mode fr2_Add_UE_MRDC_Capabilities; /**< ASN.1 fr2-Add-UE-MRDC-Capabilities；结构体；OPTIONAL。 */
    bool has_featureSetCombinations; /**< featureSetCombinations 是否存在。 */
    FeatureSetCombination* featureSetCombinations_items; /**< ASN.1 featureSetCombinations；SEQUENCE OF FeatureSetCombination，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetCombinations_count; /**< featureSetCombinations 元素个数。 */
    bool has_pdcp_ParametersMRDC_v1530; /**< pdcp-ParametersMRDC-v1530 是否存在。 */
    PDCP_ParametersMRDC pdcp_ParametersMRDC_v1530; /**< ASN.1 pdcp-ParametersMRDC-v1530；结构体；OPTIONAL。 */
    UE_MRDC_Capability_v15g0* lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；OCTET STRING (CONTAINING UE_MRDC_Capability_v15g0)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v1560 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v16e0_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 20975 行。
 * @note SEQUENCE { }
 */
struct UE_MRDC_Capability_v16e0_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UE_MRDC_Capability_v16e0
 * @note ASN.1：UE-MRDC-Capability-v16e0；源文件第 20973 行。
 * @note UE-MRDC-Capability-v16e0 ::= SEQUENCE { rf-ParametersMRDC-v16e0, nonCriticalExtension }
 */
struct UE_MRDC_Capability_v16e0 {
    bool has_rf_ParametersMRDC_v16e0; /**< rf-ParametersMRDC-v16e0 是否存在。 */
    RF_ParametersMRDC_v16e0 rf_ParametersMRDC_v16e0; /**< ASN.1 rf-ParametersMRDC-v16e0；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v16e0_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v15n0
 * @note ASN.1：UE-MRDC-Capability-v15n0；源文件第 20966 行。
 * @note UE-MRDC-Capability-v15n0 ::= SEQUENCE { rf-ParametersMRDC-v15n0, lateNonCriticalExtension, nonCriticalExte...
 */
struct UE_MRDC_Capability_v15n0 {
    bool has_rf_ParametersMRDC_v15n0; /**< rf-ParametersMRDC-v15n0 是否存在。 */
    RF_ParametersMRDC_v15n0 rf_ParametersMRDC_v15n0; /**< ASN.1 rf-ParametersMRDC-v15n0；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v16e0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_MRDC_Capability_v15g0
 * @note ASN.1：UE-MRDC-Capability-v15g0；源文件第 20961 行。
 * @note UE-MRDC-Capability-v15g0 ::= SEQUENCE { rf-ParametersMRDC-v15g0, nonCriticalExtension }
 */
struct UE_MRDC_Capability_v15g0 {
    bool has_rf_ParametersMRDC_v15g0; /**< rf-ParametersMRDC-v15g0 是否存在。 */
    RF_ParametersMRDC_v15g0 rf_ParametersMRDC_v15g0; /**< ASN.1 rf-ParametersMRDC-v15g0；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_MRDC_Capability_v15n0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1800_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 21201 行。
 * @note SEQUENCE { }
 */
struct UE_NR_Capability_v1800_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UE_NR_Capability_v1800
 * @note ASN.1：UE-NR-Capability-v1800；源文件第 21179 行。
 * @note UE-NR-Capability-v1800 ::= SEQUENCE { airToGroundNetwork-r18, eRedCapParameters-r18, ncr-Parameters-r18,...
 */
struct UE_NR_Capability_v1800 {
    bool has_airToGroundNetwork_r18; /**< airToGroundNetwork-r18 是否存在。 */
    UE_NR_Capability_v1800_AirToGroundNetwork_r18 airToGroundNetwork_r18; /**< ASN.1 airToGroundNetwork-r18；枚举；OPTIONAL。 */
    bool has_eRedCapParameters_r18; /**< eRedCapParameters-r18 是否存在。 */
    ERedCapParameters_r18 eRedCapParameters_r18; /**< ASN.1 eRedCapParameters-r18；结构体；OPTIONAL。 */
    bool has_ncr_Parameters_r18; /**< ncr-Parameters-r18 是否存在。 */
    NCR_Parameters_r18 ncr_Parameters_r18; /**< ASN.1 ncr-Parameters-r18；结构体；OPTIONAL。 */
    bool has_softSatelliteSwitchResyncNTN_r18; /**< softSatelliteSwitchResyncNTN-r18 是否存在。 */
    UE_NR_Capability_v1800_SoftSatelliteSwitchResyncNTN_r18 softSatelliteSwitchResyncNTN_r18; /**< ASN.1 softSatelliteSwitchResyncNTN-r18；枚举；OPTIONAL。 */
    bool has_hardSatelliteSwitchResyncNTN_r18; /**< hardSatelliteSwitchResyncNTN-r18 是否存在。 */
    UE_NR_Capability_v1800_HardSatelliteSwitchResyncNTN_r18 hardSatelliteSwitchResyncNTN_r18; /**< ASN.1 hardSatelliteSwitchResyncNTN-r18；枚举；OPTIONAL。 */
    bool has_mt_SDT_r18; /**< mt-SDT-r18 是否存在。 */
    UE_NR_Capability_v1800_Mt_SDT_r18 mt_SDT_r18; /**< ASN.1 mt-SDT-r18；枚举；OPTIONAL。 */
    bool has_mt_SDT_NTN_r18; /**< mt-SDT-NTN-r18 是否存在。 */
    UE_NR_Capability_v1800_Mt_SDT_NTN_r18 mt_SDT_NTN_r18; /**< ASN.1 mt-SDT-NTN-r18；枚举；OPTIONAL。 */
    bool has_inDeviceCoexIndAutonomousDenial_r18; /**< inDeviceCoexIndAutonomousDenial-r18 是否存在。 */
    UE_NR_Capability_v1800_InDeviceCoexIndAutonomousDenial_r18 inDeviceCoexIndAutonomousDenial_r18; /**< ASN.1 inDeviceCoexIndAutonomousDenial-r18；枚举；OPTIONAL。 */
    bool has_inDeviceCoexIndFDM_r18; /**< inDeviceCoexIndFDM-r18 是否存在。 */
    UE_NR_Capability_v1800_InDeviceCoexIndFDM_r18 inDeviceCoexIndFDM_r18; /**< ASN.1 inDeviceCoexIndFDM-r18；枚举；OPTIONAL。 */
    bool has_inDeviceCoexIndTDM_r18; /**< inDeviceCoexIndTDM-r18 是否存在。 */
    UE_NR_Capability_v1800_InDeviceCoexIndTDM_r18 inDeviceCoexIndTDM_r18; /**< ASN.1 inDeviceCoexIndTDM-r18；枚举；OPTIONAL。 */
    bool has_musim_GapPriorityPreference_r18; /**< musim-GapPriorityPreference-r18 是否存在。 */
    UE_NR_Capability_v1800_Musim_GapPriorityPreference_r18 musim_GapPriorityPreference_r18; /**< ASN.1 musim-GapPriorityPreference-r18；枚举；OPTIONAL。 */
    bool has_musim_CapabilityRestriction_r18; /**< musim-CapabilityRestriction-r18 是否存在。 */
    UE_NR_Capability_v1800_Musim_CapabilityRestriction_r18 musim_CapabilityRestriction_r18; /**< ASN.1 musim-CapabilityRestriction-r18；枚举；OPTIONAL。 */
    bool has_multiRx_FR2_Preference_r18; /**< multiRx-FR2-Preference-r18 是否存在。 */
    UE_NR_Capability_v1800_MultiRx_FR2_Preference_r18 multiRx_FR2_Preference_r18; /**< ASN.1 multiRx-FR2-Preference-r18；枚举；OPTIONAL。 */
    bool has_ra_InsteadCG_SDT_r18; /**< ra-InsteadCG-SDT-r18 是否存在。 */
    UE_NR_Capability_v1800_Ra_InsteadCG_SDT_r18 ra_InsteadCG_SDT_r18; /**< ASN.1 ra-InsteadCG-SDT-r18；枚举；OPTIONAL。 */
    bool has_resumeAfterSDT_Release_r18; /**< resumeAfterSDT-Release-r18 是否存在。 */
    UE_NR_Capability_v1800_ResumeAfterSDT_Release_r18 resumeAfterSDT_Release_r18; /**< ASN.1 resumeAfterSDT-Release-r18；枚举；OPTIONAL。 */
    bool has_ul_TrafficInfo_r18; /**< ul-TrafficInfo-r18 是否存在。 */
    UE_NR_Capability_v1800_Ul_TrafficInfo_r18 ul_TrafficInfo_r18; /**< ASN.1 ul-TrafficInfo-r18；枚举；OPTIONAL。 */
    bool has_aerialParameters_r18; /**< aerialParameters-r18 是否存在。 */
    AerialParameters_r18 aerialParameters_r18; /**< ASN.1 aerialParameters-r18；结构体；OPTIONAL。 */
    bool has_ntn_VSAT_AntennaType_r18; /**< ntn-VSAT-AntennaType-r18 是否存在。 */
    UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18 ntn_VSAT_AntennaType_r18; /**< ASN.1 ntn-VSAT-AntennaType-r18；枚举；OPTIONAL。 */
    bool has_ntn_VSAT_MobilityType_r18; /**< ntn-VSAT-MobilityType-r18 是否存在。 */
    UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18 ntn_VSAT_MobilityType_r18; /**< ASN.1 ntn-VSAT-MobilityType-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1800_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1750
 * @note ASN.1：UE-NR-Capability-v1750；源文件第 21173 行。
 * @note UE-NR-Capability-v1750 ::= SEQUENCE { crossCarrierSchedulingConfigurationRelease-r17, nonCriticalExtensi...
 */
struct UE_NR_Capability_v1750 {
    bool has_crossCarrierSchedulingConfigurationRelease_r17; /**< crossCarrierSchedulingConfigurationRelease-r17 是否存在。 */
    UE_NR_Capability_v1750_CrossCarrierSchedulingConfigurationRelease_r17 crossCarrierSchedulingConfigurationRelease_r17; /**< ASN.1 crossCarrierSchedulingConfigurationRelease-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1800 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1740
 * @note ASN.1：UE-NR-Capability-v1740；源文件第 21168 行。
 * @note UE-NR-Capability-v1740 ::= SEQUENCE { redCapParameters-v1740, nonCriticalExtension }
 */
struct UE_NR_Capability_v1740 {
    RedCapParameters_v1740 redCapParameters_v1740; /**< ASN.1 redCapParameters-v1740；结构体。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1750 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief BAP_Parameters_v1700
 * @note ASN.1：BAP-Parameters-v1700；源文件第 21233 行。
 * @note BAP-Parameters-v1700 ::= SEQUENCE { bapHeaderRewriting-Rerouting-r17, bapHeaderRewriting-Routing-r17 }
 */
struct BAP_Parameters_v1700 {
    bool has_bapHeaderRewriting_Rerouting_r17; /**< bapHeaderRewriting-Rerouting-r17 是否存在。 */
    BAP_Parameters_v1700_BapHeaderRewriting_Rerouting_r17 bapHeaderRewriting_Rerouting_r17; /**< ASN.1 bapHeaderRewriting-Rerouting-r17；枚举；OPTIONAL。 */
    bool has_bapHeaderRewriting_Routing_r17; /**< bapHeaderRewriting-Routing-r17 是否存在。 */
    BAP_Parameters_v1700_BapHeaderRewriting_Routing_r17 bapHeaderRewriting_Routing_r17; /**< ASN.1 bapHeaderRewriting-Routing-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MBS_Parameters_r17
 * @note ASN.1：MBS-Parameters-r17；源文件第 21238 行。
 * @note MBS-Parameters-r17 ::= SEQUENCE { maxMRB-Add-r17 }
 */
struct MBS_Parameters_r17 {
    bool has_maxMRB_Add_r17; /**< maxMRB-Add-r17 是否存在。 */
    int64_t maxMRB_Add_r17; /**< ASN.1 maxMRB-Add-r17；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief UE_RadioPagingInfo_r17
 * @note ASN.1：UE-RadioPagingInfo-r17；源文件第 21245 行。
 * @note UE-RadioPagingInfo-r17 ::= SEQUENCE { pei-SubgroupingSupportBandList-r17 }
 */
struct UE_RadioPagingInfo_r17 {
    bool has_pei_SubgroupingSupportBandList_r17; /**< pei-SubgroupingSupportBandList-r17 是否存在。 */
    FreqBandIndicatorNR* pei_SubgroupingSupportBandList_r17_items; /**< ASN.1 pei-SubgroupingSupportBandList-r17；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pei_SubgroupingSupportBandList_r17_count; /**< pei-SubgroupingSupportBandList-r17 元素个数。 */
};


/**
 * @brief UE_NR_Capability_v1700
 * @note ASN.1：UE-NR-Capability-v1700；源文件第 21140 行。
 * @note UE-NR-Capability-v1700 ::= SEQUENCE { inactiveStatePO-Determination-r17, highSpeedParameters-v1700, powS...
 */
struct UE_NR_Capability_v1700 {
    bool has_inactiveStatePO_Determination_r17; /**< inactiveStatePO-Determination-r17 是否存在。 */
    UE_NR_Capability_v1700_InactiveStatePO_Determination_r17 inactiveStatePO_Determination_r17; /**< ASN.1 inactiveStatePO-Determination-r17；枚举；OPTIONAL。 */
    bool has_highSpeedParameters_v1700; /**< highSpeedParameters-v1700 是否存在。 */
    HighSpeedParameters_v1700 highSpeedParameters_v1700; /**< ASN.1 highSpeedParameters-v1700；结构体；OPTIONAL。 */
    bool has_powSav_Parameters_v1700; /**< powSav-Parameters-v1700 是否存在。 */
    PowSav_Parameters_v1700 powSav_Parameters_v1700; /**< ASN.1 powSav-Parameters-v1700；结构体；OPTIONAL。 */
    bool has_mac_Parameters_v1700; /**< mac-Parameters-v1700 是否存在。 */
    MAC_Parameters_v1700 mac_Parameters_v1700; /**< ASN.1 mac-Parameters-v1700；结构体；OPTIONAL。 */
    bool has_ims_Parameters_v1700; /**< ims-Parameters-v1700 是否存在。 */
    IMS_Parameters_v1700 ims_Parameters_v1700; /**< ASN.1 ims-Parameters-v1700；结构体；OPTIONAL。 */
    MeasAndMobParameters_v1700 measAndMobParameters_v1700; /**< ASN.1 measAndMobParameters-v1700；结构体。 */
    bool has_appLayerMeasParameters_r17; /**< appLayerMeasParameters-r17 是否存在。 */
    AppLayerMeasParameters_r17 appLayerMeasParameters_r17; /**< ASN.1 appLayerMeasParameters-r17；结构体；OPTIONAL。 */
    bool has_redCapParameters_r17; /**< redCapParameters-r17 是否存在。 */
    RedCapParameters_r17 redCapParameters_r17; /**< ASN.1 redCapParameters-r17；结构体；OPTIONAL。 */
    bool has_ra_SDT_r17; /**< ra-SDT-r17 是否存在。 */
    UE_NR_Capability_v1700_Ra_SDT_r17 ra_SDT_r17; /**< ASN.1 ra-SDT-r17；枚举；OPTIONAL。 */
    bool has_srb_SDT_r17; /**< srb-SDT-r17 是否存在。 */
    UE_NR_Capability_v1700_Srb_SDT_r17 srb_SDT_r17; /**< ASN.1 srb-SDT-r17；枚举；OPTIONAL。 */
    bool has_gNB_SideRTT_BasedPDC_r17; /**< gNB-SideRTT-BasedPDC-r17 是否存在。 */
    UE_NR_Capability_v1700_GNB_SideRTT_BasedPDC_r17 gNB_SideRTT_BasedPDC_r17; /**< ASN.1 gNB-SideRTT-BasedPDC-r17；枚举；OPTIONAL。 */
    bool has_bh_RLF_DetectionRecovery_Indication_r17; /**< bh-RLF-DetectionRecovery-Indication-r17 是否存在。 */
    UE_NR_Capability_v1700_Bh_RLF_DetectionRecovery_Indication_r17 bh_RLF_DetectionRecovery_Indication_r17; /**< ASN.1 bh-RLF-DetectionRecovery-Indication-r17；枚举；OPTIONAL。 */
    bool has_nrdc_Parameters_v1700; /**< nrdc-Parameters-v1700 是否存在。 */
    NRDC_Parameters_v1700 nrdc_Parameters_v1700; /**< ASN.1 nrdc-Parameters-v1700；结构体；OPTIONAL。 */
    bool has_bap_Parameters_v1700; /**< bap-Parameters-v1700 是否存在。 */
    BAP_Parameters_v1700 bap_Parameters_v1700; /**< ASN.1 bap-Parameters-v1700；结构体；OPTIONAL。 */
    bool has_musim_GapPreference_r17; /**< musim-GapPreference-r17 是否存在。 */
    UE_NR_Capability_v1700_Musim_GapPreference_r17 musim_GapPreference_r17; /**< ASN.1 musim-GapPreference-r17；枚举；OPTIONAL。 */
    bool has_musimLeaveConnected_r17; /**< musimLeaveConnected-r17 是否存在。 */
    UE_NR_Capability_v1700_MusimLeaveConnected_r17 musimLeaveConnected_r17; /**< ASN.1 musimLeaveConnected-r17；枚举；OPTIONAL。 */
    MBS_Parameters_r17 mbs_Parameters_r17; /**< ASN.1 mbs-Parameters-r17；结构体。 */
    bool has_nonTerrestrialNetwork_r17; /**< nonTerrestrialNetwork-r17 是否存在。 */
    UE_NR_Capability_v1700_NonTerrestrialNetwork_r17 nonTerrestrialNetwork_r17; /**< ASN.1 nonTerrestrialNetwork-r17；枚举；OPTIONAL。 */
    bool has_ntn_ScenarioSupport_r17; /**< ntn-ScenarioSupport-r17 是否存在。 */
    UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17 ntn_ScenarioSupport_r17; /**< ASN.1 ntn-ScenarioSupport-r17；枚举；OPTIONAL。 */
    bool has_sliceInfoforCellReselection_r17; /**< sliceInfoforCellReselection-r17 是否存在。 */
    UE_NR_Capability_v1700_SliceInfoforCellReselection_r17 sliceInfoforCellReselection_r17; /**< ASN.1 sliceInfoforCellReselection-r17；枚举；OPTIONAL。 */
    bool has_ue_RadioPagingInfo_r17; /**< ue-RadioPagingInfo-r17 是否存在。 */
    UE_RadioPagingInfo_r17 ue_RadioPagingInfo_r17; /**< ASN.1 ue-RadioPagingInfo-r17；结构体；OPTIONAL。 */
    bool has_ul_GapFR2_Pattern_r17; /**< ul-GapFR2-Pattern-r17 是否存在。 */
    BitString ul_GapFR2_Pattern_r17; /**< ASN.1 ul-GapFR2-Pattern-r17；SIZE (4)，定长；OPTIONAL。 */
    bool has_ntn_Parameters_r17; /**< ntn-Parameters-r17 是否存在。 */
    NTN_Parameters_r17 ntn_Parameters_r17; /**< ASN.1 ntn-Parameters-r17；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1740 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1690
 * @note ASN.1：UE-NR-Capability-v1690；源文件第 21117 行。
 * @note UE-NR-Capability-v1690 ::= SEQUENCE { ul-RRC-Segmentation-r16, nonCriticalExtension }
 */
struct UE_NR_Capability_v1690 {
    bool has_ul_RRC_Segmentation_r16; /**< ul-RRC-Segmentation-r16 是否存在。 */
    UE_NR_Capability_v1690_Ul_RRC_Segmentation_r16 ul_RRC_Segmentation_r16; /**< ASN.1 ul-RRC-Segmentation-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1700 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1650
 * @note ASN.1：UE-NR-Capability-v1650；源文件第 21111 行。
 * @note UE-NR-Capability-v1650 ::= SEQUENCE { mpsPriorityIndication-r16, highSpeedParameters-v1650, nonCriticalE...
 */
struct UE_NR_Capability_v1650 {
    bool has_mpsPriorityIndication_r16; /**< mpsPriorityIndication-r16 是否存在。 */
    UE_NR_Capability_v1650_MpsPriorityIndication_r16 mpsPriorityIndication_r16; /**< ASN.1 mpsPriorityIndication-r16；枚举；OPTIONAL。 */
    bool has_highSpeedParameters_v1650; /**< highSpeedParameters-v1650 是否存在。 */
    HighSpeedParameters_v1650 highSpeedParameters_v1650; /**< ASN.1 highSpeedParameters-v1650；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1690 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1640
 * @note ASN.1：UE-NR-Capability-v1640；源文件第 21105 行。
 * @note UE-NR-Capability-v1640 ::= SEQUENCE { redirectAtResumeByNAS-r16, phy-ParametersSharedSpectrumChAccess-r1...
 */
struct UE_NR_Capability_v1640 {
    bool has_redirectAtResumeByNAS_r16; /**< redirectAtResumeByNAS-r16 是否存在。 */
    UE_NR_Capability_v1640_RedirectAtResumeByNAS_r16 redirectAtResumeByNAS_r16; /**< ASN.1 redirectAtResumeByNAS-r16；枚举；OPTIONAL。 */
    bool has_phy_ParametersSharedSpectrumChAccess_r16; /**< phy-ParametersSharedSpectrumChAccess-r16 是否存在。 */
    Phy_ParametersSharedSpectrumChAccess_r16 phy_ParametersSharedSpectrumChAccess_r16; /**< ASN.1 phy-ParametersSharedSpectrumChAccess-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1650 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_CapabilityAddFRX_Mode_v1610
 * @note ASN.1：UE-NR-CapabilityAddFRX-Mode-v1610；源文件第 21223 行。
 * @note UE-NR-CapabilityAddFRX-Mode-v1610 ::= SEQUENCE { powSav-ParametersFRX-Diff-r16, mac-ParametersFRX-Diff-r16 }
 */
struct UE_NR_CapabilityAddFRX_Mode_v1610 {
    bool has_powSav_ParametersFRX_Diff_r16; /**< powSav-ParametersFRX-Diff-r16 是否存在。 */
    PowSav_ParametersFRX_Diff_r16 powSav_ParametersFRX_Diff_r16; /**< ASN.1 powSav-ParametersFRX-Diff-r16；结构体；OPTIONAL。 */
    bool has_mac_ParametersFRX_Diff_r16; /**< mac-ParametersFRX-Diff-r16 是否存在。 */
    MAC_ParametersFRX_Diff_r16 mac_ParametersFRX_Diff_r16; /**< ASN.1 mac-ParametersFRX-Diff-r16；结构体；OPTIONAL。 */
};


/**
 * @brief BAP_Parameters_r16
 * @note ASN.1：BAP-Parameters-r16；源文件第 21228 行。
 * @note BAP-Parameters-r16 ::= SEQUENCE { flowControlBH-RLC-ChannelBased-r16, flowControlRouting-ID-Based-r16 }
 */
struct BAP_Parameters_r16 {
    bool has_flowControlBH_RLC_ChannelBased_r16; /**< flowControlBH-RLC-ChannelBased-r16 是否存在。 */
    BAP_Parameters_r16_FlowControlBH_RLC_ChannelBased_r16 flowControlBH_RLC_ChannelBased_r16; /**< ASN.1 flowControlBH-RLC-ChannelBased-r16；枚举；OPTIONAL。 */
    bool has_flowControlRouting_ID_Based_r16; /**< flowControlRouting-ID-Based-r16 是否存在。 */
    BAP_Parameters_r16_FlowControlRouting_ID_Based_r16 flowControlRouting_ID_Based_r16; /**< ASN.1 flowControlRouting-ID-Based-r16；枚举；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1610
 * @note ASN.1：UE-NR-Capability-v1610；源文件第 21081 行。
 * @note UE-NR-Capability-v1610 ::= SEQUENCE { inDeviceCoexInd-r16, dl-DedicatedMessageSegmentation-r16, nrdc-Par...
 */
struct UE_NR_Capability_v1610 {
    bool has_inDeviceCoexInd_r16; /**< inDeviceCoexInd-r16 是否存在。 */
    UE_NR_Capability_v1610_InDeviceCoexInd_r16 inDeviceCoexInd_r16; /**< ASN.1 inDeviceCoexInd-r16；枚举；OPTIONAL。 */
    bool has_dl_DedicatedMessageSegmentation_r16; /**< dl-DedicatedMessageSegmentation-r16 是否存在。 */
    UE_NR_Capability_v1610_Dl_DedicatedMessageSegmentation_r16 dl_DedicatedMessageSegmentation_r16; /**< ASN.1 dl-DedicatedMessageSegmentation-r16；枚举；OPTIONAL。 */
    bool has_nrdc_Parameters_v1610; /**< nrdc-Parameters-v1610 是否存在。 */
    NRDC_Parameters_v1610 nrdc_Parameters_v1610; /**< ASN.1 nrdc-Parameters-v1610；结构体；OPTIONAL。 */
    bool has_powSav_Parameters_r16; /**< powSav-Parameters-r16 是否存在。 */
    PowSav_Parameters_r16 powSav_Parameters_r16; /**< ASN.1 powSav-Parameters-r16；结构体；OPTIONAL。 */
    bool has_fr1_Add_UE_NR_Capabilities_v1610; /**< fr1-Add-UE-NR-Capabilities-v1610 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode_v1610 fr1_Add_UE_NR_Capabilities_v1610; /**< ASN.1 fr1-Add-UE-NR-Capabilities-v1610；结构体；OPTIONAL。 */
    bool has_fr2_Add_UE_NR_Capabilities_v1610; /**< fr2-Add-UE-NR-Capabilities-v1610 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode_v1610 fr2_Add_UE_NR_Capabilities_v1610; /**< ASN.1 fr2-Add-UE-NR-Capabilities-v1610；结构体；OPTIONAL。 */
    bool has_bh_RLF_Indication_r16; /**< bh-RLF-Indication-r16 是否存在。 */
    UE_NR_Capability_v1610_Bh_RLF_Indication_r16 bh_RLF_Indication_r16; /**< ASN.1 bh-RLF-Indication-r16；枚举；OPTIONAL。 */
    bool has_directSN_AdditionFirstRRC_IAB_r16; /**< directSN-AdditionFirstRRC-IAB-r16 是否存在。 */
    UE_NR_Capability_v1610_DirectSN_AdditionFirstRRC_IAB_r16 directSN_AdditionFirstRRC_IAB_r16; /**< ASN.1 directSN-AdditionFirstRRC-IAB-r16；枚举；OPTIONAL。 */
    bool has_bap_Parameters_r16; /**< bap-Parameters-r16 是否存在。 */
    BAP_Parameters_r16 bap_Parameters_r16; /**< ASN.1 bap-Parameters-r16；结构体；OPTIONAL。 */
    bool has_referenceTimeProvision_r16; /**< referenceTimeProvision-r16 是否存在。 */
    UE_NR_Capability_v1610_ReferenceTimeProvision_r16 referenceTimeProvision_r16; /**< ASN.1 referenceTimeProvision-r16；枚举；OPTIONAL。 */
    bool has_sidelinkParameters_r16; /**< sidelinkParameters-r16 是否存在。 */
    SidelinkParameters_r16 sidelinkParameters_r16; /**< ASN.1 sidelinkParameters-r16；结构体；OPTIONAL。 */
    bool has_highSpeedParameters_r16; /**< highSpeedParameters-r16 是否存在。 */
    HighSpeedParameters_r16 highSpeedParameters_r16; /**< ASN.1 highSpeedParameters-r16；结构体；OPTIONAL。 */
    bool has_mac_Parameters_v1610; /**< mac-Parameters-v1610 是否存在。 */
    MAC_Parameters_v1610 mac_Parameters_v1610; /**< ASN.1 mac-Parameters-v1610；结构体；OPTIONAL。 */
    bool has_mcgRLF_RecoveryViaSCG_r16; /**< mcgRLF-RecoveryViaSCG-r16 是否存在。 */
    UE_NR_Capability_v1610_McgRLF_RecoveryViaSCG_r16 mcgRLF_RecoveryViaSCG_r16; /**< ASN.1 mcgRLF-RecoveryViaSCG-r16；枚举；OPTIONAL。 */
    bool has_resumeWithStoredMCG_SCells_r16; /**< resumeWithStoredMCG-SCells-r16 是否存在。 */
    UE_NR_Capability_v1610_ResumeWithStoredMCG_SCells_r16 resumeWithStoredMCG_SCells_r16; /**< ASN.1 resumeWithStoredMCG-SCells-r16；枚举；OPTIONAL。 */
    bool has_resumeWithStoredSCG_r16; /**< resumeWithStoredSCG-r16 是否存在。 */
    UE_NR_Capability_v1610_ResumeWithStoredSCG_r16 resumeWithStoredSCG_r16; /**< ASN.1 resumeWithStoredSCG-r16；枚举；OPTIONAL。 */
    bool has_resumeWithSCG_Config_r16; /**< resumeWithSCG-Config-r16 是否存在。 */
    UE_NR_Capability_v1610_ResumeWithSCG_Config_r16 resumeWithSCG_Config_r16; /**< ASN.1 resumeWithSCG-Config-r16；枚举；OPTIONAL。 */
    bool has_ue_BasedPerfMeas_Parameters_r16; /**< ue-BasedPerfMeas-Parameters-r16 是否存在。 */
    UE_BasedPerfMeas_Parameters_r16 ue_BasedPerfMeas_Parameters_r16; /**< ASN.1 ue-BasedPerfMeas-Parameters-r16；结构体；OPTIONAL。 */
    bool has_son_Parameters_r16; /**< son-Parameters-r16 是否存在。 */
    SON_Parameters_r16 son_Parameters_r16; /**< ASN.1 son-Parameters-r16；结构体；OPTIONAL。 */
    bool has_onDemandSIB_Connected_r16; /**< onDemandSIB-Connected-r16 是否存在。 */
    UE_NR_Capability_v1610_OnDemandSIB_Connected_r16 onDemandSIB_Connected_r16; /**< ASN.1 onDemandSIB-Connected-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1640 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1570
 * @note ASN.1：UE-NR-Capability-v1570；源文件第 21057 行。
 * @note UE-NR-Capability-v1570 ::= SEQUENCE { nrdc-Parameters-v1570, nonCriticalExtension }
 */
struct UE_NR_Capability_v1570 {
    bool has_nrdc_Parameters_v1570; /**< nrdc-Parameters-v1570 是否存在。 */
    NRDC_Parameters_v1570 nrdc_Parameters_v1570; /**< ASN.1 nrdc-Parameters-v1570；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1610 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1560
 * @note ASN.1：UE-NR-Capability-v1560；源文件第 21051 行。
 * @note UE-NR-Capability-v1560 ::= SEQUENCE { nrdc-Parameters, receivedFilters, nonCriticalExtension }
 */
struct UE_NR_Capability_v1560 {
    bool has_nrdc_Parameters; /**< nrdc-Parameters 是否存在。 */
    NRDC_Parameters nrdc_Parameters; /**< ASN.1 nrdc-Parameters；结构体；OPTIONAL。 */
    UECapabilityEnquiry_v1560_IEs* receivedFilters; /**< ASN.1 receivedFilters；OCTET STRING (CONTAINING UECapabilityEnquiry_v1560_IEs)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1570 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1550
 * @note ASN.1：UE-NR-Capability-v1550；源文件第 21046 行。
 * @note UE-NR-Capability-v1550 ::= SEQUENCE { reducedCP-Latency, nonCriticalExtension }
 */
struct UE_NR_Capability_v1550 {
    bool has_reducedCP_Latency; /**< reducedCP-Latency 是否存在。 */
    UE_NR_Capability_v1550_ReducedCP_Latency reducedCP_Latency; /**< ASN.1 reducedCP-Latency；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1560 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_CapabilityAddFRX_Mode_v1540
 * @note ASN.1：UE-NR-CapabilityAddFRX-Mode-v1540；源文件第 21219 行。
 * @note UE-NR-CapabilityAddFRX-Mode-v1540 ::= SEQUENCE { ims-ParametersFRX-Diff }
 */
struct UE_NR_CapabilityAddFRX_Mode_v1540 {
    bool has_ims_ParametersFRX_Diff; /**< ims-ParametersFRX-Diff 是否存在。 */
    IMS_ParametersFRX_Diff ims_ParametersFRX_Diff; /**< ASN.1 ims-ParametersFRX-Diff；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v1540
 * @note ASN.1：UE-NR-Capability-v1540；源文件第 21036 行。
 * @note UE-NR-Capability-v1540 ::= SEQUENCE { sdap-Parameters, overheatingInd, ims-Parameters, fr1-Add-UE-NR-Cap...
 */
struct UE_NR_Capability_v1540 {
    bool has_sdap_Parameters; /**< sdap-Parameters 是否存在。 */
    SDAP_Parameters sdap_Parameters; /**< ASN.1 sdap-Parameters；结构体；OPTIONAL。 */
    bool has_overheatingInd; /**< overheatingInd 是否存在。 */
    UE_NR_Capability_v1540_OverheatingInd overheatingInd; /**< ASN.1 overheatingInd；枚举；OPTIONAL。 */
    bool has_ims_Parameters; /**< ims-Parameters 是否存在。 */
    IMS_Parameters ims_Parameters; /**< ASN.1 ims-Parameters；结构体；OPTIONAL。 */
    bool has_fr1_Add_UE_NR_Capabilities_v1540; /**< fr1-Add-UE-NR-Capabilities-v1540 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode_v1540 fr1_Add_UE_NR_Capabilities_v1540; /**< ASN.1 fr1-Add-UE-NR-Capabilities-v1540；结构体；OPTIONAL。 */
    bool has_fr2_Add_UE_NR_Capabilities_v1540; /**< fr2-Add-UE-NR-Capabilities-v1540 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode_v1540 fr2_Add_UE_NR_Capabilities_v1540; /**< ASN.1 fr2-Add-UE-NR-Capabilities-v1540；结构体；OPTIONAL。 */
    bool has_fr1_fr2_Add_UE_NR_Capabilities; /**< fr1-fr2-Add-UE-NR-Capabilities 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode fr1_fr2_Add_UE_NR_Capabilities; /**< ASN.1 fr1-fr2-Add-UE-NR-Capabilities；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1550 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_CapabilityAddXDD_Mode_v1530
 * @note ASN.1：UE-NR-CapabilityAddXDD-Mode-v1530；源文件第 21210 行。
 * @note UE-NR-CapabilityAddXDD-Mode-v1530 ::= SEQUENCE { eutra-ParametersXDD-Diff }
 */
struct UE_NR_CapabilityAddXDD_Mode_v1530 {
    EUTRA_ParametersXDD_Diff eutra_ParametersXDD_Diff; /**< ASN.1 eutra-ParametersXDD-Diff；结构体。 */
};


/**
 * @brief UE_NR_Capability_v1530
 * @note ASN.1：UE-NR-Capability-v1530；源文件第 21026 行。
 * @note UE-NR-Capability-v1530 ::= SEQUENCE { fdd-Add-UE-NR-Capabilities-v1530, tdd-Add-UE-NR-Capabilities-v1530...
 */
struct UE_NR_Capability_v1530 {
    bool has_fdd_Add_UE_NR_Capabilities_v1530; /**< fdd-Add-UE-NR-Capabilities-v1530 是否存在。 */
    UE_NR_CapabilityAddXDD_Mode_v1530 fdd_Add_UE_NR_Capabilities_v1530; /**< ASN.1 fdd-Add-UE-NR-Capabilities-v1530；结构体；OPTIONAL。 */
    bool has_tdd_Add_UE_NR_Capabilities_v1530; /**< tdd-Add-UE-NR-Capabilities-v1530 是否存在。 */
    UE_NR_CapabilityAddXDD_Mode_v1530 tdd_Add_UE_NR_Capabilities_v1530; /**< ASN.1 tdd-Add-UE-NR-Capabilities-v1530；结构体；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    UE_NR_Capability_v1530_Dummy dummy; /**< ASN.1 dummy；枚举；OPTIONAL。 */
    bool has_interRAT_Parameters; /**< interRAT-Parameters 是否存在。 */
    InterRAT_Parameters interRAT_Parameters; /**< ASN.1 interRAT-Parameters；结构体；OPTIONAL。 */
    bool has_inactiveState; /**< inactiveState 是否存在。 */
    UE_NR_Capability_v1530_InactiveState inactiveState; /**< ASN.1 inactiveState；枚举；OPTIONAL。 */
    bool has_delayBudgetReporting; /**< delayBudgetReporting 是否存在。 */
    UE_NR_Capability_v1530_DelayBudgetReporting delayBudgetReporting; /**< ASN.1 delayBudgetReporting；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1540 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability
 * @note ASN.1：UE-NR-Capability；源文件第 21007 行。
 * @note UE-NR-Capability ::= SEQUENCE { accessStratumRelease, pdcp-Parameters, rlc-Parameters, mac-Paramet...
 */
struct UE_NR_Capability {
    AccessStratumRelease accessStratumRelease; /**< ASN.1 accessStratumRelease；枚举。 */
    PDCP_Parameters pdcp_Parameters; /**< ASN.1 pdcp-Parameters；结构体。 */
    bool has_rlc_Parameters; /**< rlc-Parameters 是否存在。 */
    RLC_Parameters rlc_Parameters; /**< ASN.1 rlc-Parameters；结构体；OPTIONAL。 */
    bool has_mac_Parameters; /**< mac-Parameters 是否存在。 */
    MAC_Parameters mac_Parameters; /**< ASN.1 mac-Parameters；结构体；OPTIONAL。 */
    Phy_Parameters phy_Parameters; /**< ASN.1 phy-Parameters；结构体。 */
    RF_Parameters rf_Parameters; /**< ASN.1 rf-Parameters；结构体。 */
    bool has_measAndMobParameters; /**< measAndMobParameters 是否存在。 */
    MeasAndMobParameters measAndMobParameters; /**< ASN.1 measAndMobParameters；结构体；OPTIONAL。 */
    bool has_fdd_Add_UE_NR_Capabilities; /**< fdd-Add-UE-NR-Capabilities 是否存在。 */
    UE_NR_CapabilityAddXDD_Mode fdd_Add_UE_NR_Capabilities; /**< ASN.1 fdd-Add-UE-NR-Capabilities；结构体；OPTIONAL。 */
    bool has_tdd_Add_UE_NR_Capabilities; /**< tdd-Add-UE-NR-Capabilities 是否存在。 */
    UE_NR_CapabilityAddXDD_Mode tdd_Add_UE_NR_Capabilities; /**< ASN.1 tdd-Add-UE-NR-Capabilities；结构体；OPTIONAL。 */
    bool has_fr1_Add_UE_NR_Capabilities; /**< fr1-Add-UE-NR-Capabilities 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode fr1_Add_UE_NR_Capabilities; /**< ASN.1 fr1-Add-UE-NR-Capabilities；结构体；OPTIONAL。 */
    bool has_fr2_Add_UE_NR_Capabilities; /**< fr2-Add-UE-NR-Capabilities 是否存在。 */
    UE_NR_CapabilityAddFRX_Mode fr2_Add_UE_NR_Capabilities; /**< ASN.1 fr2-Add-UE-NR-Capabilities；结构体；OPTIONAL。 */
    bool has_featureSets; /**< featureSets 是否存在。 */
    FeatureSets featureSets; /**< ASN.1 featureSets；结构体；OPTIONAL。 */
    bool has_featureSetCombinations; /**< featureSetCombinations 是否存在。 */
    FeatureSetCombination* featureSetCombinations_items; /**< ASN.1 featureSetCombinations；SEQUENCE OF FeatureSetCombination，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t featureSetCombinations_count; /**< featureSetCombinations 元素个数。 */
    UE_NR_Capability_v15c0* lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；OCTET STRING (CONTAINING UE_NR_Capability_v15c0)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v1530 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v16d0_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 21136 行。
 * @note SEQUENCE { }
 */
struct UE_NR_Capability_v16d0_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UE_NR_Capability_v16d0
 * @note ASN.1：UE-NR-Capability-v16d0；源文件第 21134 行。
 * @note UE-NR-Capability-v16d0 ::= SEQUENCE { featureSets-v16d0, nonCriticalExtension }
 */
struct UE_NR_Capability_v16d0 {
    bool has_featureSets_v16d0; /**< featureSets-v16d0 是否存在。 */
    FeatureSets_v16d0 featureSets_v16d0; /**< ASN.1 featureSets-v16d0；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v16d0_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v16c0
 * @note ASN.1：UE-NR-Capability-v16c0；源文件第 21129 行。
 * @note UE-NR-Capability-v16c0 ::= SEQUENCE { rf-Parameters-v16c0, nonCriticalExtension }
 */
struct UE_NR_Capability_v16c0 {
    bool has_rf_Parameters_v16c0; /**< rf-Parameters-v16c0 是否存在。 */
    RF_Parameters_v16c0 rf_Parameters_v16c0; /**< ASN.1 rf-Parameters-v16c0；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v16d0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v16a0
 * @note ASN.1：UE-NR-Capability-v16a0；源文件第 21123 行。
 * @note UE-NR-Capability-v16a0 ::= SEQUENCE { phy-Parameters-v16a0, rf-Parameters-v16a0, nonCriticalExtension }
 */
struct UE_NR_Capability_v16a0 {
    bool has_phy_Parameters_v16a0; /**< phy-Parameters-v16a0 是否存在。 */
    Phy_Parameters_v16a0 phy_Parameters_v16a0; /**< ASN.1 phy-Parameters-v16a0；结构体；OPTIONAL。 */
    bool has_rf_Parameters_v16a0; /**< rf-Parameters-v16a0 是否存在。 */
    RF_Parameters_v16a0 rf_Parameters_v16a0; /**< ASN.1 rf-Parameters-v16a0；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v16c0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v15j0
 * @note ASN.1：UE-NR-Capability-v15j0；源文件第 21074 行。
 * @note UE-NR-Capability-v15j0 ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct UE_NR_Capability_v15j0 {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v16a0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v15g0
 * @note ASN.1：UE-NR-Capability-v15g0；源文件第 21069 行。
 * @note UE-NR-Capability-v15g0 ::= SEQUENCE { rf-Parameters-v15g0, nonCriticalExtension }
 */
struct UE_NR_Capability_v15g0 {
    bool has_rf_Parameters_v15g0; /**< rf-Parameters-v15g0 是否存在。 */
    RF_Parameters_v15g0 rf_Parameters_v15g0; /**< ASN.1 rf-Parameters-v15g0；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v15j0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_NR_Capability_v15c0
 * @note ASN.1：UE-NR-Capability-v15c0；源文件第 21063 行。
 * @note UE-NR-Capability-v15c0 ::= SEQUENCE { nrdc-Parameters-v15c0, partialFR2-FallbackRX-Req, nonCriticalExten...
 */
struct UE_NR_Capability_v15c0 {
    bool has_nrdc_Parameters_v15c0; /**< nrdc-Parameters-v15c0 是否存在。 */
    NRDC_Parameters_v15c0 nrdc_Parameters_v15c0; /**< ASN.1 nrdc-Parameters-v15c0；结构体；OPTIONAL。 */
    bool has_partialFR2_FallbackRX_Req; /**< partialFR2-FallbackRX-Req 是否存在。 */
    UE_NR_Capability_v15c0_PartialFR2_FallbackRX_Req partialFR2_FallbackRX_Req; /**< ASN.1 partialFR2-FallbackRX-Req；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UE_NR_Capability_v15g0 nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_AppLayerIdleInactiveConfig_r18
 * @note ASN.1：SetupRelease<AppLayerIdleInactiveConfig-r18>；源文件第 21310 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_AppLayerIdleInactiveConfig_r18_Tag {
    SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_AppLayerIdleInactiveConfig_r18_Tag;

struct SetupRelease_AppLayerIdleInactiveConfig_r18 {
    SetupRelease_AppLayerIdleInactiveConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        AppLayerIdleInactiveConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MeasConfigAppLayer_r17_ExtGroup1
 * @note ASN.1：MeasConfigAppLayer_r17_ExtGroup1；源文件第 21307 行。
 */
struct MeasConfigAppLayer_r17_ExtGroup1 {
    bool has_reportingSRB_r18; /**< reportingSRB-r18 是否存在。 */
    MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18 reportingSRB_r18; /**< ASN.1 reportingSRB-r18；枚举；OPTIONAL。 */
    bool has_appLayerMeasPriority_r18; /**< appLayerMeasPriority-r18 是否存在。 */
    int64_t appLayerMeasPriority_r18; /**< ASN.1 appLayerMeasPriority-r18；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_appLayerIdleInactiveConfig_r18; /**< appLayerIdleInactiveConfig-r18 是否存在。 */
    SetupRelease_AppLayerIdleInactiveConfig_r18 appLayerIdleInactiveConfig_r18; /**< ASN.1 appLayerIdleInactiveConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief RAN_VisibleParameters_r17_ExtGroup1
 * @note ASN.1：RAN_VisibleParameters_r17_ExtGroup1；源文件第 21319 行。
 */
struct RAN_VisibleParameters_r17_ExtGroup1 {
    bool has_ran_VisibleReportingSRB_r18; /**< ran-VisibleReportingSRB-r18 是否存在。 */
    RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18 ran_VisibleReportingSRB_r18; /**< ASN.1 ran-VisibleReportingSRB-r18；枚举；OPTIONAL。 */
};


/**
 * @brief RAN_VisibleParameters_r17
 * @note ASN.1：RAN-VisibleParameters-r17；源文件第 21314 行。
 * @note RAN-VisibleParameters-r17 ::= SEQUENCE { ran-VisiblePeriodicity-r17, numberOfBufferLevelEntries-r17, report...
 */
struct RAN_VisibleParameters_r17 {
    bool has_ran_VisiblePeriodicity_r17; /**< ran-VisiblePeriodicity-r17 是否存在。 */
    RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17 ran_VisiblePeriodicity_r17; /**< ASN.1 ran-VisiblePeriodicity-r17；枚举；OPTIONAL。 */
    bool has_numberOfBufferLevelEntries_r17; /**< numberOfBufferLevelEntries-r17 是否存在。 */
    int64_t numberOfBufferLevelEntries_r17; /**< ASN.1 numberOfBufferLevelEntries-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_reportPlayoutDelayForMediaStartup_r17; /**< reportPlayoutDelayForMediaStartup-r17 是否存在。 */
    bool reportPlayoutDelayForMediaStartup_r17; /**< ASN.1 reportPlayoutDelayForMediaStartup-r17；BOOLEAN，1 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RAN_VisibleParameters_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_RAN_VisibleParameters_r17
 * @note ASN.1：SetupRelease<RAN-VisibleParameters-r17>；源文件第 21305 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RAN_VisibleParameters_r17_Tag {
    SetupRelease_RAN_VisibleParameters_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RAN_VisibleParameters_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RAN_VisibleParameters_r17_Tag;

struct SetupRelease_RAN_VisibleParameters_r17 {
    SetupRelease_RAN_VisibleParameters_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RAN_VisibleParameters_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MeasConfigAppLayer_r17
 * @note ASN.1：MeasConfigAppLayer-r17；源文件第 21299 行。
 * @note MeasConfigAppLayer-r17 ::= SEQUENCE { measConfigAppLayerId-r17, measConfigAppLayerContainer-r17, service...
 */
struct MeasConfigAppLayer_r17 {
    MeasConfigAppLayerId_r17 measConfigAppLayerId_r17; /**< ASN.1 measConfigAppLayerId-r17；INTEGER (0..15)，位宽 4 bit。 */
    bool has_measConfigAppLayerContainer_r17; /**< measConfigAppLayerContainer-r17 是否存在。 */
    OctetString measConfigAppLayerContainer_r17; /**< ASN.1 measConfigAppLayerContainer-r17；SIZE (1..8000)；OPTIONAL。 */
    bool has_serviceType_r17; /**< serviceType-r17 是否存在。 */
    MeasConfigAppLayer_r17_ServiceType_r17 serviceType_r17; /**< ASN.1 serviceType-r17；枚举；OPTIONAL。 */
    bool has_pauseReporting_r17; /**< pauseReporting-r17 是否存在。 */
    bool pauseReporting_r17; /**< ASN.1 pauseReporting-r17；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_transmissionOfSessionStartStop_r17; /**< transmissionOfSessionStartStop-r17 是否存在。 */
    bool transmissionOfSessionStartStop_r17; /**< ASN.1 transmissionOfSessionStartStop-r17；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_ran_VisibleParameters_r17; /**< ran-VisibleParameters-r17 是否存在。 */
    SetupRelease_RAN_VisibleParameters_r17 ran_VisibleParameters_r17; /**< ASN.1 ran-VisibleParameters-r17；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasConfigAppLayer_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief InterFreqTargetInfo_r16
 * @note ASN.1：InterFreqTargetInfo-r16；源文件第 21348 行。
 * @note InterFreqTargetInfo-r16 ::= SEQUENCE { dl-CarrierFreq-r16, cellList-r16 }
 */
struct InterFreqTargetInfo_r16 {
    ARFCN_ValueNR dl_CarrierFreq_r16; /**< ASN.1 dl-CarrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_cellList_r16; /**< cellList-r16 是否存在。 */
    PhysCellId* cellList_r16_items; /**< ASN.1 cellList-r16；SEQUENCE OF PhysCellId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cellList_r16_count; /**< cellList-r16 元素个数。 */
};


/**
 * @brief TrackingAreaIdentity_r16
 * @note ASN.1：TrackingAreaIdentity-r16；源文件第 21359 行。
 * @note TrackingAreaIdentity-r16 ::= SEQUENCE { plmn-Identity-r16, trackingAreaCode-r16 }
 */
struct TrackingAreaIdentity_r16 {
    PLMN_Identity plmn_Identity_r16; /**< ASN.1 plmn-Identity-r16；结构体。 */
    TrackingAreaCode trackingAreaCode_r16; /**< ASN.1 trackingAreaCode-r16；SIZE (24)，定长。 */
};


/**
 * @brief CAG_Config_r18
 * @note ASN.1：CAG-Config-r18；源文件第 21365 行。
 * @note CAG-Config-r18 ::= SEQUENCE { plmn-Identity-r18, cag-IdentityList-r18 }
 */
struct CAG_Config_r18 {
    PLMN_Identity plmn_Identity_r18; /**< ASN.1 plmn-Identity-r18；结构体。 */
    BitString* cag_IdentityList_r18_items; /**< ASN.1 cag-IdentityList-r18；SEQUENCE OF BitString，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t cag_IdentityList_r18_count; /**< cag-IdentityList-r18 元素个数。 */
};


/**
 * @brief SNPN_ConfigCellId_r18
 * @note ASN.1：SNPN-ConfigCellId-r18；源文件第 21378 行。
 * @note SNPN-ConfigCellId-r18 ::= SEQUENCE { cgi-Identity-r18, nid-IdentityList-r18 }
 */
struct SNPN_ConfigCellId_r18 {
    CGI_Info_Logging_r16 cgi_Identity_r18; /**< ASN.1 cgi-Identity-r18；结构体。 */
    NID_r16* nid_IdentityList_r18_items; /**< ASN.1 nid-IdentityList-r18；SEQUENCE OF NID_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nid_IdentityList_r18_count; /**< nid-IdentityList-r18 元素个数。 */
};


/**
 * @brief SNPN_ConfigTAI_r18
 * @note ASN.1：SNPN-ConfigTAI-r18；源文件第 21385 行。
 * @note SNPN-ConfigTAI-r18 ::= SEQUENCE { tai-Identity-r18, nid-IdentityList-r18 }
 */
struct SNPN_ConfigTAI_r18 {
    TrackingAreaIdentity_r16 tai_Identity_r18; /**< ASN.1 tai-Identity-r18；结构体。 */
    NID_r16* nid_IdentityList_r18_items; /**< ASN.1 nid-IdentityList-r18；SEQUENCE OF NID_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nid_IdentityList_r18_count; /**< nid-IdentityList-r18 元素个数。 */
};


/**
 * @brief SNPN_ConfigID_r18
 * @note ASN.1：SNPN-ConfigID-r18；源文件第 21392 行。
 * @note SNPN-ConfigID-r18 ::= SEQUENCE { plmn-Identity-r18, nid-IdentityList-r18 }
 */
struct SNPN_ConfigID_r18 {
    PLMN_Identity plmn_Identity_r18; /**< ASN.1 plmn-Identity-r18；结构体。 */
    NID_r16* nid_IdentityList_r18_items; /**< ASN.1 nid-IdentityList-r18；SEQUENCE OF NID_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t nid_IdentityList_r18_count; /**< nid-IdentityList-r18 元素个数。 */
};


/**
 * @brief EUTRA_MBSFN_SubframeConfig_SubframeAllocation1
 * @note ASN.1：subframeAllocation1；源文件第 21422 行。
 * @note CHOICE { oneFrame, fourFrames }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag {
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_oneFrame = 0, /**< ASN.1 oneFrame */
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_fourFrames = 1, /**< ASN.1 fourFrames */
} EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag;

struct EUTRA_MBSFN_SubframeConfig_SubframeAllocation1 {
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString oneFrame; /**< ASN.1 oneFrame */
        BitString fourFrames; /**< ASN.1 fourFrames */
    } u;
};


/**
 * @brief EUTRA_MBSFN_SubframeConfig_SubframeAllocation2
 * @note ASN.1：subframeAllocation2；源文件第 21426 行。
 * @note CHOICE { oneFrame, fourFrames }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag {
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_oneFrame = 0, /**< ASN.1 oneFrame */
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_fourFrames = 1, /**< ASN.1 fourFrames */
} EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag;

struct EUTRA_MBSFN_SubframeConfig_SubframeAllocation2 {
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString oneFrame; /**< ASN.1 oneFrame */
        BitString fourFrames; /**< ASN.1 fourFrames */
    } u;
};


/**
 * @brief EUTRA_MBSFN_SubframeConfig
 * @note ASN.1：EUTRA-MBSFN-SubframeConfig；源文件第 21419 行。
 * @note EUTRA-MBSFN-SubframeConfig ::= SEQUENCE { radioframeAllocationPeriod, radioframeAllocationOffset, subframeAl...
 */
struct EUTRA_MBSFN_SubframeConfig {
    EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod radioframeAllocationPeriod; /**< ASN.1 radioframeAllocationPeriod；枚举。 */
    int64_t radioframeAllocationOffset; /**< ASN.1 radioframeAllocationOffset；INTEGER (0..7)，位宽 3 bit。 */
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation1 subframeAllocation1; /**< ASN.1 subframeAllocation1；结构体。 */
    bool has_subframeAllocation2; /**< subframeAllocation2 是否存在。 */
    EUTRA_MBSFN_SubframeConfig_SubframeAllocation2 subframeAllocation2; /**< ASN.1 subframeAllocation2；结构体；OPTIONAL。 */
};


/**
 * @brief EUTRA_NS_PmaxList
 * @note ASN.1：EUTRA-NS-PmaxList；源文件第 21456 行。
 * @note EUTRA-NS-PmaxList ::= SEQUENCE OF (size 1..8) OF EUTRA-NS-PmaxValue
 */
struct EUTRA_NS_PmaxList {
    EUTRA_NS_PmaxValue* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief EUTRA_MultiBandInfo
 * @note ASN.1：EUTRA-MultiBandInfo；源文件第 21438 行。
 * @note EUTRA-MultiBandInfo ::= SEQUENCE { eutra-FreqBandIndicator, eutra-NS-PmaxList }
 */
struct EUTRA_MultiBandInfo {
    FreqBandIndicatorEUTRA eutra_FreqBandIndicator; /**< ASN.1 eutra-FreqBandIndicator；INTEGER (1..256)，位宽 8 bit。 */
    bool has_eutra_NS_PmaxList; /**< eutra-NS-PmaxList 是否存在。 */
    EUTRA_NS_PmaxList eutra_NS_PmaxList; /**< ASN.1 eutra-NS-PmaxList；SEQUENCE OF EUTRA_NS_PmaxValue，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief EUTRA_MultiBandInfoAerial_r18
 * @note ASN.1：EUTRA-MultiBandInfoAerial-r18；源文件第 21448 行。
 * @note EUTRA-MultiBandInfoAerial-r18 ::= SEQUENCE { eutra-FreqBandIndicator-r18, eutra-NS-PmaxListAerial-r18 }
 */
struct EUTRA_MultiBandInfoAerial_r18 {
    FreqBandIndicatorEUTRA eutra_FreqBandIndicator_r18; /**< ASN.1 eutra-FreqBandIndicator-r18；INTEGER (1..256)，位宽 8 bit。 */
    bool has_eutra_NS_PmaxListAerial_r18; /**< eutra-NS-PmaxListAerial-r18 是否存在。 */
    EUTRA_NS_PmaxList eutra_NS_PmaxListAerial_r18; /**< ASN.1 eutra-NS-PmaxListAerial-r18；SEQUENCE OF EUTRA_NS_PmaxValue，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief EUTRA_NS_PmaxValue
 * @note ASN.1：EUTRA-NS-PmaxValue；源文件第 21458 行。
 * @note EUTRA-NS-PmaxValue ::= SEQUENCE { additionalPmax, additionalSpectrumEmission }
 */
struct EUTRA_NS_PmaxValue {
    bool has_additionalPmax; /**< additionalPmax 是否存在。 */
    int64_t additionalPmax; /**< ASN.1 additionalPmax；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_additionalSpectrumEmission; /**< additionalSpectrumEmission 是否存在。 */
    int64_t additionalSpectrumEmission; /**< ASN.1 additionalSpectrumEmission；INTEGER (1..288)，位宽 9 bit；OPTIONAL。 */
};


/**
 * @brief LogMeasResultBT_r16
 * @note ASN.1：LogMeasResultBT-r16；源文件第 21530 行。
 * @note LogMeasResultBT-r16 ::= SEQUENCE { bt-Addr-r16, rssi-BT-r16 }
 */
struct LogMeasResultBT_r16 {
    BitString bt_Addr_r16; /**< ASN.1 bt-Addr-r16；SIZE (48)，定长。 */
    bool has_rssi_BT_r16; /**< rssi-BT-r16 是否存在。 */
    int64_t rssi_BT_r16; /**< ASN.1 rssi-BT-r16；INTEGER (-128..127)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief WLAN_Identifiers_r16
 * @note ASN.1：WLAN-Identifiers-r16；源文件第 21548 行。
 * @note WLAN-Identifiers-r16 ::= SEQUENCE { ssid-r16, bssid-r16, hessid-r16 }
 */
struct WLAN_Identifiers_r16 {
    bool has_ssid_r16; /**< ssid-r16 是否存在。 */
    OctetString ssid_r16; /**< ASN.1 ssid-r16；SIZE (1..32)；OPTIONAL。 */
    bool has_bssid_r16; /**< bssid-r16 是否存在。 */
    OctetString bssid_r16; /**< ASN.1 bssid-r16；SIZE (6)，定长；OPTIONAL。 */
    bool has_hessid_r16; /**< hessid-r16 是否存在。 */
    OctetString hessid_r16; /**< ASN.1 hessid-r16；SIZE (6)，定长；OPTIONAL。 */
};


/**
 * @brief WLAN_RTT_r16
 * @note ASN.1：WLAN-RTT-r16；源文件第 21557 行。
 * @note WLAN-RTT-r16 ::= SEQUENCE { rttValue-r16, rttUnits-r16, rttAccuracy-r16 }
 */
struct WLAN_RTT_r16 {
    int64_t rttValue_r16; /**< ASN.1 rttValue-r16；INTEGER (0..16777215)，位宽 24 bit。 */
    WLAN_RTT_r16_RttUnits_r16 rttUnits_r16; /**< ASN.1 rttUnits-r16；枚举。 */
    bool has_rttAccuracy_r16; /**< rttAccuracy-r16 是否存在。 */
    int64_t rttAccuracy_r16; /**< ASN.1 rttAccuracy-r16；INTEGER (0..255)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief LogMeasResultWLAN_r16
 * @note ASN.1：LogMeasResultWLAN-r16；源文件第 21541 行。
 * @note LogMeasResultWLAN-r16 ::= SEQUENCE { wlan-Identifiers-r16, rssiWLAN-r16, rtt-WLAN-r16 }
 */
struct LogMeasResultWLAN_r16 {
    WLAN_Identifiers_r16 wlan_Identifiers_r16; /**< ASN.1 wlan-Identifiers-r16；结构体。 */
    bool has_rssiWLAN_r16; /**< rssiWLAN-r16 是否存在。 */
    WLAN_RSSI_Range_r16 rssiWLAN_r16; /**< ASN.1 rssiWLAN-r16；INTEGER (0..141)，位宽 8 bit；OPTIONAL。 */
    bool has_rtt_WLAN_r16; /**< rtt-WLAN-r16 是否存在。 */
    WLAN_RTT_r16 rtt_WLAN_r16; /**< ASN.1 rtt-WLAN-r16；结构体；OPTIONAL。 */
};


/**
 * @brief NeighbourCellInfo_r17
 * @note ASN.1：NeighbourCellInfo-r17；源文件第 21755 行。
 * @note NeighbourCellInfo-r17 ::= SEQUENCE { epochTime-r17, ephemerisInfo-r17 }
 */
struct NeighbourCellInfo_r17 {
    EpochTime_r17 epochTime_r17; /**< ASN.1 epochTime-r17；结构体。 */
    EphemerisInfo_r17 ephemerisInfo_r17; /**< ASN.1 ephemerisInfo-r17；结构体。 */
};


/**
 * @brief CandidateServingFreqRangeNR_r18
 * @note ASN.1：CandidateServingFreqRangeNR-r18；源文件第 21767 行。
 * @note CandidateServingFreqRangeNR-r18 ::= SEQUENCE { candidateCenterFreq-r18, candidateBandwidth-r18 }
 */
struct CandidateServingFreqRangeNR_r18 {
    ARFCN_ValueNR candidateCenterFreq_r18; /**< ASN.1 candidateCenterFreq-r18；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_candidateBandwidth_r18; /**< candidateBandwidth-r18 是否存在。 */
    CandidateServingFreqRangeNR_r18_CandidateBandwidth_r18 candidateBandwidth_r18; /**< ASN.1 candidateBandwidth-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PDU_SessionToReportUL_TrafficInfo_r18
 * @note ASN.1：PDU-SessionToReportUL-TrafficInfo-r18；源文件第 21781 行。
 * @note PDU-SessionToReportUL-TrafficInfo-r18 ::= SEQUENCE { pdu-SessionID, qfi-ToReportUL-TrafficInfoList-r18 }
 */
struct PDU_SessionToReportUL_TrafficInfo_r18 {
    PDU_SessionID pdu_SessionID; /**< ASN.1 pdu-SessionID；INTEGER (0..255)，位宽 8 bit。 */
    QFI* qfi_ToReportUL_TrafficInfoList_r18_items; /**< ASN.1 qfi-ToReportUL-TrafficInfoList-r18；SEQUENCE OF QFI，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t qfi_ToReportUL_TrafficInfoList_r18_count; /**< qfi-ToReportUL-TrafficInfoList-r18 元素个数。 */
};


/**
 * @brief VisitedPSCellInfoList_r17
 * @note ASN.1：VisitedPSCellInfoList-r17；源文件第 21867 行。
 * @note VisitedPSCellInfoList-r17 ::= SEQUENCE OF (size 1..16) OF VisitedPSCellInfo-r17
 */
struct VisitedPSCellInfoList_r17 {
    VisitedPSCellInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief VisitedCellInfo_r16_ExtGroup1
 * @note ASN.1：VisitedCellInfo_r16_ExtGroup1；源文件第 21862 行。
 */
struct VisitedCellInfo_r16_ExtGroup1 {
    bool has_visitedPSCellInfoListReport_r17; /**< visitedPSCellInfoListReport-r17 是否存在。 */
    VisitedPSCellInfoList_r17 visitedPSCellInfoListReport_r17; /**< ASN.1 visitedPSCellInfoListReport-r17；SEQUENCE OF VisitedPSCellInfo_r17，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16
 * @note ASN.1：visitedCellId-r16/nr-CellId-r16；源文件第 21851 行。
 * @note CHOICE { cgi-Info, pci-arfcn-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag {
    VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_cgi_Info = 0, /**< ASN.1 cgi-Info */
    VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag_pci_arfcn_r16 = 1, /**< ASN.1 pci-arfcn-r16 */
} VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag;

struct VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16 {
    VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cgi_Info; /**< ASN.1 cgi-Info */
        PCI_ARFCN_NR_r16 pci_arfcn_r16; /**< ASN.1 pci-arfcn-r16 */
    } u;
};


/**
 * @brief VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16
 * @note ASN.1：visitedCellId-r16/eutra-CellId-r16；源文件第 21855 行。
 * @note CHOICE { cellGlobalId-r16, pci-arfcn-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag {
    VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_cellGlobalId_r16 = 0, /**< ASN.1 cellGlobalId-r16 */
    VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag_pci_arfcn_r16 = 1, /**< ASN.1 pci-arfcn-r16 */
} VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag;

struct VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16 {
    VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_InfoEUTRA cellGlobalId_r16; /**< ASN.1 cellGlobalId-r16 */
        PCI_ARFCN_EUTRA_r16 pci_arfcn_r16; /**< ASN.1 pci-arfcn-r16 */
    } u;
};


/**
 * @brief VisitedCellInfo_r16_VisitedCellId_r16
 * @note ASN.1：visitedCellId-r16；源文件第 21850 行。
 * @note CHOICE { nr-CellId-r16, eutra-CellId-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum VisitedCellInfo_r16_VisitedCellId_r16_Tag {
    VisitedCellInfo_r16_VisitedCellId_r16_Tag_nr_CellId_r16 = 0, /**< ASN.1 nr-CellId-r16 */
    VisitedCellInfo_r16_VisitedCellId_r16_Tag_eutra_CellId_r16 = 1, /**< ASN.1 eutra-CellId-r16 */
} VisitedCellInfo_r16_VisitedCellId_r16_Tag;

struct VisitedCellInfo_r16_VisitedCellId_r16 {
    VisitedCellInfo_r16_VisitedCellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        VisitedCellInfo_r16_VisitedCellId_r16_Nr_CellId_r16 nr_CellId_r16; /**< ASN.1 nr-CellId-r16 */
        VisitedCellInfo_r16_VisitedCellId_r16_Eutra_CellId_r16 eutra_CellId_r16; /**< ASN.1 eutra-CellId-r16 */
    } u;
};


/**
 * @brief VisitedCellInfo_r16
 * @note ASN.1：VisitedCellInfo-r16；源文件第 21849 行。
 * @note VisitedCellInfo-r16 ::= SEQUENCE { visitedCellId-r16, timeSpent-r16, visitedPSCellInfoListReport-r17 }
 */
struct VisitedCellInfo_r16 {
    bool has_visitedCellId_r16; /**< visitedCellId-r16 是否存在。 */
    VisitedCellInfo_r16_VisitedCellId_r16 visitedCellId_r16; /**< ASN.1 visitedCellId-r16；结构体；OPTIONAL。 */
    int64_t timeSpent_r16; /**< ASN.1 timeSpent-r16；INTEGER (0..4095)，位宽 12 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    VisitedCellInfo_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17
 * @note ASN.1：visitedCellId-r17/nr-CellId-r17；源文件第 21871 行。
 * @note CHOICE { cgi-Info-r17, pci-arfcn-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag {
    VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_cgi_Info_r17 = 0, /**< ASN.1 cgi-Info-r17 */
    VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag_pci_arfcn_r17 = 1, /**< ASN.1 pci-arfcn-r17 */
} VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag;

struct VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17 {
    VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cgi_Info_r17; /**< ASN.1 cgi-Info-r17 */
        PCI_ARFCN_NR_r16 pci_arfcn_r17; /**< ASN.1 pci-arfcn-r17 */
    } u;
};


/**
 * @brief VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17
 * @note ASN.1：visitedCellId-r17/eutra-CellId-r17；源文件第 21875 行。
 * @note CHOICE { cellGlobalId-r17, pci-arfcn-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag {
    VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_cellGlobalId_r17 = 0, /**< ASN.1 cellGlobalId-r17 */
    VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag_pci_arfcn_r17 = 1, /**< ASN.1 pci-arfcn-r17 */
} VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag;

struct VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17 {
    VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_InfoEUTRALogging cellGlobalId_r17; /**< ASN.1 cellGlobalId-r17 */
        PCI_ARFCN_EUTRA_r16 pci_arfcn_r17; /**< ASN.1 pci-arfcn-r17 */
    } u;
};


/**
 * @brief VisitedPSCellInfo_r17_VisitedCellId_r17
 * @note ASN.1：visitedCellId-r17；源文件第 21870 行。
 * @note CHOICE { nr-CellId-r17, eutra-CellId-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum VisitedPSCellInfo_r17_VisitedCellId_r17_Tag {
    VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_nr_CellId_r17 = 0, /**< ASN.1 nr-CellId-r17 */
    VisitedPSCellInfo_r17_VisitedCellId_r17_Tag_eutra_CellId_r17 = 1, /**< ASN.1 eutra-CellId-r17 */
} VisitedPSCellInfo_r17_VisitedCellId_r17_Tag;

struct VisitedPSCellInfo_r17_VisitedCellId_r17 {
    VisitedPSCellInfo_r17_VisitedCellId_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        VisitedPSCellInfo_r17_VisitedCellId_r17_Nr_CellId_r17 nr_CellId_r17; /**< ASN.1 nr-CellId-r17 */
        VisitedPSCellInfo_r17_VisitedCellId_r17_Eutra_CellId_r17 eutra_CellId_r17; /**< ASN.1 eutra-CellId-r17 */
    } u;
};


/**
 * @brief VisitedPSCellInfo_r17
 * @note ASN.1：VisitedPSCellInfo-r17；源文件第 21869 行。
 * @note VisitedPSCellInfo-r17 ::= SEQUENCE { visitedCellId-r17, timeSpent-r17 }
 */
struct VisitedPSCellInfo_r17 {
    bool has_visitedCellId_r17; /**< visitedCellId-r17 是否存在。 */
    VisitedPSCellInfo_r17_VisitedCellId_r17 visitedCellId_r17; /**< ASN.1 visitedCellId-r17；结构体；OPTIONAL。 */
    int64_t timeSpent_r17; /**< ASN.1 timeSpent-r17；INTEGER (0..4095)，位宽 12 bit。 */
};


/**
 * @brief SL_TxPoolDedicated_r16
 * @note ASN.1：SL-TxPoolDedicated-r16；源文件第 21976 行。
 * @note SL-TxPoolDedicated-r16 ::= SEQUENCE { sl-PoolToReleaseList-r16, sl-PoolToAddModList-r16 }
 */
struct SL_TxPoolDedicated_r16 {
    bool has_sl_PoolToReleaseList_r16; /**< sl-PoolToReleaseList-r16 是否存在。 */
    SL_ResourcePoolID_r16* sl_PoolToReleaseList_r16_items; /**< ASN.1 sl-PoolToReleaseList-r16；SEQUENCE OF SL_ResourcePoolID_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PoolToReleaseList_r16_count; /**< sl-PoolToReleaseList-r16 元素个数。 */
    bool has_sl_PoolToAddModList_r16; /**< sl-PoolToAddModList-r16 是否存在。 */
    SL_ResourcePoolConfig_r16* sl_PoolToAddModList_r16_items; /**< ASN.1 sl-PoolToAddModList-r16；SEQUENCE OF SL_ResourcePoolConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PoolToAddModList_r16_count; /**< sl-PoolToAddModList-r16 元素个数。 */
};


/**
 * @brief SL_ResourcePool_r16_ExtGroup1
 * @note ASN.1：SL_ResourcePool_r16_ExtGroup1；源文件第 23022 行。
 */
struct SL_ResourcePool_r16_ExtGroup1 {
    bool has_sl_TimeResource_r16; /**< sl-TimeResource-r16 是否存在。 */
    BitString sl_TimeResource_r16; /**< ASN.1 sl-TimeResource-r16；SIZE (10..160)；OPTIONAL。 */
};


/**
 * @brief SL_PBPS_CPS_Config_r17
 * @note ASN.1：SL-PBPS-CPS-Config-r17；源文件第 22664 行。
 * @note SL-PBPS-CPS-Config-r17 ::= SEQUENCE { sl-AllowedResourceSelectionConfig-r17, sl-MinNumCandidateSlotsPeri...
 */
struct SL_PBPS_CPS_Config_r17 {
    bool has_sl_AllowedResourceSelectionConfig_r17; /**< sl-AllowedResourceSelectionConfig-r17 是否存在。 */
    SL_PBPS_CPS_Config_r17_Sl_AllowedResourceSelectionConfig_r17 sl_AllowedResourceSelectionConfig_r17; /**< ASN.1 sl-AllowedResourceSelectionConfig-r17；枚举；OPTIONAL。 */
    bool has_sl_MinNumCandidateSlotsPeriodic_r17; /**< sl-MinNumCandidateSlotsPeriodic-r17 是否存在。 */
    int64_t sl_MinNumCandidateSlotsPeriodic_r17; /**< ASN.1 sl-MinNumCandidateSlotsPeriodic-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_PBPS_OccasionReservePeriodList_r17; /**< sl-PBPS-OccasionReservePeriodList-r17 是否存在。 */
    int64_t* sl_PBPS_OccasionReservePeriodList_r17_items; /**< ASN.1 sl-PBPS-OccasionReservePeriodList-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PBPS_OccasionReservePeriodList_r17_count; /**< sl-PBPS-OccasionReservePeriodList-r17 元素个数。 */
    bool has_sl_Additional_PBPS_Occasion_r17; /**< sl-Additional-PBPS-Occasion-r17 是否存在。 */
    SL_PBPS_CPS_Config_r17_Sl_Additional_PBPS_Occasion_r17 sl_Additional_PBPS_Occasion_r17; /**< ASN.1 sl-Additional-PBPS-Occasion-r17；枚举；OPTIONAL。 */
    bool has_sl_CPS_WindowPeriodic_r17; /**< sl-CPS-WindowPeriodic-r17 是否存在。 */
    int64_t sl_CPS_WindowPeriodic_r17; /**< ASN.1 sl-CPS-WindowPeriodic-r17；INTEGER (5..30)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_MinNumCandidateSlotsAperiodic_r17; /**< sl-MinNumCandidateSlotsAperiodic-r17 是否存在。 */
    int64_t sl_MinNumCandidateSlotsAperiodic_r17; /**< ASN.1 sl-MinNumCandidateSlotsAperiodic-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_MinNumRssiMeasurementSlots_r17; /**< sl-MinNumRssiMeasurementSlots-r17 是否存在。 */
    int64_t sl_MinNumRssiMeasurementSlots_r17; /**< ASN.1 sl-MinNumRssiMeasurementSlots-r17；INTEGER (1..800)，位宽 10 bit；OPTIONAL。 */
    bool has_sl_DefaultCBR_RandomSelection_r17; /**< sl-DefaultCBR-RandomSelection-r17 是否存在。 */
    int64_t sl_DefaultCBR_RandomSelection_r17; /**< ASN.1 sl-DefaultCBR-RandomSelection-r17；INTEGER (0..100)，位宽 7 bit；OPTIONAL。 */
    bool has_sl_DefaultCBR_PartialSensing_r17; /**< sl-DefaultCBR-PartialSensing-r17 是否存在。 */
    int64_t sl_DefaultCBR_PartialSensing_r17; /**< ASN.1 sl-DefaultCBR-PartialSensing-r17；INTEGER (0..100)，位宽 7 bit；OPTIONAL。 */
    bool has_sl_CPS_WindowAperiodic_r17; /**< sl-CPS-WindowAperiodic-r17 是否存在。 */
    int64_t sl_CPS_WindowAperiodic_r17; /**< ASN.1 sl-CPS-WindowAperiodic-r17；INTEGER (0..30)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_PartialSensingInactiveTime_r17; /**< sl-PartialSensingInactiveTime-r17 是否存在。 */
    SL_PBPS_CPS_Config_r17_Sl_PartialSensingInactiveTime_r17 sl_PartialSensingInactiveTime_r17; /**< ASN.1 sl-PartialSensingInactiveTime-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_PBPS_CPS_Config_r17
 * @note ASN.1：SetupRelease<SL-PBPS-CPS-Config-r17>；源文件第 23026 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PBPS_CPS_Config_r17_Tag {
    SetupRelease_SL_PBPS_CPS_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PBPS_CPS_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PBPS_CPS_Config_r17_Tag;

struct SetupRelease_SL_PBPS_CPS_Config_r17 {
    SetupRelease_SL_PBPS_CPS_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PBPS_CPS_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_InterUE_CoordinationScheme1_r17
 * @note ASN.1：SL-InterUE-CoordinationScheme1-r17；源文件第 22450 行。
 * @note SL-InterUE-CoordinationScheme1-r17 ::= SEQUENCE { sl-IUC-Explicit-r17, sl-IUC-Condition-r17, sl-Condition1-A-2-r17, ...
 */
struct SL_InterUE_CoordinationScheme1_r17 {
    bool has_sl_IUC_Explicit_r17; /**< sl-IUC-Explicit-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Explicit_r17 sl_IUC_Explicit_r17; /**< ASN.1 sl-IUC-Explicit-r17；枚举；OPTIONAL。 */
    bool has_sl_IUC_Condition_r17; /**< sl-IUC-Condition-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17_Sl_IUC_Condition_r17 sl_IUC_Condition_r17; /**< ASN.1 sl-IUC-Condition-r17；枚举；OPTIONAL。 */
    bool has_sl_Condition1_A_2_r17; /**< sl-Condition1-A-2-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17_Sl_Condition1_A_2_r17 sl_Condition1_A_2_r17; /**< ASN.1 sl-Condition1-A-2-r17；枚举；OPTIONAL。 */
    bool has_sl_ThresholdRSRP_Condition1_B_1_Option1List_r17; /**< sl-ThresholdRSRP-Condition1-B-1-Option1List-r17 是否存在。 */
    SL_ThresholdRSRP_Condition1_B_1_r17* sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_items; /**< ASN.1 sl-ThresholdRSRP-Condition1-B-1-Option1List-r17；SEQUENCE OF SL_ThresholdRSRP_Condition1_B_1_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ThresholdRSRP_Condition1_B_1_Option1List_r17_count; /**< sl-ThresholdRSRP-Condition1-B-1-Option1List-r17 元素个数。 */
    bool has_sl_ThresholdRSRP_Condition1_B_1_Option2List_r17; /**< sl-ThresholdRSRP-Condition1-B-1-Option2List-r17 是否存在。 */
    SL_ThresholdRSRP_Condition1_B_1_r17* sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_items; /**< ASN.1 sl-ThresholdRSRP-Condition1-B-1-Option2List-r17；SEQUENCE OF SL_ThresholdRSRP_Condition1_B_1_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ThresholdRSRP_Condition1_B_1_Option2List_r17_count; /**< sl-ThresholdRSRP-Condition1-B-1-Option2List-r17 元素个数。 */
    bool has_sl_ContainerCoordInfo_r17; /**< sl-ContainerCoordInfo-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17_Sl_ContainerCoordInfo_r17 sl_ContainerCoordInfo_r17; /**< ASN.1 sl-ContainerCoordInfo-r17；枚举；OPTIONAL。 */
    bool has_sl_ContainerRequest_r17; /**< sl-ContainerRequest-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17_Sl_ContainerRequest_r17 sl_ContainerRequest_r17; /**< ASN.1 sl-ContainerRequest-r17；枚举；OPTIONAL。 */
    bool has_sl_TriggerConditionCoordInfo_r17; /**< sl-TriggerConditionCoordInfo-r17 是否存在。 */
    int64_t sl_TriggerConditionCoordInfo_r17; /**< ASN.1 sl-TriggerConditionCoordInfo-r17；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_sl_TriggerConditionRequest_r17; /**< sl-TriggerConditionRequest-r17 是否存在。 */
    int64_t sl_TriggerConditionRequest_r17; /**< ASN.1 sl-TriggerConditionRequest-r17；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_sl_PriorityCoordInfoExplicit_r17; /**< sl-PriorityCoordInfoExplicit-r17 是否存在。 */
    int64_t sl_PriorityCoordInfoExplicit_r17; /**< ASN.1 sl-PriorityCoordInfoExplicit-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PriorityCoordInfoCondition_r17; /**< sl-PriorityCoordInfoCondition-r17 是否存在。 */
    int64_t sl_PriorityCoordInfoCondition_r17; /**< ASN.1 sl-PriorityCoordInfoCondition-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PriorityRequest_r17; /**< sl-PriorityRequest-r17 是否存在。 */
    int64_t sl_PriorityRequest_r17; /**< ASN.1 sl-PriorityRequest-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PriorityPreferredResourceSet_r17; /**< sl-PriorityPreferredResourceSet-r17 是否存在。 */
    int64_t sl_PriorityPreferredResourceSet_r17; /**< ASN.1 sl-PriorityPreferredResourceSet-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_MaxSlotOffsetTRIV_r17; /**< sl-MaxSlotOffsetTRIV-r17 是否存在。 */
    int64_t sl_MaxSlotOffsetTRIV_r17; /**< ASN.1 sl-MaxSlotOffsetTRIV-r17；INTEGER (1..8000)，位宽 13 bit；OPTIONAL。 */
    bool has_sl_NumSubCH_PreferredResourceSet_r17; /**< sl-NumSubCH-PreferredResourceSet-r17 是否存在。 */
    int64_t sl_NumSubCH_PreferredResourceSet_r17; /**< ASN.1 sl-NumSubCH-PreferredResourceSet-r17；INTEGER (1..27)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_ReservedPeriodPreferredResourceSet_r17; /**< sl-ReservedPeriodPreferredResourceSet-r17 是否存在。 */
    int64_t sl_ReservedPeriodPreferredResourceSet_r17; /**< ASN.1 sl-ReservedPeriodPreferredResourceSet-r17；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_DetermineResourceType_r17; /**< sl-DetermineResourceType-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17_Sl_DetermineResourceType_r17 sl_DetermineResourceType_r17; /**< ASN.1 sl-DetermineResourceType-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SL_InterUE_CoordinationScheme2_r17_ExtGroup1
 * @note ASN.1：SL_InterUE_CoordinationScheme2_r17_ExtGroup1；源文件第 22480 行。
 */
struct SL_InterUE_CoordinationScheme2_r17_ExtGroup1 {
    bool has_sl_DeltaRSRP_Thresh_v1720; /**< sl-DeltaRSRP-Thresh-v1720 是否存在。 */
    int64_t sl_DeltaRSRP_Thresh_v1720; /**< ASN.1 sl-DeltaRSRP-Thresh-v1720；INTEGER (-30..30)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief SL_InterUE_CoordinationScheme2_r17
 * @note ASN.1：SL-InterUE-CoordinationScheme2-r17；源文件第 22471 行。
 * @note SL-InterUE-CoordinationScheme2-r17 ::= SEQUENCE { sl-IUC-Scheme2-r17, sl-RB-SetPSFCH-r17, sl-TypeUE-A-r17, sl-PSFCH-...
 */
struct SL_InterUE_CoordinationScheme2_r17 {
    bool has_sl_IUC_Scheme2_r17; /**< sl-IUC-Scheme2-r17 是否存在。 */
    SL_InterUE_CoordinationScheme2_r17_Sl_IUC_Scheme2_r17 sl_IUC_Scheme2_r17; /**< ASN.1 sl-IUC-Scheme2-r17；枚举；OPTIONAL。 */
    bool has_sl_RB_SetPSFCH_r17; /**< sl-RB-SetPSFCH-r17 是否存在。 */
    BitString sl_RB_SetPSFCH_r17; /**< ASN.1 sl-RB-SetPSFCH-r17；SIZE (10..275)；OPTIONAL。 */
    bool has_sl_TypeUE_A_r17; /**< sl-TypeUE-A-r17 是否存在。 */
    SL_InterUE_CoordinationScheme2_r17_Sl_TypeUE_A_r17 sl_TypeUE_A_r17; /**< ASN.1 sl-TypeUE-A-r17；枚举；OPTIONAL。 */
    bool has_sl_PSFCH_Occasion_r17; /**< sl-PSFCH-Occasion-r17 是否存在。 */
    int64_t sl_PSFCH_Occasion_r17; /**< ASN.1 sl-PSFCH-Occasion-r17；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_sl_SlotLevelResourceExclusion_r17; /**< sl-SlotLevelResourceExclusion-r17 是否存在。 */
    SL_InterUE_CoordinationScheme2_r17_Sl_SlotLevelResourceExclusion_r17 sl_SlotLevelResourceExclusion_r17; /**< ASN.1 sl-SlotLevelResourceExclusion-r17；枚举；OPTIONAL。 */
    bool has_sl_OptionForCondition2_A_1_r17; /**< sl-OptionForCondition2-A-1-r17 是否存在。 */
    int64_t sl_OptionForCondition2_A_1_r17; /**< ASN.1 sl-OptionForCondition2-A-1-r17；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    bool has_sl_IndicationUE_B_r17; /**< sl-IndicationUE-B-r17 是否存在。 */
    SL_InterUE_CoordinationScheme2_r17_Sl_IndicationUE_B_r17 sl_IndicationUE_B_r17; /**< ASN.1 sl-IndicationUE-B-r17；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_InterUE_CoordinationScheme2_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_InterUE_CoordinationConfig_r17
 * @note ASN.1：SL-InterUE-CoordinationConfig-r17；源文件第 22444 行。
 * @note SL-InterUE-CoordinationConfig-r17 ::= SEQUENCE { sl-InterUE-CoordinationScheme1-r17, sl-InterUE-CoordinationScheme2...
 */
struct SL_InterUE_CoordinationConfig_r17 {
    bool has_sl_InterUE_CoordinationScheme1_r17; /**< sl-InterUE-CoordinationScheme1-r17 是否存在。 */
    SL_InterUE_CoordinationScheme1_r17 sl_InterUE_CoordinationScheme1_r17; /**< ASN.1 sl-InterUE-CoordinationScheme1-r17；结构体；OPTIONAL。 */
    bool has_sl_InterUE_CoordinationScheme2_r17; /**< sl-InterUE-CoordinationScheme2-r17 是否存在。 */
    SL_InterUE_CoordinationScheme2_r17 sl_InterUE_CoordinationScheme2_r17; /**< ASN.1 sl-InterUE-CoordinationScheme2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_InterUE_CoordinationConfig_r17
 * @note ASN.1：SetupRelease<SL-InterUE-CoordinationConfig-r17>；源文件第 23027 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag {
    SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag;

struct SetupRelease_SL_InterUE_CoordinationConfig_r17 {
    SetupRelease_SL_InterUE_CoordinationConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_InterUE_CoordinationConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_ResourcePool_r16_ExtGroup2
 * @note ASN.1：SL_ResourcePool_r16_ExtGroup2；源文件第 23025 行。
 */
struct SL_ResourcePool_r16_ExtGroup2 {
    bool has_sl_PBPS_CPS_Config_r17; /**< sl-PBPS-CPS-Config-r17 是否存在。 */
    SetupRelease_SL_PBPS_CPS_Config_r17 sl_PBPS_CPS_Config_r17; /**< ASN.1 sl-PBPS-CPS-Config-r17；结构体；OPTIONAL。 */
    bool has_sl_InterUE_CoordinationConfig_r17; /**< sl-InterUE-CoordinationConfig-r17 是否存在。 */
    SetupRelease_SL_InterUE_CoordinationConfig_r17 sl_InterUE_CoordinationConfig_r17; /**< ASN.1 sl-InterUE-CoordinationConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18
 * @note ASN.1：SL-CPE-StartingPositionsPSCCH-PSSCH-List-r18；源文件第 23058 行。
 * @note SL-CPE-StartingPositionsPSCCH-PSSCH-List-r18 ::= SEQUENCE OF (size 8..8) OF SL-CPE-StartingPositionsPSCCH-PSSCH-r18
 */
struct SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 {
    SL_CPE_StartingPositionsPSCCH_PSSCH_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18
 * @note ASN.1：SetupRelease<SL-CPE-StartingPositionsPSCCH-PSSCH-List-r18>；源文件第 23030 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag {
    SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag;

struct SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 {
    SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_ResourcePool_r16_ExtGroup3
 * @note ASN.1：SL_ResourcePool_r16_ExtGroup3；源文件第 23029 行。
 */
struct SL_ResourcePool_r16_ExtGroup3 {
    bool has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18; /**< sl-CPE-StartingPositionsPSCCH-PSSCH-InitiateCOT-List-r18 是否存在。 */
    SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_List_r18; /**< ASN.1 sl-CPE-StartingPositionsPSCCH-PSSCH-InitiateCOT-List-r18；结构体；OPTIONAL。 */
    bool has_sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18; /**< sl-CPE-StartingPositionsPSCCH-PSSCH-InitiateCOT-Default-r18 是否存在。 */
    int64_t sl_CPE_StartingPositionsPSCCH_PSSCH_InitiateCOT_Default_r18; /**< ASN.1 sl-CPE-StartingPositionsPSCCH-PSSCH-InitiateCOT-Default-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18; /**< sl-CPE-StartingPositionsPSCCH-PSSCH-WithinCOT-List-r18 是否存在。 */
    SetupRelease_SL_CPE_StartingPositionsPSCCH_PSSCH_List_r18 sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_List_r18; /**< ASN.1 sl-CPE-StartingPositionsPSCCH-PSSCH-WithinCOT-List-r18；结构体；OPTIONAL。 */
    bool has_sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18; /**< sl-CPE-StartingPositionsPSCCH-PSSCH-WithinCOT-Default-r18 是否存在。 */
    int64_t sl_CPE_StartingPositionsPSCCH_PSSCH_WithinCOT_Default_r18; /**< ASN.1 sl-CPE-StartingPositionsPSCCH-PSSCH-WithinCOT-Default-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_Type1_LBT_BlockingOption1_r18; /**< sl-Type1-LBT-BlockingOption1-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption1_r18 sl_Type1_LBT_BlockingOption1_r18; /**< ASN.1 sl-Type1-LBT-BlockingOption1-r18；枚举；OPTIONAL。 */
    bool has_sl_Type1_LBT_BlockingOption2_r18; /**< sl-Type1-LBT-BlockingOption2-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_Type1_LBT_BlockingOption2_r18 sl_Type1_LBT_BlockingOption2_r18; /**< ASN.1 sl-Type1-LBT-BlockingOption2-r18；枚举；OPTIONAL。 */
    bool has_sl_NumInterlacePerSubchannel_r18; /**< sl-NumInterlacePerSubchannel-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumInterlacePerSubchannel_r18 sl_NumInterlacePerSubchannel_r18; /**< ASN.1 sl-NumInterlacePerSubchannel-r18；枚举；OPTIONAL。 */
    bool has_sl_NumReferencePRBs_OfInterlace_r18; /**< sl-NumReferencePRBs-OfInterlace-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumReferencePRBs_OfInterlace_r18 sl_NumReferencePRBs_OfInterlace_r18; /**< ASN.1 sl-NumReferencePRBs-OfInterlace-r18；枚举；OPTIONAL。 */
    bool has_sl_TransmissionStructureForPSFCH_r18; /**< sl-TransmissionStructureForPSFCH-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_TransmissionStructureForPSFCH_r18 sl_TransmissionStructureForPSFCH_r18; /**< ASN.1 sl-TransmissionStructureForPSFCH-r18；枚举；OPTIONAL。 */
    bool has_sl_NumDedicatedPRBs_ForPSFCH_r18; /**< sl-NumDedicatedPRBs-ForPSFCH-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumDedicatedPRBs_ForPSFCH_r18 sl_NumDedicatedPRBs_ForPSFCH_r18; /**< ASN.1 sl-NumDedicatedPRBs-ForPSFCH-r18；枚举；OPTIONAL。 */
    bool has_sl_NumPSFCH_Occasions_r18; /**< sl-NumPSFCH-Occasions-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumPSFCH_Occasions_r18 sl_NumPSFCH_Occasions_r18; /**< ASN.1 sl-NumPSFCH-Occasions-r18；枚举；OPTIONAL。 */
    bool has_sl_PSFCH_CommonInterlaceIndex_r18; /**< sl-PSFCH-CommonInterlaceIndex-r18 是否存在。 */
    int64_t sl_PSFCH_CommonInterlaceIndex_r18; /**< ASN.1 sl-PSFCH-CommonInterlaceIndex-r18；INTEGER (0..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CPE_StartingPositionPSFCH_r18; /**< sl-CPE-StartingPositionPSFCH-r18 是否存在。 */
    int64_t sl_CPE_StartingPositionPSFCH_r18; /**< ASN.1 sl-CPE-StartingPositionPSFCH-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_NumRefSymbolLength_r18; /**< sl-NumRefSymbolLength-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_NumRefSymbolLength_r18 sl_NumRefSymbolLength_r18; /**< ASN.1 sl-NumRefSymbolLength-r18；枚举；OPTIONAL。 */
    bool has_sl_PSFCH_RB_SetList_r18; /**< sl-PSFCH-RB-SetList-r18 是否存在。 */
    BitString* sl_PSFCH_RB_SetList_r18_items; /**< ASN.1 sl-PSFCH-RB-SetList-r18；SEQUENCE OF BitString，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PSFCH_RB_SetList_r18_count; /**< sl-PSFCH-RB-SetList-r18 元素个数。 */
    bool has_sl_IUC_RB_SetList_r18; /**< sl-IUC-RB-SetList-r18 是否存在。 */
    BitString* sl_IUC_RB_SetList_r18_items; /**< ASN.1 sl-IUC-RB-SetList-r18；SEQUENCE OF BitString，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_IUC_RB_SetList_r18_count; /**< sl-IUC-RB-SetList-r18 元素个数。 */
    bool has_sl_PSFCH_PowerOffset_r18; /**< sl-PSFCH-PowerOffset-r18 是否存在。 */
    int64_t sl_PSFCH_PowerOffset_r18; /**< ASN.1 sl-PSFCH-PowerOffset-r18；INTEGER (0..10)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_RBSetIndexOfResourcePool_r18; /**< sl-RBSetIndexOfResourcePool-r18 是否存在。 */
    int64_t* sl_RBSetIndexOfResourcePool_r18_items; /**< ASN.1 sl-RBSetIndexOfResourcePool-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RBSetIndexOfResourcePool_r18_count; /**< sl-RBSetIndexOfResourcePool-r18 元素个数。 */
    bool has_sl_A2X_Service_r18; /**< sl-A2X-Service-r18 是否存在。 */
    SL_ResourcePool_r16_ExtGroup3_Sl_A2X_Service_r18 sl_A2X_Service_r18; /**< ASN.1 sl-A2X-Service-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_ResourcesSharedSL_PRS_RP_r18; /**< sl-PRS-ResourcesSharedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourceSharedSL_PRS_RP_r18* sl_PRS_ResourcesSharedSL_PRS_RP_r18_items; /**< ASN.1 sl-PRS-ResourcesSharedSL-PRS-RP-r18；SEQUENCE OF SL_PRS_ResourceSharedSL_PRS_RP_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_ResourcesSharedSL_PRS_RP_r18_count; /**< sl-PRS-ResourcesSharedSL-PRS-RP-r18 元素个数。 */
    bool has_numSym_SL_PRS_2ndStageSCI_r18; /**< numSym-SL-PRS-2ndStageSCI-r18 是否存在。 */
    int64_t numSym_SL_PRS_2ndStageSCI_r18; /**< ASN.1 numSym-SL-PRS-2ndStageSCI-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18; /**< sl-SCI-based-SL-PRS-Tx-Trigger-SCI2-D-r18 是否存在。 */
    bool sl_SCI_based_SL_PRS_Tx_Trigger_SCI2_D_r18; /**< ASN.1 sl-SCI-based-SL-PRS-Tx-Trigger-SCI2-D-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_sl_TriggerConditionRequest_r18; /**< sl-TriggerConditionRequest-r18 是否存在。 */
    int64_t sl_TriggerConditionRequest_r18; /**< ASN.1 sl-TriggerConditionRequest-r18；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief SL_SyncAllowed_r16
 * @note ASN.1：SL-SyncAllowed-r16；源文件第 23075 行。
 * @note SL-SyncAllowed-r16 ::= SEQUENCE { gnss-Sync-r16, gnbEnb-Sync-r16, ue-Sync-r16 }
 */
struct SL_SyncAllowed_r16 {
    bool has_gnss_Sync_r16; /**< gnss-Sync-r16 是否存在。 */
    SL_SyncAllowed_r16_Gnss_Sync_r16 gnss_Sync_r16; /**< ASN.1 gnss-Sync-r16；枚举；OPTIONAL。 */
    bool has_gnbEnb_Sync_r16; /**< gnbEnb-Sync-r16 是否存在。 */
    SL_SyncAllowed_r16_GnbEnb_Sync_r16 gnbEnb_Sync_r16; /**< ASN.1 gnbEnb-Sync-r16；枚举；OPTIONAL。 */
    bool has_ue_Sync_r16; /**< ue-Sync-r16 是否存在。 */
    SL_SyncAllowed_r16_Ue_Sync_r16 ue_Sync_r16; /**< ASN.1 ue-Sync-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_PTRS_Config_r16
 * @note ASN.1：SL-PTRS-Config-r16；源文件第 23105 行。
 * @note SL-PTRS-Config-r16 ::= SEQUENCE { sl-PTRS-FreqDensity-r16, sl-PTRS-TimeDensity-r16, sl-PTRS-RE-Offse...
 */
struct SL_PTRS_Config_r16 {
    bool has_sl_PTRS_FreqDensity_r16; /**< sl-PTRS-FreqDensity-r16 是否存在。 */
    int64_t* sl_PTRS_FreqDensity_r16_items; /**< ASN.1 sl-PTRS-FreqDensity-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PTRS_FreqDensity_r16_count; /**< sl-PTRS-FreqDensity-r16 元素个数。 */
    bool has_sl_PTRS_TimeDensity_r16; /**< sl-PTRS-TimeDensity-r16 是否存在。 */
    int64_t* sl_PTRS_TimeDensity_r16_items; /**< ASN.1 sl-PTRS-TimeDensity-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PTRS_TimeDensity_r16_count; /**< sl-PTRS-TimeDensity-r16 元素个数。 */
    bool has_sl_PTRS_RE_Offset_r16; /**< sl-PTRS-RE-Offset-r16 是否存在。 */
    SL_PTRS_Config_r16_Sl_PTRS_RE_Offset_r16 sl_PTRS_RE_Offset_r16; /**< ASN.1 sl-PTRS-RE-Offset-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_CBR_PriorityTxConfigList_r16
 * @note ASN.1：SL-CBR-PriorityTxConfigList-r16；源文件第 22032 行。
 * @note SL-CBR-PriorityTxConfigList-r16 ::= SEQUENCE OF (size 1..8) OF SL-PriorityTxConfigIndex-r16
 */
struct SL_CBR_PriorityTxConfigList_r16 {
    SL_PriorityTxConfigIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_CBR_PriorityTxConfigList_v1650
 * @note ASN.1：SL-CBR-PriorityTxConfigList-v1650；源文件第 22034 行。
 * @note SL-CBR-PriorityTxConfigList-v1650 ::= SEQUENCE OF (size 1..8) OF SL-PriorityTxConfigIndex-v1650
 */
struct SL_CBR_PriorityTxConfigList_v1650 {
    SL_PriorityTxConfigIndex_v1650* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_UE_SelectedConfigRP_r16_ExtGroup1
 * @note ASN.1：SL_UE_SelectedConfigRP_r16_ExtGroup1；源文件第 23122 行。
 */
struct SL_UE_SelectedConfigRP_r16_ExtGroup1 {
    bool has_sl_CBR_PriorityTxConfigList_v1650; /**< sl-CBR-PriorityTxConfigList-v1650 是否存在。 */
    SL_CBR_PriorityTxConfigList_v1650 sl_CBR_PriorityTxConfigList_v1650; /**< ASN.1 sl-CBR-PriorityTxConfigList-v1650；SEQUENCE OF SL_PriorityTxConfigIndex_v1650，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SL_Thres_RSRP_List_r16
 * @note ASN.1：SL-Thres-RSRP-List-r16；源文件第 23382 行。
 * @note SL-Thres-RSRP-List-r16 ::= SEQUENCE OF (size 64..64) OF SL-Thres-RSRP-r16
 */
struct SL_Thres_RSRP_List_r16 {
    SL_Thres_RSRP_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_UE_SelectedConfigRP_r16_ExtGroup2
 * @note ASN.1：SL_UE_SelectedConfigRP_r16_ExtGroup2；源文件第 23125 行。
 */
struct SL_UE_SelectedConfigRP_r16_ExtGroup2 {
    bool has_sl_NRPSSCH_EUTRA_ThresRSRP_List_r18; /**< sl-NRPSSCH-EUTRA-ThresRSRP-List-r18 是否存在。 */
    SL_Thres_RSRP_List_r16 sl_NRPSSCH_EUTRA_ThresRSRP_List_r18; /**< ASN.1 sl-NRPSSCH-EUTRA-ThresRSRP-List-r18；SEQUENCE OF SL_Thres_RSRP_r16，SIZE (64)，定长；OPTIONAL。 */
    bool has_sl_NRPSFCH_EUTRA_ThresRSRP_List_r18; /**< sl-NRPSFCH-EUTRA-ThresRSRP-List-r18 是否存在。 */
    SL_Thres_RSRP_List_r16 sl_NRPSFCH_EUTRA_ThresRSRP_List_r18; /**< ASN.1 sl-NRPSFCH-EUTRA-ThresRSRP-List-r18；SEQUENCE OF SL_Thres_RSRP_r16，SIZE (64)，定长；OPTIONAL。 */
};


/**
 * @brief SL_SelectionWindowList_r16
 * @note ASN.1：SL-SelectionWindowList-r16；源文件第 23136 行。
 * @note SL-SelectionWindowList-r16 ::= SEQUENCE OF (size 8..8) OF SL-SelectionWindowConfig-r16
 */
struct SL_SelectionWindowList_r16 {
    SL_SelectionWindowConfig_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_UE_SelectedConfigRP_r16
 * @note ASN.1：SL-UE-SelectedConfigRP-r16；源文件第 23112 行。
 * @note SL-UE-SelectedConfigRP-r16 ::= SEQUENCE { sl-CBR-PriorityTxConfigList-r16, sl-Thres-RSRP-List-r16, sl-MultiR...
 */
struct SL_UE_SelectedConfigRP_r16 {
    bool has_sl_CBR_PriorityTxConfigList_r16; /**< sl-CBR-PriorityTxConfigList-r16 是否存在。 */
    SL_CBR_PriorityTxConfigList_r16 sl_CBR_PriorityTxConfigList_r16; /**< ASN.1 sl-CBR-PriorityTxConfigList-r16；SEQUENCE OF SL_PriorityTxConfigIndex_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_Thres_RSRP_List_r16; /**< sl-Thres-RSRP-List-r16 是否存在。 */
    SL_Thres_RSRP_List_r16 sl_Thres_RSRP_List_r16; /**< ASN.1 sl-Thres-RSRP-List-r16；SEQUENCE OF SL_Thres_RSRP_r16，SIZE (64)，定长；OPTIONAL。 */
    bool has_sl_MultiReserveResource_r16; /**< sl-MultiReserveResource-r16 是否存在。 */
    SL_UE_SelectedConfigRP_r16_Sl_MultiReserveResource_r16 sl_MultiReserveResource_r16; /**< ASN.1 sl-MultiReserveResource-r16；枚举；OPTIONAL。 */
    bool has_sl_MaxNumPerReserve_r16; /**< sl-MaxNumPerReserve-r16 是否存在。 */
    SL_UE_SelectedConfigRP_r16_Sl_MaxNumPerReserve_r16 sl_MaxNumPerReserve_r16; /**< ASN.1 sl-MaxNumPerReserve-r16；枚举；OPTIONAL。 */
    bool has_sl_SensingWindow_r16; /**< sl-SensingWindow-r16 是否存在。 */
    SL_UE_SelectedConfigRP_r16_Sl_SensingWindow_r16 sl_SensingWindow_r16; /**< ASN.1 sl-SensingWindow-r16；枚举；OPTIONAL。 */
    bool has_sl_SelectionWindowList_r16; /**< sl-SelectionWindowList-r16 是否存在。 */
    SL_SelectionWindowList_r16 sl_SelectionWindowList_r16; /**< ASN.1 sl-SelectionWindowList-r16；SEQUENCE OF SL_SelectionWindowConfig_r16，SIZE (8)，定长；OPTIONAL。 */
    bool has_sl_ResourceReservePeriodList_r16; /**< sl-ResourceReservePeriodList-r16 是否存在。 */
    SL_ResourceReservePeriod_r16* sl_ResourceReservePeriodList_r16_items; /**< ASN.1 sl-ResourceReservePeriodList-r16；SEQUENCE OF SL_ResourceReservePeriod_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ResourceReservePeriodList_r16_count; /**< sl-ResourceReservePeriodList-r16 元素个数。 */
    SL_UE_SelectedConfigRP_r16_Sl_RS_ForSensing_r16 sl_RS_ForSensing_r16; /**< ASN.1 sl-RS-ForSensing-r16；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_UE_SelectedConfigRP_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_UE_SelectedConfigRP_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_TxPercentageList_r16
 * @note ASN.1：SL-TxPercentageList-r16；源文件第 23143 行。
 * @note SL-TxPercentageList-r16 ::= SEQUENCE OF (size 8..8) OF SL-TxPercentageConfig-r16
 */
struct SL_TxPercentageList_r16 {
    SL_TxPercentageConfig_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_MinMaxMCS_List_r16
 * @note ASN.1：SL-MinMaxMCS-List-r16；源文件第 23150 行。
 * @note SL-MinMaxMCS-List-r16 ::= SEQUENCE OF (size 1..3) OF SL-MinMaxMCS-Config-r16
 */
struct SL_MinMaxMCS_List_r16 {
    SL_MinMaxMCS_Config_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_PowerControl_r16_ExtGroup1
 * @note ASN.1：SL_PowerControl_r16_ExtGroup1；源文件第 23169 行。
 */
struct SL_PowerControl_r16_ExtGroup1 {
    bool has_dl_P0_PSSCH_PSCCH_r17; /**< dl-P0-PSSCH-PSCCH-r17 是否存在。 */
    int64_t dl_P0_PSSCH_PSCCH_r17; /**< ASN.1 dl-P0-PSSCH-PSCCH-r17；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_sl_P0_PSSCH_PSCCH_r17; /**< sl-P0-PSSCH-PSCCH-r17 是否存在。 */
    int64_t sl_P0_PSSCH_PSCCH_r17; /**< ASN.1 sl-P0-PSSCH-PSCCH-r17；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_dl_P0_PSFCH_r17; /**< dl-P0-PSFCH-r17 是否存在。 */
    int64_t dl_P0_PSFCH_r17; /**< ASN.1 dl-P0-PSFCH-r17；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SL_PowerControl_r16
 * @note ASN.1：SL-PowerControl-r16；源文件第 23160 行。
 * @note SL-PowerControl-r16 ::= SEQUENCE { sl-MaxTransPower-r16, sl-Alpha-PSSCH-PSCCH-r16, dl-Alpha-PSSCH-PSC...
 */
struct SL_PowerControl_r16 {
    int64_t sl_MaxTransPower_r16; /**< ASN.1 sl-MaxTransPower-r16；INTEGER (-30..33)，位宽 6 bit。 */
    bool has_sl_Alpha_PSSCH_PSCCH_r16; /**< sl-Alpha-PSSCH-PSCCH-r16 是否存在。 */
    SL_PowerControl_r16_Sl_Alpha_PSSCH_PSCCH_r16 sl_Alpha_PSSCH_PSCCH_r16; /**< ASN.1 sl-Alpha-PSSCH-PSCCH-r16；枚举；OPTIONAL。 */
    bool has_dl_Alpha_PSSCH_PSCCH_r16; /**< dl-Alpha-PSSCH-PSCCH-r16 是否存在。 */
    SL_PowerControl_r16_Dl_Alpha_PSSCH_PSCCH_r16 dl_Alpha_PSSCH_PSCCH_r16; /**< ASN.1 dl-Alpha-PSSCH-PSCCH-r16；枚举；OPTIONAL。 */
    bool has_sl_P0_PSSCH_PSCCH_r16; /**< sl-P0-PSSCH-PSCCH-r16 是否存在。 */
    int64_t sl_P0_PSSCH_PSCCH_r16; /**< ASN.1 sl-P0-PSSCH-PSCCH-r16；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_dl_P0_PSSCH_PSCCH_r16; /**< dl-P0-PSSCH-PSCCH-r16 是否存在。 */
    int64_t dl_P0_PSSCH_PSCCH_r16; /**< ASN.1 dl-P0-PSSCH-PSCCH-r16；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_dl_Alpha_PSFCH_r16; /**< dl-Alpha-PSFCH-r16 是否存在。 */
    SL_PowerControl_r16_Dl_Alpha_PSFCH_r16 dl_Alpha_PSFCH_r16; /**< ASN.1 dl-Alpha-PSFCH-r16；枚举；OPTIONAL。 */
    bool has_dl_P0_PSFCH_r16; /**< dl-P0-PSFCH-r16 是否存在。 */
    int64_t dl_P0_PSFCH_r16; /**< ASN.1 dl-P0-PSFCH-r16；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_PowerControl_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_PSCCH_Config_r16
 * @note ASN.1：SL-PSCCH-Config-r16；源文件第 23081 行。
 * @note SL-PSCCH-Config-r16 ::= SEQUENCE { sl-TimeResourcePSCCH-r16, sl-FreqResourcePSCCH-r16, sl-DMRS-Scramb...
 */
struct SL_PSCCH_Config_r16 {
    bool has_sl_TimeResourcePSCCH_r16; /**< sl-TimeResourcePSCCH-r16 是否存在。 */
    SL_PSCCH_Config_r16_Sl_TimeResourcePSCCH_r16 sl_TimeResourcePSCCH_r16; /**< ASN.1 sl-TimeResourcePSCCH-r16；枚举；OPTIONAL。 */
    bool has_sl_FreqResourcePSCCH_r16; /**< sl-FreqResourcePSCCH-r16 是否存在。 */
    SL_PSCCH_Config_r16_Sl_FreqResourcePSCCH_r16 sl_FreqResourcePSCCH_r16; /**< ASN.1 sl-FreqResourcePSCCH-r16；枚举；OPTIONAL。 */
    bool has_sl_DMRS_ScrambleID_r16; /**< sl-DMRS-ScrambleID-r16 是否存在。 */
    int64_t sl_DMRS_ScrambleID_r16; /**< ASN.1 sl-DMRS-ScrambleID-r16；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_sl_NumReservedBits_r16; /**< sl-NumReservedBits-r16 是否存在。 */
    int64_t sl_NumReservedBits_r16; /**< ASN.1 sl-NumReservedBits-r16；INTEGER (2..4)，位宽 2 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_PSCCH_Config_r16
 * @note ASN.1：SetupRelease<SL-PSCCH-Config-r16>；源文件第 22993 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PSCCH_Config_r16_Tag {
    SetupRelease_SL_PSCCH_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PSCCH_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PSCCH_Config_r16_Tag;

struct SetupRelease_SL_PSCCH_Config_r16 {
    SetupRelease_SL_PSCCH_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PSCCH_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_PSSCH_Config_r16
 * @note ASN.1：SL-PSSCH-Config-r16；源文件第 23089 行。
 * @note SL-PSSCH-Config-r16 ::= SEQUENCE { sl-PSSCH-DMRS-TimePatternList-r16, sl-BetaOffsets2ndSCI-r16, sl-Sc...
 */
struct SL_PSSCH_Config_r16 {
    bool has_sl_PSSCH_DMRS_TimePatternList_r16; /**< sl-PSSCH-DMRS-TimePatternList-r16 是否存在。 */
    int64_t* sl_PSSCH_DMRS_TimePatternList_r16_items; /**< ASN.1 sl-PSSCH-DMRS-TimePatternList-r16；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PSSCH_DMRS_TimePatternList_r16_count; /**< sl-PSSCH-DMRS-TimePatternList-r16 元素个数。 */
    bool has_sl_BetaOffsets2ndSCI_r16; /**< sl-BetaOffsets2ndSCI-r16 是否存在。 */
    SL_BetaOffsets_r16* sl_BetaOffsets2ndSCI_r16_items; /**< ASN.1 sl-BetaOffsets2ndSCI-r16；SEQUENCE OF SL_BetaOffsets_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_BetaOffsets2ndSCI_r16_count; /**< sl-BetaOffsets2ndSCI-r16 元素个数。 */
    bool has_sl_Scaling_r16; /**< sl-Scaling-r16 是否存在。 */
    SL_PSSCH_Config_r16_Sl_Scaling_r16 sl_Scaling_r16; /**< ASN.1 sl-Scaling-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_PSSCH_Config_r16
 * @note ASN.1：SetupRelease<SL-PSSCH-Config-r16>；源文件第 22994 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PSSCH_Config_r16_Tag {
    SetupRelease_SL_PSSCH_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PSSCH_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PSSCH_Config_r16_Tag;

struct SetupRelease_SL_PSSCH_Config_r16 {
    SetupRelease_SL_PSSCH_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PSSCH_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_PSFCH_Config_r16
 * @note ASN.1：SL-PSFCH-Config-r16；源文件第 23096 行。
 * @note SL-PSFCH-Config-r16 ::= SEQUENCE { sl-PSFCH-Period-r16, sl-PSFCH-RB-Set-r16, sl-NumMuxCS-Pair-r16, sl...
 */
struct SL_PSFCH_Config_r16 {
    bool has_sl_PSFCH_Period_r16; /**< sl-PSFCH-Period-r16 是否存在。 */
    SL_PSFCH_Config_r16_Sl_PSFCH_Period_r16 sl_PSFCH_Period_r16; /**< ASN.1 sl-PSFCH-Period-r16；枚举；OPTIONAL。 */
    bool has_sl_PSFCH_RB_Set_r16; /**< sl-PSFCH-RB-Set-r16 是否存在。 */
    BitString sl_PSFCH_RB_Set_r16; /**< ASN.1 sl-PSFCH-RB-Set-r16；SIZE (10..275)；OPTIONAL。 */
    bool has_sl_NumMuxCS_Pair_r16; /**< sl-NumMuxCS-Pair-r16 是否存在。 */
    SL_PSFCH_Config_r16_Sl_NumMuxCS_Pair_r16 sl_NumMuxCS_Pair_r16; /**< ASN.1 sl-NumMuxCS-Pair-r16；枚举；OPTIONAL。 */
    bool has_sl_MinTimeGapPSFCH_r16; /**< sl-MinTimeGapPSFCH-r16 是否存在。 */
    SL_PSFCH_Config_r16_Sl_MinTimeGapPSFCH_r16 sl_MinTimeGapPSFCH_r16; /**< ASN.1 sl-MinTimeGapPSFCH-r16；枚举；OPTIONAL。 */
    bool has_sl_PSFCH_HopID_r16; /**< sl-PSFCH-HopID-r16 是否存在。 */
    int64_t sl_PSFCH_HopID_r16; /**< ASN.1 sl-PSFCH-HopID-r16；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_sl_PSFCH_CandidateResourceType_r16; /**< sl-PSFCH-CandidateResourceType-r16 是否存在。 */
    SL_PSFCH_Config_r16_Sl_PSFCH_CandidateResourceType_r16 sl_PSFCH_CandidateResourceType_r16; /**< ASN.1 sl-PSFCH-CandidateResourceType-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_PSFCH_Config_r16
 * @note ASN.1：SetupRelease<SL-PSFCH-Config-r16>；源文件第 22995 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PSFCH_Config_r16_Tag {
    SetupRelease_SL_PSFCH_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PSFCH_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PSFCH_Config_r16_Tag;

struct SetupRelease_SL_PSFCH_Config_r16 {
    SetupRelease_SL_PSFCH_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PSFCH_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_ResourcePool_r16_Sl_RxParametersNcell_r16
 * @note ASN.1：sl-RxParametersNcell-r16；源文件第 23007 行。
 * @note SEQUENCE { sl-TDD-Configuration-r16, sl-SyncConfigIndex-r16 }
 */
struct SL_ResourcePool_r16_Sl_RxParametersNcell_r16 {
    bool has_sl_TDD_Configuration_r16; /**< sl-TDD-Configuration-r16 是否存在。 */
    TDD_UL_DL_ConfigCommon sl_TDD_Configuration_r16; /**< ASN.1 sl-TDD-Configuration-r16；结构体；OPTIONAL。 */
    int64_t sl_SyncConfigIndex_r16; /**< ASN.1 sl-SyncConfigIndex-r16；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief SL_ResourcePool_r16
 * @note ASN.1：SL-ResourcePool-r16；源文件第 22992 行。
 * @note SL-ResourcePool-r16 ::= SEQUENCE { sl-PSCCH-Config-r16, sl-PSSCH-Config-r16, sl-PSFCH-Config-r16, sl-...
 */
struct SL_ResourcePool_r16 {
    bool has_sl_PSCCH_Config_r16; /**< sl-PSCCH-Config-r16 是否存在。 */
    SetupRelease_SL_PSCCH_Config_r16 sl_PSCCH_Config_r16; /**< ASN.1 sl-PSCCH-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_PSSCH_Config_r16; /**< sl-PSSCH-Config-r16 是否存在。 */
    SetupRelease_SL_PSSCH_Config_r16 sl_PSSCH_Config_r16; /**< ASN.1 sl-PSSCH-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_PSFCH_Config_r16; /**< sl-PSFCH-Config-r16 是否存在。 */
    SetupRelease_SL_PSFCH_Config_r16 sl_PSFCH_Config_r16; /**< ASN.1 sl-PSFCH-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_SyncAllowed_r16; /**< sl-SyncAllowed-r16 是否存在。 */
    SL_SyncAllowed_r16 sl_SyncAllowed_r16; /**< ASN.1 sl-SyncAllowed-r16；结构体；OPTIONAL。 */
    bool has_sl_SubchannelSize_r16; /**< sl-SubchannelSize-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_SubchannelSize_r16 sl_SubchannelSize_r16; /**< ASN.1 sl-SubchannelSize-r16；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    int64_t dummy; /**< ASN.1 dummy；INTEGER (10..160)，位宽 8 bit；OPTIONAL。 */
    bool has_sl_StartRB_Subchannel_r16; /**< sl-StartRB-Subchannel-r16 是否存在。 */
    int64_t sl_StartRB_Subchannel_r16; /**< ASN.1 sl-StartRB-Subchannel-r16；INTEGER (0..265)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_NumSubchannel_r16; /**< sl-NumSubchannel-r16 是否存在。 */
    int64_t sl_NumSubchannel_r16; /**< ASN.1 sl-NumSubchannel-r16；INTEGER (1..27)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_Additional_MCS_Table_r16; /**< sl-Additional-MCS-Table-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_Additional_MCS_Table_r16 sl_Additional_MCS_Table_r16; /**< ASN.1 sl-Additional-MCS-Table-r16；枚举；OPTIONAL。 */
    bool has_sl_ThreshS_RSSI_CBR_r16; /**< sl-ThreshS-RSSI-CBR-r16 是否存在。 */
    int64_t sl_ThreshS_RSSI_CBR_r16; /**< ASN.1 sl-ThreshS-RSSI-CBR-r16；INTEGER (0..45)，位宽 6 bit；OPTIONAL。 */
    bool has_sl_TimeWindowSizeCBR_r16; /**< sl-TimeWindowSizeCBR-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_TimeWindowSizeCBR_r16 sl_TimeWindowSizeCBR_r16; /**< ASN.1 sl-TimeWindowSizeCBR-r16；枚举；OPTIONAL。 */
    bool has_sl_TimeWindowSizeCR_r16; /**< sl-TimeWindowSizeCR-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_TimeWindowSizeCR_r16 sl_TimeWindowSizeCR_r16; /**< ASN.1 sl-TimeWindowSizeCR-r16；枚举；OPTIONAL。 */
    bool has_sl_PTRS_Config_r16; /**< sl-PTRS-Config-r16 是否存在。 */
    SL_PTRS_Config_r16 sl_PTRS_Config_r16; /**< ASN.1 sl-PTRS-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_UE_SelectedConfigRP_r16; /**< sl-UE-SelectedConfigRP-r16 是否存在。 */
    SL_UE_SelectedConfigRP_r16 sl_UE_SelectedConfigRP_r16; /**< ASN.1 sl-UE-SelectedConfigRP-r16；结构体；OPTIONAL。 */
    bool has_sl_RxParametersNcell_r16; /**< sl-RxParametersNcell-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_RxParametersNcell_r16 sl_RxParametersNcell_r16; /**< ASN.1 sl-RxParametersNcell-r16；结构体；OPTIONAL。 */
    bool has_sl_ZoneConfigMCR_List_r16; /**< sl-ZoneConfigMCR-List-r16 是否存在。 */
    SL_ZoneConfigMCR_r16* sl_ZoneConfigMCR_List_r16_items; /**< ASN.1 sl-ZoneConfigMCR-List-r16；SEQUENCE OF SL_ZoneConfigMCR_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_ZoneConfigMCR_List_r16_count; /**< sl-ZoneConfigMCR-List-r16 元素个数。 */
    bool has_sl_FilterCoefficient_r16; /**< sl-FilterCoefficient-r16 是否存在。 */
    FilterCoefficient sl_FilterCoefficient_r16; /**< ASN.1 sl-FilterCoefficient-r16；枚举；OPTIONAL。 */
    bool has_sl_RB_Number_r16; /**< sl-RB-Number-r16 是否存在。 */
    int64_t sl_RB_Number_r16; /**< ASN.1 sl-RB-Number-r16；INTEGER (10..275)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_PreemptionEnable_r16; /**< sl-PreemptionEnable-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_PreemptionEnable_r16 sl_PreemptionEnable_r16; /**< ASN.1 sl-PreemptionEnable-r16；枚举；OPTIONAL。 */
    bool has_sl_PriorityThreshold_UL_URLLC_r16; /**< sl-PriorityThreshold-UL-URLLC-r16 是否存在。 */
    int64_t sl_PriorityThreshold_UL_URLLC_r16; /**< ASN.1 sl-PriorityThreshold-UL-URLLC-r16；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_PriorityThreshold_r16; /**< sl-PriorityThreshold-r16 是否存在。 */
    int64_t sl_PriorityThreshold_r16; /**< ASN.1 sl-PriorityThreshold-r16；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_X_Overhead_r16; /**< sl-X-Overhead-r16 是否存在。 */
    SL_ResourcePool_r16_Sl_X_Overhead_r16 sl_X_Overhead_r16; /**< ASN.1 sl-X-Overhead-r16；枚举；OPTIONAL。 */
    bool has_sl_PowerControl_r16; /**< sl-PowerControl-r16 是否存在。 */
    SL_PowerControl_r16 sl_PowerControl_r16; /**< ASN.1 sl-PowerControl-r16；结构体；OPTIONAL。 */
    bool has_sl_TxPercentageList_r16; /**< sl-TxPercentageList-r16 是否存在。 */
    SL_TxPercentageList_r16 sl_TxPercentageList_r16; /**< ASN.1 sl-TxPercentageList-r16；SEQUENCE OF SL_TxPercentageConfig_r16，SIZE (8)，定长；OPTIONAL。 */
    bool has_sl_MinMaxMCS_List_r16; /**< sl-MinMaxMCS-List-r16 是否存在。 */
    SL_MinMaxMCS_List_r16 sl_MinMaxMCS_List_r16; /**< ASN.1 sl-MinMaxMCS-List-r16；SEQUENCE OF SL_MinMaxMCS_Config_r16，SIZE (1..3)；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_ResourcePool_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_ResourcePool_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SL_ResourcePool_r16_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_ResourcePoolConfig_r16
 * @note ASN.1：SL-ResourcePoolConfig-r16；源文件第 21981 行。
 * @note SL-ResourcePoolConfig-r16 ::= SEQUENCE { sl-ResourcePoolID-r16, sl-ResourcePool-r16 }
 */
struct SL_ResourcePoolConfig_r16 {
    SL_ResourcePoolID_r16 sl_ResourcePoolID_r16; /**< ASN.1 sl-ResourcePoolID-r16；INTEGER (1..16)，位宽 4 bit。 */
    bool has_sl_ResourcePool_r16; /**< sl-ResourcePool-r16 是否存在。 */
    SL_ResourcePool_r16 sl_ResourcePool_r16; /**< ASN.1 sl-ResourcePool-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_BWP_PoolConfig_r16
 * @note ASN.1：SL-BWP-PoolConfig-r16；源文件第 21969 行。
 * @note SL-BWP-PoolConfig-r16 ::= SEQUENCE { sl-RxPool-r16, sl-TxPoolSelectedNormal-r16, sl-TxPoolScheduling-r1...
 */
struct SL_BWP_PoolConfig_r16 {
    bool has_sl_RxPool_r16; /**< sl-RxPool-r16 是否存在。 */
    SL_ResourcePool_r16* sl_RxPool_r16_items; /**< ASN.1 sl-RxPool-r16；SEQUENCE OF SL_ResourcePool_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RxPool_r16_count; /**< sl-RxPool-r16 元素个数。 */
    bool has_sl_TxPoolSelectedNormal_r16; /**< sl-TxPoolSelectedNormal-r16 是否存在。 */
    SL_TxPoolDedicated_r16 sl_TxPoolSelectedNormal_r16; /**< ASN.1 sl-TxPoolSelectedNormal-r16；结构体；OPTIONAL。 */
    bool has_sl_TxPoolScheduling_r16; /**< sl-TxPoolScheduling-r16 是否存在。 */
    SL_TxPoolDedicated_r16 sl_TxPoolScheduling_r16; /**< ASN.1 sl-TxPoolScheduling-r16；结构体；OPTIONAL。 */
    bool has_sl_TxPoolExceptional_r16; /**< sl-TxPoolExceptional-r16 是否存在。 */
    SL_ResourcePoolConfig_r16 sl_TxPoolExceptional_r16; /**< ASN.1 sl-TxPoolExceptional-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_BWP_PoolConfig_r16
 * @note ASN.1：SetupRelease<SL-BWP-PoolConfig-r16>；源文件第 21900 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_BWP_PoolConfig_r16_Tag {
    SetupRelease_SL_BWP_PoolConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_BWP_PoolConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_BWP_PoolConfig_r16_Tag;

struct SetupRelease_SL_BWP_PoolConfig_r16 {
    SetupRelease_SL_BWP_PoolConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_BWP_PoolConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_BWP_DiscPoolConfig_r17
 * @note ASN.1：SL-BWP-DiscPoolConfig-r17；源文件第 21951 行。
 * @note SL-BWP-DiscPoolConfig-r17 ::= SEQUENCE { sl-DiscRxPool-r17, sl-DiscTxPoolSelected-r17, sl-DiscTxPoolSchedul...
 */
struct SL_BWP_DiscPoolConfig_r17 {
    bool has_sl_DiscRxPool_r17; /**< sl-DiscRxPool-r17 是否存在。 */
    SL_ResourcePool_r16* sl_DiscRxPool_r17_items; /**< ASN.1 sl-DiscRxPool-r17；SEQUENCE OF SL_ResourcePool_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DiscRxPool_r17_count; /**< sl-DiscRxPool-r17 元素个数。 */
    bool has_sl_DiscTxPoolSelected_r17; /**< sl-DiscTxPoolSelected-r17 是否存在。 */
    SL_TxPoolDedicated_r16 sl_DiscTxPoolSelected_r17; /**< ASN.1 sl-DiscTxPoolSelected-r17；结构体；OPTIONAL。 */
    bool has_sl_DiscTxPoolScheduling_r17; /**< sl-DiscTxPoolScheduling-r17 是否存在。 */
    SL_TxPoolDedicated_r16 sl_DiscTxPoolScheduling_r17; /**< ASN.1 sl-DiscTxPoolScheduling-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_BWP_DiscPoolConfig_r17
 * @note ASN.1：SetupRelease<SL-BWP-DiscPoolConfig-r17>；源文件第 21901 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag {
    SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag;

struct SetupRelease_SL_BWP_DiscPoolConfig_r17 {
    SetupRelease_SL_BWP_DiscPoolConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_BWP_DiscPoolConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART024_H */
