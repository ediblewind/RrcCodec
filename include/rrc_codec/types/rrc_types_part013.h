/* ============================================================================
 * types/rrc_types_part013.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART013_H
#define RRC_CODEC_TYPES_PART013_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SL_PHY_MAC_RLC_Config_r16
 * @note ASN.1：SL-PHY-MAC-RLC-Config-r16；源文件第 22108 行。
 * @note SL-PHY-MAC-RLC-Config-r16 ::= SEQUENCE { sl-ScheduledConfig-r16, sl-UE-SelectedConfig-r16, sl-FreqInfoToRel...
 */
struct SL_PHY_MAC_RLC_Config_r16 {
    bool has_sl_ScheduledConfig_r16; /**< sl-ScheduledConfig-r16 是否存在。 */
    SetupRelease_SL_ScheduledConfig_r16 sl_ScheduledConfig_r16; /**< ASN.1 sl-ScheduledConfig-r16；结构体；OPTIONAL。 */
    bool has_sl_UE_SelectedConfig_r16; /**< sl-UE-SelectedConfig-r16 是否存在。 */
    SetupRelease_SL_UE_SelectedConfig_r16 sl_UE_SelectedConfig_r16; /**< ASN.1 sl-UE-SelectedConfig-r16；结构体；OPTIONAL。 */
    bool has_sl_FreqInfoToReleaseList_r16; /**< sl-FreqInfoToReleaseList-r16 是否存在。 */
    SL_Freq_Id_r16* sl_FreqInfoToReleaseList_r16_items; /**< ASN.1 sl-FreqInfoToReleaseList-r16；SEQUENCE OF SL_Freq_Id_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqInfoToReleaseList_r16_count; /**< sl-FreqInfoToReleaseList-r16 元素个数。 */
    bool has_sl_FreqInfoToAddModList_r16; /**< sl-FreqInfoToAddModList-r16 是否存在。 */
    SL_FreqConfig_r16* sl_FreqInfoToAddModList_r16_items; /**< ASN.1 sl-FreqInfoToAddModList-r16；SEQUENCE OF SL_FreqConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqInfoToAddModList_r16_count; /**< sl-FreqInfoToAddModList-r16 元素个数。 */
    bool has_sl_RLC_BearerToReleaseList_r16; /**< sl-RLC-BearerToReleaseList-r16 是否存在。 */
    SL_RLC_BearerConfigIndex_r16* sl_RLC_BearerToReleaseList_r16_items; /**< ASN.1 sl-RLC-BearerToReleaseList-r16；SEQUENCE OF SL_RLC_BearerConfigIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_BearerToReleaseList_r16_count; /**< sl-RLC-BearerToReleaseList-r16 元素个数。 */
    bool has_sl_RLC_BearerToAddModList_r16; /**< sl-RLC-BearerToAddModList-r16 是否存在。 */
    SL_RLC_BearerConfig_r16* sl_RLC_BearerToAddModList_r16_items; /**< ASN.1 sl-RLC-BearerToAddModList-r16；SEQUENCE OF SL_RLC_BearerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RLC_BearerToAddModList_r16_count; /**< sl-RLC-BearerToAddModList-r16 元素个数。 */
    bool has_sl_MaxNumConsecutiveDTX_r16; /**< sl-MaxNumConsecutiveDTX-r16 是否存在。 */
    SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16 sl_MaxNumConsecutiveDTX_r16; /**< ASN.1 sl-MaxNumConsecutiveDTX-r16；枚举；OPTIONAL。 */
    bool has_sl_CSI_Acquisition_r16; /**< sl-CSI-Acquisition-r16 是否存在。 */
    SL_PHY_MAC_RLC_Config_r16_Sl_CSI_Acquisition_r16 sl_CSI_Acquisition_r16; /**< ASN.1 sl-CSI-Acquisition-r16；枚举；OPTIONAL。 */
    bool has_sl_CSI_SchedulingRequestId_r16; /**< sl-CSI-SchedulingRequestId-r16 是否存在。 */
    SetupRelease_SchedulingRequestId sl_CSI_SchedulingRequestId_r16; /**< ASN.1 sl-CSI-SchedulingRequestId-r16；结构体；OPTIONAL。 */
    bool has_sl_SSB_PriorityNR_r16; /**< sl-SSB-PriorityNR-r16 是否存在。 */
    int64_t sl_SSB_PriorityNR_r16; /**< ASN.1 sl-SSB-PriorityNR-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_networkControlledSyncTx_r16; /**< networkControlledSyncTx-r16 是否存在。 */
    SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16 networkControlledSyncTx_r16; /**< ASN.1 networkControlledSyncTx-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_ConfigDedicatedNR_r16
 * @note ASN.1：SL-ConfigDedicatedNR-r16；源文件第 22089 行。
 * @note SL-ConfigDedicatedNR-r16 ::= SEQUENCE { sl-PHY-MAC-RLC-Config-r16, sl-RadioBearerToReleaseList-r16, sl-Rad...
 */
struct SL_ConfigDedicatedNR_r16 {
    bool has_sl_PHY_MAC_RLC_Config_r16; /**< sl-PHY-MAC-RLC-Config-r16 是否存在。 */
    SL_PHY_MAC_RLC_Config_r16 sl_PHY_MAC_RLC_Config_r16; /**< ASN.1 sl-PHY-MAC-RLC-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_RadioBearerToReleaseList_r16; /**< sl-RadioBearerToReleaseList-r16 是否存在。 */
    SLRB_Uu_ConfigIndex_r16* sl_RadioBearerToReleaseList_r16_items; /**< ASN.1 sl-RadioBearerToReleaseList-r16；SEQUENCE OF SLRB_Uu_ConfigIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RadioBearerToReleaseList_r16_count; /**< sl-RadioBearerToReleaseList-r16 元素个数。 */
    bool has_sl_RadioBearerToAddModList_r16; /**< sl-RadioBearerToAddModList-r16 是否存在。 */
    SL_RadioBearerConfig_r16* sl_RadioBearerToAddModList_r16_items; /**< ASN.1 sl-RadioBearerToAddModList-r16；SEQUENCE OF SL_RadioBearerConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RadioBearerToAddModList_r16_count; /**< sl-RadioBearerToAddModList-r16 元素个数。 */
    bool has_sl_MeasConfigInfoToReleaseList_r16; /**< sl-MeasConfigInfoToReleaseList-r16 是否存在。 */
    SL_DestinationIndex_r16* sl_MeasConfigInfoToReleaseList_r16_items; /**< ASN.1 sl-MeasConfigInfoToReleaseList-r16；SEQUENCE OF SL_DestinationIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MeasConfigInfoToReleaseList_r16_count; /**< sl-MeasConfigInfoToReleaseList-r16 元素个数。 */
    bool has_sl_MeasConfigInfoToAddModList_r16; /**< sl-MeasConfigInfoToAddModList-r16 是否存在。 */
    SL_MeasConfigInfo_r16* sl_MeasConfigInfoToAddModList_r16_items; /**< ASN.1 sl-MeasConfigInfoToAddModList-r16；SEQUENCE OF SL_MeasConfigInfo_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MeasConfigInfoToAddModList_r16_count; /**< sl-MeasConfigInfoToAddModList-r16 元素个数。 */
    bool has_t400_r16; /**< t400-r16 是否存在。 */
    SL_ConfigDedicatedNR_r16_T400_r16 t400_r16; /**< ASN.1 t400-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_ConfigDedicatedNR_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_ConfigDedicatedNR_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_ConfigDedicatedNR_r16
 * @note ASN.1：SetupRelease<SL-ConfigDedicatedNR-r16>；源文件第 978 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_ConfigDedicatedNR_r16_Tag {
    SetupRelease_SL_ConfigDedicatedNR_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_ConfigDedicatedNR_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_ConfigDedicatedNR_r16_Tag;

struct SetupRelease_SL_ConfigDedicatedNR_r16 {
    SetupRelease_SL_ConfigDedicatedNR_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_ConfigDedicatedNR_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_ConfigDedicatedEUTRA_Info_r16
 * @note ASN.1：SL-ConfigDedicatedEUTRA-Info-r16；源文件第 1054 行。
 * @note SL-ConfigDedicatedEUTRA-Info-r16 ::= SEQUENCE { sl-ConfigDedicatedEUTRA-r16, sl-TimeOffsetEUTRA-List-r16 }
 */
struct SL_ConfigDedicatedEUTRA_Info_r16 {
    bool has_sl_ConfigDedicatedEUTRA_r16; /**< sl-ConfigDedicatedEUTRA-r16 是否存在。 */
    OctetString sl_ConfigDedicatedEUTRA_r16; /**< ASN.1 sl-ConfigDedicatedEUTRA-r16；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_sl_TimeOffsetEUTRA_List_r16; /**< sl-TimeOffsetEUTRA-List-r16 是否存在。 */
    SL_TimeOffsetEUTRA_r16* sl_TimeOffsetEUTRA_List_r16_items; /**< ASN.1 sl-TimeOffsetEUTRA-List-r16；SEQUENCE OF SL_TimeOffsetEUTRA_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_TimeOffsetEUTRA_List_r16_count; /**< sl-TimeOffsetEUTRA-List-r16 元素个数。 */
};


/**
 * @brief SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16
 * @note ASN.1：SetupRelease<SL-ConfigDedicatedEUTRA-Info-r16>；源文件第 979 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag {
    SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag;

struct SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16 {
    SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_ConfigDedicatedEUTRA_Info_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRCReconfiguration_v1610_IEs
 * @note ASN.1：RRCReconfiguration-v1610-IEs；源文件第 968 行。
 * @note RRCReconfiguration-v1610-IEs ::= SEQUENCE { otherConfig-v1610, bap-Config-r16, iab-IP-AddressConfigurationList...
 */
struct RRCReconfiguration_v1610_IEs {
    bool has_otherConfig_v1610; /**< otherConfig-v1610 是否存在。 */
    OtherConfig_v1610 otherConfig_v1610; /**< ASN.1 otherConfig-v1610；结构体；OPTIONAL。 */
    bool has_bap_Config_r16; /**< bap-Config-r16 是否存在。 */
    SetupRelease_BAP_Config_r16 bap_Config_r16; /**< ASN.1 bap-Config-r16；结构体；OPTIONAL。 */
    bool has_iab_IP_AddressConfigurationList_r16; /**< iab-IP-AddressConfigurationList-r16 是否存在。 */
    IAB_IP_AddressConfigurationList_r16 iab_IP_AddressConfigurationList_r16; /**< ASN.1 iab-IP-AddressConfigurationList-r16；结构体；OPTIONAL。 */
    bool has_conditionalReconfiguration_r16; /**< conditionalReconfiguration-r16 是否存在。 */
    ConditionalReconfiguration_r16 conditionalReconfiguration_r16; /**< ASN.1 conditionalReconfiguration-r16；结构体；OPTIONAL。 */
    bool has_daps_SourceRelease_r16; /**< daps-SourceRelease-r16 是否存在。 */
    RRCReconfiguration_v1610_IEs_Daps_SourceRelease_r16 daps_SourceRelease_r16; /**< ASN.1 daps-SourceRelease-r16；枚举；OPTIONAL。 */
    bool has_t316_r16; /**< t316-r16 是否存在。 */
    SetupRelease_T316_r16 t316_r16; /**< ASN.1 t316-r16；结构体；OPTIONAL。 */
    bool has_needForGapsConfigNR_r16; /**< needForGapsConfigNR-r16 是否存在。 */
    SetupRelease_NeedForGapsConfigNR_r16 needForGapsConfigNR_r16; /**< ASN.1 needForGapsConfigNR-r16；结构体；OPTIONAL。 */
    bool has_onDemandSIB_Request_r16; /**< onDemandSIB-Request-r16 是否存在。 */
    SetupRelease_OnDemandSIB_Request_r16 onDemandSIB_Request_r16; /**< ASN.1 onDemandSIB-Request-r16；结构体；OPTIONAL。 */
    PosSystemInformation_r16_IEs* dedicatedPosSysInfoDelivery_r16; /**< ASN.1 dedicatedPosSysInfoDelivery-r16；OCTET STRING (CONTAINING PosSystemInformation_r16_IEs)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_sl_ConfigDedicatedNR_r16; /**< sl-ConfigDedicatedNR-r16 是否存在。 */
    SetupRelease_SL_ConfigDedicatedNR_r16 sl_ConfigDedicatedNR_r16; /**< ASN.1 sl-ConfigDedicatedNR-r16；结构体；OPTIONAL。 */
    bool has_sl_ConfigDedicatedEUTRA_Info_r16; /**< sl-ConfigDedicatedEUTRA-Info-r16 是否存在。 */
    SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16 sl_ConfigDedicatedEUTRA_Info_r16; /**< ASN.1 sl-ConfigDedicatedEUTRA-Info-r16；结构体；OPTIONAL。 */
    bool has_targetCellSMTC_SCG_r16; /**< targetCellSMTC-SCG-r16 是否存在。 */
    SSB_MTC targetCellSMTC_SCG_r16; /**< ASN.1 targetCellSMTC-SCG-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup
 * @note ASN.1：mrdc-SecondaryCellGroup；源文件第 1013 行。
 * @note CHOICE { nr-SCG, eutra-SCG }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag {
    MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_nr_SCG = 0, /**< ASN.1 nr-SCG */
    MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_eutra_SCG = 1, /**< ASN.1 eutra-SCG */
} MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag;

struct MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup {
    MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReconfiguration* nr_SCG; /**< ASN.1 nr-SCG */
        OctetString eutra_SCG; /**< ASN.1 eutra-SCG */
    } u;
};


/**
 * @brief MRDC_SecondaryCellGroupConfig
 * @note ASN.1：MRDC-SecondaryCellGroupConfig；源文件第 1011 行。
 * @note MRDC-SecondaryCellGroupConfig ::= SEQUENCE { mrdc-ReleaseAndAdd, mrdc-SecondaryCellGroup }
 */
struct MRDC_SecondaryCellGroupConfig {
    bool has_mrdc_ReleaseAndAdd; /**< mrdc-ReleaseAndAdd 是否存在。 */
    MRDC_SecondaryCellGroupConfig_Mrdc_ReleaseAndAdd mrdc_ReleaseAndAdd; /**< ASN.1 mrdc-ReleaseAndAdd；枚举；OPTIONAL。 */
    MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup mrdc_SecondaryCellGroup; /**< ASN.1 mrdc-SecondaryCellGroup；结构体。 */
};


/**
 * @brief SetupRelease_MRDC_SecondaryCellGroupConfig
 * @note ASN.1：SetupRelease<MRDC-SecondaryCellGroupConfig>；源文件第 963 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MRDC_SecondaryCellGroupConfig_Tag {
    SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MRDC_SecondaryCellGroupConfig_Tag;

struct SetupRelease_MRDC_SecondaryCellGroupConfig {
    SetupRelease_MRDC_SecondaryCellGroupConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MRDC_SecondaryCellGroupConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRCReconfiguration_v1560_IEs
 * @note ASN.1：RRCReconfiguration-v1560-IEs；源文件第 962 行。
 * @note RRCReconfiguration-v1560-IEs ::= SEQUENCE { mrdc-SecondaryCellGroupConfig, radioBearerConfig2, sk-Counter, non...
 */
struct RRCReconfiguration_v1560_IEs {
    bool has_mrdc_SecondaryCellGroupConfig; /**< mrdc-SecondaryCellGroupConfig 是否存在。 */
    SetupRelease_MRDC_SecondaryCellGroupConfig mrdc_SecondaryCellGroupConfig; /**< ASN.1 mrdc-SecondaryCellGroupConfig；结构体；OPTIONAL。 */
    RadioBearerConfig* radioBearerConfig2; /**< ASN.1 radioBearerConfig2；OCTET STRING (CONTAINING RadioBearerConfig)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_sk_Counter; /**< sk-Counter 是否存在。 */
    SK_Counter sk_Counter; /**< ASN.1 sk-Counter；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief OverheatingAssistanceConfig
 * @note ASN.1：OverheatingAssistanceConfig；源文件第 21680 行。
 * @note OverheatingAssistanceConfig ::= SEQUENCE { overheatingIndicationProhibitTimer }
 */
struct OverheatingAssistanceConfig {
    OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer overheatingIndicationProhibitTimer; /**< ASN.1 overheatingIndicationProhibitTimer；枚举。 */
};


/**
 * @brief SetupRelease_OverheatingAssistanceConfig
 * @note ASN.1：SetupRelease<OverheatingAssistanceConfig>；源文件第 21588 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_OverheatingAssistanceConfig_Tag {
    SetupRelease_OverheatingAssistanceConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_OverheatingAssistanceConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_OverheatingAssistanceConfig_Tag;

struct SetupRelease_OverheatingAssistanceConfig {
    SetupRelease_OverheatingAssistanceConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        OverheatingAssistanceConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OtherConfig_v1540
 * @note ASN.1：OtherConfig-v1540；源文件第 21587 行。
 * @note OtherConfig-v1540 ::= SEQUENCE { overheatingAssistanceConfig }
 */
struct OtherConfig_v1540 {
    bool has_overheatingAssistanceConfig; /**< overheatingAssistanceConfig 是否存在。 */
    SetupRelease_OverheatingAssistanceConfig overheatingAssistanceConfig; /**< ASN.1 overheatingAssistanceConfig；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReconfiguration_v1540_IEs
 * @note ASN.1：RRCReconfiguration-v1540-IEs；源文件第 957 行。
 * @note RRCReconfiguration-v1540-IEs ::= SEQUENCE { otherConfig-v1540, nonCriticalExtension }
 */
struct RRCReconfiguration_v1540_IEs {
    bool has_otherConfig_v1540; /**< otherConfig-v1540 是否存在。 */
    OtherConfig_v1540 otherConfig_v1540; /**< ASN.1 otherConfig-v1540；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1560_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MasterKeyUpdate
 * @note ASN.1：MasterKeyUpdate；源文件第 1027 行。
 * @note MasterKeyUpdate ::= SEQUENCE { keySetChangeIndicator, nextHopChainingCount, nas-Container }
 */
struct MasterKeyUpdate {
    bool keySetChangeIndicator; /**< ASN.1 keySetChangeIndicator；BOOLEAN，1 bit。 */
    NextHopChainingCount nextHopChainingCount; /**< ASN.1 nextHopChainingCount；INTEGER (0..7)，位宽 3 bit。 */
    bool has_nas_Container; /**< nas-Container 是否存在。 */
    OctetString nas_Container; /**< ASN.1 nas-Container；SIZE 无上界（半约束长度）；OPTIONAL。 */
};


/**
 * @brief OtherConfig_DelayBudgetReportingConfig_Setup
 * @note ASN.1：delayBudgetReportingConfig/setup；源文件第 21581 行。
 * @note SEQUENCE { delayBudgetReportingProhibitTimer }
 */
struct OtherConfig_DelayBudgetReportingConfig_Setup {
    OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer delayBudgetReportingProhibitTimer; /**< ASN.1 delayBudgetReportingProhibitTimer；枚举。 */
};


/**
 * @brief OtherConfig_DelayBudgetReportingConfig
 * @note ASN.1：delayBudgetReportingConfig；源文件第 21579 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum OtherConfig_DelayBudgetReportingConfig_Tag {
    OtherConfig_DelayBudgetReportingConfig_Tag_release = 0, /**< ASN.1 release */
    OtherConfig_DelayBudgetReportingConfig_Tag_setup = 1, /**< ASN.1 setup */
} OtherConfig_DelayBudgetReportingConfig_Tag;

struct OtherConfig_DelayBudgetReportingConfig {
    OtherConfig_DelayBudgetReportingConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        OtherConfig_DelayBudgetReportingConfig_Setup setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OtherConfig
 * @note ASN.1：OtherConfig；源文件第 21578 行。
 * @note OtherConfig ::= SEQUENCE { delayBudgetReportingConfig }
 */
struct OtherConfig {
    bool has_delayBudgetReportingConfig; /**< delayBudgetReportingConfig 是否存在。 */
    OtherConfig_DelayBudgetReportingConfig delayBudgetReportingConfig; /**< ASN.1 delayBudgetReportingConfig；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReconfiguration_v1530_IEs
 * @note ASN.1：RRCReconfiguration-v1530-IEs；源文件第 946 行。
 * @note RRCReconfiguration-v1530-IEs ::= SEQUENCE { masterCellGroup, fullConfig, dedicatedNAS-MessageList, masterKeyUp...
 */
struct RRCReconfiguration_v1530_IEs {
    CellGroupConfig* masterCellGroup; /**< ASN.1 masterCellGroup；OCTET STRING (CONTAINING CellGroupConfig)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_fullConfig; /**< fullConfig 是否存在。 */
    RRCReconfiguration_v1530_IEs_FullConfig fullConfig; /**< ASN.1 fullConfig；枚举；OPTIONAL。 */
    bool has_dedicatedNAS_MessageList; /**< dedicatedNAS-MessageList 是否存在。 */
    DedicatedNAS_Message* dedicatedNAS_MessageList_items; /**< ASN.1 dedicatedNAS-MessageList；SEQUENCE OF DedicatedNAS_Message，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dedicatedNAS_MessageList_count; /**< dedicatedNAS-MessageList 元素个数。 */
    bool has_masterKeyUpdate; /**< masterKeyUpdate 是否存在。 */
    MasterKeyUpdate masterKeyUpdate; /**< ASN.1 masterKeyUpdate；结构体；OPTIONAL。 */
    SIB1* dedicatedSIB1_Delivery; /**< ASN.1 dedicatedSIB1-Delivery；OCTET STRING (CONTAINING SIB1)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    SystemInformation* dedicatedSystemInformationDelivery; /**< ASN.1 dedicatedSystemInformationDelivery；OCTET STRING (CONTAINING SystemInformation)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_otherConfig; /**< otherConfig 是否存在。 */
    OtherConfig otherConfig; /**< ASN.1 otherConfig；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1540_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MeasWindowConfig_r18_WindowOffsetPeriodicity
 * @note ASN.1：windowOffsetPeriodicity；源文件第 8294 行。
 * @note CHOICE { periodicityMs40, periodicityMs80 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag {
    MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs40 = 0, /**< ASN.1 periodicityMs40 */
    MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs80 = 1, /**< ASN.1 periodicityMs80 */
} MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag;

struct MeasWindowConfig_r18_WindowOffsetPeriodicity {
    MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t periodicityMs40; /**< ASN.1 periodicityMs40 */
        int64_t periodicityMs80; /**< ASN.1 periodicityMs80 */
    } u;
};


/**
 * @brief MeasWindowConfig_r18
 * @note ASN.1：MeasWindowConfig-r18；源文件第 8293 行。
 * @note MeasWindowConfig-r18 ::= SEQUENCE { windowOffsetPeriodicity, windowDuration }
 */
struct MeasWindowConfig_r18 {
    MeasWindowConfig_r18_WindowOffsetPeriodicity windowOffsetPeriodicity; /**< ASN.1 windowOffsetPeriodicity；结构体。 */
    MeasWindowConfig_r18_WindowDuration windowDuration; /**< ASN.1 windowDuration；枚举。 */
};


/**
 * @brief SetupRelease_MeasWindowConfig_r18
 * @note ASN.1：SetupRelease<MeasWindowConfig-r18>；源文件第 7405 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MeasWindowConfig_r18_Tag {
    SetupRelease_MeasWindowConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MeasWindowConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MeasWindowConfig_r18_Tag;

struct SetupRelease_MeasWindowConfig_r18 {
    SetupRelease_MeasWindowConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MeasWindowConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MeasConfig_ExtGroup2
 * @note ASN.1：MeasConfig_ExtGroup2；源文件第 7404 行。
 */
struct MeasConfig_ExtGroup2 {
    bool has_effectiveMeasWindowConfig_r18; /**< effectiveMeasWindowConfig-r18 是否存在。 */
    SetupRelease_MeasWindowConfig_r18 effectiveMeasWindowConfig_r18; /**< ASN.1 effectiveMeasWindowConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief MeasConfig_ExtGroup1
 * @note ASN.1：MeasConfig_ExtGroup1；源文件第 7401 行。
 */
struct MeasConfig_ExtGroup1 {
    bool has_interFrequencyConfig_NoGap_r16; /**< interFrequencyConfig-NoGap-r16 是否存在。 */
    MeasConfig_ExtGroup1_InterFrequencyConfig_NoGap_r16 interFrequencyConfig_NoGap_r16; /**< ASN.1 interFrequencyConfig-NoGap-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MeasObjectToRemoveList
 * @note ASN.1：MeasObjectToRemoveList；源文件第 7409 行。
 * @note MeasObjectToRemoveList ::= SEQUENCE OF (size 1..64) OF MeasObjectId
 */
struct MeasObjectToRemoveList {
    MeasObjectId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasIdToRemoveList
 * @note ASN.1：MeasIdToRemoveList；源文件第 7411 行。
 * @note MeasIdToRemoveList ::= SEQUENCE OF (size 1..64) OF MeasId
 */
struct MeasIdToRemoveList {
    MeasId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ReportConfigToRemoveList
 * @note ASN.1：ReportConfigToRemoveList；源文件第 7413 行。
 * @note ReportConfigToRemoveList ::= SEQUENCE OF (size 1..64) OF ReportConfigId
 */
struct ReportConfigToRemoveList {
    ReportConfigId* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PosMeasGapPreConfigToAddModList_r17
 * @note ASN.1：PosMeasGapPreConfigToAddModList-r17；源文件第 7466 行。
 * @note PosMeasGapPreConfigToAddModList-r17 ::= SEQUENCE OF (size 1..16) OF PosGapConfig-r17
 */
struct PosMeasGapPreConfigToAddModList_r17 {
    PosGapConfig_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PosMeasGapPreConfigToReleaseList_r17
 * @note ASN.1：PosMeasGapPreConfigToReleaseList-r17；源文件第 7468 行。
 * @note PosMeasGapPreConfigToReleaseList-r17 ::= SEQUENCE OF (size 1..16) OF MeasPosPreConfigGapId-r17
 */
struct PosMeasGapPreConfigToReleaseList_r17 {
    MeasPosPreConfigGapId_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasGapConfig_ExtGroup2
 * @note ASN.1：MeasGapConfig_ExtGroup2；源文件第 7425 行。
 */
struct MeasGapConfig_ExtGroup2 {
    bool has_gapToAddModList_r17; /**< gapToAddModList-r17 是否存在。 */
    GapConfig_r17* gapToAddModList_r17_items; /**< ASN.1 gapToAddModList-r17；SEQUENCE OF GapConfig_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t gapToAddModList_r17_count; /**< gapToAddModList-r17 元素个数。 */
    bool has_gapToReleaseList_r17; /**< gapToReleaseList-r17 是否存在。 */
    MeasGapId_r17* gapToReleaseList_r17_items; /**< ASN.1 gapToReleaseList-r17；SEQUENCE OF MeasGapId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t gapToReleaseList_r17_count; /**< gapToReleaseList-r17 元素个数。 */
    bool has_posMeasGapPreConfigToAddModList_r17; /**< posMeasGapPreConfigToAddModList-r17 是否存在。 */
    PosMeasGapPreConfigToAddModList_r17 posMeasGapPreConfigToAddModList_r17; /**< ASN.1 posMeasGapPreConfigToAddModList-r17；SEQUENCE OF PosGapConfig_r17，SIZE (1..16)；OPTIONAL。 */
    bool has_posMeasGapPreConfigToReleaseList_r17; /**< posMeasGapPreConfigToReleaseList-r17 是否存在。 */
    PosMeasGapPreConfigToReleaseList_r17 posMeasGapPreConfigToReleaseList_r17; /**< ASN.1 posMeasGapPreConfigToReleaseList-r17；SEQUENCE OF MeasPosPreConfigGapId_r17，SIZE (1..16)；OPTIONAL。 */
};


/**
 * @brief GapConfig_ExtGroup1
 * @note ASN.1：GapConfig_ExtGroup1；源文件第 7440 行。
 */
struct GapConfig_ExtGroup1 {
    bool has_refServCellIndicator; /**< refServCellIndicator 是否存在。 */
    GapConfig_ExtGroup1_RefServCellIndicator refServCellIndicator; /**< ASN.1 refServCellIndicator；枚举；OPTIONAL。 */
};


/**
 * @brief GapConfig_ExtGroup2
 * @note ASN.1：GapConfig_ExtGroup2；源文件第 7443 行。
 */
struct GapConfig_ExtGroup2 {
    bool has_refFR2ServCellAsyncCA_r16; /**< refFR2ServCellAsyncCA-r16 是否存在。 */
    ServCellIndex refFR2ServCellAsyncCA_r16; /**< ASN.1 refFR2ServCellAsyncCA-r16；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_mgl_r16; /**< mgl-r16 是否存在。 */
    GapConfig_ExtGroup2_Mgl_r16 mgl_r16; /**< ASN.1 mgl-r16；枚举；OPTIONAL。 */
};


/**
 * @brief GapConfig
 * @note ASN.1：GapConfig；源文件第 7434 行。
 * @note GapConfig ::= SEQUENCE { gapOffset, mgl, mgrp, mgta, refServCellIndicator, refFR2ServCellAs...
 */
struct GapConfig {
    int64_t gapOffset; /**< ASN.1 gapOffset；INTEGER (0..159)，位宽 8 bit。 */
    GapConfig_Mgl mgl; /**< ASN.1 mgl；枚举。 */
    GapConfig_Mgrp mgrp; /**< ASN.1 mgrp；枚举。 */
    GapConfig_Mgta mgta; /**< ASN.1 mgta；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    GapConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    GapConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_GapConfig
 * @note ASN.1：SetupRelease<GapConfig>；源文件第 7419 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_GapConfig_Tag {
    SetupRelease_GapConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_GapConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_GapConfig_Tag;

struct SetupRelease_GapConfig {
    SetupRelease_GapConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        GapConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MeasGapConfig_ExtGroup1
 * @note ASN.1：MeasGapConfig_ExtGroup1；源文件第 7421 行。
 */
struct MeasGapConfig_ExtGroup1 {
    bool has_gapFR1; /**< gapFR1 是否存在。 */
    SetupRelease_GapConfig gapFR1; /**< ASN.1 gapFR1；结构体；OPTIONAL。 */
    bool has_gapUE; /**< gapUE 是否存在。 */
    SetupRelease_GapConfig gapUE; /**< ASN.1 gapUE；结构体；OPTIONAL。 */
};


/**
 * @brief MeasGapConfig
 * @note ASN.1：MeasGapConfig；源文件第 7418 行。
 * @note MeasGapConfig ::= SEQUENCE { gapFR2, gapFR1, gapUE, gapToAddModList-r17, gapToReleaseList-r17, ...
 */
struct MeasGapConfig {
    bool has_gapFR2; /**< gapFR2 是否存在。 */
    SetupRelease_GapConfig gapFR2; /**< ASN.1 gapFR2；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasGapConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasGapConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_MeasGapSharingScheme
 * @note ASN.1：SetupRelease<MeasGapSharingScheme>；源文件第 7491 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MeasGapSharingScheme_Tag {
    SetupRelease_MeasGapSharingScheme_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MeasGapSharingScheme_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MeasGapSharingScheme_Tag;

struct SetupRelease_MeasGapSharingScheme {
    SetupRelease_MeasGapSharingScheme_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MeasGapSharingScheme setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MeasGapSharingConfig_ExtGroup1
 * @note ASN.1：MeasGapSharingConfig_ExtGroup1；源文件第 7493 行。
 */
struct MeasGapSharingConfig_ExtGroup1 {
    bool has_gapSharingFR1; /**< gapSharingFR1 是否存在。 */
    SetupRelease_MeasGapSharingScheme gapSharingFR1; /**< ASN.1 gapSharingFR1；结构体；OPTIONAL。 */
    bool has_gapSharingUE; /**< gapSharingUE 是否存在。 */
    SetupRelease_MeasGapSharingScheme gapSharingUE; /**< ASN.1 gapSharingUE；结构体；OPTIONAL。 */
};


/**
 * @brief MeasGapSharingConfig
 * @note ASN.1：MeasGapSharingConfig；源文件第 7490 行。
 * @note MeasGapSharingConfig ::= SEQUENCE { gapSharingFR2, gapSharingFR1, gapSharingUE }
 */
struct MeasGapSharingConfig {
    bool has_gapSharingFR2; /**< gapSharingFR2 是否存在。 */
    SetupRelease_MeasGapSharingScheme gapSharingFR2; /**< ASN.1 gapSharingFR2；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasGapSharingConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MeasIdToAddModList
 * @note ASN.1：MeasIdToAddModList；源文件第 7599 行。
 * @note MeasIdToAddModList ::= SEQUENCE OF (size 1..64) OF MeasIdToAddMod
 */
struct MeasIdToAddModList {
    MeasIdToAddMod* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasObjectToAddModList
 * @note ASN.1：MeasObjectToAddModList；源文件第 7905 行。
 * @note MeasObjectToAddModList ::= SEQUENCE OF (size 1..64) OF MeasObjectToAddMod
 */
struct MeasObjectToAddModList {
    MeasObjectToAddMod* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FilterConfig
 * @note ASN.1：FilterConfig；源文件第 10696 行。
 * @note FilterConfig ::= SEQUENCE { filterCoefficientRSRP, filterCoefficientRSRQ, filterCoefficientRS-...
 */
struct FilterConfig {
    FilterCoefficient filterCoefficientRSRP; /**< ASN.1 filterCoefficientRSRP；枚举；DEFAULT FilterCoefficient_fc4。 */
    FilterCoefficient filterCoefficientRSRQ; /**< ASN.1 filterCoefficientRSRQ；枚举；DEFAULT FilterCoefficient_fc4。 */
    FilterCoefficient filterCoefficientRS_SINR; /**< ASN.1 filterCoefficientRS-SINR；枚举；DEFAULT FilterCoefficient_fc4。 */
};


/**
 * @brief QuantityConfig_ExtGroup1
 * @note ASN.1：QuantityConfig_ExtGroup1；源文件第 10677 行。
 */
struct QuantityConfig_ExtGroup1 {
    bool has_quantityConfigEUTRA; /**< quantityConfigEUTRA 是否存在。 */
    FilterConfig quantityConfigEUTRA; /**< ASN.1 quantityConfigEUTRA；结构体；OPTIONAL。 */
};


/**
 * @brief FilterConfigCLI_r16
 * @note ASN.1：FilterConfigCLI-r16；源文件第 10702 行。
 * @note FilterConfigCLI-r16 ::= SEQUENCE { filterCoefficientSRS-RSRP-r16, filterCoefficientCLI-RSSI-r16 }
 */
struct FilterConfigCLI_r16 {
    FilterCoefficient filterCoefficientSRS_RSRP_r16; /**< ASN.1 filterCoefficientSRS-RSRP-r16；枚举；DEFAULT FilterCoefficient_fc4。 */
    FilterCoefficient filterCoefficientCLI_RSSI_r16; /**< ASN.1 filterCoefficientCLI-RSSI-r16；枚举；DEFAULT FilterCoefficient_fc4。 */
};


/**
 * @brief QuantityConfigUTRA_FDD_r16
 * @note ASN.1：QuantityConfigUTRA-FDD-r16；源文件第 10707 行。
 * @note QuantityConfigUTRA-FDD-r16 ::= SEQUENCE { filterCoefficientRSCP-r16, filterCoefficientEcNO-r16 }
 */
struct QuantityConfigUTRA_FDD_r16 {
    FilterCoefficient filterCoefficientRSCP_r16; /**< ASN.1 filterCoefficientRSCP-r16；枚举；DEFAULT FilterCoefficient_fc4。 */
    FilterCoefficient filterCoefficientEcNO_r16; /**< ASN.1 filterCoefficientEcNO-r16；枚举；DEFAULT FilterCoefficient_fc4。 */
};


/**
 * @brief QuantityConfig_ExtGroup2
 * @note ASN.1：QuantityConfig_ExtGroup2；源文件第 10680 行。
 */
struct QuantityConfig_ExtGroup2 {
    bool has_quantityConfigUTRA_FDD_r16; /**< quantityConfigUTRA-FDD-r16 是否存在。 */
    QuantityConfigUTRA_FDD_r16 quantityConfigUTRA_FDD_r16; /**< ASN.1 quantityConfigUTRA-FDD-r16；结构体；OPTIONAL。 */
    bool has_quantityConfigCLI_r16; /**< quantityConfigCLI-r16 是否存在。 */
    FilterConfigCLI_r16 quantityConfigCLI_r16; /**< ASN.1 quantityConfigCLI-r16；结构体；OPTIONAL。 */
};


/**
 * @brief QuantityConfig
 * @note ASN.1：QuantityConfig；源文件第 10674 行。
 * @note QuantityConfig ::= SEQUENCE { quantityConfigNR-List, quantityConfigEUTRA, quantityConfigUTRA-FDD...
 */
struct QuantityConfig {
    bool has_quantityConfigNR_List; /**< quantityConfigNR-List 是否存在。 */
    QuantityConfigNR* quantityConfigNR_List_items; /**< ASN.1 quantityConfigNR-List；SEQUENCE OF QuantityConfigNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t quantityConfigNR_List_count; /**< quantityConfigNR-List 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    QuantityConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    QuantityConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ReportConfigToAddModList
 * @note ASN.1：ReportConfigToAddModList；源文件第 11813 行。
 * @note ReportConfigToAddModList ::= SEQUENCE OF (size 1..64) OF ReportConfigToAddMod
 */
struct ReportConfigToAddModList {
    ReportConfigToAddMod* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasConfig_S_MeasureConfig
 * @note ASN.1：s-MeasureConfig；源文件第 7393 行。
 * @note CHOICE { ssb-RSRP, csi-RSRP }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MeasConfig_S_MeasureConfig_Tag {
    MeasConfig_S_MeasureConfig_Tag_ssb_RSRP = 0, /**< ASN.1 ssb-RSRP */
    MeasConfig_S_MeasureConfig_Tag_csi_RSRP = 1, /**< ASN.1 csi-RSRP */
} MeasConfig_S_MeasureConfig_Tag;

struct MeasConfig_S_MeasureConfig {
    MeasConfig_S_MeasureConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RSRP_Range ssb_RSRP; /**< ASN.1 ssb-RSRP */
        RSRP_Range csi_RSRP; /**< ASN.1 csi-RSRP */
    } u;
};


/**
 * @brief MeasConfig
 * @note ASN.1：MeasConfig；源文件第 7386 行。
 * @note MeasConfig ::= SEQUENCE { measObjectToRemoveList, measObjectToAddModList, reportConfigToRemo...
 */
struct MeasConfig {
    bool has_measObjectToRemoveList; /**< measObjectToRemoveList 是否存在。 */
    MeasObjectToRemoveList measObjectToRemoveList; /**< ASN.1 measObjectToRemoveList；SEQUENCE OF MeasObjectId，SIZE (1..64)；OPTIONAL。 */
    bool has_measObjectToAddModList; /**< measObjectToAddModList 是否存在。 */
    MeasObjectToAddModList measObjectToAddModList; /**< ASN.1 measObjectToAddModList；SEQUENCE OF MeasObjectToAddMod，SIZE (1..64)；OPTIONAL。 */
    bool has_reportConfigToRemoveList; /**< reportConfigToRemoveList 是否存在。 */
    ReportConfigToRemoveList reportConfigToRemoveList; /**< ASN.1 reportConfigToRemoveList；SEQUENCE OF ReportConfigId，SIZE (1..64)；OPTIONAL。 */
    bool has_reportConfigToAddModList; /**< reportConfigToAddModList 是否存在。 */
    ReportConfigToAddModList reportConfigToAddModList; /**< ASN.1 reportConfigToAddModList；SEQUENCE OF ReportConfigToAddMod，SIZE (1..64)；OPTIONAL。 */
    bool has_measIdToRemoveList; /**< measIdToRemoveList 是否存在。 */
    MeasIdToRemoveList measIdToRemoveList; /**< ASN.1 measIdToRemoveList；SEQUENCE OF MeasId，SIZE (1..64)；OPTIONAL。 */
    bool has_measIdToAddModList; /**< measIdToAddModList 是否存在。 */
    MeasIdToAddModList measIdToAddModList; /**< ASN.1 measIdToAddModList；SEQUENCE OF MeasIdToAddMod，SIZE (1..64)；OPTIONAL。 */
    bool has_s_MeasureConfig; /**< s-MeasureConfig 是否存在。 */
    MeasConfig_S_MeasureConfig s_MeasureConfig; /**< ASN.1 s-MeasureConfig；结构体；OPTIONAL。 */
    bool has_quantityConfig; /**< quantityConfig 是否存在。 */
    QuantityConfig quantityConfig; /**< ASN.1 quantityConfig；结构体；OPTIONAL。 */
    bool has_measGapConfig; /**< measGapConfig 是否存在。 */
    MeasGapConfig measGapConfig; /**< ASN.1 measGapConfig；结构体；OPTIONAL。 */
    bool has_measGapSharingConfig; /**< measGapSharingConfig 是否存在。 */
    MeasGapSharingConfig measGapSharingConfig; /**< ASN.1 measGapSharingConfig；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MeasConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PDCP_Config_ExtGroup1
 * @note ASN.1：PDCP_Config_ExtGroup1；源文件第 9338 行。
 */
struct PDCP_Config_ExtGroup1 {
    bool has_cipheringDisabled; /**< cipheringDisabled 是否存在。 */
    PDCP_Config_ExtGroup1_CipheringDisabled cipheringDisabled; /**< ASN.1 cipheringDisabled；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DiscardTimerExt_r16
 * @note ASN.1：SetupRelease<DiscardTimerExt-r16>；源文件第 9342 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DiscardTimerExt_r16_Tag {
    SetupRelease_DiscardTimerExt_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DiscardTimerExt_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DiscardTimerExt_r16_Tag;

struct SetupRelease_DiscardTimerExt_r16 {
    SetupRelease_DiscardTimerExt_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DiscardTimerExt_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16
 * @note ASN.1：moreThanTwoRLC-DRB-r16；源文件第 9343 行。
 * @note SEQUENCE { splitSecondaryPath-r16, duplicationState-r16 }
 */
struct PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16 {
    bool has_splitSecondaryPath_r16; /**< splitSecondaryPath-r16 是否存在。 */
    LogicalChannelIdentity splitSecondaryPath_r16; /**< ASN.1 splitSecondaryPath-r16；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_duplicationState_r16; /**< duplicationState-r16 是否存在。 */
    bool* duplicationState_r16_items; /**< ASN.1 duplicationState-r16；SEQUENCE OF bool，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t duplicationState_r16_count; /**< duplicationState-r16 元素个数。 */
};


/**
 * @brief EthernetHeaderCompression_r16_Ehc_Common_r16
 * @note ASN.1：ehc-Common-r16；源文件第 9363 行。
 * @note SEQUENCE { ehc-CID-Length-r16 }
 */
struct EthernetHeaderCompression_r16_Ehc_Common_r16 {
    EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16 ehc_CID_Length_r16; /**< ASN.1 ehc-CID-Length-r16；枚举。 */
};


/**
 * @brief EthernetHeaderCompression_r16_Ehc_Downlink_r16
 * @note ASN.1：ehc-Downlink-r16；源文件第 9367 行。
 * @note SEQUENCE { drb-ContinueEHC-DL-r16 }
 */
struct EthernetHeaderCompression_r16_Ehc_Downlink_r16 {
    bool has_drb_ContinueEHC_DL_r16; /**< drb-ContinueEHC-DL-r16 是否存在。 */
    EthernetHeaderCompression_r16_Ehc_Downlink_r16_Drb_ContinueEHC_DL_r16 drb_ContinueEHC_DL_r16; /**< ASN.1 drb-ContinueEHC-DL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief EthernetHeaderCompression_r16_Ehc_Uplink_r16
 * @note ASN.1：ehc-Uplink-r16；源文件第 9371 行。
 * @note SEQUENCE { maxCID-EHC-UL-r16, drb-ContinueEHC-UL-r16 }
 */
struct EthernetHeaderCompression_r16_Ehc_Uplink_r16 {
    int64_t maxCID_EHC_UL_r16; /**< ASN.1 maxCID-EHC-UL-r16；INTEGER (1..32767)，位宽 15 bit。 */
    bool has_drb_ContinueEHC_UL_r16; /**< drb-ContinueEHC-UL-r16 是否存在。 */
    EthernetHeaderCompression_r16_Ehc_Uplink_r16_Drb_ContinueEHC_UL_r16 drb_ContinueEHC_UL_r16; /**< ASN.1 drb-ContinueEHC-UL-r16；枚举；OPTIONAL。 */
};


/**
 * @brief EthernetHeaderCompression_r16
 * @note ASN.1：EthernetHeaderCompression-r16；源文件第 9362 行。
 * @note EthernetHeaderCompression-r16 ::= SEQUENCE { ehc-Common-r16, ehc-Downlink-r16, ehc-Uplink-r16 }
 */
struct EthernetHeaderCompression_r16 {
    EthernetHeaderCompression_r16_Ehc_Common_r16 ehc_Common_r16; /**< ASN.1 ehc-Common-r16；结构体。 */
    bool has_ehc_Downlink_r16; /**< ehc-Downlink-r16 是否存在。 */
    EthernetHeaderCompression_r16_Ehc_Downlink_r16 ehc_Downlink_r16; /**< ASN.1 ehc-Downlink-r16；结构体；OPTIONAL。 */
    bool has_ehc_Uplink_r16; /**< ehc-Uplink-r16 是否存在。 */
    EthernetHeaderCompression_r16_Ehc_Uplink_r16 ehc_Uplink_r16; /**< ASN.1 ehc-Uplink-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_EthernetHeaderCompression_r16
 * @note ASN.1：SetupRelease<EthernetHeaderCompression-r16>；源文件第 9347 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_EthernetHeaderCompression_r16_Tag {
    SetupRelease_EthernetHeaderCompression_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_EthernetHeaderCompression_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_EthernetHeaderCompression_r16_Tag;

struct SetupRelease_EthernetHeaderCompression_r16 {
    SetupRelease_EthernetHeaderCompression_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        EthernetHeaderCompression_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCP_Config_ExtGroup2
 * @note ASN.1：PDCP_Config_ExtGroup2；源文件第 9341 行。
 */
struct PDCP_Config_ExtGroup2 {
    bool has_discardTimerExt_r16; /**< discardTimerExt-r16 是否存在。 */
    SetupRelease_DiscardTimerExt_r16 discardTimerExt_r16; /**< ASN.1 discardTimerExt-r16；结构体；OPTIONAL。 */
    bool has_moreThanTwoRLC_DRB_r16; /**< moreThanTwoRLC-DRB-r16 是否存在。 */
    PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16 moreThanTwoRLC_DRB_r16; /**< ASN.1 moreThanTwoRLC-DRB-r16；结构体；OPTIONAL。 */
    bool has_ethernetHeaderCompression_r16; /**< ethernetHeaderCompression-r16 是否存在。 */
    SetupRelease_EthernetHeaderCompression_r16 ethernetHeaderCompression_r16; /**< ASN.1 ethernetHeaderCompression-r16；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkDataCompression_r17_NewSetup
 * @note ASN.1：newSetup；源文件第 9388 行。
 * @note SEQUENCE { bufferSize-r17, dictionary-r17 }
 */
struct UplinkDataCompression_r17_NewSetup {
    UplinkDataCompression_r17_NewSetup_BufferSize_r17 bufferSize_r17; /**< ASN.1 bufferSize-r17；枚举。 */
    bool has_dictionary_r17; /**< dictionary-r17 是否存在。 */
    UplinkDataCompression_r17_NewSetup_Dictionary_r17 dictionary_r17; /**< ASN.1 dictionary-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UplinkDataCompression_r17
 * @note ASN.1：UplinkDataCompression-r17；源文件第 9387 行。
 * @note UplinkDataCompression-r17 ::= CHOICE { newSetup, drb-ContinueUDC }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum UplinkDataCompression_r17_Tag {
    UplinkDataCompression_r17_Tag_newSetup = 0, /**< ASN.1 newSetup */
    UplinkDataCompression_r17_Tag_drb_ContinueUDC = 1, /**< ASN.1 drb-ContinueUDC */
} UplinkDataCompression_r17_Tag;

struct UplinkDataCompression_r17 {
    UplinkDataCompression_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        UplinkDataCompression_r17_NewSetup newSetup; /**< ASN.1 newSetup */
        Null drb_ContinueUDC; /**< ASN.1 drb-ContinueUDC */
    } u;
};


/**
 * @brief SetupRelease_UplinkDataCompression_r17
 * @note ASN.1：SetupRelease<UplinkDataCompression-r17>；源文件第 9351 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UplinkDataCompression_r17_Tag {
    SetupRelease_UplinkDataCompression_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UplinkDataCompression_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UplinkDataCompression_r17_Tag;

struct SetupRelease_UplinkDataCompression_r17 {
    SetupRelease_UplinkDataCompression_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UplinkDataCompression_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_DiscardTimerExt2_r17
 * @note ASN.1：SetupRelease<DiscardTimerExt2-r17>；源文件第 9352 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DiscardTimerExt2_r17_Tag {
    SetupRelease_DiscardTimerExt2_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DiscardTimerExt2_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DiscardTimerExt2_r17_Tag;

struct SetupRelease_DiscardTimerExt2_r17 {
    SetupRelease_DiscardTimerExt2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DiscardTimerExt2_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCP_Config_ExtGroup3
 * @note ASN.1：PDCP_Config_ExtGroup3；源文件第 9349 行。
 */
struct PDCP_Config_ExtGroup3 {
    bool has_survivalTimeStateSupport_r17; /**< survivalTimeStateSupport-r17 是否存在。 */
    PDCP_Config_ExtGroup3_SurvivalTimeStateSupport_r17 survivalTimeStateSupport_r17; /**< ASN.1 survivalTimeStateSupport-r17；枚举；OPTIONAL。 */
    bool has_uplinkDataCompression_r17; /**< uplinkDataCompression-r17 是否存在。 */
    SetupRelease_UplinkDataCompression_r17 uplinkDataCompression_r17; /**< ASN.1 uplinkDataCompression-r17；结构体；OPTIONAL。 */
    bool has_discardTimerExt2_r17; /**< discardTimerExt2-r17 是否存在。 */
    SetupRelease_DiscardTimerExt2_r17 discardTimerExt2_r17; /**< ASN.1 discardTimerExt2-r17；结构体；OPTIONAL。 */
    bool has_initialRX_DELIV_r17; /**< initialRX-DELIV-r17 是否存在。 */
    BitString initialRX_DELIV_r17; /**< ASN.1 initialRX-DELIV-r17；SIZE (32)，定长；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DiscardTimerForLowImportance_r18
 * @note ASN.1：SetupRelease<DiscardTimerForLowImportance-r18>；源文件第 9357 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DiscardTimerForLowImportance_r18_Tag {
    SetupRelease_DiscardTimerForLowImportance_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DiscardTimerForLowImportance_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DiscardTimerForLowImportance_r18_Tag;

struct SetupRelease_DiscardTimerForLowImportance_r18 {
    SetupRelease_DiscardTimerForLowImportance_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DiscardTimerForLowImportance_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCP_Config_ExtGroup4
 * @note ASN.1：PDCP_Config_ExtGroup4；源文件第 9355 行。
 */
struct PDCP_Config_ExtGroup4 {
    bool has_pdu_SetDiscard_r18; /**< pdu-SetDiscard-r18 是否存在。 */
    PDCP_Config_ExtGroup4_Pdu_SetDiscard_r18 pdu_SetDiscard_r18; /**< ASN.1 pdu-SetDiscard-r18；枚举；OPTIONAL。 */
    bool has_discardTimerForLowImportance_r18; /**< discardTimerForLowImportance-r18 是否存在。 */
    SetupRelease_DiscardTimerForLowImportance_r18 discardTimerForLowImportance_r18; /**< ASN.1 discardTimerForLowImportance-r18；结构体；OPTIONAL。 */
    bool has_primaryPathOnIndirectPath_r18; /**< primaryPathOnIndirectPath-r18 是否存在。 */
    PDCP_Config_ExtGroup4_PrimaryPathOnIndirectPath_r18 primaryPathOnIndirectPath_r18; /**< ASN.1 primaryPathOnIndirectPath-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Config_Drb_HeaderCompression_Rohc_Profiles
 * @note ASN.1：drb/headerCompression/rohc/profiles；源文件第 9291 行。
 * @note SEQUENCE { profile0x0001, profile0x0002, profile0x0003, profile0x0004, profil...
 */
struct PDCP_Config_Drb_HeaderCompression_Rohc_Profiles {
    bool profile0x0001; /**< ASN.1 profile0x0001；BOOLEAN，1 bit。 */
    bool profile0x0002; /**< ASN.1 profile0x0002；BOOLEAN，1 bit。 */
    bool profile0x0003; /**< ASN.1 profile0x0003；BOOLEAN，1 bit。 */
    bool profile0x0004; /**< ASN.1 profile0x0004；BOOLEAN，1 bit。 */
    bool profile0x0006; /**< ASN.1 profile0x0006；BOOLEAN，1 bit。 */
    bool profile0x0101; /**< ASN.1 profile0x0101；BOOLEAN，1 bit。 */
    bool profile0x0102; /**< ASN.1 profile0x0102；BOOLEAN，1 bit。 */
    bool profile0x0103; /**< ASN.1 profile0x0103；BOOLEAN，1 bit。 */
    bool profile0x0104; /**< ASN.1 profile0x0104；BOOLEAN，1 bit。 */
};


/**
 * @brief PDCP_Config_Drb_HeaderCompression_Rohc
 * @note ASN.1：drb/headerCompression/rohc；源文件第 9289 行。
 * @note SEQUENCE { maxCID, profiles, drb-ContinueROHC }
 */
struct PDCP_Config_Drb_HeaderCompression_Rohc {
    int64_t maxCID; /**< ASN.1 maxCID；INTEGER (1..16383)，位宽 14 bit；DEFAULT 15。 */
    PDCP_Config_Drb_HeaderCompression_Rohc_Profiles profiles; /**< ASN.1 profiles；结构体。 */
    bool has_drb_ContinueROHC; /**< drb-ContinueROHC 是否存在。 */
    PDCP_Config_Drb_HeaderCompression_Rohc_Drb_ContinueROHC drb_ContinueROHC; /**< ASN.1 drb-ContinueROHC；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles
 * @note ASN.1：drb/headerCompression/uplinkOnlyROHC/profiles；源文件第 9306 行。
 * @note SEQUENCE { profile0x0006 }
 */
struct PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles {
    bool profile0x0006; /**< ASN.1 profile0x0006；BOOLEAN，1 bit。 */
};


/**
 * @brief PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC
 * @note ASN.1：drb/headerCompression/uplinkOnlyROHC；源文件第 9304 行。
 * @note SEQUENCE { maxCID, profiles, drb-ContinueROHC }
 */
struct PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC {
    int64_t maxCID; /**< ASN.1 maxCID；INTEGER (1..16383)，位宽 14 bit；DEFAULT 15。 */
    PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles profiles; /**< ASN.1 profiles；结构体。 */
    bool has_drb_ContinueROHC; /**< drb-ContinueROHC 是否存在。 */
    PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Drb_ContinueROHC drb_ContinueROHC; /**< ASN.1 drb-ContinueROHC；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Config_Drb_HeaderCompression
 * @note ASN.1：drb/headerCompression；源文件第 9287 行。
 * @note CHOICE { notUsed, rohc, uplinkOnlyROHC }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDCP_Config_Drb_HeaderCompression_Tag {
    PDCP_Config_Drb_HeaderCompression_Tag_notUsed = 0, /**< ASN.1 notUsed */
    PDCP_Config_Drb_HeaderCompression_Tag_rohc = 1, /**< ASN.1 rohc */
    PDCP_Config_Drb_HeaderCompression_Tag_uplinkOnlyROHC = 2, /**< ASN.1 uplinkOnlyROHC */
} PDCP_Config_Drb_HeaderCompression_Tag;

struct PDCP_Config_Drb_HeaderCompression {
    PDCP_Config_Drb_HeaderCompression_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null notUsed; /**< ASN.1 notUsed */
        PDCP_Config_Drb_HeaderCompression_Rohc rohc; /**< ASN.1 rohc */
        PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC uplinkOnlyROHC; /**< ASN.1 uplinkOnlyROHC */
    } u;
};


/**
 * @brief PDCP_Config_Drb
 * @note ASN.1：drb；源文件第 9282 行。
 * @note SEQUENCE { discardTimer, pdcp-SN-SizeUL, pdcp-SN-SizeDL, headerCompression, i...
 */
struct PDCP_Config_Drb {
    bool has_discardTimer; /**< discardTimer 是否存在。 */
    PDCP_Config_Drb_DiscardTimer discardTimer; /**< ASN.1 discardTimer；枚举；OPTIONAL。 */
    bool has_pdcp_SN_SizeUL; /**< pdcp-SN-SizeUL 是否存在。 */
    PDCP_Config_Drb_Pdcp_SN_SizeUL pdcp_SN_SizeUL; /**< ASN.1 pdcp-SN-SizeUL；枚举；OPTIONAL。 */
    bool has_pdcp_SN_SizeDL; /**< pdcp-SN-SizeDL 是否存在。 */
    PDCP_Config_Drb_Pdcp_SN_SizeDL pdcp_SN_SizeDL; /**< ASN.1 pdcp-SN-SizeDL；枚举；OPTIONAL。 */
    PDCP_Config_Drb_HeaderCompression headerCompression; /**< ASN.1 headerCompression；结构体。 */
    bool has_integrityProtection; /**< integrityProtection 是否存在。 */
    PDCP_Config_Drb_IntegrityProtection integrityProtection; /**< ASN.1 integrityProtection；枚举；OPTIONAL。 */
    bool has_statusReportRequired; /**< statusReportRequired 是否存在。 */
    PDCP_Config_Drb_StatusReportRequired statusReportRequired; /**< ASN.1 statusReportRequired；枚举；OPTIONAL。 */
    bool has_outOfOrderDelivery; /**< outOfOrderDelivery 是否存在。 */
    PDCP_Config_Drb_OutOfOrderDelivery outOfOrderDelivery; /**< ASN.1 outOfOrderDelivery；枚举；OPTIONAL。 */
};


/**
 * @brief PDCP_Config_MoreThanOneRLC_PrimaryPath
 * @note ASN.1：moreThanOneRLC/primaryPath；源文件第 9318 行。
 * @note SEQUENCE { cellGroup, logicalChannel }
 */
struct PDCP_Config_MoreThanOneRLC_PrimaryPath {
    bool has_cellGroup; /**< cellGroup 是否存在。 */
    CellGroupId cellGroup; /**< ASN.1 cellGroup；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_logicalChannel; /**< logicalChannel 是否存在。 */
    LogicalChannelIdentity logicalChannel; /**< ASN.1 logicalChannel；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief PDCP_Config_MoreThanOneRLC
 * @note ASN.1：moreThanOneRLC；源文件第 9317 行。
 * @note SEQUENCE { primaryPath, ul-DataSplitThreshold, pdcp-Duplication }
 */
struct PDCP_Config_MoreThanOneRLC {
    PDCP_Config_MoreThanOneRLC_PrimaryPath primaryPath; /**< ASN.1 primaryPath；结构体。 */
    bool has_ul_DataSplitThreshold; /**< ul-DataSplitThreshold 是否存在。 */
    UL_DataSplitThreshold ul_DataSplitThreshold; /**< ASN.1 ul-DataSplitThreshold；枚举；OPTIONAL。 */
    bool has_pdcp_Duplication; /**< pdcp-Duplication 是否存在。 */
    bool pdcp_Duplication; /**< ASN.1 pdcp-Duplication；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief PDCP_Config
 * @note ASN.1：PDCP-Config；源文件第 9281 行。
 * @note PDCP-Config ::= SEQUENCE { drb, moreThanOneRLC, t-Reordering, cipheringDisabled, discardTimer...
 */
struct PDCP_Config {
    bool has_drb; /**< drb 是否存在。 */
    PDCP_Config_Drb drb; /**< ASN.1 drb；结构体；OPTIONAL。 */
    bool has_moreThanOneRLC; /**< moreThanOneRLC 是否存在。 */
    PDCP_Config_MoreThanOneRLC moreThanOneRLC; /**< ASN.1 moreThanOneRLC；结构体；OPTIONAL。 */
    bool has_t_Reordering; /**< t-Reordering 是否存在。 */
    PDCP_Config_T_Reordering t_Reordering; /**< ASN.1 t-Reordering；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDCP_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDCP_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PDCP_Config_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    PDCP_Config_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SRB_ToAddMod_ExtGroup1
 * @note ASN.1：SRB_ToAddMod_ExtGroup1；源文件第 10999 行。
 */
struct SRB_ToAddMod_ExtGroup1 {
    bool has_srb_Identity_v1700; /**< srb-Identity-v1700 是否存在。 */
    SRB_Identity_v1700 srb_Identity_v1700; /**< ASN.1 srb-Identity-v1700；INTEGER (4)，单值 0 bit；OPTIONAL。 */
};


/**
 * @brief SRB_ToAddMod_ExtGroup2
 * @note ASN.1：SRB_ToAddMod_ExtGroup2；源文件第 11002 行。
 */
struct SRB_ToAddMod_ExtGroup2 {
    bool has_srb_Identity_v1800; /**< srb-Identity-v1800 是否存在。 */
    SRB_Identity_v1800 srb_Identity_v1800; /**< ASN.1 srb-Identity-v1800；INTEGER (5)，单值 0 bit；OPTIONAL。 */
    bool has_n3c_BearerAssociated_r18; /**< n3c-BearerAssociated-r18 是否存在。 */
    SRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18 n3c_BearerAssociated_r18; /**< ASN.1 n3c-BearerAssociated-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRB_ToAddMod
 * @note ASN.1：SRB-ToAddMod；源文件第 10993 行。
 * @note SRB-ToAddMod ::= SEQUENCE { srb-Identity, reestablishPDCP, discardOnPDCP, pdcp-Config, srb-Ide...
 */
struct SRB_ToAddMod {
    SRB_Identity srb_Identity; /**< ASN.1 srb-Identity；INTEGER (1..3)，位宽 2 bit。 */
    bool has_reestablishPDCP; /**< reestablishPDCP 是否存在。 */
    SRB_ToAddMod_ReestablishPDCP reestablishPDCP; /**< ASN.1 reestablishPDCP；枚举；OPTIONAL。 */
    bool has_discardOnPDCP; /**< discardOnPDCP 是否存在。 */
    SRB_ToAddMod_DiscardOnPDCP discardOnPDCP; /**< ASN.1 discardOnPDCP；枚举；OPTIONAL。 */
    bool has_pdcp_Config; /**< pdcp-Config 是否存在。 */
    PDCP_Config pdcp_Config; /**< ASN.1 pdcp-Config；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRB_ToAddMod_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SRB_ToAddMod_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief MRB_ToAddModList_r17
 * @note ASN.1：MRB-ToAddModList-r17；源文件第 11035 行。
 * @note MRB-ToAddModList-r17 ::= SEQUENCE OF (size 1..32) OF MRB-ToAddMod-r17
 */
struct MRB_ToAddModList_r17 {
    MRB_ToAddMod_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MRB_ToReleaseList_r17
 * @note ASN.1：MRB-ToReleaseList-r17；源文件第 11047 行。
 * @note MRB-ToReleaseList-r17 ::= SEQUENCE OF (size 1..32) OF MRB-Identity-r17
 */
struct MRB_ToReleaseList_r17 {
    MRB_Identity_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RadioBearerConfig_ExtGroup1
 * @note ASN.1：RadioBearerConfig_ExtGroup1；源文件第 10979 行。
 */
struct RadioBearerConfig_ExtGroup1 {
    bool has_mrb_ToAddModList_r17; /**< mrb-ToAddModList-r17 是否存在。 */
    MRB_ToAddModList_r17 mrb_ToAddModList_r17; /**< ASN.1 mrb-ToAddModList-r17；SEQUENCE OF MRB_ToAddMod_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_mrb_ToReleaseList_r17; /**< mrb-ToReleaseList-r17 是否存在。 */
    MRB_ToReleaseList_r17 mrb_ToReleaseList_r17; /**< ASN.1 mrb-ToReleaseList-r17；SEQUENCE OF MRB_Identity_r17，SIZE (1..32)；OPTIONAL。 */
    bool has_srb4_ToAddMod_r17; /**< srb4-ToAddMod-r17 是否存在。 */
    SRB_ToAddMod srb4_ToAddMod_r17; /**< ASN.1 srb4-ToAddMod-r17；结构体；OPTIONAL。 */
    bool has_srb4_ToRelease_r17; /**< srb4-ToRelease-r17 是否存在。 */
    RadioBearerConfig_ExtGroup1_Srb4_ToRelease_r17 srb4_ToRelease_r17; /**< ASN.1 srb4-ToRelease-r17；枚举；OPTIONAL。 */
};


/**
 * @brief RadioBearerConfig_ExtGroup2
 * @note ASN.1：RadioBearerConfig_ExtGroup2；源文件第 10985 行。
 */
struct RadioBearerConfig_ExtGroup2 {
    bool has_srb5_ToAddMod_r18; /**< srb5-ToAddMod-r18 是否存在。 */
    SRB_ToAddMod srb5_ToAddMod_r18; /**< ASN.1 srb5-ToAddMod-r18；结构体；OPTIONAL。 */
    bool has_srb5_ToRelease_r18; /**< srb5-ToRelease-r18 是否存在。 */
    RadioBearerConfig_ExtGroup2_Srb5_ToRelease_r18 srb5_ToRelease_r18; /**< ASN.1 srb5-ToRelease-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRB_ToAddModList
 * @note ASN.1：SRB-ToAddModList；源文件第 10991 行。
 * @note SRB-ToAddModList ::= SEQUENCE OF (size 1..2) OF SRB-ToAddMod
 */
struct SRB_ToAddModList {
    SRB_ToAddMod* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief DRB_ToAddModList
 * @note ASN.1：DRB-ToAddModList；源文件第 11008 行。
 * @note DRB-ToAddModList ::= SEQUENCE OF (size 1..29) OF DRB-ToAddMod
 */
struct DRB_ToAddModList {
    DRB_ToAddMod* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief DRB_ToReleaseList
 * @note ASN.1：DRB-ToReleaseList；源文件第 11027 行。
 * @note DRB-ToReleaseList ::= SEQUENCE OF (size 1..29) OF DRB-Identity
 */
struct DRB_ToReleaseList {
    DRB_Identity* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SecurityAlgorithmConfig
 * @note ASN.1：SecurityAlgorithmConfig；源文件第 12349 行。
 * @note SecurityAlgorithmConfig ::= SEQUENCE { cipheringAlgorithm, integrityProtAlgorithm }
 */
struct SecurityAlgorithmConfig {
    CipheringAlgorithm cipheringAlgorithm; /**< ASN.1 cipheringAlgorithm；枚举。 */
    bool has_integrityProtAlgorithm; /**< integrityProtAlgorithm 是否存在。 */
    IntegrityProtAlgorithm integrityProtAlgorithm; /**< ASN.1 integrityProtAlgorithm；枚举；OPTIONAL。 */
};


/**
 * @brief SecurityConfig
 * @note ASN.1：SecurityConfig；源文件第 11029 行。
 * @note SecurityConfig ::= SEQUENCE { securityAlgorithmConfig, keyToUse }
 */
struct SecurityConfig {
    bool has_securityAlgorithmConfig; /**< securityAlgorithmConfig 是否存在。 */
    SecurityAlgorithmConfig securityAlgorithmConfig; /**< ASN.1 securityAlgorithmConfig；结构体；OPTIONAL。 */
    bool has_keyToUse; /**< keyToUse 是否存在。 */
    SecurityConfig_KeyToUse keyToUse; /**< ASN.1 keyToUse；枚举；OPTIONAL。 */
};


/**
 * @brief RadioBearerConfig
 * @note ASN.1：RadioBearerConfig；源文件第 10972 行。
 * @note RadioBearerConfig ::= SEQUENCE { srb-ToAddModList, srb3-ToRelease, drb-ToAddModList, drb-ToReleaseL...
 */
struct RadioBearerConfig {
    bool has_srb_ToAddModList; /**< srb-ToAddModList 是否存在。 */
    SRB_ToAddModList srb_ToAddModList; /**< ASN.1 srb-ToAddModList；SEQUENCE OF SRB_ToAddMod，SIZE (1..2)；OPTIONAL。 */
    bool has_srb3_ToRelease; /**< srb3-ToRelease 是否存在。 */
    RadioBearerConfig_Srb3_ToRelease srb3_ToRelease; /**< ASN.1 srb3-ToRelease；枚举；OPTIONAL。 */
    bool has_drb_ToAddModList; /**< drb-ToAddModList 是否存在。 */
    DRB_ToAddModList drb_ToAddModList; /**< ASN.1 drb-ToAddModList；SEQUENCE OF DRB_ToAddMod，SIZE (1..29)；OPTIONAL。 */
    bool has_drb_ToReleaseList; /**< drb-ToReleaseList 是否存在。 */
    DRB_ToReleaseList drb_ToReleaseList; /**< ASN.1 drb-ToReleaseList；SEQUENCE OF DRB_Identity，SIZE (1..29)；OPTIONAL。 */
    bool has_securityConfig; /**< securityConfig 是否存在。 */
    SecurityConfig securityConfig; /**< ASN.1 securityConfig；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RadioBearerConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    RadioBearerConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RRCReconfiguration_IEs
 * @note ASN.1：RRCReconfiguration-IEs；源文件第 938 行。
 * @note RRCReconfiguration-IEs ::= SEQUENCE { radioBearerConfig, secondaryCellGroup, measConfig, lateNonCritical...
 */
struct RRCReconfiguration_IEs {
    bool has_radioBearerConfig; /**< radioBearerConfig 是否存在。 */
    RadioBearerConfig radioBearerConfig; /**< ASN.1 radioBearerConfig；结构体；OPTIONAL。 */
    CellGroupConfig* secondaryCellGroup; /**< ASN.1 secondaryCellGroup；OCTET STRING (CONTAINING CellGroupConfig)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    bool has_measConfig; /**< measConfig 是否存在。 */
    MeasConfig measConfig; /**< ASN.1 measConfig；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfiguration_v1530_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReconfiguration_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 934 行。
 * @note SEQUENCE { }
 */
struct RRCReconfiguration_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReconfiguration_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 932 行。
 * @note CHOICE { rrcReconfiguration, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCReconfiguration_CriticalExtensions_Tag {
    RRCReconfiguration_CriticalExtensions_Tag_rrcReconfiguration = 0, /**< ASN.1 rrcReconfiguration */
    RRCReconfiguration_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCReconfiguration_CriticalExtensions_Tag;

struct RRCReconfiguration_CriticalExtensions {
    RRCReconfiguration_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReconfiguration_IEs rrcReconfiguration; /**< ASN.1 rrcReconfiguration */
        RRCReconfiguration_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCReconfiguration
 * @note ASN.1：RRCReconfiguration；源文件第 930 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_RRCReconfiguration（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCReconfiguration ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCReconfiguration {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCReconfiguration_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief IAB_IP_AddressConfiguration_r16
 * @note ASN.1：IAB-IP-AddressConfiguration-r16；源文件第 1046 行。
 * @note IAB-IP-AddressConfiguration-r16 ::= SEQUENCE { iab-IP-AddressIndex-r16, iab-IP-Address-r16, iab-IP-Usage-r16, iab...
 */
struct IAB_IP_AddressConfiguration_r16 {
    IAB_IP_AddressIndex_r16 iab_IP_AddressIndex_r16; /**< ASN.1 iab-IP-AddressIndex-r16；INTEGER (1..32)，位宽 5 bit。 */
    bool has_iab_IP_Address_r16; /**< iab-IP-Address-r16 是否存在。 */
    IAB_IP_Address_r16 iab_IP_Address_r16; /**< ASN.1 iab-IP-Address-r16；结构体；OPTIONAL。 */
    bool has_iab_IP_Usage_r16; /**< iab-IP-Usage-r16 是否存在。 */
    IAB_IP_Usage_r16 iab_IP_Usage_r16; /**< ASN.1 iab-IP-Usage-r16；枚举；OPTIONAL。 */
    bool has_iab_donor_DU_BAP_Address_r16; /**< iab-donor-DU-BAP-Address-r16 是否存在。 */
    BitString iab_donor_DU_BAP_Address_r16; /**< ASN.1 iab-donor-DU-BAP-Address-r16；SIZE (10)，定长；OPTIONAL。 */
};


/**
 * @brief NeedForInterruptionIntraFreqList_r18
 * @note ASN.1：NeedForInterruptionIntraFreqList-r18；源文件第 8735 行。
 * @note NeedForInterruptionIntraFreqList-r18 ::= SEQUENCE OF (size 1..32) OF NeedForInterruptionNR-r18
 */
struct NeedForInterruptionIntraFreqList_r18 {
    NeedForInterruptionNR_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NeedForInterruptionBandListNR_r18
 * @note ASN.1：NeedForInterruptionBandListNR-r18；源文件第 8737 行。
 * @note NeedForInterruptionBandListNR-r18 ::= SEQUENCE OF (size 1..1024) OF NeedForInterruptionNR-r18
 */
struct NeedForInterruptionBandListNR_r18 {
    NeedForInterruptionNR_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NeedForInterruptionInfoNR_r18
 * @note ASN.1：NeedForInterruptionInfoNR-r18；源文件第 8729 行。
 * @note NeedForInterruptionInfoNR-r18 ::= SEQUENCE { intraFreq-needForInterruption-r18, interFreq-needForInterruption-r...
 */
struct NeedForInterruptionInfoNR_r18 {
    NeedForInterruptionIntraFreqList_r18 intraFreq_needForInterruption_r18; /**< ASN.1 intraFreq-needForInterruption-r18；SEQUENCE OF NeedForInterruptionNR_r18，SIZE (1..32)。 */
    NeedForInterruptionBandListNR_r18 interFreq_needForInterruption_r18; /**< ASN.1 interFreq-needForInterruption-r18；SEQUENCE OF NeedForInterruptionNR_r18，SIZE (1..1024)。 */
};


/**
 * @brief SelectedPSCellForCHO_WithSCG_r18
 * @note ASN.1：SelectedPSCellForCHO-WithSCG-r18；源文件第 12366 行。
 * @note SelectedPSCellForCHO-WithSCG-r18 ::= SEQUENCE { ssbFrequency-r18, physCellId-r18 }
 */
struct SelectedPSCellForCHO_WithSCG_r18 {
    ARFCN_ValueNR ssbFrequency_r18; /**< ASN.1 ssbFrequency-r18；INTEGER (0..3279165)，位宽 22 bit。 */
    PhysCellId physCellId_r18; /**< ASN.1 physCellId-r18；INTEGER (0..1007)，位宽 10 bit。 */
};


/**
 * @brief RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1127 行。
 * @note SEQUENCE { }
 */
struct RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReconfigurationComplete_v1800_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1800-IEs；源文件第 1121 行。
 * @note RRCReconfigurationComplete-v1800-IEs ::= SEQUENCE { needForInterruptionInfoNR-r18, flightPathInfoAvailable-r18, select...
 */
struct RRCReconfigurationComplete_v1800_IEs {
    bool has_needForInterruptionInfoNR_r18; /**< needForInterruptionInfoNR-r18 是否存在。 */
    NeedForInterruptionInfoNR_r18 needForInterruptionInfoNR_r18; /**< ASN.1 needForInterruptionInfoNR-r18；结构体；OPTIONAL。 */
    bool has_flightPathInfoAvailable_r18; /**< flightPathInfoAvailable-r18 是否存在。 */
    RRCReconfigurationComplete_v1800_IEs_FlightPathInfoAvailable_r18 flightPathInfoAvailable_r18; /**< ASN.1 flightPathInfoAvailable-r18；枚举；OPTIONAL。 */
    bool has_selectedPSCellForCHO_WithSCG_r18; /**< selectedPSCellForCHO-WithSCG-r18 是否存在。 */
    SelectedPSCellForCHO_WithSCG_r18 selectedPSCellForCHO_WithSCG_r18; /**< ASN.1 selectedPSCellForCHO-WithSCG-r18；结构体；OPTIONAL。 */
    bool has_selectedSK_Counter_r18; /**< selectedSK-Counter-r18 是否存在。 */
    SK_Counter selectedSK_Counter_r18; /**< ASN.1 selectedSK-Counter-r18；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_measConfigReportAppLayerAvailable_r18; /**< measConfigReportAppLayerAvailable-r18 是否存在。 */
    RRCReconfigurationComplete_v1800_IEs_MeasConfigReportAppLayerAvailable_r18 measConfigReportAppLayerAvailable_r18; /**< ASN.1 measConfigReportAppLayerAvailable-r18；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1800_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkTxDirectCurrentMoreCarrierList_r17
 * @note ASN.1：UplinkTxDirectCurrentMoreCarrierList-r17；源文件第 14033 行。
 * @note UplinkTxDirectCurrentMoreCarrierList-r17 ::= SEQUENCE OF (size 1..16) OF CC-Group-r17
 */
struct UplinkTxDirectCurrentMoreCarrierList_r17 {
    CC_Group_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RRCReconfigurationComplete_v1720_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1720-IEs；源文件第 1116 行。
 * @note RRCReconfigurationComplete-v1720-IEs ::= SEQUENCE { uplinkTxDirectCurrentMoreCarrierList-r17, nonCriticalExtension }
 */
struct RRCReconfigurationComplete_v1720_IEs {
    bool has_uplinkTxDirectCurrentMoreCarrierList_r17; /**< uplinkTxDirectCurrentMoreCarrierList-r17 是否存在。 */
    UplinkTxDirectCurrentMoreCarrierList_r17 uplinkTxDirectCurrentMoreCarrierList_r17; /**< ASN.1 uplinkTxDirectCurrentMoreCarrierList-r17；SEQUENCE OF CC_Group_r17，SIZE (1..16)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1800_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief NeedForGapNCSG_InfoEUTRA_r17
 * @note ASN.1：NeedForGapNCSG-InfoEUTRA-r17；源文件第 8695 行。
 * @note NeedForGapNCSG-InfoEUTRA-r17 ::= SEQUENCE { needForNCSG-EUTRA-r17 }
 */
struct NeedForGapNCSG_InfoEUTRA_r17 {
    NeedForNCSG_EUTRA_r17* needForNCSG_EUTRA_r17_items; /**< ASN.1 needForNCSG-EUTRA-r17；SEQUENCE OF NeedForNCSG_EUTRA_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t needForNCSG_EUTRA_r17_count; /**< needForNCSG-EUTRA-r17 元素个数。 */
};


/**
 * @brief NeedForNCSG_IntraFreqList_r17
 * @note ASN.1：NeedForNCSG-IntraFreqList-r17；源文件第 8712 行。
 * @note NeedForNCSG-IntraFreqList-r17 ::= SEQUENCE OF (size 1..32) OF NeedForNCSG-IntraFreq-r17
 */
struct NeedForNCSG_IntraFreqList_r17 {
    NeedForNCSG_IntraFreq_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NeedForNCSG_BandListNR_r17
 * @note ASN.1：NeedForNCSG-BandListNR-r17；源文件第 8714 行。
 * @note NeedForNCSG-BandListNR-r17 ::= SEQUENCE OF (size 1..1024) OF NeedForNCSG-NR-r17
 */
struct NeedForNCSG_BandListNR_r17 {
    NeedForNCSG_NR_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NeedForGapNCSG_InfoNR_r17
 * @note ASN.1：NeedForGapNCSG-InfoNR-r17；源文件第 8707 行。
 * @note NeedForGapNCSG-InfoNR-r17 ::= SEQUENCE { intraFreq-needForNCSG-r17, interFreq-needForNCSG-r17 }
 */
struct NeedForGapNCSG_InfoNR_r17 {
    NeedForNCSG_IntraFreqList_r17 intraFreq_needForNCSG_r17; /**< ASN.1 intraFreq-needForNCSG-r17；SEQUENCE OF NeedForNCSG_IntraFreq_r17，SIZE (1..32)。 */
    NeedForNCSG_BandListNR_r17 interFreq_needForNCSG_r17; /**< ASN.1 interFreq-needForNCSG-r17；SEQUENCE OF NeedForNCSG_NR_r17，SIZE (1..1024)。 */
};


/**
 * @brief RRCReconfigurationComplete_v1700_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1700-IEs；源文件第 1109 行。
 * @note RRCReconfigurationComplete-v1700-IEs ::= SEQUENCE { needForGapNCSG-InfoNR-r17, needForGapNCSG-InfoEUTRA-r17, selectedC...
 */
struct RRCReconfigurationComplete_v1700_IEs {
    bool has_needForGapNCSG_InfoNR_r17; /**< needForGapNCSG-InfoNR-r17 是否存在。 */
    NeedForGapNCSG_InfoNR_r17 needForGapNCSG_InfoNR_r17; /**< ASN.1 needForGapNCSG-InfoNR-r17；结构体；OPTIONAL。 */
    bool has_needForGapNCSG_InfoEUTRA_r17; /**< needForGapNCSG-InfoEUTRA-r17 是否存在。 */
    NeedForGapNCSG_InfoEUTRA_r17 needForGapNCSG_InfoEUTRA_r17; /**< ASN.1 needForGapNCSG-InfoEUTRA-r17；结构体；OPTIONAL。 */
    bool has_selectedCondRRCReconfig_r17; /**< selectedCondRRCReconfig-r17 是否存在。 */
    CondReconfigId_r16 selectedCondRRCReconfig_r17; /**< ASN.1 selectedCondRRCReconfig-r17；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1720_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkTxDirectCurrentTwoCarrierList_r16
 * @note ASN.1：UplinkTxDirectCurrentTwoCarrierList-r16；源文件第 14062 行。
 * @note UplinkTxDirectCurrentTwoCarrierList-r16 ::= SEQUENCE OF (size 1..64) OF UplinkTxDirectCurrentTwoCarrier-r16
 */
struct UplinkTxDirectCurrentTwoCarrierList_r16 {
    UplinkTxDirectCurrentTwoCarrier_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RRCReconfigurationComplete_v1640_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1640-IEs；源文件第 1104 行。
 * @note RRCReconfigurationComplete-v1640-IEs ::= SEQUENCE { uplinkTxDirectCurrentTwoCarrierList-r16, nonCriticalExtension }
 */
struct RRCReconfigurationComplete_v1640_IEs {
    bool has_uplinkTxDirectCurrentTwoCarrierList_r16; /**< uplinkTxDirectCurrentTwoCarrierList-r16 是否存在。 */
    UplinkTxDirectCurrentTwoCarrierList_r16 uplinkTxDirectCurrentTwoCarrierList_r16; /**< ASN.1 uplinkTxDirectCurrentTwoCarrierList-r16；SEQUENCE OF UplinkTxDirectCurrentTwoCarrier_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1700_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief NeedForGapsIntraFreqList_r16
 * @note ASN.1：NeedForGapsIntraFreqList-r16；源文件第 8664 行。
 * @note NeedForGapsIntraFreqList-r16 ::= SEQUENCE OF (size 1..32) OF NeedForGapsIntraFreq-r16
 */
struct NeedForGapsIntraFreqList_r16 {
    NeedForGapsIntraFreq_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NeedForGapsBandListNR_r16
 * @note ASN.1：NeedForGapsBandListNR-r16；源文件第 8666 行。
 * @note NeedForGapsBandListNR-r16 ::= SEQUENCE OF (size 1..1024) OF NeedForGapsNR-r16
 */
struct NeedForGapsBandListNR_r16 {
    NeedForGapsNR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief NeedForGapsInfoNR_r16
 * @note ASN.1：NeedForGapsInfoNR-r16；源文件第 8659 行。
 * @note NeedForGapsInfoNR-r16 ::= SEQUENCE { intraFreq-needForGap-r16, interFreq-needForGap-r16 }
 */
struct NeedForGapsInfoNR_r16 {
    NeedForGapsIntraFreqList_r16 intraFreq_needForGap_r16; /**< ASN.1 intraFreq-needForGap-r16；SEQUENCE OF NeedForGapsIntraFreq_r16，SIZE (1..32)。 */
    NeedForGapsBandListNR_r16 interFreq_needForGap_r16; /**< ASN.1 interFreq-needForGap-r16；SEQUENCE OF NeedForGapsNR_r16，SIZE (1..1024)。 */
};


/**
 * @brief RRCReconfigurationComplete_v1610_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1610-IEs；源文件第 1098 行。
 * @note RRCReconfigurationComplete-v1610-IEs ::= SEQUENCE { ue-MeasurementsAvailable-r16, needForGapsInfoNR-r16, nonCriticalEx...
 */
struct RRCReconfigurationComplete_v1610_IEs {
    bool has_ue_MeasurementsAvailable_r16; /**< ue-MeasurementsAvailable-r16 是否存在。 */
    UE_MeasurementsAvailable_r16 ue_MeasurementsAvailable_r16; /**< ASN.1 ue-MeasurementsAvailable-r16；结构体；OPTIONAL。 */
    bool has_needForGapsInfoNR_r16; /**< needForGapsInfoNR-r16 是否存在。 */
    NeedForGapsInfoNR_r16 needForGapsInfoNR_r16; /**< ASN.1 needForGapsInfoNR-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1640_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReconfigurationComplete_v1560_IEs_Scg_Response
 * @note ASN.1：scg-Response；源文件第 1091 行。
 * @note CHOICE { nr-SCG-Response, eutra-SCG-Response }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag {
    RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_nr_SCG_Response = 0, /**< ASN.1 nr-SCG-Response */
    RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag_eutra_SCG_Response = 1, /**< ASN.1 eutra-SCG-Response */
} RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag;

struct RRCReconfigurationComplete_v1560_IEs_Scg_Response {
    RRCReconfigurationComplete_v1560_IEs_Scg_Response_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReconfigurationComplete* nr_SCG_Response; /**< ASN.1 nr-SCG-Response */
        OctetString eutra_SCG_Response; /**< ASN.1 eutra-SCG-Response */
    } u;
};


/**
 * @brief RRCReconfigurationComplete_v1560_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1560-IEs；源文件第 1090 行。
 * @note RRCReconfigurationComplete-v1560-IEs ::= SEQUENCE { scg-Response, nonCriticalExtension }
 */
struct RRCReconfigurationComplete_v1560_IEs {
    bool has_scg_Response; /**< scg-Response 是否存在。 */
    RRCReconfigurationComplete_v1560_IEs_Scg_Response scg_Response; /**< ASN.1 scg-Response；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief UplinkTxDirectCurrentList
 * @note ASN.1：UplinkTxDirectCurrentList；源文件第 14013 行。
 * @note UplinkTxDirectCurrentList ::= SEQUENCE OF (size 1..32) OF UplinkTxDirectCurrentCell
 */
struct UplinkTxDirectCurrentList {
    UplinkTxDirectCurrentCell* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RRCReconfigurationComplete_v1530_IEs
 * @note ASN.1：RRCReconfigurationComplete-v1530-IEs；源文件第 1085 行。
 * @note RRCReconfigurationComplete-v1530-IEs ::= SEQUENCE { uplinkTxDirectCurrentList, nonCriticalExtension }
 */
struct RRCReconfigurationComplete_v1530_IEs {
    bool has_uplinkTxDirectCurrentList; /**< uplinkTxDirectCurrentList 是否存在。 */
    UplinkTxDirectCurrentList uplinkTxDirectCurrentList; /**< ASN.1 uplinkTxDirectCurrentList；SEQUENCE OF UplinkTxDirectCurrentCell，SIZE (1..32)；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1560_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReconfigurationComplete_IEs
 * @note ASN.1：RRCReconfigurationComplete-IEs；源文件第 1080 行。
 * @note RRCReconfigurationComplete-IEs ::= SEQUENCE { lateNonCriticalExtension, nonCriticalExtension }
 */
struct RRCReconfigurationComplete_IEs {
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReconfigurationComplete_v1530_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReconfigurationComplete_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1076 行。
 * @note SEQUENCE { }
 */
struct RRCReconfigurationComplete_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReconfigurationComplete_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1074 行。
 * @note CHOICE { rrcReconfigurationComplete, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCReconfigurationComplete_CriticalExtensions_Tag {
    RRCReconfigurationComplete_CriticalExtensions_Tag_rrcReconfigurationComplete = 0, /**< ASN.1 rrcReconfigurationComplete */
    RRCReconfigurationComplete_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCReconfigurationComplete_CriticalExtensions_Tag;

struct RRCReconfigurationComplete_CriticalExtensions {
    RRCReconfigurationComplete_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReconfigurationComplete_IEs rrcReconfigurationComplete; /**< ASN.1 rrcReconfigurationComplete */
        RRCReconfigurationComplete_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCReconfigurationComplete
 * @note ASN.1：RRCReconfigurationComplete；源文件第 1072 行。
 * @note 实际消息：ChannelType_UL_DCCH；MessageKind_RRCReconfigurationComplete（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCReconfigurationComplete ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCReconfigurationComplete {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCReconfigurationComplete_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief RRCReject_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1143 行。
 * @note SEQUENCE { }
 */
struct RRCReject_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReject_IEs
 * @note ASN.1：RRCReject-IEs；源文件第 1140 行。
 * @note RRCReject-IEs ::= SEQUENCE { waitTime, lateNonCriticalExtension, nonCriticalExtension }
 */
struct RRCReject_IEs {
    bool has_waitTime; /**< waitTime 是否存在。 */
    RejectWaitTime waitTime; /**< ASN.1 waitTime；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCReject_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCReject_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1136 行。
 * @note SEQUENCE { }
 */
struct RRCReject_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCReject_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1134 行。
 * @note CHOICE { rrcReject, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCReject_CriticalExtensions_Tag {
    RRCReject_CriticalExtensions_Tag_rrcReject = 0, /**< ASN.1 rrcReject */
    RRCReject_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCReject_CriticalExtensions_Tag;

struct RRCReject_CriticalExtensions {
    RRCReject_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCReject_IEs rrcReject; /**< ASN.1 rrcReject */
        RRCReject_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCReject
 * @note ASN.1：RRCReject；源文件第 1133 行。
 * @note 实际消息：ChannelType_DL_CCCH；MessageKind_RRCReject（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCReject ::= SEQUENCE { criticalExtensions }
 */
struct RRCReject {
    RRCReject_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief RRCRelease_v1710_IEs_NonCriticalExtension
 * @note ASN.1：nonCriticalExtension；源文件第 1187 行。
 * @note SEQUENCE { }
 */
struct RRCRelease_v1710_IEs_NonCriticalExtension {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCRelease_v1710_IEs
 * @note ASN.1：RRCRelease-v1710-IEs；源文件第 1185 行。
 * @note RRCRelease-v1710-IEs ::= SEQUENCE { noLastCellUpdate-r17, nonCriticalExtension }
 */
struct RRCRelease_v1710_IEs {
    bool has_noLastCellUpdate_r17; /**< noLastCellUpdate-r17 是否存在。 */
    RRCRelease_v1710_IEs_NoLastCellUpdate_r17 noLastCellUpdate_r17; /**< ASN.1 noLastCellUpdate-r17；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCRelease_v1710_IEs_NonCriticalExtension nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCRelease_v1650_IEs
 * @note ASN.1：RRCRelease-v1650-IEs；源文件第 1180 行。
 * @note RRCRelease-v1650-IEs ::= SEQUENCE { mpsPriorityIndication-r16, nonCriticalExtension }
 */
struct RRCRelease_v1650_IEs {
    bool has_mpsPriorityIndication_r16; /**< mpsPriorityIndication-r16 是否存在。 */
    RRCRelease_v1650_IEs_MpsPriorityIndication_r16 mpsPriorityIndication_r16; /**< ASN.1 mpsPriorityIndication-r16；枚举；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCRelease_v1710_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief MeasIdleConfigDedicated_r16_ExtGroup1
 * @note ASN.1：MeasIdleConfigDedicated_r16_ExtGroup1；源文件第 7526 行。
 */
struct MeasIdleConfigDedicated_r16_ExtGroup1 {
    bool has_measReselectionCarrierListNR_r18; /**< measReselectionCarrierListNR-r18 是否存在。 */
    MeasReselectionCarrierNR_r18* measReselectionCarrierListNR_r18_items; /**< ASN.1 measReselectionCarrierListNR-r18；SEQUENCE OF MeasReselectionCarrierNR_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measReselectionCarrierListNR_r18_count; /**< measReselectionCarrierListNR-r18 元素个数。 */
    bool has_measIdleValidityDuration_r18; /**< measIdleValidityDuration-r18 是否存在。 */
    MeasurementValidityDuration_r18 measIdleValidityDuration_r18; /**< ASN.1 measIdleValidityDuration-r18；枚举；OPTIONAL。 */
    bool has_measReselectionValidityDuration_r18; /**< measReselectionValidityDuration-r18 是否存在。 */
    MeasurementValidityDuration_r18 measReselectionValidityDuration_r18; /**< ASN.1 measReselectionValidityDuration-r18；枚举；OPTIONAL。 */
};


/**
 * @brief ValidityAreaList_r16
 * @note ASN.1：ValidityAreaList-r16；源文件第 7533 行。
 * @note ValidityAreaList-r16 ::= SEQUENCE OF (size 1..8) OF ValidityArea-r16
 */
struct ValidityAreaList_r16 {
    ValidityArea_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MeasIdleConfigDedicated_r16
 * @note ASN.1：MeasIdleConfigDedicated-r16；源文件第 7520 行。
 * @note MeasIdleConfigDedicated-r16 ::= SEQUENCE { measIdleCarrierListNR-r16, measIdleCarrierListEUTRA-r16, measIdleD...
 */
struct MeasIdleConfigDedicated_r16 {
    bool has_measIdleCarrierListNR_r16; /**< measIdleCarrierListNR-r16 是否存在。 */
    MeasIdleCarrierNR_r16* measIdleCarrierListNR_r16_items; /**< ASN.1 measIdleCarrierListNR-r16；SEQUENCE OF MeasIdleCarrierNR_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measIdleCarrierListNR_r16_count; /**< measIdleCarrierListNR-r16 元素个数。 */
    bool has_measIdleCarrierListEUTRA_r16; /**< measIdleCarrierListEUTRA-r16 是否存在。 */
    MeasIdleCarrierEUTRA_r16* measIdleCarrierListEUTRA_r16_items; /**< ASN.1 measIdleCarrierListEUTRA-r16；SEQUENCE OF MeasIdleCarrierEUTRA_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t measIdleCarrierListEUTRA_r16_count; /**< measIdleCarrierListEUTRA-r16 元素个数。 */
    MeasIdleConfigDedicated_r16_MeasIdleDuration_r16 measIdleDuration_r16; /**< ASN.1 measIdleDuration-r16；枚举。 */
    bool has_validityAreaList_r16; /**< validityAreaList-r16 是否存在。 */
    ValidityAreaList_r16 validityAreaList_r16; /**< ASN.1 validityAreaList-r16；SEQUENCE OF ValidityArea_r16，SIZE (1..8)；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MeasIdleConfigDedicated_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_MeasIdleConfigDedicated_r16
 * @note ASN.1：SetupRelease<MeasIdleConfigDedicated-r16>；源文件第 1176 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MeasIdleConfigDedicated_r16_Tag {
    SetupRelease_MeasIdleConfigDedicated_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MeasIdleConfigDedicated_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MeasIdleConfigDedicated_r16_Tag;

struct SetupRelease_MeasIdleConfigDedicated_r16 {
    SetupRelease_MeasIdleConfigDedicated_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MeasIdleConfigDedicated_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RRCRelease_v1610_IEs
 * @note ASN.1：RRCRelease-v1610-IEs；源文件第 1174 行。
 * @note RRCRelease-v1610-IEs ::= SEQUENCE { voiceFallbackIndication-r16, measIdleConfig-r16, nonCriticalExtens...
 */
struct RRCRelease_v1610_IEs {
    bool has_voiceFallbackIndication_r16; /**< voiceFallbackIndication-r16 是否存在。 */
    RRCRelease_v1610_IEs_VoiceFallbackIndication_r16 voiceFallbackIndication_r16; /**< ASN.1 voiceFallbackIndication-r16；枚举；OPTIONAL。 */
    bool has_measIdleConfig_r16; /**< measIdleConfig-r16 是否存在。 */
    SetupRelease_MeasIdleConfigDedicated_r16 measIdleConfig_r16; /**< ASN.1 measIdleConfig-r16；结构体；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCRelease_v1650_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCRelease_v1540_IEs
 * @note ASN.1：RRCRelease-v1540-IEs；源文件第 1169 行。
 * @note RRCRelease-v1540-IEs ::= SEQUENCE { waitTime, nonCriticalExtension }
 */
struct RRCRelease_v1540_IEs {
    bool has_waitTime; /**< waitTime 是否存在。 */
    RejectWaitTime waitTime; /**< ASN.1 waitTime；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCRelease_v1610_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RedirectedCarrierInfo_EUTRA
 * @note ASN.1：RedirectedCarrierInfo-EUTRA；源文件第 1196 行。
 * @note RedirectedCarrierInfo-EUTRA ::= SEQUENCE { eutraFrequency, cnType }
 */
struct RedirectedCarrierInfo_EUTRA {
    ARFCN_ValueEUTRA eutraFrequency; /**< ASN.1 eutraFrequency；INTEGER (0..262143)，位宽 18 bit。 */
    bool has_cnType; /**< cnType 是否存在。 */
    RedirectedCarrierInfo_EUTRA_CnType cnType; /**< ASN.1 cnType；枚举；OPTIONAL。 */
};


/**
 * @brief CarrierInfoNR
 * @note ASN.1：CarrierInfoNR；源文件第 1201 行。
 * @note CarrierInfoNR ::= SEQUENCE { carrierFreq, ssbSubcarrierSpacing, smtc }
 */
struct CarrierInfoNR {
    ARFCN_ValueNR carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..3279165)，位宽 22 bit。 */
    SubcarrierSpacing ssbSubcarrierSpacing; /**< ASN.1 ssbSubcarrierSpacing；枚举。 */
    bool has_smtc; /**< smtc 是否存在。 */
    SSB_MTC smtc; /**< ASN.1 smtc；结构体；OPTIONAL。 */
};


/**
 * @brief RedirectedCarrierInfo
 * @note ASN.1：RedirectedCarrierInfo；源文件第 1190 行。
 * @note RedirectedCarrierInfo ::= CHOICE { nr, eutra }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RedirectedCarrierInfo_Tag {
    RedirectedCarrierInfo_Tag_nr = 0, /**< ASN.1 nr */
    RedirectedCarrierInfo_Tag_eutra = 1, /**< ASN.1 eutra */
} RedirectedCarrierInfo_Tag;

struct RedirectedCarrierInfo {
    RedirectedCarrierInfo_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CarrierInfoNR nr; /**< ASN.1 nr */
        RedirectedCarrierInfo_EUTRA eutra; /**< ASN.1 eutra */
    } u;
};


/**
 * @brief SetupRelease_SDT_CG_Config_r17
 * @note ASN.1：SetupRelease<SDT-CG-Config-r17>；源文件第 1293 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SDT_CG_Config_r17_Tag {
    SetupRelease_SDT_CG_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SDT_CG_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SDT_CG_Config_r17_Tag;

struct SetupRelease_SDT_CG_Config_r17 {
    SetupRelease_SDT_CG_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SDT_MAC_PHY_CG_Config_r17* setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SDT_Config_r17
 * @note ASN.1：SDT-Config-r17；源文件第 1290 行。
 * @note SDT-Config-r17 ::= SEQUENCE { sdt-DRB-List-r17, sdt-SRB2-Indication-r17, sdt-MAC-PHY-CG-Config-r...
 */
struct SDT_Config_r17 {
    bool has_sdt_DRB_List_r17; /**< sdt-DRB-List-r17 是否存在。 */
    DRB_Identity* sdt_DRB_List_r17_items; /**< ASN.1 sdt-DRB-List-r17；SEQUENCE OF DRB_Identity，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sdt_DRB_List_r17_count; /**< sdt-DRB-List-r17 元素个数。 */
    bool has_sdt_SRB2_Indication_r17; /**< sdt-SRB2-Indication-r17 是否存在。 */
    SDT_Config_r17_Sdt_SRB2_Indication_r17 sdt_SRB2_Indication_r17; /**< ASN.1 sdt-SRB2-Indication-r17；枚举；OPTIONAL。 */
    bool has_sdt_MAC_PHY_CG_Config_r17; /**< sdt-MAC-PHY-CG-Config-r17 是否存在。 */
    SetupRelease_SDT_CG_Config_r17 sdt_MAC_PHY_CG_Config_r17; /**< ASN.1 sdt-MAC-PHY-CG-Config-r17；结构体；OPTIONAL。 */
    bool has_sdt_DRB_ContinueROHC_r17; /**< sdt-DRB-ContinueROHC-r17 是否存在。 */
    SDT_Config_r17_Sdt_DRB_ContinueROHC_r17 sdt_DRB_ContinueROHC_r17; /**< ASN.1 sdt-DRB-ContinueROHC-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SDT_Config_r17
 * @note ASN.1：SetupRelease<SDT-Config-r17>；源文件第 1218 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SDT_Config_r17_Tag {
    SetupRelease_SDT_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SDT_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SDT_Config_r17_Tag;

struct SetupRelease_SDT_Config_r17 {
    SetupRelease_SDT_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SDT_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_SRS_PosRRC_Inactive_r17
 * @note ASN.1：SetupRelease<SRS-PosRRC-Inactive-r17>；源文件第 1219 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosRRC_Inactive_r17_Tag {
    SetupRelease_SRS_PosRRC_Inactive_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosRRC_Inactive_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosRRC_Inactive_r17_Tag;

struct SetupRelease_SRS_PosRRC_Inactive_r17 {
    SetupRelease_SRS_PosRRC_Inactive_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosRRC_InactiveConfig_r17* setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SuspendConfig_ExtGroup1
 * @note ASN.1：SuspendConfig_ExtGroup1；源文件第 1216 行。
 */
struct SuspendConfig_ExtGroup1 {
    bool has_sl_UEIdentityRemote_r17; /**< sl-UEIdentityRemote-r17 是否存在。 */
    RNTI_Value sl_UEIdentityRemote_r17; /**< ASN.1 sl-UEIdentityRemote-r17；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_sdt_Config_r17; /**< sdt-Config-r17 是否存在。 */
    SetupRelease_SDT_Config_r17 sdt_Config_r17; /**< ASN.1 sdt-Config-r17；结构体；OPTIONAL。 */
    bool has_srs_PosRRC_Inactive_r17; /**< srs-PosRRC-Inactive-r17 是否存在。 */
    SetupRelease_SRS_PosRRC_Inactive_r17 srs_PosRRC_Inactive_r17; /**< ASN.1 srs-PosRRC-Inactive-r17；结构体；OPTIONAL。 */
    bool has_ran_ExtendedPagingCycle_r17; /**< ran-ExtendedPagingCycle-r17 是否存在。 */
    ExtendedPagingCycle_r17 ran_ExtendedPagingCycle_r17; /**< ASN.1 ran-ExtendedPagingCycle-r17；枚举；OPTIONAL。 */
};


/**
 * @brief NonCellDefiningSSB_r17
 * @note ASN.1：NonCellDefiningSSB-r17；源文件第 8756 行。
 * @note NonCellDefiningSSB-r17 ::= SEQUENCE { absoluteFrequencySSB-r17, ssb-Periodicity-r17, ssb-TimeOffset-r17 }
 */
struct NonCellDefiningSSB_r17 {
    ARFCN_ValueNR absoluteFrequencySSB_r17; /**< ASN.1 absoluteFrequencySSB-r17；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_ssb_Periodicity_r17; /**< ssb-Periodicity-r17 是否存在。 */
    NonCellDefiningSSB_r17_Ssb_Periodicity_r17 ssb_Periodicity_r17; /**< ASN.1 ssb-Periodicity-r17；枚举；OPTIONAL。 */
    bool has_ssb_TimeOffset_r17; /**< ssb-TimeOffset-r17 是否存在。 */
    NonCellDefiningSSB_r17_Ssb_TimeOffset_r17 ssb_TimeOffset_r17; /**< ASN.1 ssb-TimeOffset-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_NonCellDefiningSSB_r17
 * @note ASN.1：SetupRelease<NonCellDefiningSSB-r17>；源文件第 1223 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NonCellDefiningSSB_r17_Tag {
    SetupRelease_NonCellDefiningSSB_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NonCellDefiningSSB_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NonCellDefiningSSB_r17_Tag;

struct SetupRelease_NonCellDefiningSSB_r17 {
    SetupRelease_NonCellDefiningSSB_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NonCellDefiningSSB_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SuspendConfig_ExtGroup2
 * @note ASN.1：SuspendConfig_ExtGroup2；源文件第 1222 行。
 */
struct SuspendConfig_ExtGroup2 {
    bool has_ncd_SSB_RedCapInitialBWP_SDT_r17; /**< ncd-SSB-RedCapInitialBWP-SDT-r17 是否存在。 */
    SetupRelease_NonCellDefiningSSB_r17 ncd_SSB_RedCapInitialBWP_SDT_r17; /**< ASN.1 ncd-SSB-RedCapInitialBWP-SDT-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ExtendedPagingCycleConfig_r18
 * @note ASN.1：ExtendedPagingCycleConfig-r18；源文件第 1401 行。
 * @note ExtendedPagingCycleConfig-r18 ::= SEQUENCE { extendedPagingCycle-r18, pagingPTWLength-r18 }
 */
struct ExtendedPagingCycleConfig_r18 {
    ExtendedPagingCycleConfig_r18_ExtendedPagingCycle_r18 extendedPagingCycle_r18; /**< ASN.1 extendedPagingCycle-r18；枚举。 */
    ExtendedPagingCycleConfig_r18_PagingPTWLength_r18 pagingPTWLength_r18; /**< ASN.1 pagingPTWLength-r18；枚举。 */
};


/**
 * @brief SRS_PosRRC_AggBW_InactiveConfigList_r18
 * @note ASN.1：SRS-PosRRC-AggBW-InactiveConfigList-r18；源文件第 1397 行。
 * @note SRS-PosRRC-AggBW-InactiveConfigList-r18 ::= SEQUENCE OF (size 1..2) OF SRS-PosResourceSetLinkedForAggBW-r18
 */
struct SRS_PosRRC_AggBW_InactiveConfigList_r18 {
    SRS_PosResourceSetLinkedForAggBW_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18
 * @note ASN.1：SetupRelease<SRS-PosRRC-AggBW-InactiveConfigList-r18>；源文件第 1374 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag {
    SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag;

struct SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18 {
    SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosRRC_AggBW_InactiveConfigList_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_PosConfig_r17
 * @note ASN.1：SRS-PosConfig-r17；源文件第 1366 行。
 * @note SRS-PosConfig-r17 ::= SEQUENCE { srs-PosResourceSetToReleaseList-r17, srs-PosResourceSetToAddModLis...
 */
struct SRS_PosConfig_r17 {
    bool has_srs_PosResourceSetToReleaseList_r17; /**< srs-PosResourceSetToReleaseList-r17 是否存在。 */
    SRS_PosResourceSetId_r16* srs_PosResourceSetToReleaseList_r17_items; /**< ASN.1 srs-PosResourceSetToReleaseList-r17；SEQUENCE OF SRS_PosResourceSetId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceSetToReleaseList_r17_count; /**< srs-PosResourceSetToReleaseList-r17 元素个数。 */
    bool has_srs_PosResourceSetToAddModList_r17; /**< srs-PosResourceSetToAddModList-r17 是否存在。 */
    SRS_PosResourceSet_r16* srs_PosResourceSetToAddModList_r17_items; /**< ASN.1 srs-PosResourceSetToAddModList-r17；SEQUENCE OF SRS_PosResourceSet_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceSetToAddModList_r17_count; /**< srs-PosResourceSetToAddModList-r17 元素个数。 */
    bool has_srs_PosResourceToReleaseList_r17; /**< srs-PosResourceToReleaseList-r17 是否存在。 */
    SRS_PosResourceId_r16* srs_PosResourceToReleaseList_r17_items; /**< ASN.1 srs-PosResourceToReleaseList-r17；SEQUENCE OF SRS_PosResourceId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceToReleaseList_r17_count; /**< srs-PosResourceToReleaseList-r17 元素个数。 */
    bool has_srs_PosResourceToAddModList_r17; /**< srs-PosResourceToAddModList-r17 是否存在。 */
    SRS_PosResource_r16* srs_PosResourceToAddModList_r17_items; /**< ASN.1 srs-PosResourceToAddModList-r17；SEQUENCE OF SRS_PosResource_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_PosResourceToAddModList_r17_count; /**< srs-PosResourceToAddModList-r17 元素个数。 */
};


/**
 * @brief BWP
 * @note ASN.1：BWP；源文件第 4507 行。
 * @note BWP ::= SEQUENCE { locationAndBandwidth, subcarrierSpacing, cyclicPrefix }
 */
struct BWP {
    int64_t locationAndBandwidth; /**< ASN.1 locationAndBandwidth；INTEGER (0..37949)，位宽 16 bit。 */
    SubcarrierSpacing subcarrierSpacing; /**< ASN.1 subcarrierSpacing；枚举。 */
    bool has_cyclicPrefix; /**< cyclicPrefix 是否存在。 */
    BWP_CyclicPrefix cyclicPrefix; /**< ASN.1 cyclicPrefix；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_PeriodicityAndOffset_r16
 * @note ASN.1：SRS-PeriodicityAndOffset-r16；源文件第 13406 行。
 * @note SRS-PeriodicityAndOffset-r16 ::= CHOICE { sl1, sl2, sl4, sl5, sl8, sl10, sl16, sl20, sl32, sl40, sl64, sl80, s...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PeriodicityAndOffset_r16_Tag {
    SRS_PeriodicityAndOffset_r16_Tag_sl1 = 0, /**< ASN.1 sl1 */
    SRS_PeriodicityAndOffset_r16_Tag_sl2 = 1, /**< ASN.1 sl2 */
    SRS_PeriodicityAndOffset_r16_Tag_sl4 = 2, /**< ASN.1 sl4 */
    SRS_PeriodicityAndOffset_r16_Tag_sl5 = 3, /**< ASN.1 sl5 */
    SRS_PeriodicityAndOffset_r16_Tag_sl8 = 4, /**< ASN.1 sl8 */
    SRS_PeriodicityAndOffset_r16_Tag_sl10 = 5, /**< ASN.1 sl10 */
    SRS_PeriodicityAndOffset_r16_Tag_sl16 = 6, /**< ASN.1 sl16 */
    SRS_PeriodicityAndOffset_r16_Tag_sl20 = 7, /**< ASN.1 sl20 */
    SRS_PeriodicityAndOffset_r16_Tag_sl32 = 8, /**< ASN.1 sl32 */
    SRS_PeriodicityAndOffset_r16_Tag_sl40 = 9, /**< ASN.1 sl40 */
    SRS_PeriodicityAndOffset_r16_Tag_sl64 = 10, /**< ASN.1 sl64 */
    SRS_PeriodicityAndOffset_r16_Tag_sl80 = 11, /**< ASN.1 sl80 */
    SRS_PeriodicityAndOffset_r16_Tag_sl160 = 12, /**< ASN.1 sl160 */
    SRS_PeriodicityAndOffset_r16_Tag_sl320 = 13, /**< ASN.1 sl320 */
    SRS_PeriodicityAndOffset_r16_Tag_sl640 = 14, /**< ASN.1 sl640 */
    SRS_PeriodicityAndOffset_r16_Tag_sl1280 = 15, /**< ASN.1 sl1280 */
    SRS_PeriodicityAndOffset_r16_Tag_sl2560 = 16, /**< ASN.1 sl2560 */
    SRS_PeriodicityAndOffset_r16_Tag_sl5120 = 17, /**< ASN.1 sl5120 */
    SRS_PeriodicityAndOffset_r16_Tag_sl10240 = 18, /**< ASN.1 sl10240 */
    SRS_PeriodicityAndOffset_r16_Tag_sl40960 = 19, /**< ASN.1 sl40960 */
    SRS_PeriodicityAndOffset_r16_Tag_sl81920 = 20, /**< ASN.1 sl81920 */
} SRS_PeriodicityAndOffset_r16_Tag;

struct SRS_PeriodicityAndOffset_r16 {
    SRS_PeriodicityAndOffset_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
        int64_t sl5120; /**< ASN.1 sl5120 */
        int64_t sl10240; /**< ASN.1 sl10240 */
        int64_t sl40960; /**< ASN.1 sl40960 */
        int64_t sl81920; /**< ASN.1 sl81920 */
    } u;
};


/**
 * @brief SRS_PeriodicityAndOffsetExt_r16
 * @note ASN.1：SRS-PeriodicityAndOffsetExt-r16；源文件第 13431 行。
 * @note SRS-PeriodicityAndOffsetExt-r16 ::= CHOICE { sl128, sl256, sl512, sl20480 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PeriodicityAndOffsetExt_r16_Tag {
    SRS_PeriodicityAndOffsetExt_r16_Tag_sl128 = 0, /**< ASN.1 sl128 */
    SRS_PeriodicityAndOffsetExt_r16_Tag_sl256 = 1, /**< ASN.1 sl256 */
    SRS_PeriodicityAndOffsetExt_r16_Tag_sl512 = 2, /**< ASN.1 sl512 */
    SRS_PeriodicityAndOffsetExt_r16_Tag_sl20480 = 3, /**< ASN.1 sl20480 */
} SRS_PeriodicityAndOffsetExt_r16_Tag;

struct SRS_PeriodicityAndOffsetExt_r16 {
    SRS_PeriodicityAndOffsetExt_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl128; /**< ASN.1 sl128 */
        int64_t sl256; /**< ASN.1 sl256 */
        int64_t sl512; /**< ASN.1 sl512 */
        int64_t sl20480; /**< ASN.1 sl20480 */
    } u;
};


/**
 * @brief SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18
 * @note ASN.1：windowPeriodicityAndOffset-r18；源文件第 13493 行。
 * @note CHOICE { periodicityAndOffset-r18, periodicityAndOffset-Ext-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag {
    SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_r18 = 0, /**< ASN.1 periodicityAndOffset-r18 */
    SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag_periodicityAndOffset_Ext_r18 = 1, /**< ASN.1 periodicityAndOffset-Ext-r18 */
} SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag;

struct SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18 {
    SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_PeriodicityAndOffset_r16 periodicityAndOffset_r18; /**< ASN.1 periodicityAndOffset-r18 */
        SRS_PeriodicityAndOffsetExt_r16 periodicityAndOffset_Ext_r18; /**< ASN.1 periodicityAndOffset-Ext-r18 */
    } u;
};


/**
 * @brief SRS_PosUplinkTransmissionWindowConfig_r18
 * @note ASN.1：SRS-PosUplinkTransmissionWindowConfig-r18；源文件第 13491 行。
 * @note SRS-PosUplinkTransmissionWindowConfig-r18 ::= SEQUENCE { startSFN-r18, windowPeriodicityAndOffset-r18, duration-r18 }
 */
struct SRS_PosUplinkTransmissionWindowConfig_r18 {
    int64_t startSFN_r18; /**< ASN.1 startSFN-r18；INTEGER (0..1023)，位宽 10 bit。 */
    SRS_PosUplinkTransmissionWindowConfig_r18_WindowPeriodicityAndOffset_r18 windowPeriodicityAndOffset_r18; /**< ASN.1 windowPeriodicityAndOffset-r18；结构体。 */
    SRS_PosUplinkTransmissionWindowConfig_r18_Duration_r18 duration_r18; /**< ASN.1 duration-r18；枚举。 */
};


/**
 * @brief SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18
 * @note ASN.1：SetupRelease<SRS-PosUplinkTransmissionWindowConfig-r18>；源文件第 13488 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag {
    SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag;

struct SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18 {
    SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosUplinkTransmissionWindowConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_PosTx_Hopping_r18
 * @note ASN.1：SRS-PosTx-Hopping-r18；源文件第 13485 行。
 * @note SRS-PosTx-Hopping-r18 ::= SEQUENCE { srs-PosConfig-r18, bwp-r18, srs-PosUplinkTransmissionWindowConfig-...
 */
struct SRS_PosTx_Hopping_r18 {
    SRS_PosConfig_r17 srs_PosConfig_r18; /**< ASN.1 srs-PosConfig-r18；结构体。 */
    bool has_bwp_r18; /**< bwp-r18 是否存在。 */
    BWP bwp_r18; /**< ASN.1 bwp-r18；结构体；OPTIONAL。 */
    bool has_srs_PosUplinkTransmissionWindowConfig_r18; /**< srs-PosUplinkTransmissionWindowConfig-r18 是否存在。 */
    SetupRelease_SRS_PosUplinkTransmissionWindowConfig_r18 srs_PosUplinkTransmissionWindowConfig_r18; /**< ASN.1 srs-PosUplinkTransmissionWindowConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SRS_PosTx_Hopping_r18
 * @note ASN.1：SetupRelease<SRS-PosTx-Hopping-r18>；源文件第 1375 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosTx_Hopping_r18_Tag {
    SetupRelease_SRS_PosTx_Hopping_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosTx_Hopping_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosTx_Hopping_r18_Tag;

struct SetupRelease_SRS_PosTx_Hopping_r18 {
    SetupRelease_SRS_PosTx_Hopping_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosTx_Hopping_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_PosRRC_Inactive_v1800
 * @note ASN.1：SRS-PosRRC-Inactive-v1800；源文件第 1373 行。
 * @note SRS-PosRRC-Inactive-v1800 ::= SEQUENCE { srs-PosRRC-AggBW-InactiveConfigList-r18, srs-PosTx-Hopping-r18 }
 */
struct SRS_PosRRC_Inactive_v1800 {
    bool has_srs_PosRRC_AggBW_InactiveConfigList_r18; /**< srs-PosRRC-AggBW-InactiveConfigList-r18 是否存在。 */
    SetupRelease_SRS_PosRRC_AggBW_InactiveConfigList_r18 srs_PosRRC_AggBW_InactiveConfigList_r18; /**< ASN.1 srs-PosRRC-AggBW-InactiveConfigList-r18；结构体；OPTIONAL。 */
    bool has_srs_PosTx_Hopping_r18; /**< srs-PosTx-Hopping-r18 是否存在。 */
    SetupRelease_SRS_PosTx_Hopping_r18 srs_PosTx_Hopping_r18; /**< ASN.1 srs-PosTx-Hopping-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SRS_PosRRC_Inactive_v1800
 * @note ASN.1：SetupRelease<SRS-PosRRC-Inactive-v1800>；源文件第 1227 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosRRC_Inactive_v1800_Tag {
    SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosRRC_Inactive_v1800_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosRRC_Inactive_v1800_Tag;

struct SetupRelease_SRS_PosRRC_Inactive_v1800 {
    SetupRelease_SRS_PosRRC_Inactive_v1800_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosRRC_Inactive_v1800 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_PosRRC_InactiveValidityAreaPreConfigList_r18
 * @note ASN.1：SRS-PosRRC-InactiveValidityAreaPreConfigList-r18；源文件第 1379 行。
 * @note SRS-PosRRC-InactiveValidityAreaPreConfigList-r18 ::= SEQUENCE OF (size 1..16) OF SRS-PosRRC-InactiveValidityAreaConfig-r18
 */
struct SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 {
    SRS_PosRRC_InactiveValidityAreaConfig_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18
 * @note ASN.1：SetupRelease<SRS-PosRRC-InactiveValidityAreaPreConfigList-r18>；源文件第 1228 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag {
    SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag;

struct SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 {
    SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief AreaValidityTA_Config_r18
 * @note ASN.1：AreaValidityTA-Config-r18；源文件第 1391 行。
 * @note AreaValidityTA-Config-r18 ::= SEQUENCE { inactivePosSRS-ValidityAreaTAT-r18, inactivePosSRS-ValidityAreaRSR...
 */
struct AreaValidityTA_Config_r18 {
    AreaValidityTA_Config_r18_InactivePosSRS_ValidityAreaTAT_r18 inactivePosSRS_ValidityAreaTAT_r18; /**< ASN.1 inactivePosSRS-ValidityAreaTAT-r18；枚举。 */
    bool has_inactivePosSRS_ValidityAreaRSRP_r18; /**< inactivePosSRS-ValidityAreaRSRP-r18 是否存在。 */
    RSRP_ChangeThreshold_r17 inactivePosSRS_ValidityAreaRSRP_r18; /**< ASN.1 inactivePosSRS-ValidityAreaRSRP-r18；枚举；OPTIONAL。 */
    bool has_autonomousTA_AdjustmentEnabled_r18; /**< autonomousTA-AdjustmentEnabled-r18 是否存在。 */
    AreaValidityTA_Config_r18_AutonomousTA_AdjustmentEnabled_r18 autonomousTA_AdjustmentEnabled_r18; /**< ASN.1 autonomousTA-AdjustmentEnabled-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SRS_PosRRC_InactiveValidityAreaConfig_r18
 * @note ASN.1：SRS-PosRRC-InactiveValidityAreaConfig-r18；源文件第 1381 行。
 * @note SRS-PosRRC-InactiveValidityAreaConfig-r18 ::= SEQUENCE { srs-PosConfigValidityArea-r18, srs-PosConfigNUL-r18, srs-PosConfig...
 */
struct SRS_PosRRC_InactiveValidityAreaConfig_r18 {
    CellIdentity* srs_PosConfigValidityArea_r18_items; /**< ASN.1 srs-PosConfigValidityArea-r18；SEQUENCE OF CellIdentity，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t srs_PosConfigValidityArea_r18_count; /**< srs-PosConfigValidityArea-r18 元素个数。 */
    bool has_srs_PosConfigNUL_r18; /**< srs-PosConfigNUL-r18 是否存在。 */
    SRS_PosConfig_r17 srs_PosConfigNUL_r18; /**< ASN.1 srs-PosConfigNUL-r18；结构体；OPTIONAL。 */
    bool has_srs_PosConfigSUL_r18; /**< srs-PosConfigSUL-r18 是否存在。 */
    SRS_PosConfig_r17 srs_PosConfigSUL_r18; /**< ASN.1 srs-PosConfigSUL-r18；结构体；OPTIONAL。 */
    bool has_bwp_NUL_r18; /**< bwp-NUL-r18 是否存在。 */
    BWP bwp_NUL_r18; /**< ASN.1 bwp-NUL-r18；结构体；OPTIONAL。 */
    bool has_bwp_SUL_r18; /**< bwp-SUL-r18 是否存在。 */
    BWP bwp_SUL_r18; /**< ASN.1 bwp-SUL-r18；结构体；OPTIONAL。 */
    bool has_areaValidityTA_Config_r18; /**< areaValidityTA-Config-r18 是否存在。 */
    AreaValidityTA_Config_r18 areaValidityTA_Config_r18; /**< ASN.1 areaValidityTA-Config-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18
 * @note ASN.1：SetupRelease<SRS-PosRRC-InactiveValidityAreaConfig-r18>；源文件第 1229 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag {
    SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag;

struct SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18 {
    SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_PosRRC_InactiveValidityAreaConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MulticastConfigInactive_r18
 * @note ASN.1：MulticastConfigInactive-r18；源文件第 1410 行。
 * @note MulticastConfigInactive-r18 ::= SEQUENCE { inactivePTM-Config-r18, inactiveMCCH-Config-r18 }
 */
struct MulticastConfigInactive_r18 {
    MBSMulticastConfiguration_r18* inactivePTM_Config_r18; /**< ASN.1 inactivePTM-Config-r18；OCTET STRING (CONTAINING MBSMulticastConfiguration_r18)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
    SystemInformation* inactiveMCCH_Config_r18; /**< ASN.1 inactiveMCCH-Config-r18；OCTET STRING (CONTAINING SystemInformation)；NULL 表示未出现；解码由库 malloc，FreeMessage 释放。 */
};


/**
 * @brief SetupRelease_MulticastConfigInactive_r18
 * @note ASN.1：SetupRelease<MulticastConfigInactive-r18>；源文件第 1231 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MulticastConfigInactive_r18_Tag {
    SetupRelease_MulticastConfigInactive_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MulticastConfigInactive_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MulticastConfigInactive_r18_Tag;

struct SetupRelease_MulticastConfigInactive_r18 {
    SetupRelease_MulticastConfigInactive_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MulticastConfigInactive_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SuspendConfig_ExtGroup3
 * @note ASN.1：SuspendConfig_ExtGroup3；源文件第 1225 行。
 */
struct SuspendConfig_ExtGroup3 {
    bool has_resumeIndication_r18; /**< resumeIndication-r18 是否存在。 */
    SuspendConfig_ExtGroup3_ResumeIndication_r18 resumeIndication_r18; /**< ASN.1 resumeIndication-r18；枚举；OPTIONAL。 */
    bool has_srs_PosRRC_Inactive_v1800; /**< srs-PosRRC-Inactive-v1800 是否存在。 */
    SetupRelease_SRS_PosRRC_Inactive_v1800 srs_PosRRC_Inactive_v1800; /**< ASN.1 srs-PosRRC-Inactive-v1800；结构体；OPTIONAL。 */
    bool has_srs_PosRRC_InactiveValidityAreaPreConfigList_r18; /**< srs-PosRRC-InactiveValidityAreaPreConfigList-r18 是否存在。 */
    SetupRelease_SRS_PosRRC_InactiveValidityAreaPreConfigList_r18 srs_PosRRC_InactiveValidityAreaPreConfigList_r18; /**< ASN.1 srs-PosRRC-InactiveValidityAreaPreConfigList-r18；结构体；OPTIONAL。 */
    bool has_srs_PosRRC_InactiveValidityAreaNonPreConfig_r18; /**< srs-PosRRC-InactiveValidityAreaNonPreConfig-r18 是否存在。 */
    SetupRelease_SRS_PosRRC_InactiveValidityAreaConfig_r18 srs_PosRRC_InactiveValidityAreaNonPreConfig_r18; /**< ASN.1 srs-PosRRC-InactiveValidityAreaNonPreConfig-r18；结构体；OPTIONAL。 */
    bool has_ran_ExtendedPagingCycleConfig_r18; /**< ran-ExtendedPagingCycleConfig-r18 是否存在。 */
    ExtendedPagingCycleConfig_r18 ran_ExtendedPagingCycleConfig_r18; /**< ASN.1 ran-ExtendedPagingCycleConfig-r18；结构体；OPTIONAL。 */
    bool has_multicastConfigInactive_r18; /**< multicastConfigInactive-r18 是否存在。 */
    SetupRelease_MulticastConfigInactive_r18 multicastConfigInactive_r18; /**< ASN.1 multicastConfigInactive-r18；结构体；OPTIONAL。 */
};


/**
 * @brief PLMN_RAN_AreaCellList
 * @note ASN.1：PLMN-RAN-AreaCellList；源文件第 1271 行。
 * @note PLMN-RAN-AreaCellList ::= SEQUENCE OF (size 1..8) OF PLMN-RAN-AreaCell
 */
struct PLMN_RAN_AreaCellList {
    PLMN_RAN_AreaCell* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief PLMN_RAN_AreaConfigList
 * @note ASN.1：PLMN-RAN-AreaConfigList；源文件第 1278 行。
 * @note PLMN-RAN-AreaConfigList ::= SEQUENCE OF (size 1..8) OF PLMN-RAN-AreaConfig
 */
struct PLMN_RAN_AreaConfigList {
    PLMN_RAN_AreaConfig* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief RAN_NotificationAreaInfo
 * @note ASN.1：RAN-NotificationAreaInfo；源文件第 1265 行。
 * @note RAN-NotificationAreaInfo ::= CHOICE { cellList, ran-AreaConfigList }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RAN_NotificationAreaInfo_Tag {
    RAN_NotificationAreaInfo_Tag_cellList = 0, /**< ASN.1 cellList */
    RAN_NotificationAreaInfo_Tag_ran_AreaConfigList = 1, /**< ASN.1 ran-AreaConfigList */
} RAN_NotificationAreaInfo_Tag;

struct RAN_NotificationAreaInfo {
    RAN_NotificationAreaInfo_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PLMN_RAN_AreaCellList cellList; /**< ASN.1 cellList */
        PLMN_RAN_AreaConfigList ran_AreaConfigList; /**< ASN.1 ran-AreaConfigList */
    } u;
};


/**
 * @brief SuspendConfig
 * @note ASN.1：SuspendConfig；源文件第 1208 行。
 * @note SuspendConfig ::= SEQUENCE { fullI-RNTI, shortI-RNTI, ran-PagingCycle, ran-NotificationAreaInfo...
 */
struct SuspendConfig {
    I_RNTI_Value fullI_RNTI; /**< ASN.1 fullI-RNTI；SIZE (40)，定长。 */
    ShortI_RNTI_Value shortI_RNTI; /**< ASN.1 shortI-RNTI；SIZE (24)，定长。 */
    PagingCycle ran_PagingCycle; /**< ASN.1 ran-PagingCycle；枚举。 */
    bool has_ran_NotificationAreaInfo; /**< ran-NotificationAreaInfo 是否存在。 */
    RAN_NotificationAreaInfo ran_NotificationAreaInfo; /**< ASN.1 ran-NotificationAreaInfo；结构体；OPTIONAL。 */
    bool has_t380; /**< t380 是否存在。 */
    PeriodicRNAU_TimerValue t380; /**< ASN.1 t380；枚举；OPTIONAL。 */
    NextHopChainingCount nextHopChainingCount; /**< ASN.1 nextHopChainingCount；INTEGER (0..7)，位宽 3 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SuspendConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SuspendConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SuspendConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief FreqPriorityListDedicatedSlicing_r17
 * @note ASN.1：FreqPriorityListDedicatedSlicing-r17；源文件第 6872 行。
 * @note FreqPriorityListDedicatedSlicing-r17 ::= SEQUENCE OF (size 1..8) OF FreqPriorityDedicatedSlicing-r17
 */
struct FreqPriorityListDedicatedSlicing_r17 {
    FreqPriorityDedicatedSlicing_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CellReselectionPriorities_ExtGroup1
 * @note ASN.1：CellReselectionPriorities_ExtGroup1；源文件第 1242 行。
 */
struct CellReselectionPriorities_ExtGroup1 {
    bool has_freqPriorityListDedicatedSlicing_r17; /**< freqPriorityListDedicatedSlicing-r17 是否存在。 */
    FreqPriorityListDedicatedSlicing_r17 freqPriorityListDedicatedSlicing_r17; /**< ASN.1 freqPriorityListDedicatedSlicing-r17；SEQUENCE OF FreqPriorityDedicatedSlicing_r17，SIZE (1..8)；OPTIONAL。 */
};


/**
 * @brief FreqPriorityListEUTRA
 * @note ASN.1：FreqPriorityListEUTRA；源文件第 1249 行。
 * @note FreqPriorityListEUTRA ::= SEQUENCE OF (size 1..8) OF FreqPriorityEUTRA
 */
struct FreqPriorityListEUTRA {
    FreqPriorityEUTRA* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FreqPriorityListNR
 * @note ASN.1：FreqPriorityListNR；源文件第 1251 行。
 * @note FreqPriorityListNR ::= SEQUENCE OF (size 1..8) OF FreqPriorityNR
 */
struct FreqPriorityListNR {
    FreqPriorityNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CellReselectionPriorities
 * @note ASN.1：CellReselectionPriorities；源文件第 1237 行。
 * @note CellReselectionPriorities ::= SEQUENCE { freqPriorityListEUTRA, freqPriorityListNR, t320, freqPriorityListD...
 */
struct CellReselectionPriorities {
    bool has_freqPriorityListEUTRA; /**< freqPriorityListEUTRA 是否存在。 */
    FreqPriorityListEUTRA freqPriorityListEUTRA; /**< ASN.1 freqPriorityListEUTRA；SEQUENCE OF FreqPriorityEUTRA，SIZE (1..8)；OPTIONAL。 */
    bool has_freqPriorityListNR; /**< freqPriorityListNR 是否存在。 */
    FreqPriorityListNR freqPriorityListNR; /**< ASN.1 freqPriorityListNR；SEQUENCE OF FreqPriorityNR，SIZE (1..8)；OPTIONAL。 */
    bool has_t320; /**< t320 是否存在。 */
    CellReselectionPriorities_T320 t320; /**< ASN.1 t320；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CellReselectionPriorities_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RRCRelease_IEs_DeprioritisationReq
 * @note ASN.1：deprioritisationReq；源文件第 1161 行。
 * @note SEQUENCE { deprioritisationType, deprioritisationTimer }
 */
struct RRCRelease_IEs_DeprioritisationReq {
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationType deprioritisationType; /**< ASN.1 deprioritisationType；枚举。 */
    RRCRelease_IEs_DeprioritisationReq_DeprioritisationTimer deprioritisationTimer; /**< ASN.1 deprioritisationTimer；枚举。 */
};


/**
 * @brief RRCRelease_IEs
 * @note ASN.1：RRCRelease-IEs；源文件第 1157 行。
 * @note RRCRelease-IEs ::= SEQUENCE { redirectedCarrierInfo, cellReselectionPriorities, suspendConfig, d...
 */
struct RRCRelease_IEs {
    bool has_redirectedCarrierInfo; /**< redirectedCarrierInfo 是否存在。 */
    RedirectedCarrierInfo redirectedCarrierInfo; /**< ASN.1 redirectedCarrierInfo；结构体；OPTIONAL。 */
    bool has_cellReselectionPriorities; /**< cellReselectionPriorities 是否存在。 */
    CellReselectionPriorities cellReselectionPriorities; /**< ASN.1 cellReselectionPriorities；结构体；OPTIONAL。 */
    bool has_suspendConfig; /**< suspendConfig 是否存在。 */
    SuspendConfig suspendConfig; /**< ASN.1 suspendConfig；结构体；OPTIONAL。 */
    bool has_deprioritisationReq; /**< deprioritisationReq 是否存在。 */
    RRCRelease_IEs_DeprioritisationReq deprioritisationReq; /**< ASN.1 deprioritisationReq；结构体；OPTIONAL。 */
    bool has_lateNonCriticalExtension; /**< lateNonCriticalExtension 是否存在。 */
    OctetString lateNonCriticalExtension; /**< ASN.1 lateNonCriticalExtension；SIZE 无上界（半约束长度）；OPTIONAL。 */
    bool has_nonCriticalExtension; /**< nonCriticalExtension 是否存在。 */
    RRCRelease_v1540_IEs nonCriticalExtension; /**< ASN.1 nonCriticalExtension；结构体；OPTIONAL。 */
};


/**
 * @brief RRCRelease_CriticalExtensionsFuture
 * @note ASN.1：criticalExtensions/criticalExtensionsFuture；源文件第 1153 行。
 * @note SEQUENCE { }
 */
struct RRCRelease_CriticalExtensionsFuture {
    uint8_t _dummy; /**< 占位；编码 0 bit。 */
};


/**
 * @brief RRCRelease_CriticalExtensions
 * @note ASN.1：criticalExtensions；源文件第 1151 行。
 * @note CHOICE { rrcRelease, criticalExtensionsFuture }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RRCRelease_CriticalExtensions_Tag {
    RRCRelease_CriticalExtensions_Tag_rrcRelease = 0, /**< ASN.1 rrcRelease */
    RRCRelease_CriticalExtensions_Tag_criticalExtensionsFuture = 1, /**< ASN.1 criticalExtensionsFuture */
} RRCRelease_CriticalExtensions_Tag;

struct RRCRelease_CriticalExtensions {
    RRCRelease_CriticalExtensions_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RRCRelease_IEs rrcRelease; /**< ASN.1 rrcRelease */
        RRCRelease_CriticalExtensionsFuture criticalExtensionsFuture; /**< ASN.1 criticalExtensionsFuture */
    } u;
};


/**
 * @brief RRCRelease
 * @note ASN.1：RRCRelease；源文件第 1149 行。
 * @note 实际消息：ChannelType_DL_DCCH；MessageKind_RRCRelease（包装位 2 级，入口 2 个 CHOICE）。
 * @note RRCRelease ::= SEQUENCE { rrc-TransactionIdentifier, criticalExtensions }
 */
struct RRCRelease {
    RRC_TransactionIdentifier rrc_TransactionIdentifier; /**< ASN.1 rrc-TransactionIdentifier；INTEGER (0..3)，位宽 2 bit。 */
    RRCRelease_CriticalExtensions criticalExtensions; /**< ASN.1 criticalExtensions；结构体。 */
};


/**
 * @brief FreqPriorityEUTRA
 * @note ASN.1：FreqPriorityEUTRA；源文件第 1253 行。
 * @note FreqPriorityEUTRA ::= SEQUENCE { carrierFreq, cellReselectionPriority, cellReselectionSubPriority }
 */
struct FreqPriorityEUTRA {
    ARFCN_ValueEUTRA carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..262143)，位宽 18 bit。 */
    CellReselectionPriority cellReselectionPriority; /**< ASN.1 cellReselectionPriority；INTEGER (0..7)，位宽 3 bit。 */
    bool has_cellReselectionSubPriority; /**< cellReselectionSubPriority 是否存在。 */
    CellReselectionSubPriority cellReselectionSubPriority; /**< ASN.1 cellReselectionSubPriority；枚举；OPTIONAL。 */
};


/**
 * @brief FreqPriorityNR
 * @note ASN.1：FreqPriorityNR；源文件第 1259 行。
 * @note FreqPriorityNR ::= SEQUENCE { carrierFreq, cellReselectionPriority, cellReselectionSubPriority }
 */
struct FreqPriorityNR {
    ARFCN_ValueNR carrierFreq; /**< ASN.1 carrierFreq；INTEGER (0..3279165)，位宽 22 bit。 */
    CellReselectionPriority cellReselectionPriority; /**< ASN.1 cellReselectionPriority；INTEGER (0..7)，位宽 3 bit。 */
    bool has_cellReselectionSubPriority; /**< cellReselectionSubPriority 是否存在。 */
    CellReselectionSubPriority cellReselectionSubPriority; /**< ASN.1 cellReselectionSubPriority；枚举；OPTIONAL。 */
};


/**
 * @brief PLMN_RAN_AreaCell
 * @note ASN.1：PLMN-RAN-AreaCell；源文件第 1273 行。
 * @note PLMN-RAN-AreaCell ::= SEQUENCE { plmn-Identity, ran-AreaCells }
 */
struct PLMN_RAN_AreaCell {
    bool has_plmn_Identity; /**< plmn-Identity 是否存在。 */
    PLMN_Identity plmn_Identity; /**< ASN.1 plmn-Identity；结构体；OPTIONAL。 */
    CellIdentity* ran_AreaCells_items; /**< ASN.1 ran-AreaCells；SEQUENCE OF CellIdentity，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ran_AreaCells_count; /**< ran-AreaCells 元素个数。 */
};


/**
 * @brief PLMN_RAN_AreaConfig
 * @note ASN.1：PLMN-RAN-AreaConfig；源文件第 1280 行。
 * @note PLMN-RAN-AreaConfig ::= SEQUENCE { plmn-Identity, ran-Area }
 */
struct PLMN_RAN_AreaConfig {
    bool has_plmn_Identity; /**< plmn-Identity 是否存在。 */
    PLMN_Identity plmn_Identity; /**< ASN.1 plmn-Identity；结构体；OPTIONAL。 */
    RAN_AreaConfig* ran_Area_items; /**< ASN.1 ran-Area；SEQUENCE OF RAN_AreaConfig，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ran_Area_count; /**< ran-Area 元素个数。 */
};


/**
 * @brief RAN_AreaConfig
 * @note ASN.1：RAN-AreaConfig；源文件第 1285 行。
 * @note RAN-AreaConfig ::= SEQUENCE { trackingAreaCode, ran-AreaCodeList }
 */
struct RAN_AreaConfig {
    TrackingAreaCode trackingAreaCode; /**< ASN.1 trackingAreaCode；SIZE (24)，定长。 */
    bool has_ran_AreaCodeList; /**< ran-AreaCodeList 是否存在。 */
    RAN_AreaCode* ran_AreaCodeList_items; /**< ASN.1 ran-AreaCodeList；SEQUENCE OF RAN_AreaCode，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ran_AreaCodeList_count; /**< ran-AreaCodeList 元素个数。 */
};


/**
 * @brief SDT_MAC_PHY_CG_Config_r17_ExtGroup1
 * @note ASN.1：SDT_MAC_PHY_CG_Config_r17_ExtGroup1；源文件第 1311 行。
 */
struct SDT_MAC_PHY_CG_Config_r17_ExtGroup1 {
    bool has_cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800; /**< cg-SDT-ConfigLCH-RestrictionToAddModListExt-v1800 是否存在。 */
    CG_SDT_ConfigLCH_Restriction_v1800* cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_items; /**< ASN.1 cg-SDT-ConfigLCH-RestrictionToAddModListExt-v1800；SEQUENCE OF CG_SDT_ConfigLCH_Restriction_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cg_SDT_ConfigLCH_RestrictionToAddModListExt_v1800_count; /**< cg-SDT-ConfigLCH-RestrictionToAddModListExt-v1800 元素个数。 */
    bool has_cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18; /**< cg-MT-SDT-MaxDurationToNext-CG-Occasion-r18 是否存在。 */
    SDT_MAC_PHY_CG_Config_r17_ExtGroup1_Cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18 cg_MT_SDT_MaxDurationToNext_CG_Occasion_r18; /**< ASN.1 cg-MT-SDT-MaxDurationToNext-CG-Occasion-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SearchSpaceSwitchConfig_r16
 * @note ASN.1：SearchSpaceSwitchConfig-r16；源文件第 9174 行。
 * @note SearchSpaceSwitchConfig-r16 ::= SEQUENCE { cellGroupsForSwitchList-r16, searchSpaceSwitchDelay-r16 }
 */
struct SearchSpaceSwitchConfig_r16 {
    bool has_cellGroupsForSwitchList_r16; /**< cellGroupsForSwitchList-r16 是否存在。 */
    CellGroupForSwitch_r16* cellGroupsForSwitchList_r16_items; /**< ASN.1 cellGroupsForSwitchList-r16；SEQUENCE OF CellGroupForSwitch_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t cellGroupsForSwitchList_r16_count; /**< cellGroupsForSwitchList-r16 元素个数。 */
    bool has_searchSpaceSwitchDelay_r16; /**< searchSpaceSwitchDelay-r16 是否存在。 */
    int64_t searchSpaceSwitchDelay_r16; /**< ASN.1 searchSpaceSwitchDelay-r16；INTEGER (10..52)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief UplinkCancellation_r16
 * @note ASN.1：UplinkCancellation-r16；源文件第 13923 行。
 * @note UplinkCancellation-r16 ::= SEQUENCE { ci-RNTI-r16, dci-PayloadSizeForCI-r16, ci-ConfigurationPerServingC...
 */
struct UplinkCancellation_r16 {
    RNTI_Value ci_RNTI_r16; /**< ASN.1 ci-RNTI-r16；INTEGER (0..65535)，位宽 16 bit。 */
    int64_t dci_PayloadSizeForCI_r16; /**< ASN.1 dci-PayloadSizeForCI-r16；INTEGER (0..126)，位宽 7 bit。 */
    CI_ConfigurationPerServingCell_r16* ci_ConfigurationPerServingCell_r16_items; /**< ASN.1 ci-ConfigurationPerServingCell-r16；SEQUENCE OF CI_ConfigurationPerServingCell_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ci_ConfigurationPerServingCell_r16_count; /**< ci-ConfigurationPerServingCell-r16 元素个数。 */
};


/**
 * @brief SetupRelease_UplinkCancellation_r16
 * @note ASN.1：SetupRelease<UplinkCancellation-r16>；源文件第 9158 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UplinkCancellation_r16_Tag {
    SetupRelease_UplinkCancellation_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UplinkCancellation_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UplinkCancellation_r16_Tag;

struct SetupRelease_UplinkCancellation_r16 {
    SetupRelease_UplinkCancellation_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UplinkCancellation_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCCH_Config_ExtGroup1
 * @note ASN.1：PDCCH_Config_ExtGroup1；源文件第 9154 行。
 */
struct PDCCH_Config_ExtGroup1 {
    bool has_controlResourceSetToAddModListSizeExt_v1610; /**< controlResourceSetToAddModListSizeExt-v1610 是否存在。 */
    ControlResourceSet* controlResourceSetToAddModListSizeExt_v1610_items; /**< ASN.1 controlResourceSetToAddModListSizeExt-v1610；SEQUENCE OF ControlResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t controlResourceSetToAddModListSizeExt_v1610_count; /**< controlResourceSetToAddModListSizeExt-v1610 元素个数。 */
    bool has_controlResourceSetToReleaseListSizeExt_r16; /**< controlResourceSetToReleaseListSizeExt-r16 是否存在。 */
    ControlResourceSetId_r16* controlResourceSetToReleaseListSizeExt_r16_items; /**< ASN.1 controlResourceSetToReleaseListSizeExt-r16；SEQUENCE OF ControlResourceSetId_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t controlResourceSetToReleaseListSizeExt_r16_count; /**< controlResourceSetToReleaseListSizeExt-r16 元素个数。 */
    bool has_searchSpacesToAddModListExt_r16; /**< searchSpacesToAddModListExt-r16 是否存在。 */
    SearchSpaceExt_r16* searchSpacesToAddModListExt_r16_items; /**< ASN.1 searchSpacesToAddModListExt-r16；SEQUENCE OF SearchSpaceExt_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpacesToAddModListExt_r16_count; /**< searchSpacesToAddModListExt-r16 元素个数。 */
    bool has_uplinkCancellation_r16; /**< uplinkCancellation-r16 是否存在。 */
    SetupRelease_UplinkCancellation_r16 uplinkCancellation_r16; /**< ASN.1 uplinkCancellation-r16；结构体；OPTIONAL。 */
    bool has_monitoringCapabilityConfig_r16; /**< monitoringCapabilityConfig-r16 是否存在。 */
    PDCCH_Config_ExtGroup1_MonitoringCapabilityConfig_r16 monitoringCapabilityConfig_r16; /**< ASN.1 monitoringCapabilityConfig-r16；枚举；OPTIONAL。 */
    bool has_searchSpaceSwitchConfig_r16; /**< searchSpaceSwitchConfig-r16 是否存在。 */
    SearchSpaceSwitchConfig_r16 searchSpaceSwitchConfig_r16; /**< ASN.1 searchSpaceSwitchConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SearchSpaceSwitchConfig_r17
 * @note ASN.1：SearchSpaceSwitchConfig-r17；源文件第 9179 行。
 * @note SearchSpaceSwitchConfig-r17 ::= SEQUENCE { searchSpaceSwitchTimer-r17, searchSpaceSwitchDelay-r17 }
 */
struct SearchSpaceSwitchConfig_r17 {
    bool has_searchSpaceSwitchTimer_r17; /**< searchSpaceSwitchTimer-r17 是否存在。 */
    SCS_SpecificDuration_r17 searchSpaceSwitchTimer_r17; /**< ASN.1 searchSpaceSwitchTimer-r17；INTEGER (1..166)，位宽 8 bit；OPTIONAL。 */
    bool has_searchSpaceSwitchDelay_r17; /**< searchSpaceSwitchDelay-r17 是否存在。 */
    int64_t searchSpaceSwitchDelay_r17; /**< ASN.1 searchSpaceSwitchDelay-r17；INTEGER (10..52)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief PDCCH_Config_ExtGroup2
 * @note ASN.1：PDCCH_Config_ExtGroup2；源文件第 9162 行。
 */
struct PDCCH_Config_ExtGroup2 {
    bool has_searchSpacesToAddModListExt_v1700; /**< searchSpacesToAddModListExt-v1700 是否存在。 */
    SearchSpaceExt_v1700* searchSpacesToAddModListExt_v1700_items; /**< ASN.1 searchSpacesToAddModListExt-v1700；SEQUENCE OF SearchSpaceExt_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpacesToAddModListExt_v1700_count; /**< searchSpacesToAddModListExt-v1700 元素个数。 */
    bool has_monitoringCapabilityConfig_v1710; /**< monitoringCapabilityConfig-v1710 是否存在。 */
    PDCCH_Config_ExtGroup2_MonitoringCapabilityConfig_v1710 monitoringCapabilityConfig_v1710; /**< ASN.1 monitoringCapabilityConfig-v1710；枚举；OPTIONAL。 */
    bool has_searchSpaceSwitchConfig_r17; /**< searchSpaceSwitchConfig-r17 是否存在。 */
    SearchSpaceSwitchConfig_r17 searchSpaceSwitchConfig_r17; /**< ASN.1 searchSpaceSwitchConfig-r17；结构体；OPTIONAL。 */
    bool has_pdcch_SkippingDurationList_r17; /**< pdcch-SkippingDurationList-r17 是否存在。 */
    SCS_SpecificDuration_r17* pdcch_SkippingDurationList_r17_items; /**< ASN.1 pdcch-SkippingDurationList-r17；SEQUENCE OF SCS_SpecificDuration_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdcch_SkippingDurationList_r17_count; /**< pdcch-SkippingDurationList-r17 元素个数。 */
};


/**
 * @brief PDCCH_Config_ExtGroup3
 * @note ASN.1：PDCCH_Config_ExtGroup3；源文件第 9168 行。
 */
struct PDCCH_Config_ExtGroup3 {
    bool has_pdcch_MonitoringResumptionAfterNack_r18; /**< pdcch-MonitoringResumptionAfterNack-r18 是否存在。 */
    PDCCH_Config_ExtGroup3_Pdcch_MonitoringResumptionAfterNack_r18 pdcch_MonitoringResumptionAfterNack_r18; /**< ASN.1 pdcch-MonitoringResumptionAfterNack-r18；枚举；OPTIONAL。 */
    bool has_searchSpacesToAddModListExt_v1800; /**< searchSpacesToAddModListExt-v1800 是否存在。 */
    SearchSpaceExt_v1800* searchSpacesToAddModListExt_v1800_items; /**< ASN.1 searchSpacesToAddModListExt-v1800；SEQUENCE OF SearchSpaceExt_v1800，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpacesToAddModListExt_v1800_count; /**< searchSpacesToAddModListExt-v1800 元素个数。 */
};


/**
 * @brief DownlinkPreemption
 * @note ASN.1：DownlinkPreemption；源文件第 6612 行。
 * @note DownlinkPreemption ::= SEQUENCE { int-RNTI, timeFrequencySet, dci-PayloadSize, int-ConfigurationPerS...
 */
struct DownlinkPreemption {
    RNTI_Value int_RNTI; /**< ASN.1 int-RNTI；INTEGER (0..65535)，位宽 16 bit。 */
    DownlinkPreemption_TimeFrequencySet timeFrequencySet; /**< ASN.1 timeFrequencySet；枚举。 */
    int64_t dci_PayloadSize; /**< ASN.1 dci-PayloadSize；INTEGER (0..126)，位宽 7 bit。 */
    INT_ConfigurationPerServingCell* int_ConfigurationPerServingCell_items; /**< ASN.1 int-ConfigurationPerServingCell；SEQUENCE OF INT_ConfigurationPerServingCell，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t int_ConfigurationPerServingCell_count; /**< int-ConfigurationPerServingCell 元素个数。 */
};


/**
 * @brief SetupRelease_DownlinkPreemption
 * @note ASN.1：SetupRelease<DownlinkPreemption>；源文件第 9149 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DownlinkPreemption_Tag {
    SetupRelease_DownlinkPreemption_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DownlinkPreemption_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DownlinkPreemption_Tag;

struct SetupRelease_DownlinkPreemption {
    SetupRelease_DownlinkPreemption_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DownlinkPreemption setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_TPC_CommandConfig
 * @note ASN.1：PUSCH-TPC-CommandConfig；源文件第 10638 行。
 * @note PUSCH-TPC-CommandConfig ::= SEQUENCE { tpc-Index, tpc-IndexSUL, targetCell }
 */
struct PUSCH_TPC_CommandConfig {
    bool has_tpc_Index; /**< tpc-Index 是否存在。 */
    int64_t tpc_Index; /**< ASN.1 tpc-Index；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_tpc_IndexSUL; /**< tpc-IndexSUL 是否存在。 */
    int64_t tpc_IndexSUL; /**< ASN.1 tpc-IndexSUL；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_targetCell; /**< targetCell 是否存在。 */
    ServCellIndex targetCell; /**< ASN.1 targetCell；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PUSCH_TPC_CommandConfig
 * @note ASN.1：SetupRelease<PUSCH-TPC-CommandConfig>；源文件第 9150 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_TPC_CommandConfig_Tag {
    SetupRelease_PUSCH_TPC_CommandConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_TPC_CommandConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_TPC_CommandConfig_Tag;

struct SetupRelease_PUSCH_TPC_CommandConfig {
    SetupRelease_PUSCH_TPC_CommandConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_TPC_CommandConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUCCH_TPC_CommandConfig_ExtGroup1
 * @note ASN.1：PUCCH_TPC_CommandConfig_ExtGroup1；源文件第 10261 行。
 */
struct PUCCH_TPC_CommandConfig_ExtGroup1 {
    bool has_tpc_IndexPUCCH_sSCell_r17; /**< tpc-IndexPUCCH-sSCell-r17 是否存在。 */
    int64_t tpc_IndexPUCCH_sSCell_r17; /**< ASN.1 tpc-IndexPUCCH-sSCell-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17; /**< tpc-IndexPUCCH-sScellSecondaryPUCCHgroup-r17 是否存在。 */
    int64_t tpc_IndexPUCCH_sScellSecondaryPUCCHgroup_r17; /**< ASN.1 tpc-IndexPUCCH-sScellSecondaryPUCCHgroup-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief PUCCH_TPC_CommandConfig
 * @note ASN.1：PUCCH-TPC-CommandConfig；源文件第 10257 行。
 * @note PUCCH-TPC-CommandConfig ::= SEQUENCE { tpc-IndexPCell, tpc-IndexPUCCH-SCell, tpc-IndexPUCCH-sSCell-r17, t...
 */
struct PUCCH_TPC_CommandConfig {
    bool has_tpc_IndexPCell; /**< tpc-IndexPCell 是否存在。 */
    int64_t tpc_IndexPCell; /**< ASN.1 tpc-IndexPCell；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_tpc_IndexPUCCH_SCell; /**< tpc-IndexPUCCH-SCell 是否存在。 */
    int64_t tpc_IndexPUCCH_SCell; /**< ASN.1 tpc-IndexPUCCH-SCell；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUCCH_TPC_CommandConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PUCCH_TPC_CommandConfig
 * @note ASN.1：SetupRelease<PUCCH-TPC-CommandConfig>；源文件第 9151 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUCCH_TPC_CommandConfig_Tag {
    SetupRelease_PUCCH_TPC_CommandConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUCCH_TPC_CommandConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUCCH_TPC_CommandConfig_Tag;

struct SetupRelease_PUCCH_TPC_CommandConfig {
    SetupRelease_PUCCH_TPC_CommandConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUCCH_TPC_CommandConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_TPC_CommandConfig_ExtGroup1
 * @note ASN.1：SRS_TPC_CommandConfig_ExtGroup1；源文件第 13524 行。
 */
struct SRS_TPC_CommandConfig_ExtGroup1 {
    bool has_startingBitOfFormat2_3SUL; /**< startingBitOfFormat2-3SUL 是否存在。 */
    int64_t startingBitOfFormat2_3SUL; /**< ASN.1 startingBitOfFormat2-3SUL；INTEGER (1..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SRS_TPC_CommandConfig
 * @note ASN.1：SRS-TPC-CommandConfig；源文件第 13520 行。
 * @note SRS-TPC-CommandConfig ::= SEQUENCE { startingBitOfFormat2-3, fieldTypeFormat2-3, startingBitOfFormat2-3...
 */
struct SRS_TPC_CommandConfig {
    bool has_startingBitOfFormat2_3; /**< startingBitOfFormat2-3 是否存在。 */
    int64_t startingBitOfFormat2_3; /**< ASN.1 startingBitOfFormat2-3；INTEGER (1..31)，位宽 5 bit；OPTIONAL。 */
    bool has_fieldTypeFormat2_3; /**< fieldTypeFormat2-3 是否存在。 */
    int64_t fieldTypeFormat2_3; /**< ASN.1 fieldTypeFormat2-3；INTEGER (0..1)，位宽 1 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SRS_TPC_CommandConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SRS_TPC_CommandConfig
 * @note ASN.1：SetupRelease<SRS-TPC-CommandConfig>；源文件第 9152 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_TPC_CommandConfig_Tag {
    SetupRelease_SRS_TPC_CommandConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_TPC_CommandConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_TPC_CommandConfig_Tag;

struct SetupRelease_SRS_TPC_CommandConfig {
    SetupRelease_SRS_TPC_CommandConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_TPC_CommandConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCCH_Config
 * @note ASN.1：PDCCH-Config；源文件第 9144 行。
 * @note PDCCH-Config ::= SEQUENCE { controlResourceSetToAddModList, controlResourceSetToReleaseList, s...
 */
struct PDCCH_Config {
    bool has_controlResourceSetToAddModList; /**< controlResourceSetToAddModList 是否存在。 */
    ControlResourceSet* controlResourceSetToAddModList_items; /**< ASN.1 controlResourceSetToAddModList；SEQUENCE OF ControlResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t controlResourceSetToAddModList_count; /**< controlResourceSetToAddModList 元素个数。 */
    bool has_controlResourceSetToReleaseList; /**< controlResourceSetToReleaseList 是否存在。 */
    ControlResourceSetId* controlResourceSetToReleaseList_items; /**< ASN.1 controlResourceSetToReleaseList；SEQUENCE OF ControlResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t controlResourceSetToReleaseList_count; /**< controlResourceSetToReleaseList 元素个数。 */
    bool has_searchSpacesToAddModList; /**< searchSpacesToAddModList 是否存在。 */
    SearchSpace* searchSpacesToAddModList_items; /**< ASN.1 searchSpacesToAddModList；SEQUENCE OF SearchSpace，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpacesToAddModList_count; /**< searchSpacesToAddModList 元素个数。 */
    bool has_searchSpacesToReleaseList; /**< searchSpacesToReleaseList 是否存在。 */
    SearchSpaceId* searchSpacesToReleaseList_items; /**< ASN.1 searchSpacesToReleaseList；SEQUENCE OF SearchSpaceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t searchSpacesToReleaseList_count; /**< searchSpacesToReleaseList 元素个数。 */
    bool has_downlinkPreemption; /**< downlinkPreemption 是否存在。 */
    SetupRelease_DownlinkPreemption downlinkPreemption; /**< ASN.1 downlinkPreemption；结构体；OPTIONAL。 */
    bool has_tpc_PUSCH; /**< tpc-PUSCH 是否存在。 */
    SetupRelease_PUSCH_TPC_CommandConfig tpc_PUSCH; /**< ASN.1 tpc-PUSCH；结构体；OPTIONAL。 */
    bool has_tpc_PUCCH; /**< tpc-PUCCH 是否存在。 */
    SetupRelease_PUCCH_TPC_CommandConfig tpc_PUCCH; /**< ASN.1 tpc-PUCCH；结构体；OPTIONAL。 */
    bool has_tpc_SRS; /**< tpc-SRS 是否存在。 */
    SetupRelease_SRS_TPC_CommandConfig tpc_SRS; /**< ASN.1 tpc-SRS；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDCCH_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDCCH_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PDCCH_Config_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PDCCH_Config
 * @note ASN.1：SetupRelease<PDCCH-Config>；源文件第 1327 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_Config_Tag {
    SetupRelease_PDCCH_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_Config_Tag;

struct SetupRelease_PDCCH_Config {
    SetupRelease_PDCCH_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RateMatchPatternGroup
 * @note ASN.1：RateMatchPatternGroup；源文件第 9526 行。
 * @note RateMatchPatternGroup ::= SEQUENCE OF (size 1..8) OF RateMatchPatternGroupItem
 */
struct RateMatchPatternGroup {
    RateMatchPatternGroup_Item* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief DMRS_DownlinkConfig_ExtGroup1
 * @note ASN.1：DMRS_DownlinkConfig_ExtGroup1；源文件第 6475 行。
 */
struct DMRS_DownlinkConfig_ExtGroup1 {
    bool has_dmrs_Downlink_r16; /**< dmrs-Downlink-r16 是否存在。 */
    DMRS_DownlinkConfig_ExtGroup1_Dmrs_Downlink_r16 dmrs_Downlink_r16; /**< ASN.1 dmrs-Downlink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief DMRS_DownlinkConfig_ExtGroup2
 * @note ASN.1：DMRS_DownlinkConfig_ExtGroup2；源文件第 6478 行。
 */
struct DMRS_DownlinkConfig_ExtGroup2 {
    bool has_dmrs_TypeEnh_r18; /**< dmrs-TypeEnh-r18 是否存在。 */
    DMRS_DownlinkConfig_ExtGroup2_Dmrs_TypeEnh_r18 dmrs_TypeEnh_r18; /**< ASN.1 dmrs-TypeEnh-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PTRS_DownlinkConfig_ExtGroup1
 * @note ASN.1：PTRS_DownlinkConfig_ExtGroup1；源文件第 9895 行。
 */
struct PTRS_DownlinkConfig_ExtGroup1 {
    bool has_maxNrofPorts_r16; /**< maxNrofPorts-r16 是否存在。 */
    PTRS_DownlinkConfig_ExtGroup1_MaxNrofPorts_r16 maxNrofPorts_r16; /**< ASN.1 maxNrofPorts-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PTRS_DownlinkConfig
 * @note ASN.1：PTRS-DownlinkConfig；源文件第 9889 行。
 * @note PTRS-DownlinkConfig ::= SEQUENCE { frequencyDensity, timeDensity, epre-Ratio, resourceElementOffset, ...
 */
struct PTRS_DownlinkConfig {
    bool has_frequencyDensity; /**< frequencyDensity 是否存在。 */
    int64_t* frequencyDensity_items; /**< ASN.1 frequencyDensity；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t frequencyDensity_count; /**< frequencyDensity 元素个数。 */
    bool has_timeDensity; /**< timeDensity 是否存在。 */
    int64_t* timeDensity_items; /**< ASN.1 timeDensity；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t timeDensity_count; /**< timeDensity 元素个数。 */
    bool has_epre_Ratio; /**< epre-Ratio 是否存在。 */
    int64_t epre_Ratio; /**< ASN.1 epre-Ratio；INTEGER (0..3)，位宽 2 bit；OPTIONAL。 */
    bool has_resourceElementOffset; /**< resourceElementOffset 是否存在。 */
    PTRS_DownlinkConfig_ResourceElementOffset resourceElementOffset; /**< ASN.1 resourceElementOffset；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PTRS_DownlinkConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PTRS_DownlinkConfig
 * @note ASN.1：SetupRelease<PTRS-DownlinkConfig>；源文件第 6473 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PTRS_DownlinkConfig_Tag {
    SetupRelease_PTRS_DownlinkConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PTRS_DownlinkConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PTRS_DownlinkConfig_Tag;

struct SetupRelease_PTRS_DownlinkConfig {
    SetupRelease_PTRS_DownlinkConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PTRS_DownlinkConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DMRS_DownlinkConfig
 * @note ASN.1：DMRS-DownlinkConfig；源文件第 6467 行。
 * @note DMRS-DownlinkConfig ::= SEQUENCE { dmrs-Type, dmrs-AdditionalPosition, maxLength, scramblingID0, scra...
 */
struct DMRS_DownlinkConfig {
    bool has_dmrs_Type; /**< dmrs-Type 是否存在。 */
    DMRS_DownlinkConfig_Dmrs_Type dmrs_Type; /**< ASN.1 dmrs-Type；枚举；OPTIONAL。 */
    bool has_dmrs_AdditionalPosition; /**< dmrs-AdditionalPosition 是否存在。 */
    DMRS_DownlinkConfig_Dmrs_AdditionalPosition dmrs_AdditionalPosition; /**< ASN.1 dmrs-AdditionalPosition；枚举；OPTIONAL。 */
    bool has_maxLength; /**< maxLength 是否存在。 */
    DMRS_DownlinkConfig_MaxLength maxLength; /**< ASN.1 maxLength；枚举；OPTIONAL。 */
    bool has_scramblingID0; /**< scramblingID0 是否存在。 */
    int64_t scramblingID0; /**< ASN.1 scramblingID0；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_scramblingID1; /**< scramblingID1 是否存在。 */
    int64_t scramblingID1; /**< ASN.1 scramblingID1；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_phaseTrackingRS; /**< phaseTrackingRS 是否存在。 */
    SetupRelease_PTRS_DownlinkConfig phaseTrackingRS; /**< ASN.1 phaseTrackingRS；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DMRS_DownlinkConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    DMRS_DownlinkConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_DMRS_DownlinkConfig
 * @note ASN.1：SetupRelease<DMRS-DownlinkConfig>；源文件第 9402 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DMRS_DownlinkConfig_Tag {
    SetupRelease_DMRS_DownlinkConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DMRS_DownlinkConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DMRS_DownlinkConfig_Tag;

struct SetupRelease_DMRS_DownlinkConfig {
    SetupRelease_DMRS_DownlinkConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DMRS_DownlinkConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_MaxMIMO_LayersDL_r16
 * @note ASN.1：SetupRelease<MaxMIMO-LayersDL-r16>；源文件第 9445 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MaxMIMO_LayersDL_r16_Tag {
    SetupRelease_MaxMIMO_LayersDL_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MaxMIMO_LayersDL_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MaxMIMO_LayersDL_r16_Tag;

struct SetupRelease_MaxMIMO_LayersDL_r16 {
    SetupRelease_MaxMIMO_LayersDL_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MaxMIMO_LayersDL_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MinSchedulingOffsetK0_Values_r16
 * @note ASN.1：MinSchedulingOffsetK0-Values-r16；源文件第 9531 行。
 * @note MinSchedulingOffsetK0-Values-r16 ::= SEQUENCE OF (size 1..2) OF MinSchedulingOffsetK0ValuesR16Item
 */
struct MinSchedulingOffsetK0_Values_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_MinSchedulingOffsetK0_Values_r16
 * @note ASN.1：SetupRelease<MinSchedulingOffsetK0-Values-r16>；源文件第 9446 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag {
    SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag;

struct SetupRelease_MinSchedulingOffsetK0_Values_r16 {
    SetupRelease_MinSchedulingOffsetK0_Values_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MinSchedulingOffsetK0_Values_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16
 * @note ASN.1：SetupRelease<PDSCH-TimeDomainResourceAllocationList-r16>；源文件第 9460 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag {
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag;

struct SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16 {
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_TimeDomainResourceAllocationList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16
 * @note ASN.1：prb-BundlingTypeDCI-1-2-r16/staticBundling-r16；源文件第 9463 行。
 * @note SEQUENCE { bundleSize-r16 }
 */
struct PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16 {
    bool has_bundleSize_r16; /**< bundleSize-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16_BundleSize_r16 bundleSize_r16; /**< ASN.1 bundleSize-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16
 * @note ASN.1：prb-BundlingTypeDCI-1-2-r16/dynamicBundling-r16；源文件第 9466 行。
 * @note SEQUENCE { bundleSizeSet1-r16, bundleSizeSet2-r16 }
 */
struct PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16 {
    bool has_bundleSizeSet1_r16; /**< bundleSizeSet1-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet1_r16 bundleSizeSet1_r16; /**< ASN.1 bundleSizeSet1-r16；枚举；OPTIONAL。 */
    bool has_bundleSizeSet2_r16; /**< bundleSizeSet2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16_BundleSizeSet2_r16 bundleSizeSet2_r16; /**< ASN.1 bundleSizeSet2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16
 * @note ASN.1：prb-BundlingTypeDCI-1-2-r16；源文件第 9462 行。
 * @note CHOICE { staticBundling-r16, dynamicBundling-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag {
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_staticBundling_r16 = 0, /**< ASN.1 staticBundling-r16 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag_dynamicBundling_r16 = 1, /**< ASN.1 dynamicBundling-r16 */
} PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag;

struct PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16 {
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_StaticBundling_r16 staticBundling_r16; /**< ASN.1 staticBundling-r16 */
        PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16_DynamicBundling_r16 dynamicBundling_r16; /**< ASN.1 dynamicBundling-r16 */
    } u;
};


/**
 * @brief FDM_TDM_r16
 * @note ASN.1：FDM-TDM-r16；源文件第 11211 行。
 * @note FDM-TDM-r16 ::= SEQUENCE { repetitionScheme-r16, startingSymbolOffsetK-r16 }
 */
struct FDM_TDM_r16 {
    FDM_TDM_r16_RepetitionScheme_r16 repetitionScheme_r16; /**< ASN.1 repetitionScheme-r16；枚举。 */
    bool has_startingSymbolOffsetK_r16; /**< startingSymbolOffsetK-r16 是否存在。 */
    int64_t startingSymbolOffsetK_r16; /**< ASN.1 startingSymbolOffsetK-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_FDM_TDM_r16
 * @note ASN.1：SetupRelease<FDM-TDM-r16>；源文件第 11203 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_FDM_TDM_r16_Tag {
    SetupRelease_FDM_TDM_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_FDM_TDM_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_FDM_TDM_r16_Tag;

struct SetupRelease_FDM_TDM_r16 {
    SetupRelease_FDM_TDM_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        FDM_TDM_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SlotBased_r16
 * @note ASN.1：SlotBased-r16；源文件第 11216 行。
 * @note SlotBased-r16 ::= SEQUENCE { tciMapping-r16, sequenceOffsetForRV-r16 }
 */
struct SlotBased_r16 {
    SlotBased_r16_TciMapping_r16 tciMapping_r16; /**< ASN.1 tciMapping-r16；枚举。 */
    int64_t sequenceOffsetForRV_r16; /**< ASN.1 sequenceOffsetForRV-r16；INTEGER (1..3)，位宽 2 bit。 */
};


/**
 * @brief SetupRelease_SlotBased_r16
 * @note ASN.1：SetupRelease<SlotBased-r16>；源文件第 11204 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SlotBased_r16_Tag {
    SetupRelease_SlotBased_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SlotBased_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SlotBased_r16_Tag;

struct SetupRelease_SlotBased_r16 {
    SetupRelease_SlotBased_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SlotBased_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RepetitionSchemeConfig_r16
 * @note ASN.1：RepetitionSchemeConfig-r16；源文件第 11202 行。
 * @note RepetitionSchemeConfig-r16 ::= CHOICE { fdm-TDM-r16, slotBased-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RepetitionSchemeConfig_r16_Tag {
    RepetitionSchemeConfig_r16_Tag_fdm_TDM_r16 = 0, /**< ASN.1 fdm-TDM-r16 */
    RepetitionSchemeConfig_r16_Tag_slotBased_r16 = 1, /**< ASN.1 slotBased-r16 */
} RepetitionSchemeConfig_r16_Tag;

struct RepetitionSchemeConfig_r16 {
    RepetitionSchemeConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SetupRelease_FDM_TDM_r16 fdm_TDM_r16; /**< ASN.1 fdm-TDM-r16 */
        SetupRelease_SlotBased_r16 slotBased_r16; /**< ASN.1 slotBased-r16 */
    } u;
};


/**
 * @brief SetupRelease_RepetitionSchemeConfig_r16
 * @note ASN.1：SetupRelease<RepetitionSchemeConfig-r16>；源文件第 9484 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RepetitionSchemeConfig_r16_Tag {
    SetupRelease_RepetitionSchemeConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RepetitionSchemeConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RepetitionSchemeConfig_r16_Tag;

struct SetupRelease_RepetitionSchemeConfig_r16 {
    SetupRelease_RepetitionSchemeConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RepetitionSchemeConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_ExtGroup1
 * @note ASN.1：PDSCH_Config_ExtGroup1；源文件第 9444 行。
 */
struct PDSCH_Config_ExtGroup1 {
    bool has_maxMIMO_Layers_r16; /**< maxMIMO-Layers-r16 是否存在。 */
    SetupRelease_MaxMIMO_LayersDL_r16 maxMIMO_Layers_r16; /**< ASN.1 maxMIMO-Layers-r16；结构体；OPTIONAL。 */
    bool has_minimumSchedulingOffsetK0_r16; /**< minimumSchedulingOffsetK0-r16 是否存在。 */
    SetupRelease_MinSchedulingOffsetK0_Values_r16 minimumSchedulingOffsetK0_r16; /**< ASN.1 minimumSchedulingOffsetK0-r16；结构体；OPTIONAL。 */
    bool has_antennaPortsFieldPresenceDCI_1_2_r16; /**< antennaPortsFieldPresenceDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_1_2_r16 antennaPortsFieldPresenceDCI_1_2_r16; /**< ASN.1 antennaPortsFieldPresenceDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16; /**< aperiodicZP-CSI-RS-ResourceSetsToAddModListDCI-1-2-r16 是否存在。 */
    ZP_CSI_RS_ResourceSet* aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_items; /**< ASN.1 aperiodicZP-CSI-RS-ResourceSetsToAddModListDCI-1-2-r16；SEQUENCE OF ZP_CSI_RS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodicZP_CSI_RS_ResourceSetsToAddModListDCI_1_2_r16_count; /**< aperiodicZP-CSI-RS-ResourceSetsToAddModListDCI-1-2-r16 元素个数。 */
    bool has_aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16; /**< aperiodicZP-CSI-RS-ResourceSetsToReleaseListDCI-1-2-r16 是否存在。 */
    ZP_CSI_RS_ResourceSetId* aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_items; /**< ASN.1 aperiodicZP-CSI-RS-ResourceSetsToReleaseListDCI-1-2-r16；SEQUENCE OF ZP_CSI_RS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodicZP_CSI_RS_ResourceSetsToReleaseListDCI_1_2_r16_count; /**< aperiodicZP-CSI-RS-ResourceSetsToReleaseListDCI-1-2-r16 元素个数。 */
    bool has_dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16; /**< dmrs-DownlinkForPDSCH-MappingTypeA-DCI-1-2-r16 是否存在。 */
    SetupRelease_DMRS_DownlinkConfig dmrs_DownlinkForPDSCH_MappingTypeA_DCI_1_2_r16; /**< ASN.1 dmrs-DownlinkForPDSCH-MappingTypeA-DCI-1-2-r16；结构体；OPTIONAL。 */
    bool has_dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16; /**< dmrs-DownlinkForPDSCH-MappingTypeB-DCI-1-2-r16 是否存在。 */
    SetupRelease_DMRS_DownlinkConfig dmrs_DownlinkForPDSCH_MappingTypeB_DCI_1_2_r16; /**< ASN.1 dmrs-DownlinkForPDSCH-MappingTypeB-DCI-1-2-r16；结构体；OPTIONAL。 */
    bool has_dmrs_SequenceInitializationDCI_1_2_r16; /**< dmrs-SequenceInitializationDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_1_2_r16 dmrs_SequenceInitializationDCI_1_2_r16; /**< ASN.1 dmrs-SequenceInitializationDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_1_2_r16; /**< harq-ProcessNumberSizeDCI-1-2-r16 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_1_2_r16; /**< ASN.1 harq-ProcessNumberSizeDCI-1-2-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_mcs_TableDCI_1_2_r16; /**< mcs-TableDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Mcs_TableDCI_1_2_r16 mcs_TableDCI_1_2_r16; /**< ASN.1 mcs-TableDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_numberOfBitsForRV_DCI_1_2_r16; /**< numberOfBitsForRV-DCI-1-2-r16 是否存在。 */
    int64_t numberOfBitsForRV_DCI_1_2_r16; /**< ASN.1 numberOfBitsForRV-DCI-1-2-r16；INTEGER (0..2)，位宽 2 bit；OPTIONAL。 */
    bool has_pdsch_TimeDomainAllocationListDCI_1_2_r16; /**< pdsch-TimeDomainAllocationListDCI-1-2-r16 是否存在。 */
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16 pdsch_TimeDomainAllocationListDCI_1_2_r16; /**< ASN.1 pdsch-TimeDomainAllocationListDCI-1-2-r16；结构体；OPTIONAL。 */
    bool has_prb_BundlingTypeDCI_1_2_r16; /**< prb-BundlingTypeDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Prb_BundlingTypeDCI_1_2_r16 prb_BundlingTypeDCI_1_2_r16; /**< ASN.1 prb-BundlingTypeDCI-1-2-r16；结构体；OPTIONAL。 */
    bool has_priorityIndicatorDCI_1_2_r16; /**< priorityIndicatorDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_2_r16 priorityIndicatorDCI_1_2_r16; /**< ASN.1 priorityIndicatorDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_rateMatchPatternGroup1DCI_1_2_r16; /**< rateMatchPatternGroup1DCI-1-2-r16 是否存在。 */
    RateMatchPatternGroup rateMatchPatternGroup1DCI_1_2_r16; /**< ASN.1 rateMatchPatternGroup1DCI-1-2-r16；SEQUENCE OF RateMatchPatternGroup_Item，SIZE (1..8)；OPTIONAL。 */
    bool has_rateMatchPatternGroup2DCI_1_2_r16; /**< rateMatchPatternGroup2DCI-1-2-r16 是否存在。 */
    RateMatchPatternGroup rateMatchPatternGroup2DCI_1_2_r16; /**< ASN.1 rateMatchPatternGroup2DCI-1-2-r16；SEQUENCE OF RateMatchPatternGroup_Item，SIZE (1..8)；OPTIONAL。 */
    bool has_resourceAllocationType1GranularityDCI_1_2_r16; /**< resourceAllocationType1GranularityDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_1_2_r16 resourceAllocationType1GranularityDCI_1_2_r16; /**< ASN.1 resourceAllocationType1GranularityDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_vrb_ToPRB_InterleaverDCI_1_2_r16; /**< vrb-ToPRB-InterleaverDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_Vrb_ToPRB_InterleaverDCI_1_2_r16 vrb_ToPRB_InterleaverDCI_1_2_r16; /**< ASN.1 vrb-ToPRB-InterleaverDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_referenceOfSLIVDCI_1_2_r16; /**< referenceOfSLIVDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_ReferenceOfSLIVDCI_1_2_r16 referenceOfSLIVDCI_1_2_r16; /**< ASN.1 referenceOfSLIVDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_resourceAllocationDCI_1_2_r16; /**< resourceAllocationDCI-1-2-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_ResourceAllocationDCI_1_2_r16 resourceAllocationDCI_1_2_r16; /**< ASN.1 resourceAllocationDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_priorityIndicatorDCI_1_1_r16; /**< priorityIndicatorDCI-1-1-r16 是否存在。 */
    PDSCH_Config_ExtGroup1_PriorityIndicatorDCI_1_1_r16 priorityIndicatorDCI_1_1_r16; /**< ASN.1 priorityIndicatorDCI-1-1-r16；枚举；OPTIONAL。 */
    bool has_dataScramblingIdentityPDSCH2_r16; /**< dataScramblingIdentityPDSCH2-r16 是否存在。 */
    int64_t dataScramblingIdentityPDSCH2_r16; /**< ASN.1 dataScramblingIdentityPDSCH2-r16；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_pdsch_TimeDomainAllocationList_r16; /**< pdsch-TimeDomainAllocationList-r16 是否存在。 */
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_r16 pdsch_TimeDomainAllocationList_r16; /**< ASN.1 pdsch-TimeDomainAllocationList-r16；结构体；OPTIONAL。 */
    bool has_repetitionSchemeConfig_r16; /**< repetitionSchemeConfig-r16 是否存在。 */
    SetupRelease_RepetitionSchemeConfig_r16 repetitionSchemeConfig_r16; /**< ASN.1 repetitionSchemeConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SlotBased_v1630
 * @note ASN.1：SlotBased-v1630；源文件第 11221 行。
 * @note SlotBased-v1630 ::= SEQUENCE { tciMapping-r16, sequenceOffsetForRV-r16 }
 */
struct SlotBased_v1630 {
    SlotBased_v1630_TciMapping_r16 tciMapping_r16; /**< ASN.1 tciMapping-r16；枚举。 */
    int64_t sequenceOffsetForRV_r16; /**< ASN.1 sequenceOffsetForRV-r16；INTEGER (0)，单值 0 bit。 */
};


/**
 * @brief SetupRelease_SlotBased_v1630
 * @note ASN.1：SetupRelease<SlotBased-v1630>；源文件第 11208 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SlotBased_v1630_Tag {
    SetupRelease_SlotBased_v1630_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SlotBased_v1630_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SlotBased_v1630_Tag;

struct SetupRelease_SlotBased_v1630 {
    SetupRelease_SlotBased_v1630_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SlotBased_v1630 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief RepetitionSchemeConfig_v1630
 * @note ASN.1：RepetitionSchemeConfig-v1630；源文件第 11207 行。
 * @note RepetitionSchemeConfig-v1630 ::= SEQUENCE { slotBased-v1630 }
 */
struct RepetitionSchemeConfig_v1630 {
    SetupRelease_SlotBased_v1630 slotBased_v1630; /**< ASN.1 slotBased-v1630；结构体。 */
};


/**
 * @brief SetupRelease_RepetitionSchemeConfig_v1630
 * @note ASN.1：SetupRelease<RepetitionSchemeConfig-v1630>；源文件第 9487 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RepetitionSchemeConfig_v1630_Tag {
    SetupRelease_RepetitionSchemeConfig_v1630_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RepetitionSchemeConfig_v1630_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RepetitionSchemeConfig_v1630_Tag;

struct SetupRelease_RepetitionSchemeConfig_v1630 {
    SetupRelease_RepetitionSchemeConfig_v1630_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RepetitionSchemeConfig_v1630 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_ExtGroup2
 * @note ASN.1：PDSCH_Config_ExtGroup2；源文件第 9486 行。
 */
struct PDSCH_Config_ExtGroup2 {
    bool has_repetitionSchemeConfig_v1630; /**< repetitionSchemeConfig-v1630 是否存在。 */
    SetupRelease_RepetitionSchemeConfig_v1630 repetitionSchemeConfig_v1630; /**< ASN.1 repetitionSchemeConfig-v1630；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellAndBWP_Id_r17
 * @note ASN.1：ServingCellAndBWP-Id-r17；源文件第 12398 行。
 * @note ServingCellAndBWP-Id-r17 ::= SEQUENCE { servingcell-r17, bwp-r17 }
 */
struct ServingCellAndBWP_Id_r17 {
    ServCellIndex servingcell_r17; /**< ASN.1 servingcell-r17；INTEGER (0..31)，位宽 5 bit。 */
    BWP_Id bwp_r17; /**< ASN.1 bwp-r17；INTEGER (0..4)，位宽 3 bit。 */
};


/**
 * @brief PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist
 * @note ASN.1：dl-OrJointTCI-StateList-r17/explicitlist；源文件第 9496 行。
 * @note SEQUENCE { dl-OrJointTCI-StateToAddModList-r17, dl-OrJointTCI-StateToReleaseL...
 */
struct PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist {
    bool has_dl_OrJointTCI_StateToAddModList_r17; /**< dl-OrJointTCI-StateToAddModList-r17 是否存在。 */
    TCI_State* dl_OrJointTCI_StateToAddModList_r17_items; /**< ASN.1 dl-OrJointTCI-StateToAddModList-r17；SEQUENCE OF TCI_State，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dl_OrJointTCI_StateToAddModList_r17_count; /**< dl-OrJointTCI-StateToAddModList-r17 元素个数。 */
    bool has_dl_OrJointTCI_StateToReleaseList_r17; /**< dl-OrJointTCI-StateToReleaseList-r17 是否存在。 */
    TCI_StateId* dl_OrJointTCI_StateToReleaseList_r17_items; /**< ASN.1 dl-OrJointTCI-StateToReleaseList-r17；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dl_OrJointTCI_StateToReleaseList_r17_count; /**< dl-OrJointTCI-StateToReleaseList-r17 元素个数。 */
};


/**
 * @brief PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17
 * @note ASN.1：dl-OrJointTCI-StateList-r17；源文件第 9495 行。
 * @note CHOICE { explicitlist, unifiedTCI-StateRef-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag {
    PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_explicitlist = 0, /**< ASN.1 explicitlist */
    PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag_unifiedTCI_StateRef_r17 = 1, /**< ASN.1 unifiedTCI-StateRef-r17 */
} PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag;

struct PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17 {
    PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17_Explicitlist explicitlist; /**< ASN.1 explicitlist */
        ServingCellAndBWP_Id_r17 unifiedTCI_StateRef_r17; /**< ASN.1 unifiedTCI-StateRef-r17 */
    } u;
};


/**
 * @brief Dummy_TDRA_List
 * @note ASN.1：Dummy-TDRA-List；源文件第 9614 行。
 * @note Dummy-TDRA-List ::= SEQUENCE OF (size 1..16) OF MultiPDSCH-TDRA-r17
 */
struct Dummy_TDRA_List {
    MultiPDSCH_TDRA_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_Dummy_TDRA_List
 * @note ASN.1：SetupRelease<Dummy-TDRA-List>；源文件第 9506 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_Dummy_TDRA_List_Tag {
    SetupRelease_Dummy_TDRA_List_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_Dummy_TDRA_List_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_Dummy_TDRA_List_Tag;

struct SetupRelease_Dummy_TDRA_List {
    SetupRelease_Dummy_TDRA_List_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        Dummy_TDRA_List setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MinSchedulingOffsetK0_Values_r17
 * @note ASN.1：MinSchedulingOffsetK0-Values-r17；源文件第 9533 行。
 * @note MinSchedulingOffsetK0-Values-r17 ::= SEQUENCE OF (size 1..2) OF MinSchedulingOffsetK0ValuesR17Item
 */
struct MinSchedulingOffsetK0_Values_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_MinSchedulingOffsetK0_Values_r17
 * @note ASN.1：SetupRelease<MinSchedulingOffsetK0-Values-r17>；源文件第 9508 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag {
    SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag;

struct SetupRelease_MinSchedulingOffsetK0_Values_r17 {
    SetupRelease_MinSchedulingOffsetK0_Values_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MinSchedulingOffsetK0_Values_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_ExtGroup3
 * @note ASN.1：PDSCH_Config_ExtGroup3；源文件第 9489 行。
 */
struct PDSCH_Config_ExtGroup3 {
    bool has_pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17; /**< pdsch-HARQ-ACK-OneShotFeedbackDCI-1-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17 pdsch_HARQ_ACK_OneShotFeedbackDCI_1_2_r17; /**< ASN.1 pdsch-HARQ-ACK-OneShotFeedbackDCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_EnhType3DCI_1_2_r17; /**< pdsch-HARQ-ACK-EnhType3DCI-1-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_1_2_r17 pdsch_HARQ_ACK_EnhType3DCI_1_2_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3DCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17; /**< pdsch-HARQ-ACK-EnhType3DCI-Field-1-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17 pdsch_HARQ_ACK_EnhType3DCI_Field_1_2_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3DCI-Field-1-2-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_RetxDCI_1_2_r17; /**< pdsch-HARQ-ACK-RetxDCI-1-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Pdsch_HARQ_ACK_RetxDCI_1_2_r17 pdsch_HARQ_ACK_RetxDCI_1_2_r17; /**< ASN.1 pdsch-HARQ-ACK-RetxDCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_pucch_sSCellDynDCI_1_2_r17; /**< pucch-sSCellDynDCI-1-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Pucch_sSCellDynDCI_1_2_r17 pucch_sSCellDynDCI_1_2_r17; /**< ASN.1 pucch-sSCellDynDCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_dl_OrJointTCI_StateList_r17; /**< dl-OrJointTCI-StateList-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Dl_OrJointTCI_StateList_r17 dl_OrJointTCI_StateList_r17; /**< ASN.1 dl-OrJointTCI-StateList-r17；结构体；OPTIONAL。 */
    bool has_beamAppTime_r17; /**< beamAppTime-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_BeamAppTime_r17 beamAppTime_r17; /**< ASN.1 beamAppTime-r17；枚举；OPTIONAL。 */
    bool has_dummy; /**< dummy 是否存在。 */
    SetupRelease_Dummy_TDRA_List dummy; /**< ASN.1 dummy；结构体；OPTIONAL。 */
    bool has_dmrs_FD_OCC_DisabledForRank1_PDSCH_r17; /**< dmrs-FD-OCC-DisabledForRank1-PDSCH-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Dmrs_FD_OCC_DisabledForRank1_PDSCH_r17 dmrs_FD_OCC_DisabledForRank1_PDSCH_r17; /**< ASN.1 dmrs-FD-OCC-DisabledForRank1-PDSCH-r17；枚举；OPTIONAL。 */
    bool has_minimumSchedulingOffsetK0_r17; /**< minimumSchedulingOffsetK0-r17 是否存在。 */
    SetupRelease_MinSchedulingOffsetK0_Values_r17 minimumSchedulingOffsetK0_r17; /**< ASN.1 minimumSchedulingOffsetK0-r17；结构体；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_1_2_v1700; /**< harq-ProcessNumberSizeDCI-1-2-v1700 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_1_2_v1700; /**< ASN.1 harq-ProcessNumberSizeDCI-1-2-v1700；INTEGER (0..5)，位宽 3 bit；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_1_1_r17; /**< harq-ProcessNumberSizeDCI-1-1-r17 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_1_1_r17; /**< ASN.1 harq-ProcessNumberSizeDCI-1-1-r17；INTEGER (5)，单值 0 bit；OPTIONAL。 */
    bool has_mcs_Table_r17; /**< mcs-Table-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Mcs_Table_r17 mcs_Table_r17; /**< ASN.1 mcs-Table-r17；枚举；OPTIONAL。 */
    bool has_mcs_TableDCI_1_2_r17; /**< mcs-TableDCI-1-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_Mcs_TableDCI_1_2_r17 mcs_TableDCI_1_2_r17; /**< ASN.1 mcs-TableDCI-1-2-r17；枚举；OPTIONAL。 */
    bool has_xOverheadMulticast_r17; /**< xOverheadMulticast-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_XOverheadMulticast_r17 xOverheadMulticast_r17; /**< ASN.1 xOverheadMulticast-r17；枚举；OPTIONAL。 */
    bool has_priorityIndicatorDCI_4_2_r17; /**< priorityIndicatorDCI-4-2-r17 是否存在。 */
    PDSCH_Config_ExtGroup3_PriorityIndicatorDCI_4_2_r17 priorityIndicatorDCI_4_2_r17; /**< ASN.1 priorityIndicatorDCI-4-2-r17；枚举；OPTIONAL。 */
    bool has_sizeDCI_4_2_r17; /**< sizeDCI-4-2-r17 是否存在。 */
    int64_t sizeDCI_4_2_r17; /**< ASN.1 sizeDCI-4-2-r17；INTEGER (20..140)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief MultiPDSCH_TDRA_List_r17
 * @note ASN.1：MultiPDSCH-TDRA-List-r17；源文件第 9616 行。
 * @note MultiPDSCH-TDRA-List-r17 ::= SEQUENCE OF (size 1..64) OF MultiPDSCH-TDRA-r17
 */
struct MultiPDSCH_TDRA_List_r17 {
    MultiPDSCH_TDRA_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_MultiPDSCH_TDRA_List_r17
 * @note ASN.1：SetupRelease<MultiPDSCH-TDRA-List-r17>；源文件第 9518 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MultiPDSCH_TDRA_List_r17_Tag {
    SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MultiPDSCH_TDRA_List_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MultiPDSCH_TDRA_List_r17_Tag;

struct SetupRelease_MultiPDSCH_TDRA_List_r17 {
    SetupRelease_MultiPDSCH_TDRA_List_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MultiPDSCH_TDRA_List_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_ExtGroup4
 * @note ASN.1：PDSCH_Config_ExtGroup4；源文件第 9517 行。
 */
struct PDSCH_Config_ExtGroup4 {
    bool has_pdsch_TimeDomainAllocationListForMultiPDSCH_r17; /**< pdsch-TimeDomainAllocationListForMultiPDSCH-r17 是否存在。 */
    SetupRelease_MultiPDSCH_TDRA_List_r17 pdsch_TimeDomainAllocationListForMultiPDSCH_r17; /**< ASN.1 pdsch-TimeDomainAllocationListForMultiPDSCH-r17；结构体；OPTIONAL。 */
};


/**
 * @brief AdvancedReceiver_MU_MIMO_r18
 * @note ASN.1：AdvancedReceiver-MU-MIMO-r18；源文件第 4263 行。
 * @note AdvancedReceiver-MU-MIMO-r18 ::= SEQUENCE { precodingAndResourceAllocation-r18, dmrsPowerBoosting-r18, pdsch-T...
 */
struct AdvancedReceiver_MU_MIMO_r18 {
    bool has_precodingAndResourceAllocation_r18; /**< precodingAndResourceAllocation-r18 是否存在。 */
    bool precodingAndResourceAllocation_r18; /**< ASN.1 precodingAndResourceAllocation-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_dmrsPowerBoosting_r18; /**< dmrsPowerBoosting-r18 是否存在。 */
    bool dmrsPowerBoosting_r18; /**< ASN.1 dmrsPowerBoosting-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_pdsch_TimeDomainAllocation_r18; /**< pdsch-TimeDomainAllocation-r18 是否存在。 */
    bool pdsch_TimeDomainAllocation_r18; /**< ASN.1 pdsch-TimeDomainAllocation-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_mcs_Table_r18; /**< mcs-Table-r18 是否存在。 */
    AdvancedReceiver_MU_MIMO_r18_Mcs_Table_r18 mcs_Table_r18; /**< ASN.1 mcs-Table-r18；枚举；OPTIONAL。 */
    bool has_advReceiver_MU_MIMO_DCI_1_1_r18; /**< advReceiver-MU-MIMO-DCI-1-1-r18 是否存在。 */
    AdvancedReceiver_MU_MIMO_r18_AdvReceiver_MU_MIMO_DCI_1_1_r18 advReceiver_MU_MIMO_DCI_1_1_r18; /**< ASN.1 advReceiver-MU-MIMO-DCI-1-1-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_AdvancedReceiver_MU_MIMO_r18
 * @note ASN.1：SetupRelease<AdvancedReceiver-MU-MIMO-r18>；源文件第 9521 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag {
    SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag;

struct SetupRelease_AdvancedReceiver_MU_MIMO_r18 {
    SetupRelease_AdvancedReceiver_MU_MIMO_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        AdvancedReceiver_MU_MIMO_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_ConfigDCI_1_3_r18
 * @note ASN.1：PDSCH-ConfigDCI-1-3-r18；源文件第 9537 行。
 * @note PDSCH-ConfigDCI-1-3-r18 ::= SEQUENCE { resourceAllocationDCI-1-3-r18, rbg-SizeDCI-1-3-r18, resourceAlloca...
 */
struct PDSCH_ConfigDCI_1_3_r18 {
    bool has_resourceAllocationDCI_1_3_r18; /**< resourceAllocationDCI-1-3-r18 是否存在。 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationDCI_1_3_r18 resourceAllocationDCI_1_3_r18; /**< ASN.1 resourceAllocationDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_rbg_SizeDCI_1_3_r18; /**< rbg-SizeDCI-1-3-r18 是否存在。 */
    PDSCH_ConfigDCI_1_3_r18_Rbg_SizeDCI_1_3_r18 rbg_SizeDCI_1_3_r18; /**< ASN.1 rbg-SizeDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_resourceAllocationType1GranularityDCI_1_3_r18; /**< resourceAllocationType1GranularityDCI-1-3-r18 是否存在。 */
    PDSCH_ConfigDCI_1_3_r18_ResourceAllocationType1GranularityDCI_1_3_r18 resourceAllocationType1GranularityDCI_1_3_r18; /**< ASN.1 resourceAllocationType1GranularityDCI-1-3-r18；枚举；OPTIONAL。 */
    bool has_numberOfBitsForRV_DCI_1_3_r18; /**< numberOfBitsForRV-DCI-1-3-r18 是否存在。 */
    int64_t numberOfBitsForRV_DCI_1_3_r18; /**< ASN.1 numberOfBitsForRV-DCI-1-3-r18；INTEGER (0..2)，位宽 2 bit；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_1_3_r18; /**< harq-ProcessNumberSizeDCI-1-3-r18 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_1_3_r18; /**< ASN.1 harq-ProcessNumberSizeDCI-1-3-r18；INTEGER (0..5)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PDSCH_ConfigDCI_1_3_r18
 * @note ASN.1：SetupRelease<PDSCH-ConfigDCI-1-3-r18>；源文件第 9522 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag {
    SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag;

struct SetupRelease_PDSCH_ConfigDCI_1_3_r18 {
    SetupRelease_PDSCH_ConfigDCI_1_3_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_ConfigDCI_1_3_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_ExtGroup5
 * @note ASN.1：PDSCH_Config_ExtGroup5；源文件第 9520 行。
 */
struct PDSCH_Config_ExtGroup5 {
    bool has_advancedReceiver_MU_MIMO_r18; /**< advancedReceiver-MU-MIMO-r18 是否存在。 */
    SetupRelease_AdvancedReceiver_MU_MIMO_r18 advancedReceiver_MU_MIMO_r18; /**< ASN.1 advancedReceiver-MU-MIMO-r18；结构体；OPTIONAL。 */
    bool has_pdsch_ConfigDCI_1_3_r18; /**< pdsch-ConfigDCI-1-3-r18 是否存在。 */
    SetupRelease_PDSCH_ConfigDCI_1_3_r18 pdsch_ConfigDCI_1_3_r18; /**< ASN.1 pdsch-ConfigDCI-1-3-r18；结构体；OPTIONAL。 */
};


/**
 * @brief PDSCH_TimeDomainResourceAllocationList
 * @note ASN.1：PDSCH-TimeDomainResourceAllocationList；源文件第 9590 行。
 * @note PDSCH-TimeDomainResourceAllocationList ::= SEQUENCE OF (size 1..16) OF PDSCH-TimeDomainResourceAllocation
 */
struct PDSCH_TimeDomainResourceAllocationList {
    PDSCH_TimeDomainResourceAllocation* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PDSCH_TimeDomainResourceAllocationList
 * @note ASN.1：SetupRelease<PDSCH-TimeDomainResourceAllocationList>；源文件第 9409 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag {
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag;

struct SetupRelease_PDSCH_TimeDomainResourceAllocationList {
    SetupRelease_PDSCH_TimeDomainResourceAllocationList_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_TimeDomainResourceAllocationList setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config_Prb_BundlingType_StaticBundling
 * @note ASN.1：prb-BundlingType/staticBundling；源文件第 9421 行。
 * @note SEQUENCE { bundleSize }
 */
struct PDSCH_Config_Prb_BundlingType_StaticBundling {
    bool has_bundleSize; /**< bundleSize 是否存在。 */
    PDSCH_Config_Prb_BundlingType_StaticBundling_BundleSize bundleSize; /**< ASN.1 bundleSize；枚举；OPTIONAL。 */
};


/**
 * @brief PDSCH_Config_Prb_BundlingType_DynamicBundling
 * @note ASN.1：prb-BundlingType/dynamicBundling；源文件第 9424 行。
 * @note SEQUENCE { bundleSizeSet1, bundleSizeSet2 }
 */
struct PDSCH_Config_Prb_BundlingType_DynamicBundling {
    bool has_bundleSizeSet1; /**< bundleSizeSet1 是否存在。 */
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet1 bundleSizeSet1; /**< ASN.1 bundleSizeSet1；枚举；OPTIONAL。 */
    bool has_bundleSizeSet2; /**< bundleSizeSet2 是否存在。 */
    PDSCH_Config_Prb_BundlingType_DynamicBundling_BundleSizeSet2 bundleSizeSet2; /**< ASN.1 bundleSizeSet2；枚举；OPTIONAL。 */
};


/**
 * @brief PDSCH_Config_Prb_BundlingType
 * @note ASN.1：prb-BundlingType；源文件第 9420 行。
 * @note CHOICE { staticBundling, dynamicBundling }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PDSCH_Config_Prb_BundlingType_Tag {
    PDSCH_Config_Prb_BundlingType_Tag_staticBundling = 0, /**< ASN.1 staticBundling */
    PDSCH_Config_Prb_BundlingType_Tag_dynamicBundling = 1, /**< ASN.1 dynamicBundling */
} PDSCH_Config_Prb_BundlingType_Tag;

struct PDSCH_Config_Prb_BundlingType {
    PDSCH_Config_Prb_BundlingType_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PDSCH_Config_Prb_BundlingType_StaticBundling staticBundling; /**< ASN.1 staticBundling */
        PDSCH_Config_Prb_BundlingType_DynamicBundling dynamicBundling; /**< ASN.1 dynamicBundling */
    } u;
};


/**
 * @brief ZP_CSI_RS_ResourceSet
 * @note ASN.1：ZP-CSI-RS-ResourceSet；源文件第 14100 行。
 * @note ZP-CSI-RS-ResourceSet ::= SEQUENCE { zp-CSI-RS-ResourceSetId, zp-CSI-RS-ResourceIdList }
 */
struct ZP_CSI_RS_ResourceSet {
    ZP_CSI_RS_ResourceSetId zp_CSI_RS_ResourceSetId; /**< ASN.1 zp-CSI-RS-ResourceSetId；INTEGER (0..15)，位宽 4 bit。 */
    ZP_CSI_RS_ResourceId* zp_CSI_RS_ResourceIdList_items; /**< ASN.1 zp-CSI-RS-ResourceIdList；SEQUENCE OF ZP_CSI_RS_ResourceId，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t zp_CSI_RS_ResourceIdList_count; /**< zp-CSI-RS-ResourceIdList 元素个数。 */
};


/**
 * @brief SetupRelease_ZP_CSI_RS_ResourceSet
 * @note ASN.1：SetupRelease<ZP-CSI-RS-ResourceSet>；源文件第 9441 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_ZP_CSI_RS_ResourceSet_Tag {
    SetupRelease_ZP_CSI_RS_ResourceSet_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_ZP_CSI_RS_ResourceSet_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_ZP_CSI_RS_ResourceSet_Tag;

struct SetupRelease_ZP_CSI_RS_ResourceSet {
    SetupRelease_ZP_CSI_RS_ResourceSet_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        ZP_CSI_RS_ResourceSet setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_Config
 * @note ASN.1：PDSCH-Config；源文件第 9400 行。
 * @note PDSCH-Config ::= SEQUENCE { dataScramblingIdentityPDSCH, dmrs-DownlinkForPDSCH-MappingTypeA, d...
 */
struct PDSCH_Config {
    bool has_dataScramblingIdentityPDSCH; /**< dataScramblingIdentityPDSCH 是否存在。 */
    int64_t dataScramblingIdentityPDSCH; /**< ASN.1 dataScramblingIdentityPDSCH；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_dmrs_DownlinkForPDSCH_MappingTypeA; /**< dmrs-DownlinkForPDSCH-MappingTypeA 是否存在。 */
    SetupRelease_DMRS_DownlinkConfig dmrs_DownlinkForPDSCH_MappingTypeA; /**< ASN.1 dmrs-DownlinkForPDSCH-MappingTypeA；结构体；OPTIONAL。 */
    bool has_dmrs_DownlinkForPDSCH_MappingTypeB; /**< dmrs-DownlinkForPDSCH-MappingTypeB 是否存在。 */
    SetupRelease_DMRS_DownlinkConfig dmrs_DownlinkForPDSCH_MappingTypeB; /**< ASN.1 dmrs-DownlinkForPDSCH-MappingTypeB；结构体；OPTIONAL。 */
    bool has_tci_StatesToAddModList; /**< tci-StatesToAddModList 是否存在。 */
    TCI_State* tci_StatesToAddModList_items; /**< ASN.1 tci-StatesToAddModList；SEQUENCE OF TCI_State，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tci_StatesToAddModList_count; /**< tci-StatesToAddModList 元素个数。 */
    bool has_tci_StatesToReleaseList; /**< tci-StatesToReleaseList 是否存在。 */
    TCI_StateId* tci_StatesToReleaseList_items; /**< ASN.1 tci-StatesToReleaseList；SEQUENCE OF TCI_StateId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tci_StatesToReleaseList_count; /**< tci-StatesToReleaseList 元素个数。 */
    bool has_vrb_ToPRB_Interleaver; /**< vrb-ToPRB-Interleaver 是否存在。 */
    PDSCH_Config_Vrb_ToPRB_Interleaver vrb_ToPRB_Interleaver; /**< ASN.1 vrb-ToPRB-Interleaver；枚举；OPTIONAL。 */
    PDSCH_Config_ResourceAllocation resourceAllocation; /**< ASN.1 resourceAllocation；枚举。 */
    bool has_pdsch_TimeDomainAllocationList; /**< pdsch-TimeDomainAllocationList 是否存在。 */
    SetupRelease_PDSCH_TimeDomainResourceAllocationList pdsch_TimeDomainAllocationList; /**< ASN.1 pdsch-TimeDomainAllocationList；结构体；OPTIONAL。 */
    bool has_pdsch_AggregationFactor; /**< pdsch-AggregationFactor 是否存在。 */
    PDSCH_Config_Pdsch_AggregationFactor pdsch_AggregationFactor; /**< ASN.1 pdsch-AggregationFactor；枚举；OPTIONAL。 */
    bool has_rateMatchPatternToAddModList; /**< rateMatchPatternToAddModList 是否存在。 */
    RateMatchPattern* rateMatchPatternToAddModList_items; /**< ASN.1 rateMatchPatternToAddModList；SEQUENCE OF RateMatchPattern，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToAddModList_count; /**< rateMatchPatternToAddModList 元素个数。 */
    bool has_rateMatchPatternToReleaseList; /**< rateMatchPatternToReleaseList 是否存在。 */
    RateMatchPatternId* rateMatchPatternToReleaseList_items; /**< ASN.1 rateMatchPatternToReleaseList；SEQUENCE OF RateMatchPatternId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToReleaseList_count; /**< rateMatchPatternToReleaseList 元素个数。 */
    bool has_rateMatchPatternGroup1; /**< rateMatchPatternGroup1 是否存在。 */
    RateMatchPatternGroup rateMatchPatternGroup1; /**< ASN.1 rateMatchPatternGroup1；SEQUENCE OF RateMatchPatternGroup_Item，SIZE (1..8)；OPTIONAL。 */
    bool has_rateMatchPatternGroup2; /**< rateMatchPatternGroup2 是否存在。 */
    RateMatchPatternGroup rateMatchPatternGroup2; /**< ASN.1 rateMatchPatternGroup2；SEQUENCE OF RateMatchPatternGroup_Item，SIZE (1..8)；OPTIONAL。 */
    PDSCH_Config_Rbg_Size rbg_Size; /**< ASN.1 rbg-Size；枚举。 */
    bool has_mcs_Table; /**< mcs-Table 是否存在。 */
    PDSCH_Config_Mcs_Table mcs_Table; /**< ASN.1 mcs-Table；枚举；OPTIONAL。 */
    bool has_maxNrofCodeWordsScheduledByDCI; /**< maxNrofCodeWordsScheduledByDCI 是否存在。 */
    PDSCH_Config_MaxNrofCodeWordsScheduledByDCI maxNrofCodeWordsScheduledByDCI; /**< ASN.1 maxNrofCodeWordsScheduledByDCI；枚举；OPTIONAL。 */
    PDSCH_Config_Prb_BundlingType prb_BundlingType; /**< ASN.1 prb-BundlingType；结构体。 */
    bool has_zp_CSI_RS_ResourceToAddModList; /**< zp-CSI-RS-ResourceToAddModList 是否存在。 */
    ZP_CSI_RS_Resource* zp_CSI_RS_ResourceToAddModList_items; /**< ASN.1 zp-CSI-RS-ResourceToAddModList；SEQUENCE OF ZP_CSI_RS_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t zp_CSI_RS_ResourceToAddModList_count; /**< zp-CSI-RS-ResourceToAddModList 元素个数。 */
    bool has_zp_CSI_RS_ResourceToReleaseList; /**< zp-CSI-RS-ResourceToReleaseList 是否存在。 */
    ZP_CSI_RS_ResourceId* zp_CSI_RS_ResourceToReleaseList_items; /**< ASN.1 zp-CSI-RS-ResourceToReleaseList；SEQUENCE OF ZP_CSI_RS_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t zp_CSI_RS_ResourceToReleaseList_count; /**< zp-CSI-RS-ResourceToReleaseList 元素个数。 */
    bool has_aperiodic_ZP_CSI_RS_ResourceSetsToAddModList; /**< aperiodic-ZP-CSI-RS-ResourceSetsToAddModList 是否存在。 */
    ZP_CSI_RS_ResourceSet* aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_items; /**< ASN.1 aperiodic-ZP-CSI-RS-ResourceSetsToAddModList；SEQUENCE OF ZP_CSI_RS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodic_ZP_CSI_RS_ResourceSetsToAddModList_count; /**< aperiodic-ZP-CSI-RS-ResourceSetsToAddModList 元素个数。 */
    bool has_aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList; /**< aperiodic-ZP-CSI-RS-ResourceSetsToReleaseList 是否存在。 */
    ZP_CSI_RS_ResourceSetId* aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_items; /**< ASN.1 aperiodic-ZP-CSI-RS-ResourceSetsToReleaseList；SEQUENCE OF ZP_CSI_RS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList_count; /**< aperiodic-ZP-CSI-RS-ResourceSetsToReleaseList 元素个数。 */
    bool has_sp_ZP_CSI_RS_ResourceSetsToAddModList; /**< sp-ZP-CSI-RS-ResourceSetsToAddModList 是否存在。 */
    ZP_CSI_RS_ResourceSet* sp_ZP_CSI_RS_ResourceSetsToAddModList_items; /**< ASN.1 sp-ZP-CSI-RS-ResourceSetsToAddModList；SEQUENCE OF ZP_CSI_RS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sp_ZP_CSI_RS_ResourceSetsToAddModList_count; /**< sp-ZP-CSI-RS-ResourceSetsToAddModList 元素个数。 */
    bool has_sp_ZP_CSI_RS_ResourceSetsToReleaseList; /**< sp-ZP-CSI-RS-ResourceSetsToReleaseList 是否存在。 */
    ZP_CSI_RS_ResourceSetId* sp_ZP_CSI_RS_ResourceSetsToReleaseList_items; /**< ASN.1 sp-ZP-CSI-RS-ResourceSetsToReleaseList；SEQUENCE OF ZP_CSI_RS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sp_ZP_CSI_RS_ResourceSetsToReleaseList_count; /**< sp-ZP-CSI-RS-ResourceSetsToReleaseList 元素个数。 */
    bool has_p_ZP_CSI_RS_ResourceSet; /**< p-ZP-CSI-RS-ResourceSet 是否存在。 */
    SetupRelease_ZP_CSI_RS_ResourceSet p_ZP_CSI_RS_ResourceSet; /**< ASN.1 p-ZP-CSI-RS-ResourceSet；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDSCH_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDSCH_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PDSCH_Config_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    PDSCH_Config_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    PDSCH_Config_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PDSCH_Config
 * @note ASN.1：SetupRelease<PDSCH-Config>；源文件第 1328 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_Config_Tag {
    SetupRelease_PDSCH_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_Config_Tag;

struct SetupRelease_PDSCH_Config {
    SetupRelease_PDSCH_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BWP_DownlinkDedicatedSDT_r17
 * @note ASN.1：BWP-DownlinkDedicatedSDT-r17；源文件第 1326 行。
 * @note BWP-DownlinkDedicatedSDT-r17 ::= SEQUENCE { pdcch-Config-r17, pdsch-Config-r17 }
 */
struct BWP_DownlinkDedicatedSDT_r17 {
    bool has_pdcch_Config_r17; /**< pdcch-Config-r17 是否存在。 */
    SetupRelease_PDCCH_Config pdcch_Config_r17; /**< ASN.1 pdcch-Config-r17；结构体；OPTIONAL。 */
    bool has_pdsch_Config_r17; /**< pdsch-Config-r17 是否存在。 */
    SetupRelease_PDSCH_Config pdsch_Config_r17; /**< ASN.1 pdsch-Config-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ConfiguredGrantConfigToAddModList_r16
 * @note ASN.1：ConfiguredGrantConfigToAddModList-r16；源文件第 4685 行。
 * @note ConfiguredGrantConfigToAddModList-r16 ::= SEQUENCE OF (size 1..12) OF ConfiguredGrantConfig
 */
struct ConfiguredGrantConfigToAddModList_r16 {
    ConfiguredGrantConfig* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief ConfiguredGrantConfigToReleaseList_r16
 * @note ASN.1：ConfiguredGrantConfigToReleaseList-r16；源文件第 4687 行。
 * @note ConfiguredGrantConfigToReleaseList-r16 ::= SEQUENCE OF (size 1..12) OF ConfiguredGrantConfigIndex-r16
 */
struct ConfiguredGrantConfigToReleaseList_r16 {
    ConfiguredGrantConfigIndex_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SDM_Scheme_r18
 * @note ASN.1：SDM-Scheme-r18；源文件第 10430 行。
 * @note SDM-Scheme-r18 ::= SEQUENCE { maxRankSDM-r18, maxRankSDM-DCI-0-2-r18 }
 */
struct SDM_Scheme_r18 {
    bool has_maxRankSDM_r18; /**< maxRankSDM-r18 是否存在。 */
    int64_t maxRankSDM_r18; /**< ASN.1 maxRankSDM-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_maxRankSDM_DCI_0_2_r18; /**< maxRankSDM-DCI-0-2-r18 是否存在。 */
    int64_t maxRankSDM_DCI_0_2_r18; /**< ASN.1 maxRankSDM-DCI-0-2-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief SFN_Scheme_r18
 * @note ASN.1：SFN-Scheme-r18；源文件第 10436 行。
 * @note SFN-Scheme-r18 ::= SEQUENCE { maxRankSFN-r18, maxRankSFN-DCI-0-2-r18 }
 */
struct SFN_Scheme_r18 {
    bool has_maxRankSFN_r18; /**< maxRankSFN-r18 是否存在。 */
    int64_t maxRankSFN_r18; /**< ASN.1 maxRankSFN-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_maxRankSFN_DCI_0_2_r18; /**< maxRankSFN-DCI-0-2-r18 是否存在。 */
    int64_t maxRankSFN_DCI_0_2_r18; /**< ASN.1 maxRankSFN-DCI-0-2-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief CodebookTypeUL_r18
 * @note ASN.1：CodebookTypeUL-r18；源文件第 10442 行。
 * @note CodebookTypeUL-r18 ::= CHOICE { codebook1-r18, codebook2-r18, codebook3-r18, codebook4-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CodebookTypeUL_r18_Tag {
    CodebookTypeUL_r18_Tag_codebook1_r18 = 0, /**< ASN.1 codebook1-r18 */
    CodebookTypeUL_r18_Tag_codebook2_r18 = 1, /**< ASN.1 codebook2-r18 */
    CodebookTypeUL_r18_Tag_codebook3_r18 = 2, /**< ASN.1 codebook3-r18 */
    CodebookTypeUL_r18_Tag_codebook4_r18 = 3, /**< ASN.1 codebook4-r18 */
} CodebookTypeUL_r18_Tag;

struct CodebookTypeUL_r18 {
    CodebookTypeUL_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CodebookTypeUL_r18_Codebook1_r18 codebook1_r18; /**< ASN.1 codebook1-r18 */
        CodebookTypeUL_r18_Codebook2_r18 codebook2_r18; /**< ASN.1 codebook2-r18 */
        CodebookTypeUL_r18_Codebook3_r18 codebook3_r18; /**< ASN.1 codebook3-r18 */
        CodebookTypeUL_r18_Codebook4_r18 codebook4_r18; /**< ASN.1 codebook4-r18 */
    } u;
};


/**
 * @brief SetupRelease_CodebookTypeUL_r18
 * @note ASN.1：SetupRelease<CodebookTypeUL-r18>；源文件第 10362 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CodebookTypeUL_r18_Tag {
    SetupRelease_CodebookTypeUL_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CodebookTypeUL_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CodebookTypeUL_r18_Tag;

struct SetupRelease_CodebookTypeUL_r18 {
    SetupRelease_CodebookTypeUL_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CodebookTypeUL_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UCI_OnPUSCH_ListDCI_0_1_r16
 * @note ASN.1：UCI-OnPUSCH-ListDCI-0-1-r16；源文件第 10397 行。
 * @note UCI-OnPUSCH-ListDCI-0-1-r16 ::= SEQUENCE OF (size 1..2) OF UCI-OnPUSCH
 */
struct UCI_OnPUSCH_ListDCI_0_1_r16 {
    UCI_OnPUSCH* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16
 * @note ASN.1：SetupRelease<UCI-OnPUSCH-ListDCI-0-1-r16>；源文件第 10329 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag {
    SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag;

struct SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16 {
    SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UCI_OnPUSCH_ListDCI_0_1_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_ConfigDCI_0_3_r18
 * @note ASN.1：PUSCH-ConfigDCI-0-3-r18；源文件第 10449 行。
 * @note PUSCH-ConfigDCI-0-3-r18 ::= SEQUENCE { resourceAllocationDCI-0-3-r18, rbg-SizeDCI-0-3-r18, resourceAlloca...
 */
struct PUSCH_ConfigDCI_0_3_r18 {
    bool has_resourceAllocationDCI_0_3_r18; /**< resourceAllocationDCI-0-3-r18 是否存在。 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationDCI_0_3_r18 resourceAllocationDCI_0_3_r18; /**< ASN.1 resourceAllocationDCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_rbg_SizeDCI_0_3_r18; /**< rbg-SizeDCI-0-3-r18 是否存在。 */
    PUSCH_ConfigDCI_0_3_r18_Rbg_SizeDCI_0_3_r18 rbg_SizeDCI_0_3_r18; /**< ASN.1 rbg-SizeDCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_resourceAllocationType1GranularityDCI_0_3_r18; /**< resourceAllocationType1GranularityDCI-0-3-r18 是否存在。 */
    PUSCH_ConfigDCI_0_3_r18_ResourceAllocationType1GranularityDCI_0_3_r18 resourceAllocationType1GranularityDCI_0_3_r18; /**< ASN.1 resourceAllocationType1GranularityDCI-0-3-r18；枚举；OPTIONAL。 */
    bool has_numberOfBitsForRV_DCI_0_3_r18; /**< numberOfBitsForRV-DCI-0-3-r18 是否存在。 */
    int64_t numberOfBitsForRV_DCI_0_3_r18; /**< ASN.1 numberOfBitsForRV-DCI-0-3-r18；INTEGER (0..2)，位宽 2 bit；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_0_3_r18; /**< harq-ProcessNumberSizeDCI-0-3-r18 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_0_3_r18; /**< ASN.1 harq-ProcessNumberSizeDCI-0-3-r18；INTEGER (0..5)，位宽 3 bit；OPTIONAL。 */
    bool has_uci_OnPUSCH_ListDCI_0_3_r18; /**< uci-OnPUSCH-ListDCI-0-3-r18 是否存在。 */
    SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16 uci_OnPUSCH_ListDCI_0_3_r18; /**< ASN.1 uci-OnPUSCH-ListDCI-0-3-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PUSCH_ConfigDCI_0_3_r18
 * @note ASN.1：SetupRelease<PUSCH-ConfigDCI-0-3-r18>；源文件第 10366 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag {
    SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag;

struct SetupRelease_PUSCH_ConfigDCI_0_3_r18 {
    SetupRelease_PUSCH_ConfigDCI_0_3_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_ConfigDCI_0_3_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_Config_ExtGroup3
 * @note ASN.1：PUSCH_Config_ExtGroup3；源文件第 10357 行。
 */
struct PUSCH_Config_ExtGroup3 {
    bool has_maxRank_v1810; /**< maxRank-v1810 是否存在。 */
    int64_t maxRank_v1810; /**< ASN.1 maxRank-v1810；INTEGER (5..8)，位宽 2 bit；OPTIONAL。 */
    bool has_sTx_2Panel_r18; /**< sTx-2Panel-r18 是否存在。 */
    PUSCH_Config_ExtGroup3_STx_2Panel_r18 sTx_2Panel_r18; /**< ASN.1 sTx-2Panel-r18；枚举；OPTIONAL。 */
    bool has_multipanelSchemeSDM_r18; /**< multipanelSchemeSDM-r18 是否存在。 */
    SDM_Scheme_r18 multipanelSchemeSDM_r18; /**< ASN.1 multipanelSchemeSDM-r18；结构体；OPTIONAL。 */
    bool has_multipanelSchemeSFN_r18; /**< multipanelSchemeSFN-r18 是否存在。 */
    SFN_Scheme_r18 multipanelSchemeSFN_r18; /**< ASN.1 multipanelSchemeSFN-r18；结构体；OPTIONAL。 */
    bool has_codebookTypeUL_r18; /**< codebookTypeUL-r18 是否存在。 */
    SetupRelease_CodebookTypeUL_r18 codebookTypeUL_r18; /**< ASN.1 codebookTypeUL-r18；结构体；OPTIONAL。 */
    bool has_applyIndicatedTCI_State_r18; /**< applyIndicatedTCI-State-r18 是否存在。 */
    PUSCH_Config_ExtGroup3_ApplyIndicatedTCI_State_r18 applyIndicatedTCI_State_r18; /**< ASN.1 applyIndicatedTCI-State-r18；枚举；OPTIONAL。 */
    bool has_dynamicTransformPrecoderFieldPresenceDCI_0_1_r18; /**< dynamicTransformPrecoderFieldPresenceDCI-0-1-r18 是否存在。 */
    PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_1_r18 dynamicTransformPrecoderFieldPresenceDCI_0_1_r18; /**< ASN.1 dynamicTransformPrecoderFieldPresenceDCI-0-1-r18；枚举；OPTIONAL。 */
    bool has_dynamicTransformPrecoderFieldPresenceDCI_0_2_r18; /**< dynamicTransformPrecoderFieldPresenceDCI-0-2-r18 是否存在。 */
    PUSCH_Config_ExtGroup3_DynamicTransformPrecoderFieldPresenceDCI_0_2_r18 dynamicTransformPrecoderFieldPresenceDCI_0_2_r18; /**< ASN.1 dynamicTransformPrecoderFieldPresenceDCI-0-2-r18；枚举；OPTIONAL。 */
    bool has_pusch_ConfigDCI_0_3_r18; /**< pusch-ConfigDCI-0-3-r18 是否存在。 */
    SetupRelease_PUSCH_ConfigDCI_0_3_r18 pusch_ConfigDCI_0_3_r18; /**< ASN.1 pusch-ConfigDCI-0-3-r18；结构体；OPTIONAL。 */
};


/**
 * @brief InvalidSymbolPattern_r16_Symbols_r16
 * @note ASN.1：symbols-r16；源文件第 7027 行。
 * @note CHOICE { oneSlot, twoSlots }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum InvalidSymbolPattern_r16_Symbols_r16_Tag {
    InvalidSymbolPattern_r16_Symbols_r16_Tag_oneSlot = 0, /**< ASN.1 oneSlot */
    InvalidSymbolPattern_r16_Symbols_r16_Tag_twoSlots = 1, /**< ASN.1 twoSlots */
} InvalidSymbolPattern_r16_Symbols_r16_Tag;

struct InvalidSymbolPattern_r16_Symbols_r16 {
    InvalidSymbolPattern_r16_Symbols_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString oneSlot; /**< ASN.1 oneSlot */
        BitString twoSlots; /**< ASN.1 twoSlots */
    } u;
};


/**
 * @brief InvalidSymbolPattern_r16_PeriodicityAndPattern_r16
 * @note ASN.1：periodicityAndPattern-r16；源文件第 7031 行。
 * @note CHOICE { n2, n4, n5, n8, n10, n20, n40 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag {
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n2 = 0, /**< ASN.1 n2 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n4 = 1, /**< ASN.1 n4 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n5 = 2, /**< ASN.1 n5 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n8 = 3, /**< ASN.1 n8 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n10 = 4, /**< ASN.1 n10 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n20 = 5, /**< ASN.1 n20 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag_n40 = 6, /**< ASN.1 n40 */
} InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag;

struct InvalidSymbolPattern_r16_PeriodicityAndPattern_r16 {
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
 * @brief InvalidSymbolPattern_r16
 * @note ASN.1：InvalidSymbolPattern-r16；源文件第 7026 行。
 * @note InvalidSymbolPattern-r16 ::= SEQUENCE { symbols-r16, periodicityAndPattern-r16 }
 */
struct InvalidSymbolPattern_r16 {
    InvalidSymbolPattern_r16_Symbols_r16 symbols_r16; /**< ASN.1 symbols-r16；结构体。 */
    bool has_periodicityAndPattern_r16; /**< periodicityAndPattern-r16 是否存在。 */
    InvalidSymbolPattern_r16_PeriodicityAndPattern_r16 periodicityAndPattern_r16; /**< ASN.1 periodicityAndPattern-r16；结构体；OPTIONAL。 */
};


/**
 * @brief DMRS_UplinkConfig_ExtGroup1
 * @note ASN.1：DMRS_UplinkConfig_ExtGroup1；源文件第 6509 行。
 */
struct DMRS_UplinkConfig_ExtGroup1 {
    bool has_dmrs_TypeEnh_r18; /**< dmrs-TypeEnh-r18 是否存在。 */
    DMRS_UplinkConfig_ExtGroup1_Dmrs_TypeEnh_r18 dmrs_TypeEnh_r18; /**< ASN.1 dmrs-TypeEnh-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PTRS_UplinkConfig_ExtGroup1
 * @note ASN.1：PTRS_UplinkConfig_ExtGroup1；源文件第 9917 行。
 */
struct PTRS_UplinkConfig_ExtGroup1 {
    bool has_maxNrofPorts_SDM_r18; /**< maxNrofPorts-SDM-r18 是否存在。 */
    PTRS_UplinkConfig_ExtGroup1_MaxNrofPorts_SDM_r18 maxNrofPorts_SDM_r18; /**< ASN.1 maxNrofPorts-SDM-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PTRS_UplinkConfig_TransformPrecoderDisabled
 * @note ASN.1：transformPrecoderDisabled；源文件第 9905 行。
 * @note SEQUENCE { frequencyDensity, timeDensity, maxNrofPorts, resourceElementOffset...
 */
struct PTRS_UplinkConfig_TransformPrecoderDisabled {
    bool has_frequencyDensity; /**< frequencyDensity 是否存在。 */
    int64_t* frequencyDensity_items; /**< ASN.1 frequencyDensity；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t frequencyDensity_count; /**< frequencyDensity 元素个数。 */
    bool has_timeDensity; /**< timeDensity 是否存在。 */
    int64_t* timeDensity_items; /**< ASN.1 timeDensity；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t timeDensity_count; /**< timeDensity 元素个数。 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_MaxNrofPorts maxNrofPorts; /**< ASN.1 maxNrofPorts；枚举。 */
    bool has_resourceElementOffset; /**< resourceElementOffset 是否存在。 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_ResourceElementOffset resourceElementOffset; /**< ASN.1 resourceElementOffset；枚举；OPTIONAL。 */
    PTRS_UplinkConfig_TransformPrecoderDisabled_Ptrs_Power ptrs_Power; /**< ASN.1 ptrs-Power；枚举。 */
};


/**
 * @brief PTRS_UplinkConfig_TransformPrecoderEnabled
 * @note ASN.1：transformPrecoderEnabled；源文件第 9912 行。
 * @note SEQUENCE { sampleDensity, timeDensityTransformPrecoding }
 */
struct PTRS_UplinkConfig_TransformPrecoderEnabled {
    int64_t* sampleDensity_items; /**< ASN.1 sampleDensity；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sampleDensity_count; /**< sampleDensity 元素个数。 */
    bool has_timeDensityTransformPrecoding; /**< timeDensityTransformPrecoding 是否存在。 */
    PTRS_UplinkConfig_TransformPrecoderEnabled_TimeDensityTransformPrecoding timeDensityTransformPrecoding; /**< ASN.1 timeDensityTransformPrecoding；枚举；OPTIONAL。 */
};


/**
 * @brief PTRS_UplinkConfig
 * @note ASN.1：PTRS-UplinkConfig；源文件第 9904 行。
 * @note PTRS-UplinkConfig ::= SEQUENCE { transformPrecoderDisabled, transformPrecoderEnabled, maxNrofPorts-...
 */
struct PTRS_UplinkConfig {
    bool has_transformPrecoderDisabled; /**< transformPrecoderDisabled 是否存在。 */
    PTRS_UplinkConfig_TransformPrecoderDisabled transformPrecoderDisabled; /**< ASN.1 transformPrecoderDisabled；结构体；OPTIONAL。 */
    bool has_transformPrecoderEnabled; /**< transformPrecoderEnabled 是否存在。 */
    PTRS_UplinkConfig_TransformPrecoderEnabled transformPrecoderEnabled; /**< ASN.1 transformPrecoderEnabled；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PTRS_UplinkConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PTRS_UplinkConfig
 * @note ASN.1：SetupRelease<PTRS-UplinkConfig>；源文件第 6489 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PTRS_UplinkConfig_Tag {
    SetupRelease_PTRS_UplinkConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PTRS_UplinkConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PTRS_UplinkConfig_Tag;

struct SetupRelease_PTRS_UplinkConfig {
    SetupRelease_PTRS_UplinkConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PTRS_UplinkConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1
 * @note ASN.1：DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1；源文件第 6495 行。
 */
struct DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1 {
    bool has_dmrs_Uplink_r16; /**< dmrs-Uplink-r16 是否存在。 */
    DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1_Dmrs_Uplink_r16 dmrs_Uplink_r16; /**< ASN.1 dmrs-Uplink-r16；枚举；OPTIONAL。 */
};


/**
 * @brief DMRS_UplinkConfig_TransformPrecodingDisabled
 * @note ASN.1：transformPrecodingDisabled；源文件第 6491 行。
 * @note SEQUENCE { scramblingID0, scramblingID1, dmrs-Uplink-r16 }
 */
struct DMRS_UplinkConfig_TransformPrecodingDisabled {
    bool has_scramblingID0; /**< scramblingID0 是否存在。 */
    int64_t scramblingID0; /**< ASN.1 scramblingID0；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_scramblingID1; /**< scramblingID1 是否存在。 */
    int64_t scramblingID1; /**< ASN.1 scramblingID1；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DMRS_UplinkConfig_TransformPrecodingDisabled_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief DMRS_UplinkTransformPrecoding_r16
 * @note ASN.1：DMRS-UplinkTransformPrecoding-r16；源文件第 6514 行。
 * @note DMRS-UplinkTransformPrecoding-r16 ::= SEQUENCE { pi2BPSK-ScramblingID0, pi2BPSK-ScramblingID1 }
 */
struct DMRS_UplinkTransformPrecoding_r16 {
    bool has_pi2BPSK_ScramblingID0; /**< pi2BPSK-ScramblingID0 是否存在。 */
    int64_t pi2BPSK_ScramblingID0; /**< ASN.1 pi2BPSK-ScramblingID0；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_pi2BPSK_ScramblingID1; /**< pi2BPSK-ScramblingID1 是否存在。 */
    int64_t pi2BPSK_ScramblingID1; /**< ASN.1 pi2BPSK-ScramblingID1；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DMRS_UplinkTransformPrecoding_r16
 * @note ASN.1：SetupRelease<DMRS-UplinkTransformPrecoding-r16>；源文件第 6505 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag {
    SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag;

struct SetupRelease_DMRS_UplinkTransformPrecoding_r16 {
    SetupRelease_DMRS_UplinkTransformPrecoding_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DMRS_UplinkTransformPrecoding_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1
 * @note ASN.1：DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1；源文件第 6504 行。
 */
struct DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1 {
    bool has_dmrs_UplinkTransformPrecoding_r16; /**< dmrs-UplinkTransformPrecoding-r16 是否存在。 */
    SetupRelease_DMRS_UplinkTransformPrecoding_r16 dmrs_UplinkTransformPrecoding_r16; /**< ASN.1 dmrs-UplinkTransformPrecoding-r16；结构体；OPTIONAL。 */
};


/**
 * @brief DMRS_UplinkConfig_TransformPrecodingEnabled
 * @note ASN.1：transformPrecodingEnabled；源文件第 6499 行。
 * @note SEQUENCE { nPUSCH-Identity, sequenceGroupHopping, sequenceHopping, dmrs-Uplin...
 */
struct DMRS_UplinkConfig_TransformPrecodingEnabled {
    bool has_nPUSCH_Identity; /**< nPUSCH-Identity 是否存在。 */
    int64_t nPUSCH_Identity; /**< ASN.1 nPUSCH-Identity；INTEGER (0..1007)，位宽 10 bit；OPTIONAL。 */
    bool has_sequenceGroupHopping; /**< sequenceGroupHopping 是否存在。 */
    DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceGroupHopping sequenceGroupHopping; /**< ASN.1 sequenceGroupHopping；枚举；OPTIONAL。 */
    bool has_sequenceHopping; /**< sequenceHopping 是否存在。 */
    DMRS_UplinkConfig_TransformPrecodingEnabled_SequenceHopping sequenceHopping; /**< ASN.1 sequenceHopping；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DMRS_UplinkConfig_TransformPrecodingEnabled_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief DMRS_UplinkConfig
 * @note ASN.1：DMRS-UplinkConfig；源文件第 6486 行。
 * @note DMRS-UplinkConfig ::= SEQUENCE { dmrs-Type, dmrs-AdditionalPosition, phaseTrackingRS, maxLength, tr...
 */
struct DMRS_UplinkConfig {
    bool has_dmrs_Type; /**< dmrs-Type 是否存在。 */
    DMRS_UplinkConfig_Dmrs_Type dmrs_Type; /**< ASN.1 dmrs-Type；枚举；OPTIONAL。 */
    bool has_dmrs_AdditionalPosition; /**< dmrs-AdditionalPosition 是否存在。 */
    DMRS_UplinkConfig_Dmrs_AdditionalPosition dmrs_AdditionalPosition; /**< ASN.1 dmrs-AdditionalPosition；枚举；OPTIONAL。 */
    bool has_phaseTrackingRS; /**< phaseTrackingRS 是否存在。 */
    SetupRelease_PTRS_UplinkConfig phaseTrackingRS; /**< ASN.1 phaseTrackingRS；结构体；OPTIONAL。 */
    bool has_maxLength; /**< maxLength 是否存在。 */
    DMRS_UplinkConfig_MaxLength maxLength; /**< ASN.1 maxLength；枚举；OPTIONAL。 */
    bool has_transformPrecodingDisabled; /**< transformPrecodingDisabled 是否存在。 */
    DMRS_UplinkConfig_TransformPrecodingDisabled transformPrecodingDisabled; /**< ASN.1 transformPrecodingDisabled；结构体；OPTIONAL。 */
    bool has_transformPrecodingEnabled; /**< transformPrecodingEnabled 是否存在。 */
    DMRS_UplinkConfig_TransformPrecodingEnabled transformPrecodingEnabled; /**< ASN.1 transformPrecodingEnabled；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DMRS_UplinkConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_DMRS_UplinkConfig
 * @note ASN.1：SetupRelease<DMRS-UplinkConfig>；源文件第 10273 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DMRS_UplinkConfig_Tag {
    SetupRelease_DMRS_UplinkConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DMRS_UplinkConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DMRS_UplinkConfig_Tag;

struct SetupRelease_DMRS_UplinkConfig {
    SetupRelease_DMRS_UplinkConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DMRS_UplinkConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MinSchedulingOffsetK2_Values_r16
 * @note ASN.1：MinSchedulingOffsetK2-Values-r16；源文件第 10378 行。
 * @note MinSchedulingOffsetK2-Values-r16 ::= SEQUENCE OF (size 1..2) OF MinSchedulingOffsetK2ValuesR16Item
 */
struct MinSchedulingOffsetK2_Values_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_MinSchedulingOffsetK2_Values_r16
 * @note ASN.1：SetupRelease<MinSchedulingOffsetK2-Values-r16>；源文件第 10293 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag {
    SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag;

struct SetupRelease_MinSchedulingOffsetK2_Values_r16 {
    SetupRelease_MinSchedulingOffsetK2_Values_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MinSchedulingOffsetK2_Values_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UL_AccessConfigListDCI_0_1_r16
 * @note ASN.1：UL-AccessConfigListDCI-0-1-r16；源文件第 10399 行。
 * @note UL-AccessConfigListDCI-0-1-r16 ::= SEQUENCE OF (size 1..64) OF ULAccessConfigListDCI01R16Item
 */
struct UL_AccessConfigListDCI_0_1_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UL_AccessConfigListDCI_0_1_r16
 * @note ASN.1：SetupRelease<UL-AccessConfigListDCI-0-1-r16>；源文件第 10294 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag {
    SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag;

struct SetupRelease_UL_AccessConfigListDCI_0_1_r16 {
    SetupRelease_UL_AccessConfigListDCI_0_1_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_AccessConfigListDCI_0_1_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16
 * @note ASN.1：frequencyHoppingDCI-0-2-r16；源文件第 10302 行。
 * @note CHOICE { pusch-RepTypeA, pusch-RepTypeB }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag {
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeA = 0, /**< ASN.1 pusch-RepTypeA */
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag_pusch_RepTypeB = 1, /**< ASN.1 pusch-RepTypeB */
} PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag;

struct PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16 {
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeA pusch_RepTypeA; /**< ASN.1 pusch-RepTypeA */
        PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16_Pusch_RepTypeB pusch_RepTypeB; /**< ASN.1 pusch-RepTypeB */
    } u;
};


/**
 * @brief FrequencyHoppingOffsetListsDCI_0_2_r16
 * @note ASN.1：FrequencyHoppingOffsetListsDCI-0-2-r16；源文件第 10393 行。
 * @note FrequencyHoppingOffsetListsDCI-0-2-r16 ::= SEQUENCE OF (size 1..4) OF FrequencyHoppingOffsetListsDCI02R16Item
 */
struct FrequencyHoppingOffsetListsDCI_0_2_r16 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16
 * @note ASN.1：SetupRelease<FrequencyHoppingOffsetListsDCI-0-2-r16>；源文件第 10306 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag {
    SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag;

struct SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16 {
    SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        FrequencyHoppingOffsetListsDCI_0_2_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UCI_OnPUSCH_ListDCI_0_2_r16
 * @note ASN.1：UCI-OnPUSCH-ListDCI-0-2-r16；源文件第 10395 行。
 * @note UCI-OnPUSCH-ListDCI-0-2-r16 ::= SEQUENCE OF (size 1..2) OF UCI-OnPUSCH-DCI-0-2-r16
 */
struct UCI_OnPUSCH_ListDCI_0_2_r16 {
    UCI_OnPUSCH_DCI_0_2_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16
 * @note ASN.1：SetupRelease<UCI-OnPUSCH-ListDCI-0-2-r16>；源文件第 10318 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag {
    SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag;

struct SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16 {
    SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UCI_OnPUSCH_ListDCI_0_2_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_TimeDomainResourceAllocationList_r16
 * @note ASN.1：PUSCH-TimeDomainResourceAllocationList-r16；源文件第 10612 行。
 * @note PUSCH-TimeDomainResourceAllocationList-r16 ::= SEQUENCE OF (size 1..64) OF PUSCH-TimeDomainResourceAllocation-r16
 */
struct PUSCH_TimeDomainResourceAllocationList_r16 {
    PUSCH_TimeDomainResourceAllocation_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16
 * @note ASN.1：SetupRelease<PUSCH-TimeDomainResourceAllocationList-r16>；源文件第 10319 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag {
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag;

struct SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 {
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_TimeDomainResourceAllocationList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_PowerControl_v1610_ExtGroup1
 * @note ASN.1：PUSCH_PowerControl_v1610_ExtGroup1；源文件第 10545 行。
 */
struct PUSCH_PowerControl_v1610_ExtGroup1 {
    bool has_sri_PUSCH_MappingToAddModList2_r17; /**< sri-PUSCH-MappingToAddModList2-r17 是否存在。 */
    SRI_PUSCH_PowerControl* sri_PUSCH_MappingToAddModList2_r17_items; /**< ASN.1 sri-PUSCH-MappingToAddModList2-r17；SEQUENCE OF SRI_PUSCH_PowerControl，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sri_PUSCH_MappingToAddModList2_r17_count; /**< sri-PUSCH-MappingToAddModList2-r17 元素个数。 */
    bool has_sri_PUSCH_MappingToReleaseList2_r17; /**< sri-PUSCH-MappingToReleaseList2-r17 是否存在。 */
    SRI_PUSCH_PowerControlId* sri_PUSCH_MappingToReleaseList2_r17_items; /**< ASN.1 sri-PUSCH-MappingToReleaseList2-r17；SEQUENCE OF SRI_PUSCH_PowerControlId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sri_PUSCH_MappingToReleaseList2_r17_count; /**< sri-PUSCH-MappingToReleaseList2-r17 元素个数。 */
    bool has_p0_PUSCH_SetList2_r17; /**< p0-PUSCH-SetList2-r17 是否存在。 */
    P0_PUSCH_Set_r16* p0_PUSCH_SetList2_r17_items; /**< ASN.1 p0-PUSCH-SetList2-r17；SEQUENCE OF P0_PUSCH_Set_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t p0_PUSCH_SetList2_r17_count; /**< p0-PUSCH-SetList2-r17 元素个数。 */
    bool has_dummy; /**< dummy 是否存在。 */
    DummyPathlossReferenceRS_v1710* dummy_items; /**< ASN.1 dummy；SEQUENCE OF DummyPathlossReferenceRS_v1710，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dummy_count; /**< dummy 元素个数。 */
};


/**
 * @brief PUSCH_PowerControl_v1610_Olpc_ParameterSet
 * @note ASN.1：olpc-ParameterSet；源文件第 10540 行。
 * @note SEQUENCE { olpc-ParameterSetDCI-0-1-r16, olpc-ParameterSetDCI-0-2-r16 }
 */
struct PUSCH_PowerControl_v1610_Olpc_ParameterSet {
    bool has_olpc_ParameterSetDCI_0_1_r16; /**< olpc-ParameterSetDCI-0-1-r16 是否存在。 */
    int64_t olpc_ParameterSetDCI_0_1_r16; /**< ASN.1 olpc-ParameterSetDCI-0-1-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_olpc_ParameterSetDCI_0_2_r16; /**< olpc-ParameterSetDCI-0-2-r16 是否存在。 */
    int64_t olpc_ParameterSetDCI_0_2_r16; /**< ASN.1 olpc-ParameterSetDCI-0-2-r16；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief PUSCH_PowerControl_v1610
 * @note ASN.1：PUSCH-PowerControl-v1610；源文件第 10534 行。
 * @note PUSCH-PowerControl-v1610 ::= SEQUENCE { pathlossReferenceRSToAddModListSizeExt-v1610, pathlossReferenceRST...
 */
struct PUSCH_PowerControl_v1610 {
    bool has_pathlossReferenceRSToAddModListSizeExt_v1610; /**< pathlossReferenceRSToAddModListSizeExt-v1610 是否存在。 */
    PUSCH_PathlossReferenceRS_r16* pathlossReferenceRSToAddModListSizeExt_v1610_items; /**< ASN.1 pathlossReferenceRSToAddModListSizeExt-v1610；SEQUENCE OF PUSCH_PathlossReferenceRS_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSToAddModListSizeExt_v1610_count; /**< pathlossReferenceRSToAddModListSizeExt-v1610 元素个数。 */
    bool has_pathlossReferenceRSToReleaseListSizeExt_v1610; /**< pathlossReferenceRSToReleaseListSizeExt-v1610 是否存在。 */
    PUSCH_PathlossReferenceRS_Id_v1610* pathlossReferenceRSToReleaseListSizeExt_v1610_items; /**< ASN.1 pathlossReferenceRSToReleaseListSizeExt-v1610；SEQUENCE OF PUSCH_PathlossReferenceRS_Id_v1610，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pathlossReferenceRSToReleaseListSizeExt_v1610_count; /**< pathlossReferenceRSToReleaseListSizeExt-v1610 元素个数。 */
    bool has_p0_PUSCH_SetList_r16; /**< p0-PUSCH-SetList-r16 是否存在。 */
    P0_PUSCH_Set_r16* p0_PUSCH_SetList_r16_items; /**< ASN.1 p0-PUSCH-SetList-r16；SEQUENCE OF P0_PUSCH_Set_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t p0_PUSCH_SetList_r16_count; /**< p0-PUSCH-SetList-r16 元素个数。 */
    bool has_olpc_ParameterSet; /**< olpc-ParameterSet 是否存在。 */
    PUSCH_PowerControl_v1610_Olpc_ParameterSet olpc_ParameterSet; /**< ASN.1 olpc-ParameterSet；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUSCH_PowerControl_v1610_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PUSCH_PowerControl_v1610
 * @note ASN.1：SetupRelease<PUSCH-PowerControl-v1610>；源文件第 10332 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_PowerControl_v1610_Tag {
    SetupRelease_PUSCH_PowerControl_v1610_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_PowerControl_v1610_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_PowerControl_v1610_Tag;

struct SetupRelease_PUSCH_PowerControl_v1610 {
    SetupRelease_PUSCH_PowerControl_v1610_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_PowerControl_v1610 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_Config_ExtGroup1
 * @note ASN.1：PUSCH_Config_ExtGroup1；源文件第 10292 行。
 */
struct PUSCH_Config_ExtGroup1 {
    bool has_minimumSchedulingOffsetK2_r16; /**< minimumSchedulingOffsetK2-r16 是否存在。 */
    SetupRelease_MinSchedulingOffsetK2_Values_r16 minimumSchedulingOffsetK2_r16; /**< ASN.1 minimumSchedulingOffsetK2-r16；结构体；OPTIONAL。 */
    bool has_ul_AccessConfigListDCI_0_1_r16; /**< ul-AccessConfigListDCI-0-1-r16 是否存在。 */
    SetupRelease_UL_AccessConfigListDCI_0_1_r16 ul_AccessConfigListDCI_0_1_r16; /**< ASN.1 ul-AccessConfigListDCI-0-1-r16；结构体；OPTIONAL。 */
    bool has_harq_ProcessNumberSizeDCI_0_2_r16; /**< harq-ProcessNumberSizeDCI-0-2-r16 是否存在。 */
    int64_t harq_ProcessNumberSizeDCI_0_2_r16; /**< ASN.1 harq-ProcessNumberSizeDCI-0-2-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_dmrs_SequenceInitializationDCI_0_2_r16; /**< dmrs-SequenceInitializationDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_Dmrs_SequenceInitializationDCI_0_2_r16 dmrs_SequenceInitializationDCI_0_2_r16; /**< ASN.1 dmrs-SequenceInitializationDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_numberOfBitsForRV_DCI_0_2_r16; /**< numberOfBitsForRV-DCI-0-2-r16 是否存在。 */
    int64_t numberOfBitsForRV_DCI_0_2_r16; /**< ASN.1 numberOfBitsForRV-DCI-0-2-r16；INTEGER (0..2)，位宽 2 bit；OPTIONAL。 */
    bool has_antennaPortsFieldPresenceDCI_0_2_r16; /**< antennaPortsFieldPresenceDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_AntennaPortsFieldPresenceDCI_0_2_r16 antennaPortsFieldPresenceDCI_0_2_r16; /**< ASN.1 antennaPortsFieldPresenceDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16; /**< dmrs-UplinkForPUSCH-MappingTypeA-DCI-0-2-r16 是否存在。 */
    SetupRelease_DMRS_UplinkConfig dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16; /**< ASN.1 dmrs-UplinkForPUSCH-MappingTypeA-DCI-0-2-r16；结构体；OPTIONAL。 */
    bool has_dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16; /**< dmrs-UplinkForPUSCH-MappingTypeB-DCI-0-2-r16 是否存在。 */
    SetupRelease_DMRS_UplinkConfig dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16; /**< ASN.1 dmrs-UplinkForPUSCH-MappingTypeB-DCI-0-2-r16；结构体；OPTIONAL。 */
    bool has_frequencyHoppingDCI_0_2_r16; /**< frequencyHoppingDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_2_r16 frequencyHoppingDCI_0_2_r16; /**< ASN.1 frequencyHoppingDCI-0-2-r16；结构体；OPTIONAL。 */
    bool has_frequencyHoppingOffsetListsDCI_0_2_r16; /**< frequencyHoppingOffsetListsDCI-0-2-r16 是否存在。 */
    SetupRelease_FrequencyHoppingOffsetListsDCI_0_2_r16 frequencyHoppingOffsetListsDCI_0_2_r16; /**< ASN.1 frequencyHoppingOffsetListsDCI-0-2-r16；结构体；OPTIONAL。 */
    bool has_codebookSubsetDCI_0_2_r16; /**< codebookSubsetDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_CodebookSubsetDCI_0_2_r16 codebookSubsetDCI_0_2_r16; /**< ASN.1 codebookSubsetDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_invalidSymbolPatternIndicatorDCI_0_2_r16; /**< invalidSymbolPatternIndicatorDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_2_r16 invalidSymbolPatternIndicatorDCI_0_2_r16; /**< ASN.1 invalidSymbolPatternIndicatorDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_maxRankDCI_0_2_r16; /**< maxRankDCI-0-2-r16 是否存在。 */
    int64_t maxRankDCI_0_2_r16; /**< ASN.1 maxRankDCI-0-2-r16；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_mcs_TableDCI_0_2_r16; /**< mcs-TableDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_Mcs_TableDCI_0_2_r16 mcs_TableDCI_0_2_r16; /**< ASN.1 mcs-TableDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_mcs_TableTransformPrecoderDCI_0_2_r16; /**< mcs-TableTransformPrecoderDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_Mcs_TableTransformPrecoderDCI_0_2_r16 mcs_TableTransformPrecoderDCI_0_2_r16; /**< ASN.1 mcs-TableTransformPrecoderDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_priorityIndicatorDCI_0_2_r16; /**< priorityIndicatorDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_2_r16 priorityIndicatorDCI_0_2_r16; /**< ASN.1 priorityIndicatorDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_pusch_RepTypeIndicatorDCI_0_2_r16; /**< pusch-RepTypeIndicatorDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_2_r16 pusch_RepTypeIndicatorDCI_0_2_r16; /**< ASN.1 pusch-RepTypeIndicatorDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_resourceAllocationDCI_0_2_r16; /**< resourceAllocationDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_ResourceAllocationDCI_0_2_r16 resourceAllocationDCI_0_2_r16; /**< ASN.1 resourceAllocationDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_resourceAllocationType1GranularityDCI_0_2_r16; /**< resourceAllocationType1GranularityDCI-0-2-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_ResourceAllocationType1GranularityDCI_0_2_r16 resourceAllocationType1GranularityDCI_0_2_r16; /**< ASN.1 resourceAllocationType1GranularityDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_uci_OnPUSCH_ListDCI_0_2_r16; /**< uci-OnPUSCH-ListDCI-0-2-r16 是否存在。 */
    SetupRelease_UCI_OnPUSCH_ListDCI_0_2_r16 uci_OnPUSCH_ListDCI_0_2_r16; /**< ASN.1 uci-OnPUSCH-ListDCI-0-2-r16；结构体；OPTIONAL。 */
    bool has_pusch_TimeDomainAllocationListDCI_0_2_r16; /**< pusch-TimeDomainAllocationListDCI-0-2-r16 是否存在。 */
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 pusch_TimeDomainAllocationListDCI_0_2_r16; /**< ASN.1 pusch-TimeDomainAllocationListDCI-0-2-r16；结构体；OPTIONAL。 */
    bool has_pusch_TimeDomainAllocationListDCI_0_1_r16; /**< pusch-TimeDomainAllocationListDCI-0-1-r16 是否存在。 */
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 pusch_TimeDomainAllocationListDCI_0_1_r16; /**< ASN.1 pusch-TimeDomainAllocationListDCI-0-1-r16；结构体；OPTIONAL。 */
    bool has_invalidSymbolPatternIndicatorDCI_0_1_r16; /**< invalidSymbolPatternIndicatorDCI-0-1-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_InvalidSymbolPatternIndicatorDCI_0_1_r16 invalidSymbolPatternIndicatorDCI_0_1_r16; /**< ASN.1 invalidSymbolPatternIndicatorDCI-0-1-r16；枚举；OPTIONAL。 */
    bool has_priorityIndicatorDCI_0_1_r16; /**< priorityIndicatorDCI-0-1-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_PriorityIndicatorDCI_0_1_r16 priorityIndicatorDCI_0_1_r16; /**< ASN.1 priorityIndicatorDCI-0-1-r16；枚举；OPTIONAL。 */
    bool has_pusch_RepTypeIndicatorDCI_0_1_r16; /**< pusch-RepTypeIndicatorDCI-0-1-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_Pusch_RepTypeIndicatorDCI_0_1_r16 pusch_RepTypeIndicatorDCI_0_1_r16; /**< ASN.1 pusch-RepTypeIndicatorDCI-0-1-r16；枚举；OPTIONAL。 */
    bool has_frequencyHoppingDCI_0_1_r16; /**< frequencyHoppingDCI-0-1-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_FrequencyHoppingDCI_0_1_r16 frequencyHoppingDCI_0_1_r16; /**< ASN.1 frequencyHoppingDCI-0-1-r16；枚举；OPTIONAL。 */
    bool has_uci_OnPUSCH_ListDCI_0_1_r16; /**< uci-OnPUSCH-ListDCI-0-1-r16 是否存在。 */
    SetupRelease_UCI_OnPUSCH_ListDCI_0_1_r16 uci_OnPUSCH_ListDCI_0_1_r16; /**< ASN.1 uci-OnPUSCH-ListDCI-0-1-r16；结构体；OPTIONAL。 */
    bool has_invalidSymbolPattern_r16; /**< invalidSymbolPattern-r16 是否存在。 */
    InvalidSymbolPattern_r16 invalidSymbolPattern_r16; /**< ASN.1 invalidSymbolPattern-r16；结构体；OPTIONAL。 */
    bool has_pusch_PowerControl_v1610; /**< pusch-PowerControl-v1610 是否存在。 */
    SetupRelease_PUSCH_PowerControl_v1610 pusch_PowerControl_v1610; /**< ASN.1 pusch-PowerControl-v1610；结构体；OPTIONAL。 */
    bool has_ul_FullPowerTransmission_r16; /**< ul-FullPowerTransmission-r16 是否存在。 */
    PUSCH_Config_ExtGroup1_Ul_FullPowerTransmission_r16 ul_FullPowerTransmission_r16; /**< ASN.1 ul-FullPowerTransmission-r16；枚举；OPTIONAL。 */
    bool has_pusch_TimeDomainAllocationListForMultiPUSCH_r16; /**< pusch-TimeDomainAllocationListForMultiPUSCH-r16 是否存在。 */
    SetupRelease_PUSCH_TimeDomainResourceAllocationList_r16 pusch_TimeDomainAllocationListForMultiPUSCH_r16; /**< ASN.1 pusch-TimeDomainAllocationListForMultiPUSCH-r16；结构体；OPTIONAL。 */
    bool has_numberOfInvalidSymbolsForDL_UL_Switching_r16; /**< numberOfInvalidSymbolsForDL-UL-Switching-r16 是否存在。 */
    int64_t numberOfInvalidSymbolsForDL_UL_Switching_r16; /**< ASN.1 numberOfInvalidSymbolsForDL-UL-Switching-r16；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
};


/**
 * @brief UL_AccessConfigListDCI_0_2_r17
 * @note ASN.1：UL-AccessConfigListDCI-0-2-r17；源文件第 10403 行。
 * @note UL-AccessConfigListDCI-0-2-r17 ::= SEQUENCE OF (size 1..64) OF ULAccessConfigListDCI02R17Item
 */
struct UL_AccessConfigListDCI_0_2_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_UL_AccessConfigListDCI_0_2_r17
 * @note ASN.1：SetupRelease<UL-AccessConfigListDCI-0-2-r17>；源文件第 10339 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag {
    SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag;

struct SetupRelease_UL_AccessConfigListDCI_0_2_r17 {
    SetupRelease_UL_AccessConfigListDCI_0_2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UL_AccessConfigListDCI_0_2_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BetaOffsetsCrossPri_r17
 * @note ASN.1：BetaOffsetsCrossPri-r17；源文件第 4460 行。
 * @note BetaOffsetsCrossPri-r17 ::= SEQUENCE OF (size 3..3) OF BetaOffsetsCrossPriR17Item
 */
struct BetaOffsetsCrossPri_r17 {
    int64_t* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BetaOffsetsCrossPriSel_r17_Dynamic_r17
 * @note ASN.1：dynamic-r17；源文件第 10406 行。
 * @note SEQUENCE OF (size 4..4) OF BetaOffsetsCrossPri-r17
 */
struct BetaOffsetsCrossPriSel_r17_Dynamic_r17 {
    BetaOffsetsCrossPri_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief BetaOffsetsCrossPriSel_r17
 * @note ASN.1：BetaOffsetsCrossPriSel-r17；源文件第 10405 行。
 * @note BetaOffsetsCrossPriSel-r17 ::= CHOICE { dynamic-r17, semiStatic-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum BetaOffsetsCrossPriSel_r17_Tag {
    BetaOffsetsCrossPriSel_r17_Tag_dynamic_r17 = 0, /**< ASN.1 dynamic-r17 */
    BetaOffsetsCrossPriSel_r17_Tag_semiStatic_r17 = 1, /**< ASN.1 semiStatic-r17 */
} BetaOffsetsCrossPriSel_r17_Tag;

struct BetaOffsetsCrossPriSel_r17 {
    BetaOffsetsCrossPriSel_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BetaOffsetsCrossPriSel_r17_Dynamic_r17 dynamic_r17; /**< ASN.1 dynamic-r17 */
        BetaOffsetsCrossPri_r17 semiStatic_r17; /**< ASN.1 semiStatic-r17 */
    } u;
};


/**
 * @brief SetupRelease_BetaOffsetsCrossPriSel_r17
 * @note ASN.1：SetupRelease<BetaOffsetsCrossPriSel-r17>；源文件第 10340 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_BetaOffsetsCrossPriSel_r17_Tag {
    SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_BetaOffsetsCrossPriSel_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_BetaOffsetsCrossPriSel_r17_Tag;

struct SetupRelease_BetaOffsetsCrossPriSel_r17 {
    SetupRelease_BetaOffsetsCrossPriSel_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        BetaOffsetsCrossPriSel_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17
 * @note ASN.1：dynamicDCI-0-2-r17/oneBit-r17；源文件第 10412 行。
 * @note SEQUENCE OF (size 2..2) OF BetaOffsetsCrossPri-r17
 */
struct BetaOffsetsCrossPriSelDCI_0_2_r17_DynamicDCI_0_2_r17_OneBit_r17 {
    BetaOffsetsCrossPri_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART013_H */
