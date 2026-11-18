/* ============================================================================
 * types/rrc_types_part015.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART015_H
#define RRC_CODEC_TYPES_PART015_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief ServingCellConfigCommonSIB
 * @note ASN.1：ServingCellConfigCommonSIB；源文件第 12713 行。
 * @note ServingCellConfigCommonSIB ::= SEQUENCE { downlinkConfigCommon, uplinkConfigCommon, supplementaryUplink, n-T...
 */
struct ServingCellConfigCommonSIB {
    DownlinkConfigCommonSIB downlinkConfigCommon; /**< ASN.1 downlinkConfigCommon；结构体。 */
    bool has_uplinkConfigCommon; /**< uplinkConfigCommon 是否存在。 */
    UplinkConfigCommonSIB uplinkConfigCommon; /**< ASN.1 uplinkConfigCommon；结构体；OPTIONAL。 */
    bool has_supplementaryUplink; /**< supplementaryUplink 是否存在。 */
    UplinkConfigCommonSIB supplementaryUplink; /**< ASN.1 supplementaryUplink；结构体；OPTIONAL。 */
    bool has_n_TimingAdvanceOffset; /**< n-TimingAdvanceOffset 是否存在。 */
    ServingCellConfigCommonSIB_N_TimingAdvanceOffset n_TimingAdvanceOffset; /**< ASN.1 n-TimingAdvanceOffset；枚举；OPTIONAL。 */
    ServingCellConfigCommonSIB_Ssb_PositionsInBurst ssb_PositionsInBurst; /**< ASN.1 ssb-PositionsInBurst；结构体。 */
    ServingCellConfigCommonSIB_Ssb_PeriodicityServingCell ssb_PeriodicityServingCell; /**< ASN.1 ssb-PeriodicityServingCell；枚举。 */
    bool has_tdd_UL_DL_ConfigurationCommon; /**< tdd-UL-DL-ConfigurationCommon 是否存在。 */
    TDD_UL_DL_ConfigCommon tdd_UL_DL_ConfigurationCommon; /**< ASN.1 tdd-UL-DL-ConfigurationCommon；结构体；OPTIONAL。 */
    int64_t ss_PBCH_BlockPower; /**< ASN.1 ss-PBCH-BlockPower；INTEGER (-60..50)，位宽 7 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ServingCellConfigCommonSIB_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ServingCellConfigCommonSIB_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ServingCellConfigCommonSIB_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    ServingCellConfigCommonSIB_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    ServingCellConfigCommonSIB_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SI_SchedulingInfo
 * @note ASN.1：SI-SchedulingInfo；源文件第 12807 行。
 * @note SI-SchedulingInfo ::= SEQUENCE { schedulingInfoList, si-WindowLength, si-RequestConfig, si-RequestC...
 */
struct SI_SchedulingInfo {
    SchedulingInfo* schedulingInfoList_items; /**< ASN.1 schedulingInfoList；SEQUENCE OF SchedulingInfo，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t schedulingInfoList_count; /**< schedulingInfoList 元素个数。 */
    SI_SchedulingInfo_Si_WindowLength si_WindowLength; /**< ASN.1 si-WindowLength；枚举。 */
    bool has_si_RequestConfig; /**< si-RequestConfig 是否存在。 */
    SI_RequestConfig si_RequestConfig; /**< ASN.1 si-RequestConfig；结构体；OPTIONAL。 */
    bool has_si_RequestConfigSUL; /**< si-RequestConfigSUL 是否存在。 */
    SI_RequestConfig si_RequestConfigSUL; /**< ASN.1 si-RequestConfigSUL；结构体；OPTIONAL。 */
    bool has_systemInformationAreaID; /**< systemInformationAreaID 是否存在。 */
    BitString systemInformationAreaID; /**< ASN.1 systemInformationAreaID；SIZE (24)，定长；OPTIONAL。 */
};


/**
 * @brief UE_TimersAndConstants
 * @note ASN.1：UE-TimersAndConstants；源文件第 13869 行。
 * @note UE-TimersAndConstants ::= SEQUENCE { t300, t301, t310, n310, t311, n311, t319 }
 */
struct UE_TimersAndConstants {
    UE_TimersAndConstants_T300 t300; /**< ASN.1 t300；枚举。 */
    UE_TimersAndConstants_T301 t301; /**< ASN.1 t301；枚举。 */
    UE_TimersAndConstants_T310 t310; /**< ASN.1 t310；枚举。 */
    UE_TimersAndConstants_N310 n310; /**< ASN.1 n310；枚举。 */
    UE_TimersAndConstants_T311 t311; /**< ASN.1 t311；枚举。 */
    UE_TimersAndConstants_N311 n311; /**< ASN.1 n311；枚举。 */
    UE_TimersAndConstants_T319 t319; /**< ASN.1 t319；枚举。 */
};


/**
 * @brief SIB1_CellSelectionInfo
 * @note ASN.1：cellSelectionInfo；源文件第 1831 行。
 * @note SEQUENCE { q-RxLevMin, q-RxLevMinOffset, q-RxLevMinSUL, q-QualMin, q-QualMinO...
 */
struct SIB1_CellSelectionInfo {
    Q_RxLevMin q_RxLevMin; /**< ASN.1 q-RxLevMin；INTEGER (-70..-22)，位宽 6 bit。 */
    bool has_q_RxLevMinOffset; /**< q-RxLevMinOffset 是否存在。 */
    int64_t q_RxLevMinOffset; /**< ASN.1 q-RxLevMinOffset；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_q_RxLevMinSUL; /**< q-RxLevMinSUL 是否存在。 */
    Q_RxLevMin q_RxLevMinSUL; /**< ASN.1 q-RxLevMinSUL；INTEGER (-70..-22)，位宽 6 bit；OPTIONAL。 */
    bool has_q_QualMin; /**< q-QualMin 是否存在。 */
    Q_QualMin q_QualMin; /**< ASN.1 q-QualMin；INTEGER (-43..-12)，位宽 5 bit；OPTIONAL。 */
    bool has_q_QualMinOffset; /**< q-QualMinOffset 是否存在。 */
    int64_t q_QualMinOffset; /**< ASN.1 q-QualMinOffset；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief UAC_BarringInfoSetList
 * @note ASN.1：UAC-BarringInfoSetList；源文件第 13827 行。
 * @note UAC-BarringInfoSetList ::= SEQUENCE OF (size 1..8) OF UAC-BarringInfoSet
 */
struct UAC_BarringInfoSetList {
    UAC_BarringInfoSet* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UAC_BarringPerCatList
 * @note ASN.1：UAC-BarringPerCatList；源文件第 13846 行。
 * @note UAC-BarringPerCatList ::= SEQUENCE OF (size 1..63) OF UAC-BarringPerCat
 */
struct UAC_BarringPerCatList {
    UAC_BarringPerCat* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UAC_BarringPerPLMN_List
 * @note ASN.1：UAC-BarringPerPLMN-List；源文件第 13856 行。
 * @note UAC-BarringPerPLMN-List ::= SEQUENCE OF (size 1..12) OF UAC-BarringPerPLMN
 */
struct UAC_BarringPerPLMN_List {
    UAC_BarringPerPLMN* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList
 * @note ASN.1：uac-BarringInfo/uac-AccessCategory1-SelectionAssistanceInfo/individualPLMNList；源文件第 1851 行。
 * @note SEQUENCE OF (size 2..12) OF UAC-AccessCategory1-SelectionAssistanceInfo
 */
struct SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList {
    UAC_AccessCategory1_SelectionAssistanceInfo* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo
 * @note ASN.1：uac-BarringInfo/uac-AccessCategory1-SelectionAssistanceInfo；源文件第 1849 行。
 * @note CHOICE { plmnCommon, individualPLMNList }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag {
    SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_plmnCommon = 0, /**< ASN.1 plmnCommon */
    SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag_individualPLMNList = 1, /**< ASN.1 individualPLMNList */
} SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag;

struct SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo {
    SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UAC_AccessCategory1_SelectionAssistanceInfo plmnCommon; /**< ASN.1 plmnCommon */
        SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo_IndividualPLMNList individualPLMNList; /**< ASN.1 individualPLMNList */
    } u;
};


/**
 * @brief SIB1_Uac_BarringInfo
 * @note ASN.1：uac-BarringInfo；源文件第 1845 行。
 * @note SEQUENCE { uac-BarringForCommon, uac-BarringPerPLMN-List, uac-BarringInfoSetL...
 */
struct SIB1_Uac_BarringInfo {
    bool has_uac_BarringForCommon; /**< uac-BarringForCommon 是否存在。 */
    UAC_BarringPerCatList uac_BarringForCommon; /**< ASN.1 uac-BarringForCommon；SEQUENCE OF UAC_BarringPerCat，SIZE (1..63)；OPTIONAL。 */
    bool has_uac_BarringPerPLMN_List; /**< uac-BarringPerPLMN-List 是否存在。 */
    UAC_BarringPerPLMN_List uac_BarringPerPLMN_List; /**< ASN.1 uac-BarringPerPLMN-List；SEQUENCE OF UAC_BarringPerPLMN，SIZE (1..12)；OPTIONAL。 */
    UAC_BarringInfoSetList uac_BarringInfoSetList; /**< ASN.1 uac-BarringInfoSetList；SEQUENCE OF UAC_BarringInfoSet，SIZE (1..8)。 */
    bool has_uac_AccessCategory1_SelectionAssistanceInfo; /**< uac-AccessCategory1-SelectionAssistanceInfo 是否存在。 */
    SIB1_Uac_BarringInfo_Uac_AccessCategory1_SelectionAssistanceInfo uac_AccessCategory1_SelectionAssistanceInfo; /**< ASN.1 uac-AccessCategory1-SelectionAssistanceInfo；结构体；OPTIONAL。 */
};


/**
 * @brief SIB1
 * @note ASN.1：SIB1；源文件第 1830 行。
 * @note 实际消息：ChannelType_BCCH_DL_SCH；MessageKind_SIB1（包装位 2 级，入口 2 个 CHOICE）。
 * @note SIB1 ::= SEQUENCE { cellSelectionInfo, cellAccessRelatedInfo, connEstFailureControl, s...
 */
struct SIB1 {
    bool has_cellSelectionInfo; /**< cellSelectionInfo 是否存在。 */
    SIB1_CellSelectionInfo cellSelectionInfo; /**< ASN.1 cellSelectionInfo；结构体；OPTIONAL。 */
    CellAccessRelatedInfo cellAccessRelatedInfo; /**< ASN.1 cellAccessRelatedInfo；结构体。 */
    bool has_connEstFailureControl; /**< connEstFailureControl 是否存在。 */
    ConnEstFailureControl connEstFailureControl; /**< ASN.1 connEstFailureControl；结构体；OPTIONAL。 */
    bool has_si_SchedulingInfo; /**< si-SchedulingInfo 是否存在。 */
    SI_SchedulingInfo si_SchedulingInfo; /**< ASN.1 si-SchedulingInfo；结构体；OPTIONAL。 */
    bool has_servingCellConfigCommon; /**< servingCellConfigCommon 是否存在。 */
    ServingCellConfigCommonSIB servingCellConfigCommon; /**< ASN.1 servingCellConfigCommon；结构体；OPTIONAL。 */
    bool has_ims_EmergencySupport; /**< ims-EmergencySupport 是否存在。 */
    SIB1_Ims_EmergencySupport ims_EmergencySupport; /**< ASN.1 ims-EmergencySupport；枚举；OPTIONAL。 */
    bool has_eCallOverIMS_Support; /**< eCallOverIMS-Support 是否存在。 */
    SIB1_ECallOverIMS_Support eCallOverIMS_Support; /**< ASN.1 eCallOverIMS-Support；枚举；OPTIONAL。 */
    bool has_ue_TimersAndConstants; /**< ue-TimersAndConstants 是否存在。 */
    UE_TimersAndConstants ue_TimersAndConstants; /**< ASN.1 ue-TimersAndConstants；结构体；OPTIONAL。 */
    bool has_uac_BarringInfo; /**< uac-BarringInfo 是否存在。 */
    SIB1_Uac_BarringInfo uac_BarringInfo; /**< ASN.1 uac-BarringInfo；结构体；OPTIONAL。 */
    bool has_useFullResumeID; /**< useFullResumeID 是否存在。 */
    SIB1_UseFullResumeID useFullResumeID; /**< ASN.1 useFullResumeID；枚举；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SIB1_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SL_InterestedFreqList_r16
 * @note ASN.1：SL-InterestedFreqList-r16；源文件第 2003 行。
 * @note SL-InterestedFreqList-r16 ::= SEQUENCE OF (size 1..8) OF SLInterestedFreqListR16Item
 */
struct SL_InterestedFreqList_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_PosTxResourceReqList_r18
 * @note ASN.1：SL-PosTxResourceReqList-r18；源文件第 2007 行。
 * @note SL-PosTxResourceReqList-r18 ::= SEQUENCE OF (size 1..32) OF SL-PosTxResourceReq-r18
 */
struct SL_PosTxResourceReqList_r18 {
    SL_PosTxResourceReq_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_CarrierFailureList_r18
 * @note ASN.1：SL-CarrierFailureList-r18；源文件第 2136 行。
 * @note SL-CarrierFailureList-r18 ::= SEQUENCE OF (size 1..32) OF SL-CarrierFailure-r18
 */
struct SL_CarrierFailureList_r18 {
    SL_CarrierFailure_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2000 行。
 * @note SEQUENCE { }
 */
struct SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SidelinkUEInformationNR_v1800_IEs
 * @note ASN.1：SidelinkUEInformationNR-v1800-IEs；源文件第 1995 行。
 * @note SidelinkUEInformationNR-v1800-IEs ::= SEQUENCE { sl-CarrierFailureList-r18, sl-TxResourceReqListL2-U2U-r18, sl-PosR...
 */
struct SidelinkUEInformationNR_v1800_IEs {
    bool has_sl_CarrierFailureList_r18; /**< sl-CarrierFailureList-r18 是否存在。 */
    SL_CarrierFailureList_r18 sl_CarrierFailureList_r18; /**< ASN.1 sl-CarrierFailureList-r18；SEQUENCE OF SL_CarrierFailure_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_sl_TxResourceReqListL2_U2U_r18; /**< sl-TxResourceReqListL2-U2U-r18 是否存在。 */
    SL_TxResourceReqL2_U2U_r18* sl_TxResourceReqListL2_U2U_r18_items; /**< ASN.1 sl-TxResourceReqListL2-U2U-r18；SEQUENCE OF SL_TxResourceReqL2_U2U_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_TxResourceReqListL2_U2U_r18_count; /**< sl-TxResourceReqListL2-U2U-r18 元素个数。 */
    bool has_sl_PosRxInterestedFreqList_r18; /**< sl-PosRxInterestedFreqList-r18 是否存在。 */
    SL_InterestedFreqList_r16 sl_PosRxInterestedFreqList_r18; /**< ASN.1 sl-PosRxInterestedFreqList-r18；SEQUENCE OF int64_t，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_PosTxResourceReqList_r18; /**< sl-PosTxResourceReqList-r18 是否存在。 */
    SL_PosTxResourceReqList_r18 sl_PosTxResourceReqList_r18; /**< ASN.1 sl-PosTxResourceReqList-r18；SEQUENCE OF SL_PosTxResourceReq_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SidelinkUEInformationNR_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SL_TxResourceReqList_v1700
 * @note ASN.1：SL-TxResourceReqList-v1700；源文件第 2019 行。
 * @note SL-TxResourceReqList-v1700 ::= SEQUENCE OF (size 1..32) OF SL-TxResourceReq-v1700
 */
struct SL_TxResourceReqList_v1700 {
    SL_TxResourceReq_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_RxDRX_ReportList_v1700
 * @note ASN.1：SL-RxDRX-ReportList-v1700；源文件第 2021 行。
 * @note SL-RxDRX-ReportList-v1700 ::= SEQUENCE OF (size 1..32) OF SL-RxDRX-Report-v1700
 */
struct SL_RxDRX_ReportList_v1700 {
    SL_RxDRX_Report_v1700* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_RxInterestedGC_BC_DestList_r17
 * @note ASN.1：SL-RxInterestedGC-BC-DestList-r17；源文件第 2036 行。
 * @note SL-RxInterestedGC-BC-DestList-r17 ::= SEQUENCE OF (size 1..32) OF SL-RxInterestedGC-BC-Dest-r17
 */
struct SL_RxInterestedGC_BC_DestList_r17 {
    SL_RxInterestedGC_BC_Dest_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_TxResourceReqListDisc_r17
 * @note ASN.1：SL-TxResourceReqListDisc-r17；源文件第 2043 行。
 * @note SL-TxResourceReqListDisc-r17 ::= SEQUENCE OF (size 1..32) OF SL-TxResourceReqDisc-r17
 */
struct SL_TxResourceReqListDisc_r17 {
    SL_TxResourceReqDisc_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_TxResourceReqListCommRelay_r17
 * @note ASN.1：SL-TxResourceReqListCommRelay-r17；源文件第 2055 行。
 * @note SL-TxResourceReqListCommRelay-r17 ::= SEQUENCE OF (size 1..32) OF SL-TxResourceReqCommRelayInfo-r17
 */
struct SL_TxResourceReqListCommRelay_r17 {
    SL_TxResourceReqCommRelayInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SidelinkUEInformationNR_v1700_IEs
 * @note ASN.1：SidelinkUEInformationNR-v1700-IEs；源文件第 1983 行。
 * @note SidelinkUEInformationNR-v1700-IEs ::= SEQUENCE { sl-TxResourceReqList-v1700, sl-RxDRX-ReportList-v1700, sl-RxIntere...
 */
struct SidelinkUEInformationNR_v1700_IEs {
    bool has_sl_TxResourceReqList_v1700; /**< sl-TxResourceReqList-v1700 是否存在。 */
    SL_TxResourceReqList_v1700 sl_TxResourceReqList_v1700; /**< ASN.1 sl-TxResourceReqList-v1700；SEQUENCE OF SL_TxResourceReq_v1700，SIZE (1..32)；OPTIONAL。 */
    bool has_sl_RxDRX_ReportList_v1700; /**< sl-RxDRX-ReportList-v1700 是否存在。 */
    SL_RxDRX_ReportList_v1700 sl_RxDRX_ReportList_v1700; /**< ASN.1 sl-RxDRX-ReportList-v1700；SEQUENCE OF SL_RxDRX_Report_v1700，SIZE (1..32)；OPTIONAL。 */
    bool has_sl_RxInterestedGC_BC_DestList_r17; /**< sl-RxInterestedGC-BC-DestList-r17 是否存在。 */
    SL_RxInterestedGC_BC_DestList_r17 sl_RxInterestedGC_BC_DestList_r17; /**< ASN.1 sl-RxInterestedGC-BC-DestList-r17；SEQUENCE OF SL_RxInterestedGC_BC_Dest_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_sl_RxInterestedFreqListDisc_r17; /**< sl-RxInterestedFreqListDisc-r17 是否存在。 */
    SL_InterestedFreqList_r16 sl_RxInterestedFreqListDisc_r17; /**< ASN.1 sl-RxInterestedFreqListDisc-r17；SEQUENCE OF int64_t，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_TxResourceReqListDisc_r17; /**< sl-TxResourceReqListDisc-r17 是否存在。 */
    SL_TxResourceReqListDisc_r17 sl_TxResourceReqListDisc_r17; /**< ASN.1 sl-TxResourceReqListDisc-r17；SEQUENCE OF SL_TxResourceReqDisc_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_sl_TxResourceReqListCommRelay_r17; /**< sl-TxResourceReqListCommRelay-r17 是否存在。 */
    SL_TxResourceReqListCommRelay_r17 sl_TxResourceReqListCommRelay_r17; /**< ASN.1 sl-TxResourceReqListCommRelay-r17；SEQUENCE OF SL_TxResourceReqCommRelayInfo_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_ue_Type_r17; /**< ue-Type-r17 是否存在。 */
    SidelinkUEInformationNR_v1700_IEs_Ue_Type_r17 ue_Type_r17; /**< ASN.1 ue-Type-r17；枚举；OPTIONAL。 */
    bool has_sl_SourceIdentityRemoteUE_r17; /**< sl-SourceIdentityRemoteUE-r17 是否存在。 */
    SL_SourceIdentity_r17 sl_SourceIdentityRemoteUE_r17; /**< ASN.1 sl-SourceIdentityRemoteUE-r17；SIZE (24)，定长；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SidelinkUEInformationNR_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SL_TxResourceReqList_r16
 * @note ASN.1：SL-TxResourceReqList-r16；源文件第 2005 行。
 * @note SL-TxResourceReqList-r16 ::= SEQUENCE OF (size 1..32) OF SL-TxResourceReq-r16
 */
struct SL_TxResourceReqList_r16 {
    SL_TxResourceReq_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_FailureList_r16
 * @note ASN.1：SL-FailureList-r16；源文件第 2129 行。
 * @note SL-FailureList-r16 ::= SEQUENCE OF (size 1..32) OF SL-Failure-r16
 */
struct SL_FailureList_r16 {
    SL_Failure_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SidelinkUEInformationNR_r16_IEs
 * @note ASN.1：SidelinkUEInformationNR-r16-IEs；源文件第 1975 行。
 * @note SidelinkUEInformationNR-r16-IEs ::= SEQUENCE { sl-RxInterestedFreqList-r16, sl-TxResourceReqList-r16, sl-FailureL...
 */
struct SidelinkUEInformationNR_r16_IEs {
    bool has_sl_RxInterestedFreqList_r16; /**< sl-RxInterestedFreqList-r16 是否存在。 */
    SL_InterestedFreqList_r16 sl_RxInterestedFreqList_r16; /**< ASN.1 sl-RxInterestedFreqList-r16；SEQUENCE OF int64_t，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_TxResourceReqList_r16; /**< sl-TxResourceReqList-r16 是否存在。 */
    SL_TxResourceReqList_r16 sl_TxResourceReqList_r16; /**< ASN.1 sl-TxResourceReqList-r16；SEQUENCE OF SL_TxResourceReq_r16，SIZE (1..32)；OPTIONAL。 */
    bool has_sl_FailureList_r16; /**< sl-FailureList-r16 是否存在。 */
    SL_FailureList_r16 sl_FailureList_r16; /**< ASN.1 sl-FailureList-r16；SEQUENCE OF SL_Failure_r16，SIZE (1..32)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SidelinkUEInformationNR_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SidelinkUEInformationNR_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1971 行。
 * @note SEQUENCE { }
 */
struct SidelinkUEInformationNR_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SidelinkUEInformationNR_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1969 行。
 * @note CHOICE { sidelinkUEInformationNR-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SidelinkUEInformationNR_r16_CriticalExtensions_Tag {
    SidelinkUEInformationNR_r16_CriticalExtensions_Tag_sidelinkUEInformationNR_r16 = 0, /**< ASN.1 sidelinkUEInformationNR-r16 */
    SidelinkUEInformationNR_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SidelinkUEInformationNR_r16_CriticalExtensions_Tag;

struct SidelinkUEInformationNR_r16_CriticalExtensions {
    SidelinkUEInformationNR_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SidelinkUEInformationNR_r16_IEs sidelinkUEInformationNR_r16; /**< ASN.1 sidelinkUEInformationNR-r16 */
        SidelinkUEInformationNR_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SidelinkUEInformationNR_r16
 * @note ASN.1：SidelinkUEInformationNR-r16；源文件第 1968 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_SidelinkUEInformationNR_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note SidelinkUEInformationNR-r16 ::= SEQUENCE { criticalExtensions }
 */
struct SidelinkUEInformationNR_r16 {
    SidelinkUEInformationNR_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SL_TxInterestedFreqList_r16
 * @note ASN.1：SL-TxInterestedFreqList-r16；源文件第 2106 行。
 * @note SL-TxInterestedFreqList-r16 ::= SEQUENCE OF (size 1..8) OF SLTxInterestedFreqListR16Item
 */
struct SL_TxInterestedFreqList_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_TxResourceReq_r16
 * @note ASN.1：SL-TxResourceReq-r16；源文件第 2009 行。
 * @note SL-TxResourceReq-r16 ::= SEQUENCE { sl-DestinationIdentity-r16, sl-CastType-r16, sl-RLC-ModeIndication...
 */
struct SL_TxResourceReq_r16 {
    SL_DestinationIdentity_r16 sl_DestinationIdentity_r16; /**< ASN.1 sl-DestinationIdentity-r16；SIZE (24)，定长。 */
    SL_TxResourceReq_r16_Sl_CastType_r16 sl_CastType_r16; /**< ASN.1 sl-CastType-r16；枚举。 */
    bool has_sl_RLC_ModeIndicationList_r16; /**< sl-RLC-ModeIndicationList-r16 是否存在。 */
    SL_RLC_ModeIndication_r16* sl_RLC_ModeIndicationList_r16_items; /**< ASN.1 sl-RLC-ModeIndicationList-r16；SEQUENCE OF SL_RLC_ModeIndication_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_ModeIndicationList_r16_count; /**< sl-RLC-ModeIndicationList-r16 元素个数。 */
    bool has_sl_QoS_InfoList_r16; /**< sl-QoS-InfoList-r16 是否存在。 */
    SL_QoS_Info_r16* sl_QoS_InfoList_r16_items; /**< ASN.1 sl-QoS-InfoList-r16；SEQUENCE OF SL_QoS_Info_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_QoS_InfoList_r16_count; /**< sl-QoS-InfoList-r16 元素个数。 */
    bool has_sl_TypeTxSyncList_r16; /**< sl-TypeTxSyncList-r16 是否存在。 */
    SL_TypeTxSync_r16* sl_TypeTxSyncList_r16_items; /**< ASN.1 sl-TypeTxSyncList-r16；SEQUENCE OF SL_TypeTxSync_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_TypeTxSyncList_r16_count; /**< sl-TypeTxSyncList-r16 元素个数。 */
    bool has_sl_TxInterestedFreqList_r16; /**< sl-TxInterestedFreqList-r16 是否存在。 */
    SL_TxInterestedFreqList_r16 sl_TxInterestedFreqList_r16; /**< ASN.1 sl-TxInterestedFreqList-r16；SEQUENCE OF int64_t，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_CapabilityInformationSidelink_r16; /**< sl-CapabilityInformationSidelink-r16 是否存在。 */
    OctetString sl_CapabilityInformationSidelink_r16; /**< ASN.1 sl-CapabilityInformationSidelink-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SL_TxResourceReq_v1700_ExtGroup1
 * @note ASN.1：SL_TxResourceReq_v1700_ExtGroup1；源文件第 2027 行。
 */
struct SL_TxResourceReq_v1700_ExtGroup1 {
    bool has_sl_QoS_InfoList_v1800; /**< sl-QoS-InfoList-v1800 是否存在。 */
    SL_QoS_Info_v1800* sl_QoS_InfoList_v1800_items; /**< ASN.1 sl-QoS-InfoList-v1800；SEQUENCE OF SL_QoS_Info_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_QoS_InfoList_v1800_count; /**< sl-QoS-InfoList-v1800 元素个数。 */
};


/**
 * @brief SL_TxResourceReq_v1700
 * @note ASN.1：SL-TxResourceReq-v1700；源文件第 2023 行。
 * @note SL-TxResourceReq-v1700 ::= SEQUENCE { sl-DRX-InfoFromRxList-r17, sl-DRX-Indication-r17, sl-QoS-InfoList-...
 */
struct SL_TxResourceReq_v1700 {
    bool has_sl_DRX_InfoFromRxList_r17; /**< sl-DRX-InfoFromRxList-r17 是否存在。 */
    SL_DRX_ConfigUC_SemiStatic_r17* sl_DRX_InfoFromRxList_r17_items; /**< ASN.1 sl-DRX-InfoFromRxList-r17；SEQUENCE OF SL_DRX_ConfigUC_SemiStatic_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DRX_InfoFromRxList_r17_count; /**< sl-DRX-InfoFromRxList-r17 元素个数。 */
    bool has_sl_DRX_Indication_r17; /**< sl-DRX-Indication-r17 是否存在。 */
    SL_TxResourceReq_v1700_Sl_DRX_Indication_r17 sl_DRX_Indication_r17; /**< ASN.1 sl-DRX-Indication-r17；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_TxResourceReq_v1700_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17
 * @note ASN.1：sl-drx-onDurationTimer-r17；源文件第 22329 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag {
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag;

struct SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17 {
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17
 * @note ASN.1：sl-drx-CycleStartOffset-r17；源文件第 22336 行。
 * @note CHOICE { ms10, ms20, ms32, ms40, ms60, ms64, ms70, ms80, ms128, ms160, ms256,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag {
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10 = 0, /**< ASN.1 ms10 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20 = 1, /**< ASN.1 ms20 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32 = 2, /**< ASN.1 ms32 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40 = 3, /**< ASN.1 ms40 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60 = 4, /**< ASN.1 ms60 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64 = 5, /**< ASN.1 ms64 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70 = 6, /**< ASN.1 ms70 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80 = 7, /**< ASN.1 ms80 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128 = 8, /**< ASN.1 ms128 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160 = 9, /**< ASN.1 ms160 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256 = 10, /**< ASN.1 ms256 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320 = 11, /**< ASN.1 ms320 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512 = 12, /**< ASN.1 ms512 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640 = 13, /**< ASN.1 ms640 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024 = 14, /**< ASN.1 ms1024 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280 = 15, /**< ASN.1 ms1280 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048 = 16, /**< ASN.1 ms2048 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560 = 17, /**< ASN.1 ms2560 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120 = 18, /**< ASN.1 ms5120 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240 = 19, /**< ASN.1 ms10240 */
} SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag;

struct SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17 {
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
 * @brief SL_DRX_ConfigUC_SemiStatic_r17
 * @note ASN.1：SL-DRX-ConfigUC-SemiStatic-r17；源文件第 22328 行。
 * @note SL-DRX-ConfigUC-SemiStatic-r17 ::= SEQUENCE { sl-drx-onDurationTimer-r17, sl-drx-CycleStartOffset-r17, sl-drx-Sl...
 */
struct SL_DRX_ConfigUC_SemiStatic_r17 {
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_onDurationTimer_r17 sl_drx_onDurationTimer_r17; /**< ASN.1 sl-drx-onDurationTimer-r17；结构体。 */
    SL_DRX_ConfigUC_SemiStatic_r17_Sl_drx_CycleStartOffset_r17 sl_drx_CycleStartOffset_r17; /**< ASN.1 sl-drx-CycleStartOffset-r17；结构体。 */
    int64_t sl_drx_SlotOffset_r17; /**< ASN.1 sl-drx-SlotOffset-r17；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief SL_RxDRX_Report_v1700
 * @note ASN.1：SL-RxDRX-Report-v1700；源文件第 2032 行。
 * @note SL-RxDRX-Report-v1700 ::= SEQUENCE { sl-DRX-ConfigFromTx-r17 }
 */
struct SL_RxDRX_Report_v1700 {
    SL_DRX_ConfigUC_SemiStatic_r17 sl_DRX_ConfigFromTx_r17; /**< ASN.1 sl-DRX-ConfigFromTx-r17；结构体。 */
};


/**
 * @brief SL_RxInterestedGC_BC_Dest_r17
 * @note ASN.1：SL-RxInterestedGC-BC-Dest-r17；源文件第 2038 行。
 * @note SL-RxInterestedGC-BC-Dest-r17 ::= SEQUENCE { sl-RxInterestedQoS-InfoList-r17, sl-DestinationIdentity-r16 }
 */
struct SL_RxInterestedGC_BC_Dest_r17 {
    SL_QoS_Info_r16* sl_RxInterestedQoS_InfoList_r17_items; /**< ASN.1 sl-RxInterestedQoS-InfoList-r17；SEQUENCE OF SL_QoS_Info_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_RxInterestedQoS_InfoList_r17_count; /**< sl-RxInterestedQoS-InfoList-r17 元素个数。 */
    SL_DestinationIdentity_r16 sl_DestinationIdentity_r16; /**< ASN.1 sl-DestinationIdentity-r16；SIZE (24)，定长。 */
};


/**
 * @brief SL_TxResourceReqDisc_r17
 * @note ASN.1：SL-TxResourceReqDisc-r17；源文件第 2045 行。
 * @note SL-TxResourceReqDisc-r17 ::= SEQUENCE { sl-DestinationIdentityDisc-r17, sl-SourceIdentityRelayUE-r17, sl-C...
 */
struct SL_TxResourceReqDisc_r17 {
    SL_DestinationIdentity_r16 sl_DestinationIdentityDisc_r17; /**< ASN.1 sl-DestinationIdentityDisc-r17；SIZE (24)，定长。 */
    bool has_sl_SourceIdentityRelayUE_r17; /**< sl-SourceIdentityRelayUE-r17 是否存在。 */
    SL_SourceIdentity_r17 sl_SourceIdentityRelayUE_r17; /**< ASN.1 sl-SourceIdentityRelayUE-r17；SIZE (24)，定长；OPTIONAL。 */
    SL_TxResourceReqDisc_r17_Sl_CastTypeDisc_r17 sl_CastTypeDisc_r17; /**< ASN.1 sl-CastTypeDisc-r17；枚举。 */
    SL_TxInterestedFreqList_r16 sl_TxInterestedFreqListDisc_r17; /**< ASN.1 sl-TxInterestedFreqListDisc-r17；SEQUENCE OF int64_t，SIZE (1..8)。 */
    SL_TypeTxSync_r16* sl_TypeTxSyncListDisc_r17_items; /**< ASN.1 sl-TypeTxSyncListDisc-r17；SEQUENCE OF SL_TypeTxSync_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_TypeTxSyncListDisc_r17_count; /**< sl-TypeTxSyncListDisc-r17 元素个数。 */
    SL_TxResourceReqDisc_r17_Sl_DiscoveryType_r17 sl_DiscoveryType_r17; /**< ASN.1 sl-DiscoveryType-r17；枚举。 */
};


/**
 * @brief SL_PagingIdentityRemoteUE_r17
 * @note ASN.1：SL-PagingIdentityRemoteUE-r17；源文件第 22656 行。
 * @note SL-PagingIdentityRemoteUE-r17 ::= SEQUENCE { ng-5G-S-TMSI-r17, fullI-RNTI-r17 }
 */
struct SL_PagingIdentityRemoteUE_r17 {
    NG_5G_S_TMSI ng_5G_S_TMSI_r17; /**< ASN.1 ng-5G-S-TMSI-r17；SIZE (48)，定长。 */
    bool has_fullI_RNTI_r17; /**< fullI-RNTI-r17 是否存在。 */
    I_RNTI_Value fullI_RNTI_r17; /**< ASN.1 fullI-RNTI-r17；SIZE (40)，定长；OPTIONAL。 */
};


/**
 * @brief SL_TxResourceReqL2U2N_Relay_r17
 * @note ASN.1：SL-TxResourceReqL2U2N-Relay-r17；源文件第 2067 行。
 * @note SL-TxResourceReqL2U2N-Relay-r17 ::= SEQUENCE { sl-DestinationIdentityL2U2N-r17, sl-TxInterestedFreqListL2U2N-r17,...
 */
struct SL_TxResourceReqL2U2N_Relay_r17 {
    bool has_sl_DestinationIdentityL2U2N_r17; /**< sl-DestinationIdentityL2U2N-r17 是否存在。 */
    SL_DestinationIdentity_r16 sl_DestinationIdentityL2U2N_r17; /**< ASN.1 sl-DestinationIdentityL2U2N-r17；SIZE (24)，定长；OPTIONAL。 */
    SL_TxInterestedFreqList_r16 sl_TxInterestedFreqListL2U2N_r17; /**< ASN.1 sl-TxInterestedFreqListL2U2N-r17；SEQUENCE OF int64_t，SIZE (1..8)。 */
    SL_TypeTxSync_r16* sl_TypeTxSyncListL2U2N_r17_items; /**< ASN.1 sl-TypeTxSyncListL2U2N-r17；SEQUENCE OF SL_TypeTxSync_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_TypeTxSyncListL2U2N_r17_count; /**< sl-TypeTxSyncListL2U2N-r17 元素个数。 */
    bool has_sl_LocalID_Request_r17; /**< sl-LocalID-Request-r17 是否存在。 */
    SL_TxResourceReqL2U2N_Relay_r17_Sl_LocalID_Request_r17 sl_LocalID_Request_r17; /**< ASN.1 sl-LocalID-Request-r17；枚举；OPTIONAL。 */
    bool has_sl_PagingIdentityRemoteUE_r17; /**< sl-PagingIdentityRemoteUE-r17 是否存在。 */
    SL_PagingIdentityRemoteUE_r17 sl_PagingIdentityRemoteUE_r17; /**< ASN.1 sl-PagingIdentityRemoteUE-r17；结构体；OPTIONAL。 */
    bool has_sl_CapabilityInformationSidelink_r17; /**< sl-CapabilityInformationSidelink-r17 是否存在。 */
    OctetString sl_CapabilityInformationSidelink_r17; /**< ASN.1 sl-CapabilityInformationSidelink-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SL_TxResourceReqCommRelay_r17
 * @note ASN.1：SL-TxResourceReqCommRelay-r17；源文件第 2062 行。
 * @note SL-TxResourceReqCommRelay-r17 ::= CHOICE { sl-TxResourceReqL2U2N-Relay-r17, sl-TxResourceReqL3U2N-Relay-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_TxResourceReqCommRelay_r17_Tag {
    SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL2U2N_Relay_r17 = 0, /**< ASN.1 sl-TxResourceReqL2U2N-Relay-r17 */
    SL_TxResourceReqCommRelay_r17_Tag_sl_TxResourceReqL3U2N_Relay_r17 = 1, /**< ASN.1 sl-TxResourceReqL3U2N-Relay-r17 */
} SL_TxResourceReqCommRelay_r17_Tag;

struct SL_TxResourceReqCommRelay_r17 {
    SL_TxResourceReqCommRelay_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_TxResourceReqL2U2N_Relay_r17 sl_TxResourceReqL2U2N_Relay_r17; /**< ASN.1 sl-TxResourceReqL2U2N-Relay-r17 */
        SL_TxResourceReq_r16 sl_TxResourceReqL3U2N_Relay_r17; /**< ASN.1 sl-TxResourceReqL3U2N-Relay-r17 */
    } u;
};


/**
 * @brief SL_TxResourceReqCommRelayInfo_r17
 * @note ASN.1：SL-TxResourceReqCommRelayInfo-r17；源文件第 2057 行。
 * @note SL-TxResourceReqCommRelayInfo-r17 ::= SEQUENCE { sl-RelayDRXConfig-r17, sl-TxResourceReqCommRelay-r17 }
 */
struct SL_TxResourceReqCommRelayInfo_r17 {
    bool has_sl_RelayDRXConfig_r17; /**< sl-RelayDRXConfig-r17 是否存在。 */
    SL_TxResourceReq_v1700 sl_RelayDRXConfig_r17; /**< ASN.1 sl-RelayDRXConfig-r17；结构体；OPTIONAL。 */
    SL_TxResourceReqCommRelay_r17 sl_TxResourceReqCommRelay_r17; /**< ASN.1 sl-TxResourceReqCommRelay-r17；结构体。 */
};


/**
 * @brief SL_TxResourceReqL2_U2U_r18
 * @note ASN.1：SL-TxResourceReqL2-U2U-r18；源文件第 2077 行。
 * @note SL-TxResourceReqL2-U2U-r18 ::= SEQUENCE { sl-DestinationIdentityL2-U2U-r18, sl-TxInterestedFreqListL2-U2U-r1...
 */
struct SL_TxResourceReqL2_U2U_r18 {
    bool has_sl_DestinationIdentityL2_U2U_r18; /**< sl-DestinationIdentityL2-U2U-r18 是否存在。 */
    SL_DestinationIdentity_r16 sl_DestinationIdentityL2_U2U_r18; /**< ASN.1 sl-DestinationIdentityL2-U2U-r18；SIZE (24)，定长；OPTIONAL。 */
    SL_TxInterestedFreqList_r16 sl_TxInterestedFreqListL2_U2U_r18; /**< ASN.1 sl-TxInterestedFreqListL2-U2U-r18；SEQUENCE OF int64_t，SIZE (1..8)。 */
    SL_TypeTxSync_r16* sl_TypeTxSyncListL2_U2U_r18_items; /**< ASN.1 sl-TypeTxSyncListL2-U2U-r18；SEQUENCE OF SL_TypeTxSync_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_TypeTxSyncListL2_U2U_r18_count; /**< sl-TypeTxSyncListL2-U2U-r18 元素个数。 */
    bool has_sl_CapabilityInformationSidelink_r18; /**< sl-CapabilityInformationSidelink-r18 是否存在。 */
    OctetString sl_CapabilityInformationSidelink_r18; /**< ASN.1 sl-CapabilityInformationSidelink-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sl_U2U_InfoList_r18; /**< sl-U2U-InfoList-r18 是否存在。 */
    SL_U2U_Info_r18* sl_U2U_InfoList_r18_items; /**< ASN.1 sl-U2U-InfoList-r18；SEQUENCE OF SL_U2U_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_U2U_InfoList_r18_count; /**< sl-U2U-InfoList-r18 元素个数。 */
};


/**
 * @brief SL_U2U_Info_r18_Sl_U2U_Identity_r18
 * @note ASN.1：sl-U2U-Identity-r18；源文件第 2087 行。
 * @note CHOICE { sl-TargetUE-Identity-r18, sl-SourceUE-Identity-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag {
    SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_TargetUE_Identity_r18 = 0, /**< ASN.1 sl-TargetUE-Identity-r18 */
    SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag_sl_SourceUE_Identity_r18 = 1, /**< ASN.1 sl-SourceUE-Identity-r18 */
} SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag;

struct SL_U2U_Info_r18_Sl_U2U_Identity_r18 {
    SL_U2U_Info_r18_Sl_U2U_Identity_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_DestinationIdentity_r16 sl_TargetUE_Identity_r18; /**< ASN.1 sl-TargetUE-Identity-r18 */
        SL_SourceIdentity_r17 sl_SourceUE_Identity_r18; /**< ASN.1 sl-SourceUE-Identity-r18 */
    } u;
};


/**
 * @brief SL_U2U_Info_r18
 * @note ASN.1：SL-U2U-Info-r18；源文件第 2086 行。
 * @note SL-U2U-Info-r18 ::= SEQUENCE { sl-U2U-Identity-r18, sl-E2E-QoS-InfoList-r18, sl-PerHop-QoS-InfoLi...
 */
struct SL_U2U_Info_r18 {
    SL_U2U_Info_r18_Sl_U2U_Identity_r18 sl_U2U_Identity_r18; /**< ASN.1 sl-U2U-Identity-r18；结构体。 */
    bool has_sl_E2E_QoS_InfoList_r18; /**< sl-E2E-QoS-InfoList-r18 是否存在。 */
    SL_QoS_Info_r16* sl_E2E_QoS_InfoList_r18_items; /**< ASN.1 sl-E2E-QoS-InfoList-r18；SEQUENCE OF SL_QoS_Info_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_E2E_QoS_InfoList_r18_count; /**< sl-E2E-QoS-InfoList-r18 元素个数。 */
    bool has_sl_PerHop_QoS_InfoList_r18; /**< sl-PerHop-QoS-InfoList-r18 是否存在。 */
    SL_SplitQoS_Info_r18* sl_PerHop_QoS_InfoList_r18_items; /**< ASN.1 sl-PerHop-QoS-InfoList-r18；SEQUENCE OF SL_SplitQoS_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PerHop_QoS_InfoList_r18_count; /**< sl-PerHop-QoS-InfoList-r18 元素个数。 */
    bool has_sl_PerSLRB_QoS_InfoList_r18; /**< sl-PerSLRB-QoS-InfoList-r18 是否存在。 */
    SL_PerSLRB_QoS_Info_r18* sl_PerSLRB_QoS_InfoList_r18_items; /**< ASN.1 sl-PerSLRB-QoS-InfoList-r18；SEQUENCE OF SL_PerSLRB_QoS_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PerSLRB_QoS_InfoList_r18_count; /**< sl-PerSLRB-QoS-InfoList-r18 元素个数。 */
};


/**
 * @brief SL_PosTxResourceReq_r18
 * @note ASN.1：SL-PosTxResourceReq-r18；源文件第 2096 行。
 * @note SL-PosTxResourceReq-r18 ::= SEQUENCE { sl-PosDestinationIdentity-r18, sl-PosCastType-r18, sl-PosTxInteres...
 */
struct SL_PosTxResourceReq_r18 {
    SL_DestinationIdentity_r16 sl_PosDestinationIdentity_r18; /**< ASN.1 sl-PosDestinationIdentity-r18；SIZE (24)，定长。 */
    SL_PosTxResourceReq_r18_Sl_PosCastType_r18 sl_PosCastType_r18; /**< ASN.1 sl-PosCastType-r18；枚举。 */
    bool has_sl_PosTxInterestedFreqList_r18; /**< sl-PosTxInterestedFreqList-r18 是否存在。 */
    SL_TxInterestedFreqList_r16 sl_PosTxInterestedFreqList_r18; /**< ASN.1 sl-PosTxInterestedFreqList-r18；SEQUENCE OF int64_t，SIZE (1..8)；OPTIONAL。 */
    bool has_sl_PosTypeTxSyncList_r18; /**< sl-PosTypeTxSyncList-r18 是否存在。 */
    SL_TypeTxSync_r16* sl_PosTypeTxSyncList_r18_items; /**< ASN.1 sl-PosTypeTxSyncList-r18；SEQUENCE OF SL_TypeTxSync_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PosTypeTxSyncList_r18_count; /**< sl-PosTypeTxSyncList-r18 元素个数。 */
    bool has_sl_PosQoS_InfoList_r18; /**< sl-PosQoS-InfoList-r18 是否存在。 */
    SL_PRS_QoS_Info_r18* sl_PosQoS_InfoList_r18_items; /**< ASN.1 sl-PosQoS-InfoList-r18；SEQUENCE OF SL_PRS_QoS_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PosQoS_InfoList_r18_count; /**< sl-PosQoS-InfoList-r18 元素个数。 */
    bool has_sl_CapabilityInformationSidelink_r18; /**< sl-CapabilityInformationSidelink-r18 是否存在。 */
    OctetString sl_CapabilityInformationSidelink_r18; /**< ASN.1 sl-CapabilityInformationSidelink-r18；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief SL_PQI_r16_Sl_Non_StandardizedPQI_r16
 * @note ASN.1：sl-Non-StandardizedPQI-r16；源文件第 22830 行。
 * @note SEQUENCE { sl-ResourceType-r16, sl-PriorityLevel-r16, sl-PacketDelayBudget-r1...
 */
struct SL_PQI_r16_Sl_Non_StandardizedPQI_r16 {
    bool has_sl_ResourceType_r16; /**< sl-ResourceType-r16 是否存在。 */
    SL_PQI_r16_Sl_Non_StandardizedPQI_r16_Sl_ResourceType_r16 sl_ResourceType_r16; /**< ASN.1 sl-ResourceType-r16；枚举；OPTIONAL。 */
    bool has_sl_PriorityLevel_r16; /**< sl-PriorityLevel-r16 是否存在。 */
    int64_t sl_PriorityLevel_r16; /**< ASN.1 sl-PriorityLevel-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PacketDelayBudget_r16; /**< sl-PacketDelayBudget-r16 是否存在。 */
    int64_t sl_PacketDelayBudget_r16; /**< ASN.1 sl-PacketDelayBudget-r16；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_sl_PacketErrorRate_r16; /**< sl-PacketErrorRate-r16 是否存在。 */
    int64_t sl_PacketErrorRate_r16; /**< ASN.1 sl-PacketErrorRate-r16；INTEGER (0..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_AveragingWindow_r16; /**< sl-AveragingWindow-r16 是否存在。 */
    int64_t sl_AveragingWindow_r16; /**< ASN.1 sl-AveragingWindow-r16；INTEGER (0..4095)，位宽 12 bit；OPTIONAL。 */
    bool has_sl_MaxDataBurstVolume_r16; /**< sl-MaxDataBurstVolume-r16 是否存在。 */
    int64_t sl_MaxDataBurstVolume_r16; /**< ASN.1 sl-MaxDataBurstVolume-r16；INTEGER (0..4095)，位宽 12 bit；OPTIONAL。 */
};


/**
 * @brief SL_PQI_r16
 * @note ASN.1：SL-PQI-r16；源文件第 22828 行。
 * @note SL-PQI-r16 ::= CHOICE { sl-StandardizedPQI-r16, sl-Non-StandardizedPQI-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_PQI_r16_Tag {
    SL_PQI_r16_Tag_sl_StandardizedPQI_r16 = 0, /**< ASN.1 sl-StandardizedPQI-r16 */
    SL_PQI_r16_Tag_sl_Non_StandardizedPQI_r16 = 1, /**< ASN.1 sl-Non-StandardizedPQI-r16 */
} SL_PQI_r16_Tag;

struct SL_PQI_r16 {
    SL_PQI_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl_StandardizedPQI_r16; /**< ASN.1 sl-StandardizedPQI-r16 */
        SL_PQI_r16_Sl_Non_StandardizedPQI_r16 sl_Non_StandardizedPQI_r16; /**< ASN.1 sl-Non-StandardizedPQI-r16 */
    } u;
};


/**
 * @brief SL_QoS_Profile_r16
 * @note ASN.1：SL-QoS-Profile-r16；源文件第 22820 行。
 * @note SL-QoS-Profile-r16 ::= SEQUENCE { sl-PQI-r16, sl-GFBR-r16, sl-MFBR-r16, sl-Range-r16 }
 */
struct SL_QoS_Profile_r16 {
    bool has_sl_PQI_r16; /**< sl-PQI-r16 是否存在。 */
    SL_PQI_r16 sl_PQI_r16; /**< ASN.1 sl-PQI-r16；结构体；OPTIONAL。 */
    bool has_sl_GFBR_r16; /**< sl-GFBR-r16 是否存在。 */
    int64_t sl_GFBR_r16; /**< ASN.1 sl-GFBR-r16；INTEGER (0..4000000000)，位宽 32 bit；OPTIONAL。 */
    bool has_sl_MFBR_r16; /**< sl-MFBR-r16 是否存在。 */
    int64_t sl_MFBR_r16; /**< ASN.1 sl-MFBR-r16；INTEGER (0..4000000000)，位宽 32 bit；OPTIONAL。 */
    bool has_sl_Range_r16; /**< sl-Range-r16 是否存在。 */
    int64_t sl_Range_r16; /**< ASN.1 sl-Range-r16；INTEGER (1..1000)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief SL_QoS_Info_r16
 * @note ASN.1：SL-QoS-Info-r16；源文件第 2108 行。
 * @note SL-QoS-Info-r16 ::= SEQUENCE { sl-QoS-FlowIdentity-r16, sl-QoS-Profile-r16 }
 */
struct SL_QoS_Info_r16 {
    SL_QoS_FlowIdentity_r16 sl_QoS_FlowIdentity_r16; /**< ASN.1 sl-QoS-FlowIdentity-r16；INTEGER (1..2048)，位宽 11 bit。 */
    bool has_sl_QoS_Profile_r16; /**< sl-QoS-Profile-r16 是否存在。 */
    SL_QoS_Profile_r16 sl_QoS_Profile_r16; /**< ASN.1 sl-QoS-Profile-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_QoS_Info_v1800
 * @note ASN.1：SL-QoS-Info-v1800；源文件第 2113 行。
 * @note SL-QoS-Info-v1800 ::= SEQUENCE { sl-TxInterestedFreqList-r18, sl-TxProfile-r18 }
 */
struct SL_QoS_Info_v1800 {
    SL_TxInterestedFreqList_r16 sl_TxInterestedFreqList_r18; /**< ASN.1 sl-TxInterestedFreqList-r18；SEQUENCE OF int64_t，SIZE (1..8)。 */
    bool has_sl_TxProfile_r18; /**< sl-TxProfile-r18 是否存在。 */
    SL_TxProfile_r18 sl_TxProfile_r18; /**< ASN.1 sl-TxProfile-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SL_RLC_ModeIndication_r16_Sl_Mode_r16
 * @note ASN.1：sl-Mode-r16；源文件第 2122 行。
 * @note CHOICE { sl-AM-Mode-r16, sl-UM-Mode-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag {
    SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_AM_Mode_r16 = 0, /**< ASN.1 sl-AM-Mode-r16 */
    SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag_sl_UM_Mode_r16 = 1, /**< ASN.1 sl-UM-Mode-r16 */
} SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag;

struct SL_RLC_ModeIndication_r16_Sl_Mode_r16 {
    SL_RLC_ModeIndication_r16_Sl_Mode_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null sl_AM_Mode_r16; /**< ASN.1 sl-AM-Mode-r16 */
        Null sl_UM_Mode_r16; /**< ASN.1 sl-UM-Mode-r16 */
    } u;
};


/**
 * @brief SL_RLC_ModeIndication_r16
 * @note ASN.1：SL-RLC-ModeIndication-r16；源文件第 2121 行。
 * @note SL-RLC-ModeIndication-r16 ::= SEQUENCE { sl-Mode-r16, sl-QoS-InfoList-r16 }
 */
struct SL_RLC_ModeIndication_r16 {
    SL_RLC_ModeIndication_r16_Sl_Mode_r16 sl_Mode_r16; /**< ASN.1 sl-Mode-r16；结构体。 */
    SL_QoS_Info_r16* sl_QoS_InfoList_r16_items; /**< ASN.1 sl-QoS-InfoList-r16；SEQUENCE OF SL_QoS_Info_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_QoS_InfoList_r16_count; /**< sl-QoS-InfoList-r16 元素个数。 */
};


/**
 * @brief SL_Failure_r16
 * @note ASN.1：SL-Failure-r16；源文件第 2131 行。
 * @note SL-Failure-r16 ::= SEQUENCE { sl-DestinationIdentity-r16, sl-Failure-r16 }
 */
struct SL_Failure_r16 {
    SL_DestinationIdentity_r16 sl_DestinationIdentity_r16; /**< ASN.1 sl-DestinationIdentity-r16；SIZE (24)，定长。 */
    SL_Failure_r16_Sl_Failure_r16 sl_Failure_r16; /**< ASN.1 sl-Failure-r16；枚举。 */
};


/**
 * @brief SL_CarrierFailure_r18
 * @note ASN.1：SL-CarrierFailure-r18；源文件第 2138 行。
 * @note SL-CarrierFailure-r18 ::= SEQUENCE { sl-DestinationIdentity-r18, sl-CarrierFailure-r18 }
 */
struct SL_CarrierFailure_r18 {
    SL_DestinationIdentity_r16 sl_DestinationIdentity_r18; /**< ASN.1 sl-DestinationIdentity-r18；SIZE (24)，定长。 */
    int64_t* sl_CarrierFailure_r18_items; /**< ASN.1 sl-CarrierFailure-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_CarrierFailure_r18_count; /**< sl-CarrierFailure-r18 元素个数。 */
};


/**
 * @brief SL_SplitQoS_Info_r18
 * @note ASN.1：SL-SplitQoS-Info-r18；源文件第 2143 行。
 * @note SL-SplitQoS-Info-r18 ::= SEQUENCE { sl-QoS-FlowIdentity-r18, sl-SplitPacketDelayBudget-r18 }
 */
struct SL_SplitQoS_Info_r18 {
    SL_QoS_FlowIdentity_r16 sl_QoS_FlowIdentity_r18; /**< ASN.1 sl-QoS-FlowIdentity-r18；INTEGER (1..2048)，位宽 11 bit。 */
    bool has_sl_SplitPacketDelayBudget_r18; /**< sl-SplitPacketDelayBudget-r18 是否存在。 */
    int64_t sl_SplitPacketDelayBudget_r18; /**< ASN.1 sl-SplitPacketDelayBudget-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief SL_PerSLRB_QoS_Info_r18
 * @note ASN.1：SL-PerSLRB-QoS-Info-r18；源文件第 2149 行。
 * @note SL-PerSLRB-QoS-Info-r18 ::= SEQUENCE { sl-RemoteUE-SLRB-Identity-r18, sl-QoS-ProfilePerSLRB-r18 }
 */
struct SL_PerSLRB_QoS_Info_r18 {
    SLRB_Uu_ConfigIndex_r16 sl_RemoteUE_SLRB_Identity_r18; /**< ASN.1 sl-RemoteUE-SLRB-Identity-r18；INTEGER (1..512)，位宽 9 bit。 */
    bool has_sl_QoS_ProfilePerSLRB_r18; /**< sl-QoS-ProfilePerSLRB-r18 是否存在。 */
    SL_QoS_Profile_r16 sl_QoS_ProfilePerSLRB_r18; /**< ASN.1 sl-QoS-ProfilePerSLRB-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_PRS_QoS_Info_r18
 * @note ASN.1：SL-PRS-QoS-Info-r18；源文件第 2154 行。
 * @note SL-PRS-QoS-Info-r18 ::= SEQUENCE { sl-PRS-Priority-r18, sl-PRS-DelayBudget-r18 }
 */
struct SL_PRS_QoS_Info_r18 {
    bool has_sl_PRS_Priority_r18; /**< sl-PRS-Priority-r18 是否存在。 */
    int64_t sl_PRS_Priority_r18; /**< ASN.1 sl-PRS-Priority-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PRS_DelayBudget_r18; /**< sl-PRS-DelayBudget-r18 是否存在。 */
    int64_t sl_PRS_DelayBudget_r18; /**< ASN.1 sl-PRS-DelayBudget-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief SystemInformation_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2203 行。
 * @note SEQUENCE { }
 */
struct SystemInformation_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SystemInformation_IEs
 * @note ASN.1：SystemInformation-IEs；源文件第 2173 行。
 * @note SystemInformation-IEs ::= SEQUENCE { sib-TypeAndInfo, lateNonCriticalExtension, nonCriticalExtension }
 */
struct SystemInformation_IEs {
    SystemInformation_IEs_Sib_TypeAndInfo_Item* sib_TypeAndInfo_items; /**< ASN.1 sib-TypeAndInfo；SEQUENCE OF SystemInformation_IEs_Sib_TypeAndInfo_Item，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sib_TypeAndInfo_count; /**< sib-TypeAndInfo 元素个数。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    SystemInformation_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief PosSystemInformation_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 4187 行。
 * @note SEQUENCE { }
 */
struct PosSystemInformation_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief PosSystemInformation_r16_IEs
 * @note ASN.1：PosSystemInformation-r16-IEs；源文件第 4125 行。
 * @note PosSystemInformation-r16-IEs ::= SEQUENCE { posSIB-TypeAndInfo-r16, lateNonCriticalExtension, nonCriticalExten...
 */
struct PosSystemInformation_r16_IEs {
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item* posSIB_TypeAndInfo_r16_items; /**< ASN.1 posSIB-TypeAndInfo-r16；SEQUENCE OF PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t posSIB_TypeAndInfo_r16_count; /**< posSIB-TypeAndInfo-r16 元素个数。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    PosSystemInformation_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture-r16/criticalExtensionsFuture；源文件第 2168 行。
 * @note SEQUENCE { }
 */
struct SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief SystemInformation_CriticalExtensionsFuture_r16
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture-r16；源文件第 2166 行。
 * @note CHOICE { posSystemInformation-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SystemInformation_CriticalExtensionsFuture_r16_Tag {
    SystemInformation_CriticalExtensionsFuture_r16_Tag_posSystemInformation_r16 = 0, /**< ASN.1 posSystemInformation-r16 */
    SystemInformation_CriticalExtensionsFuture_r16_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} SystemInformation_CriticalExtensionsFuture_r16_Tag;

struct SystemInformation_CriticalExtensionsFuture_r16 {
    SystemInformation_CriticalExtensionsFuture_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PosSystemInformation_r16_IEs posSystemInformation_r16; /**< ASN.1 posSystemInformation-r16 */
        SystemInformation_CriticalExtensionsFuture_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief SystemInformation_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 2164 行。
 * @note CHOICE { systemInformation, criticalExtensionsFuture-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SystemInformation_CriticalExtensions_Tag {
    SystemInformation_CriticalExtensions_Tag_systemInformation = 0, /**< ASN.1 systemInformation */
    SystemInformation_CriticalExtensions_Tag_criticalExtensionsFuture_r16 = 1, /**< ASN.1 criticalExtensionsFuture-r16 */
} SystemInformation_CriticalExtensions_Tag;

struct SystemInformation_CriticalExtensions {
    SystemInformation_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SystemInformation_IEs systemInformation; /**< ASN.1 systemInformation */
        SystemInformation_CriticalExtensionsFuture_r16 criticalExtensionsFuture_r16; /**< ASN.1 criticalExtensionsFuture-r16 */
    } u;
};


/**
 * @brief SystemInformation
 * @note ASN.1：SystemInformation；源文件第 2163 行。
 * @note 实际消息：ChannelType_BCCH_DL_SCH；MessageKind_SystemInformation（包装位 2 级，入口 2 个 CHOICE）。
 * @note SystemInformation ::= SEQUENCE { criticalExtensions }
 */
struct SystemInformation {
    SystemInformation_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief DelayBudgetReport
 * @note ASN.1：DelayBudgetReport；源文件第 2222 行。
 * @note DelayBudgetReport ::= CHOICE { type1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DelayBudgetReport_Tag {
    DelayBudgetReport_Tag_type1 = 0, /**< ASN.1 type1 */
} DelayBudgetReport_Tag;

struct DelayBudgetReport {
    DelayBudgetReport_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        DelayBudgetReport_Type1 type1; /**< ASN.1 type1 */
    } u;
};


/**
 * @brief ReducedMaxBW_FRx_r16
 * @note ASN.1：ReducedMaxBW-FRx-r16；源文件第 2487 行。
 * @note ReducedMaxBW-FRx-r16 ::= SEQUENCE { reducedBW-DL-r16, reducedBW-UL-r16 }
 */
struct ReducedMaxBW_FRx_r16 {
    ReducedAggregatedBandwidth reducedBW_DL_r16; /**< ASN.1 reducedBW-DL-r16；枚举。 */
    ReducedAggregatedBandwidth reducedBW_UL_r16; /**< ASN.1 reducedBW-UL-r16；枚举。 */
};


/**
 * @brief ReducedMaxCCs_r16
 * @note ASN.1：ReducedMaxCCs-r16；源文件第 2492 行。
 * @note ReducedMaxCCs-r16 ::= SEQUENCE { reducedCCsDL-r16, reducedCCsUL-r16 }
 */
struct ReducedMaxCCs_r16 {
    int64_t reducedCCsDL_r16; /**< ASN.1 reducedCCsDL-r16；INTEGER (0..31)，位宽 5 bit。 */
    int64_t reducedCCsUL_r16; /**< ASN.1 reducedCCsUL-r16；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief OverheatingAssistance_ReducedMaxMIMO_LayersFR1
 * @note ASN.1：reducedMaxMIMO-LayersFR1；源文件第 2238 行。
 * @note SEQUENCE { reducedMIMO-LayersFR1-DL, reducedMIMO-LayersFR1-UL }
 */
struct OverheatingAssistance_ReducedMaxMIMO_LayersFR1 {
    MIMO_LayersDL reducedMIMO_LayersFR1_DL; /**< ASN.1 reducedMIMO-LayersFR1-DL；枚举。 */
    MIMO_LayersUL reducedMIMO_LayersFR1_UL; /**< ASN.1 reducedMIMO-LayersFR1-UL；枚举。 */
};


/**
 * @brief OverheatingAssistance_ReducedMaxMIMO_LayersFR2
 * @note ASN.1：reducedMaxMIMO-LayersFR2；源文件第 2242 行。
 * @note SEQUENCE { reducedMIMO-LayersFR2-DL, reducedMIMO-LayersFR2-UL }
 */
struct OverheatingAssistance_ReducedMaxMIMO_LayersFR2 {
    MIMO_LayersDL reducedMIMO_LayersFR2_DL; /**< ASN.1 reducedMIMO-LayersFR2-DL；枚举。 */
    MIMO_LayersUL reducedMIMO_LayersFR2_UL; /**< ASN.1 reducedMIMO-LayersFR2-UL；枚举。 */
};


/**
 * @brief OverheatingAssistance
 * @note ASN.1：OverheatingAssistance；源文件第 2234 行。
 * @note OverheatingAssistance ::= SEQUENCE { reducedMaxCCs, reducedMaxBW-FR1, reducedMaxBW-FR2, reducedMaxMIMO-...
 */
struct OverheatingAssistance {
    bool has_reducedMaxCCs; /**< reducedMaxCCs 是否存在。 */
    ReducedMaxCCs_r16 reducedMaxCCs; /**< ASN.1 reducedMaxCCs；结构体；OPTIONAL。 */
    bool has_reducedMaxBW_FR1; /**< reducedMaxBW-FR1 是否存在。 */
    ReducedMaxBW_FRx_r16 reducedMaxBW_FR1; /**< ASN.1 reducedMaxBW-FR1；结构体；OPTIONAL。 */
    bool has_reducedMaxBW_FR2; /**< reducedMaxBW-FR2 是否存在。 */
    ReducedMaxBW_FRx_r16 reducedMaxBW_FR2; /**< ASN.1 reducedMaxBW-FR2；结构体；OPTIONAL。 */
    bool has_reducedMaxMIMO_LayersFR1; /**< reducedMaxMIMO-LayersFR1 是否存在。 */
    OverheatingAssistance_ReducedMaxMIMO_LayersFR1 reducedMaxMIMO_LayersFR1; /**< ASN.1 reducedMaxMIMO-LayersFR1；结构体；OPTIONAL。 */
    bool has_reducedMaxMIMO_LayersFR2; /**< reducedMaxMIMO-LayersFR2 是否存在。 */
    OverheatingAssistance_ReducedMaxMIMO_LayersFR2 reducedMaxMIMO_LayersFR2; /**< ASN.1 reducedMaxMIMO-LayersFR2；结构体；OPTIONAL。 */
};


/**
 * @brief OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17
 * @note ASN.1：reducedMaxBW-FR2-2-r17；源文件第 2248 行。
 * @note SEQUENCE { reducedBW-FR2-2-DL-r17, reducedBW-FR2-2-UL-r17 }
 */
struct OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17 {
    ReducedAggregatedBandwidth_r17 reducedBW_FR2_2_DL_r17; /**< ASN.1 reducedBW-FR2-2-DL-r17；枚举。 */
    ReducedAggregatedBandwidth_r17 reducedBW_FR2_2_UL_r17; /**< ASN.1 reducedBW-FR2-2-UL-r17；枚举。 */
};


/**
 * @brief OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2
 * @note ASN.1：reducedMaxMIMO-LayersFR2-2；源文件第 2252 行。
 * @note SEQUENCE { reducedMIMO-LayersFR2-2-DL, reducedMIMO-LayersFR2-2-UL }
 */
struct OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2 {
    MIMO_LayersDL reducedMIMO_LayersFR2_2_DL; /**< ASN.1 reducedMIMO-LayersFR2-2-DL；枚举。 */
    MIMO_LayersUL reducedMIMO_LayersFR2_2_UL; /**< ASN.1 reducedMIMO-LayersFR2-2-UL；枚举。 */
};


/**
 * @brief OverheatingAssistance_r17
 * @note ASN.1：OverheatingAssistance-r17；源文件第 2247 行。
 * @note OverheatingAssistance-r17 ::= SEQUENCE { reducedMaxBW-FR2-2-r17, reducedMaxMIMO-LayersFR2-2 }
 */
struct OverheatingAssistance_r17 {
    bool has_reducedMaxBW_FR2_2_r17; /**< reducedMaxBW-FR2-2-r17 是否存在。 */
    OverheatingAssistance_r17_ReducedMaxBW_FR2_2_r17 reducedMaxBW_FR2_2_r17; /**< ASN.1 reducedMaxBW-FR2-2-r17；结构体；OPTIONAL。 */
    bool has_reducedMaxMIMO_LayersFR2_2; /**< reducedMaxMIMO-LayersFR2-2 是否存在。 */
    OverheatingAssistance_r17_ReducedMaxMIMO_LayersFR2_2 reducedMaxMIMO_LayersFR2_2; /**< ASN.1 reducedMaxMIMO-LayersFR2-2；结构体；OPTIONAL。 */
};


/**
 * @brief MUSIM_GapPriorityPreferenceList_r18
 * @note ASN.1：MUSIM-GapPriorityPreferenceList-r18；源文件第 2431 行。
 * @note MUSIM-GapPriorityPreferenceList-r18 ::= SEQUENCE OF (size 1..3) OF GapPriority-r17
 */
struct MUSIM_GapPriorityPreferenceList_r18 {
    GapPriority_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_CellToRelease_r18
 * @note ASN.1：MUSIM-CellToRelease-r18；源文件第 2446 行。
 * @note MUSIM-CellToRelease-r18 ::= SEQUENCE OF (size 1..32) OF SCellIndex
 */
struct MUSIM_CellToRelease_r18 {
    SCellIndex* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_Cell_SCG_ToRelease_r18
 * @note ASN.1：MUSIM-Cell-SCG-ToRelease-r18；源文件第 2441 行。
 * @note MUSIM-Cell-SCG-ToRelease-r18 ::= SEQUENCE { musim-CellToRelease-r18, scg-ReleasePreference-r18 }
 */
struct MUSIM_Cell_SCG_ToRelease_r18 {
    bool has_musim_CellToRelease_r18; /**< musim-CellToRelease-r18 是否存在。 */
    MUSIM_CellToRelease_r18 musim_CellToRelease_r18; /**< ASN.1 musim-CellToRelease-r18；SEQUENCE OF SCellIndex，SIZE (1..32)；OPTIONAL。 */
    bool has_scg_ReleasePreference_r18; /**< scg-ReleasePreference-r18 是否存在。 */
    MUSIM_Cell_SCG_ToRelease_r18_Scg_ReleasePreference_r18 scg_ReleasePreference_r18; /**< ASN.1 scg-ReleasePreference-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MUSIM_CellToAffectList_r18
 * @note ASN.1：MUSIM-CellToAffectList-r18；源文件第 2448 行。
 * @note MUSIM-CellToAffectList-r18 ::= SEQUENCE OF (size 1..32) OF MUSIM-CellToAffect-r18
 */
struct MUSIM_CellToAffectList_r18 {
    MUSIM_CellToAffect_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_AffectedBandsList_r18
 * @note ASN.1：MUSIM-AffectedBandsList-r18；源文件第 2458 行。
 * @note MUSIM-AffectedBandsList-r18 ::= SEQUENCE OF (size 1..8) OF MUSIM-AffectedBands-r18
 */
struct MUSIM_AffectedBandsList_r18 {
    MUSIM_AffectedBands_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_AvoidedBandsList_r18
 * @note ASN.1：MUSIM-AvoidedBandsList-r18；源文件第 2472 行。
 * @note MUSIM-AvoidedBandsList-r18 ::= SEQUENCE OF (size 1..8) OF MUSIM-AvoidedBands-r18
 */
struct MUSIM_AvoidedBandsList_r18 {
    MUSIM_AvoidedBands_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_MaxCC_r18
 * @note ASN.1：MUSIM-MaxCC-r18；源文件第 2478 行。
 * @note MUSIM-MaxCC-r18 ::= SEQUENCE { musim-MaxCC-DL-r18, musim-MaxCC-UL-r18 }
 */
struct MUSIM_MaxCC_r18 {
    bool has_musim_MaxCC_DL_r18; /**< musim-MaxCC-DL-r18 是否存在。 */
    int64_t musim_MaxCC_DL_r18; /**< ASN.1 musim-MaxCC-DL-r18；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_musim_MaxCC_UL_r18; /**< musim-MaxCC-UL-r18 是否存在。 */
    int64_t musim_MaxCC_UL_r18; /**< ASN.1 musim-MaxCC-UL-r18；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief MUSIM_CapRestriction_r18
 * @note ASN.1：MUSIM-CapRestriction-r18；源文件第 2433 行。
 * @note MUSIM-CapRestriction-r18 ::= SEQUENCE { musim-Cell-SCG-ToRelease-r18, musim-CellToAffectList-r18, musim-Af...
 */
struct MUSIM_CapRestriction_r18 {
    bool has_musim_Cell_SCG_ToRelease_r18; /**< musim-Cell-SCG-ToRelease-r18 是否存在。 */
    MUSIM_Cell_SCG_ToRelease_r18 musim_Cell_SCG_ToRelease_r18; /**< ASN.1 musim-Cell-SCG-ToRelease-r18；结构体；OPTIONAL。 */
    bool has_musim_CellToAffectList_r18; /**< musim-CellToAffectList-r18 是否存在。 */
    MUSIM_CellToAffectList_r18 musim_CellToAffectList_r18; /**< ASN.1 musim-CellToAffectList-r18；SEQUENCE OF MUSIM_CellToAffect_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_musim_AffectedBandsList_r18; /**< musim-AffectedBandsList-r18 是否存在。 */
    MUSIM_AffectedBandsList_r18 musim_AffectedBandsList_r18; /**< ASN.1 musim-AffectedBandsList-r18；SEQUENCE OF MUSIM_AffectedBands_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_musim_AvoidedBandsList_r18; /**< musim-AvoidedBandsList-r18 是否存在。 */
    MUSIM_AvoidedBandsList_r18 musim_AvoidedBandsList_r18; /**< ASN.1 musim-AvoidedBandsList-r18；SEQUENCE OF MUSIM_AvoidedBands_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_musim_MaxCC_r18; /**< musim-MaxCC-r18 是否存在。 */
    MUSIM_MaxCC_r18 musim_MaxCC_r18; /**< ASN.1 musim-MaxCC-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MUSIM_Assistance_v1800
 * @note ASN.1：MUSIM-Assistance-v1800；源文件第 2424 行。
 * @note MUSIM-Assistance-v1800 ::= SEQUENCE { musim-GapPriorityPreferenceList-r18, musim-GapKeepPreference-r18, ...
 */
struct MUSIM_Assistance_v1800 {
    bool has_musim_GapPriorityPreferenceList_r18; /**< musim-GapPriorityPreferenceList-r18 是否存在。 */
    MUSIM_GapPriorityPreferenceList_r18 musim_GapPriorityPreferenceList_r18; /**< ASN.1 musim-GapPriorityPreferenceList-r18；SEQUENCE OF GapPriority_r17，SIZE (1..3)；OPTIONAL。 */
    bool has_musim_GapKeepPreference_r18; /**< musim-GapKeepPreference-r18 是否存在。 */
    MUSIM_Assistance_v1800_Musim_GapKeepPreference_r18 musim_GapKeepPreference_r18; /**< ASN.1 musim-GapKeepPreference-r18；枚举；OPTIONAL。 */
    bool has_musim_CapRestriction_r18; /**< musim-CapRestriction-r18 是否存在。 */
    MUSIM_CapRestriction_r18 musim_CapRestriction_r18; /**< ASN.1 musim-CapRestriction-r18；结构体；OPTIONAL。 */
    bool has_musim_NeedForGapsInfoNR_r18; /**< musim-NeedForGapsInfoNR-r18 是否存在。 */
    NeedForGapsInfoNR_r16 musim_NeedForGapsInfoNR_r18; /**< ASN.1 musim-NeedForGapsInfoNR-r18；结构体；OPTIONAL。 */
};


/**
 * @brief AffectedCarrierFreqRangeList_r18
 * @note ASN.1：AffectedCarrierFreqRangeList-r18；源文件第 2534 行。
 * @note AffectedCarrierFreqRangeList-r18 ::= SEQUENCE OF (size 1..128) OF AffectedCarrierFreqRange-r18
 */
struct AffectedCarrierFreqRangeList_r18 {
    AffectedCarrierFreqRange_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief AffectedCarrierFreqRangeCombList_r18
 * @note ASN.1：AffectedCarrierFreqRangeCombList-r18；源文件第 2541 行。
 * @note AffectedCarrierFreqRangeCombList-r18 ::= SEQUENCE OF (size 1..128) OF AffectedCarrierFreqRangeComb-r18
 */
struct AffectedCarrierFreqRangeCombList_r18 {
    AffectedCarrierFreqRangeComb_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IDC_FDM_Assistance_r18
 * @note ASN.1：IDC-FDM-Assistance-r18；源文件第 2512 行。
 * @note IDC-FDM-Assistance-r18 ::= SEQUENCE { affectedCarrierFreqRangeList-r18, affectedCarrierFreqRangeCombList...
 */
struct IDC_FDM_Assistance_r18 {
    bool has_affectedCarrierFreqRangeList_r18; /**< affectedCarrierFreqRangeList-r18 是否存在。 */
    AffectedCarrierFreqRangeList_r18 affectedCarrierFreqRangeList_r18; /**< ASN.1 affectedCarrierFreqRangeList-r18；SEQUENCE OF AffectedCarrierFreqRange_r18，SIZE (1..128)；OPTIONAL。 */
    bool has_affectedCarrierFreqRangeCombList_r18; /**< affectedCarrierFreqRangeCombList-r18 是否存在。 */
    AffectedCarrierFreqRangeCombList_r18 affectedCarrierFreqRangeCombList_r18; /**< ASN.1 affectedCarrierFreqRangeCombList-r18；SEQUENCE OF AffectedCarrierFreqRangeComb_r18，SIZE (1..128)；OPTIONAL。 */
};


/**
 * @brief IDC_TDM_Assistance_r18_ActiveDuration_r18
 * @note ASN.1：activeDuration-r18；源文件第 2524 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag {
    IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag;

struct IDC_TDM_Assistance_r18_ActiveDuration_r18 {
    IDC_TDM_Assistance_r18_ActiveDuration_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        IDC_TDM_Assistance_r18_ActiveDuration_r18_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief IDC_TDM_Assistance_r18
 * @note ASN.1：IDC-TDM-Assistance-r18；源文件第 2518 行。
 * @note IDC-TDM-Assistance-r18 ::= SEQUENCE { cycleLength-r18, startOffset-r18, slotOffset-r18, activeDuration-r...
 */
struct IDC_TDM_Assistance_r18 {
    IDC_TDM_Assistance_r18_CycleLength_r18 cycleLength_r18; /**< ASN.1 cycleLength-r18；枚举。 */
    int64_t startOffset_r18; /**< ASN.1 startOffset-r18；INTEGER (0..10239)，位宽 14 bit。 */
    int64_t slotOffset_r18; /**< ASN.1 slotOffset-r18；INTEGER (0..31)，位宽 5 bit。 */
    IDC_TDM_Assistance_r18_ActiveDuration_r18 activeDuration_r18; /**< ASN.1 activeDuration-r18；结构体。 */
};


/**
 * @brief UL_TrafficInfo_r18
 * @note ASN.1：UL-TrafficInfo-r18；源文件第 2557 行。
 * @note UL-TrafficInfo-r18 ::= SEQUENCE OF (size 1..256) OF PDU-SessionUL-TrafficInfo-r18
 */
struct UL_TrafficInfo_r18 {
    PDU_SessionUL_TrafficInfo_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_PRS_UE_AssistanceInformationNR_r18
 * @note ASN.1：SL-PRS-UE-AssistanceInformationNR-r18；源文件第 2587 行。
 * @note SL-PRS-UE-AssistanceInformationNR-r18 ::= SEQUENCE OF (size 1..64) OF SL-PRS-TxInfo-r18
 */
struct SL_PRS_UE_AssistanceInformationNR_r18 {
    SL_PRS_TxInfo_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UEAssistanceInformation_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2303 行。
 * @note SEQUENCE { }
 */
struct UEAssistanceInformation_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEAssistanceInformation_v1800_IEs
 * @note ASN.1：UEAssistanceInformation-v1800-IEs；源文件第 2294 行。
 * @note UEAssistanceInformation-v1800-IEs ::= SEQUENCE { idc-FDM-Assistance-r18, idc-TDM-Assistance-r18, multiRx-Preference...
 */
struct UEAssistanceInformation_v1800_IEs {
    bool has_idc_FDM_Assistance_r18; /**< idc-FDM-Assistance-r18 是否存在。 */
    IDC_FDM_Assistance_r18 idc_FDM_Assistance_r18; /**< ASN.1 idc-FDM-Assistance-r18；结构体；OPTIONAL。 */
    bool has_idc_TDM_Assistance_r18; /**< idc-TDM-Assistance-r18 是否存在。 */
    IDC_TDM_Assistance_r18 idc_TDM_Assistance_r18; /**< ASN.1 idc-TDM-Assistance-r18；结构体；OPTIONAL。 */
    bool has_multiRx_PreferenceFR2_r18; /**< multiRx-PreferenceFR2-r18 是否存在。 */
    UEAssistanceInformation_v1800_IEs_MultiRx_PreferenceFR2_r18 multiRx_PreferenceFR2_r18; /**< ASN.1 multiRx-PreferenceFR2-r18；枚举；OPTIONAL。 */
    bool has_musim_Assistance_v1800; /**< musim-Assistance-v1800 是否存在。 */
    MUSIM_Assistance_v1800 musim_Assistance_v1800; /**< ASN.1 musim-Assistance-v1800；结构体；OPTIONAL。 */
    bool has_flightPathInfoAvailable_r18; /**< flightPathInfoAvailable-r18 是否存在。 */
    UEAssistanceInformation_v1800_IEs_FlightPathInfoAvailable_r18 flightPathInfoAvailable_r18; /**< ASN.1 flightPathInfoAvailable-r18；枚举；OPTIONAL。 */
    bool has_ul_TrafficInfo_r18; /**< ul-TrafficInfo-r18 是否存在。 */
    UL_TrafficInfo_r18 ul_TrafficInfo_r18; /**< ASN.1 ul-TrafficInfo-r18；SEQUENCE OF PDU_SessionUL_TrafficInfo_r18，SIZE (1..256)；OPTIONAL。 */
    bool has_n3c_RelayUE_InfoList_r18; /**< n3c-RelayUE-InfoList-r18 是否存在。 */
    N3C_RelayUE_Info_r18* n3c_RelayUE_InfoList_r18_items; /**< ASN.1 n3c-RelayUE-InfoList-r18；SEQUENCE OF N3C_RelayUE_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t n3c_RelayUE_InfoList_r18_count; /**< n3c-RelayUE-InfoList-r18 元素个数。 */
    bool has_sl_PRS_UE_AssistanceInformationNR_r18; /**< sl-PRS-UE-AssistanceInformationNR-r18 是否存在。 */
    SL_PRS_UE_AssistanceInformationNR_r18 sl_PRS_UE_AssistanceInformationNR_r18; /**< ASN.1 sl-PRS-UE-AssistanceInformationNR-r18；SEQUENCE OF SL_PRS_TxInfo_r18，SIZE (1..64)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEAssistanceInformation_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17
 * @note ASN.1：reducedMaxBW-FR2-2-r17；源文件第 2362 行。
 * @note SEQUENCE { reducedBW-FR2-2-DL-r17, reducedBW-FR2-2-UL-r17 }
 */
struct MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17 {
    bool has_reducedBW_FR2_2_DL_r17; /**< reducedBW-FR2-2-DL-r17 是否存在。 */
    ReducedAggregatedBandwidth_r17 reducedBW_FR2_2_DL_r17; /**< ASN.1 reducedBW-FR2-2-DL-r17；枚举；OPTIONAL。 */
    bool has_reducedBW_FR2_2_UL_r17; /**< reducedBW-FR2-2-UL-r17 是否存在。 */
    ReducedAggregatedBandwidth_r17 reducedBW_FR2_2_UL_r17; /**< ASN.1 reducedBW-FR2-2-UL-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MaxBW_PreferenceFR2_2_r17
 * @note ASN.1：MaxBW-PreferenceFR2-2-r17；源文件第 2361 行。
 * @note MaxBW-PreferenceFR2-2-r17 ::= SEQUENCE { reducedMaxBW-FR2-2-r17 }
 */
struct MaxBW_PreferenceFR2_2_r17 {
    bool has_reducedMaxBW_FR2_2_r17; /**< reducedMaxBW-FR2-2-r17 是否存在。 */
    MaxBW_PreferenceFR2_2_r17_ReducedMaxBW_FR2_2_r17 reducedMaxBW_FR2_2_r17; /**< ASN.1 reducedMaxBW-FR2-2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17
 * @note ASN.1：reducedMaxMIMO-LayersFR2-2-r17；源文件第 2384 行。
 * @note SEQUENCE { reducedMIMO-LayersFR2-2-DL-r17, reducedMIMO-LayersFR2-2-UL-r17 }
 */
struct MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17 {
    int64_t reducedMIMO_LayersFR2_2_DL_r17; /**< ASN.1 reducedMIMO-LayersFR2-2-DL-r17；INTEGER (1..8)，位宽 3 bit。 */
    int64_t reducedMIMO_LayersFR2_2_UL_r17; /**< ASN.1 reducedMIMO-LayersFR2-2-UL-r17；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief MaxMIMO_LayerPreferenceFR2_2_r17
 * @note ASN.1：MaxMIMO-LayerPreferenceFR2-2-r17；源文件第 2383 行。
 * @note MaxMIMO-LayerPreferenceFR2-2-r17 ::= SEQUENCE { reducedMaxMIMO-LayersFR2-2-r17 }
 */
struct MaxMIMO_LayerPreferenceFR2_2_r17 {
    bool has_reducedMaxMIMO_LayersFR2_2_r17; /**< reducedMaxMIMO-LayersFR2-2-r17 是否存在。 */
    MaxMIMO_LayerPreferenceFR2_2_r17_ReducedMaxMIMO_LayersFR2_2_r17 reducedMaxMIMO_LayersFR2_2_r17; /**< ASN.1 reducedMaxMIMO-LayersFR2-2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17
 * @note ASN.1：preferredK0-r17；源文件第 2406 行。
 * @note SEQUENCE { preferredK0-SCS-480kHz-r17, preferredK0-SCS-960kHz-r17 }
 */
struct MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17 {
    bool has_preferredK0_SCS_480kHz_r17; /**< preferredK0-SCS-480kHz-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_480kHz_r17 preferredK0_SCS_480kHz_r17; /**< ASN.1 preferredK0-SCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_preferredK0_SCS_960kHz_r17; /**< preferredK0-SCS-960kHz-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17_PreferredK0_SCS_960kHz_r17 preferredK0_SCS_960kHz_r17; /**< ASN.1 preferredK0-SCS-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17
 * @note ASN.1：preferredK2-r17；源文件第 2410 行。
 * @note SEQUENCE { preferredK2-SCS-480kHz-r17, preferredK2-SCS-960kHz-r17 }
 */
struct MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17 {
    bool has_preferredK2_SCS_480kHz_r17; /**< preferredK2-SCS-480kHz-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_480kHz_r17 preferredK2_SCS_480kHz_r17; /**< ASN.1 preferredK2-SCS-480kHz-r17；枚举；OPTIONAL。 */
    bool has_preferredK2_SCS_960kHz_r17; /**< preferredK2-SCS-960kHz-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17_PreferredK2_SCS_960kHz_r17 preferredK2_SCS_960kHz_r17; /**< ASN.1 preferredK2-SCS-960kHz-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MinSchedulingOffsetPreferenceExt_r17
 * @note ASN.1：MinSchedulingOffsetPreferenceExt-r17；源文件第 2405 行。
 * @note MinSchedulingOffsetPreferenceExt-r17 ::= SEQUENCE { preferredK0-r17, preferredK2-r17 }
 */
struct MinSchedulingOffsetPreferenceExt_r17 {
    bool has_preferredK0_r17; /**< preferredK0-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK0_r17 preferredK0_r17; /**< ASN.1 preferredK0-r17；结构体；OPTIONAL。 */
    bool has_preferredK2_r17; /**< preferredK2-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17_PreferredK2_r17 preferredK2_r17; /**< ASN.1 preferredK2-r17；结构体；OPTIONAL。 */
};


/**
 * @brief MUSIM_GapPreferenceList_r17
 * @note ASN.1：MUSIM-GapPreferenceList-r17；源文件第 2421 行。
 * @note MUSIM-GapPreferenceList-r17 ::= SEQUENCE OF (size 1..4) OF MUSIM-GapInfo-r17
 */
struct MUSIM_GapPreferenceList_r17 {
    MUSIM_GapInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_Assistance_r17
 * @note ASN.1：MUSIM-Assistance-r17；源文件第 2416 行。
 * @note MUSIM-Assistance-r17 ::= SEQUENCE { musim-PreferredRRC-State-r17, musim-GapPreferenceList-r17 }
 */
struct MUSIM_Assistance_r17 {
    bool has_musim_PreferredRRC_State_r17; /**< musim-PreferredRRC-State-r17 是否存在。 */
    MUSIM_Assistance_r17_Musim_PreferredRRC_State_r17 musim_PreferredRRC_State_r17; /**< ASN.1 musim-PreferredRRC-State-r17；枚举；OPTIONAL。 */
    bool has_musim_GapPreferenceList_r17; /**< musim-GapPreferenceList-r17 是否存在。 */
    MUSIM_GapPreferenceList_r17 musim_GapPreferenceList_r17; /**< ASN.1 musim-GapPreferenceList-r17；SEQUENCE OF MUSIM_GapInfo_r17，SIZE (1..4)；OPTIONAL。 */
};


/**
 * @brief UL_GapFR2_Preference_r17
 * @note ASN.1：UL-GapFR2-Preference-r17；源文件第 2506 行。
 * @note UL-GapFR2-Preference-r17 ::= SEQUENCE { ul-GapFR2-PatternPreference-r17 }
 */
struct UL_GapFR2_Preference_r17 {
    bool has_ul_GapFR2_PatternPreference_r17; /**< ul-GapFR2-PatternPreference-r17 是否存在。 */
    int64_t ul_GapFR2_PatternPreference_r17; /**< ASN.1 ul-GapFR2-PatternPreference-r17；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
};


/**
 * @brief PropagationDelayDifference_r17
 * @note ASN.1：PropagationDelayDifference-r17；源文件第 2510 行。
 * @note PropagationDelayDifference-r17 ::= SEQUENCE OF (size 1..4) OF PropagationDelayDifferenceR17Item
 */
struct PropagationDelayDifference_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17
 * @note ASN.1：nonSDT-DataIndication-r17；源文件第 2284 行。
 * @note SEQUENCE { resumeCause-r17 }
 */
struct UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17 {
    bool has_resumeCause_r17; /**< resumeCause-r17 是否存在。 */
    ResumeCause resumeCause_r17; /**< ASN.1 resumeCause-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UEAssistanceInformation_v1700_IEs
 * @note ASN.1：UEAssistanceInformation-v1700-IEs；源文件第 2275 行。
 * @note UEAssistanceInformation-v1700-IEs ::= SEQUENCE { ul-GapFR2-Preference-r17, musim-Assistance-r17, overheatingAssista...
 */
struct UEAssistanceInformation_v1700_IEs {
    bool has_ul_GapFR2_Preference_r17; /**< ul-GapFR2-Preference-r17 是否存在。 */
    UL_GapFR2_Preference_r17 ul_GapFR2_Preference_r17; /**< ASN.1 ul-GapFR2-Preference-r17；结构体；OPTIONAL。 */
    bool has_musim_Assistance_r17; /**< musim-Assistance-r17 是否存在。 */
    MUSIM_Assistance_r17 musim_Assistance_r17; /**< ASN.1 musim-Assistance-r17；结构体；OPTIONAL。 */
    bool has_overheatingAssistance_r17; /**< overheatingAssistance-r17 是否存在。 */
    OverheatingAssistance_r17 overheatingAssistance_r17; /**< ASN.1 overheatingAssistance-r17；结构体；OPTIONAL。 */
    bool has_maxBW_PreferenceFR2_2_r17; /**< maxBW-PreferenceFR2-2-r17 是否存在。 */
    MaxBW_PreferenceFR2_2_r17 maxBW_PreferenceFR2_2_r17; /**< ASN.1 maxBW-PreferenceFR2-2-r17；结构体；OPTIONAL。 */
    bool has_maxMIMO_LayerPreferenceFR2_2_r17; /**< maxMIMO-LayerPreferenceFR2-2-r17 是否存在。 */
    MaxMIMO_LayerPreferenceFR2_2_r17 maxMIMO_LayerPreferenceFR2_2_r17; /**< ASN.1 maxMIMO-LayerPreferenceFR2-2-r17；结构体；OPTIONAL。 */
    bool has_minSchedulingOffsetPreferenceExt_r17; /**< minSchedulingOffsetPreferenceExt-r17 是否存在。 */
    MinSchedulingOffsetPreferenceExt_r17 minSchedulingOffsetPreferenceExt_r17; /**< ASN.1 minSchedulingOffsetPreferenceExt-r17；结构体；OPTIONAL。 */
    bool has_rlm_MeasRelaxationState_r17; /**< rlm-MeasRelaxationState-r17 是否存在。 */
    bool rlm_MeasRelaxationState_r17; /**< ASN.1 rlm-MeasRelaxationState-r17；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_bfd_MeasRelaxationState_r17; /**< bfd-MeasRelaxationState-r17 是否存在。 */
    BitString bfd_MeasRelaxationState_r17; /**< ASN.1 bfd-MeasRelaxationState-r17；SIZE (1..32)；OPTIONAL。 */
    bool has_nonSDT_DataIndication_r17; /**< nonSDT-DataIndication-r17 是否存在。 */
    UEAssistanceInformation_v1700_IEs_NonSDT_DataIndication_r17 nonSDT_DataIndication_r17; /**< ASN.1 nonSDT-DataIndication-r17；结构体；OPTIONAL。 */
    bool has_scg_DeactivationPreference_r17; /**< scg-DeactivationPreference-r17 是否存在。 */
    UEAssistanceInformation_v1700_IEs_Scg_DeactivationPreference_r17 scg_DeactivationPreference_r17; /**< ASN.1 scg-DeactivationPreference-r17；枚举；OPTIONAL。 */
    bool has_uplinkData_r17; /**< uplinkData-r17 是否存在。 */
    UEAssistanceInformation_v1700_IEs_UplinkData_r17 uplinkData_r17; /**< ASN.1 uplinkData-r17；枚举；OPTIONAL。 */
    bool has_rrm_MeasRelaxationFulfilment_r17; /**< rrm-MeasRelaxationFulfilment-r17 是否存在。 */
    bool rrm_MeasRelaxationFulfilment_r17; /**< ASN.1 rrm-MeasRelaxationFulfilment-r17；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_propagationDelayDifference_r17; /**< propagationDelayDifference-r17 是否存在。 */
    PropagationDelayDifference_r17 propagationDelayDifference_r17; /**< ASN.1 propagationDelayDifference-r17；SEQUENCE OF int64_t，SIZE (1..4)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEAssistanceInformation_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief AffectedCarrierFreqList_r16
 * @note ASN.1：AffectedCarrierFreqList-r16；源文件第 2312 行。
 * @note AffectedCarrierFreqList-r16 ::= SEQUENCE OF (size 1..128) OF AffectedCarrierFreq-r16
 */
struct AffectedCarrierFreqList_r16 {
    AffectedCarrierFreq_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief AffectedCarrierFreqCombList_r16
 * @note ASN.1：AffectedCarrierFreqCombList-r16；源文件第 2319 行。
 * @note AffectedCarrierFreqCombList-r16 ::= SEQUENCE OF (size 1..128) OF AffectedCarrierFreqComb-r16
 */
struct AffectedCarrierFreqCombList_r16 {
    AffectedCarrierFreqComb_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief IDC_Assistance_r16
 * @note ASN.1：IDC-Assistance-r16；源文件第 2306 行。
 * @note IDC-Assistance-r16 ::= SEQUENCE { affectedCarrierFreqList-r16, affectedCarrierFreqCombList-r16 }
 */
struct IDC_Assistance_r16 {
    bool has_affectedCarrierFreqList_r16; /**< affectedCarrierFreqList-r16 是否存在。 */
    AffectedCarrierFreqList_r16 affectedCarrierFreqList_r16; /**< ASN.1 affectedCarrierFreqList-r16；SEQUENCE OF AffectedCarrierFreq_r16，SIZE (1..128)；OPTIONAL。 */
    bool has_affectedCarrierFreqCombList_r16; /**< affectedCarrierFreqCombList-r16 是否存在。 */
    AffectedCarrierFreqCombList_r16 affectedCarrierFreqCombList_r16; /**< ASN.1 affectedCarrierFreqCombList-r16；SEQUENCE OF AffectedCarrierFreqComb_r16，SIZE (1..128)；OPTIONAL。 */
};


/**
 * @brief DRX_Preference_r16
 * @note ASN.1：DRX-Preference-r16；源文件第 2340 行。
 * @note DRX-Preference-r16 ::= SEQUENCE { preferredDRX-InactivityTimer-r16, preferredDRX-LongCycle-r16, pref...
 */
struct DRX_Preference_r16 {
    bool has_preferredDRX_InactivityTimer_r16; /**< preferredDRX-InactivityTimer-r16 是否存在。 */
    DRX_Preference_r16_PreferredDRX_InactivityTimer_r16 preferredDRX_InactivityTimer_r16; /**< ASN.1 preferredDRX-InactivityTimer-r16；枚举；OPTIONAL。 */
    bool has_preferredDRX_LongCycle_r16; /**< preferredDRX-LongCycle-r16 是否存在。 */
    DRX_Preference_r16_PreferredDRX_LongCycle_r16 preferredDRX_LongCycle_r16; /**< ASN.1 preferredDRX-LongCycle-r16；枚举；OPTIONAL。 */
    bool has_preferredDRX_ShortCycle_r16; /**< preferredDRX-ShortCycle-r16 是否存在。 */
    DRX_Preference_r16_PreferredDRX_ShortCycle_r16 preferredDRX_ShortCycle_r16; /**< ASN.1 preferredDRX-ShortCycle-r16；枚举；OPTIONAL。 */
    bool has_preferredDRX_ShortCycleTimer_r16; /**< preferredDRX-ShortCycleTimer-r16 是否存在。 */
    int64_t preferredDRX_ShortCycleTimer_r16; /**< ASN.1 preferredDRX-ShortCycleTimer-r16；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief MaxBW_Preference_r16
 * @note ASN.1：MaxBW-Preference-r16；源文件第 2356 行。
 * @note MaxBW-Preference-r16 ::= SEQUENCE { reducedMaxBW-FR1-r16, reducedMaxBW-FR2-r16 }
 */
struct MaxBW_Preference_r16 {
    bool has_reducedMaxBW_FR1_r16; /**< reducedMaxBW-FR1-r16 是否存在。 */
    ReducedMaxBW_FRx_r16 reducedMaxBW_FR1_r16; /**< ASN.1 reducedMaxBW-FR1-r16；结构体；OPTIONAL。 */
    bool has_reducedMaxBW_FR2_r16; /**< reducedMaxBW-FR2-r16 是否存在。 */
    ReducedMaxBW_FRx_r16 reducedMaxBW_FR2_r16; /**< ASN.1 reducedMaxBW-FR2-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MaxCC_Preference_r16
 * @note ASN.1：MaxCC-Preference-r16；源文件第 2368 行。
 * @note MaxCC-Preference-r16 ::= SEQUENCE { reducedMaxCCs-r16 }
 */
struct MaxCC_Preference_r16 {
    bool has_reducedMaxCCs_r16; /**< reducedMaxCCs-r16 是否存在。 */
    ReducedMaxCCs_r16 reducedMaxCCs_r16; /**< ASN.1 reducedMaxCCs-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16
 * @note ASN.1：reducedMaxMIMO-LayersFR1-r16；源文件第 2373 行。
 * @note SEQUENCE { reducedMIMO-LayersFR1-DL-r16, reducedMIMO-LayersFR1-UL-r16 }
 */
struct MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16 {
    int64_t reducedMIMO_LayersFR1_DL_r16; /**< ASN.1 reducedMIMO-LayersFR1-DL-r16；INTEGER (1..8)，位宽 3 bit。 */
    int64_t reducedMIMO_LayersFR1_UL_r16; /**< ASN.1 reducedMIMO-LayersFR1-UL-r16；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16
 * @note ASN.1：reducedMaxMIMO-LayersFR2-r16；源文件第 2377 行。
 * @note SEQUENCE { reducedMIMO-LayersFR2-DL-r16, reducedMIMO-LayersFR2-UL-r16 }
 */
struct MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16 {
    int64_t reducedMIMO_LayersFR2_DL_r16; /**< ASN.1 reducedMIMO-LayersFR2-DL-r16；INTEGER (1..8)，位宽 3 bit。 */
    int64_t reducedMIMO_LayersFR2_UL_r16; /**< ASN.1 reducedMIMO-LayersFR2-UL-r16；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief MaxMIMO_LayerPreference_r16
 * @note ASN.1：MaxMIMO-LayerPreference-r16；源文件第 2372 行。
 * @note MaxMIMO-LayerPreference-r16 ::= SEQUENCE { reducedMaxMIMO-LayersFR1-r16, reducedMaxMIMO-LayersFR2-r16 }
 */
struct MaxMIMO_LayerPreference_r16 {
    bool has_reducedMaxMIMO_LayersFR1_r16; /**< reducedMaxMIMO-LayersFR1-r16 是否存在。 */
    MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR1_r16 reducedMaxMIMO_LayersFR1_r16; /**< ASN.1 reducedMaxMIMO-LayersFR1-r16；结构体；OPTIONAL。 */
    bool has_reducedMaxMIMO_LayersFR2_r16; /**< reducedMaxMIMO-LayersFR2-r16 是否存在。 */
    MaxMIMO_LayerPreference_r16_ReducedMaxMIMO_LayersFR2_r16 reducedMaxMIMO_LayersFR2_r16; /**< ASN.1 reducedMaxMIMO-LayersFR2-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MinSchedulingOffsetPreference_r16_PreferredK0_r16
 * @note ASN.1：preferredK0-r16；源文件第 2391 行。
 * @note SEQUENCE { preferredK0-SCS-15kHz-r16, preferredK0-SCS-30kHz-r16, preferredK0-...
 */
struct MinSchedulingOffsetPreference_r16_PreferredK0_r16 {
    bool has_preferredK0_SCS_15kHz_r16; /**< preferredK0-SCS-15kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_15kHz_r16 preferredK0_SCS_15kHz_r16; /**< ASN.1 preferredK0-SCS-15kHz-r16；枚举；OPTIONAL。 */
    bool has_preferredK0_SCS_30kHz_r16; /**< preferredK0-SCS-30kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_30kHz_r16 preferredK0_SCS_30kHz_r16; /**< ASN.1 preferredK0-SCS-30kHz-r16；枚举；OPTIONAL。 */
    bool has_preferredK0_SCS_60kHz_r16; /**< preferredK0-SCS-60kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_60kHz_r16 preferredK0_SCS_60kHz_r16; /**< ASN.1 preferredK0-SCS-60kHz-r16；枚举；OPTIONAL。 */
    bool has_preferredK0_SCS_120kHz_r16; /**< preferredK0-SCS-120kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16_PreferredK0_SCS_120kHz_r16 preferredK0_SCS_120kHz_r16; /**< ASN.1 preferredK0-SCS-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MinSchedulingOffsetPreference_r16_PreferredK2_r16
 * @note ASN.1：preferredK2-r16；源文件第 2397 行。
 * @note SEQUENCE { preferredK2-SCS-15kHz-r16, preferredK2-SCS-30kHz-r16, preferredK2-...
 */
struct MinSchedulingOffsetPreference_r16_PreferredK2_r16 {
    bool has_preferredK2_SCS_15kHz_r16; /**< preferredK2-SCS-15kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_15kHz_r16 preferredK2_SCS_15kHz_r16; /**< ASN.1 preferredK2-SCS-15kHz-r16；枚举；OPTIONAL。 */
    bool has_preferredK2_SCS_30kHz_r16; /**< preferredK2-SCS-30kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_30kHz_r16 preferredK2_SCS_30kHz_r16; /**< ASN.1 preferredK2-SCS-30kHz-r16；枚举；OPTIONAL。 */
    bool has_preferredK2_SCS_60kHz_r16; /**< preferredK2-SCS-60kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_60kHz_r16 preferredK2_SCS_60kHz_r16; /**< ASN.1 preferredK2-SCS-60kHz-r16；枚举；OPTIONAL。 */
    bool has_preferredK2_SCS_120kHz_r16; /**< preferredK2-SCS-120kHz-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16_PreferredK2_SCS_120kHz_r16 preferredK2_SCS_120kHz_r16; /**< ASN.1 preferredK2-SCS-120kHz-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MinSchedulingOffsetPreference_r16
 * @note ASN.1：MinSchedulingOffsetPreference-r16；源文件第 2390 行。
 * @note MinSchedulingOffsetPreference-r16 ::= SEQUENCE { preferredK0-r16, preferredK2-r16 }
 */
struct MinSchedulingOffsetPreference_r16 {
    bool has_preferredK0_r16; /**< preferredK0-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK0_r16 preferredK0_r16; /**< ASN.1 preferredK0-r16；结构体；OPTIONAL。 */
    bool has_preferredK2_r16; /**< preferredK2-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16_PreferredK2_r16 preferredK2_r16; /**< ASN.1 preferredK2-r16；结构体；OPTIONAL。 */
};


/**
 * @brief ReleasePreference_r16
 * @note ASN.1：ReleasePreference-r16；源文件第 2483 行。
 * @note ReleasePreference-r16 ::= SEQUENCE { preferredRRC-State-r16 }
 */
struct ReleasePreference_r16 {
    ReleasePreference_r16_PreferredRRC_State_r16 preferredRRC_State_r16; /**< ASN.1 preferredRRC-State-r16；枚举。 */
};


/**
 * @brief SL_UE_AssistanceInformationNR_r16
 * @note ASN.1：SL-UE-AssistanceInformationNR-r16；源文件第 2497 行。
 * @note SL-UE-AssistanceInformationNR-r16 ::= SEQUENCE OF (size 1..8) OF SL-TrafficPatternInfo-r16
 */
struct SL_UE_AssistanceInformationNR_r16 {
    SL_TrafficPatternInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UEAssistanceInformation_v1610_IEs
 * @note ASN.1：UEAssistanceInformation-v1610-IEs；源文件第 2262 行。
 * @note UEAssistanceInformation-v1610-IEs ::= SEQUENCE { idc-Assistance-r16, drx-Preference-r16, maxBW-Preference-r16, maxC...
 */
struct UEAssistanceInformation_v1610_IEs {
    bool has_idc_Assistance_r16; /**< idc-Assistance-r16 是否存在。 */
    IDC_Assistance_r16 idc_Assistance_r16; /**< ASN.1 idc-Assistance-r16；结构体；OPTIONAL。 */
    bool has_drx_Preference_r16; /**< drx-Preference-r16 是否存在。 */
    DRX_Preference_r16 drx_Preference_r16; /**< ASN.1 drx-Preference-r16；结构体；OPTIONAL。 */
    bool has_maxBW_Preference_r16; /**< maxBW-Preference-r16 是否存在。 */
    MaxBW_Preference_r16 maxBW_Preference_r16; /**< ASN.1 maxBW-Preference-r16；结构体；OPTIONAL。 */
    bool has_maxCC_Preference_r16; /**< maxCC-Preference-r16 是否存在。 */
    MaxCC_Preference_r16 maxCC_Preference_r16; /**< ASN.1 maxCC-Preference-r16；结构体；OPTIONAL。 */
    bool has_maxMIMO_LayerPreference_r16; /**< maxMIMO-LayerPreference-r16 是否存在。 */
    MaxMIMO_LayerPreference_r16 maxMIMO_LayerPreference_r16; /**< ASN.1 maxMIMO-LayerPreference-r16；结构体；OPTIONAL。 */
    bool has_minSchedulingOffsetPreference_r16; /**< minSchedulingOffsetPreference-r16 是否存在。 */
    MinSchedulingOffsetPreference_r16 minSchedulingOffsetPreference_r16; /**< ASN.1 minSchedulingOffsetPreference-r16；结构体；OPTIONAL。 */
    bool has_releasePreference_r16; /**< releasePreference-r16 是否存在。 */
    ReleasePreference_r16 releasePreference_r16; /**< ASN.1 releasePreference-r16；结构体；OPTIONAL。 */
    bool has_sl_UE_AssistanceInformationNR_r16; /**< sl-UE-AssistanceInformationNR-r16 是否存在。 */
    SL_UE_AssistanceInformationNR_r16 sl_UE_AssistanceInformationNR_r16; /**< ASN.1 sl-UE-AssistanceInformationNR-r16；SEQUENCE OF SL_TrafficPatternInfo_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_referenceTimeInfoPreference_r16; /**< referenceTimeInfoPreference-r16 是否存在。 */
    bool referenceTimeInfoPreference_r16; /**< ASN.1 referenceTimeInfoPreference-r16；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEAssistanceInformation_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEAssistanceInformation_v1540_IEs
 * @note ASN.1：UEAssistanceInformation-v1540-IEs；源文件第 2229 行。
 * @note UEAssistanceInformation-v1540-IEs ::= SEQUENCE { overheatingAssistance, nonCriticalExtension }
 */
struct UEAssistanceInformation_v1540_IEs {
    bool has_overheatingAssistance; /**< overheatingAssistance 是否存在。 */
    OverheatingAssistance overheatingAssistance; /**< ASN.1 overheatingAssistance；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEAssistanceInformation_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEAssistanceInformation_IEs
 * @note ASN.1：UEAssistanceInformation-IEs；源文件第 2216 行。
 * @note UEAssistanceInformation-IEs ::= SEQUENCE { delayBudgetReport, lateNonCriticalExtension, nonCriticalExtension }
 */
struct UEAssistanceInformation_IEs {
    bool has_delayBudgetReport; /**< delayBudgetReport 是否存在。 */
    DelayBudgetReport delayBudgetReport; /**< ASN.1 delayBudgetReport；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEAssistanceInformation_v1540_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEAssistanceInformation_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 2212 行。
 * @note SEQUENCE { }
 */
struct UEAssistanceInformation_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEAssistanceInformation_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 2210 行。
 * @note CHOICE { ueAssistanceInformation, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UEAssistanceInformation_CriticalExtensions_Tag {
    UEAssistanceInformation_CriticalExtensions_Tag_ueAssistanceInformation = 0, /**< ASN.1 ueAssistanceInformation */
    UEAssistanceInformation_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} UEAssistanceInformation_CriticalExtensions_Tag;

struct UEAssistanceInformation_CriticalExtensions {
    UEAssistanceInformation_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UEAssistanceInformation_IEs ueAssistanceInformation; /**< ASN.1 ueAssistanceInformation */
        UEAssistanceInformation_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief UEAssistanceInformation
 * @note ASN.1：UEAssistanceInformation；源文件第 2209 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_UEAssistanceInformation（包装位 2 级，入口 2 个 CHOICE）。
 * @note UEAssistanceInformation ::= SEQUENCE { criticalExtensions }
 */
struct UEAssistanceInformation {
    UEAssistanceInformation_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief AffectedCarrierFreq_r16
 * @note ASN.1：AffectedCarrierFreq-r16；源文件第 2314 行。
 * @note AffectedCarrierFreq-r16 ::= SEQUENCE { carrierFreq-r16, interferenceDirection-r16 }
 */
struct AffectedCarrierFreq_r16 {
    ARFCN_ValueNR carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    AffectedCarrierFreq_r16_InterferenceDirection_r16 interferenceDirection_r16; /**< ASN.1 interferenceDirection-r16；枚举。 */
};


/**
 * @brief VictimSystemType_r16_ExtGroup1
 * @note ASN.1：VictimSystemType_r16_ExtGroup1；源文件第 2335 行。
 */
struct VictimSystemType_r16_ExtGroup1 {
    bool has_uwb_r18; /**< uwb-r18 是否存在。 */
    VictimSystemType_r16_ExtGroup1_Uwb_r18 uwb_r18; /**< ASN.1 uwb-r18；枚举；OPTIONAL。 */
};


/**
 * @brief VictimSystemType_r16
 * @note ASN.1：VictimSystemType-r16；源文件第 2326 行。
 * @note VictimSystemType-r16 ::= SEQUENCE { gps-r16, glonass-r16, bds-r16, galileo-r16, navIC-r16, wlan-r16, b...
 */
struct VictimSystemType_r16 {
    bool has_gps_r16; /**< gps-r16 是否存在。 */
    VictimSystemType_r16_Gps_r16 gps_r16; /**< ASN.1 gps-r16；枚举；OPTIONAL。 */
    bool has_glonass_r16; /**< glonass-r16 是否存在。 */
    VictimSystemType_r16_Glonass_r16 glonass_r16; /**< ASN.1 glonass-r16；枚举；OPTIONAL。 */
    bool has_bds_r16; /**< bds-r16 是否存在。 */
    VictimSystemType_r16_Bds_r16 bds_r16; /**< ASN.1 bds-r16；枚举；OPTIONAL。 */
    bool has_galileo_r16; /**< galileo-r16 是否存在。 */
    VictimSystemType_r16_Galileo_r16 galileo_r16; /**< ASN.1 galileo-r16；枚举；OPTIONAL。 */
    bool has_navIC_r16; /**< navIC-r16 是否存在。 */
    VictimSystemType_r16_NavIC_r16 navIC_r16; /**< ASN.1 navIC-r16；枚举；OPTIONAL。 */
    bool has_wlan_r16; /**< wlan-r16 是否存在。 */
    VictimSystemType_r16_Wlan_r16 wlan_r16; /**< ASN.1 wlan-r16；枚举；OPTIONAL。 */
    bool has_bluetooth_r16; /**< bluetooth-r16 是否存在。 */
    VictimSystemType_r16_Bluetooth_r16 bluetooth_r16; /**< ASN.1 bluetooth-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    VictimSystemType_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief AffectedCarrierFreqComb_r16
 * @note ASN.1：AffectedCarrierFreqComb-r16；源文件第 2321 行。
 * @note AffectedCarrierFreqComb-r16 ::= SEQUENCE { affectedCarrierFreqComb-r16, victimSystemType-r16 }
 */
struct AffectedCarrierFreqComb_r16 {
    bool has_affectedCarrierFreqComb_r16; /**< affectedCarrierFreqComb-r16 是否存在。 */
    ARFCN_ValueNR* affectedCarrierFreqComb_r16_items; /**< ASN.1 affectedCarrierFreqComb-r16；SEQUENCE OF ARFCN_ValueNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t affectedCarrierFreqComb_r16_count; /**< affectedCarrierFreqComb-r16 元素个数。 */
    VictimSystemType_r16 victimSystemType_r16; /**< ASN.1 victimSystemType-r16；结构体。 */
};


/**
 * @brief SupportedBandwidth
 * @note ASN.1：SupportedBandwidth；源文件第 20792 行。
 * @note SupportedBandwidth ::= CHOICE { fr1, fr2 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SupportedBandwidth_Tag {
    SupportedBandwidth_Tag_fr1 = 0, /**< ASN.1 fr1 */
    SupportedBandwidth_Tag_fr2 = 1, /**< ASN.1 fr2 */
} SupportedBandwidth_Tag;

struct SupportedBandwidth {
    SupportedBandwidth_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SupportedBandwidth_Fr1 fr1; /**< ASN.1 fr1 */
        SupportedBandwidth_Fr2 fr2; /**< ASN.1 fr2 */
    } u;
};


/**
 * @brief MUSIM_CellToAffect_r18
 * @note ASN.1：MUSIM-CellToAffect-r18；源文件第 2450 行。
 * @note MUSIM-CellToAffect-r18 ::= SEQUENCE { musim-ServCellIndex-r18, musim-MIMO-Layers-DL-r18, musim-MIMO-Laye...
 */
struct MUSIM_CellToAffect_r18 {
    ServCellIndex musim_ServCellIndex_r18; /**< ASN.1 musim-ServCellIndex-r18；INTEGER (0..31)，位宽 5 bit。 */
    bool has_musim_MIMO_Layers_DL_r18; /**< musim-MIMO-Layers-DL-r18 是否存在。 */
    int64_t musim_MIMO_Layers_DL_r18; /**< ASN.1 musim-MIMO-Layers-DL-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_musim_MIMO_Layers_UL_r18; /**< musim-MIMO-Layers-UL-r18 是否存在。 */
    int64_t musim_MIMO_Layers_UL_r18; /**< ASN.1 musim-MIMO-Layers-UL-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_musim_SupportedBandwidth_DL_r18; /**< musim-SupportedBandwidth-DL-r18 是否存在。 */
    SupportedBandwidth musim_SupportedBandwidth_DL_r18; /**< ASN.1 musim-SupportedBandwidth-DL-r18；结构体；OPTIONAL。 */
    bool has_musim_SupportedBandwidth_UL_r18; /**< musim-SupportedBandwidth-UL-r18 是否存在。 */
    SupportedBandwidth musim_SupportedBandwidth_UL_r18; /**< ASN.1 musim-SupportedBandwidth-UL-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MUSIM_AffectedBands_r18
 * @note ASN.1：MUSIM-AffectedBands-r18；源文件第 2460 行。
 * @note MUSIM-AffectedBands-r18 ::= SEQUENCE OF (size 1..8) OF MUSIM-CapabilityRestrictedBandParameters-r18
 */
struct MUSIM_AffectedBands_r18 {
    MUSIM_CapabilityRestrictedBandParameters_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18
 * @note ASN.1：musim-CapabilityRestricted-r18；源文件第 2464 行。
 * @note SEQUENCE { musim-MIMO-Layers-DL-r18, musim-MIMO-Layers-UL-r18, musim-Supporte...
 */
struct MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18 {
    bool has_musim_MIMO_Layers_DL_r18; /**< musim-MIMO-Layers-DL-r18 是否存在。 */
    int64_t musim_MIMO_Layers_DL_r18; /**< ASN.1 musim-MIMO-Layers-DL-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_musim_MIMO_Layers_UL_r18; /**< musim-MIMO-Layers-UL-r18 是否存在。 */
    int64_t musim_MIMO_Layers_UL_r18; /**< ASN.1 musim-MIMO-Layers-UL-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_musim_SupportedBandwidth_DL_r18; /**< musim-SupportedBandwidth-DL-r18 是否存在。 */
    SupportedBandwidth musim_SupportedBandwidth_DL_r18; /**< ASN.1 musim-SupportedBandwidth-DL-r18；结构体；OPTIONAL。 */
    bool has_musim_SupportedBandwidth_UL_r18; /**< musim-SupportedBandwidth-UL-r18 是否存在。 */
    SupportedBandwidth musim_SupportedBandwidth_UL_r18; /**< ASN.1 musim-SupportedBandwidth-UL-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MUSIM_CapabilityRestrictedBandParameters_r18
 * @note ASN.1：MUSIM-CapabilityRestrictedBandParameters-r18；源文件第 2462 行。
 * @note MUSIM-CapabilityRestrictedBandParameters-r18 ::= SEQUENCE { musim-bandEntryIndex-r18, musim-CapabilityRestricted-r18 }
 */
struct MUSIM_CapabilityRestrictedBandParameters_r18 {
    MUSIM_BandEntryIndex_r18 musim_bandEntryIndex_r18; /**< ASN.1 musim-bandEntryIndex-r18；INTEGER (1..8)，位宽 3 bit。 */
    MUSIM_CapabilityRestrictedBandParameters_r18_Musim_CapabilityRestricted_r18 musim_CapabilityRestricted_r18; /**< ASN.1 musim-CapabilityRestricted-r18；结构体。 */
};


/**
 * @brief MUSIM_AvoidedBands_r18
 * @note ASN.1：MUSIM-AvoidedBands-r18；源文件第 2474 行。
 * @note MUSIM-AvoidedBands-r18 ::= SEQUENCE OF (size 1..8) OF MUSIM-BandEntryIndex-r18
 */
struct MUSIM_AvoidedBands_r18 {
    MUSIM_BandEntryIndex_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_TrafficPatternInfo_r16
 * @note ASN.1：SL-TrafficPatternInfo-r16；源文件第 2499 行。
 * @note SL-TrafficPatternInfo-r16 ::= SEQUENCE { trafficPeriodicity-r16, timingOffset-r16, messageSize-r16, sl-QoS-...
 */
struct SL_TrafficPatternInfo_r16 {
    SL_TrafficPatternInfo_r16_TrafficPeriodicity_r16 trafficPeriodicity_r16; /**< ASN.1 trafficPeriodicity-r16；枚举。 */
    int64_t timingOffset_r16; /**< ASN.1 timingOffset-r16；INTEGER (0..10239)，位宽 14 bit。 */
    BitString messageSize_r16; /**< ASN.1 messageSize-r16；SIZE (8)，定长。 */
    SL_QoS_FlowIdentity_r16 sl_QoS_FlowIdentity_r16; /**< ASN.1 sl-QoS-FlowIdentity-r16；INTEGER (1..2048)，位宽 11 bit。 */
};


/**
 * @brief AffectedFreqRange_r18
 * @note ASN.1：AffectedFreqRange-r18；源文件第 2549 行。
 * @note AffectedFreqRange-r18 ::= SEQUENCE { centerFreq-r18, affectedBandwidth-r18 }
 */
struct AffectedFreqRange_r18 {
    ARFCN_ValueNR centerFreq_r18; /**< ASN.1 centerFreq-r18；INTEGER (0..3279165)，位宽 22 bit。 */
    AffectedFreqRange_r18_AffectedBandwidth_r18 affectedBandwidth_r18; /**< ASN.1 affectedBandwidth-r18；枚举。 */
};


/**
 * @brief AffectedCarrierFreqRange_r18
 * @note ASN.1：AffectedCarrierFreqRange-r18；源文件第 2536 行。
 * @note AffectedCarrierFreqRange-r18 ::= SEQUENCE { affectedFreqRange-r18, interferenceDirection-r18, victimSystemType...
 */
struct AffectedCarrierFreqRange_r18 {
    AffectedFreqRange_r18 affectedFreqRange_r18; /**< ASN.1 affectedFreqRange-r18；结构体。 */
    AffectedCarrierFreqRange_r18_InterferenceDirection_r18 interferenceDirection_r18; /**< ASN.1 interferenceDirection-r18；枚举。 */
    bool has_victimSystemType_r18; /**< victimSystemType-r18 是否存在。 */
    VictimSystemType_r16 victimSystemType_r18; /**< ASN.1 victimSystemType-r18；结构体；OPTIONAL。 */
};


/**
 * @brief AffectedCarrierFreqRangeComb_r18
 * @note ASN.1：AffectedCarrierFreqRangeComb-r18；源文件第 2543 行。
 * @note AffectedCarrierFreqRangeComb-r18 ::= SEQUENCE { affectedCarrierFreqRangeComb-r18, interferenceDirection-r18, victi...
 */
struct AffectedCarrierFreqRangeComb_r18 {
    AffectedFreqRange_r18* affectedCarrierFreqRangeComb_r18_items; /**< ASN.1 affectedCarrierFreqRangeComb-r18；SEQUENCE OF AffectedFreqRange_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t affectedCarrierFreqRangeComb_r18_count; /**< affectedCarrierFreqRangeComb-r18 元素个数。 */
    AffectedCarrierFreqRangeComb_r18_InterferenceDirection_r18 interferenceDirection_r18; /**< ASN.1 interferenceDirection-r18；枚举。 */
    bool has_victimSystemType_r18; /**< victimSystemType-r18 是否存在。 */
    VictimSystemType_r16 victimSystemType_r18; /**< ASN.1 victimSystemType-r18；结构体；OPTIONAL。 */
};


/**
 * @brief PDU_SessionUL_TrafficInfo_r18
 * @note ASN.1：PDU-SessionUL-TrafficInfo-r18；源文件第 2559 行。
 * @note PDU-SessionUL-TrafficInfo-r18 ::= SEQUENCE { pdu-SessionID-r18, qos-FlowUL-TrafficInfoList-r18 }
 */
struct PDU_SessionUL_TrafficInfo_r18 {
    PDU_SessionID pdu_SessionID_r18; /**< ASN.1 pdu-SessionID-r18；INTEGER (0..255)，位宽 8 bit。 */
    QOS_FlowUL_TrafficInfo_r18* qos_FlowUL_TrafficInfoList_r18_items; /**< ASN.1 qos-FlowUL-TrafficInfoList-r18；SEQUENCE OF QOS_FlowUL_TrafficInfo_r18，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t qos_FlowUL_TrafficInfoList_r18_count; /**< qos-FlowUL-TrafficInfoList-r18 元素个数。 */
};


/**
 * @brief QOS_FlowUL_TrafficInfo_r18_JitterRange_r18
 * @note ASN.1：jitterRange-r18；源文件第 2566 行。
 * @note SEQUENCE { lowerBound-r18, upperBound-r18 }
 */
struct QOS_FlowUL_TrafficInfo_r18_JitterRange_r18 {
    JitterBound_r18 lowerBound_r18; /**< ASN.1 lowerBound-r18；枚举。 */
    JitterBound_r18 upperBound_r18; /**< ASN.1 upperBound-r18；枚举。 */
};


/**
 * @brief ReferenceSFN_AndSlot_r18
 * @note ASN.1：ReferenceSFN-AndSlot-r18；源文件第 2580 行。
 * @note ReferenceSFN-AndSlot-r18 ::= SEQUENCE { referenceSFN-r18, referenceSlot-r18 }
 */
struct ReferenceSFN_AndSlot_r18 {
    int64_t referenceSFN_r18; /**< ASN.1 referenceSFN-r18；INTEGER (0..1023)，位宽 10 bit。 */
    int64_t referenceSlot_r18; /**< ASN.1 referenceSlot-r18；INTEGER (0..639)，位宽 10 bit。 */
};


/**
 * @brief QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18
 * @note ASN.1：burstArrivalTime-r18；源文件第 2570 行。
 * @note CHOICE { referenceTime, referenceSFN-AndSlot }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag {
    QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceTime = 0, /**< ASN.1 referenceTime */
    QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag_referenceSFN_AndSlot = 1, /**< ASN.1 referenceSFN-AndSlot */
} QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag;

struct QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18 {
    QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ReferenceTime_r16 referenceTime; /**< ASN.1 referenceTime */
        ReferenceSFN_AndSlot_r18 referenceSFN_AndSlot; /**< ASN.1 referenceSFN-AndSlot */
    } u;
};


/**
 * @brief QOS_FlowUL_TrafficInfo_r18
 * @note ASN.1：QOS-FlowUL-TrafficInfo-r18；源文件第 2564 行。
 * @note QOS-FlowUL-TrafficInfo-r18 ::= SEQUENCE { qfi-r18, jitterRange-r18, burstArrivalTime-r18, trafficPeriodicity...
 */
struct QOS_FlowUL_TrafficInfo_r18 {
    QFI qfi_r18; /**< ASN.1 qfi-r18；INTEGER (0..63)，位宽 6 bit。 */
    bool has_jitterRange_r18; /**< jitterRange-r18 是否存在。 */
    QOS_FlowUL_TrafficInfo_r18_JitterRange_r18 jitterRange_r18; /**< ASN.1 jitterRange-r18；结构体；OPTIONAL。 */
    bool has_burstArrivalTime_r18; /**< burstArrivalTime-r18 是否存在。 */
    QOS_FlowUL_TrafficInfo_r18_BurstArrivalTime_r18 burstArrivalTime_r18; /**< ASN.1 burstArrivalTime-r18；结构体；OPTIONAL。 */
    bool has_trafficPeriodicity_r18; /**< trafficPeriodicity-r18 是否存在。 */
    int64_t trafficPeriodicity_r18; /**< ASN.1 trafficPeriodicity-r18；INTEGER (1..640000)，位宽 20 bit；OPTIONAL。 */
    bool has_pduSetIdentification_r18; /**< pduSetIdentification-r18 是否存在。 */
    bool pduSetIdentification_r18; /**< ASN.1 pduSetIdentification-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_psiIdentification_r18; /**< psiIdentification-r18 是否存在。 */
    bool psiIdentification_r18; /**< ASN.1 psiIdentification-r18；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief SL_PRS_TxInfo_r18
 * @note ASN.1：SL-PRS-TxInfo-r18；源文件第 2589 行。
 * @note SL-PRS-TxInfo-r18 ::= SEQUENCE { sl-PRS-Periodicity-r18, sl-PRS-Priority-r18, sl-PRS-DelayBudget-r1...
 */
struct SL_PRS_TxInfo_r18 {
    SL_PRS_TxInfo_r18_Sl_PRS_Periodicity_r18 sl_PRS_Periodicity_r18; /**< ASN.1 sl-PRS-Periodicity-r18；枚举。 */
    bool has_sl_PRS_Priority_r18; /**< sl-PRS-Priority-r18 是否存在。 */
    int64_t sl_PRS_Priority_r18; /**< ASN.1 sl-PRS-Priority-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PRS_DelayBudget_r18; /**< sl-PRS-DelayBudget-r18 是否存在。 */
    int64_t sl_PRS_DelayBudget_r18; /**< ASN.1 sl-PRS-DelayBudget-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_sl_PRS_Bandwidth_r18; /**< sl-PRS-Bandwidth-r18 是否存在。 */
    SL_PRS_TxInfo_r18_Sl_PRS_Bandwidth_r18 sl_PRS_Bandwidth_r18; /**< ASN.1 sl-PRS-Bandwidth-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRAT_RequestList
 * @note ASN.1：UE-CapabilityRAT-RequestList；源文件第 20842 行。
 * @note UE-CapabilityRAT-RequestList ::= SEQUENCE OF (size 1..8) OF UE-CapabilityRAT-Request
 */
struct UE_CapabilityRAT_RequestList {
    UE_CapabilityRAT_Request* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UECapabilityEnquiry_IEs
 * @note ASN.1：UECapabilityEnquiry-IEs；源文件第 2612 行。
 * @note UECapabilityEnquiry-IEs ::= SEQUENCE { ue-CapabilityRAT-RequestList, lateNonCriticalExtension, ue-Capabil...
 */
struct UECapabilityEnquiry_IEs {
    UE_CapabilityRAT_RequestList ue_CapabilityRAT_RequestList; /**< ASN.1 ue-CapabilityRAT-RequestList；SEQUENCE OF UE_CapabilityRAT_Request，SIZE (1..8)。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    UECapabilityEnquiry_v1560_IEs* ue_CapabilityEnquiryExt; /**< ASN.1 ue-CapabilityEnquiryExt；OCTET STRING (CONTAINING UECapabilityEnquiry_v1560_IEs)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
};


/**
 * @brief UECapabilityEnquiry_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 2608 行。
 * @note SEQUENCE { }
 */
struct UECapabilityEnquiry_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UECapabilityEnquiry_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 2606 行。
 * @note CHOICE { ueCapabilityEnquiry, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UECapabilityEnquiry_CriticalExtensions_Tag {
    UECapabilityEnquiry_CriticalExtensions_Tag_ueCapabilityEnquiry = 0, /**< ASN.1 ueCapabilityEnquiry */
    UECapabilityEnquiry_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} UECapabilityEnquiry_CriticalExtensions_Tag;

struct UECapabilityEnquiry_CriticalExtensions {
    UECapabilityEnquiry_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UECapabilityEnquiry_IEs ueCapabilityEnquiry; /**< ASN.1 ueCapabilityEnquiry */
        UECapabilityEnquiry_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief UECapabilityEnquiry
 * @note ASN.1：UECapabilityEnquiry；源文件第 2604 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_UECapabilityEnquiry（包装位 2 级，入口 2 个 CHOICE）。
 * @note UECapabilityEnquiry ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct UECapabilityEnquiry {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    UECapabilityEnquiry_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief UECapabilityEnquiry_v1610_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2625 行。
 * @note SEQUENCE { }
 */
struct UECapabilityEnquiry_v1610_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UECapabilityEnquiry_v1610_IEs
 * @note ASN.1：UECapabilityEnquiry-v1610-IEs；源文件第 2623 行。
 * @note UECapabilityEnquiry-v1610-IEs ::= SEQUENCE { rrc-SegAllowed-r16, nonCriticalExtension }
 */
struct UECapabilityEnquiry_v1610_IEs {
    bool has_rrc_SegAllowed_r16; /**< rrc-SegAllowed-r16 是否存在。 */
    UECapabilityEnquiry_v1610_IEs_Rrc_SegAllowed_r16 rrc_SegAllowed_r16; /**< ASN.1 rrc-SegAllowed-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UECapabilityEnquiry_v1610_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16
 * @note ASN.1：codebookTypeRequest-r16；源文件第 20861 行。
 * @note SEQUENCE { type1-SinglePanel-r16, type1-MultiPanel-r16, type2-r16, type2-Port...
 */
struct UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16 {
    bool has_type1_SinglePanel_r16; /**< type1-SinglePanel-r16 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_SinglePanel_r16 type1_SinglePanel_r16; /**< ASN.1 type1-SinglePanel-r16；枚举；OPTIONAL。 */
    bool has_type1_MultiPanel_r16; /**< type1-MultiPanel-r16 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type1_MultiPanel_r16 type1_MultiPanel_r16; /**< ASN.1 type1-MultiPanel-r16；枚举；OPTIONAL。 */
    bool has_type2_r16; /**< type2-r16 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_r16 type2_r16; /**< ASN.1 type2-r16；枚举；OPTIONAL。 */
    bool has_type2_PortSelection_r16; /**< type2-PortSelection-r16 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16_Type2_PortSelection_r16 type2_PortSelection_r16; /**< ASN.1 type2-PortSelection-r16；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_ExtGroup1
 * @note ASN.1：UE_CapabilityRequestFilterCommon_ExtGroup1；源文件第 20860 行。
 */
struct UE_CapabilityRequestFilterCommon_ExtGroup1 {
    bool has_codebookTypeRequest_r16; /**< codebookTypeRequest-r16 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1_CodebookTypeRequest_r16 codebookTypeRequest_r16; /**< ASN.1 codebookTypeRequest-r16；结构体；OPTIONAL。 */
    bool has_uplinkTxSwitchRequest_r16; /**< uplinkTxSwitchRequest-r16 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1_UplinkTxSwitchRequest_r16 uplinkTxSwitchRequest_r16; /**< ASN.1 uplinkTxSwitchRequest-r16；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_ExtGroup3
 * @note ASN.1：UE_CapabilityRequestFilterCommon_ExtGroup3；源文件第 20872 行。
 */
struct UE_CapabilityRequestFilterCommon_ExtGroup3 {
    bool has_fallbackGroupFiveRequest_r17; /**< fallbackGroupFiveRequest-r17 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup3_FallbackGroupFiveRequest_r17 fallbackGroupFiveRequest_r17; /**< ASN.1 fallbackGroupFiveRequest-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18
 * @note ASN.1：lowerMSDRequest-r18；源文件第 20876 行。
 * @note SEQUENCE { pc1dot5-r18, pc2-r18, pc3-r18 }
 */
struct UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18 {
    bool has_pc1dot5_r18; /**< pc1dot5-r18 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc1dot5_r18 pc1dot5_r18; /**< ASN.1 pc1dot5-r18；枚举；OPTIONAL。 */
    bool has_pc2_r18; /**< pc2-r18 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc2_r18 pc2_r18; /**< ASN.1 pc2-r18；枚举；OPTIONAL。 */
    bool has_pc3_r18; /**< pc3-r18 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18_Pc3_r18 pc3_r18; /**< ASN.1 pc3-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_ExtGroup4
 * @note ASN.1：UE_CapabilityRequestFilterCommon_ExtGroup4；源文件第 20875 行。
 */
struct UE_CapabilityRequestFilterCommon_ExtGroup4 {
    bool has_lowerMSDRequest_r18; /**< lowerMSDRequest-r18 是否存在。 */
    UE_CapabilityRequestFilterCommon_ExtGroup4_LowerMSDRequest_r18 lowerMSDRequest_r18; /**< ASN.1 lowerMSDRequest-r18；结构体；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_ExtGroup2
 * @note ASN.1：UE_CapabilityRequestFilterCommon_ExtGroup2；源文件第 20869 行。
 */
struct UE_CapabilityRequestFilterCommon_ExtGroup2 {
    bool has_requestedCellGrouping_r16; /**< requestedCellGrouping-r16 是否存在。 */
    CellGrouping_r16* requestedCellGrouping_r16_items; /**< ASN.1 requestedCellGrouping-r16；SEQUENCE OF CellGrouping_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t requestedCellGrouping_r16_count; /**< requestedCellGrouping-r16 元素个数。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon_Mrdc_Request
 * @note ASN.1：mrdc-Request；源文件第 20854 行。
 * @note SEQUENCE { omitEN-DC, includeNR-DC, includeNE-DC }
 */
struct UE_CapabilityRequestFilterCommon_Mrdc_Request {
    bool has_omitEN_DC; /**< omitEN-DC 是否存在。 */
    UE_CapabilityRequestFilterCommon_Mrdc_Request_OmitEN_DC omitEN_DC; /**< ASN.1 omitEN-DC；枚举；OPTIONAL。 */
    bool has_includeNR_DC; /**< includeNR-DC 是否存在。 */
    UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNR_DC includeNR_DC; /**< ASN.1 includeNR-DC；枚举；OPTIONAL。 */
    bool has_includeNE_DC; /**< includeNE-DC 是否存在。 */
    UE_CapabilityRequestFilterCommon_Mrdc_Request_IncludeNE_DC includeNE_DC; /**< ASN.1 includeNE-DC；枚举；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRequestFilterCommon
 * @note ASN.1：UE-CapabilityRequestFilterCommon；源文件第 20853 行。
 * @note UE-CapabilityRequestFilterCommon ::= SEQUENCE { mrdc-Request, codebookTypeRequest-r16, uplinkTxSwitchRequest-r16, ...
 */
struct UE_CapabilityRequestFilterCommon {
    bool has_mrdc_Request; /**< mrdc-Request 是否存在。 */
    UE_CapabilityRequestFilterCommon_Mrdc_Request mrdc_Request; /**< ASN.1 mrdc-Request；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    UE_CapabilityRequestFilterCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    UE_CapabilityRequestFilterCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    UE_CapabilityRequestFilterCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    UE_CapabilityRequestFilterCommon_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UECapabilityEnquiry_v1560_IEs
 * @note ASN.1：UECapabilityEnquiry-v1560-IEs；源文件第 2618 行。
 * @note UECapabilityEnquiry-v1560-IEs ::= SEQUENCE { capabilityRequestFilterCommon, nonCriticalExtension }
 */
struct UECapabilityEnquiry_v1560_IEs {
    bool has_capabilityRequestFilterCommon; /**< capabilityRequestFilterCommon 是否存在。 */
    UE_CapabilityRequestFilterCommon capabilityRequestFilterCommon; /**< ASN.1 capabilityRequestFilterCommon；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UECapabilityEnquiry_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_CapabilityRAT_ContainerList
 * @note ASN.1：UE-CapabilityRAT-ContainerList；源文件第 20832 行。
 * @note UE-CapabilityRAT-ContainerList ::= SEQUENCE OF (size 0..8) OF UE-CapabilityRAT-Container
 */
struct UE_CapabilityRAT_ContainerList {
    UE_CapabilityRAT_Container* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UECapabilityInformation_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2642 行。
 * @note SEQUENCE { }
 */
struct UECapabilityInformation_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UECapabilityInformation_IEs
 * @note ASN.1：UECapabilityInformation-IEs；源文件第 2639 行。
 * @note UECapabilityInformation-IEs ::= SEQUENCE { ue-CapabilityRAT-ContainerList, lateNonCriticalExtension, nonCriti...
 */
struct UECapabilityInformation_IEs {
    bool has_ue_CapabilityRAT_ContainerList; /**< ue-CapabilityRAT-ContainerList 是否存在。 */
    UE_CapabilityRAT_ContainerList ue_CapabilityRAT_ContainerList; /**< ASN.1 ue-CapabilityRAT-ContainerList；SEQUENCE OF UE_CapabilityRAT_Container，SIZE (0..8)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UECapabilityInformation_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UECapabilityInformation_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 2635 行。
 * @note SEQUENCE { }
 */
struct UECapabilityInformation_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UECapabilityInformation_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 2633 行。
 * @note CHOICE { ueCapabilityInformation, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UECapabilityInformation_CriticalExtensions_Tag {
    UECapabilityInformation_CriticalExtensions_Tag_ueCapabilityInformation = 0, /**< ASN.1 ueCapabilityInformation */
    UECapabilityInformation_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} UECapabilityInformation_CriticalExtensions_Tag;

struct UECapabilityInformation_CriticalExtensions {
    UECapabilityInformation_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UECapabilityInformation_IEs ueCapabilityInformation; /**< ASN.1 ueCapabilityInformation */
        UECapabilityInformation_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief UECapabilityInformation
 * @note ASN.1：UECapabilityInformation；源文件第 2631 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_UECapabilityInformation（包装位 2 级，入口 2 个 CHOICE）。
 * @note UECapabilityInformation ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct UECapabilityInformation {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    UECapabilityInformation_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief FlightPathInfoReportConfig_r18
 * @note ASN.1：FlightPathInfoReportConfig-r18；源文件第 2680 行。
 * @note FlightPathInfoReportConfig-r18 ::= SEQUENCE { maxWayPointNumber-r18, includeTimeStamp-r18 }
 */
struct FlightPathInfoReportConfig_r18 {
    int64_t maxWayPointNumber_r18; /**< ASN.1 maxWayPointNumber-r18；INTEGER (1..20)，位宽 5 bit。 */
    bool has_includeTimeStamp_r18; /**< includeTimeStamp-r18 是否存在。 */
    FlightPathInfoReportConfig_r18_IncludeTimeStamp_r18 includeTimeStamp_r18; /**< ASN.1 includeTimeStamp-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UEInformationRequest_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2677 行。
 * @note SEQUENCE { }
 */
struct UEInformationRequest_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEInformationRequest_v1800_IEs
 * @note ASN.1：UEInformationRequest-v1800-IEs；源文件第 2673 行。
 * @note UEInformationRequest-v1800-IEs ::= SEQUENCE { flightPathInfoReq-r18, successPSCell-ReportReq-r18, reselectionMea...
 */
struct UEInformationRequest_v1800_IEs {
    bool has_flightPathInfoReq_r18; /**< flightPathInfoReq-r18 是否存在。 */
    FlightPathInfoReportConfig_r18 flightPathInfoReq_r18; /**< ASN.1 flightPathInfoReq-r18；结构体；OPTIONAL。 */
    bool has_successPSCell_ReportReq_r18; /**< successPSCell-ReportReq-r18 是否存在。 */
    UEInformationRequest_v1800_IEs_SuccessPSCell_ReportReq_r18 successPSCell_ReportReq_r18; /**< ASN.1 successPSCell-ReportReq-r18；枚举；OPTIONAL。 */
    bool has_reselectionMeasurementReq_r18; /**< reselectionMeasurementReq-r18 是否存在。 */
    UEInformationRequest_v1800_IEs_ReselectionMeasurementReq_r18 reselectionMeasurementReq_r18; /**< ASN.1 reselectionMeasurementReq-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEInformationRequest_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEInformationRequest_v1700_IEs
 * @note ASN.1：UEInformationRequest-v1700-IEs；源文件第 2667 行。
 * @note UEInformationRequest-v1700-IEs ::= SEQUENCE { successHO-ReportReq-r17, coarseLocationRequest-r17, nonCriticalExt...
 */
struct UEInformationRequest_v1700_IEs {
    bool has_successHO_ReportReq_r17; /**< successHO-ReportReq-r17 是否存在。 */
    UEInformationRequest_v1700_IEs_SuccessHO_ReportReq_r17 successHO_ReportReq_r17; /**< ASN.1 successHO-ReportReq-r17；枚举；OPTIONAL。 */
    bool has_coarseLocationRequest_r17; /**< coarseLocationRequest-r17 是否存在。 */
    UEInformationRequest_v1700_IEs_CoarseLocationRequest_r17 coarseLocationRequest_r17; /**< ASN.1 coarseLocationRequest-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEInformationRequest_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEInformationRequest_r16_IEs
 * @note ASN.1：UEInformationRequest-r16-IEs；源文件第 2656 行。
 * @note UEInformationRequest-r16-IEs ::= SEQUENCE { idleModeMeasurementReq-r16, logMeasReportReq-r16, connEstFailRepor...
 */
struct UEInformationRequest_r16_IEs {
    bool has_idleModeMeasurementReq_r16; /**< idleModeMeasurementReq-r16 是否存在。 */
    UEInformationRequest_r16_IEs_IdleModeMeasurementReq_r16 idleModeMeasurementReq_r16; /**< ASN.1 idleModeMeasurementReq-r16；枚举；OPTIONAL。 */
    bool has_logMeasReportReq_r16; /**< logMeasReportReq-r16 是否存在。 */
    UEInformationRequest_r16_IEs_LogMeasReportReq_r16 logMeasReportReq_r16; /**< ASN.1 logMeasReportReq-r16；枚举；OPTIONAL。 */
    bool has_connEstFailReportReq_r16; /**< connEstFailReportReq-r16 是否存在。 */
    UEInformationRequest_r16_IEs_ConnEstFailReportReq_r16 connEstFailReportReq_r16; /**< ASN.1 connEstFailReportReq-r16；枚举；OPTIONAL。 */
    bool has_ra_ReportReq_r16; /**< ra-ReportReq-r16 是否存在。 */
    UEInformationRequest_r16_IEs_Ra_ReportReq_r16 ra_ReportReq_r16; /**< ASN.1 ra-ReportReq-r16；枚举；OPTIONAL。 */
    bool has_rlf_ReportReq_r16; /**< rlf-ReportReq-r16 是否存在。 */
    UEInformationRequest_r16_IEs_Rlf_ReportReq_r16 rlf_ReportReq_r16; /**< ASN.1 rlf-ReportReq-r16；枚举；OPTIONAL。 */
    bool has_mobilityHistoryReportReq_r16; /**< mobilityHistoryReportReq-r16 是否存在。 */
    UEInformationRequest_r16_IEs_MobilityHistoryReportReq_r16 mobilityHistoryReportReq_r16; /**< ASN.1 mobilityHistoryReportReq-r16；枚举；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEInformationRequest_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEInformationRequest_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 2652 行。
 * @note SEQUENCE { }
 */
struct UEInformationRequest_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEInformationRequest_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 2650 行。
 * @note CHOICE { ueInformationRequest-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UEInformationRequest_r16_CriticalExtensions_Tag {
    UEInformationRequest_r16_CriticalExtensions_Tag_ueInformationRequest_r16 = 0, /**< ASN.1 ueInformationRequest-r16 */
    UEInformationRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} UEInformationRequest_r16_CriticalExtensions_Tag;

struct UEInformationRequest_r16_CriticalExtensions {
    UEInformationRequest_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UEInformationRequest_r16_IEs ueInformationRequest_r16; /**< ASN.1 ueInformationRequest-r16 */
        UEInformationRequest_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief UEInformationRequest_r16
 * @note ASN.1：UEInformationRequest-r16；源文件第 2648 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_UEInformationRequest_r16（包装位 2 级，入口 2 个 CHOICE）。
 * @note UEInformationRequest-r16 ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct UEInformationRequest_r16 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    UEInformationRequest_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief FlightPathInfoReport_r18
 * @note ASN.1：FlightPathInfoReport-r18；源文件第 2722 行。
 * @note FlightPathInfoReport-r18 ::= SEQUENCE OF (size 0..20) OF WayPoint-r18
 */
struct FlightPathInfoReport_r18 {
    WayPoint_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PerRAInfoList_v1660
 * @note ASN.1：PerRAInfoList-v1660；源文件第 2882 行。
 * @note PerRAInfoList-v1660 ::= SEQUENCE OF (size 1..200) OF PerRACSI-RSInfo-v1660
 */
struct PerRAInfoList_v1660 {
    PerRACSI_RSInfo_v1660* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RA_InformationCommon_r16_ExtGroup1
 * @note ASN.1：RA_InformationCommon_r16_ExtGroup1；源文件第 2825 行。
 */
struct RA_InformationCommon_r16_ExtGroup1 {
    bool has_perRAInfoList_v1660; /**< perRAInfoList-v1660 是否存在。 */
    PerRAInfoList_v1660 perRAInfoList_v1660; /**< ASN.1 perRAInfoList-v1660；SEQUENCE OF PerRACSI_RSInfo_v1660，SIZE (1..200)；OPTIONAL。 */
};


/**
 * @brief RA_InformationCommon_r16_ExtGroup2
 * @note ASN.1：RA_InformationCommon_r16_ExtGroup2；源文件第 2828 行。
 */
struct RA_InformationCommon_r16_ExtGroup2 {
    bool has_msg1_SCS_From_prach_ConfigurationIndex_r16; /**< msg1-SCS-From-prach-ConfigurationIndex-r16 是否存在。 */
    RA_InformationCommon_r16_ExtGroup2_Msg1_SCS_From_prach_ConfigurationIndex_r16 msg1_SCS_From_prach_ConfigurationIndex_r16; /**< ASN.1 msg1-SCS-From-prach-ConfigurationIndex-r16；枚举；OPTIONAL。 */
};


/**
 * @brief RA_InformationCommon_r16_ExtGroup3
 * @note ASN.1：RA_InformationCommon_r16_ExtGroup3；源文件第 2831 行。
 */
struct RA_InformationCommon_r16_ExtGroup3 {
    bool has_msg1_SCS_From_prach_ConfigurationIndexCFRA_r16; /**< msg1-SCS-From-prach-ConfigurationIndexCFRA-r16 是否存在。 */
    RA_InformationCommon_r16_ExtGroup3_Msg1_SCS_From_prach_ConfigurationIndexCFRA_r16 msg1_SCS_From_prach_ConfigurationIndexCFRA_r16; /**< ASN.1 msg1-SCS-From-prach-ConfigurationIndexCFRA-r16；枚举；OPTIONAL。 */
};


/**
 * @brief RA_InformationCommon_r16_ExtGroup4
 * @note ASN.1：RA_InformationCommon_r16_ExtGroup4；源文件第 2834 行。
 */
struct RA_InformationCommon_r16_ExtGroup4 {
    bool has_msgA_RO_FrequencyStart_r17; /**< msgA-RO-FrequencyStart-r17 是否存在。 */
    int64_t msgA_RO_FrequencyStart_r17; /**< ASN.1 msgA-RO-FrequencyStart-r17；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    bool has_msgA_RO_FrequencyStartCFRA_r17; /**< msgA-RO-FrequencyStartCFRA-r17 是否存在。 */
    int64_t msgA_RO_FrequencyStartCFRA_r17; /**< ASN.1 msgA-RO-FrequencyStartCFRA-r17；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    bool has_msgA_SubcarrierSpacing_r17; /**< msgA-SubcarrierSpacing-r17 是否存在。 */
    SubcarrierSpacing msgA_SubcarrierSpacing_r17; /**< ASN.1 msgA-SubcarrierSpacing-r17；枚举；OPTIONAL。 */
    bool has_msgA_RO_FDM_r17; /**< msgA-RO-FDM-r17 是否存在。 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDM_r17 msgA_RO_FDM_r17; /**< ASN.1 msgA-RO-FDM-r17；枚举；OPTIONAL。 */
    bool has_msgA_RO_FDMCFRA_r17; /**< msgA-RO-FDMCFRA-r17 是否存在。 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_RO_FDMCFRA_r17 msgA_RO_FDMCFRA_r17; /**< ASN.1 msgA-RO-FDMCFRA-r17；枚举；OPTIONAL。 */
    bool has_msgA_SCS_From_prach_ConfigurationIndex_r17; /**< msgA-SCS-From-prach-ConfigurationIndex-r17 是否存在。 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_SCS_From_prach_ConfigurationIndex_r17 msgA_SCS_From_prach_ConfigurationIndex_r17; /**< ASN.1 msgA-SCS-From-prach-ConfigurationIndex-r17；枚举；OPTIONAL。 */
    bool has_msgA_TransMax_r17; /**< msgA-TransMax-r17 是否存在。 */
    RA_InformationCommon_r16_ExtGroup4_MsgA_TransMax_r17 msgA_TransMax_r17; /**< ASN.1 msgA-TransMax-r17；枚举；OPTIONAL。 */
    bool has_msgA_MCS_r17; /**< msgA-MCS-r17 是否存在。 */
    int64_t msgA_MCS_r17; /**< ASN.1 msgA-MCS-r17；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_nrofPRBs_PerMsgA_PO_r17; /**< nrofPRBs-PerMsgA-PO-r17 是否存在。 */
    int64_t nrofPRBs_PerMsgA_PO_r17; /**< ASN.1 nrofPRBs-PerMsgA-PO-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_msgA_PUSCH_TimeDomainAllocation_r17; /**< msgA-PUSCH-TimeDomainAllocation-r17 是否存在。 */
    int64_t msgA_PUSCH_TimeDomainAllocation_r17; /**< ASN.1 msgA-PUSCH-TimeDomainAllocation-r17；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_frequencyStartMsgA_PUSCH_r17; /**< frequencyStartMsgA-PUSCH-r17 是否存在。 */
    int64_t frequencyStartMsgA_PUSCH_r17; /**< ASN.1 frequencyStartMsgA-PUSCH-r17；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    bool has_nrofMsgA_PO_FDM_r17; /**< nrofMsgA-PO-FDM-r17 是否存在。 */
    RA_InformationCommon_r16_ExtGroup4_NrofMsgA_PO_FDM_r17 nrofMsgA_PO_FDM_r17; /**< ASN.1 nrofMsgA-PO-FDM-r17；枚举；OPTIONAL。 */
    bool has_dlPathlossRSRP_r17; /**< dlPathlossRSRP-r17 是否存在。 */
    RSRP_Range dlPathlossRSRP_r17; /**< ASN.1 dlPathlossRSRP-r17；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_intendedSIBs_r17; /**< intendedSIBs-r17 是否存在。 */
    SIB_Type_r17* intendedSIBs_r17_items; /**< ASN.1 intendedSIBs-r17；SEQUENCE OF SIB_Type_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t intendedSIBs_r17_count; /**< intendedSIBs-r17 元素个数。 */
    bool has_ssbsForSI_Acquisition_r17; /**< ssbsForSI-Acquisition-r17 是否存在。 */
    SSB_Index* ssbsForSI_Acquisition_r17_items; /**< ASN.1 ssbsForSI-Acquisition-r17；SEQUENCE OF SSB_Index，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ssbsForSI_Acquisition_r17_count; /**< ssbsForSI-Acquisition-r17 元素个数。 */
    bool has_msgA_PUSCH_PayloadSize_r17; /**< msgA-PUSCH-PayloadSize-r17 是否存在。 */
    BitString msgA_PUSCH_PayloadSize_r17; /**< ASN.1 msgA-PUSCH-PayloadSize-r17；SIZE (5)，定长；OPTIONAL。 */
    bool has_onDemandSISuccess_r17; /**< onDemandSISuccess-r17 是否存在。 */
    RA_InformationCommon_r16_ExtGroup4_OnDemandSISuccess_r17 onDemandSISuccess_r17; /**< ASN.1 onDemandSISuccess-r17；枚举；OPTIONAL。 */
};


/**
 * @brief NSAG_List_r17
 * @note ASN.1：NSAG-List-r17；源文件第 6832 行。
 * @note NSAG-List-r17 ::= SEQUENCE OF (size 1..8) OF NSAG-ID-r17
 */
struct NSAG_List_r17 {
    NSAG_ID_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ReportedFeatureCombination_r18
 * @note ASN.1：ReportedFeatureCombination-r18；源文件第 2870 行。
 * @note ReportedFeatureCombination-r18 ::= SEQUENCE { redCap-r18, smallData-r18, nsag-r18, msg3-Repetitions-r18, msg1-Re...
 */
struct ReportedFeatureCombination_r18 {
    bool has_redCap_r18; /**< redCap-r18 是否存在。 */
    ReportedFeatureCombination_r18_RedCap_r18 redCap_r18; /**< ASN.1 redCap-r18；枚举；OPTIONAL。 */
    bool has_smallData_r18; /**< smallData-r18 是否存在。 */
    ReportedFeatureCombination_r18_SmallData_r18 smallData_r18; /**< ASN.1 smallData-r18；枚举；OPTIONAL。 */
    bool has_nsag_r18; /**< nsag-r18 是否存在。 */
    NSAG_List_r17 nsag_r18; /**< ASN.1 nsag-r18；SEQUENCE OF NSAG_ID_r17，SIZE (1..8)；OPTIONAL。 */
    bool has_msg3_Repetitions_r18; /**< msg3-Repetitions-r18 是否存在。 */
    ReportedFeatureCombination_r18_Msg3_Repetitions_r18 msg3_Repetitions_r18; /**< ASN.1 msg3-Repetitions-r18；枚举；OPTIONAL。 */
    bool has_msg1_Repetitions_r18; /**< msg1-Repetitions-r18 是否存在。 */
    ReportedFeatureCombination_r18_Msg1_Repetitions_r18 msg1_Repetitions_r18; /**< ASN.1 msg1-Repetitions-r18；枚举；OPTIONAL。 */
    bool has_eRedCap_r18; /**< eRedCap-r18 是否存在。 */
    ReportedFeatureCombination_r18_ERedCap_r18 eRedCap_r18; /**< ASN.1 eRedCap-r18；枚举；OPTIONAL。 */
    bool has_triggered_S_NSSAI_List_r18; /**< triggered-S-NSSAI-List-r18 是否存在。 */
    S_NSSAI* triggered_S_NSSAI_List_r18_items; /**< ASN.1 triggered-S-NSSAI-List-r18；SEQUENCE OF S_NSSAI，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t triggered_S_NSSAI_List_r18_count; /**< triggered-S-NSSAI-List-r18 元素个数。 */
};


/**
 * @brief PerRAInfoList_v1800
 * @note ASN.1：PerRAInfoList-v1800；源文件第 2889 行。
 * @note PerRAInfoList-v1800 ::= SEQUENCE OF (size 1..200) OF PerRAInfo-v1800
 */
struct PerRAInfoList_v1800 {
    PerRAInfo_v1800* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RA_InformationCommon_r16_ExtGroup5
 * @note ASN.1：RA_InformationCommon_r16_ExtGroup5；源文件第 2853 行。
 */
struct RA_InformationCommon_r16_ExtGroup5 {
    bool has_usedFeatureCombination_r18; /**< usedFeatureCombination-r18 是否存在。 */
    ReportedFeatureCombination_r18 usedFeatureCombination_r18; /**< ASN.1 usedFeatureCombination-r18；结构体；OPTIONAL。 */
    bool has_triggeredFeatureCombination_r18; /**< triggeredFeatureCombination-r18 是否存在。 */
    ReportedFeatureCombination_r18 triggeredFeatureCombination_r18; /**< ASN.1 triggeredFeatureCombination-r18；结构体；OPTIONAL。 */
    bool has_startPreambleForThisPartition_r18; /**< startPreambleForThisPartition-r18 是否存在。 */
    int64_t startPreambleForThisPartition_r18; /**< ASN.1 startPreambleForThisPartition-r18；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_numberOfPreamblesPerSSB_ForThisPartition_r18; /**< numberOfPreamblesPerSSB-ForThisPartition-r18 是否存在。 */
    int64_t numberOfPreamblesPerSSB_ForThisPartition_r18; /**< ASN.1 numberOfPreamblesPerSSB-ForThisPartition-r18；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    bool has_attemptedBWP_InfoList_r18; /**< attemptedBWP-InfoList-r18 是否存在。 */
    AttemptedBWP_Info_r18* attemptedBWP_InfoList_r18_items; /**< ASN.1 attemptedBWP-InfoList-r18；SEQUENCE OF AttemptedBWP_Info_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t attemptedBWP_InfoList_r18_count; /**< attemptedBWP-InfoList-r18 元素个数。 */
    bool has_numberOfLBTFailures_r18; /**< numberOfLBTFailures-r18 是否存在。 */
    int64_t numberOfLBTFailures_r18; /**< ASN.1 numberOfLBTFailures-r18；INTEGER (1..128)，位宽 7 bit；OPTIONAL。 */
    bool has_perRAInfoList_v1800; /**< perRAInfoList-v1800 是否存在。 */
    PerRAInfoList_v1800 perRAInfoList_v1800; /**< ASN.1 perRAInfoList-v1800；SEQUENCE OF PerRAInfo_v1800，SIZE (1..200)；OPTIONAL。 */
    bool has_sdt_Failed_r18; /**< sdt-Failed-r18 是否存在。 */
    RA_InformationCommon_r16_ExtGroup5_Sdt_Failed_r18 sdt_Failed_r18; /**< ASN.1 sdt-Failed-r18；枚举；OPTIONAL。 */
    bool has_intendedSIBs_r18; /**< intendedSIBs-r18 是否存在。 */
    SIB_Type_r18* intendedSIBs_r18_items; /**< ASN.1 intendedSIBs-r18；SEQUENCE OF SIB_Type_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t intendedSIBs_r18_count; /**< intendedSIBs-r18 元素个数。 */
};


/**
 * @brief RA_InformationCommon_r16
 * @note ASN.1：RA-InformationCommon-r16；源文件第 2813 行。
 * @note RA-InformationCommon-r16 ::= SEQUENCE { absoluteFrequencyPointA-r16, locationAndBandwidth-r16, subcarrierS...
 */
struct RA_InformationCommon_r16 {
    ARFCN_ValueNR absoluteFrequencyPointA_r16; /**< ASN.1 absoluteFrequencyPointA-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    int64_t locationAndBandwidth_r16; /**< ASN.1 locationAndBandwidth-r16；INTEGER (0..37949)，位宽 16 bit。 */
    SubcarrierSpacing subcarrierSpacing_r16; /**< ASN.1 subcarrierSpacing-r16；枚举。 */
    bool has_msg1_FrequencyStart_r16; /**< msg1-FrequencyStart-r16 是否存在。 */
    int64_t msg1_FrequencyStart_r16; /**< ASN.1 msg1-FrequencyStart-r16；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    bool has_msg1_FrequencyStartCFRA_r16; /**< msg1-FrequencyStartCFRA-r16 是否存在。 */
    int64_t msg1_FrequencyStartCFRA_r16; /**< ASN.1 msg1-FrequencyStartCFRA-r16；INTEGER (0..274)，位宽 9 bit；OPTIONAL。 */
    bool has_msg1_SubcarrierSpacing_r16; /**< msg1-SubcarrierSpacing-r16 是否存在。 */
    SubcarrierSpacing msg1_SubcarrierSpacing_r16; /**< ASN.1 msg1-SubcarrierSpacing-r16；枚举；OPTIONAL。 */
    bool has_msg1_SubcarrierSpacingCFRA_r16; /**< msg1-SubcarrierSpacingCFRA-r16 是否存在。 */
    SubcarrierSpacing msg1_SubcarrierSpacingCFRA_r16; /**< ASN.1 msg1-SubcarrierSpacingCFRA-r16；枚举；OPTIONAL。 */
    bool has_msg1_FDM_r16; /**< msg1-FDM-r16 是否存在。 */
    RA_InformationCommon_r16_Msg1_FDM_r16 msg1_FDM_r16; /**< ASN.1 msg1-FDM-r16；枚举；OPTIONAL。 */
    bool has_msg1_FDMCFRA_r16; /**< msg1-FDMCFRA-r16 是否存在。 */
    RA_InformationCommon_r16_Msg1_FDMCFRA_r16 msg1_FDMCFRA_r16; /**< ASN.1 msg1-FDMCFRA-r16；枚举；OPTIONAL。 */
    PerRAInfoList_r16 perRAInfoList_r16; /**< ASN.1 perRAInfoList-r16；SEQUENCE OF PerRAInfo_r16，SIZE (1..200)。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RA_InformationCommon_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RA_InformationCommon_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    RA_InformationCommon_r16_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    RA_InformationCommon_r16_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    RA_InformationCommon_r16_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SPR_Cause_r18
 * @note ASN.1：SPR-Cause-r18；源文件第 3166 行。
 * @note SPR-Cause-r18 ::= SEQUENCE { t304-cause-r18, t310-cause-r18, t312-cause-r18 }
 */
struct SPR_Cause_r18 {
    bool has_t304_cause_r18; /**< t304-cause-r18 是否存在。 */
    SPR_Cause_r18_T304_cause_r18 t304_cause_r18; /**< ASN.1 t304-cause-r18；枚举；OPTIONAL。 */
    bool has_t310_cause_r18; /**< t310-cause-r18 是否存在。 */
    SPR_Cause_r18_T310_cause_r18 t310_cause_r18; /**< ASN.1 t310-cause-r18；枚举；OPTIONAL。 */
    bool has_t312_cause_r18; /**< t312-cause-r18 是否存在。 */
    SPR_Cause_r18_T312_cause_r18 t312_cause_r18; /**< ASN.1 t312-cause-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CGI_Info_Logging_r16
 * @note ASN.1：CGI-Info-Logging-r16；源文件第 5138 行。
 * @note CGI-Info-Logging-r16 ::= SEQUENCE { plmn-Identity-r16, cellIdentity-r16, trackingAreaCode-r16 }
 */
struct CGI_Info_Logging_r16 {
    PLMN_Identity plmn_Identity_r16; /**< ASN.1 plmn-Identity-r16；结构体。 */
    CellIdentity cellIdentity_r16; /**< ASN.1 cellIdentity-r16；SIZE (36)，定长。 */
    bool has_trackingAreaCode_r16; /**< trackingAreaCode-r16 是否存在。 */
    TrackingAreaCode trackingAreaCode_r16; /**< ASN.1 trackingAreaCode-r16；SIZE (24)，定长；OPTIONAL。 */
};


/**
 * @brief MeasQuantityResults
 * @note ASN.1：MeasQuantityResults；源文件第 8059 行。
 * @note MeasQuantityResults ::= SEQUENCE { rsrp, rsrq, sinr }
 */
struct MeasQuantityResults {
    bool has_rsrp; /**< rsrp 是否存在。 */
    RSRP_Range rsrp; /**< ASN.1 rsrp；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrq; /**< rsrq 是否存在。 */
    RSRQ_Range rsrq; /**< ASN.1 rsrq；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_sinr; /**< sinr 是否存在。 */
    SINR_Range sinr; /**< ASN.1 sinr；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17
 * @note ASN.1：measResult-r17/cellResults-r17；源文件第 3140 行。
 * @note SEQUENCE { resultsSSB-Cell-r17, resultsCSI-RS-Cell-r17 }
 */
struct MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17 {
    bool has_resultsSSB_Cell_r17; /**< resultsSSB-Cell-r17 是否存在。 */
    MeasQuantityResults resultsSSB_Cell_r17; /**< ASN.1 resultsSSB-Cell-r17；结构体；OPTIONAL。 */
    bool has_resultsCSI_RS_Cell_r17; /**< resultsCSI-RS-Cell-r17 是否存在。 */
    MeasQuantityResults resultsCSI_RS_Cell_r17; /**< ASN.1 resultsCSI-RS-Cell-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ResultsPerSSB_IndexList
 * @note ASN.1：ResultsPerSSB-IndexList；源文件第 8071 行。
 * @note ResultsPerSSB-IndexList ::= SEQUENCE OF (size 1..64) OF ResultsPerSSB-Index
 */
struct ResultsPerSSB_IndexList {
    ResultsPerSSB_Index* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ResultsPerCSI_RS_IndexList
 * @note ASN.1：ResultsPerCSI-RS-IndexList；源文件第 8078 行。
 * @note ResultsPerCSI-RS-IndexList ::= SEQUENCE OF (size 1..64) OF ResultsPerCSI-RS-Index
 */
struct ResultsPerCSI_RS_IndexList {
    ResultsPerCSI_RS_Index* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17
 * @note ASN.1：measResult-r17/rsIndexResults-r17；源文件第 3144 行。
 * @note SEQUENCE { resultsSSB-Indexes-r17, resultsCSI-RS-Indexes-r17 }
 */
struct MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17 {
    bool has_resultsSSB_Indexes_r17; /**< resultsSSB-Indexes-r17 是否存在。 */
    ResultsPerSSB_IndexList resultsSSB_Indexes_r17; /**< ASN.1 resultsSSB-Indexes-r17；SEQUENCE OF ResultsPerSSB_Index，SIZE (1..64)；OPTIONAL。 */
    bool has_resultsCSI_RS_Indexes_r17; /**< resultsCSI-RS-Indexes-r17 是否存在。 */
    ResultsPerCSI_RS_IndexList resultsCSI_RS_Indexes_r17; /**< ASN.1 resultsCSI-RS-Indexes-r17；SEQUENCE OF ResultsPerCSI_RS_Index，SIZE (1..64)；OPTIONAL。 */
};


/**
 * @brief MeasResultSuccessHONR_r17_MeasResult_r17
 * @note ASN.1：measResult-r17；源文件第 3139 行。
 * @note SEQUENCE { cellResults-r17, rsIndexResults-r17 }
 */
struct MeasResultSuccessHONR_r17_MeasResult_r17 {
    MeasResultSuccessHONR_r17_MeasResult_r17_CellResults_r17 cellResults_r17; /**< ASN.1 cellResults-r17；结构体。 */
    MeasResultSuccessHONR_r17_MeasResult_r17_RsIndexResults_r17 rsIndexResults_r17; /**< ASN.1 rsIndexResults-r17；结构体。 */
};


/**
 * @brief MeasResultSuccessHONR_r17
 * @note ASN.1：MeasResultSuccessHONR-r17；源文件第 3138 行。
 * @note MeasResultSuccessHONR-r17 ::= SEQUENCE { measResult-r17 }
 */
struct MeasResultSuccessHONR_r17 {
    MeasResultSuccessHONR_r17_MeasResult_r17 measResult_r17; /**< ASN.1 measResult-r17；结构体。 */
};


/**
 * @brief PCI_ARFCN_EUTRA_r16
 * @note ASN.1：PCI-ARFCN-EUTRA-r16；源文件第 9096 行。
 * @note PCI-ARFCN-EUTRA-r16 ::= SEQUENCE { physCellId-r16, carrierFreq-r16 }
 */
struct PCI_ARFCN_EUTRA_r16 {
    EUTRA_PhysCellId physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..503)，位宽 9 bit。 */
    ARFCN_ValueEUTRA carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..262143)，位宽 18 bit。 */
};


/**
 * @brief SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18
 * @note ASN.1：sourcePSCellInfo-r18/sourcePSCellId-r18；源文件第 3060 行。
 * @note CHOICE { cellGlobalId-r18, pci-arfcn-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag {
    SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_cellGlobalId_r18 = 0, /**< ASN.1 cellGlobalId-r18 */
    SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag_pci_arfcn_r18 = 1, /**< ASN.1 pci-arfcn-r18 */
} SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag;

struct SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18 {
    SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r18; /**< ASN.1 cellGlobalId-r18 */
        PCI_ARFCN_EUTRA_r16 pci_arfcn_r18; /**< ASN.1 pci-arfcn-r18 */
    } u;
};


/**
 * @brief SuccessPSCell_Report_r18_SourcePSCellInfo_r18
 * @note ASN.1：sourcePSCellInfo-r18；源文件第 3059 行。
 * @note SEQUENCE { sourcePSCellId-r18, sourcePSCellMeas-r18 }
 */
struct SuccessPSCell_Report_r18_SourcePSCellInfo_r18 {
    SuccessPSCell_Report_r18_SourcePSCellInfo_r18_SourcePSCellId_r18 sourcePSCellId_r18; /**< ASN.1 sourcePSCellId-r18；结构体。 */
    bool has_sourcePSCellMeas_r18; /**< sourcePSCellMeas-r18 是否存在。 */
    MeasResultSuccessHONR_r17 sourcePSCellMeas_r18; /**< ASN.1 sourcePSCellMeas-r18；结构体；OPTIONAL。 */
};


/**
 * @brief PCI_ARFCN_NR_r16
 * @note ASN.1：PCI-ARFCN-NR-r16；源文件第 9104 行。
 * @note PCI-ARFCN-NR-r16 ::= SEQUENCE { physCellId-r16, carrierFreq-r16 }
 */
struct PCI_ARFCN_NR_r16 {
    PhysCellId physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..1007)，位宽 10 bit。 */
    ARFCN_ValueNR carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
};


/**
 * @brief SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18
 * @note ASN.1：targetPSCellInfo-r18/targetPSCellId-r18；源文件第 3067 行。
 * @note CHOICE { cellGlobalId-r18, pci-arfcn-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag {
    SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_cellGlobalId_r18 = 0, /**< ASN.1 cellGlobalId-r18 */
    SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag_pci_arfcn_r18 = 1, /**< ASN.1 pci-arfcn-r18 */
} SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag;

struct SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18 {
    SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r18; /**< ASN.1 cellGlobalId-r18 */
        PCI_ARFCN_NR_r16 pci_arfcn_r18; /**< ASN.1 pci-arfcn-r18 */
    } u;
};


/**
 * @brief SuccessPSCell_Report_r18_TargetPSCellInfo_r18
 * @note ASN.1：targetPSCellInfo-r18；源文件第 3066 行。
 * @note SEQUENCE { targetPSCellId-r18, targetPSCellMeas-r18 }
 */
struct SuccessPSCell_Report_r18_TargetPSCellInfo_r18 {
    SuccessPSCell_Report_r18_TargetPSCellInfo_r18_TargetPSCellId_r18 targetPSCellId_r18; /**< ASN.1 targetPSCellId-r18；结构体。 */
    bool has_targetPSCellMeas_r18; /**< targetPSCellMeas-r18 是否存在。 */
    MeasResultSuccessHONR_r17 targetPSCellMeas_r18; /**< ASN.1 targetPSCellMeas-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultList2NR_r16
 * @note ASN.1：MeasResultList2NR-r16；源文件第 3094 行。
 * @note MeasResultList2NR-r16 ::= SEQUENCE OF (size 1..8) OF MeasResult2NR-r16
 */
struct MeasResultList2NR_r16 {
    MeasResult2NR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultList2EUTRA_r16
 * @note ASN.1：MeasResultList2EUTRA-r16；源文件第 3095 行。
 * @note MeasResultList2EUTRA-r16 ::= SEQUENCE OF (size 1..8) OF MeasResult2EUTRA-r16
 */
struct MeasResultList2EUTRA_r16 {
    MeasResult2EUTRA_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SuccessPSCell_Report_r18_MeasResultNeighCells_r18
 * @note ASN.1：measResultNeighCells-r18；源文件第 3073 行。
 * @note SEQUENCE { measResultListNR-r18, measResultListEUTRA-r18 }
 */
struct SuccessPSCell_Report_r18_MeasResultNeighCells_r18 {
    bool has_measResultListNR_r18; /**< measResultListNR-r18 是否存在。 */
    MeasResultList2NR_r16 measResultListNR_r18; /**< ASN.1 measResultListNR-r18；SEQUENCE OF MeasResult2NR_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultListEUTRA_r18; /**< measResultListEUTRA-r18 是否存在。 */
    MeasResultList2EUTRA_r16 measResultListEUTRA_r18; /**< ASN.1 measResultListEUTRA-r18；SEQUENCE OF MeasResult2EUTRA_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SuccessPSCell_Report_r18
 * @note ASN.1：SuccessPSCell-Report-r18；源文件第 3057 行。
 * @note SuccessPSCell-Report-r18 ::= SEQUENCE { pCellId-r18, sourcePSCellInfo-r18, targetPSCellInfo-r18, measResul...
 */
struct SuccessPSCell_Report_r18 {
    CGI_Info_Logging_r16 pCellId_r18; /**< ASN.1 pCellId-r18；结构体。 */
    bool has_sourcePSCellInfo_r18; /**< sourcePSCellInfo-r18 是否存在。 */
    SuccessPSCell_Report_r18_SourcePSCellInfo_r18 sourcePSCellInfo_r18; /**< ASN.1 sourcePSCellInfo-r18；结构体；OPTIONAL。 */
    SuccessPSCell_Report_r18_TargetPSCellInfo_r18 targetPSCellInfo_r18; /**< ASN.1 targetPSCellInfo-r18；结构体。 */
    bool has_measResultNeighCells_r18; /**< measResultNeighCells-r18 是否存在。 */
    SuccessPSCell_Report_r18_MeasResultNeighCells_r18 measResultNeighCells_r18; /**< ASN.1 measResultNeighCells-r18；结构体；OPTIONAL。 */
    bool has_spr_Cause_r18; /**< spr-Cause-r18 是否存在。 */
    SPR_Cause_r18 spr_Cause_r18; /**< ASN.1 spr-Cause-r18；结构体；OPTIONAL。 */
    bool has_timeSinceCPAC_Reconfig_r18; /**< timeSinceCPAC-Reconfig-r18 是否存在。 */
    TimeSinceCPAC_Reconfig_r18 timeSinceCPAC_Reconfig_r18; /**< ASN.1 timeSinceCPAC-Reconfig-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_locationInfo_r18; /**< locationInfo-r18 是否存在。 */
    LocationInfo_r16 locationInfo_r18; /**< ASN.1 locationInfo-r18；结构体；OPTIONAL。 */
    bool has_ra_InformationCommon_r18; /**< ra-InformationCommon-r18 是否存在。 */
    RA_InformationCommon_r16 ra_InformationCommon_r18; /**< ASN.1 ra-InformationCommon-r18；结构体；OPTIONAL。 */
    bool has_sn_InitiatedPSCellChange_r18; /**< sn-InitiatedPSCellChange-r18 是否存在。 */
    SuccessPSCell_Report_r18_Sn_InitiatedPSCellChange_r18 sn_InitiatedPSCellChange_r18; /**< ASN.1 sn-InitiatedPSCellChange-r18；枚举；OPTIONAL。 */
};


/**
 * @brief UEInformationResponse_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 2719 行。
 * @note SEQUENCE { }
 */
struct UEInformationResponse_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEInformationResponse_v1800_IEs
 * @note ASN.1：UEInformationResponse-v1800-IEs；源文件第 2715 行。
 * @note UEInformationResponse-v1800-IEs ::= SEQUENCE { flightPathInfoReport-r18, successPSCell-Report-r18, measResultRese...
 */
struct UEInformationResponse_v1800_IEs {
    bool has_flightPathInfoReport_r18; /**< flightPathInfoReport-r18 是否存在。 */
    FlightPathInfoReport_r18 flightPathInfoReport_r18; /**< ASN.1 flightPathInfoReport-r18；SEQUENCE OF WayPoint_r18，SIZE (0..20)；OPTIONAL。 */
    bool has_successPSCell_Report_r18; /**< successPSCell-Report-r18 是否存在。 */
    SuccessPSCell_Report_r18 successPSCell_Report_r18; /**< ASN.1 successPSCell-Report-r18；结构体；OPTIONAL。 */
    bool has_measResultReselectionNR_r18; /**< measResultReselectionNR-r18 是否存在。 */
    MeasResultIdleNR_r16 measResultReselectionNR_r18; /**< ASN.1 measResultReselectionNR-r18；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEInformationResponse_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ConnEstFailReportList_r17
 * @note ASN.1：ConnEstFailReportList-r17；源文件第 2772 行。
 * @note ConnEstFailReportList-r17 ::= SEQUENCE OF (size 1..4) OF ConnEstFailReport-r16
 */
struct ConnEstFailReportList_r17 {
    ConnEstFailReport_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultNeighFreqList_RSSI_r18
 * @note ASN.1：MeasResultNeighFreqList-RSSI-r18；源文件第 3085 行。
 * @note MeasResultNeighFreqList-RSSI-r18 ::= SEQUENCE OF (size 1..8) OF MeasResultNeighFreq-RSSI-r18
 */
struct MeasResultNeighFreqList_RSSI_r18 {
    MeasResultNeighFreq_RSSI_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasQuantityResultsEUTRA
 * @note ASN.1：MeasQuantityResultsEUTRA；源文件第 8065 行。
 * @note MeasQuantityResultsEUTRA ::= SEQUENCE { rsrp, rsrq, sinr }
 */
struct MeasQuantityResultsEUTRA {
    bool has_rsrp; /**< rsrp 是否存在。 */
    RSRP_RangeEUTRA rsrp; /**< ASN.1 rsrp；INTEGER (0..97)，位宽 7 bit；OPTIONAL。 */
    bool has_rsrq; /**< rsrq 是否存在。 */
    RSRQ_RangeEUTRA rsrq; /**< ASN.1 rsrq；INTEGER (0..34)，位宽 6 bit；OPTIONAL。 */
    bool has_sinr; /**< sinr 是否存在。 */
    SINR_RangeEUTRA sinr; /**< ASN.1 sinr；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18
 * @note ASN.1：eutraTargetCellInfo-r18/targetPCellId-r18；源文件第 3044 行。
 * @note CHOICE { cellGlobalId-r18, pci-arfcn-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag {
    SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_cellGlobalId_r18 = 0, /**< ASN.1 cellGlobalId-r18 */
    SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag_pci_arfcn_r18 = 1, /**< ASN.1 pci-arfcn-r18 */
} SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag;

struct SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18 {
    SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r18; /**< ASN.1 cellGlobalId-r18 */
        PCI_ARFCN_EUTRA_r16 pci_arfcn_r18; /**< ASN.1 pci-arfcn-r18 */
    } u;
};


/**
 * @brief SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18
 * @note ASN.1：eutraTargetCellInfo-r18；源文件第 3043 行。
 * @note SEQUENCE { targetPCellId-r18, targetCellMeas-r18 }
 */
struct SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18 {
    SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18_TargetPCellId_r18 targetPCellId_r18; /**< ASN.1 targetPCellId-r18；结构体。 */
    bool has_targetCellMeas_r18; /**< targetCellMeas-r18 是否存在。 */
    MeasQuantityResultsEUTRA targetCellMeas_r18; /**< ASN.1 targetCellMeas-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SuccessHO_Report_r17_ExtGroup1
 * @note ASN.1：SuccessHO_Report_r17_ExtGroup1；源文件第 3042 行。
 */
struct SuccessHO_Report_r17_ExtGroup1 {
    bool has_eutraTargetCellInfo_r18; /**< eutraTargetCellInfo-r18 是否存在。 */
    SuccessHO_Report_r17_ExtGroup1_EutraTargetCellInfo_r18 eutraTargetCellInfo_r18; /**< ASN.1 eutraTargetCellInfo-r18；结构体；OPTIONAL。 */
    bool has_measResultServCell_RSSI_r18; /**< measResultServCell-RSSI-r18 是否存在。 */
    RSSI_Range_r16 measResultServCell_RSSI_r18; /**< ASN.1 measResultServCell-RSSI-r18；INTEGER (0..76)，位宽 7 bit；OPTIONAL。 */
    bool has_measResultNeighFreqList_RSSI_r18; /**< measResultNeighFreqList-RSSI-r18 是否存在。 */
    MeasResultNeighFreqList_RSSI_r18 measResultNeighFreqList_RSSI_r18; /**< ASN.1 measResultNeighFreqList-RSSI-r18；SEQUENCE OF MeasResultNeighFreq_RSSI_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_eutra_C_RNTI_r18; /**< eutra-C-RNTI-r18 是否存在。 */
    EUTRA_C_RNTI eutra_C_RNTI_r18; /**< ASN.1 eutra-C-RNTI-r18；SIZE (16)，定长；OPTIONAL。 */
    bool has_timeSinceSHR_r18; /**< timeSinceSHR-r18 是否存在。 */
    TimeSinceSHR_r18 timeSinceSHR_r18; /**< ASN.1 timeSinceSHR-r18；INTEGER (0..172800)，位宽 18 bit；OPTIONAL。 */
};


/**
 * @brief SHR_Cause_r17
 * @note ASN.1：SHR-Cause-r17；源文件第 3158 行。
 * @note SHR-Cause-r17 ::= SEQUENCE { t304-cause-r17, t310-cause-r17, t312-cause-r17, sourceDAPS-Failure...
 */
struct SHR_Cause_r17 {
    bool has_t304_cause_r17; /**< t304-cause-r17 是否存在。 */
    SHR_Cause_r17_T304_cause_r17 t304_cause_r17; /**< ASN.1 t304-cause-r17；枚举；OPTIONAL。 */
    bool has_t310_cause_r17; /**< t310-cause-r17 是否存在。 */
    SHR_Cause_r17_T310_cause_r17 t310_cause_r17; /**< ASN.1 t310-cause-r17；枚举；OPTIONAL。 */
    bool has_t312_cause_r17; /**< t312-cause-r17 是否存在。 */
    SHR_Cause_r17_T312_cause_r17 t312_cause_r17; /**< ASN.1 t312-cause-r17；枚举；OPTIONAL。 */
    bool has_sourceDAPS_Failure_r17; /**< sourceDAPS-Failure-r17 是否存在。 */
    SHR_Cause_r17_SourceDAPS_Failure_r17 sourceDAPS_Failure_r17; /**< ASN.1 sourceDAPS-Failure-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SuccessHO_Report_r17_SourceCellInfo_r17
 * @note ASN.1：sourceCellInfo-r17；源文件第 3022 行。
 * @note SEQUENCE { sourcePCellId-r17, sourceCellMeas-r17, rlf-InSourceDAPS-r17 }
 */
struct SuccessHO_Report_r17_SourceCellInfo_r17 {
    CGI_Info_Logging_r16 sourcePCellId_r17; /**< ASN.1 sourcePCellId-r17；结构体。 */
    bool has_sourceCellMeas_r17; /**< sourceCellMeas-r17 是否存在。 */
    MeasResultSuccessHONR_r17 sourceCellMeas_r17; /**< ASN.1 sourceCellMeas-r17；结构体；OPTIONAL。 */
    bool has_rlf_InSourceDAPS_r17; /**< rlf-InSourceDAPS-r17 是否存在。 */
    SuccessHO_Report_r17_SourceCellInfo_r17_Rlf_InSourceDAPS_r17 rlf_InSourceDAPS_r17; /**< ASN.1 rlf-InSourceDAPS-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SuccessHO_Report_r17_TargetCellInfo_r17
 * @note ASN.1：targetCellInfo-r17；源文件第 3027 行。
 * @note SEQUENCE { targetPCellId-r17, targetCellMeas-r17 }
 */
struct SuccessHO_Report_r17_TargetCellInfo_r17 {
    CGI_Info_Logging_r16 targetPCellId_r17; /**< ASN.1 targetPCellId-r17；结构体。 */
    bool has_targetCellMeas_r17; /**< targetCellMeas-r17 是否存在。 */
    MeasResultSuccessHONR_r17 targetCellMeas_r17; /**< ASN.1 targetCellMeas-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SuccessHO_Report_r17_MeasResultNeighCells_r17
 * @note ASN.1：measResultNeighCells-r17；源文件第 3031 行。
 * @note SEQUENCE { measResultListNR-r17, measResultListEUTRA-r17 }
 */
struct SuccessHO_Report_r17_MeasResultNeighCells_r17 {
    bool has_measResultListNR_r17; /**< measResultListNR-r17 是否存在。 */
    MeasResultList2NR_r16 measResultListNR_r17; /**< ASN.1 measResultListNR-r17；SEQUENCE OF MeasResult2NR_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultListEUTRA_r17; /**< measResultListEUTRA-r17 是否存在。 */
    MeasResultList2EUTRA_r16 measResultListEUTRA_r17; /**< ASN.1 measResultListEUTRA-r17；SEQUENCE OF MeasResult2EUTRA_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief SuccessHO_Report_r17
 * @note ASN.1：SuccessHO-Report-r17；源文件第 3021 行。
 * @note SuccessHO-Report-r17 ::= SEQUENCE { sourceCellInfo-r17, targetCellInfo-r17, measResultNeighCells-r17, ...
 */
struct SuccessHO_Report_r17 {
    SuccessHO_Report_r17_SourceCellInfo_r17 sourceCellInfo_r17; /**< ASN.1 sourceCellInfo-r17；结构体。 */
    SuccessHO_Report_r17_TargetCellInfo_r17 targetCellInfo_r17; /**< ASN.1 targetCellInfo-r17；结构体。 */
    bool has_measResultNeighCells_r17; /**< measResultNeighCells-r17 是否存在。 */
    SuccessHO_Report_r17_MeasResultNeighCells_r17 measResultNeighCells_r17; /**< ASN.1 measResultNeighCells-r17；结构体；OPTIONAL。 */
    bool has_locationInfo_r17; /**< locationInfo-r17 是否存在。 */
    LocationInfo_r16 locationInfo_r17; /**< ASN.1 locationInfo-r17；结构体；OPTIONAL。 */
    bool has_timeSinceCHO_Reconfig_r17; /**< timeSinceCHO-Reconfig-r17 是否存在。 */
    TimeSinceCHO_Reconfig_r17 timeSinceCHO_Reconfig_r17; /**< ASN.1 timeSinceCHO-Reconfig-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_shr_Cause_r17; /**< shr-Cause-r17 是否存在。 */
    SHR_Cause_r17 shr_Cause_r17; /**< ASN.1 shr-Cause-r17；结构体；OPTIONAL。 */
    bool has_ra_InformationCommon_r17; /**< ra-InformationCommon-r17 是否存在。 */
    RA_InformationCommon_r16 ra_InformationCommon_r17; /**< ASN.1 ra-InformationCommon-r17；结构体；OPTIONAL。 */
    bool has_upInterruptionTimeAtHO_r17; /**< upInterruptionTimeAtHO-r17 是否存在。 */
    UPInterruptionTimeAtHO_r17 upInterruptionTimeAtHO_r17; /**< ASN.1 upInterruptionTimeAtHO-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_c_RNTI_r17; /**< c-RNTI-r17 是否存在。 */
    RNTI_Value c_RNTI_r17; /**< ASN.1 c-RNTI-r17；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SuccessHO_Report_r17_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UEInformationResponse_v1700_IEs
 * @note ASN.1：UEInformationResponse-v1700-IEs；源文件第 2708 行。
 * @note UEInformationResponse-v1700-IEs ::= SEQUENCE { successHO-Report-r17, connEstFailReportList-r17, coarseLocationInf...
 */
struct UEInformationResponse_v1700_IEs {
    bool has_successHO_Report_r17; /**< successHO-Report-r17 是否存在。 */
    SuccessHO_Report_r17 successHO_Report_r17; /**< ASN.1 successHO-Report-r17；结构体；OPTIONAL。 */
    bool has_connEstFailReportList_r17; /**< connEstFailReportList-r17 是否存在。 */
    ConnEstFailReportList_r17 connEstFailReportList_r17; /**< ASN.1 connEstFailReportList-r17；SEQUENCE OF ConnEstFailReport_r16，SIZE (1..4)；OPTIONAL。 */
    bool has_coarseLocationInfo_r17; /**< coarseLocationInfo-r17 是否存在。 */
    OctetString coarseLocationInfo_r17; /**< ASN.1 coarseLocationInfo-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEInformationResponse_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief LogMeasInfoList_r16
 * @note ASN.1：LogMeasInfoList-r16；源文件第 2741 行。
 * @note LogMeasInfoList-r16 ::= SEQUENCE OF (size 1..520) OF LogMeasInfo-r16
 */
struct LogMeasInfoList_r16 {
    LogMeasInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief LogMeasReport_r16
 * @note ASN.1：LogMeasReport-r16；源文件第 2729 行。
 * @note LogMeasReport-r16 ::= SEQUENCE { absoluteTimeStamp-r16, traceReference-r16, traceRecordingSessionRe...
 */
struct LogMeasReport_r16 {
    AbsoluteTimeInfo_r16 absoluteTimeStamp_r16; /**< ASN.1 absoluteTimeStamp-r16；SIZE (48)，定长。 */
    TraceReference_r16 traceReference_r16; /**< ASN.1 traceReference-r16；结构体。 */
    OctetString traceRecordingSessionRef_r16; /**< ASN.1 traceRecordingSessionRef-r16；SIZE (2)，定长。 */
    OctetString tce_Id_r16; /**< ASN.1 tce-Id-r16；SIZE (1)，定长。 */
    LogMeasInfoList_r16 logMeasInfoList_r16; /**< ASN.1 logMeasInfoList-r16；SEQUENCE OF LogMeasInfo_r16，SIZE (1..520)。 */
    bool has_logMeasAvailable_r16; /**< logMeasAvailable-r16 是否存在。 */
    LogMeasReport_r16_LogMeasAvailable_r16 logMeasAvailable_r16; /**< ASN.1 logMeasAvailable-r16；枚举；OPTIONAL。 */
    bool has_logMeasAvailableBT_r16; /**< logMeasAvailableBT-r16 是否存在。 */
    LogMeasReport_r16_LogMeasAvailableBT_r16 logMeasAvailableBT_r16; /**< ASN.1 logMeasAvailableBT-r16；枚举；OPTIONAL。 */
    bool has_logMeasAvailableWLAN_r16; /**< logMeasAvailableWLAN-r16 是否存在。 */
    LogMeasReport_r16_LogMeasAvailableWLAN_r16 logMeasAvailableWLAN_r16; /**< ASN.1 logMeasAvailableWLAN-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16
 * @note ASN.1：measResult-r16/cellResults-r16；源文件第 2786 行。
 * @note SEQUENCE { resultsSSB-Cell-r16 }
 */
struct MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16 {
    MeasQuantityResults resultsSSB_Cell_r16; /**< ASN.1 resultsSSB-Cell-r16；结构体。 */
};


/**
 * @brief MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16
 * @note ASN.1：measResult-r16/rsIndexResults-r16；源文件第 2789 行。
 * @note SEQUENCE { resultsSSB-Indexes-r16 }
 */
struct MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16 {
    ResultsPerSSB_IndexList resultsSSB_Indexes_r16; /**< ASN.1 resultsSSB-Indexes-r16；SEQUENCE OF ResultsPerSSB_Index，SIZE (1..64)。 */
};


/**
 * @brief MeasResultFailedCell_r16_MeasResult_r16
 * @note ASN.1：measResult-r16；源文件第 2785 行。
 * @note SEQUENCE { cellResults-r16, rsIndexResults-r16 }
 */
struct MeasResultFailedCell_r16_MeasResult_r16 {
    MeasResultFailedCell_r16_MeasResult_r16_CellResults_r16 cellResults_r16; /**< ASN.1 cellResults-r16；结构体。 */
    MeasResultFailedCell_r16_MeasResult_r16_RsIndexResults_r16 rsIndexResults_r16; /**< ASN.1 rsIndexResults-r16；结构体。 */
};


/**
 * @brief MeasResultFailedCell_r16
 * @note ASN.1：MeasResultFailedCell-r16；源文件第 2783 行。
 * @note MeasResultFailedCell-r16 ::= SEQUENCE { cgi-Info, measResult-r16 }
 */
struct MeasResultFailedCell_r16 {
    CGI_Info_Logging_r16 cgi_Info; /**< ASN.1 cgi-Info；结构体。 */
    MeasResultFailedCell_r16_MeasResult_r16 measResult_r16; /**< ASN.1 measResult-r16；结构体。 */
};


/**
 * @brief ConnEstFailReport_r16_MeasResultNeighCells_r16
 * @note ASN.1：measResultNeighCells-r16；源文件第 2762 行。
 * @note SEQUENCE { measResultNeighCellListNR, measResultNeighCellListEUTRA }
 */
struct ConnEstFailReport_r16_MeasResultNeighCells_r16 {
    bool has_measResultNeighCellListNR; /**< measResultNeighCellListNR 是否存在。 */
    MeasResultList2NR_r16 measResultNeighCellListNR; /**< ASN.1 measResultNeighCellListNR；SEQUENCE OF MeasResult2NR_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultNeighCellListEUTRA; /**< measResultNeighCellListEUTRA 是否存在。 */
    MeasResultList2EUTRA_r16 measResultNeighCellListEUTRA; /**< ASN.1 measResultNeighCellListEUTRA；SEQUENCE OF MeasResult2EUTRA_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief ConnEstFailReport_r16
 * @note ASN.1：ConnEstFailReport-r16；源文件第 2759 行。
 * @note ConnEstFailReport-r16 ::= SEQUENCE { measResultFailedCell-r16, locationInfo-r16, measResultNeighCells-r...
 */
struct ConnEstFailReport_r16 {
    MeasResultFailedCell_r16 measResultFailedCell_r16; /**< ASN.1 measResultFailedCell-r16；结构体。 */
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
    ConnEstFailReport_r16_MeasResultNeighCells_r16 measResultNeighCells_r16; /**< ASN.1 measResultNeighCells-r16；结构体。 */
    int64_t numberOfConnFail_r16; /**< ASN.1 numberOfConnFail-r16；INTEGER (1..8)，位宽 3 bit。 */
    PerRAInfoList_r16 perRAInfoList_r16; /**< ASN.1 perRAInfoList-r16；SEQUENCE OF PerRAInfo_r16，SIZE (1..200)。 */
    TimeSinceFailure_r16 timeSinceFailure_r16; /**< ASN.1 timeSinceFailure-r16；INTEGER (0..172800)，位宽 18 bit。 */
};


/**
 * @brief RA_ReportList_r16
 * @note ASN.1：RA-ReportList-r16；源文件第 2795 行。
 * @note RA-ReportList-r16 ::= SEQUENCE OF (size 1..8) OF RA-Report-r16
 */
struct RA_ReportList_r16 {
    RA_Report_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16
 * @note ASN.1：measResult-r16/cellResults-r16；源文件第 3125 行。
 * @note SEQUENCE { resultsSSB-Cell-r16, resultsCSI-RS-Cell-r16 }
 */
struct MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16 {
    bool has_resultsSSB_Cell_r16; /**< resultsSSB-Cell-r16 是否存在。 */
    MeasQuantityResults resultsSSB_Cell_r16; /**< ASN.1 resultsSSB-Cell-r16；结构体；OPTIONAL。 */
    bool has_resultsCSI_RS_Cell_r16; /**< resultsCSI-RS-Cell-r16 是否存在。 */
    MeasQuantityResults resultsCSI_RS_Cell_r16; /**< ASN.1 resultsCSI-RS-Cell-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16
 * @note ASN.1：measResult-r16/rsIndexResults-r16；源文件第 3129 行。
 * @note SEQUENCE { resultsSSB-Indexes-r16, ssbRLMConfigBitmap-r16, resultsCSI-RS-Inde...
 */
struct MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16 {
    bool has_resultsSSB_Indexes_r16; /**< resultsSSB-Indexes-r16 是否存在。 */
    ResultsPerSSB_IndexList resultsSSB_Indexes_r16; /**< ASN.1 resultsSSB-Indexes-r16；SEQUENCE OF ResultsPerSSB_Index，SIZE (1..64)；OPTIONAL。 */
    bool has_ssbRLMConfigBitmap_r16; /**< ssbRLMConfigBitmap-r16 是否存在。 */
    BitString ssbRLMConfigBitmap_r16; /**< ASN.1 ssbRLMConfigBitmap-r16；SIZE (64)，定长；OPTIONAL。 */
    bool has_resultsCSI_RS_Indexes_r16; /**< resultsCSI-RS-Indexes-r16 是否存在。 */
    ResultsPerCSI_RS_IndexList resultsCSI_RS_Indexes_r16; /**< ASN.1 resultsCSI-RS-Indexes-r16；SEQUENCE OF ResultsPerCSI_RS_Index，SIZE (1..64)；OPTIONAL。 */
    bool has_csi_rsRLMConfigBitmap_r16; /**< csi-rsRLMConfigBitmap-r16 是否存在。 */
    BitString csi_rsRLMConfigBitmap_r16; /**< ASN.1 csi-rsRLMConfigBitmap-r16；SIZE (96)，定长；OPTIONAL。 */
};


/**
 * @brief MeasResultRLFNR_r16_MeasResult_r16
 * @note ASN.1：measResult-r16；源文件第 3124 行。
 * @note SEQUENCE { cellResults-r16, rsIndexResults-r16 }
 */
struct MeasResultRLFNR_r16_MeasResult_r16 {
    MeasResultRLFNR_r16_MeasResult_r16_CellResults_r16 cellResults_r16; /**< ASN.1 cellResults-r16；结构体。 */
    bool has_rsIndexResults_r16; /**< rsIndexResults-r16 是否存在。 */
    MeasResultRLFNR_r16_MeasResult_r16_RsIndexResults_r16 rsIndexResults_r16; /**< ASN.1 rsIndexResults-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultRLFNR_r16
 * @note ASN.1：MeasResultRLFNR-r16；源文件第 3123 行。
 * @note MeasResultRLFNR-r16 ::= SEQUENCE { measResult-r16 }
 */
struct MeasResultRLFNR_r16 {
    MeasResultRLFNR_r16_MeasResult_r16 measResult_r16; /**< ASN.1 measResult-r16；结构体。 */
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1
 * @note ASN.1：RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1；源文件第 2979 行。
 */
struct RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1 {
    bool has_csi_rsRLMConfigBitmap_v1650; /**< csi-rsRLMConfigBitmap-v1650 是否存在。 */
    BitString csi_rsRLMConfigBitmap_v1650; /**< ASN.1 csi-rsRLMConfigBitmap-v1650；SIZE (96)，定长；OPTIONAL。 */
};


/**
 * @brief ChoCandidateCellList_r17
 * @note ASN.1：ChoCandidateCellList-r17；源文件第 3151 行。
 * @note ChoCandidateCellList-r17 ::= SEQUENCE OF (size 1..8) OF ChoCandidateCell-r17
 */
struct ChoCandidateCellList_r17 {
    ChoCandidateCell_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17
 * @note ASN.1：nr-RLF-Report-r16/choCellId-r17；源文件第 2986 行。
 * @note CHOICE { cellGlobalId-r17, pci-arfcn-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_cellGlobalId_r17 = 0, /**< ASN.1 cellGlobalId-r17 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag_pci_arfcn_r17 = 1, /**< ASN.1 pci-arfcn-r17 */
} RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17 {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r17; /**< ASN.1 cellGlobalId-r17 */
        PCI_ARFCN_NR_r16 pci_arfcn_r17; /**< ASN.1 pci-arfcn-r17 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2
 * @note ASN.1：RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2；源文件第 2982 行。
 */
struct RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2 {
    bool has_lastHO_Type_r17; /**< lastHO-Type-r17 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_LastHO_Type_r17 lastHO_Type_r17; /**< ASN.1 lastHO-Type-r17；枚举；OPTIONAL。 */
    bool has_timeConnSourceDAPS_Failure_r17; /**< timeConnSourceDAPS-Failure-r17 是否存在。 */
    TimeConnSourceDAPS_Failure_r17 timeConnSourceDAPS_Failure_r17; /**< ASN.1 timeConnSourceDAPS-Failure-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_timeSinceCHO_Reconfig_r17; /**< timeSinceCHO-Reconfig-r17 是否存在。 */
    TimeSinceCHO_Reconfig_r17 timeSinceCHO_Reconfig_r17; /**< ASN.1 timeSinceCHO-Reconfig-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_choCellId_r17; /**< choCellId-r17 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2_ChoCellId_r17 choCellId_r17; /**< ASN.1 choCellId-r17；结构体；OPTIONAL。 */
    bool has_choCandidateCellList_r17; /**< choCandidateCellList-r17 是否存在。 */
    ChoCandidateCellList_r17 choCandidateCellList_r17; /**< ASN.1 choCandidateCellList-r17；SEQUENCE OF ChoCandidateCell_r17，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief AttemptedBWP_Info_r18
 * @note ASN.1：AttemptedBWP-Info-r18；源文件第 2865 行。
 * @note AttemptedBWP-Info-r18 ::= SEQUENCE { locationAndBandwidth-r18, subcarrierSpacing-r18 }
 */
struct AttemptedBWP_Info_r18 {
    int64_t locationAndBandwidth_r18; /**< ASN.1 locationAndBandwidth-r18；INTEGER (0..37949)，位宽 16 bit。 */
    SubcarrierSpacing subcarrierSpacing_r18; /**< ASN.1 subcarrierSpacing-r18；枚举。 */
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18
 * @note ASN.1：nr-RLF-Report-r16/pSCellId-r18；源文件第 2993 行。
 * @note CHOICE { cellGlobalId-r18, pci-arfcn-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_cellGlobalId_r18 = 0, /**< ASN.1 cellGlobalId-r18 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag_pci_arfcn_r18 = 1, /**< ASN.1 pci-arfcn-r18 */
} RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18 {
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r18; /**< ASN.1 cellGlobalId-r18 */
        PCI_ARFCN_NR_r16 pci_arfcn_r18; /**< ASN.1 pci-arfcn-r18 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3
 * @note ASN.1：RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3；源文件第 2992 行。
 */
struct RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3 {
    bool has_pSCellId_r18; /**< pSCellId-r18 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_PSCellId_r18 pSCellId_r18; /**< ASN.1 pSCellId-r18；结构体；OPTIONAL。 */
    bool has_mcgRecoveryFailureCause_r18; /**< mcgRecoveryFailureCause-r18 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_McgRecoveryFailureCause_r18 mcgRecoveryFailureCause_r18; /**< ASN.1 mcgRecoveryFailureCause-r18；枚举；OPTIONAL。 */
    bool has_scgFailureCause_r18; /**< scgFailureCause-r18 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_ScgFailureCause_r18 scgFailureCause_r18; /**< ASN.1 scgFailureCause-r18；枚举；OPTIONAL。 */
    bool has_elapsedTimeSCGFailure_r18; /**< elapsedTimeSCGFailure-r18 是否存在。 */
    ElapsedTimeSCGFailure_r18 elapsedTimeSCGFailure_r18; /**< ASN.1 elapsedTimeSCGFailure-r18；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_voiceFallbackHO_r18; /**< voiceFallbackHO-r18 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3_VoiceFallbackHO_r18 voiceFallbackHO_r18; /**< ASN.1 voiceFallbackHO-r18；枚举；OPTIONAL。 */
    bool has_measResultLastServCell_RSSI_r18; /**< measResultLastServCell-RSSI-r18 是否存在。 */
    RSSI_Range_r16 measResultLastServCell_RSSI_r18; /**< ASN.1 measResultLastServCell-RSSI-r18；INTEGER (0..76)，位宽 7 bit；OPTIONAL。 */
    bool has_measResultNeighFreqList_RSSI_r18; /**< measResultNeighFreqList-RSSI-r18 是否存在。 */
    MeasResultNeighFreqList_RSSI_r18 measResultNeighFreqList_RSSI_r18; /**< ASN.1 measResultNeighFreqList-RSSI-r18；SEQUENCE OF MeasResultNeighFreq_RSSI_r18，SIZE (1..8)；OPTIONAL。 */
    bool has_bwp_Info_r18; /**< bwp-Info-r18 是否存在。 */
    AttemptedBWP_Info_r18 bwp_Info_r18; /**< ASN.1 bwp-Info-r18；结构体；OPTIONAL。 */
    bool has_elapsedTimeT316_r18; /**< elapsedTimeT316-r18 是否存在。 */
    ElapsedTimeT316_r18 elapsedTimeT316_r18; /**< ASN.1 elapsedTimeT316-r18；INTEGER (0..2000)，位宽 11 bit；OPTIONAL。 */
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16
 * @note ASN.1：nr-RLF-Report-r16/measResultNeighCells-r16；源文件第 2944 行。
 * @note SEQUENCE { measResultListNR-r16, measResultListEUTRA-r16 }
 */
struct RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16 {
    bool has_measResultListNR_r16; /**< measResultListNR-r16 是否存在。 */
    MeasResultList2NR_r16 measResultListNR_r16; /**< ASN.1 measResultListNR-r16；SEQUENCE OF MeasResult2NR_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultListEUTRA_r16; /**< measResultListEUTRA-r16 是否存在。 */
    MeasResultList2EUTRA_r16 measResultListEUTRA_r16; /**< ASN.1 measResultListEUTRA-r16；SEQUENCE OF MeasResult2EUTRA_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief CGI_InfoEUTRALogging
 * @note ASN.1：CGI-InfoEUTRALogging；源文件第 5107 行。
 * @note CGI-InfoEUTRALogging ::= SEQUENCE { plmn-Identity-eutra-5gc, trackingAreaCode-eutra-5gc, cellIdentity-...
 */
struct CGI_InfoEUTRALogging {
    bool has_plmn_Identity_eutra_5gc; /**< plmn-Identity-eutra-5gc 是否存在。 */
    PLMN_Identity plmn_Identity_eutra_5gc; /**< ASN.1 plmn-Identity-eutra-5gc；结构体；OPTIONAL。 */
    bool has_trackingAreaCode_eutra_5gc; /**< trackingAreaCode-eutra-5gc 是否存在。 */
    TrackingAreaCode trackingAreaCode_eutra_5gc; /**< ASN.1 trackingAreaCode-eutra-5gc；SIZE (24)，定长；OPTIONAL。 */
    bool has_cellIdentity_eutra_5gc; /**< cellIdentity-eutra-5gc 是否存在。 */
    BitString cellIdentity_eutra_5gc; /**< ASN.1 cellIdentity-eutra-5gc；SIZE (28)，定长；OPTIONAL。 */
    bool has_plmn_Identity_eutra_epc; /**< plmn-Identity-eutra-epc 是否存在。 */
    PLMN_Identity plmn_Identity_eutra_epc; /**< ASN.1 plmn-Identity-eutra-epc；结构体；OPTIONAL。 */
    bool has_trackingAreaCode_eutra_epc; /**< trackingAreaCode-eutra-epc 是否存在。 */
    BitString trackingAreaCode_eutra_epc; /**< ASN.1 trackingAreaCode-eutra-epc；SIZE (16)，定长；OPTIONAL。 */
    bool has_cellIdentity_eutra_epc; /**< cellIdentity-eutra-epc 是否存在。 */
    BitString cellIdentity_eutra_epc; /**< ASN.1 cellIdentity-eutra-epc；SIZE (28)，定长；OPTIONAL。 */
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16
 * @note ASN.1：nr-RLF-Report-r16/previousPCellId-r16；源文件第 2949 行。
 * @note CHOICE { nrPreviousCell-r16, eutraPreviousCell-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_nrPreviousCell_r16 = 0, /**< ASN.1 nrPreviousCell-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag_eutraPreviousCell_r16 = 1, /**< ASN.1 eutraPreviousCell-r16 */
} RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 nrPreviousCell_r16; /**< ASN.1 nrPreviousCell-r16 */
        CGI_InfoEUTRALogging eutraPreviousCell_r16; /**< ASN.1 eutraPreviousCell-r16 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16
 * @note ASN.1：nr-RLF-Report-r16/failedPCellId-r16/nrFailedPCellId-r16；源文件第 2954 行。
 * @note CHOICE { cellGlobalId-r16, pci-arfcn-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_cellGlobalId_r16 = 0, /**< ASN.1 cellGlobalId-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag_pci_arfcn_r16 = 1, /**< ASN.1 pci-arfcn-r16 */
} RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r16; /**< ASN.1 cellGlobalId-r16 */
        PCI_ARFCN_NR_r16 pci_arfcn_r16; /**< ASN.1 pci-arfcn-r16 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16
 * @note ASN.1：nr-RLF-Report-r16/failedPCellId-r16/eutraFailedPCellId-r16；源文件第 2958 行。
 * @note CHOICE { cellGlobalId-r16, pci-arfcn-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_cellGlobalId_r16 = 0, /**< ASN.1 cellGlobalId-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag_pci_arfcn_r16 = 1, /**< ASN.1 pci-arfcn-r16 */
} RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_InfoEUTRALogging cellGlobalId_r16; /**< ASN.1 cellGlobalId-r16 */
        PCI_ARFCN_EUTRA_r16 pci_arfcn_r16; /**< ASN.1 pci-arfcn-r16 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16
 * @note ASN.1：nr-RLF-Report-r16/failedPCellId-r16；源文件第 2953 行。
 * @note CHOICE { nrFailedPCellId-r16, eutraFailedPCellId-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_nrFailedPCellId_r16 = 0, /**< ASN.1 nrFailedPCellId-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag_eutraFailedPCellId_r16 = 1, /**< ASN.1 eutraFailedPCellId-r16 */
} RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_NrFailedPCellId_r16 nrFailedPCellId_r16; /**< ASN.1 nrFailedPCellId-r16 */
        RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16_EutraFailedPCellId_r16 eutraFailedPCellId_r16; /**< ASN.1 eutraFailedPCellId-r16 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16
 * @note ASN.1：nr-RLF-Report-r16/reconnectCellId-r16；源文件第 2963 行。
 * @note CHOICE { nrReconnectCellId-r16, eutraReconnectCellId-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag {
    RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_nrReconnectCellId_r16 = 0, /**< ASN.1 nrReconnectCellId-r16 */
    RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag_eutraReconnectCellId_r16 = 1, /**< ASN.1 eutraReconnectCellId-r16 */
} RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag;

struct RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16 {
    RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 nrReconnectCellId_r16; /**< ASN.1 nrReconnectCellId-r16 */
        CGI_InfoEUTRALogging eutraReconnectCellId_r16; /**< ASN.1 eutraReconnectCellId-r16 */
    } u;
};


/**
 * @brief RLF_Report_r16_Nr_RLF_Report_r16
 * @note ASN.1：nr-RLF-Report-r16；源文件第 2942 行。
 * @note SEQUENCE { measResultLastServCell-r16, measResultNeighCells-r16, c-RNTI-r16, ...
 */
struct RLF_Report_r16_Nr_RLF_Report_r16 {
    MeasResultRLFNR_r16 measResultLastServCell_r16; /**< ASN.1 measResultLastServCell-r16；结构体。 */
    bool has_measResultNeighCells_r16; /**< measResultNeighCells-r16 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_MeasResultNeighCells_r16 measResultNeighCells_r16; /**< ASN.1 measResultNeighCells-r16；结构体；OPTIONAL。 */
    RNTI_Value c_RNTI_r16; /**< ASN.1 c-RNTI-r16；INTEGER (0..65535)，位宽 16 bit。 */
    bool has_previousPCellId_r16; /**< previousPCellId-r16 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_PreviousPCellId_r16 previousPCellId_r16; /**< ASN.1 previousPCellId-r16；结构体；OPTIONAL。 */
    RLF_Report_r16_Nr_RLF_Report_r16_FailedPCellId_r16 failedPCellId_r16; /**< ASN.1 failedPCellId-r16；结构体。 */
    bool has_reconnectCellId_r16; /**< reconnectCellId-r16 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ReconnectCellId_r16 reconnectCellId_r16; /**< ASN.1 reconnectCellId-r16；结构体；OPTIONAL。 */
    bool has_timeUntilReconnection_r16; /**< timeUntilReconnection-r16 是否存在。 */
    TimeUntilReconnection_r16 timeUntilReconnection_r16; /**< ASN.1 timeUntilReconnection-r16；INTEGER (0..172800)，位宽 18 bit；OPTIONAL。 */
    bool has_reestablishmentCellId_r16; /**< reestablishmentCellId-r16 是否存在。 */
    CGI_Info_Logging_r16 reestablishmentCellId_r16; /**< ASN.1 reestablishmentCellId-r16；结构体；OPTIONAL。 */
    bool has_timeConnFailure_r16; /**< timeConnFailure-r16 是否存在。 */
    int64_t timeConnFailure_r16; /**< ASN.1 timeConnFailure-r16；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    TimeSinceFailure_r16 timeSinceFailure_r16; /**< ASN.1 timeSinceFailure-r16；INTEGER (0..172800)，位宽 18 bit。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ConnectionFailureType_r16 connectionFailureType_r16; /**< ASN.1 connectionFailureType-r16；枚举。 */
    RLF_Report_r16_Nr_RLF_Report_r16_Rlf_Cause_r16 rlf_Cause_r16; /**< ASN.1 rlf-Cause-r16；枚举。 */
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
    bool has_noSuitableCellFound_r16; /**< noSuitableCellFound-r16 是否存在。 */
    RLF_Report_r16_Nr_RLF_Report_r16_NoSuitableCellFound_r16 noSuitableCellFound_r16; /**< ASN.1 noSuitableCellFound-r16；枚举；OPTIONAL。 */
    bool has_ra_InformationCommon_r16; /**< ra-InformationCommon-r16 是否存在。 */
    RA_InformationCommon_r16 ra_InformationCommon_r16; /**< ASN.1 ra-InformationCommon-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    RLF_Report_r16_Nr_RLF_Report_r16_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1
 * @note ASN.1：RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1；源文件第 3015 行。
 */
struct RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1 {
    bool has_measResult_RLF_Report_EUTRA_v1690; /**< measResult-RLF-Report-EUTRA-v1690 是否存在。 */
    OctetString measResult_RLF_Report_EUTRA_v1690; /**< ASN.1 measResult-RLF-Report-EUTRA-v1690；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief RLF_Report_r16_Eutra_RLF_Report_r16
 * @note ASN.1：eutra-RLF-Report-r16；源文件第 3011 行。
 * @note SEQUENCE { failedPCellId-EUTRA, measResult-RLF-Report-EUTRA-r16, measResult-R...
 */
struct RLF_Report_r16_Eutra_RLF_Report_r16 {
    CGI_InfoEUTRALogging failedPCellId_EUTRA; /**< ASN.1 failedPCellId-EUTRA；结构体。 */
    OctetString measResult_RLF_Report_EUTRA_r16; /**< ASN.1 measResult-RLF-Report-EUTRA-r16；SIZE 无上界（半约束长度）。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RLF_Report_r16_Eutra_RLF_Report_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RLF_Report_r16
 * @note ASN.1：RLF-Report-r16；源文件第 2941 行。
 * @note RLF-Report-r16 ::= CHOICE { nr-RLF-Report-r16, eutra-RLF-Report-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RLF_Report_r16_Tag {
    RLF_Report_r16_Tag_nr_RLF_Report_r16 = 0, /**< ASN.1 nr-RLF-Report-r16 */
    RLF_Report_r16_Tag_eutra_RLF_Report_r16 = 1, /**< ASN.1 eutra-RLF-Report-r16 */
} RLF_Report_r16_Tag;

struct RLF_Report_r16 {
    RLF_Report_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RLF_Report_r16_Nr_RLF_Report_r16 nr_RLF_Report_r16; /**< ASN.1 nr-RLF-Report-r16 */
        RLF_Report_r16_Eutra_RLF_Report_r16 eutra_RLF_Report_r16; /**< ASN.1 eutra-RLF-Report-r16 */
    } u;
};


/**
 * @brief VisitedCellInfoList_r16
 * @note ASN.1：VisitedCellInfoList-r16；源文件第 21847 行。
 * @note VisitedCellInfoList-r16 ::= SEQUENCE OF (size 1..16) OF VisitedCellInfo-r16
 */
struct VisitedCellInfoList_r16 {
    VisitedCellInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UEInformationResponse_r16_IEs
 * @note ASN.1：UEInformationResponse-r16-IEs；源文件第 2696 行。
 * @note UEInformationResponse-r16-IEs ::= SEQUENCE { measResultIdleEUTRA-r16, measResultIdleNR-r16, logMeasReport-r16, ...
 */
struct UEInformationResponse_r16_IEs {
    bool has_measResultIdleEUTRA_r16; /**< measResultIdleEUTRA-r16 是否存在。 */
    MeasResultIdleEUTRA_r16 measResultIdleEUTRA_r16; /**< ASN.1 measResultIdleEUTRA-r16；结构体；OPTIONAL。 */
    bool has_measResultIdleNR_r16; /**< measResultIdleNR-r16 是否存在。 */
    MeasResultIdleNR_r16 measResultIdleNR_r16; /**< ASN.1 measResultIdleNR-r16；结构体；OPTIONAL。 */
    bool has_logMeasReport_r16; /**< logMeasReport-r16 是否存在。 */
    LogMeasReport_r16 logMeasReport_r16; /**< ASN.1 logMeasReport-r16；结构体；OPTIONAL。 */
    bool has_connEstFailReport_r16; /**< connEstFailReport-r16 是否存在。 */
    ConnEstFailReport_r16 connEstFailReport_r16; /**< ASN.1 connEstFailReport-r16；结构体；OPTIONAL。 */
    bool has_ra_ReportList_r16; /**< ra-ReportList-r16 是否存在。 */
    RA_ReportList_r16 ra_ReportList_r16; /**< ASN.1 ra-ReportList-r16；SEQUENCE OF RA_Report_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_rlf_Report_r16; /**< rlf-Report-r16 是否存在。 */
    RLF_Report_r16 rlf_Report_r16; /**< ASN.1 rlf-Report-r16；结构体；OPTIONAL。 */
    bool has_mobilityHistoryReport_r16; /**< mobilityHistoryReport-r16 是否存在。 */
    VisitedCellInfoList_r16 mobilityHistoryReport_r16; /**< ASN.1 mobilityHistoryReport-r16；SEQUENCE OF VisitedCellInfo_r16，SIZE (1..16)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEInformationResponse_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEInformationResponse_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 2692 行。
 * @note SEQUENCE { }
 */
struct UEInformationResponse_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEInformationResponse_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 2690 行。
 * @note CHOICE { ueInformationResponse-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UEInformationResponse_r16_CriticalExtensions_Tag {
    UEInformationResponse_r16_CriticalExtensions_Tag_ueInformationResponse_r16 = 0, /**< ASN.1 ueInformationResponse-r16 */
    UEInformationResponse_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} UEInformationResponse_r16_CriticalExtensions_Tag;

struct UEInformationResponse_r16_CriticalExtensions {
    UEInformationResponse_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UEInformationResponse_r16_IEs ueInformationResponse_r16; /**< ASN.1 ueInformationResponse-r16 */
        UEInformationResponse_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief UEInformationResponse_r16
 * @note ASN.1：UEInformationResponse-r16；源文件第 2688 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_UEInformationResponse_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note UEInformationResponse-r16 ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct UEInformationResponse_r16 {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    UEInformationResponse_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief WayPoint_r18
 * @note ASN.1：WayPoint-r18；源文件第 2724 行。
 * @note WayPoint-r18 ::= SEQUENCE { wayPointLocation-r18, timeStamp-r18 }
 */
struct WayPoint_r18 {
    OctetString wayPointLocation_r18; /**< ASN.1 wayPointLocation-r18；SIZE 无上界（半约束长度）。 */
    bool has_timeStamp_r18; /**< timeStamp-r18 是否存在。 */
    AbsoluteTimeInfo_r16 timeStamp_r18; /**< ASN.1 timeStamp-r18；SIZE (48)，定长；OPTIONAL。 */
};


/**
 * @brief LogMeasInfo_r16_ExtGroup1
 * @note ASN.1：LogMeasInfo_r16_ExtGroup1；源文件第 2754 行。
 */
struct LogMeasInfo_r16_ExtGroup1 {
    bool has_inDeviceCoexDetected_r17; /**< inDeviceCoexDetected-r17 是否存在。 */
    LogMeasInfo_r16_ExtGroup1_InDeviceCoexDetected_r17 inDeviceCoexDetected_r17; /**< ASN.1 inDeviceCoexDetected-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MeasResultServingCell_r16_ResultsSSB
 * @note ASN.1：resultsSSB；源文件第 2776 行。
 * @note SEQUENCE { best-ssb-Index, best-ssb-Results, numberOfGoodSSB }
 */
struct MeasResultServingCell_r16_ResultsSSB {
    SSB_Index best_ssb_Index; /**< ASN.1 best-ssb-Index；INTEGER (0..63)，位宽 6 bit。 */
    MeasQuantityResults best_ssb_Results; /**< ASN.1 best-ssb-Results；结构体。 */
    int64_t numberOfGoodSSB; /**< ASN.1 numberOfGoodSSB；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief MeasResultServingCell_r16
 * @note ASN.1：MeasResultServingCell-r16；源文件第 2774 行。
 * @note MeasResultServingCell-r16 ::= SEQUENCE { resultsSSB-Cell, resultsSSB }
 */
struct MeasResultServingCell_r16 {
    MeasQuantityResults resultsSSB_Cell; /**< ASN.1 resultsSSB-Cell；结构体。 */
    bool has_resultsSSB; /**< resultsSSB 是否存在。 */
    MeasResultServingCell_r16_ResultsSSB resultsSSB; /**< ASN.1 resultsSSB；结构体；OPTIONAL。 */
};


/**
 * @brief MeasResultListLogging2NR_r16
 * @note ASN.1：MeasResultListLogging2NR-r16；源文件第 3103 行。
 * @note MeasResultListLogging2NR-r16 ::= SEQUENCE OF (size 1..8) OF MeasResultLogging2NR-r16
 */
struct MeasResultListLogging2NR_r16 {
    MeasResultLogging2NR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief LogMeasInfo_r16_MeasResultNeighCells_r16
 * @note ASN.1：measResultNeighCells-r16；源文件第 2748 行。
 * @note SEQUENCE { measResultNeighCellListNR, measResultNeighCellListEUTRA }
 */
struct LogMeasInfo_r16_MeasResultNeighCells_r16 {
    bool has_measResultNeighCellListNR; /**< measResultNeighCellListNR 是否存在。 */
    MeasResultListLogging2NR_r16 measResultNeighCellListNR; /**< ASN.1 measResultNeighCellListNR；SEQUENCE OF MeasResultLogging2NR_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_measResultNeighCellListEUTRA; /**< measResultNeighCellListEUTRA 是否存在。 */
    MeasResultList2EUTRA_r16 measResultNeighCellListEUTRA; /**< ASN.1 measResultNeighCellListEUTRA；SEQUENCE OF MeasResult2EUTRA_r16，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief LogMeasInfo_r16
 * @note ASN.1：LogMeasInfo-r16；源文件第 2743 行。
 * @note LogMeasInfo-r16 ::= SEQUENCE { locationInfo-r16, relativeTimeStamp-r16, servCellIdentity-r16, mea...
 */
struct LogMeasInfo_r16 {
    bool has_locationInfo_r16; /**< locationInfo-r16 是否存在。 */
    LocationInfo_r16 locationInfo_r16; /**< ASN.1 locationInfo-r16；结构体；OPTIONAL。 */
    int64_t relativeTimeStamp_r16; /**< ASN.1 relativeTimeStamp-r16；INTEGER (0..7200)，位宽 13 bit。 */
    bool has_servCellIdentity_r16; /**< servCellIdentity-r16 是否存在。 */
    CGI_Info_Logging_r16 servCellIdentity_r16; /**< ASN.1 servCellIdentity-r16；结构体；OPTIONAL。 */
    bool has_measResultServingCell_r16; /**< measResultServingCell-r16 是否存在。 */
    MeasResultServingCell_r16 measResultServingCell_r16; /**< ASN.1 measResultServingCell-r16；结构体；OPTIONAL。 */
    LogMeasInfo_r16_MeasResultNeighCells_r16 measResultNeighCells_r16; /**< ASN.1 measResultNeighCells-r16；结构体。 */
    bool has_anyCellSelectionDetected_r16; /**< anyCellSelectionDetected-r16 是否存在。 */
    LogMeasInfo_r16_AnyCellSelectionDetected_r16 anyCellSelectionDetected_r16; /**< ASN.1 anyCellSelectionDetected-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    LogMeasInfo_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RA_Report_r16_ExtGroup1
 * @note ASN.1：RA_Report_r16_ExtGroup1；源文件第 2808 行。
 */
struct RA_Report_r16_ExtGroup1 {
    bool has_spCellID_r17; /**< spCellID-r17 是否存在。 */
    CGI_Info_Logging_r16 spCellID_r17; /**< ASN.1 spCellID-r17；结构体；OPTIONAL。 */
};


/**
 * @brief RA_Report_r16_CellId_r16
 * @note ASN.1：cellId-r16；源文件第 2798 行。
 * @note CHOICE { cellGlobalId-r16, pci-arfcn-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RA_Report_r16_CellId_r16_Tag {
    RA_Report_r16_CellId_r16_Tag_cellGlobalId_r16 = 0, /**< ASN.1 cellGlobalId-r16 */
    RA_Report_r16_CellId_r16_Tag_pci_arfcn_r16 = 1, /**< ASN.1 pci-arfcn-r16 */
} RA_Report_r16_CellId_r16_Tag;

struct RA_Report_r16_CellId_r16 {
    RA_Report_r16_CellId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r16; /**< ASN.1 cellGlobalId-r16 */
        PCI_ARFCN_NR_r16 pci_arfcn_r16; /**< ASN.1 pci-arfcn-r16 */
    } u;
};


/**
 * @brief RA_Report_r16
 * @note ASN.1：RA-Report-r16；源文件第 2797 行。
 * @note RA-Report-r16 ::= SEQUENCE { cellId-r16, ra-InformationCommon-r16, raPurpose-r16, spCellID-r17 }
 */
struct RA_Report_r16 {
    RA_Report_r16_CellId_r16 cellId_r16; /**< ASN.1 cellId-r16；结构体。 */
    bool has_ra_InformationCommon_r16; /**< ra-InformationCommon-r16 是否存在。 */
    RA_InformationCommon_r16 ra_InformationCommon_r16; /**< ASN.1 ra-InformationCommon-r16；结构体；OPTIONAL。 */
    RA_Report_r16_RaPurpose_r16 raPurpose_r16; /**< ASN.1 raPurpose-r16；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RA_Report_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PerRAAttemptInfoList_r16
 * @note ASN.1：PerRAAttemptInfoList-r16；源文件第 2923 行。
 * @note PerRAAttemptInfoList-r16 ::= SEQUENCE OF (size 1..200) OF PerRAAttemptInfo-r16
 */
struct PerRAAttemptInfoList_r16 {
    PerRAAttemptInfo_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PerRASSBInfo_r16
 * @note ASN.1：PerRASSBInfo-r16；源文件第 2896 行。
 * @note PerRASSBInfo-r16 ::= SEQUENCE { ssb-Index-r16, numberOfPreamblesSentOnSSB-r16, perRAAttemptInfoLis...
 */
struct PerRASSBInfo_r16 {
    SSB_Index ssb_Index_r16; /**< ASN.1 ssb-Index-r16；INTEGER (0..63)，位宽 6 bit。 */
    int64_t numberOfPreamblesSentOnSSB_r16; /**< ASN.1 numberOfPreamblesSentOnSSB-r16；INTEGER (1..200)，位宽 8 bit。 */
    PerRAAttemptInfoList_r16 perRAAttemptInfoList_r16; /**< ASN.1 perRAAttemptInfoList-r16；SEQUENCE OF PerRAAttemptInfo_r16，SIZE (1..200)。 */
};


/**
 * @brief PerRACSI_RSInfo_r16
 * @note ASN.1：PerRACSI-RSInfo-r16；源文件第 2908 行。
 * @note PerRACSI-RSInfo-r16 ::= SEQUENCE { csi-RS-Index-r16, numberOfPreamblesSentOnCSI-RS-r16 }
 */
struct PerRACSI_RSInfo_r16 {
    CSI_RS_Index csi_RS_Index_r16; /**< ASN.1 csi-RS-Index-r16；INTEGER (0..95)，位宽 7 bit。 */
    int64_t numberOfPreamblesSentOnCSI_RS_r16; /**< ASN.1 numberOfPreamblesSentOnCSI-RS-r16；INTEGER (1..200)，位宽 8 bit。 */
};


/**
 * @brief PerRAInfo_r16
 * @note ASN.1：PerRAInfo-r16；源文件第 2884 行。
 * @note PerRAInfo-r16 ::= CHOICE { perRASSBInfoList-r16, perRACSI-RSInfoList-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PerRAInfo_r16_Tag {
    PerRAInfo_r16_Tag_perRASSBInfoList_r16 = 0, /**< ASN.1 perRASSBInfoList-r16 */
    PerRAInfo_r16_Tag_perRACSI_RSInfoList_r16 = 1, /**< ASN.1 perRACSI-RSInfoList-r16 */
} PerRAInfo_r16_Tag;

struct PerRAInfo_r16 {
    PerRAInfo_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PerRASSBInfo_r16 perRASSBInfoList_r16; /**< ASN.1 perRASSBInfoList-r16 */
        PerRACSI_RSInfo_r16 perRACSI_RSInfoList_r16; /**< ASN.1 perRACSI-RSInfoList-r16 */
    } u;
};


/**
 * @brief PerRASSBInfo_v1800
 * @note ASN.1：PerRASSBInfo-v1800；源文件第 2902 行。
 * @note PerRASSBInfo-v1800 ::= SEQUENCE { allPreamblesBlocked, lbt-Detected-r18 }
 */
struct PerRASSBInfo_v1800 {
    bool has_allPreamblesBlocked; /**< allPreamblesBlocked 是否存在。 */
    PerRASSBInfo_v1800_AllPreamblesBlocked allPreamblesBlocked; /**< ASN.1 allPreamblesBlocked；枚举；OPTIONAL。 */
    bool has_lbt_Detected_r18; /**< lbt-Detected-r18 是否存在。 */
    PerRASSBInfo_v1800_Lbt_Detected_r18 lbt_Detected_r18; /**< ASN.1 lbt-Detected-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PerRACSI_RSInfo_v1800
 * @note ASN.1：PerRACSI-RSInfo-v1800；源文件第 2917 行。
 * @note PerRACSI-RSInfo-v1800 ::= SEQUENCE { allPreamblesBlocked, lbt-Detected-r18 }
 */
struct PerRACSI_RSInfo_v1800 {
    bool has_allPreamblesBlocked; /**< allPreamblesBlocked 是否存在。 */
    PerRACSI_RSInfo_v1800_AllPreamblesBlocked allPreamblesBlocked; /**< ASN.1 allPreamblesBlocked；枚举；OPTIONAL。 */
    bool has_lbt_Detected_r18; /**< lbt-Detected-r18 是否存在。 */
    PerRACSI_RSInfo_v1800_Lbt_Detected_r18 lbt_Detected_r18; /**< ASN.1 lbt-Detected-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PerRAInfo_v1800
 * @note ASN.1：PerRAInfo-v1800；源文件第 2891 行。
 * @note PerRAInfo-v1800 ::= CHOICE { perRASSBInfoList-v1800, perRACSI-RSInfoList-v1800 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PerRAInfo_v1800_Tag {
    PerRAInfo_v1800_Tag_perRASSBInfoList_v1800 = 0, /**< ASN.1 perRASSBInfoList-v1800 */
    PerRAInfo_v1800_Tag_perRACSI_RSInfoList_v1800 = 1, /**< ASN.1 perRACSI-RSInfoList-v1800 */
} PerRAInfo_v1800_Tag;

struct PerRAInfo_v1800 {
    PerRAInfo_v1800_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PerRASSBInfo_v1800 perRASSBInfoList_v1800; /**< ASN.1 perRASSBInfoList-v1800 */
        PerRACSI_RSInfo_v1800 perRACSI_RSInfoList_v1800; /**< ASN.1 perRACSI-RSInfoList-v1800 */
    } u;
};


/**
 * @brief PerRACSI_RSInfo_v1660
 * @note ASN.1：PerRACSI-RSInfo-v1660；源文件第 2913 行。
 * @note PerRACSI-RSInfo-v1660 ::= SEQUENCE { csi-RS-Index-v1660 }
 */
struct PerRACSI_RSInfo_v1660 {
    bool has_csi_RS_Index_v1660; /**< csi-RS-Index-v1660 是否存在。 */
    int64_t csi_RS_Index_v1660; /**< ASN.1 csi-RS-Index-v1660；INTEGER (1..96)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief PerRAAttemptInfo_r16_ExtGroup1
 * @note ASN.1：PerRAAttemptInfo_r16_ExtGroup1；源文件第 2929 行。
 */
struct PerRAAttemptInfo_r16_ExtGroup1 {
    bool has_fallbackToFourStepRA_r17; /**< fallbackToFourStepRA-r17 是否存在。 */
    PerRAAttemptInfo_r16_ExtGroup1_FallbackToFourStepRA_r17 fallbackToFourStepRA_r17; /**< ASN.1 fallbackToFourStepRA-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PerRAAttemptInfo_r16
 * @note ASN.1：PerRAAttemptInfo-r16；源文件第 2925 行。
 * @note PerRAAttemptInfo-r16 ::= SEQUENCE { contentionDetected-r16, dlRSRPAboveThreshold-r16, fallbackToFourSt...
 */
struct PerRAAttemptInfo_r16 {
    bool has_contentionDetected_r16; /**< contentionDetected-r16 是否存在。 */
    bool contentionDetected_r16; /**< ASN.1 contentionDetected-r16；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_dlRSRPAboveThreshold_r16; /**< dlRSRPAboveThreshold-r16 是否存在。 */
    bool dlRSRPAboveThreshold_r16; /**< ASN.1 dlRSRPAboveThreshold-r16；BOOLEAN，1 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PerRAAttemptInfo_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasResultNeighFreq_RSSI_r18
 * @note ASN.1：MeasResultNeighFreq-RSSI-r18；源文件第 3087 行。
 * @note MeasResultNeighFreq-RSSI-r18 ::= SEQUENCE { ssbFrequency-r18, ssbSubcarrierSpacing-r18, refFreqCSI-RS-r18, mea...
 */
struct MeasResultNeighFreq_RSSI_r18 {
    bool has_ssbFrequency_r18; /**< ssbFrequency-r18 是否存在。 */
    ARFCN_ValueNR ssbFrequency_r18; /**< ASN.1 ssbFrequency-r18；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_ssbSubcarrierSpacing_r18; /**< ssbSubcarrierSpacing-r18 是否存在。 */
    SubcarrierSpacing ssbSubcarrierSpacing_r18; /**< ASN.1 ssbSubcarrierSpacing-r18；枚举；OPTIONAL。 */
    bool has_refFreqCSI_RS_r18; /**< refFreqCSI-RS-r18 是否存在。 */
    ARFCN_ValueNR refFreqCSI_RS_r18; /**< ASN.1 refFreqCSI-RS-r18；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_measResult_RSSI_r18; /**< measResult-RSSI-r18 是否存在。 */
    RSSI_Range_r16 measResult_RSSI_r18; /**< ASN.1 measResult-RSSI-r18；INTEGER (0..76)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MeasResult2NR_r16
 * @note ASN.1：MeasResult2NR-r16；源文件第 3097 行。
 * @note MeasResult2NR-r16 ::= SEQUENCE { ssbFrequency-r16, refFreqCSI-RS-r16, measResultList-r16 }
 */
struct MeasResult2NR_r16 {
    bool has_ssbFrequency_r16; /**< ssbFrequency-r16 是否存在。 */
    ARFCN_ValueNR ssbFrequency_r16; /**< ASN.1 ssbFrequency-r16；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_refFreqCSI_RS_r16; /**< refFreqCSI-RS-r16 是否存在。 */
    ARFCN_ValueNR refFreqCSI_RS_r16; /**< ASN.1 refFreqCSI-RS-r16；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    MeasResultListNR measResultList_r16; /**< ASN.1 measResultList-r16；SEQUENCE OF MeasResultNR，SIZE (1..8)。 */
};


/**
 * @brief MeasResultListLoggingNR_r16
 * @note ASN.1：MeasResultListLoggingNR-r16；源文件第 3110 行。
 * @note MeasResultListLoggingNR-r16 ::= SEQUENCE OF (size 1..8) OF MeasResultLoggingNR-r16
 */
struct MeasResultListLoggingNR_r16 {
    MeasResultLoggingNR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasResultLogging2NR_r16
 * @note ASN.1：MeasResultLogging2NR-r16；源文件第 3105 行。
 * @note MeasResultLogging2NR-r16 ::= SEQUENCE { carrierFreq-r16, measResultListLoggingNR-r16 }
 */
struct MeasResultLogging2NR_r16 {
    ARFCN_ValueNR carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    MeasResultListLoggingNR_r16 measResultListLoggingNR_r16; /**< ASN.1 measResultListLoggingNR-r16；SEQUENCE OF MeasResultLoggingNR_r16，SIZE (1..8)。 */
};


/**
 * @brief MeasResultLoggingNR_r16
 * @note ASN.1：MeasResultLoggingNR-r16；源文件第 3112 行。
 * @note MeasResultLoggingNR-r16 ::= SEQUENCE { physCellId-r16, resultsSSB-Cell-r16, numberOfGoodSSB-r16 }
 */
struct MeasResultLoggingNR_r16 {
    PhysCellId physCellId_r16; /**< ASN.1 physCellId-r16；INTEGER (0..1007)，位宽 10 bit。 */
    MeasQuantityResults resultsSSB_Cell_r16; /**< ASN.1 resultsSSB-Cell-r16；结构体。 */
    bool has_numberOfGoodSSB_r16; /**< numberOfGoodSSB-r16 是否存在。 */
    int64_t numberOfGoodSSB_r16; /**< ASN.1 numberOfGoodSSB-r16；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief MeasResult2EUTRA_r16
 * @note ASN.1：MeasResult2EUTRA-r16；源文件第 3118 行。
 * @note MeasResult2EUTRA-r16 ::= SEQUENCE { carrierFreq-r16, measResultList-r16 }
 */
struct MeasResult2EUTRA_r16 {
    ARFCN_ValueEUTRA carrierFreq_r16; /**< ASN.1 carrierFreq-r16；INTEGER (0..262143)，位宽 18 bit。 */
    MeasResultListEUTRA measResultList_r16; /**< ASN.1 measResultList-r16；SEQUENCE OF MeasResultEUTRA，SIZE (1..8)。 */
};


/**
 * @brief ChoCandidateCell_r17
 * @note ASN.1：ChoCandidateCell-r17；源文件第 3153 行。
 * @note ChoCandidateCell-r17 ::= CHOICE { cellGlobalId-r17, pci-arfcn-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ChoCandidateCell_r17_Tag {
    ChoCandidateCell_r17_Tag_cellGlobalId_r17 = 0, /**< ASN.1 cellGlobalId-r17 */
    ChoCandidateCell_r17_Tag_pci_arfcn_r17 = 1, /**< ASN.1 pci-arfcn-r17 */
} ChoCandidateCell_r17_Tag;

struct ChoCandidateCell_r17 {
    ChoCandidateCell_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CGI_Info_Logging_r16 cellGlobalId_r17; /**< ASN.1 cellGlobalId-r17 */
        PCI_ARFCN_NR_r16 pci_arfcn_r17; /**< ASN.1 pci-arfcn-r17 */
    } u;
};


/**
 * @brief UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 3212 行。
 * @note SEQUENCE { }
 */
struct UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEPositioningAssistanceInfo_v1720_IEs
 * @note ASN.1：UEPositioningAssistanceInfo-v1720-IEs；源文件第 3209 行。
 * @note UEPositioningAssistanceInfo-v1720-IEs ::= SEQUENCE { ue-TxTEG-TimingErrorMarginValue-r17, nonCriticalExtension }
 */
struct UEPositioningAssistanceInfo_v1720_IEs {
    bool has_ue_TxTEG_TimingErrorMarginValue_r17; /**< ue-TxTEG-TimingErrorMarginValue-r17 是否存在。 */
    UEPositioningAssistanceInfo_v1720_IEs_Ue_TxTEG_TimingErrorMarginValue_r17 ue_TxTEG_TimingErrorMarginValue_r17; /**< ASN.1 ue-TxTEG-TimingErrorMarginValue-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEPositioningAssistanceInfo_v1720_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UE_TxTEG_AssociationList_r17
 * @note ASN.1：UE-TxTEG-AssociationList-r17；源文件第 3215 行。
 * @note UE-TxTEG-AssociationList-r17 ::= SEQUENCE OF (size 1..256) OF UE-TxTEG-Association-r17
 */
struct UE_TxTEG_AssociationList_r17 {
    UE_TxTEG_Association_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UEPositioningAssistanceInfo_r17_IEs
 * @note ASN.1：UEPositioningAssistanceInfo-r17-IEs；源文件第 3203 行。
 * @note UEPositioningAssistanceInfo-r17-IEs ::= SEQUENCE { ue-TxTEG-AssociationList-r17, lateNonCriticalExtension, nonCritica...
 */
struct UEPositioningAssistanceInfo_r17_IEs {
    bool has_ue_TxTEG_AssociationList_r17; /**< ue-TxTEG-AssociationList-r17 是否存在。 */
    UE_TxTEG_AssociationList_r17 ue_TxTEG_AssociationList_r17; /**< ASN.1 ue-TxTEG-AssociationList-r17；SEQUENCE OF UE_TxTEG_Association_r17，SIZE (1..256)；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    UEPositioningAssistanceInfo_v1720_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 3199 行。
 * @note SEQUENCE { }
 */
struct UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief UEPositioningAssistanceInfo_r17_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 3197 行。
 * @note CHOICE { uePositioningAssistanceInfo-r17, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag {
    UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_uePositioningAssistanceInfo_r17 = 0, /**< ASN.1 uePositioningAssistanceInfo-r17 */
    UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag;

struct UEPositioningAssistanceInfo_r17_CriticalExtensions {
    UEPositioningAssistanceInfo_r17_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UEPositioningAssistanceInfo_r17_IEs uePositioningAssistanceInfo_r17; /**< ASN.1 uePositioningAssistanceInfo-r17 */
        UEPositioningAssistanceInfo_r17_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief UEPositioningAssistanceInfo_r17
 * @note ASN.1：UEPositioningAssistanceInfo-r17；源文件第 3196 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_UEPositioningAssistanceInfo_r17（包装位 3 级，入口 3 个 CHOICE）。
 * @note UEPositioningAssistanceInfo-r17 ::= SEQUENCE { criticalExtensions }
 */
struct UEPositioningAssistanceInfo_r17 {
    UEPositioningAssistanceInfo_r17_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief NR_TimeStamp_r17_Nr_Slot_r17
 * @note ASN.1：nr-Slot-r17；源文件第 3226 行。
 * @note CHOICE { scs15-r17, scs30-r17, scs60-r17, scs120-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_TimeStamp_r17_Nr_Slot_r17_Tag {
    NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs15_r17 = 0, /**< ASN.1 scs15-r17 */
    NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs30_r17 = 1, /**< ASN.1 scs30-r17 */
    NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs60_r17 = 2, /**< ASN.1 scs60-r17 */
    NR_TimeStamp_r17_Nr_Slot_r17_Tag_scs120_r17 = 3, /**< ASN.1 scs120-r17 */
} NR_TimeStamp_r17_Nr_Slot_r17_Tag;

struct NR_TimeStamp_r17_Nr_Slot_r17 {
    NR_TimeStamp_r17_Nr_Slot_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t scs15_r17; /**< ASN.1 scs15-r17 */
        int64_t scs30_r17; /**< ASN.1 scs30-r17 */
        int64_t scs60_r17; /**< ASN.1 scs60-r17 */
        int64_t scs120_r17; /**< ASN.1 scs120-r17 */
    } u;
};


/**
 * @brief NR_TimeStamp_r17
 * @note ASN.1：NR-TimeStamp-r17；源文件第 3224 行。
 * @note NR-TimeStamp-r17 ::= SEQUENCE { nr-SFN-r17, nr-Slot-r17 }
 */
struct NR_TimeStamp_r17 {
    int64_t nr_SFN_r17; /**< ASN.1 nr-SFN-r17；INTEGER (0..1023)，位宽 10 bit。 */
    NR_TimeStamp_r17_Nr_Slot_r17 nr_Slot_r17; /**< ASN.1 nr-Slot-r17；结构体。 */
};


/**
 * @brief UE_TxTEG_Association_r17
 * @note ASN.1：UE-TxTEG-Association-r17；源文件第 3217 行。
 * @note UE-TxTEG-Association-r17 ::= SEQUENCE { ue-TxTEG-ID-r17, nr-TimeStamp-r17, associatedSRS-PosResourceIdList...
 */
struct UE_TxTEG_Association_r17 {
    int64_t ue_TxTEG_ID_r17; /**< ASN.1 ue-TxTEG-ID-r17；INTEGER (0..7)，位宽 3 bit。 */
    NR_TimeStamp_r17 nr_TimeStamp_r17; /**< ASN.1 nr-TimeStamp-r17；结构体。 */
    SRS_PosResourceId_r16* associatedSRS_PosResourceIdList_r17_items; /**< ASN.1 associatedSRS-PosResourceIdList-r17；SEQUENCE OF SRS_PosResourceId_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t associatedSRS_PosResourceIdList_r17_count; /**< associatedSRS-PosResourceIdList-r17 元素个数。 */
    bool has_servCellId_r17; /**< servCellId-r17 是否存在。 */
    ServCellIndex servCellId_r17; /**< ASN.1 servCellId-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 3250 行。
 * @note SEQUENCE { }
 */
struct ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULDedicatedMessageSegment_r16_IEs
 * @note ASN.1：ULDedicatedMessageSegment-r16-IEs；源文件第 3245 行。
 * @note ULDedicatedMessageSegment-r16-IEs ::= SEQUENCE { segmentNumber-r16, rrc-MessageSegmentContainer-r16, rrc-MessageSeg...
 */
struct ULDedicatedMessageSegment_r16_IEs {
    int64_t segmentNumber_r16; /**< ASN.1 segmentNumber-r16；INTEGER (0..15)，位宽 4 bit。 */
    OctetString rrc_MessageSegmentContainer_r16; /**< ASN.1 rrc-MessageSegmentContainer-r16；SIZE 无上界（半约束长度）。 */
    ULDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16 rrc_MessageSegmentType_r16; /**< ASN.1 rrc-MessageSegmentType-r16；枚举。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    ULDedicatedMessageSegment_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ULDedicatedMessageSegment_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 3241 行。
 * @note SEQUENCE { }
 */
struct ULDedicatedMessageSegment_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULDedicatedMessageSegment_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 3239 行。
 * @note CHOICE { ulDedicatedMessageSegment-r16, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ULDedicatedMessageSegment_r16_CriticalExtensions_Tag {
    ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_ulDedicatedMessageSegment_r16 = 0, /**< ASN.1 ulDedicatedMessageSegment-r16 */
    ULDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} ULDedicatedMessageSegment_r16_CriticalExtensions_Tag;

struct ULDedicatedMessageSegment_r16_CriticalExtensions {
    ULDedicatedMessageSegment_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ULDedicatedMessageSegment_r16_IEs ulDedicatedMessageSegment_r16; /**< ASN.1 ulDedicatedMessageSegment-r16 */
        ULDedicatedMessageSegment_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief ULDedicatedMessageSegment_r16
 * @note ASN.1：ULDedicatedMessageSegment-r16；源文件第 3238 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_ULDedicatedMessageSegment_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note ULDedicatedMessageSegment-r16 ::= SEQUENCE { criticalExtensions }
 */
struct ULDedicatedMessageSegment_r16 {
    ULDedicatedMessageSegment_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ULInformationTransfer_v1700_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 3271 行。
 * @note SEQUENCE { }
 */
struct ULInformationTransfer_v1700_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULInformationTransfer_v1700_IEs
 * @note ASN.1：ULInformationTransfer-v1700-IEs；源文件第 3269 行。
 * @note ULInformationTransfer-v1700-IEs ::= SEQUENCE { dedicatedInfoF1c-r17, nonCriticalExtension }
 */
struct ULInformationTransfer_v1700_IEs {
    bool has_dedicatedInfoF1c_r17; /**< dedicatedInfoF1c-r17 是否存在。 */
    DedicatedInfoF1c_r17 dedicatedInfoF1c_r17; /**< ASN.1 dedicatedInfoF1c-r17；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    ULInformationTransfer_v1700_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ULInformationTransfer_IEs
 * @note ASN.1：ULInformationTransfer-IEs；源文件第 3263 行。
 * @note ULInformationTransfer-IEs ::= SEQUENCE { dedicatedNAS-Message, lateNonCriticalExtension, nonCriticalExtensi...
 */
struct ULInformationTransfer_IEs {
    bool has_dedicatedNAS_Message; /**< dedicatedNAS-Message 是否存在。 */
    DedicatedNAS_Message dedicatedNAS_Message; /**< ASN.1 dedicatedNAS-Message；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    ULInformationTransfer_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ULInformationTransfer_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 3259 行。
 * @note SEQUENCE { }
 */
struct ULInformationTransfer_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULInformationTransfer_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 3257 行。
 * @note CHOICE { ulInformationTransfer, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ULInformationTransfer_CriticalExtensions_Tag {
    ULInformationTransfer_CriticalExtensions_Tag_ulInformationTransfer = 0, /**< ASN.1 ulInformationTransfer */
    ULInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} ULInformationTransfer_CriticalExtensions_Tag;

struct ULInformationTransfer_CriticalExtensions {
    ULInformationTransfer_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ULInformationTransfer_IEs ulInformationTransfer; /**< ASN.1 ulInformationTransfer */
        ULInformationTransfer_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief ULInformationTransfer
 * @note ASN.1：ULInformationTransfer；源文件第 3256 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_ULInformationTransfer（包装位 2 级，入口 2 个 CHOICE）。
 * @note ULInformationTransfer ::= SEQUENCE { criticalExtensions }
 */
struct ULInformationTransfer {
    ULInformationTransfer_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ULInformationTransferIRAT_r16_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 3290 行。
 * @note SEQUENCE { }
 */
struct ULInformationTransferIRAT_r16_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULInformationTransferIRAT_r16_IEs
 * @note ASN.1：ULInformationTransferIRAT-r16-IEs；源文件第 3287 行。
 * @note ULInformationTransferIRAT-r16-IEs ::= SEQUENCE { ul-DCCH-MessageEUTRA-r16, lateNonCriticalExtension, nonCriticalExt...
 */
struct ULInformationTransferIRAT_r16_IEs {
    bool has_ul_DCCH_MessageEUTRA_r16; /**< ul-DCCH-MessageEUTRA-r16 是否存在。 */
    OctetString ul_DCCH_MessageEUTRA_r16; /**< ASN.1 ul-DCCH-MessageEUTRA-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    ULInformationTransferIRAT_r16_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ULInformationTransferIRAT_r16_CriticalExtensions_C1
 * @note ASN.1：criticalExtensions/c1；源文件第 3279 行。
 * @note CHOICE { ulInformationTransferIRAT-r16, spare3, spare2, spare1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag {
    ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_ulInformationTransferIRAT_r16 = 0, /**< ASN.1 ulInformationTransferIRAT-r16 */
    ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare3 = 1, /**< ASN.1 spare3 */
    ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare2 = 2, /**< ASN.1 spare2 */
    ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag_spare1 = 3, /**< ASN.1 spare1 */
} ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag;

struct ULInformationTransferIRAT_r16_CriticalExtensions_C1 {
    ULInformationTransferIRAT_r16_CriticalExtensions_C1_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ULInformationTransferIRAT_r16_IEs ulInformationTransferIRAT_r16; /**< ASN.1 ulInformationTransferIRAT-r16 */
        Null spare3; /**< ASN.1 spare3 */
        Null spare2; /**< ASN.1 spare2 */
        Null spare1; /**< ASN.1 spare1 */
    } u;
};


/**
 * @brief ULInformationTransferIRAT_r16_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 3283 行。
 * @note SEQUENCE { }
 */
struct ULInformationTransferIRAT_r16_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULInformationTransferIRAT_r16_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 3278 行。
 * @note CHOICE { c1, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ULInformationTransferIRAT_r16_CriticalExtensions_Tag {
    ULInformationTransferIRAT_r16_CriticalExtensions_Tag_c1 = 0, /**< ASN.1 c1 */
    ULInformationTransferIRAT_r16_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} ULInformationTransferIRAT_r16_CriticalExtensions_Tag;

struct ULInformationTransferIRAT_r16_CriticalExtensions {
    ULInformationTransferIRAT_r16_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ULInformationTransferIRAT_r16_CriticalExtensions_C1 c1; /**< ASN.1 c1 */
        ULInformationTransferIRAT_r16_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief ULInformationTransferIRAT_r16
 * @note ASN.1：ULInformationTransferIRAT-r16；源文件第 3277 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_ULInformationTransferIRAT_r16（包装位 3 级，入口 3 个 CHOICE）。
 * @note ULInformationTransferIRAT-r16 ::= SEQUENCE { criticalExtensions }
 */
struct ULInformationTransferIRAT_r16 {
    ULInformationTransferIRAT_r16_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief ULInformationTransferMRDC_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 3310 行。
 * @note SEQUENCE { }
 */
struct ULInformationTransferMRDC_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULInformationTransferMRDC_IEs
 * @note ASN.1：ULInformationTransferMRDC-IEs；源文件第 3306 行。
 * @note ULInformationTransferMRDC-IEs ::= SEQUENCE { ul-DCCH-MessageNR, ul-DCCH-MessageEUTRA, lateNonCriticalExtension,...
 */
struct ULInformationTransferMRDC_IEs {
    bool has_ul_DCCH_MessageNR; /**< ul-DCCH-MessageNR 是否存在。 */
    OctetString ul_DCCH_MessageNR; /**< ASN.1 ul-DCCH-MessageNR；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_ul_DCCH_MessageEUTRA; /**< ul-DCCH-MessageEUTRA 是否存在。 */
    OctetString ul_DCCH_MessageEUTRA; /**< ASN.1 ul-DCCH-MessageEUTRA；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    ULInformationTransferMRDC_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief ULInformationTransferMRDC_CriticalExtensions_C1
 * @note ASN.1：criticalExtensions/c1；源文件第 3298 行。
 * @note CHOICE { ulInformationTransferMRDC, spare3, spare2, spare1 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ULInformationTransferMRDC_CriticalExtensions_C1_Tag {
    ULInformationTransferMRDC_CriticalExtensions_C1_Tag_ulInformationTransferMRDC = 0, /**< ASN.1 ulInformationTransferMRDC */
    ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare3 = 1, /**< ASN.1 spare3 */
    ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare2 = 2, /**< ASN.1 spare2 */
    ULInformationTransferMRDC_CriticalExtensions_C1_Tag_spare1 = 3, /**< ASN.1 spare1 */
} ULInformationTransferMRDC_CriticalExtensions_C1_Tag;

struct ULInformationTransferMRDC_CriticalExtensions_C1 {
    ULInformationTransferMRDC_CriticalExtensions_C1_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ULInformationTransferMRDC_IEs ulInformationTransferMRDC; /**< ASN.1 ulInformationTransferMRDC */
        Null spare3; /**< ASN.1 spare3 */
        Null spare2; /**< ASN.1 spare2 */
        Null spare1; /**< ASN.1 spare1 */
    } u;
};


/**
 * @brief ULInformationTransferMRDC_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 3302 行。
 * @note SEQUENCE { }
 */
struct ULInformationTransferMRDC_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief ULInformationTransferMRDC_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 3297 行。
 * @note CHOICE { c1, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ULInformationTransferMRDC_CriticalExtensions_Tag {
    ULInformationTransferMRDC_CriticalExtensions_Tag_c1 = 0, /**< ASN.1 c1 */
    ULInformationTransferMRDC_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} ULInformationTransferMRDC_CriticalExtensions_Tag;

struct ULInformationTransferMRDC_CriticalExtensions {
    ULInformationTransferMRDC_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        ULInformationTransferMRDC_CriticalExtensions_C1 c1; /**< ASN.1 c1 */
        ULInformationTransferMRDC_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief ULInformationTransferMRDC
 * @note ASN.1：ULInformationTransferMRDC；源文件第 3296 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_ULInformationTransferMRDC（包装位 2 级，入口 2 个 CHOICE）。
 * @note ULInformationTransferMRDC ::= SEQUENCE { criticalExtensions }
 */
struct ULInformationTransferMRDC {
    ULInformationTransferMRDC_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16
 * @note ASN.1：relaxedMeasurement-r16/lowMobilityEvaluation-r16；源文件第 3389 行。
 * @note SEQUENCE { s-SearchDeltaP-r16, t-SearchDeltaP-r16 }
 */
struct SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16 {
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_S_SearchDeltaP_r16 s_SearchDeltaP_r16; /**< ASN.1 s-SearchDeltaP-r16；枚举。 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16_T_SearchDeltaP_r16 t_SearchDeltaP_r16; /**< ASN.1 t-SearchDeltaP-r16；枚举。 */
};


/**
 * @brief SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16
 * @note ASN.1：relaxedMeasurement-r16/cellEdgeEvaluation-r16；源文件第 3398 行。
 * @note SEQUENCE { s-SearchThresholdP-r16, s-SearchThresholdQ-r16 }
 */
struct SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16 {
    ReselectionThreshold s_SearchThresholdP_r16; /**< ASN.1 s-SearchThresholdP-r16；INTEGER (0..31)，位宽 5 bit。 */
    bool has_s_SearchThresholdQ_r16; /**< s-SearchThresholdQ-r16 是否存在。 */
    ReselectionThresholdQ s_SearchThresholdQ_r16; /**< ASN.1 s-SearchThresholdQ-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SIB2_ExtGroup1_RelaxedMeasurement_r16
 * @note ASN.1：relaxedMeasurement-r16；源文件第 3388 行。
 * @note SEQUENCE { lowMobilityEvaluation-r16, cellEdgeEvaluation-r16, combineRelaxedM...
 */
struct SIB2_ExtGroup1_RelaxedMeasurement_r16 {
    bool has_lowMobilityEvaluation_r16; /**< lowMobilityEvaluation-r16 是否存在。 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_LowMobilityEvaluation_r16 lowMobilityEvaluation_r16; /**< ASN.1 lowMobilityEvaluation-r16；结构体；OPTIONAL。 */
    bool has_cellEdgeEvaluation_r16; /**< cellEdgeEvaluation-r16 是否存在。 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_CellEdgeEvaluation_r16 cellEdgeEvaluation_r16; /**< ASN.1 cellEdgeEvaluation-r16；结构体；OPTIONAL。 */
    bool has_combineRelaxedMeasCondition_r16; /**< combineRelaxedMeasCondition-r16 是否存在。 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_CombineRelaxedMeasCondition_r16 combineRelaxedMeasCondition_r16; /**< ASN.1 combineRelaxedMeasCondition-r16；枚举；OPTIONAL。 */
    bool has_highPriorityMeasRelax_r16; /**< highPriorityMeasRelax-r16 是否存在。 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16_HighPriorityMeasRelax_r16 highPriorityMeasRelax_r16; /**< ASN.1 highPriorityMeasRelax-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SIB2_ExtGroup1
 * @note ASN.1：SIB2_ExtGroup1；源文件第 3387 行。
 */
struct SIB2_ExtGroup1 {
    bool has_relaxedMeasurement_r16; /**< relaxedMeasurement-r16 是否存在。 */
    SIB2_ExtGroup1_RelaxedMeasurement_r16 relaxedMeasurement_r16; /**< ASN.1 relaxedMeasurement-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17
 * @note ASN.1：relaxedMeasurement-r17/stationaryMobilityEvaluation-r17；源文件第 3409 行。
 * @note SEQUENCE { s-SearchDeltaP-Stationary-r17, t-SearchDeltaP-Stationary-r17 }
 */
struct SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17 {
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_S_SearchDeltaP_Stationary_r17 s_SearchDeltaP_Stationary_r17; /**< ASN.1 s-SearchDeltaP-Stationary-r17；枚举。 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17_T_SearchDeltaP_Stationary_r17 t_SearchDeltaP_Stationary_r17; /**< ASN.1 t-SearchDeltaP-Stationary-r17；枚举。 */
};


/**
 * @brief SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17
 * @note ASN.1：relaxedMeasurement-r17/cellEdgeEvaluationWhileStationary-r17；源文件第 3414 行。
 * @note SEQUENCE { s-SearchThresholdP2-r17, s-SearchThresholdQ2-r17 }
 */
struct SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17 {
    ReselectionThreshold s_SearchThresholdP2_r17; /**< ASN.1 s-SearchThresholdP2-r17；INTEGER (0..31)，位宽 5 bit。 */
    bool has_s_SearchThresholdQ2_r17; /**< s-SearchThresholdQ2-r17 是否存在。 */
    ReselectionThresholdQ s_SearchThresholdQ2_r17; /**< ASN.1 s-SearchThresholdQ2-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SIB2_ExtGroup2_RelaxedMeasurement_r17
 * @note ASN.1：relaxedMeasurement-r17；源文件第 3408 行。
 * @note SEQUENCE { stationaryMobilityEvaluation-r17, cellEdgeEvaluationWhileStationar...
 */
struct SIB2_ExtGroup2_RelaxedMeasurement_r17 {
    SIB2_ExtGroup2_RelaxedMeasurement_r17_StationaryMobilityEvaluation_r17 stationaryMobilityEvaluation_r17; /**< ASN.1 stationaryMobilityEvaluation-r17；结构体。 */
    bool has_cellEdgeEvaluationWhileStationary_r17; /**< cellEdgeEvaluationWhileStationary-r17 是否存在。 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_CellEdgeEvaluationWhileStationary_r17 cellEdgeEvaluationWhileStationary_r17; /**< ASN.1 cellEdgeEvaluationWhileStationary-r17；结构体；OPTIONAL。 */
    bool has_combineRelaxedMeasCondition2_r17; /**< combineRelaxedMeasCondition2-r17 是否存在。 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17_CombineRelaxedMeasCondition2_r17 combineRelaxedMeasCondition2_r17; /**< ASN.1 combineRelaxedMeasCondition2-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SIB2_ExtGroup2
 * @note ASN.1：SIB2_ExtGroup2；源文件第 3406 行。
 */
struct SIB2_ExtGroup2 {
    bool has_cellEquivalentSize_r17; /**< cellEquivalentSize-r17 是否存在。 */
    int64_t cellEquivalentSize_r17; /**< ASN.1 cellEquivalentSize-r17；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_relaxedMeasurement_r17; /**< relaxedMeasurement-r17 是否存在。 */
    SIB2_ExtGroup2_RelaxedMeasurement_r17 relaxedMeasurement_r17; /**< ASN.1 relaxedMeasurement-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ThresholdNR
 * @note ASN.1：ThresholdNR；源文件第 7796 行。
 * @note ThresholdNR ::= SEQUENCE { thresholdRSRP, thresholdRSRQ, thresholdSINR }
 */
struct ThresholdNR {
    bool has_thresholdRSRP; /**< thresholdRSRP 是否存在。 */
    RSRP_Range thresholdRSRP; /**< ASN.1 thresholdRSRP；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_thresholdRSRQ; /**< thresholdRSRQ 是否存在。 */
    RSRQ_Range thresholdRSRQ; /**< ASN.1 thresholdRSRQ；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_thresholdSINR; /**< thresholdSINR 是否存在。 */
    SINR_Range thresholdSINR; /**< ASN.1 thresholdSINR；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MobilityStateParameters
 * @note ASN.1：MobilityStateParameters；源文件第 8306 行。
 * @note MobilityStateParameters ::= SEQUENCE { t-Evaluation, t-HystNormal, n-CellChangeMedium, n-CellChangeHigh }
 */
struct MobilityStateParameters {
    MobilityStateParameters_T_Evaluation t_Evaluation; /**< ASN.1 t-Evaluation；枚举。 */
    MobilityStateParameters_T_HystNormal t_HystNormal; /**< ASN.1 t-HystNormal；枚举。 */
    int64_t n_CellChangeMedium; /**< ASN.1 n-CellChangeMedium；INTEGER (1..16)，位宽 4 bit。 */
    int64_t n_CellChangeHigh; /**< ASN.1 n-CellChangeHigh；INTEGER (1..16)，位宽 4 bit。 */
};


/**
 * @brief SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF
 * @note ASN.1：cellReselectionInfoCommon/speedStateReselectionPars/q-HystSF；源文件第 3334 行。
 * @note SEQUENCE { sf-Medium, sf-High }
 */
struct SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF {
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_Medium sf_Medium; /**< ASN.1 sf-Medium；枚举。 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF_Sf_High sf_High; /**< ASN.1 sf-High；枚举。 */
};


/**
 * @brief SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars
 * @note ASN.1：cellReselectionInfoCommon/speedStateReselectionPars；源文件第 3332 行。
 * @note SEQUENCE { mobilityStateParameters, q-HystSF }
 */
struct SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars {
    MobilityStateParameters mobilityStateParameters; /**< ASN.1 mobilityStateParameters；结构体。 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars_Q_HystSF q_HystSF; /**< ASN.1 q-HystSF；结构体。 */
};


/**
 * @brief SIB2_CellReselectionInfoCommon
 * @note ASN.1：cellReselectionInfoCommon；源文件第 3325 行。
 * @note SEQUENCE { nrofSS-BlocksToAverage, absThreshSS-BlocksConsolidation, rangeToBe...
 */
struct SIB2_CellReselectionInfoCommon {
    bool has_nrofSS_BlocksToAverage; /**< nrofSS-BlocksToAverage 是否存在。 */
    int64_t nrofSS_BlocksToAverage; /**< ASN.1 nrofSS-BlocksToAverage；INTEGER (2..16)，位宽 4 bit；OPTIONAL。 */
    bool has_absThreshSS_BlocksConsolidation; /**< absThreshSS-BlocksConsolidation 是否存在。 */
    ThresholdNR absThreshSS_BlocksConsolidation; /**< ASN.1 absThreshSS-BlocksConsolidation；结构体；OPTIONAL。 */
    bool has_rangeToBestCell; /**< rangeToBestCell 是否存在。 */
    Q_OffsetRange rangeToBestCell; /**< ASN.1 rangeToBestCell；枚举；OPTIONAL。 */
    SIB2_CellReselectionInfoCommon_Q_Hyst q_Hyst; /**< ASN.1 q-Hyst；枚举。 */
    bool has_speedStateReselectionPars; /**< speedStateReselectionPars 是否存在。 */
    SIB2_CellReselectionInfoCommon_SpeedStateReselectionPars speedStateReselectionPars; /**< ASN.1 speedStateReselectionPars；结构体；OPTIONAL。 */
};


/**
 * @brief SIB2_CellReselectionServingFreqInfo
 * @note ASN.1：cellReselectionServingFreqInfo；源文件第 3341 行。
 * @note SEQUENCE { s-NonIntraSearchP, s-NonIntraSearchQ, threshServingLowP, threshSer...
 */
struct SIB2_CellReselectionServingFreqInfo {
    bool has_s_NonIntraSearchP; /**< s-NonIntraSearchP 是否存在。 */
    ReselectionThreshold s_NonIntraSearchP; /**< ASN.1 s-NonIntraSearchP；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_s_NonIntraSearchQ; /**< s-NonIntraSearchQ 是否存在。 */
    ReselectionThresholdQ s_NonIntraSearchQ; /**< ASN.1 s-NonIntraSearchQ；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    ReselectionThreshold threshServingLowP; /**< ASN.1 threshServingLowP；INTEGER (0..31)，位宽 5 bit。 */
    bool has_threshServingLowQ; /**< threshServingLowQ 是否存在。 */
    ReselectionThresholdQ threshServingLowQ; /**< ASN.1 threshServingLowQ；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    CellReselectionPriority cellReselectionPriority; /**< ASN.1 cellReselectionPriority；INTEGER (0..7)，位宽 3 bit。 */
    bool has_cellReselectionSubPriority; /**< cellReselectionSubPriority 是否存在。 */
    CellReselectionSubPriority cellReselectionSubPriority; /**< ASN.1 cellReselectionSubPriority；枚举；OPTIONAL。 */
};


/**
 * @brief SSB_ToMeasure
 * @note ASN.1：SSB-ToMeasure；源文件第 13605 行。
 * @note SSB-ToMeasure ::= CHOICE { shortBitmap, mediumBitmap, longBitmap }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SSB_ToMeasure_Tag {
    SSB_ToMeasure_Tag_shortBitmap = 0, /**< ASN.1 shortBitmap */
    SSB_ToMeasure_Tag_mediumBitmap = 1, /**< ASN.1 mediumBitmap */
    SSB_ToMeasure_Tag_longBitmap = 2, /**< ASN.1 longBitmap */
} SSB_ToMeasure_Tag;

struct SSB_ToMeasure {
    SSB_ToMeasure_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString shortBitmap; /**< ASN.1 shortBitmap */
        BitString mediumBitmap; /**< ASN.1 mediumBitmap */
        BitString longBitmap; /**< ASN.1 longBitmap */
    } u;
};


/**
 * @brief SS_RSSI_Measurement
 * @note ASN.1：SS-RSSI-Measurement；源文件第 13614 行。
 * @note SS-RSSI-Measurement ::= SEQUENCE { measurementSlots, endSymbol }
 */
struct SS_RSSI_Measurement {
    BitString measurementSlots; /**< ASN.1 measurementSlots；SIZE (1..80)。 */
    int64_t endSymbol; /**< ASN.1 endSymbol；INTEGER (0..3)，位宽 2 bit。 */
};


/**
 * @brief SpeedStateScaleFactors
 * @note ASN.1：SpeedStateScaleFactors；源文件第 12973 行。
 * @note SpeedStateScaleFactors ::= SEQUENCE { sf-Medium, sf-High }
 */
struct SpeedStateScaleFactors {
    SpeedStateScaleFactors_Sf_Medium sf_Medium; /**< ASN.1 sf-Medium；枚举。 */
    SpeedStateScaleFactors_Sf_High sf_High; /**< ASN.1 sf-High；枚举。 */
};


/**
 * @brief SIB2_IntraFreqCellReselectionInfo_ExtGroup1
 * @note ASN.1：SIB2_IntraFreqCellReselectionInfo_ExtGroup1；源文件第 3365 行。
 */
struct SIB2_IntraFreqCellReselectionInfo_ExtGroup1 {
    bool has_t_ReselectionNR_SF; /**< t-ReselectionNR-SF 是否存在。 */
    SpeedStateScaleFactors t_ReselectionNR_SF; /**< ASN.1 t-ReselectionNR-SF；结构体；OPTIONAL。 */
};


/**
 * @brief SSB_MTC2_LP_r16
 * @note ASN.1：SSB-MTC2-LP-r16；源文件第 13554 行。
 * @note SSB-MTC2-LP-r16 ::= SEQUENCE { pci-List, periodicity }
 */
struct SSB_MTC2_LP_r16 {
    bool has_pci_List; /**< pci-List 是否存在。 */
    PhysCellId* pci_List_items; /**< ASN.1 pci-List；SEQUENCE OF PhysCellId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pci_List_count; /**< pci-List 元素个数。 */
    SSB_MTC2_LP_r16_Periodicity periodicity; /**< ASN.1 periodicity；枚举。 */
};


/**
 * @brief SIB2_IntraFreqCellReselectionInfo_ExtGroup2
 * @note ASN.1：SIB2_IntraFreqCellReselectionInfo_ExtGroup2；源文件第 3368 行。
 */
struct SIB2_IntraFreqCellReselectionInfo_ExtGroup2 {
    bool has_smtc2_LP_r16; /**< smtc2-LP-r16 是否存在。 */
    SSB_MTC2_LP_r16 smtc2_LP_r16; /**< ASN.1 smtc2-LP-r16；结构体；OPTIONAL。 */
    bool has_ssb_PositionQCL_Common_r16; /**< ssb-PositionQCL-Common-r16 是否存在。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_Common_r16; /**< ASN.1 ssb-PositionQCL-Common-r16；枚举；OPTIONAL。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART015_H */
