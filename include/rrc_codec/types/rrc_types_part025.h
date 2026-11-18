/* ============================================================================
 * types/rrc_types_part025.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART025_H
#define RRC_CODEC_TYPES_PART025_H

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
#include "rrc_types_part024.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief SL_BWP_Config_r16_ExtGroup1
 * @note ASN.1：SL_BWP_Config_r16_ExtGroup1；源文件第 21899 行。
 */
struct SL_BWP_Config_r16_ExtGroup1 {
    bool has_sl_BWP_PoolConfigPS_r17; /**< sl-BWP-PoolConfigPS-r17 是否存在。 */
    SetupRelease_SL_BWP_PoolConfig_r16 sl_BWP_PoolConfigPS_r17; /**< ASN.1 sl-BWP-PoolConfigPS-r17；结构体；OPTIONAL。 */
    bool has_sl_BWP_DiscPoolConfig_r17; /**< sl-BWP-DiscPoolConfig-r17 是否存在。 */
    SetupRelease_SL_BWP_DiscPoolConfig_r17 sl_BWP_DiscPoolConfig_r17; /**< ASN.1 sl-BWP-DiscPoolConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_PRS_TxPoolDedicated_r18
 * @note ASN.1：SL-PRS-TxPoolDedicated-r18；源文件第 22007 行。
 * @note SL-PRS-TxPoolDedicated-r18 ::= SEQUENCE { sl-PRS-PoolToReleaseList-r1, sl-PRS-PoolToAddModList-r18 }
 */
struct SL_PRS_TxPoolDedicated_r18 {
    bool has_sl_PRS_PoolToReleaseList_r1; /**< sl-PRS-PoolToReleaseList-r1 是否存在。 */
    SL_PRS_ResourcePoolID_r18* sl_PRS_PoolToReleaseList_r1_items; /**< ASN.1 sl-PRS-PoolToReleaseList-r1；SEQUENCE OF SL_PRS_ResourcePoolID_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_PoolToReleaseList_r1_count; /**< sl-PRS-PoolToReleaseList-r1 元素个数。 */
    bool has_sl_PRS_PoolToAddModList_r18; /**< sl-PRS-PoolToAddModList-r18 是否存在。 */
    SL_PRS_ResourcePoolConfig_r18* sl_PRS_PoolToAddModList_r18_items; /**< ASN.1 sl-PRS-PoolToAddModList-r18；SEQUENCE OF SL_PRS_ResourcePoolConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_PoolToAddModList_r18_count; /**< sl-PRS-PoolToAddModList-r18 元素个数。 */
};


/**
 * @brief SL_PRS_PowerControl_r18
 * @note ASN.1：SL-PRS-PowerControl-r18；源文件第 22750 行。
 * @note SL-PRS-PowerControl-r18 ::= SEQUENCE { dl-P0-SL-PRS-r18, dl-Alpha-SL-PRS-r18, sl-P0-SL-PRS-r18, sl-Alpha-...
 */
struct SL_PRS_PowerControl_r18 {
    bool has_dl_P0_SL_PRS_r18; /**< dl-P0-SL-PRS-r18 是否存在。 */
    int64_t dl_P0_SL_PRS_r18; /**< ASN.1 dl-P0-SL-PRS-r18；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_dl_Alpha_SL_PRS_r18; /**< dl-Alpha-SL-PRS-r18 是否存在。 */
    SL_PRS_PowerControl_r18_Dl_Alpha_SL_PRS_r18 dl_Alpha_SL_PRS_r18; /**< ASN.1 dl-Alpha-SL-PRS-r18；枚举；OPTIONAL。 */
    bool has_sl_P0_SL_PRS_r18; /**< sl-P0-SL-PRS-r18 是否存在。 */
    int64_t sl_P0_SL_PRS_r18; /**< ASN.1 sl-P0-SL-PRS-r18；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
    bool has_sl_Alpha_SL_PRS_r18; /**< sl-Alpha-SL-PRS-r18 是否存在。 */
    SL_PRS_PowerControl_r18_Sl_Alpha_SL_PRS_r18 sl_Alpha_SL_PRS_r18; /**< ASN.1 sl-Alpha-SL-PRS-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18
 * @note ASN.1：SL-PSCCH-ConfigDedicatedSL-PRS-RP-r18；源文件第 22731 行。
 * @note SL-PSCCH-ConfigDedicatedSL-PRS-RP-r18 ::= SEQUENCE { timeResourcePSCCH-DedicatedSL-PRS-RP-r18, freqResourcePSCCH-Dedica...
 */
struct SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 {
    bool has_timeResourcePSCCH_DedicatedSL_PRS_RP_r18; /**< timeResourcePSCCH-DedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_TimeResourcePSCCH_DedicatedSL_PRS_RP_r18 timeResourcePSCCH_DedicatedSL_PRS_RP_r18; /**< ASN.1 timeResourcePSCCH-DedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_freqResourcePSCCH_DedicatedSL_PRS_RP_r18; /**< freqResourcePSCCH-DedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_FreqResourcePSCCH_DedicatedSL_PRS_RP_r18 freqResourcePSCCH_DedicatedSL_PRS_RP_r18; /**< ASN.1 freqResourcePSCCH-DedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18
 * @note ASN.1：SetupRelease<SL-PSCCH-ConfigDedicatedSL-PRS-RP-r18>；源文件第 22703 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag {
    SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag;

struct SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 {
    SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_PRS_ResourcePool_r18
 * @note ASN.1：SL-PRS-ResourcePool-r18；源文件第 22702 行。
 * @note SL-PRS-ResourcePool-r18 ::= SEQUENCE { sl-PRS-PSCCH-Config-r18, sl-StartRB-SubchannelDedicatedSL-PRS-RP-r...
 */
struct SL_PRS_ResourcePool_r18 {
    bool has_sl_PRS_PSCCH_Config_r18; /**< sl-PRS-PSCCH-Config-r18 是否存在。 */
    SetupRelease_SL_PSCCH_ConfigDedicatedSL_PRS_RP_r18 sl_PRS_PSCCH_Config_r18; /**< ASN.1 sl-PRS-PSCCH-Config-r18；结构体；OPTIONAL。 */
    bool has_sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18; /**< sl-StartRB-SubchannelDedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_StartRB_SubchannelDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-StartRB-SubchannelDedicatedSL-PRS-RP-r18；INTEGER (0..265)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_FilterCoefficient_r18; /**< sl-FilterCoefficient-r18 是否存在。 */
    FilterCoefficient sl_FilterCoefficient_r18; /**< ASN.1 sl-FilterCoefficient-r18；枚举；OPTIONAL。 */
    bool has_sl_ThreshS_RSSI_PRS_CBR_r18; /**< sl-ThreshS-RSSI-PRS-CBR-r18 是否存在。 */
    int64_t sl_ThreshS_RSSI_PRS_CBR_r18; /**< ASN.1 sl-ThreshS-RSSI-PRS-CBR-r18；INTEGER (0..45)，位宽 6 bit；OPTIONAL。 */
    bool has_sl_RB_Number_r18; /**< sl-RB-Number-r18 是否存在。 */
    int64_t sl_RB_Number_r18; /**< ASN.1 sl-RB-Number-r18；INTEGER (10..275)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_TimeResource_r18; /**< sl-TimeResource-r18 是否存在。 */
    BitString sl_TimeResource_r18; /**< ASN.1 sl-TimeResource-r18；SIZE (10..160)；OPTIONAL。 */
    bool has_sl_PosAllowedResourceSelectionConfig_r18; /**< sl-PosAllowedResourceSelectionConfig-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_PosAllowedResourceSelectionConfig_r18 sl_PosAllowedResourceSelectionConfig_r18; /**< ASN.1 sl-PosAllowedResourceSelectionConfig-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_ResourceReservePeriodList_r18; /**< sl-PRS-ResourceReservePeriodList-r18 是否存在。 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18* sl_PRS_ResourceReservePeriodList_r18_items; /**< ASN.1 sl-PRS-ResourceReservePeriodList-r18；SEQUENCE OF SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_ResourceReservePeriodList_r18_count; /**< sl-PRS-ResourceReservePeriodList-r18 元素个数。 */
    bool has_sl_PRS_ResourcesDedicatedSL_PRS_RP_r18; /**< sl-PRS-ResourcesDedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourceDedicatedSL_PRS_RP_r18* sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_items; /**< ASN.1 sl-PRS-ResourcesDedicatedSL-PRS-RP-r18；SEQUENCE OF SL_PRS_ResourceDedicatedSL_PRS_RP_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_ResourcesDedicatedSL_PRS_RP_r18_count; /**< sl-PRS-ResourcesDedicatedSL-PRS-RP-r18 元素个数。 */
    bool has_sl_PRS_PowerControl_r18; /**< sl-PRS-PowerControl-r18 是否存在。 */
    SL_PRS_PowerControl_r18 sl_PRS_PowerControl_r18; /**< ASN.1 sl-PRS-PowerControl-r18；结构体；OPTIONAL。 */
    bool has_sl_SensingWindowDedicatedSL_PRS_RP_r18; /**< sl-SensingWindowDedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_SensingWindowDedicatedSL_PRS_RP_r18 sl_SensingWindowDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-SensingWindowDedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_sl_TxPercentageDedicatedSL_PRS_RP_List_r18; /**< sl-TxPercentageDedicatedSL-PRS-RP-List-r18 是否存在。 */
    SL_TxPercentageDedicatedSL_PRS_RP_Config_r18* sl_TxPercentageDedicatedSL_PRS_RP_List_r18_items; /**< ASN.1 sl-TxPercentageDedicatedSL-PRS-RP-List-r18；SEQUENCE OF SL_TxPercentageDedicatedSL_PRS_RP_Config_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_TxPercentageDedicatedSL_PRS_RP_List_r18_count; /**< sl-TxPercentageDedicatedSL-PRS-RP-List-r18 元素个数。 */
    bool has_sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18; /**< sl-SCI-basedSL-PRS-TxTriggerSCI1-B-r18 是否存在。 */
    bool sl_SCI_basedSL_PRS_TxTriggerSCI1_B_r18; /**< ASN.1 sl-SCI-basedSL-PRS-TxTriggerSCI1-B-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_sl_NumSubchannelDedicatedSL_PRS_RP_r18; /**< sl-NumSubchannelDedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_NumSubchannelDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-NumSubchannelDedicatedSL-PRS-RP-r18；INTEGER (1..27)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_SubchannelSizeDedicatedSL_PRS_RP_r18; /**< sl-SubchannelSizeDedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_SubchannelSizeDedicatedSL_PRS_RP_r18 sl_SubchannelSizeDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-SubchannelSizeDedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18; /**< sl-MaxNumPerReserveDedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18 sl_MaxNumPerReserveDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-MaxNumPerReserveDedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18; /**< sl-NumReservedBitsSCI1B-DedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_NumReservedBitsSCI1B_DedicatedSL_PRS_RP_r18; /**< ASN.1 sl-NumReservedBitsSCI1B-DedicatedSL-PRS-RP-r18；INTEGER (0..20)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_SRC_ID_LenDedicatedSL_PRS_RP_r18; /**< sl-SRC-ID-LenDedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_SRC_ID_LenDedicatedSL_PRS_RP_r18 sl_SRC_ID_LenDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-SRC-ID-LenDedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18; /**< sl-CBR-PriorityTxConfigDedicatedSL-PRS-RP-List-r18 是否存在。 */
    SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18* sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_items; /**< ASN.1 sl-CBR-PriorityTxConfigDedicatedSL-PRS-RP-List-r18；SEQUENCE OF SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_CBR_PriorityTxConfigDedicatedSL_PRS_RP_List_r18_count; /**< sl-CBR-PriorityTxConfigDedicatedSL-PRS-RP-List-r18 元素个数。 */
    bool has_sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18; /**< sl-TimeWindowSizeCBR-DedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18 sl_TimeWindowSizeCBR_DedicatedSL_PRS_RP_r18; /**< ASN.1 sl-TimeWindowSizeCBR-DedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18; /**< sl-TimeWindowSizeCR-DedicatedSL-PRS-RP-r18 是否存在。 */
    SL_PRS_ResourcePool_r18_Sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18 sl_TimeWindowSizeCR_DedicatedSL_PRS_RP_r18; /**< ASN.1 sl-TimeWindowSizeCR-DedicatedSL-PRS-RP-r18；枚举；OPTIONAL。 */
    bool has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18; /**< sl-CBR-CommonTxDedicatedSL-PRS-RP-List-r18 是否存在。 */
    SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18 sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18; /**< ASN.1 sl-CBR-CommonTxDedicatedSL-PRS-RP-List-r18；结构体；OPTIONAL。 */
    bool has_sl_PriorityThreshold_UL_URLLC_r18; /**< sl-PriorityThreshold-UL-URLLC-r18 是否存在。 */
    int64_t sl_PriorityThreshold_UL_URLLC_r18; /**< ASN.1 sl-PriorityThreshold-UL-URLLC-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_PriorityThreshold_r18; /**< sl-PriorityThreshold-r18 是否存在。 */
    int64_t sl_PriorityThreshold_r18; /**< ASN.1 sl-PriorityThreshold-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief SL_PRS_ResourcePoolConfig_r18
 * @note ASN.1：SL-PRS-ResourcePoolConfig-r18；源文件第 22012 行。
 * @note SL-PRS-ResourcePoolConfig-r18 ::= SEQUENCE { sl-PRS-ResourcePoolID-r18, sl-PRS-ResourcePool-r18 }
 */
struct SL_PRS_ResourcePoolConfig_r18 {
    SL_PRS_ResourcePoolID_r18 sl_PRS_ResourcePoolID_r18; /**< ASN.1 sl-PRS-ResourcePoolID-r18；INTEGER (1..8)，位宽 3 bit。 */
    bool has_sl_PRS_ResourcePool_r18; /**< sl-PRS-ResourcePool-r18 是否存在。 */
    SL_PRS_ResourcePool_r18 sl_PRS_ResourcePool_r18; /**< ASN.1 sl-PRS-ResourcePool-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_BWP_PRS_PoolConfig_r18
 * @note ASN.1：SL-BWP-PRS-PoolConfig-r18；源文件第 22000 行。
 * @note SL-BWP-PRS-PoolConfig-r18 ::= SEQUENCE { sl-PRS-RxPool-r18, sl-PRS-TxPoolSelectedNormal-r18, sl-PRS-TxPoolS...
 */
struct SL_BWP_PRS_PoolConfig_r18 {
    bool has_sl_PRS_RxPool_r18; /**< sl-PRS-RxPool-r18 是否存在。 */
    SL_PRS_ResourcePool_r18* sl_PRS_RxPool_r18_items; /**< ASN.1 sl-PRS-RxPool-r18；SEQUENCE OF SL_PRS_ResourcePool_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_RxPool_r18_count; /**< sl-PRS-RxPool-r18 元素个数。 */
    bool has_sl_PRS_TxPoolSelectedNormal_r18; /**< sl-PRS-TxPoolSelectedNormal-r18 是否存在。 */
    SL_PRS_TxPoolDedicated_r18 sl_PRS_TxPoolSelectedNormal_r18; /**< ASN.1 sl-PRS-TxPoolSelectedNormal-r18；结构体；OPTIONAL。 */
    bool has_sl_PRS_TxPoolScheduling_r18; /**< sl-PRS-TxPoolScheduling-r18 是否存在。 */
    SL_PRS_TxPoolDedicated_r18 sl_PRS_TxPoolScheduling_r18; /**< ASN.1 sl-PRS-TxPoolScheduling-r18；结构体；OPTIONAL。 */
    bool has_sl_PRS_TxPoolExceptional_r18; /**< sl-PRS-TxPoolExceptional-r18 是否存在。 */
    SL_PRS_ResourcePoolConfig_r18 sl_PRS_TxPoolExceptional_r18; /**< ASN.1 sl-PRS-TxPoolExceptional-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_BWP_PRS_PoolConfig_r18
 * @note ASN.1：SetupRelease<SL-BWP-PRS-PoolConfig-r18>；源文件第 21905 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag {
    SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag;

struct SetupRelease_SL_BWP_PRS_PoolConfig_r18 {
    SetupRelease_SL_BWP_PRS_PoolConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_BWP_PRS_PoolConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_BWP_Config_r16_ExtGroup2
 * @note ASN.1：SL_BWP_Config_r16_ExtGroup2；源文件第 21903 行。
 */
struct SL_BWP_Config_r16_ExtGroup2 {
    bool has_sl_BWP_PoolConfigA2X_r18; /**< sl-BWP-PoolConfigA2X-r18 是否存在。 */
    SetupRelease_SL_BWP_PoolConfig_r16 sl_BWP_PoolConfigA2X_r18; /**< ASN.1 sl-BWP-PoolConfigA2X-r18；结构体；OPTIONAL。 */
    bool has_sl_BWP_PRS_PoolConfig_r18; /**< sl-BWP-PRS-PoolConfig-r18 是否存在。 */
    SetupRelease_SL_BWP_PRS_PoolConfig_r18 sl_BWP_PRS_PoolConfig_r18; /**< ASN.1 sl-BWP-PRS-PoolConfig-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_LBT_FailureRecoveryConfig_r18
 * @note ASN.1：SL-LBT-FailureRecoveryConfig-r18；源文件第 22494 行。
 * @note SL-LBT-FailureRecoveryConfig-r18 ::= SEQUENCE { sl-lbt-FailureInstanceMaxCount-r18, sl-lbt-FailureDetectionTimer-r...
 */
struct SL_LBT_FailureRecoveryConfig_r18 {
    bool has_sl_lbt_FailureInstanceMaxCount_r18; /**< sl-lbt-FailureInstanceMaxCount-r18 是否存在。 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureInstanceMaxCount_r18 sl_lbt_FailureInstanceMaxCount_r18; /**< ASN.1 sl-lbt-FailureInstanceMaxCount-r18；枚举；OPTIONAL。 */
    bool has_sl_lbt_FailureDetectionTimer_r18; /**< sl-lbt-FailureDetectionTimer-r18 是否存在。 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_FailureDetectionTimer_r18 sl_lbt_FailureDetectionTimer_r18; /**< ASN.1 sl-lbt-FailureDetectionTimer-r18；枚举；OPTIONAL。 */
    bool has_sl_lbt_RecoveryTimer_r18; /**< sl-lbt-RecoveryTimer-r18 是否存在。 */
    SL_LBT_FailureRecoveryConfig_r18_Sl_lbt_RecoveryTimer_r18 sl_lbt_RecoveryTimer_r18; /**< ASN.1 sl-lbt-RecoveryTimer-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_SL_LBT_FailureRecoveryConfig_r18
 * @note ASN.1：SetupRelease<SL-LBT-FailureRecoveryConfig-r18>；源文件第 21917 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag {
    SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag;

struct SetupRelease_SL_LBT_FailureRecoveryConfig_r18 {
    SetupRelease_SL_LBT_FailureRecoveryConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_LBT_FailureRecoveryConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_BWP_Generic_r16_ExtGroup1
 * @note ASN.1：SL_BWP_Generic_r16_ExtGroup1；源文件第 21916 行。
 */
struct SL_BWP_Generic_r16_ExtGroup1 {
    bool has_sl_LBT_FailureRecoveryConfig_r18; /**< sl-LBT-FailureRecoveryConfig-r18 是否存在。 */
    SetupRelease_SL_LBT_FailureRecoveryConfig_r18 sl_LBT_FailureRecoveryConfig_r18; /**< ASN.1 sl-LBT-FailureRecoveryConfig-r18；结构体；OPTIONAL。 */
    bool has_sl_StartingSymbolFirst_r18; /**< sl-StartingSymbolFirst-r18 是否存在。 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolFirst_r18 sl_StartingSymbolFirst_r18; /**< ASN.1 sl-StartingSymbolFirst-r18；枚举；OPTIONAL。 */
    bool has_sl_StartingSymbolSecond_r18; /**< sl-StartingSymbolSecond-r18 是否存在。 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_StartingSymbolSecond_r18 sl_StartingSymbolSecond_r18; /**< ASN.1 sl-StartingSymbolSecond-r18；枚举；OPTIONAL。 */
    bool has_sl_TransmissionStructureForPSCCHandPSSCH_r18; /**< sl-TransmissionStructureForPSCCHandPSSCH-r18 是否存在。 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_TransmissionStructureForPSCCHandPSSCH_r18 sl_TransmissionStructureForPSCCHandPSSCH_r18; /**< ASN.1 sl-TransmissionStructureForPSCCHandPSSCH-r18；枚举；OPTIONAL。 */
    bool has_sl_GapOfAdditionalSSSB_Occasion_r18; /**< sl-GapOfAdditionalSSSB-Occasion-r18 是否存在。 */
    int64_t sl_GapOfAdditionalSSSB_Occasion_r18; /**< ASN.1 sl-GapOfAdditionalSSSB-Occasion-r18；INTEGER (0..639)，位宽 10 bit；OPTIONAL。 */
    bool has_sl_AbsoluteFrequencySSB_NonAnchorList_r18; /**< sl-AbsoluteFrequencySSB-NonAnchorList-r18 是否存在。 */
    ARFCN_ValueNR* sl_AbsoluteFrequencySSB_NonAnchorList_r18_items; /**< ASN.1 sl-AbsoluteFrequencySSB-NonAnchorList-r18；SEQUENCE OF ARFCN_ValueNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_AbsoluteFrequencySSB_NonAnchorList_r18_count; /**< sl-AbsoluteFrequencySSB-NonAnchorList-r18 元素个数。 */
    bool has_sl_CPE_StartingPositionS_SSB_r18; /**< sl-CPE-StartingPositionS-SSB-r18 是否存在。 */
    int64_t sl_CPE_StartingPositionS_SSB_r18; /**< ASN.1 sl-CPE-StartingPositionS-SSB-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CWS_ForPsschWithoutHarqAck_r18; /**< sl-CWS-ForPsschWithoutHarqAck-r18 是否存在。 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_CWS_ForPsschWithoutHarqAck_r18 sl_CWS_ForPsschWithoutHarqAck_r18; /**< ASN.1 sl-CWS-ForPsschWithoutHarqAck-r18；枚举；OPTIONAL。 */
    bool has_sl_NumOfAdditionalSSSBOccasion_r18; /**< sl-NumOfAdditionalSSSBOccasion-r18 是否存在。 */
    int64_t sl_NumOfAdditionalSSSBOccasion_r18; /**< ASN.1 sl-NumOfAdditionalSSSBOccasion-r18；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_SSSBPowerOffsetOfAnchorRBSet_r18; /**< sl-SSSBPowerOffsetOfAnchorRBSet-r18 是否存在。 */
    SL_BWP_Generic_r16_ExtGroup1_Sl_SSSBPowerOffsetOfAnchorRBSet_r18 sl_SSSBPowerOffsetOfAnchorRBSet_r18; /**< ASN.1 sl-SSSBPowerOffsetOfAnchorRBSet-r18；枚举；OPTIONAL。 */
    bool has_sl_RBSetConfigList_r18; /**< sl-RBSetConfigList-r18 是否存在。 */
    SL_RBSetConfig_r18* sl_RBSetConfigList_r18_items; /**< ASN.1 sl-RBSetConfigList-r18；SEQUENCE OF SL_RBSetConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RBSetConfigList_r18_count; /**< sl-RBSetConfigList-r18 元素个数。 */
    bool has_sl_IntraCellGuardBandsSL_List_r18; /**< sl-IntraCellGuardBandsSL-List-r18 是否存在。 */
    IntraCellGuardBandsPerSCS_r16* sl_IntraCellGuardBandsSL_List_r18_items; /**< ASN.1 sl-IntraCellGuardBandsSL-List-r18；SEQUENCE OF IntraCellGuardBandsPerSCS_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_IntraCellGuardBandsSL_List_r18_count; /**< sl-IntraCellGuardBandsSL-List-r18 元素个数。 */
};


/**
 * @brief SL_PSBCH_Config_r16_ExtGroup1
 * @note ASN.1：SL_PSBCH_Config_r16_ExtGroup1；源文件第 22779 行。
 */
struct SL_PSBCH_Config_r16_ExtGroup1 {
    bool has_dl_P0_PSBCH_r17; /**< dl-P0-PSBCH-r17 是否存在。 */
    int64_t dl_P0_PSBCH_r17; /**< ASN.1 dl-P0-PSBCH-r17；INTEGER (-202..24)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SL_PSBCH_Config_r16
 * @note ASN.1：SL-PSBCH-Config-r16；源文件第 22775 行。
 * @note SL-PSBCH-Config-r16 ::= SEQUENCE { dl-P0-PSBCH-r16, dl-Alpha-PSBCH-r16, dl-P0-PSBCH-r17 }
 */
struct SL_PSBCH_Config_r16 {
    bool has_dl_P0_PSBCH_r16; /**< dl-P0-PSBCH-r16 是否存在。 */
    int64_t dl_P0_PSBCH_r16; /**< ASN.1 dl-P0-PSBCH-r16；INTEGER (-16..15)，位宽 5 bit；OPTIONAL。 */
    bool has_dl_Alpha_PSBCH_r16; /**< dl-Alpha-PSBCH-r16 是否存在。 */
    SL_PSBCH_Config_r16_Dl_Alpha_PSBCH_r16 dl_Alpha_PSBCH_r16; /**< ASN.1 dl-Alpha-PSBCH-r16；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_PSBCH_Config_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SL_PSBCH_Config_r16
 * @note ASN.1：SetupRelease<SL-PSBCH-Config-r16>；源文件第 21913 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SL_PSBCH_Config_r16_Tag {
    SetupRelease_SL_PSBCH_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SL_PSBCH_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SL_PSBCH_Config_r16_Tag;

struct SetupRelease_SL_PSBCH_Config_r16 {
    SetupRelease_SL_PSBCH_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SL_PSBCH_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SL_BWP_Generic_r16
 * @note ASN.1：SL-BWP-Generic-r16；源文件第 21909 行。
 * @note SL-BWP-Generic-r16 ::= SEQUENCE { sl-BWP-r16, sl-LengthSymbols-r16, sl-StartSymbol-r16, sl-PSBCH-Con...
 */
struct SL_BWP_Generic_r16 {
    bool has_sl_BWP_r16; /**< sl-BWP-r16 是否存在。 */
    BWP sl_BWP_r16; /**< ASN.1 sl-BWP-r16；结构体；OPTIONAL。 */
    bool has_sl_LengthSymbols_r16; /**< sl-LengthSymbols-r16 是否存在。 */
    SL_BWP_Generic_r16_Sl_LengthSymbols_r16 sl_LengthSymbols_r16; /**< ASN.1 sl-LengthSymbols-r16；枚举；OPTIONAL。 */
    bool has_sl_StartSymbol_r16; /**< sl-StartSymbol-r16 是否存在。 */
    SL_BWP_Generic_r16_Sl_StartSymbol_r16 sl_StartSymbol_r16; /**< ASN.1 sl-StartSymbol-r16；枚举；OPTIONAL。 */
    bool has_sl_PSBCH_Config_r16; /**< sl-PSBCH-Config-r16 是否存在。 */
    SetupRelease_SL_PSBCH_Config_r16 sl_PSBCH_Config_r16; /**< ASN.1 sl-PSBCH-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_TxDirectCurrentLocation_r16; /**< sl-TxDirectCurrentLocation-r16 是否存在。 */
    int64_t sl_TxDirectCurrentLocation_r16; /**< ASN.1 sl-TxDirectCurrentLocation-r16；INTEGER (0..3301)，位宽 12 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_BWP_Generic_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_BWP_Config_r16
 * @note ASN.1：SL-BWP-Config-r16；源文件第 21894 行。
 * @note SL-BWP-Config-r16 ::= SEQUENCE { sl-BWP-Id, sl-BWP-Generic-r16, sl-BWP-PoolConfig-r16, sl-BWP-PoolC...
 */
struct SL_BWP_Config_r16 {
    BWP_Id sl_BWP_Id; /**< ASN.1 sl-BWP-Id；INTEGER (0..4)，位宽 3 bit。 */
    bool has_sl_BWP_Generic_r16; /**< sl-BWP-Generic-r16 是否存在。 */
    SL_BWP_Generic_r16 sl_BWP_Generic_r16; /**< ASN.1 sl-BWP-Generic-r16；结构体；OPTIONAL。 */
    bool has_sl_BWP_PoolConfig_r16; /**< sl-BWP-PoolConfig-r16 是否存在。 */
    SL_BWP_PoolConfig_r16 sl_BWP_PoolConfig_r16; /**< ASN.1 sl-BWP-PoolConfig-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_BWP_Config_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_BWP_Config_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_BWP_DiscPoolConfigCommon_r17
 * @note ASN.1：SL-BWP-DiscPoolConfigCommon-r17；源文件第 21960 行。
 * @note SL-BWP-DiscPoolConfigCommon-r17 ::= SEQUENCE { sl-DiscRxPool-r17, sl-DiscTxPoolSelected-r17 }
 */
struct SL_BWP_DiscPoolConfigCommon_r17 {
    bool has_sl_DiscRxPool_r17; /**< sl-DiscRxPool-r17 是否存在。 */
    SL_ResourcePool_r16* sl_DiscRxPool_r17_items; /**< ASN.1 sl-DiscRxPool-r17；SEQUENCE OF SL_ResourcePool_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DiscRxPool_r17_count; /**< sl-DiscRxPool-r17 元素个数。 */
    bool has_sl_DiscTxPoolSelected_r17; /**< sl-DiscTxPoolSelected-r17 是否存在。 */
    SL_ResourcePoolConfig_r16* sl_DiscTxPoolSelected_r17_items; /**< ASN.1 sl-DiscTxPoolSelected-r17；SEQUENCE OF SL_ResourcePoolConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_DiscTxPoolSelected_r17_count; /**< sl-DiscTxPoolSelected-r17 元素个数。 */
};


/**
 * @brief SL_BWP_PoolConfigCommon_r16
 * @note ASN.1：SL-BWP-PoolConfigCommon-r16；源文件第 21991 行。
 * @note SL-BWP-PoolConfigCommon-r16 ::= SEQUENCE { sl-RxPool-r16, sl-TxPoolSelectedNormal-r16, sl-TxPoolExceptional-r...
 */
struct SL_BWP_PoolConfigCommon_r16 {
    bool has_sl_RxPool_r16; /**< sl-RxPool-r16 是否存在。 */
    SL_ResourcePool_r16* sl_RxPool_r16_items; /**< ASN.1 sl-RxPool-r16；SEQUENCE OF SL_ResourcePool_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_RxPool_r16_count; /**< sl-RxPool-r16 元素个数。 */
    bool has_sl_TxPoolSelectedNormal_r16; /**< sl-TxPoolSelectedNormal-r16 是否存在。 */
    SL_ResourcePoolConfig_r16* sl_TxPoolSelectedNormal_r16_items; /**< ASN.1 sl-TxPoolSelectedNormal-r16；SEQUENCE OF SL_ResourcePoolConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_TxPoolSelectedNormal_r16_count; /**< sl-TxPoolSelectedNormal-r16 元素个数。 */
    bool has_sl_TxPoolExceptional_r16; /**< sl-TxPoolExceptional-r16 是否存在。 */
    SL_ResourcePoolConfig_r16 sl_TxPoolExceptional_r16; /**< ASN.1 sl-TxPoolExceptional-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_BWP_ConfigCommon_r16_ExtGroup1
 * @note ASN.1：SL_BWP_ConfigCommon_r16_ExtGroup1；源文件第 21939 行。
 */
struct SL_BWP_ConfigCommon_r16_ExtGroup1 {
    bool has_sl_BWP_PoolConfigCommonPS_r17; /**< sl-BWP-PoolConfigCommonPS-r17 是否存在。 */
    SL_BWP_PoolConfigCommon_r16 sl_BWP_PoolConfigCommonPS_r17; /**< ASN.1 sl-BWP-PoolConfigCommonPS-r17；结构体；OPTIONAL。 */
    bool has_sl_BWP_DiscPoolConfigCommon_r17; /**< sl-BWP-DiscPoolConfigCommon-r17 是否存在。 */
    SL_BWP_DiscPoolConfigCommon_r17 sl_BWP_DiscPoolConfigCommon_r17; /**< ASN.1 sl-BWP-DiscPoolConfigCommon-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_BWP_ConfigCommon_r16_ExtGroup2
 * @note ASN.1：SL_BWP_ConfigCommon_r16_ExtGroup2；源文件第 21943 行。
 */
struct SL_BWP_ConfigCommon_r16_ExtGroup2 {
    bool has_sl_BWP_PoolConfigCommonA2X_r18; /**< sl-BWP-PoolConfigCommonA2X-r18 是否存在。 */
    SL_BWP_PoolConfigCommon_r16 sl_BWP_PoolConfigCommonA2X_r18; /**< ASN.1 sl-BWP-PoolConfigCommonA2X-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_BWP_ConfigCommon_r16
 * @note ASN.1：SL-BWP-ConfigCommon-r16；源文件第 21935 行。
 * @note SL-BWP-ConfigCommon-r16 ::= SEQUENCE { sl-BWP-Generic-r16, sl-BWP-PoolConfigCommon-r16, sl-BWP-PoolConfig...
 */
struct SL_BWP_ConfigCommon_r16 {
    bool has_sl_BWP_Generic_r16; /**< sl-BWP-Generic-r16 是否存在。 */
    SL_BWP_Generic_r16 sl_BWP_Generic_r16; /**< ASN.1 sl-BWP-Generic-r16；结构体；OPTIONAL。 */
    bool has_sl_BWP_PoolConfigCommon_r16; /**< sl-BWP-PoolConfigCommon-r16 是否存在。 */
    SL_BWP_PoolConfigCommon_r16 sl_BWP_PoolConfigCommon_r16; /**< ASN.1 sl-BWP-PoolConfigCommon-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_BWP_ConfigCommon_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_BWP_ConfigCommon_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_BWP_PRS_PoolConfigCommon_r18
 * @note ASN.1：SL-BWP-PRS-PoolConfigCommon-r18；源文件第 22022 行。
 * @note SL-BWP-PRS-PoolConfigCommon-r18 ::= SEQUENCE { sl-PRS-RxPool-r18, sl-PRS-TxPoolSelectedNormal-r18, sl-PRS-TxPoolE...
 */
struct SL_BWP_PRS_PoolConfigCommon_r18 {
    bool has_sl_PRS_RxPool_r18; /**< sl-PRS-RxPool-r18 是否存在。 */
    SL_PRS_ResourcePool_r18* sl_PRS_RxPool_r18_items; /**< ASN.1 sl-PRS-RxPool-r18；SEQUENCE OF SL_PRS_ResourcePool_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_RxPool_r18_count; /**< sl-PRS-RxPool-r18 元素个数。 */
    bool has_sl_PRS_TxPoolSelectedNormal_r18; /**< sl-PRS-TxPoolSelectedNormal-r18 是否存在。 */
    SL_PRS_ResourcePoolConfig_r18* sl_PRS_TxPoolSelectedNormal_r18_items; /**< ASN.1 sl-PRS-TxPoolSelectedNormal-r18；SEQUENCE OF SL_PRS_ResourcePoolConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_TxPoolSelectedNormal_r18_count; /**< sl-PRS-TxPoolSelectedNormal-r18 元素个数。 */
    bool has_sl_PRS_TxPoolExceptional_r18; /**< sl-PRS-TxPoolExceptional-r18 是否存在。 */
    SL_PRS_ResourcePoolConfig_r18 sl_PRS_TxPoolExceptional_r18; /**< ASN.1 sl-PRS-TxPoolExceptional-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_PriorityTxConfigIndex_r16
 * @note ASN.1：SL-PriorityTxConfigIndex-r16；源文件第 22036 行。
 * @note SL-PriorityTxConfigIndex-r16 ::= SEQUENCE { sl-PriorityThreshold-r16, sl-DefaultTxConfigIndex-r16, sl-CBR-Conf...
 */
struct SL_PriorityTxConfigIndex_r16 {
    bool has_sl_PriorityThreshold_r16; /**< sl-PriorityThreshold-r16 是否存在。 */
    int64_t sl_PriorityThreshold_r16; /**< ASN.1 sl-PriorityThreshold-r16；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_DefaultTxConfigIndex_r16; /**< sl-DefaultTxConfigIndex-r16 是否存在。 */
    int64_t sl_DefaultTxConfigIndex_r16; /**< ASN.1 sl-DefaultTxConfigIndex-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CBR_ConfigIndex_r16; /**< sl-CBR-ConfigIndex-r16 是否存在。 */
    int64_t sl_CBR_ConfigIndex_r16; /**< ASN.1 sl-CBR-ConfigIndex-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_Tx_ConfigIndexList_r16; /**< sl-Tx-ConfigIndexList-r16 是否存在。 */
    SL_TxConfigIndex_r16* sl_Tx_ConfigIndexList_r16_items; /**< ASN.1 sl-Tx-ConfigIndexList-r16；SEQUENCE OF SL_TxConfigIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_Tx_ConfigIndexList_r16_count; /**< sl-Tx-ConfigIndexList-r16 元素个数。 */
};


/**
 * @brief SL_PriorityTxConfigIndex_v1650
 * @note ASN.1：SL-PriorityTxConfigIndex-v1650；源文件第 22043 行。
 * @note SL-PriorityTxConfigIndex-v1650 ::= SEQUENCE { sl-MCS-RangeList-r16 }
 */
struct SL_PriorityTxConfigIndex_v1650 {
    bool has_sl_MCS_RangeList_r16; /**< sl-MCS-RangeList-r16 是否存在。 */
    SL_MinMaxMCS_List_r16* sl_MCS_RangeList_r16_items; /**< ASN.1 sl-MCS-RangeList-r16；SEQUENCE OF SL_MinMaxMCS_List_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MCS_RangeList_r16_count; /**< sl-MCS-RangeList-r16 元素个数。 */
};


/**
 * @brief SL_CBR_LevelsConfig_r16
 * @note ASN.1：SL-CBR-LevelsConfig-r16；源文件第 22057 行。
 * @note SL-CBR-LevelsConfig-r16 ::= SEQUENCE OF (size 1..16) OF SL-CBR-r16
 */
struct SL_CBR_LevelsConfig_r16 {
    SL_CBR_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_TxPower_r16
 * @note ASN.1：SL-TxPower-r16；源文件第 23389 行。
 * @note SL-TxPower-r16 ::= CHOICE { minusinfinity-r16, txPower-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_TxPower_r16_Tag {
    SL_TxPower_r16_Tag_minusinfinity_r16 = 0, /**< ASN.1 minusinfinity-r16 */
    SL_TxPower_r16_Tag_txPower_r16 = 1, /**< ASN.1 txPower-r16 */
} SL_TxPower_r16_Tag;

struct SL_TxPower_r16 {
    SL_TxPower_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null minusinfinity_r16; /**< ASN.1 minusinfinity-r16 */
        int64_t txPower_r16; /**< ASN.1 txPower-r16 */
    } u;
};


/**
 * @brief SL_PSSCH_TxParameters_r16
 * @note ASN.1：SL-PSSCH-TxParameters-r16；源文件第 22803 行。
 * @note SL-PSSCH-TxParameters-r16 ::= SEQUENCE { sl-MinMCS-PSSCH-r16, sl-MaxMCS-PSSCH-r16, sl-MinSubChannelNumPSSCH...
 */
struct SL_PSSCH_TxParameters_r16 {
    int64_t sl_MinMCS_PSSCH_r16; /**< ASN.1 sl-MinMCS-PSSCH-r16；INTEGER (0..27)，位宽 5 bit。 */
    int64_t sl_MaxMCS_PSSCH_r16; /**< ASN.1 sl-MaxMCS-PSSCH-r16；INTEGER (0..31)，位宽 5 bit。 */
    int64_t sl_MinSubChannelNumPSSCH_r16; /**< ASN.1 sl-MinSubChannelNumPSSCH-r16；INTEGER (1..27)，位宽 5 bit。 */
    int64_t sl_MaxSubchannelNumPSSCH_r16; /**< ASN.1 sl-MaxSubchannelNumPSSCH-r16；INTEGER (1..27)，位宽 5 bit。 */
    int64_t sl_MaxTxTransNumPSSCH_r16; /**< ASN.1 sl-MaxTxTransNumPSSCH-r16；INTEGER (1..32)，位宽 5 bit。 */
    bool has_sl_MaxTxPower_r16; /**< sl-MaxTxPower-r16 是否存在。 */
    SL_TxPower_r16 sl_MaxTxPower_r16; /**< ASN.1 sl-MaxTxPower-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_CBR_PSSCH_TxConfig_r16
 * @note ASN.1：SL-CBR-PSSCH-TxConfig-r16；源文件第 22059 行。
 * @note SL-CBR-PSSCH-TxConfig-r16 ::= SEQUENCE { sl-CR-Limit-r16, sl-TxParameters-r16 }
 */
struct SL_CBR_PSSCH_TxConfig_r16 {
    bool has_sl_CR_Limit_r16; /**< sl-CR-Limit-r16 是否存在。 */
    int64_t sl_CR_Limit_r16; /**< ASN.1 sl-CR-Limit-r16；INTEGER (0..10000)，位宽 14 bit；OPTIONAL。 */
    bool has_sl_TxParameters_r16; /**< sl-TxParameters-r16 是否存在。 */
    SL_PSSCH_TxParameters_r16 sl_TxParameters_r16; /**< ASN.1 sl-TxParameters-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_CBR_LevelsDedicatedSL_PRS_RP_r18
 * @note ASN.1：SL-CBR-LevelsDedicatedSL-PRS-RP-r18；源文件第 22076 行。
 * @note SL-CBR-LevelsDedicatedSL-PRS-RP-r18 ::= SEQUENCE OF (size 0..15) OF SL-CBR-Dedicated-SL-PRS-RP-r18
 */
struct SL_CBR_LevelsDedicatedSL_PRS_RP_r18 {
    SL_CBR_Dedicated_SL_PRS_RP_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_CBR_SL_PRS_TxConfig_r18
 * @note ASN.1：SL-CBR-SL-PRS-TxConfig-r18；源文件第 22078 行。
 * @note SL-CBR-SL-PRS-TxConfig-r18 ::= SEQUENCE { sl-PRS-CR-Limit-r18, sl-PRS-MaxTx-power-r18, sl-PRS-MaxNum-Transmi...
 */
struct SL_CBR_SL_PRS_TxConfig_r18 {
    bool has_sl_PRS_CR_Limit_r18; /**< sl-PRS-CR-Limit-r18 是否存在。 */
    int64_t sl_PRS_CR_Limit_r18; /**< ASN.1 sl-PRS-CR-Limit-r18；INTEGER (0..10000)，位宽 14 bit；OPTIONAL。 */
    bool has_sl_PRS_MaxTx_power_r18; /**< sl-PRS-MaxTx-power-r18 是否存在。 */
    int64_t sl_PRS_MaxTx_power_r18; /**< ASN.1 sl-PRS-MaxTx-power-r18；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_sl_PRS_MaxNum_Transmissions_r18; /**< sl-PRS-MaxNum-Transmissions-r18 是否存在。 */
    int64_t sl_PRS_MaxNum_Transmissions_r18; /**< ASN.1 sl-PRS-MaxNum-Transmissions-r18；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SL_SCCH_CarrierSetConfig_r18
 * @note ASN.1：SL-SCCH-CarrierSetConfig-r18；源文件第 22152 行。
 * @note SL-SCCH-CarrierSetConfig-r18 ::= SEQUENCE { sl-DestinationList-r18, sl-SRB-Identity-r18, sl-AllowedCarrierFreq...
 */
struct SL_SCCH_CarrierSetConfig_r18 {
    SL_DestinationIdentity_r16* sl_DestinationList_r18_items; /**< ASN.1 sl-DestinationList-r18；SEQUENCE OF SL_DestinationIdentity_r16，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_DestinationList_r18_count; /**< sl-DestinationList-r18 元素个数。 */
    SRB_Identity* sl_SRB_Identity_r18_items; /**< ASN.1 sl-SRB-Identity-r18；SEQUENCE OF SRB_Identity，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_SRB_Identity_r18_count; /**< sl-SRB-Identity-r18 元素个数。 */
    int64_t* sl_AllowedCarrierFreqSet1_r18_items; /**< ASN.1 sl-AllowedCarrierFreqSet1-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_AllowedCarrierFreqSet1_r18_count; /**< sl-AllowedCarrierFreqSet1-r18 元素个数。 */
    int64_t* sl_AllowedCarrierFreqSet2_r18_items; /**< ASN.1 sl-AllowedCarrierFreqSet2-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_AllowedCarrierFreqSet2_r18_count; /**< sl-AllowedCarrierFreqSet2-r18 元素个数。 */
};


/**
 * @brief SL_ConfiguredGrantConfig_r16_ExtGroup1
 * @note ASN.1：SL_ConfiguredGrantConfig_r16_ExtGroup1；源文件第 22179 行。
 */
struct SL_ConfiguredGrantConfig_r16_ExtGroup1 {
    bool has_sl_N1PUCCH_AN_Type2_r16; /**< sl-N1PUCCH-AN-Type2-r16 是否存在。 */
    PUCCH_ResourceId sl_N1PUCCH_AN_Type2_r16; /**< ASN.1 sl-N1PUCCH-AN-Type2-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SL_ConfiguredGrantConfig_r16_ExtGroup2
 * @note ASN.1：SL_ConfiguredGrantConfig_r16_ExtGroup2；源文件第 22182 行。
 */
struct SL_ConfiguredGrantConfig_r16_ExtGroup2 {
    bool has_sl_StartRBsetCG_Type1_r18; /**< sl-StartRBsetCG-Type1-r18 是否存在。 */
    int64_t sl_StartRBsetCG_Type1_r18; /**< ASN.1 sl-StartRBsetCG-Type1-r18；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SL_CG_MaxTransNumList_r16
 * @note ASN.1：SL-CG-MaxTransNumList-r16；源文件第 22189 行。
 * @note SL-CG-MaxTransNumList-r16 ::= SEQUENCE OF (size 1..8) OF SL-CG-MaxTransNum-r16
 */
struct SL_CG_MaxTransNumList_r16 {
    SL_CG_MaxTransNum_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_PeriodCG_r16
 * @note ASN.1：SL-PeriodCG-r16；源文件第 22196 行。
 * @note SL-PeriodCG-r16 ::= CHOICE { sl-PeriodCG1-r16, sl-PeriodCG2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_PeriodCG_r16_Tag {
    SL_PeriodCG_r16_Tag_sl_PeriodCG1_r16 = 0, /**< ASN.1 sl-PeriodCG1-r16 */
    SL_PeriodCG_r16_Tag_sl_PeriodCG2_r16 = 1, /**< ASN.1 sl-PeriodCG2-r16 */
} SL_PeriodCG_r16_Tag;

struct SL_PeriodCG_r16 {
    SL_PeriodCG_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_PeriodCG_r16_Sl_PeriodCG1_r16 sl_PeriodCG1_r16; /**< ASN.1 sl-PeriodCG1-r16 */
        int64_t sl_PeriodCG2_r16; /**< ASN.1 sl-PeriodCG2-r16 */
    } u;
};


/**
 * @brief SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16
 * @note ASN.1：rrc-ConfiguredSidelinkGrant-r16；源文件第 22168 行。
 * @note SEQUENCE { sl-TimeResourceCG-Type1-r16, sl-StartSubchannelCG-Type1-r16, sl-Fr...
 */
struct SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16 {
    bool has_sl_TimeResourceCG_Type1_r16; /**< sl-TimeResourceCG-Type1-r16 是否存在。 */
    int64_t sl_TimeResourceCG_Type1_r16; /**< ASN.1 sl-TimeResourceCG-Type1-r16；INTEGER (0..496)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_StartSubchannelCG_Type1_r16; /**< sl-StartSubchannelCG-Type1-r16 是否存在。 */
    int64_t sl_StartSubchannelCG_Type1_r16; /**< ASN.1 sl-StartSubchannelCG-Type1-r16；INTEGER (0..26)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_FreqResourceCG_Type1_r16; /**< sl-FreqResourceCG-Type1-r16 是否存在。 */
    int64_t sl_FreqResourceCG_Type1_r16; /**< ASN.1 sl-FreqResourceCG-Type1-r16；INTEGER (0..6929)，位宽 13 bit；OPTIONAL。 */
    bool has_sl_TimeOffsetCG_Type1_r16; /**< sl-TimeOffsetCG-Type1-r16 是否存在。 */
    int64_t sl_TimeOffsetCG_Type1_r16; /**< ASN.1 sl-TimeOffsetCG-Type1-r16；INTEGER (0..7999)，位宽 13 bit；OPTIONAL。 */
    bool has_sl_N1PUCCH_AN_r16; /**< sl-N1PUCCH-AN-r16 是否存在。 */
    PUCCH_ResourceId sl_N1PUCCH_AN_r16; /**< ASN.1 sl-N1PUCCH-AN-r16；INTEGER (0..127)，位宽 7 bit；OPTIONAL。 */
    bool has_sl_PSFCH_ToPUCCH_CG_Type1_r16; /**< sl-PSFCH-ToPUCCH-CG-Type1-r16 是否存在。 */
    int64_t sl_PSFCH_ToPUCCH_CG_Type1_r16; /**< ASN.1 sl-PSFCH-ToPUCCH-CG-Type1-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_ResourcePoolID_r16; /**< sl-ResourcePoolID-r16 是否存在。 */
    SL_ResourcePoolID_r16 sl_ResourcePoolID_r16; /**< ASN.1 sl-ResourcePoolID-r16；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_TimeReferenceSFN_Type1_r16; /**< sl-TimeReferenceSFN-Type1-r16 是否存在。 */
    SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16_Sl_TimeReferenceSFN_Type1_r16 sl_TimeReferenceSFN_Type1_r16; /**< ASN.1 sl-TimeReferenceSFN-Type1-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_ConfiguredGrantConfig_r16
 * @note ASN.1：SL-ConfiguredGrantConfig-r16；源文件第 22162 行。
 * @note SL-ConfiguredGrantConfig-r16 ::= SEQUENCE { sl-ConfigIndexCG-r16, sl-PeriodCG-r16, sl-NrOfHARQ-Processes-r16, ...
 */
struct SL_ConfiguredGrantConfig_r16 {
    SL_ConfigIndexCG_r16 sl_ConfigIndexCG_r16; /**< ASN.1 sl-ConfigIndexCG-r16；INTEGER (0..7)，位宽 3 bit。 */
    bool has_sl_PeriodCG_r16; /**< sl-PeriodCG-r16 是否存在。 */
    SL_PeriodCG_r16 sl_PeriodCG_r16; /**< ASN.1 sl-PeriodCG-r16；结构体；OPTIONAL。 */
    bool has_sl_NrOfHARQ_Processes_r16; /**< sl-NrOfHARQ-Processes-r16 是否存在。 */
    int64_t sl_NrOfHARQ_Processes_r16; /**< ASN.1 sl-NrOfHARQ-Processes-r16；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_HARQ_ProcID_offset_r16; /**< sl-HARQ-ProcID-offset-r16 是否存在。 */
    int64_t sl_HARQ_ProcID_offset_r16; /**< ASN.1 sl-HARQ-ProcID-offset-r16；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CG_MaxTransNumList_r16; /**< sl-CG-MaxTransNumList-r16 是否存在。 */
    SL_CG_MaxTransNumList_r16 sl_CG_MaxTransNumList_r16; /**< ASN.1 sl-CG-MaxTransNumList-r16；SEQUENCE OF SL_CG_MaxTransNum_r16，SIZE (1..8)；OPTIONAL。 */
    bool has_rrc_ConfiguredSidelinkGrant_r16; /**< rrc-ConfiguredSidelinkGrant-r16 是否存在。 */
    SL_ConfiguredGrantConfig_r16_Rrc_ConfiguredSidelinkGrant_r16 rrc_ConfiguredSidelinkGrant_r16; /**< ASN.1 rrc-ConfiguredSidelinkGrant-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_ConfiguredGrantConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SL_ConfiguredGrantConfig_r16_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_CG_MaxTransNum_r16
 * @note ASN.1：SL-CG-MaxTransNum-r16；源文件第 22191 行。
 * @note SL-CG-MaxTransNum-r16 ::= SEQUENCE { sl-Priority-r16, sl-MaxTransNum-r16 }
 */
struct SL_CG_MaxTransNum_r16 {
    int64_t sl_Priority_r16; /**< ASN.1 sl-Priority-r16；INTEGER (1..8)，位宽 3 bit。 */
    int64_t sl_MaxTransNum_r16; /**< ASN.1 sl-MaxTransNum-r16；INTEGER (1..32)，位宽 5 bit。 */
};


/**
 * @brief SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18
 * @note ASN.1：rrc-ConfiguredSidelinkGrantDedicated-SL-PRS-RP-r18；源文件第 22209 行。
 * @note SEQUENCE { sl-TimeOffsetCG-Type1-r18, sl-TimeReferenceSFN-Type1-r18, sl-TimeR...
 */
struct SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18 {
    bool has_sl_TimeOffsetCG_Type1_r18; /**< sl-TimeOffsetCG-Type1-r18 是否存在。 */
    int64_t sl_TimeOffsetCG_Type1_r18; /**< ASN.1 sl-TimeOffsetCG-Type1-r18；INTEGER (0..7999)，位宽 13 bit；OPTIONAL。 */
    bool has_sl_TimeReferenceSFN_Type1_r18; /**< sl-TimeReferenceSFN-Type1-r18 是否存在。 */
    SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18_Sl_1fb5a88c sl_TimeReferenceSFN_Type1_r18; /**< ASN.1 sl-TimeReferenceSFN-Type1-r18；枚举；OPTIONAL。 */
    bool has_sl_TimeResourceCG_Type1_r18; /**< sl-TimeResourceCG-Type1-r18 是否存在。 */
    int64_t sl_TimeResourceCG_Type1_r18; /**< ASN.1 sl-TimeResourceCG-Type1-r18；INTEGER (0..496)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_PRS_ResourceIndicationFirstType1_r18; /**< sl-PRS-ResourceIndicationFirstType1-r18 是否存在。 */
    int64_t sl_PRS_ResourceIndicationFirstType1_r18; /**< ASN.1 sl-PRS-ResourceIndicationFirstType1-r18；INTEGER (0..11)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_PRS_ResourceIndicationFutureType1_r18; /**< sl-PRS-ResourceIndicationFutureType1-r18 是否存在。 */
    int64_t sl_PRS_ResourceIndicationFutureType1_r18; /**< ASN.1 sl-PRS-ResourceIndicationFutureType1-r18；INTEGER (0..143)，位宽 8 bit；OPTIONAL。 */
};


/**
 * @brief SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18
 * @note ASN.1：SL-ConfiguredGrantConfigDedicatedSL-PRS-RP-r18；源文件第 22205 行。
 * @note SL-ConfiguredGrantConfigDedicatedSL-PRS-RP-r18 ::= SEQUENCE { sl-ConfigIndexCG-r18, sl-PeriodCG-r18, sl-ResourcePoolID-r18, rrc-...
 */
struct SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18 {
    SL_ConfigIndexCG_r16 sl_ConfigIndexCG_r18; /**< ASN.1 sl-ConfigIndexCG-r18；INTEGER (0..7)，位宽 3 bit。 */
    bool has_sl_PeriodCG_r18; /**< sl-PeriodCG-r18 是否存在。 */
    SL_PeriodCG_r16 sl_PeriodCG_r18; /**< ASN.1 sl-PeriodCG-r18；结构体；OPTIONAL。 */
    bool has_sl_ResourcePoolID_r18; /**< sl-ResourcePoolID-r18 是否存在。 */
    SL_ResourcePoolID_r16 sl_ResourcePoolID_r18; /**< ASN.1 sl-ResourcePoolID-r18；INTEGER (1..16)，位宽 4 bit；OPTIONAL。 */
    SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18_Rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18 rrc_ConfiguredSidelinkGrantDedicated_SL_PRS_RP_r18; /**< ASN.1 rrc-ConfiguredSidelinkGrantDedicated-SL-PRS-RP-r18；结构体。 */
};


/**
 * @brief SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17
 * @note ASN.1：sl-drx-onDurationTimer-r17；源文件第 22283 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag {
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag;

struct SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17
 * @note ASN.1：sl-drx-CycleStartOffset-r17；源文件第 22300 行。
 * @note CHOICE { ms10, ms20, ms32, ms40, ms60, ms64, ms70, ms80, ms128, ms160, ms256,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag {
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10 = 0, /**< ASN.1 ms10 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms20 = 1, /**< ASN.1 ms20 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms32 = 2, /**< ASN.1 ms32 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms40 = 3, /**< ASN.1 ms40 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms60 = 4, /**< ASN.1 ms60 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms64 = 5, /**< ASN.1 ms64 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms70 = 6, /**< ASN.1 ms70 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms80 = 7, /**< ASN.1 ms80 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms128 = 8, /**< ASN.1 ms128 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms160 = 9, /**< ASN.1 ms160 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms256 = 10, /**< ASN.1 ms256 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms320 = 11, /**< ASN.1 ms320 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms512 = 12, /**< ASN.1 ms512 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms640 = 13, /**< ASN.1 ms640 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1024 = 14, /**< ASN.1 ms1024 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms1280 = 15, /**< ASN.1 ms1280 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2048 = 16, /**< ASN.1 ms2048 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms2560 = 17, /**< ASN.1 ms2560 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms5120 = 18, /**< ASN.1 ms5120 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag_ms10240 = 19, /**< ASN.1 ms10240 */
} SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag;

struct SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
 * @brief SL_DRX_ConfigUC_r17
 * @note ASN.1：SL-DRX-ConfigUC-r17；源文件第 22282 行。
 * @note SL-DRX-ConfigUC-r17 ::= SEQUENCE { sl-drx-onDurationTimer-r17, sl-drx-InactivityTimer-r17, sl-drx-HAR...
 */
struct SL_DRX_ConfigUC_r17 {
    SL_DRX_ConfigUC_r17_Sl_drx_onDurationTimer_r17 sl_drx_onDurationTimer_r17; /**< ASN.1 sl-drx-onDurationTimer-r17；结构体。 */
    SL_DRX_ConfigUC_r17_Sl_drx_InactivityTimer_r17 sl_drx_InactivityTimer_r17; /**< ASN.1 sl-drx-InactivityTimer-r17；枚举。 */
    bool has_sl_drx_HARQ_RTT_Timer1_r17; /**< sl-drx-HARQ-RTT-Timer1-r17 是否存在。 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer1_r17 sl_drx_HARQ_RTT_Timer1_r17; /**< ASN.1 sl-drx-HARQ-RTT-Timer1-r17；枚举；OPTIONAL。 */
    bool has_sl_drx_HARQ_RTT_Timer2_r17; /**< sl-drx-HARQ-RTT-Timer2-r17 是否存在。 */
    SL_DRX_ConfigUC_r17_Sl_drx_HARQ_RTT_Timer2_r17 sl_drx_HARQ_RTT_Timer2_r17; /**< ASN.1 sl-drx-HARQ-RTT-Timer2-r17；枚举；OPTIONAL。 */
    SL_DRX_ConfigUC_r17_Sl_drx_RetransmissionTimer_r17 sl_drx_RetransmissionTimer_r17; /**< ASN.1 sl-drx-RetransmissionTimer-r17；枚举。 */
    SL_DRX_ConfigUC_r17_Sl_drx_CycleStartOffset_r17 sl_drx_CycleStartOffset_r17; /**< ASN.1 sl-drx-CycleStartOffset-r17；结构体。 */
    int64_t sl_drx_SlotOffset; /**< ASN.1 sl-drx-SlotOffset；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief SL_DRX_ConfigUC_Info_r17
 * @note ASN.1：SL-DRX-ConfigUC-Info-r17；源文件第 22233 行。
 * @note SL-DRX-ConfigUC-Info-r17 ::= SEQUENCE { sl-DestinationIndex-r17, sl-DRX-ConfigUC-r17 }
 */
struct SL_DRX_ConfigUC_Info_r17 {
    bool has_sl_DestinationIndex_r17; /**< sl-DestinationIndex-r17 是否存在。 */
    SL_DestinationIndex_r16 sl_DestinationIndex_r17; /**< ASN.1 sl-DestinationIndex-r17；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_DRX_ConfigUC_r17; /**< sl-DRX-ConfigUC-r17 是否存在。 */
    SL_DRX_ConfigUC_r17 sl_DRX_ConfigUC_r17; /**< ASN.1 sl-DRX-ConfigUC-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_SyncConfigList_r16
 * @note ASN.1：SL-SyncConfigList-r16；源文件第 23352 行。
 * @note SL-SyncConfigList-r16 ::= SEQUENCE OF (size 1..16) OF SL-SyncConfig-r16
 */
struct SL_SyncConfigList_r16 {
    SL_SyncConfig_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_FreqConfig_r16
 * @note ASN.1：SL-FreqConfig-r16；源文件第 22364 行。
 * @note SL-FreqConfig-r16 ::= SEQUENCE { sl-Freq-Id-r16, sl-SCS-SpecificCarrierList-r16, sl-AbsoluteFrequen...
 */
struct SL_FreqConfig_r16 {
    SL_Freq_Id_r16 sl_Freq_Id_r16; /**< ASN.1 sl-Freq-Id-r16；INTEGER (1..8)，位宽 3 bit。 */
    SCS_SpecificCarrier* sl_SCS_SpecificCarrierList_r16_items; /**< ASN.1 sl-SCS-SpecificCarrierList-r16；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_SCS_SpecificCarrierList_r16_count; /**< sl-SCS-SpecificCarrierList-r16 元素个数。 */
    bool has_sl_AbsoluteFrequencyPointA_r16; /**< sl-AbsoluteFrequencyPointA-r16 是否存在。 */
    ARFCN_ValueNR sl_AbsoluteFrequencyPointA_r16; /**< ASN.1 sl-AbsoluteFrequencyPointA-r16；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_sl_AbsoluteFrequencySSB_r16; /**< sl-AbsoluteFrequencySSB-r16 是否存在。 */
    ARFCN_ValueNR sl_AbsoluteFrequencySSB_r16; /**< ASN.1 sl-AbsoluteFrequencySSB-r16；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_frequencyShift7p5khzSL_r16; /**< frequencyShift7p5khzSL-r16 是否存在。 */
    SL_FreqConfig_r16_FrequencyShift7p5khzSL_r16 frequencyShift7p5khzSL_r16; /**< ASN.1 frequencyShift7p5khzSL-r16；枚举；OPTIONAL。 */
    int64_t valueN_r16; /**< ASN.1 valueN-r16；INTEGER (-1..1)，位宽 2 bit。 */
    bool has_sl_BWP_ToReleaseList_r16; /**< sl-BWP-ToReleaseList-r16 是否存在。 */
    BWP_Id* sl_BWP_ToReleaseList_r16_items; /**< ASN.1 sl-BWP-ToReleaseList-r16；SEQUENCE OF BWP_Id，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_BWP_ToReleaseList_r16_count; /**< sl-BWP-ToReleaseList-r16 元素个数。 */
    bool has_sl_BWP_ToAddModList_r16; /**< sl-BWP-ToAddModList-r16 是否存在。 */
    SL_BWP_Config_r16* sl_BWP_ToAddModList_r16_items; /**< ASN.1 sl-BWP-ToAddModList-r16；SEQUENCE OF SL_BWP_Config_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_BWP_ToAddModList_r16_count; /**< sl-BWP-ToAddModList-r16 元素个数。 */
    bool has_sl_SyncConfigList_r16; /**< sl-SyncConfigList-r16 是否存在。 */
    SL_SyncConfigList_r16 sl_SyncConfigList_r16; /**< ASN.1 sl-SyncConfigList-r16；SEQUENCE OF SL_SyncConfig_r16，SIZE (1..16)；OPTIONAL。 */
    bool has_sl_SyncPriority_r16; /**< sl-SyncPriority-r16 是否存在。 */
    SL_FreqConfig_r16_Sl_SyncPriority_r16 sl_SyncPriority_r16; /**< ASN.1 sl-SyncPriority-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18
 * @note ASN.1：sl-EnergyDetectionConfig-r18；源文件第 22383 行。
 * @note CHOICE { sl-MaxEnergyDetectionThreshold-r18, sl-EnergyDetectionThresholdOffse...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag {
    SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18 = 0, /**< ASN.1 sl-MaxEnergyDetectionThreshold-r18 */
    SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18 = 1, /**< ASN.1 sl-EnergyDetectionThresholdOffset-r18 */
} SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag;

struct SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18 {
    SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl_MaxEnergyDetectionThreshold_r18; /**< ASN.1 sl-MaxEnergyDetectionThreshold-r18 */
        int64_t sl_EnergyDetectionThresholdOffset_r18; /**< ASN.1 sl-EnergyDetectionThresholdOffset-r18 */
    } u;
};


/**
 * @brief SL_FreqConfigExt_v1800
 * @note ASN.1：SL-FreqConfigExt-v1800；源文件第 22379 行。
 * @note SL-FreqConfigExt-v1800 ::= SEQUENCE { absenceOfAnyOtherTechnology-r18, sl-FreqSelectionConfigList-r18, s...
 */
struct SL_FreqConfigExt_v1800 {
    bool has_absenceOfAnyOtherTechnology_r18; /**< absenceOfAnyOtherTechnology-r18 是否存在。 */
    SL_FreqConfigExt_v1800_AbsenceOfAnyOtherTechnology_r18 absenceOfAnyOtherTechnology_r18; /**< ASN.1 absenceOfAnyOtherTechnology-r18；枚举；OPTIONAL。 */
    bool has_sl_FreqSelectionConfigList_r18; /**< sl-FreqSelectionConfigList-r18 是否存在。 */
    SL_FreqSelectionConfig_r18* sl_FreqSelectionConfigList_r18_items; /**< ASN.1 sl-FreqSelectionConfigList-r18；SEQUENCE OF SL_FreqSelectionConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqSelectionConfigList_r18_count; /**< sl-FreqSelectionConfigList-r18 元素个数。 */
    bool has_sl_SyncTxDisabled_r18; /**< sl-SyncTxDisabled-r18 是否存在。 */
    SL_FreqConfigExt_v1800_Sl_SyncTxDisabled_r18 sl_SyncTxDisabled_r18; /**< ASN.1 sl-SyncTxDisabled-r18；枚举；OPTIONAL。 */
    bool has_sl_EnergyDetectionConfig_r18; /**< sl-EnergyDetectionConfig-r18 是否存在。 */
    SL_FreqConfigExt_v1800_Sl_EnergyDetectionConfig_r18 sl_EnergyDetectionConfig_r18; /**< ASN.1 sl-EnergyDetectionConfig-r18；结构体；OPTIONAL。 */
    bool has_ue_ToUE_COT_SharingED_Threshold_r18; /**< ue-ToUE-COT-SharingED-Threshold-r18 是否存在。 */
    int64_t ue_ToUE_COT_SharingED_Threshold_r18; /**< ASN.1 ue-ToUE-COT-SharingED-Threshold-r18；INTEGER (-85..-52)，位宽 6 bit；OPTIONAL。 */
    bool has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18; /**< harq-ACK-FeedbackRatioforCW-AdjustmentGC-Option2-r18 是否存在。 */
    int64_t harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18; /**< ASN.1 harq-ACK-FeedbackRatioforCW-AdjustmentGC-Option2-r18；INTEGER (10..100)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18
 * @note ASN.1：sl-UnlicensedFreqConfigCommon-r18/sl-EnergyDetectionConfig-r18；源文件第 22411 行。
 * @note CHOICE { sl-MaxEnergyDetectionThreshold-r18, sl-EnergyDetectionThresholdOffse...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag {
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_MaxEnergyDetectionThreshold_r18 = 0, /**< ASN.1 sl-MaxEnergyDetectionThreshold-r18 */
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag_sl_EnergyDetectionThresholdOffset_r18 = 1, /**< ASN.1 sl-EnergyDetectionThresholdOffset-r18 */
} SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag;

struct SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18 {
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t sl_MaxEnergyDetectionThreshold_r18; /**< ASN.1 sl-MaxEnergyDetectionThreshold-r18 */
        int64_t sl_EnergyDetectionThresholdOffset_r18; /**< ASN.1 sl-EnergyDetectionThresholdOffset-r18 */
    } u;
};


/**
 * @brief SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18
 * @note ASN.1：sl-UnlicensedFreqConfigCommon-r18；源文件第 22407 行。
 * @note SEQUENCE { absenceOfAnyOtherTechnology-r18, sl-FreqSelectionConfigList-r18, s...
 */
struct SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18 {
    bool has_absenceOfAnyOtherTechnology_r18; /**< absenceOfAnyOtherTechnology-r18 是否存在。 */
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_AbsenceOfAnyOtherTechnology_r18 absenceOfAnyOtherTechnology_r18; /**< ASN.1 absenceOfAnyOtherTechnology-r18；枚举；OPTIONAL。 */
    bool has_sl_FreqSelectionConfigList_r18; /**< sl-FreqSelectionConfigList-r18 是否存在。 */
    SL_FreqSelectionConfig_r18* sl_FreqSelectionConfigList_r18_items; /**< ASN.1 sl-FreqSelectionConfigList-r18；SEQUENCE OF SL_FreqSelectionConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_FreqSelectionConfigList_r18_count; /**< sl-FreqSelectionConfigList-r18 元素个数。 */
    bool has_sl_SyncTxDisabled_r18; /**< sl-SyncTxDisabled-r18 是否存在。 */
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_SyncTxDisabled_r18 sl_SyncTxDisabled_r18; /**< ASN.1 sl-SyncTxDisabled-r18；枚举；OPTIONAL。 */
    bool has_sl_EnergyDetectionConfig_r18; /**< sl-EnergyDetectionConfig-r18 是否存在。 */
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18_Sl_EnergyDetectionConfig_r18 sl_EnergyDetectionConfig_r18; /**< ASN.1 sl-EnergyDetectionConfig-r18；结构体；OPTIONAL。 */
    bool has_ue_ToUE_COT_SharingED_Threshold_r18; /**< ue-ToUE-COT-SharingED-Threshold-r18 是否存在。 */
    int64_t ue_ToUE_COT_SharingED_Threshold_r18; /**< ASN.1 ue-ToUE-COT-SharingED-Threshold-r18；INTEGER (-85..-52)，位宽 6 bit；OPTIONAL。 */
    bool has_harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18; /**< harq-ACK-FeedbackRatioforCW-AdjustmentGC-Option2-r18 是否存在。 */
    int64_t harq_ACK_FeedbackRatioforCW_AdjustmentGC_Option2_r18; /**< ASN.1 harq-ACK-FeedbackRatioforCW-AdjustmentGC-Option2-r18；INTEGER (10..100)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SL_FreqConfigCommon_r16_ExtGroup1
 * @note ASN.1：SL_FreqConfigCommon_r16_ExtGroup1；源文件第 22406 行。
 */
struct SL_FreqConfigCommon_r16_ExtGroup1 {
    bool has_sl_UnlicensedFreqConfigCommon_r18; /**< sl-UnlicensedFreqConfigCommon-r18 是否存在。 */
    SL_FreqConfigCommon_r16_ExtGroup1_Sl_UnlicensedFreqConfigCommon_r18 sl_UnlicensedFreqConfigCommon_r18; /**< ASN.1 sl-UnlicensedFreqConfigCommon-r18；结构体；OPTIONAL。 */
    bool has_sl_PosBWP_List_r18; /**< sl-PosBWP-List-r18 是否存在。 */
    SL_PosBWP_ConfigCommon_r18* sl_PosBWP_List_r18_items; /**< ASN.1 sl-PosBWP-List-r18；SEQUENCE OF SL_PosBWP_ConfigCommon_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PosBWP_List_r18_count; /**< sl-PosBWP-List-r18 元素个数。 */
};


/**
 * @brief SL_FreqConfigCommon_r16
 * @note ASN.1：SL-FreqConfigCommon-r16；源文件第 22395 行。
 * @note SL-FreqConfigCommon-r16 ::= SEQUENCE { sl-SCS-SpecificCarrierList-r16, sl-AbsoluteFrequencyPointA-r16, sl...
 */
struct SL_FreqConfigCommon_r16 {
    SCS_SpecificCarrier* sl_SCS_SpecificCarrierList_r16_items; /**< ASN.1 sl-SCS-SpecificCarrierList-r16；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_SCS_SpecificCarrierList_r16_count; /**< sl-SCS-SpecificCarrierList-r16 元素个数。 */
    ARFCN_ValueNR sl_AbsoluteFrequencyPointA_r16; /**< ASN.1 sl-AbsoluteFrequencyPointA-r16；INTEGER (0..3279165)，位宽 22 bit。 */
    bool has_sl_AbsoluteFrequencySSB_r16; /**< sl-AbsoluteFrequencySSB-r16 是否存在。 */
    ARFCN_ValueNR sl_AbsoluteFrequencySSB_r16; /**< ASN.1 sl-AbsoluteFrequencySSB-r16；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_frequencyShift7p5khzSL_r16; /**< frequencyShift7p5khzSL-r16 是否存在。 */
    SL_FreqConfigCommon_r16_FrequencyShift7p5khzSL_r16 frequencyShift7p5khzSL_r16; /**< ASN.1 frequencyShift7p5khzSL-r16；枚举；OPTIONAL。 */
    int64_t valueN_r16; /**< ASN.1 valueN-r16；INTEGER (-1..1)，位宽 2 bit。 */
    bool has_sl_BWP_List_r16; /**< sl-BWP-List-r16 是否存在。 */
    SL_BWP_ConfigCommon_r16* sl_BWP_List_r16_items; /**< ASN.1 sl-BWP-List-r16；SEQUENCE OF SL_BWP_ConfigCommon_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_BWP_List_r16_count; /**< sl-BWP-List-r16 元素个数。 */
    bool has_sl_SyncPriority_r16; /**< sl-SyncPriority-r16 是否存在。 */
    SL_FreqConfigCommon_r16_Sl_SyncPriority_r16 sl_SyncPriority_r16; /**< ASN.1 sl-SyncPriority-r16；枚举；OPTIONAL。 */
    bool has_sl_NbAsSync_r16; /**< sl-NbAsSync-r16 是否存在。 */
    bool sl_NbAsSync_r16; /**< ASN.1 sl-NbAsSync-r16；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_sl_SyncConfigList_r16; /**< sl-SyncConfigList-r16 是否存在。 */
    SL_SyncConfigList_r16 sl_SyncConfigList_r16; /**< ASN.1 sl-SyncConfigList-r16；SEQUENCE OF SL_SyncConfig_r16，SIZE (1..16)；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_FreqConfigCommon_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_FreqSelectionConfig_r18
 * @note ASN.1：SL-FreqSelectionConfig-r18；源文件第 22424 行。
 * @note SL-FreqSelectionConfig-r18 ::= SEQUENCE { sl-priorityList-r18, sl-threshCBR-FreqReselection-r18, sl-threshCB...
 */
struct SL_FreqSelectionConfig_r18 {
    int64_t* sl_priorityList_r18_items; /**< ASN.1 sl-priorityList-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_priorityList_r18_count; /**< sl-priorityList-r18 元素个数。 */
    SL_CBR_r16 sl_threshCBR_FreqReselection_r18; /**< ASN.1 sl-threshCBR-FreqReselection-r18；INTEGER (0..100)，位宽 7 bit。 */
    SL_CBR_r16 sl_threshCBR_FreqKeeping_r18; /**< ASN.1 sl-threshCBR-FreqKeeping-r18；INTEGER (0..100)，位宽 7 bit。 */
};


/**
 * @brief SL_ThresholdRSRP_Condition1_B_1_r17
 * @note ASN.1：SL-ThresholdRSRP-Condition1-B-1-r17；源文件第 22486 行。
 * @note SL-ThresholdRSRP-Condition1-B-1-r17 ::= SEQUENCE { sl-Priority-r17, sl-ThresholdRSRP-Condition1-B-1-r17 }
 */
struct SL_ThresholdRSRP_Condition1_B_1_r17 {
    int64_t sl_Priority_r17; /**< ASN.1 sl-Priority-r17；INTEGER (1..8)，位宽 3 bit。 */
    int64_t sl_ThresholdRSRP_Condition1_B_1_r17; /**< ASN.1 sl-ThresholdRSRP-Condition1-B-1-r17；INTEGER (0..66)，位宽 7 bit。 */
};


/**
 * @brief SL_LogicalChannelConfig_r16_ExtGroup1
 * @note ASN.1：SL_LogicalChannelConfig_r16_ExtGroup1；源文件第 22521 行。
 */
struct SL_LogicalChannelConfig_r16_ExtGroup1 {
    bool has_sl_ChannelAccessPriority_r18; /**< sl-ChannelAccessPriority-r18 是否存在。 */
    int64_t sl_ChannelAccessPriority_r18; /**< ASN.1 sl-ChannelAccessPriority-r18；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_sl_AllowedCarriers_r18; /**< sl-AllowedCarriers-r18 是否存在。 */
    int64_t* sl_AllowedCarriers_r18_items; /**< ASN.1 sl-AllowedCarriers-r18；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_AllowedCarriers_r18_count; /**< sl-AllowedCarriers-r18 元素个数。 */
};


/**
 * @brief SL_LogicalChannelConfig_r16
 * @note ASN.1：SL-LogicalChannelConfig-r16；源文件第 22504 行。
 * @note SL-LogicalChannelConfig-r16 ::= SEQUENCE { sl-Priority-r16, sl-PrioritisedBitRate-r16, sl-BucketSizeDuration-...
 */
struct SL_LogicalChannelConfig_r16 {
    int64_t sl_Priority_r16; /**< ASN.1 sl-Priority-r16；INTEGER (1..8)，位宽 3 bit。 */
    SL_LogicalChannelConfig_r16_Sl_PrioritisedBitRate_r16 sl_PrioritisedBitRate_r16; /**< ASN.1 sl-PrioritisedBitRate-r16；枚举。 */
    SL_LogicalChannelConfig_r16_Sl_BucketSizeDuration_r16 sl_BucketSizeDuration_r16; /**< ASN.1 sl-BucketSizeDuration-r16；枚举。 */
    bool has_sl_ConfiguredGrantType1Allowed_r16; /**< sl-ConfiguredGrantType1Allowed-r16 是否存在。 */
    SL_LogicalChannelConfig_r16_Sl_ConfiguredGrantType1Allowed_r16 sl_ConfiguredGrantType1Allowed_r16; /**< ASN.1 sl-ConfiguredGrantType1Allowed-r16；枚举；OPTIONAL。 */
    bool has_sl_HARQ_FeedbackEnabled_r16; /**< sl-HARQ-FeedbackEnabled-r16 是否存在。 */
    SL_LogicalChannelConfig_r16_Sl_HARQ_FeedbackEnabled_r16 sl_HARQ_FeedbackEnabled_r16; /**< ASN.1 sl-HARQ-FeedbackEnabled-r16；枚举；OPTIONAL。 */
    bool has_sl_AllowedCG_List_r16; /**< sl-AllowedCG-List-r16 是否存在。 */
    SL_ConfigIndexCG_r16* sl_AllowedCG_List_r16_items; /**< ASN.1 sl-AllowedCG-List-r16；SEQUENCE OF SL_ConfigIndexCG_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_AllowedCG_List_r16_count; /**< sl-AllowedCG-List-r16 元素个数。 */
    bool has_sl_AllowedSCS_List_r16; /**< sl-AllowedSCS-List-r16 是否存在。 */
    SubcarrierSpacing* sl_AllowedSCS_List_r16_items; /**< ASN.1 sl-AllowedSCS-List-r16；SEQUENCE OF SubcarrierSpacing，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_AllowedSCS_List_r16_count; /**< sl-AllowedSCS-List-r16 元素个数。 */
    bool has_sl_MaxPUSCH_Duration_r16; /**< sl-MaxPUSCH-Duration-r16 是否存在。 */
    SL_LogicalChannelConfig_r16_Sl_MaxPUSCH_Duration_r16 sl_MaxPUSCH_Duration_r16; /**< ASN.1 sl-MaxPUSCH-Duration-r16；枚举；OPTIONAL。 */
    bool has_sl_LogicalChannelGroup_r16; /**< sl-LogicalChannelGroup-r16 是否存在。 */
    int64_t sl_LogicalChannelGroup_r16; /**< ASN.1 sl-LogicalChannelGroup-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_SchedulingRequestId_r16; /**< sl-SchedulingRequestId-r16 是否存在。 */
    SchedulingRequestId sl_SchedulingRequestId_r16; /**< ASN.1 sl-SchedulingRequestId-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_LogicalChannelSR_DelayTimerApplied_r16; /**< sl-LogicalChannelSR-DelayTimerApplied-r16 是否存在。 */
    bool sl_LogicalChannelSR_DelayTimerApplied_r16; /**< ASN.1 sl-LogicalChannelSR-DelayTimerApplied-r16；BOOLEAN，1 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_LogicalChannelConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_RemoteUE_ToAddMod_r17
 * @note ASN.1：SL-RemoteUE-ToAddMod-r17；源文件第 22539 行。
 * @note SL-RemoteUE-ToAddMod-r17 ::= SEQUENCE { sl-L2IdentityRemote-r17, sl-SRAP-ConfigRelay-r17 }
 */
struct SL_RemoteUE_ToAddMod_r17 {
    SL_DestinationIdentity_r16 sl_L2IdentityRemote_r17; /**< ASN.1 sl-L2IdentityRemote-r17；SIZE (24)，定长。 */
    bool has_sl_SRAP_ConfigRelay_r17; /**< sl-SRAP-ConfigRelay-r17 是否存在。 */
    SL_SRAP_Config_r17 sl_SRAP_ConfigRelay_r17; /**< ASN.1 sl-SRAP-ConfigRelay-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SL_U2U_RemoteUE_ToAddMod_r18
 * @note ASN.1：SL-U2U-RemoteUE-ToAddMod-r18；源文件第 22545 行。
 * @note SL-U2U-RemoteUE-ToAddMod-r18 ::= SEQUENCE { sl-L2IdentityRemoteUE-r18, sl-SourceRemoteUE-ToAddModList-r18, sl-...
 */
struct SL_U2U_RemoteUE_ToAddMod_r18 {
    SL_DestinationIdentity_r16 sl_L2IdentityRemoteUE_r18; /**< ASN.1 sl-L2IdentityRemoteUE-r18；SIZE (24)，定长。 */
    bool has_sl_SourceRemoteUE_ToAddModList_r18; /**< sl-SourceRemoteUE-ToAddModList-r18 是否存在。 */
    SL_SourceRemoteUE_ToAddMod_r18* sl_SourceRemoteUE_ToAddModList_r18_items; /**< ASN.1 sl-SourceRemoteUE-ToAddModList-r18；SEQUENCE OF SL_SourceRemoteUE_ToAddMod_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_SourceRemoteUE_ToAddModList_r18_count; /**< sl-SourceRemoteUE-ToAddModList-r18 元素个数。 */
    bool has_sl_SourceRemoteUE_ToReleaseList_r18; /**< sl-SourceRemoteUE-ToReleaseList-r18 是否存在。 */
    SL_SourceIdentity_r17* sl_SourceRemoteUE_ToReleaseList_r18_items; /**< ASN.1 sl-SourceRemoteUE-ToReleaseList-r18；SEQUENCE OF SL_SourceIdentity_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_SourceRemoteUE_ToReleaseList_r18_count; /**< sl-SourceRemoteUE-ToReleaseList-r18 元素个数。 */
};


/**
 * @brief SL_SRAP_ConfigU2U_r18
 * @note ASN.1：SL-SRAP-ConfigU2U-r18；源文件第 23338 行。
 * @note SL-SRAP-ConfigU2U-r18 ::= SEQUENCE { sl-MappingToAddMod-U2U-List-r18, sl-MappingToRelease-U2U-List-r18 }
 */
struct SL_SRAP_ConfigU2U_r18 {
    bool has_sl_MappingToAddMod_U2U_List_r18; /**< sl-MappingToAddMod-U2U-List-r18 是否存在。 */
    SL_MappingConfig_U2U_r18* sl_MappingToAddMod_U2U_List_r18_items; /**< ASN.1 sl-MappingToAddMod-U2U-List-r18；SEQUENCE OF SL_MappingConfig_U2U_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MappingToAddMod_U2U_List_r18_count; /**< sl-MappingToAddMod-U2U-List-r18 元素个数。 */
    bool has_sl_MappingToRelease_U2U_List_r18; /**< sl-MappingToRelease-U2U-List-r18 是否存在。 */
    SLRB_Uu_ConfigIndex_r16* sl_MappingToRelease_U2U_List_r18_items; /**< ASN.1 sl-MappingToRelease-U2U-List-r18；SEQUENCE OF SLRB_Uu_ConfigIndex_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MappingToRelease_U2U_List_r18_count; /**< sl-MappingToRelease-U2U-List-r18 元素个数。 */
};


/**
 * @brief SL_SourceRemoteUE_ToAddMod_r18
 * @note ASN.1：SL-SourceRemoteUE-ToAddMod-r18；源文件第 22552 行。
 * @note SL-SourceRemoteUE-ToAddMod-r18 ::= SEQUENCE { sl-SourceUE-Identity-r18, sl-SRAP-ConfigU2U-r18 }
 */
struct SL_SourceRemoteUE_ToAddMod_r18 {
    SL_SourceIdentity_r17 sl_SourceUE_Identity_r18; /**< ASN.1 sl-SourceUE-Identity-r18；SIZE (24)，定长。 */
    SL_SRAP_ConfigU2U_r18 sl_SRAP_ConfigU2U_r18; /**< ASN.1 sl-SRAP-ConfigU2U-r18；结构体。 */
};


/**
 * @brief SL_U2U_RelayUE_ToAddMod_r18
 * @note ASN.1：SL-U2U-RelayUE-ToAddMod-r18；源文件第 22571 行。
 * @note SL-U2U-RelayUE-ToAddMod-r18 ::= SEQUENCE { sl-L2IdentityRelay-r18, sl-PeerRemoteUE-ToAddModList-r18, sl-PeerR...
 */
struct SL_U2U_RelayUE_ToAddMod_r18 {
    SL_DestinationIdentity_r16 sl_L2IdentityRelay_r18; /**< ASN.1 sl-L2IdentityRelay-r18；SIZE (24)，定长。 */
    bool has_sl_PeerRemoteUE_ToAddModList_r18; /**< sl-PeerRemoteUE-ToAddModList-r18 是否存在。 */
    SL_PeerRemoteUE_ToAddMod_r18* sl_PeerRemoteUE_ToAddModList_r18_items; /**< ASN.1 sl-PeerRemoteUE-ToAddModList-r18；SEQUENCE OF SL_PeerRemoteUE_ToAddMod_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PeerRemoteUE_ToAddModList_r18_count; /**< sl-PeerRemoteUE-ToAddModList-r18 元素个数。 */
    bool has_sl_PeerRemoteUE_ToReleaseList_r18; /**< sl-PeerRemoteUE-ToReleaseList-r18 是否存在。 */
    SL_DestinationIdentity_r16* sl_PeerRemoteUE_ToReleaseList_r18_items; /**< ASN.1 sl-PeerRemoteUE-ToReleaseList-r18；SEQUENCE OF SL_DestinationIdentity_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PeerRemoteUE_ToReleaseList_r18_count; /**< sl-PeerRemoteUE-ToReleaseList-r18 元素个数。 */
};


/**
 * @brief SL_PeerRemoteUE_ToAddMod_r18
 * @note ASN.1：SL-PeerRemoteUE-ToAddMod-r18；源文件第 22578 行。
 * @note SL-PeerRemoteUE-ToAddMod-r18 ::= SEQUENCE { sl-TargetUE-Identity-r18, sl-SRAP-ConfigU2U-r18 }
 */
struct SL_PeerRemoteUE_ToAddMod_r18 {
    SL_DestinationIdentity_r16 sl_TargetUE_Identity_r18; /**< ASN.1 sl-TargetUE-Identity-r18；SIZE (24)，定长。 */
    SL_SRAP_ConfigU2U_r18 sl_SRAP_ConfigU2U_r18; /**< ASN.1 sl-SRAP-ConfigU2U-r18；结构体。 */
};


/**
 * @brief SL_MeasObjectToRemoveList_r16
 * @note ASN.1：SL-MeasObjectToRemoveList-r16；源文件第 22615 行。
 * @note SL-MeasObjectToRemoveList-r16 ::= SEQUENCE OF (size 1..64) OF SL-MeasObjectId-r16
 */
struct SL_MeasObjectToRemoveList_r16 {
    SL_MeasObjectId_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_ReportConfigToRemoveList_r16
 * @note ASN.1：SL-ReportConfigToRemoveList-r16；源文件第 22617 行。
 * @note SL-ReportConfigToRemoveList-r16 ::= SEQUENCE OF (size 1..64) OF SL-ReportConfigId-r16
 */
struct SL_ReportConfigToRemoveList_r16 {
    SL_ReportConfigId_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_MeasIdToRemoveList_r16
 * @note ASN.1：SL-MeasIdToRemoveList-r16；源文件第 22619 行。
 * @note SL-MeasIdToRemoveList-r16 ::= SEQUENCE OF (size 1..64) OF SL-MeasId-r16
 */
struct SL_MeasIdToRemoveList_r16 {
    SL_MeasId_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_MeasConfig_r16
 * @note ASN.1：SL-MeasConfig-r16；源文件第 22604 行。
 * @note SL-MeasConfig-r16 ::= SEQUENCE { sl-MeasObjectToRemoveList-r16, sl-MeasObjectToAddModList-r16, sl-R...
 */
struct SL_MeasConfig_r16 {
    bool has_sl_MeasObjectToRemoveList_r16; /**< sl-MeasObjectToRemoveList-r16 是否存在。 */
    SL_MeasObjectToRemoveList_r16 sl_MeasObjectToRemoveList_r16; /**< ASN.1 sl-MeasObjectToRemoveList-r16；SEQUENCE OF SL_MeasObjectId_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_MeasObjectToAddModList_r16; /**< sl-MeasObjectToAddModList-r16 是否存在。 */
    SL_MeasObjectList_r16 sl_MeasObjectToAddModList_r16; /**< ASN.1 sl-MeasObjectToAddModList-r16；SEQUENCE OF SL_MeasObjectInfo_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_ReportConfigToRemoveList_r16; /**< sl-ReportConfigToRemoveList-r16 是否存在。 */
    SL_ReportConfigToRemoveList_r16 sl_ReportConfigToRemoveList_r16; /**< ASN.1 sl-ReportConfigToRemoveList-r16；SEQUENCE OF SL_ReportConfigId_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_ReportConfigToAddModList_r16; /**< sl-ReportConfigToAddModList-r16 是否存在。 */
    SL_ReportConfigList_r16 sl_ReportConfigToAddModList_r16; /**< ASN.1 sl-ReportConfigToAddModList-r16；SEQUENCE OF SL_ReportConfigInfo_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_MeasIdToRemoveList_r16; /**< sl-MeasIdToRemoveList-r16 是否存在。 */
    SL_MeasIdToRemoveList_r16 sl_MeasIdToRemoveList_r16; /**< ASN.1 sl-MeasIdToRemoveList-r16；SEQUENCE OF SL_MeasId_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_MeasIdToAddModList_r16; /**< sl-MeasIdToAddModList-r16 是否存在。 */
    SL_MeasIdList_r16 sl_MeasIdToAddModList_r16; /**< ASN.1 sl-MeasIdToAddModList-r16；SEQUENCE OF SL_MeasIdInfo_r16，SIZE (1..64)；OPTIONAL。 */
    bool has_sl_QuantityConfig_r16; /**< sl-QuantityConfig-r16 是否存在。 */
    SL_QuantityConfig_r16 sl_QuantityConfig_r16; /**< ASN.1 sl-QuantityConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_MeasConfigInfo_r16
 * @note ASN.1：SL-MeasConfigInfo-r16；源文件第 22598 行。
 * @note SL-MeasConfigInfo-r16 ::= SEQUENCE { sl-DestinationIndex-r16, sl-MeasConfig-r16 }
 */
struct SL_MeasConfigInfo_r16 {
    SL_DestinationIndex_r16 sl_DestinationIndex_r16; /**< ASN.1 sl-DestinationIndex-r16；INTEGER (0..31)，位宽 5 bit。 */
    SL_MeasConfig_r16 sl_MeasConfig_r16; /**< ASN.1 sl-MeasConfig-r16；结构体。 */
};


/**
 * @brief SL_MeasIdInfo_r16
 * @note ASN.1：SL-MeasIdInfo-r16；源文件第 22626 行。
 * @note SL-MeasIdInfo-r16 ::= SEQUENCE { sl-MeasId-r16, sl-MeasObjectId-r16, sl-ReportConfigId-r16 }
 */
struct SL_MeasIdInfo_r16 {
    SL_MeasId_r16 sl_MeasId_r16; /**< ASN.1 sl-MeasId-r16；INTEGER (1..64)，位宽 6 bit。 */
    SL_MeasObjectId_r16 sl_MeasObjectId_r16; /**< ASN.1 sl-MeasObjectId-r16；INTEGER (1..64)，位宽 6 bit。 */
    SL_ReportConfigId_r16 sl_ReportConfigId_r16; /**< ASN.1 sl-ReportConfigId-r16；INTEGER (1..64)，位宽 6 bit。 */
};


/**
 * @brief SL_MeasObjectInfo_r16
 * @note ASN.1：SL-MeasObjectInfo-r16；源文件第 22640 行。
 * @note SL-MeasObjectInfo-r16 ::= SEQUENCE { sl-MeasObjectId-r16, sl-MeasObject-r16 }
 */
struct SL_MeasObjectInfo_r16 {
    SL_MeasObjectId_r16 sl_MeasObjectId_r16; /**< ASN.1 sl-MeasObjectId-r16；INTEGER (1..64)，位宽 6 bit。 */
    SL_MeasObject_r16 sl_MeasObject_r16; /**< ASN.1 sl-MeasObject-r16；结构体。 */
};


/**
 * @brief SL_PDCP_Config_r16
 * @note ASN.1：SL-PDCP-Config-r16；源文件第 22682 行。
 * @note SL-PDCP-Config-r16 ::= SEQUENCE { sl-DiscardTimer-r16, sl-PDCP-SN-Size-r16, sl-OutOfOrderDelivery }
 */
struct SL_PDCP_Config_r16 {
    bool has_sl_DiscardTimer_r16; /**< sl-DiscardTimer-r16 是否存在。 */
    SL_PDCP_Config_r16_Sl_DiscardTimer_r16 sl_DiscardTimer_r16; /**< ASN.1 sl-DiscardTimer-r16；枚举；OPTIONAL。 */
    bool has_sl_PDCP_SN_Size_r16; /**< sl-PDCP-SN-Size-r16 是否存在。 */
    SL_PDCP_Config_r16_Sl_PDCP_SN_Size_r16 sl_PDCP_SN_Size_r16; /**< ASN.1 sl-PDCP-SN-Size-r16；枚举；OPTIONAL。 */
    bool has_sl_OutOfOrderDelivery; /**< sl-OutOfOrderDelivery 是否存在。 */
    SL_PDCP_Config_r16_Sl_OutOfOrderDelivery sl_OutOfOrderDelivery; /**< ASN.1 sl-OutOfOrderDelivery；枚举；OPTIONAL。 */
};


/**
 * @brief SL_PosBWP_ConfigCommon_r18
 * @note ASN.1：SL-PosBWP-ConfigCommon-r18；源文件第 22693 行。
 * @note SL-PosBWP-ConfigCommon-r18 ::= SEQUENCE { sl-BWP-Generic-r18, sl-BWP-PRS-PoolConfigCommon-r18 }
 */
struct SL_PosBWP_ConfigCommon_r18 {
    bool has_sl_BWP_Generic_r18; /**< sl-BWP-Generic-r18 是否存在。 */
    SL_BWP_Generic_r16 sl_BWP_Generic_r18; /**< ASN.1 sl-BWP-Generic-r18；结构体；OPTIONAL。 */
    bool has_sl_BWP_PRS_PoolConfigCommon_r18; /**< sl-BWP-PRS-PoolConfigCommon-r18 是否存在。 */
    SL_BWP_PRS_PoolConfigCommon_r18 sl_BWP_PRS_PoolConfigCommon_r18; /**< ASN.1 sl-BWP-PRS-PoolConfigCommon-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18
 * @note ASN.1：SL-ReservationPeriodAllowedDedicatedSL-PRS-RP-r18；源文件第 22737 行。
 * @note SL-ReservationPeriodAllowedDedicatedSL-PRS-RP-r18 ::= CHOICE { sl-ResourceReservePeriod1-r18, sl-ResourceReservePeriod2-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag {
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod1_r18 = 0, /**< ASN.1 sl-ResourceReservePeriod1-r18 */
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag_sl_ResourceReservePeriod2_r18 = 1, /**< ASN.1 sl-ResourceReservePeriod2-r18 */
} SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag;

struct SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18 {
    SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_ReservationPeriodAllowedDedicatedSL_PRS_RP_r18_Sl_ResourceReservePeriod1_r18 sl_ResourceReservePeriod1_r18; /**< ASN.1 sl-ResourceReservePeriod1-r18 */
        int64_t sl_ResourceReservePeriod2_r18; /**< ASN.1 sl-ResourceReservePeriod2-r18 */
    } u;
};


/**
 * @brief SL_PRS_ResourceDedicatedSL_PRS_RP_r18
 * @note ASN.1：SL-PRS-ResourceDedicatedSL-PRS-RP-r18；源文件第 22742 行。
 * @note SL-PRS-ResourceDedicatedSL-PRS-RP-r18 ::= SEQUENCE { sl-PRS-ResourceID-r18, sl-NumberOfSymbols-r18, sl-CombSize-r18, sl...
 */
struct SL_PRS_ResourceDedicatedSL_PRS_RP_r18 {
    bool has_sl_PRS_ResourceID_r18; /**< sl-PRS-ResourceID-r18 是否存在。 */
    int64_t sl_PRS_ResourceID_r18; /**< ASN.1 sl-PRS-ResourceID-r18；INTEGER (0..11)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_NumberOfSymbols_r18; /**< sl-NumberOfSymbols-r18 是否存在。 */
    int64_t sl_NumberOfSymbols_r18; /**< ASN.1 sl-NumberOfSymbols-r18；INTEGER (1..9)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CombSize_r18; /**< sl-CombSize-r18 是否存在。 */
    SL_PRS_ResourceDedicatedSL_PRS_RP_r18_Sl_CombSize_r18 sl_CombSize_r18; /**< ASN.1 sl-CombSize-r18；枚举；OPTIONAL。 */
    bool has_sl_PRS_starting_symbol_r18; /**< sl-PRS-starting-symbol-r18 是否存在。 */
    int64_t sl_PRS_starting_symbol_r18; /**< ASN.1 sl-PRS-starting-symbol-r18；INTEGER (4..12)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_PRS_comb_offset_r18; /**< sl-PRS-comb-offset-r18 是否存在。 */
    int64_t sl_PRS_comb_offset_r18; /**< ASN.1 sl-PRS-comb-offset-r18；INTEGER (1..5)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SL_TxPercentageDedicatedSL_PRS_RP_Config_r18
 * @note ASN.1：SL-TxPercentageDedicatedSL-PRS-RP-Config-r18；源文件第 22757 行。
 * @note SL-TxPercentageDedicatedSL-PRS-RP-Config-r18 ::= SEQUENCE { sl-TxPercentageDedicatedSL-PRS-RP-r18, sl-Priority-DedicatedSL-PRS...
 */
struct SL_TxPercentageDedicatedSL_PRS_RP_Config_r18 {
    bool has_sl_TxPercentageDedicatedSL_PRS_RP_r18; /**< sl-TxPercentageDedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_TxPercentageDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-TxPercentageDedicatedSL-PRS-RP-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_Priority_DedicatedSL_PRS_RP; /**< sl-Priority-DedicatedSL-PRS-RP 是否存在。 */
    SL_TxPercentageDedicatedSL_PRS_RP_Config_r18_Sl_Priority_DedicatedSL_PRS_RP sl_Priority_DedicatedSL_PRS_RP; /**< ASN.1 sl-Priority-DedicatedSL-PRS-RP；枚举；OPTIONAL。 */
};


/**
 * @brief SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18
 * @note ASN.1：SL-PriorityTxConfigIndexDedicatedSL-PRS-RP-r18；源文件第 22762 行。
 * @note SL-PriorityTxConfigIndexDedicatedSL-PRS-RP-r18 ::= SEQUENCE { sl-PriorityThresholdDedicatedSL-PRS-RP-r18, sl-DefaultTxConfigInde...
 */
struct SL_PriorityTxConfigIndexDedicatedSL_PRS_RP_r18 {
    bool has_sl_PriorityThresholdDedicatedSL_PRS_RP_r18; /**< sl-PriorityThresholdDedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_PriorityThresholdDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-PriorityThresholdDedicatedSL-PRS-RP-r18；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18; /**< sl-DefaultTxConfigIndexDedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_DefaultTxConfigIndexDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-DefaultTxConfigIndexDedicatedSL-PRS-RP-r18；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18; /**< sl-CBR-ConfigIndexDedicatedSL-PRS-RP-r18 是否存在。 */
    int64_t sl_CBR_ConfigIndexDedicatedSL_PRS_RP_r18; /**< ASN.1 sl-CBR-ConfigIndexDedicatedSL-PRS-RP-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_PRS_TxConfigIndexList_r18; /**< sl-PRS-TxConfigIndexList-r18 是否存在。 */
    SL_PRS_TxConfigIndex_r18* sl_PRS_TxConfigIndexList_r18_items; /**< ASN.1 sl-PRS-TxConfigIndexList-r18；SEQUENCE OF SL_PRS_TxConfigIndex_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_PRS_TxConfigIndexList_r18_count; /**< sl-PRS-TxConfigIndexList-r18 元素个数。 */
};


/**
 * @brief SL_PSSCH_TxConfig_r16_ExtGroup1
 * @note ASN.1：SL_PSSCH_TxConfig_r16_ExtGroup1；源文件第 22796 行。
 */
struct SL_PSSCH_TxConfig_r16_ExtGroup1 {
    bool has_sl_ParametersAboveThres_v1650; /**< sl-ParametersAboveThres-v1650 是否存在。 */
    SL_MinMaxMCS_List_r16 sl_ParametersAboveThres_v1650; /**< ASN.1 sl-ParametersAboveThres-v1650；SEQUENCE OF SL_MinMaxMCS_Config_r16，SIZE (1..3)；OPTIONAL。 */
    bool has_sl_ParametersBelowThres_v1650; /**< sl-ParametersBelowThres-v1650 是否存在。 */
    SL_MinMaxMCS_List_r16 sl_ParametersBelowThres_v1650; /**< ASN.1 sl-ParametersBelowThres-v1650；SEQUENCE OF SL_MinMaxMCS_Config_r16，SIZE (1..3)；OPTIONAL。 */
};


/**
 * @brief SL_PSSCH_TxConfig_r16
 * @note ASN.1：SL-PSSCH-TxConfig-r16；源文件第 22789 行。
 * @note SL-PSSCH-TxConfig-r16 ::= SEQUENCE { sl-TypeTxSync-r16, sl-ThresUE-Speed-r16, sl-ParametersAboveThres-r...
 */
struct SL_PSSCH_TxConfig_r16 {
    bool has_sl_TypeTxSync_r16; /**< sl-TypeTxSync-r16 是否存在。 */
    SL_TypeTxSync_r16 sl_TypeTxSync_r16; /**< ASN.1 sl-TypeTxSync-r16；枚举；OPTIONAL。 */
    SL_PSSCH_TxConfig_r16_Sl_ThresUE_Speed_r16 sl_ThresUE_Speed_r16; /**< ASN.1 sl-ThresUE-Speed-r16；枚举。 */
    SL_PSSCH_TxParameters_r16 sl_ParametersAboveThres_r16; /**< ASN.1 sl-ParametersAboveThres-r16；结构体。 */
    SL_PSSCH_TxParameters_r16 sl_ParametersBelowThres_r16; /**< ASN.1 sl-ParametersBelowThres-r16；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_PSSCH_TxConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_MappedQoS_FlowsListDedicated_r16
 * @note ASN.1：SL-MappedQoS-FlowsListDedicated-r16；源文件第 23294 行。
 * @note SL-MappedQoS-FlowsListDedicated-r16 ::= SEQUENCE { sl-MappedQoS-FlowsToAddList-r16, sl-MappedQoS-FlowsToReleaseList-r...
 */
struct SL_MappedQoS_FlowsListDedicated_r16 {
    bool has_sl_MappedQoS_FlowsToAddList_r16; /**< sl-MappedQoS-FlowsToAddList-r16 是否存在。 */
    SL_QoS_FlowIdentity_r16* sl_MappedQoS_FlowsToAddList_r16_items; /**< ASN.1 sl-MappedQoS-FlowsToAddList-r16；SEQUENCE OF SL_QoS_FlowIdentity_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MappedQoS_FlowsToAddList_r16_count; /**< sl-MappedQoS-FlowsToAddList-r16 元素个数。 */
    bool has_sl_MappedQoS_FlowsToReleaseList_r16; /**< sl-MappedQoS-FlowsToReleaseList-r16 是否存在。 */
    SL_QoS_FlowIdentity_r16* sl_MappedQoS_FlowsToReleaseList_r16_items; /**< ASN.1 sl-MappedQoS-FlowsToReleaseList-r16；SEQUENCE OF SL_QoS_FlowIdentity_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sl_MappedQoS_FlowsToReleaseList_r16_count; /**< sl-MappedQoS-FlowsToReleaseList-r16 元素个数。 */
};


/**
 * @brief SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16
 * @note ASN.1：sl-MappedQoS-Flows-r16/sl-MappedQoS-FlowsList-r16；源文件第 23287 行。
 * @note SEQUENCE OF (size 1..2048) OF SL-QoS-Profile-r16
 */
struct SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16 {
    SL_QoS_Profile_r16* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16
 * @note ASN.1：sl-MappedQoS-Flows-r16；源文件第 23286 行。
 * @note CHOICE { sl-MappedQoS-FlowsList-r16, sl-MappedQoS-FlowsListDedicated-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag {
    SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsList_r16 = 0, /**< ASN.1 sl-MappedQoS-FlowsList-r16 */
    SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag_sl_MappedQoS_FlowsListDedicated_r16 = 1, /**< ASN.1 sl-MappedQoS-FlowsListDedicated-r16 */
} SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag;

struct SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16 {
    SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16_Sl_MappedQoS_FlowsList_r16 sl_MappedQoS_FlowsList_r16; /**< ASN.1 sl-MappedQoS-FlowsList-r16 */
        SL_MappedQoS_FlowsListDedicated_r16 sl_MappedQoS_FlowsListDedicated_r16; /**< ASN.1 sl-MappedQoS-FlowsListDedicated-r16 */
    } u;
};


/**
 * @brief SL_SDAP_Config_r16
 * @note ASN.1：SL-SDAP-Config-r16；源文件第 23283 行。
 * @note SL-SDAP-Config-r16 ::= SEQUENCE { sl-SDAP-Header-r16, sl-DefaultRB-r16, sl-MappedQoS-Flows-r16, sl-C...
 */
struct SL_SDAP_Config_r16 {
    SL_SDAP_Config_r16_Sl_SDAP_Header_r16 sl_SDAP_Header_r16; /**< ASN.1 sl-SDAP-Header-r16；枚举。 */
    bool sl_DefaultRB_r16; /**< ASN.1 sl-DefaultRB-r16；BOOLEAN，1 bit。 */
    bool has_sl_MappedQoS_Flows_r16; /**< sl-MappedQoS-Flows-r16 是否存在。 */
    SL_SDAP_Config_r16_Sl_MappedQoS_Flows_r16 sl_MappedQoS_Flows_r16; /**< ASN.1 sl-MappedQoS-Flows-r16；结构体；OPTIONAL。 */
    bool has_sl_CastType_r16; /**< sl-CastType-r16 是否存在。 */
    SL_SDAP_Config_r16_Sl_CastType_r16 sl_CastType_r16; /**< ASN.1 sl-CastType-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_RadioBearerConfig_r16
 * @note ASN.1：SL-RadioBearerConfig-r16；源文件第 22852 行。
 * @note SL-RadioBearerConfig-r16 ::= SEQUENCE { slrb-Uu-ConfigIndex-r16, sl-SDAP-Config-r16, sl-PDCP-Config-r16, s...
 */
struct SL_RadioBearerConfig_r16 {
    SLRB_Uu_ConfigIndex_r16 slrb_Uu_ConfigIndex_r16; /**< ASN.1 slrb-Uu-ConfigIndex-r16；INTEGER (1..512)，位宽 9 bit。 */
    bool has_sl_SDAP_Config_r16; /**< sl-SDAP-Config-r16 是否存在。 */
    SL_SDAP_Config_r16 sl_SDAP_Config_r16; /**< ASN.1 sl-SDAP-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_PDCP_Config_r16; /**< sl-PDCP-Config-r16 是否存在。 */
    SL_PDCP_Config_r16 sl_PDCP_Config_r16; /**< ASN.1 sl-PDCP-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_TransRange_r16; /**< sl-TransRange-r16 是否存在。 */
    SL_RadioBearerConfig_r16_Sl_TransRange_r16 sl_TransRange_r16; /**< ASN.1 sl-TransRange-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_RBSetConfig_r18
 * @note ASN.1：SL-RBSetConfig-r18；源文件第 22865 行。
 * @note SL-RBSetConfig-r18 ::= SEQUENCE { sl-RBSetIndex-r18, sl-NumOfSSSBRepetition-r18, sl-GapBetweenSSSBRe...
 */
struct SL_RBSetConfig_r18 {
    int64_t sl_RBSetIndex_r18; /**< ASN.1 sl-RBSetIndex-r18；INTEGER (0..4)，位宽 3 bit。 */
    bool has_sl_NumOfSSSBRepetition_r18; /**< sl-NumOfSSSBRepetition-r18 是否存在。 */
    int64_t sl_NumOfSSSBRepetition_r18; /**< ASN.1 sl-NumOfSSSBRepetition-r18；INTEGER (2..9)，位宽 3 bit；OPTIONAL。 */
    bool has_sl_GapBetweenSSSBRepetition_r18; /**< sl-GapBetweenSSSBRepetition-r18 是否存在。 */
    int64_t sl_GapBetweenSSSBRepetition_r18; /**< ASN.1 sl-GapBetweenSSSBRepetition-r18；INTEGER (1..84)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief SL_PeriodicalReportConfig_r16
 * @note ASN.1：SL-PeriodicalReportConfig-r16；源文件第 22944 行。
 * @note SL-PeriodicalReportConfig-r16 ::= SEQUENCE { sl-ReportInterval-r16, sl-ReportAmount-r16, sl-ReportQuantity-r16,...
 */
struct SL_PeriodicalReportConfig_r16 {
    ReportInterval sl_ReportInterval_r16; /**< ASN.1 sl-ReportInterval-r16；枚举。 */
    SL_PeriodicalReportConfig_r16_Sl_ReportAmount_r16 sl_ReportAmount_r16; /**< ASN.1 sl-ReportAmount-r16；枚举。 */
    SL_MeasReportQuantity_r16 sl_ReportQuantity_r16; /**< ASN.1 sl-ReportQuantity-r16；结构体。 */
    SL_RS_Type_r16 sl_RS_Type_r16; /**< ASN.1 sl-RS-Type-r16；枚举。 */
};


/**
 * @brief SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16
 * @note ASN.1：sl-EventId-r16/eventS1-r16；源文件第 22954 行。
 * @note SEQUENCE { s1-Threshold-r16, sl-ReportOnLeave-r16, sl-Hysteresis-r16, sl-Time...
 */
struct SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16 {
    SL_MeasTriggerQuantity_r16 s1_Threshold_r16; /**< ASN.1 s1-Threshold-r16；结构体。 */
    bool sl_ReportOnLeave_r16; /**< ASN.1 sl-ReportOnLeave-r16；BOOLEAN，1 bit。 */
    Hysteresis sl_Hysteresis_r16; /**< ASN.1 sl-Hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger sl_TimeToTrigger_r16; /**< ASN.1 sl-TimeToTrigger-r16；枚举。 */
};


/**
 * @brief SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16
 * @note ASN.1：sl-EventId-r16/eventS2-r16；源文件第 22961 行。
 * @note SEQUENCE { s2-Threshold-r16, sl-ReportOnLeave-r16, sl-Hysteresis-r16, sl-Time...
 */
struct SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16 {
    SL_MeasTriggerQuantity_r16 s2_Threshold_r16; /**< ASN.1 s2-Threshold-r16；结构体。 */
    bool sl_ReportOnLeave_r16; /**< ASN.1 sl-ReportOnLeave-r16；BOOLEAN，1 bit。 */
    Hysteresis sl_Hysteresis_r16; /**< ASN.1 sl-Hysteresis-r16；INTEGER (0..30)，位宽 5 bit。 */
    TimeToTrigger sl_TimeToTrigger_r16; /**< ASN.1 sl-TimeToTrigger-r16；枚举。 */
};


/**
 * @brief SL_EventTriggerConfig_r16_Sl_EventId_r16
 * @note ASN.1：sl-EventId-r16；源文件第 22953 行。
 * @note CHOICE { eventS1-r16, eventS2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag {
    SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS1_r16 = 0, /**< ASN.1 eventS1-r16 */
    SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag_eventS2_r16 = 1, /**< ASN.1 eventS2-r16 */
} SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag;

struct SL_EventTriggerConfig_r16_Sl_EventId_r16 {
    SL_EventTriggerConfig_r16_Sl_EventId_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS1_r16 eventS1_r16; /**< ASN.1 eventS1-r16 */
        SL_EventTriggerConfig_r16_Sl_EventId_r16_EventS2_r16 eventS2_r16; /**< ASN.1 eventS2-r16 */
    } u;
};


/**
 * @brief SL_EventTriggerConfig_r16
 * @note ASN.1：SL-EventTriggerConfig-r16；源文件第 22952 行。
 * @note SL-EventTriggerConfig-r16 ::= SEQUENCE { sl-EventId-r16, sl-ReportInterval-r16, sl-ReportAmount-r16, sl-Rep...
 */
struct SL_EventTriggerConfig_r16 {
    SL_EventTriggerConfig_r16_Sl_EventId_r16 sl_EventId_r16; /**< ASN.1 sl-EventId-r16；结构体。 */
    ReportInterval sl_ReportInterval_r16; /**< ASN.1 sl-ReportInterval-r16；枚举。 */
    SL_EventTriggerConfig_r16_Sl_ReportAmount_r16 sl_ReportAmount_r16; /**< ASN.1 sl-ReportAmount-r16；枚举。 */
    SL_MeasReportQuantity_r16 sl_ReportQuantity_r16; /**< ASN.1 sl-ReportQuantity-r16；结构体。 */
    SL_RS_Type_r16 sl_RS_Type_r16; /**< ASN.1 sl-RS-Type-r16；枚举。 */
};


/**
 * @brief SL_ReportConfig_r16_Sl_ReportType_r16
 * @note ASN.1：sl-ReportType-r16；源文件第 22936 行。
 * @note CHOICE { sl-Periodical-r16, sl-EventTriggered-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_ReportConfig_r16_Sl_ReportType_r16_Tag {
    SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_Periodical_r16 = 0, /**< ASN.1 sl-Periodical-r16 */
    SL_ReportConfig_r16_Sl_ReportType_r16_Tag_sl_EventTriggered_r16 = 1, /**< ASN.1 sl-EventTriggered-r16 */
} SL_ReportConfig_r16_Sl_ReportType_r16_Tag;

struct SL_ReportConfig_r16_Sl_ReportType_r16 {
    SL_ReportConfig_r16_Sl_ReportType_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_PeriodicalReportConfig_r16 sl_Periodical_r16; /**< ASN.1 sl-Periodical-r16 */
        SL_EventTriggerConfig_r16 sl_EventTriggered_r16; /**< ASN.1 sl-EventTriggered-r16 */
    } u;
};


/**
 * @brief SL_ReportConfig_r16
 * @note ASN.1：SL-ReportConfig-r16；源文件第 22935 行。
 * @note SL-ReportConfig-r16 ::= SEQUENCE { sl-ReportType-r16 }
 */
struct SL_ReportConfig_r16 {
    SL_ReportConfig_r16_Sl_ReportType_r16 sl_ReportType_r16; /**< ASN.1 sl-ReportType-r16；结构体。 */
};


/**
 * @brief SL_ReportConfigInfo_r16
 * @note ASN.1：SL-ReportConfigInfo-r16；源文件第 22927 行。
 * @note SL-ReportConfigInfo-r16 ::= SEQUENCE { sl-ReportConfigId-r16, sl-ReportConfig-r16 }
 */
struct SL_ReportConfigInfo_r16 {
    SL_ReportConfigId_r16 sl_ReportConfigId_r16; /**< ASN.1 sl-ReportConfigId-r16；INTEGER (1..64)，位宽 6 bit。 */
    SL_ReportConfig_r16 sl_ReportConfig_r16; /**< ASN.1 sl-ReportConfig-r16；结构体。 */
};


/**
 * @brief SL_CPE_StartingPositionsPSCCH_PSSCH_r18
 * @note ASN.1：SL-CPE-StartingPositionsPSCCH-PSSCH-r18；源文件第 23060 行。
 * @note SL-CPE-StartingPositionsPSCCH-PSSCH-r18 ::= SEQUENCE { sl-Priority-r18, sl-CPE-StartingPositions-r18 }
 */
struct SL_CPE_StartingPositionsPSCCH_PSSCH_r18 {
    int64_t sl_Priority_r18; /**< ASN.1 sl-Priority-r18；INTEGER (1..8)，位宽 3 bit。 */
    int64_t* sl_CPE_StartingPositions_r18_items; /**< ASN.1 sl-CPE-StartingPositions-r18；SEQUENCE OF int64_t，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t sl_CPE_StartingPositions_r18_count; /**< sl-CPE-StartingPositions-r18 元素个数。 */
};


/**
 * @brief SL_ZoneConfig_r16
 * @note ASN.1：SL-ZoneConfig-r16；源文件第 23418 行。
 * @note SL-ZoneConfig-r16 ::= SEQUENCE { sl-ZoneLength-r16 }
 */
struct SL_ZoneConfig_r16 {
    SL_ZoneConfig_r16_Sl_ZoneLength_r16 sl_ZoneLength_r16; /**< ASN.1 sl-ZoneLength-r16；枚举。 */
};


/**
 * @brief SL_ZoneConfigMCR_r16
 * @note ASN.1：SL-ZoneConfigMCR-r16；源文件第 23065 行。
 * @note SL-ZoneConfigMCR-r16 ::= SEQUENCE { sl-ZoneConfigMCR-Index-r16, sl-TransRange-r16, sl-ZoneConfig-r16 }
 */
struct SL_ZoneConfigMCR_r16 {
    int64_t sl_ZoneConfigMCR_Index_r16; /**< ASN.1 sl-ZoneConfigMCR-Index-r16；INTEGER (0..15)，位宽 4 bit。 */
    bool has_sl_TransRange_r16; /**< sl-TransRange-r16 是否存在。 */
    SL_ZoneConfigMCR_r16_Sl_TransRange_r16 sl_TransRange_r16; /**< ASN.1 sl-TransRange-r16；枚举；OPTIONAL。 */
    bool has_sl_ZoneConfig_r16; /**< sl-ZoneConfig-r16 是否存在。 */
    SL_ZoneConfig_r16 sl_ZoneConfig_r16; /**< ASN.1 sl-ZoneConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_ResourceReservePeriod_r16
 * @note ASN.1：SL-ResourceReservePeriod-r16；源文件第 23131 行。
 * @note SL-ResourceReservePeriod-r16 ::= CHOICE { sl-ResourceReservePeriod1-r16, sl-ResourceReservePeriod2-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_ResourceReservePeriod_r16_Tag {
    SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod1_r16 = 0, /**< ASN.1 sl-ResourceReservePeriod1-r16 */
    SL_ResourceReservePeriod_r16_Tag_sl_ResourceReservePeriod2_r16 = 1, /**< ASN.1 sl-ResourceReservePeriod2-r16 */
} SL_ResourceReservePeriod_r16_Tag;

struct SL_ResourceReservePeriod_r16 {
    SL_ResourceReservePeriod_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_ResourceReservePeriod_r16_Sl_ResourceReservePeriod1_r16 sl_ResourceReservePeriod1_r16; /**< ASN.1 sl-ResourceReservePeriod1-r16 */
        int64_t sl_ResourceReservePeriod2_r16; /**< ASN.1 sl-ResourceReservePeriod2-r16 */
    } u;
};


/**
 * @brief SL_SelectionWindowConfig_r16
 * @note ASN.1：SL-SelectionWindowConfig-r16；源文件第 23138 行。
 * @note SL-SelectionWindowConfig-r16 ::= SEQUENCE { sl-Priority-r16, sl-SelectionWindow-r16 }
 */
struct SL_SelectionWindowConfig_r16 {
    int64_t sl_Priority_r16; /**< ASN.1 sl-Priority-r16；INTEGER (1..8)，位宽 3 bit。 */
    SL_SelectionWindowConfig_r16_Sl_SelectionWindow_r16 sl_SelectionWindow_r16; /**< ASN.1 sl-SelectionWindow-r16；枚举。 */
};


/**
 * @brief SL_TxPercentageConfig_r16
 * @note ASN.1：SL-TxPercentageConfig-r16；源文件第 23145 行。
 * @note SL-TxPercentageConfig-r16 ::= SEQUENCE { sl-Priority-r16, sl-TxPercentage-r16 }
 */
struct SL_TxPercentageConfig_r16 {
    int64_t sl_Priority_r16; /**< ASN.1 sl-Priority-r16；INTEGER (1..8)，位宽 3 bit。 */
    SL_TxPercentageConfig_r16_Sl_TxPercentage_r16 sl_TxPercentage_r16; /**< ASN.1 sl-TxPercentage-r16；枚举。 */
};


/**
 * @brief SL_MinMaxMCS_Config_r16
 * @note ASN.1：SL-MinMaxMCS-Config-r16；源文件第 23152 行。
 * @note SL-MinMaxMCS-Config-r16 ::= SEQUENCE { sl-MCS-Table-r16, sl-MinMCS-PSSCH-r16, sl-MaxMCS-PSSCH-r16 }
 */
struct SL_MinMaxMCS_Config_r16 {
    SL_MinMaxMCS_Config_r16_Sl_MCS_Table_r16 sl_MCS_Table_r16; /**< ASN.1 sl-MCS-Table-r16；枚举。 */
    int64_t sl_MinMCS_PSSCH_r16; /**< ASN.1 sl-MinMCS-PSSCH-r16；INTEGER (0..27)，位宽 5 bit。 */
    int64_t sl_MaxMCS_PSSCH_r16; /**< ASN.1 sl-MaxMCS-PSSCH-r16；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18
 * @note ASN.1：sl-PRS-CombSizeN-AndReOffset-r18；源文件第 23180 行。
 * @note CHOICE { n2-r18, n4-r18, n6-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag {
    SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n2_r18 = 0, /**< ASN.1 n2-r18 */
    SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n4_r18 = 1, /**< ASN.1 n4-r18 */
    SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag_n6_r18 = 2, /**< ASN.1 n6-r18 */
} SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag;

struct SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18 {
    SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n2_r18; /**< ASN.1 n2-r18 */
        int64_t n4_r18; /**< ASN.1 n4-r18 */
        int64_t n6_r18; /**< ASN.1 n6-r18 */
    } u;
};


/**
 * @brief SL_PRS_ResourceSharedSL_PRS_RP_r18
 * @note ASN.1：SL-PRS-ResourceSharedSL-PRS-RP-r18；源文件第 23176 行。
 * @note SL-PRS-ResourceSharedSL-PRS-RP-r18 ::= SEQUENCE { sl-PRS-ResourceID-r18, mNumberOfSymbols-r18, sl-PRS-starting-symbo...
 */
struct SL_PRS_ResourceSharedSL_PRS_RP_r18 {
    int64_t sl_PRS_ResourceID_r18; /**< ASN.1 sl-PRS-ResourceID-r18；INTEGER (0..16)，位宽 5 bit。 */
    int64_t mNumberOfSymbols_r18; /**< ASN.1 mNumberOfSymbols-r18；INTEGER (1..9)，位宽 4 bit。 */
    int64_t sl_PRS_starting_symbol_r18; /**< ASN.1 sl-PRS-starting-symbol-r18；INTEGER (4..12)，位宽 4 bit。 */
    bool has_sl_PRS_CombSizeN_AndReOffset_r18; /**< sl-PRS-CombSizeN-AndReOffset-r18 是否存在。 */
    SL_PRS_ResourceSharedSL_PRS_RP_r18_Sl_PRS_CombSizeN_AndReOffset_r18 sl_PRS_CombSizeN_AndReOffset_r18; /**< ASN.1 sl-PRS-CombSizeN-AndReOffset-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SL_RLC_BearerConfig_r16_ExtGroup1
 * @note ASN.1：SL_RLC_BearerConfig_r16_ExtGroup1；源文件第 23197 行。
 */
struct SL_RLC_BearerConfig_r16_ExtGroup1 {
    bool has_sl_RLC_BearerConfigIndex_v1800; /**< sl-RLC-BearerConfigIndex-v1800 是否存在。 */
    SL_RLC_BearerConfigIndex_v1800 sl_RLC_BearerConfigIndex_v1800; /**< ASN.1 sl-RLC-BearerConfigIndex-v1800；INTEGER (513..1024)，位宽 9 bit；OPTIONAL。 */
};


/**
 * @brief SL_RLC_Config_r16_Sl_AM_RLC_r16
 * @note ASN.1：sl-AM-RLC-r16；源文件第 23228 行。
 * @note SEQUENCE { sl-SN-FieldLengthAM-r16, sl-T-PollRetransmit-r16, sl-PollPDU-r16, ...
 */
struct SL_RLC_Config_r16_Sl_AM_RLC_r16 {
    bool has_sl_SN_FieldLengthAM_r16; /**< sl-SN-FieldLengthAM-r16 是否存在。 */
    SN_FieldLengthAM sl_SN_FieldLengthAM_r16; /**< ASN.1 sl-SN-FieldLengthAM-r16；枚举；OPTIONAL。 */
    T_PollRetransmit sl_T_PollRetransmit_r16; /**< ASN.1 sl-T-PollRetransmit-r16；枚举。 */
    PollPDU sl_PollPDU_r16; /**< ASN.1 sl-PollPDU-r16；枚举。 */
    PollByte sl_PollByte_r16; /**< ASN.1 sl-PollByte-r16；枚举。 */
    SL_RLC_Config_r16_Sl_AM_RLC_r16_Sl_MaxRetxThreshold_r16 sl_MaxRetxThreshold_r16; /**< ASN.1 sl-MaxRetxThreshold-r16；枚举。 */
};


/**
 * @brief SL_RLC_Config_r16_Sl_UM_RLC_r16
 * @note ASN.1：sl-UM-RLC-r16；源文件第 23236 行。
 * @note SEQUENCE { sl-SN-FieldLengthUM-r16 }
 */
struct SL_RLC_Config_r16_Sl_UM_RLC_r16 {
    bool has_sl_SN_FieldLengthUM_r16; /**< sl-SN-FieldLengthUM-r16 是否存在。 */
    SN_FieldLengthUM sl_SN_FieldLengthUM_r16; /**< ASN.1 sl-SN-FieldLengthUM-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SL_RLC_Config_r16
 * @note ASN.1：SL-RLC-Config-r16；源文件第 23227 行。
 * @note SL-RLC-Config-r16 ::= CHOICE { sl-AM-RLC-r16, sl-UM-RLC-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SL_RLC_Config_r16_Tag {
    SL_RLC_Config_r16_Tag_sl_AM_RLC_r16 = 0, /**< ASN.1 sl-AM-RLC-r16 */
    SL_RLC_Config_r16_Tag_sl_UM_RLC_r16 = 1, /**< ASN.1 sl-UM-RLC-r16 */
} SL_RLC_Config_r16_Tag;

struct SL_RLC_Config_r16 {
    SL_RLC_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SL_RLC_Config_r16_Sl_AM_RLC_r16 sl_AM_RLC_r16; /**< ASN.1 sl-AM-RLC-r16 */
        SL_RLC_Config_r16_Sl_UM_RLC_r16 sl_UM_RLC_r16; /**< ASN.1 sl-UM-RLC-r16 */
    } u;
};


/**
 * @brief SL_RLC_BearerConfig_r16
 * @note ASN.1：SL-RLC-BearerConfig-r16；源文件第 23191 行。
 * @note SL-RLC-BearerConfig-r16 ::= SEQUENCE { sl-RLC-BearerConfigIndex-r16, sl-ServedRadioBearer-r16, sl-RLC-Con...
 */
struct SL_RLC_BearerConfig_r16 {
    SL_RLC_BearerConfigIndex_r16 sl_RLC_BearerConfigIndex_r16; /**< ASN.1 sl-RLC-BearerConfigIndex-r16；INTEGER (1..512)，位宽 9 bit。 */
    bool has_sl_ServedRadioBearer_r16; /**< sl-ServedRadioBearer-r16 是否存在。 */
    SLRB_Uu_ConfigIndex_r16 sl_ServedRadioBearer_r16; /**< ASN.1 sl-ServedRadioBearer-r16；INTEGER (1..512)，位宽 9 bit；OPTIONAL。 */
    bool has_sl_RLC_Config_r16; /**< sl-RLC-Config-r16 是否存在。 */
    SL_RLC_Config_r16 sl_RLC_Config_r16; /**< ASN.1 sl-RLC-Config-r16；结构体；OPTIONAL。 */
    bool has_sl_MAC_LogicalChannelConfig_r16; /**< sl-MAC-LogicalChannelConfig-r16 是否存在。 */
    SL_LogicalChannelConfig_r16 sl_MAC_LogicalChannelConfig_r16; /**< ASN.1 sl-MAC-LogicalChannelConfig-r16；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SL_RLC_BearerConfig_r16_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SL_RLC_ChannelConfig_r17
 * @note ASN.1：SL-RLC-ChannelConfig-r17；源文件第 23212 行。
 * @note SL-RLC-ChannelConfig-r17 ::= SEQUENCE { sl-RLC-ChannelID-r17, sl-RLC-Config-r17, sl-MAC-LogicalChannelConf...
 */
struct SL_RLC_ChannelConfig_r17 {
    SL_RLC_ChannelID_r17 sl_RLC_ChannelID_r17; /**< ASN.1 sl-RLC-ChannelID-r17；INTEGER (1..512)，位宽 9 bit。 */
    bool has_sl_RLC_Config_r17; /**< sl-RLC-Config-r17 是否存在。 */
    SL_RLC_Config_r16 sl_RLC_Config_r17; /**< ASN.1 sl-RLC-Config-r17；结构体；OPTIONAL。 */
    bool has_sl_MAC_LogicalChannelConfig_r17; /**< sl-MAC-LogicalChannelConfig-r17 是否存在。 */
    SL_LogicalChannelConfig_r16 sl_MAC_LogicalChannelConfig_r17; /**< ASN.1 sl-MAC-LogicalChannelConfig-r17；结构体；OPTIONAL。 */
    bool has_sl_PacketDelayBudget_r17; /**< sl-PacketDelayBudget-r17 是否存在。 */
    int64_t sl_PacketDelayBudget_r17; /**< ASN.1 sl-PacketDelayBudget-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief SL_ServingCellInfo_r17
 * @note ASN.1：SL-ServingCellInfo-r17；源文件第 23302 行。
 * @note SL-ServingCellInfo-r17 ::= SEQUENCE { sl-PhysCellId-r17, sl-CarrierFreqNR-r17 }
 */
struct SL_ServingCellInfo_r17 {
    PhysCellId sl_PhysCellId_r17; /**< ASN.1 sl-PhysCellId-r17；INTEGER (0..1007)，位宽 10 bit。 */
    ARFCN_ValueNR sl_CarrierFreqNR_r17; /**< ASN.1 sl-CarrierFreqNR-r17；INTEGER (0..3279165)，位宽 22 bit。 */
};


/**
 * @brief SL_MappingToAddMod_r17
 * @note ASN.1：SL-MappingToAddMod-r17；源文件第 23322 行。
 * @note SL-MappingToAddMod-r17 ::= SEQUENCE { sl-RemoteUE-RB-Identity-r17, sl-EgressRLC-ChannelUu-r17, sl-Egress...
 */
struct SL_MappingToAddMod_r17 {
    SL_RemoteUE_RB_Identity_r17 sl_RemoteUE_RB_Identity_r17; /**< ASN.1 sl-RemoteUE-RB-Identity-r17；结构体。 */
    bool has_sl_EgressRLC_ChannelUu_r17; /**< sl-EgressRLC-ChannelUu-r17 是否存在。 */
    Uu_RelayRLC_ChannelID_r17 sl_EgressRLC_ChannelUu_r17; /**< ASN.1 sl-EgressRLC-ChannelUu-r17；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
    bool has_sl_EgressRLC_ChannelPC5_r17; /**< sl-EgressRLC-ChannelPC5-r17 是否存在。 */
    SL_RLC_ChannelID_r17 sl_EgressRLC_ChannelPC5_r17; /**< ASN.1 sl-EgressRLC-ChannelPC5-r17；INTEGER (1..512)，位宽 9 bit；OPTIONAL。 */
};


/**
 * @brief SL_MappingConfig_U2U_r18
 * @note ASN.1：SL-MappingConfig-U2U-r18；源文件第 23343 行。
 * @note SL-MappingConfig-U2U-r18 ::= SEQUENCE { sl-RemoteUE-SLRB-Identity-r18, sl-EgressRLC-ChannelPC5-r18 }
 */
struct SL_MappingConfig_U2U_r18 {
    SLRB_Uu_ConfigIndex_r16 sl_RemoteUE_SLRB_Identity_r18; /**< ASN.1 sl-RemoteUE-SLRB-Identity-r18；INTEGER (1..512)，位宽 9 bit。 */
    SL_RLC_ChannelID_r17 sl_EgressRLC_ChannelPC5_r18; /**< ASN.1 sl-EgressRLC-ChannelPC5-r18；INTEGER (1..512)，位宽 9 bit。 */
};


/**
 * @brief SL_SSB_TimeAllocation_r16
 * @note ASN.1：SL-SSB-TimeAllocation-r16；源文件第 23373 行。
 * @note SL-SSB-TimeAllocation-r16 ::= SEQUENCE { sl-NumSSB-WithinPeriod-r16, sl-TimeOffsetSSB-r16, sl-TimeInterval-...
 */
struct SL_SSB_TimeAllocation_r16 {
    bool has_sl_NumSSB_WithinPeriod_r16; /**< sl-NumSSB-WithinPeriod-r16 是否存在。 */
    SL_SSB_TimeAllocation_r16_Sl_NumSSB_WithinPeriod_r16 sl_NumSSB_WithinPeriod_r16; /**< ASN.1 sl-NumSSB-WithinPeriod-r16；枚举；OPTIONAL。 */
    bool has_sl_TimeOffsetSSB_r16; /**< sl-TimeOffsetSSB-r16 是否存在。 */
    int64_t sl_TimeOffsetSSB_r16; /**< ASN.1 sl-TimeOffsetSSB-r16；INTEGER (0..1279)，位宽 11 bit；OPTIONAL。 */
    bool has_sl_TimeInterval_r16; /**< sl-TimeInterval-r16 是否存在。 */
    int64_t sl_TimeInterval_r16; /**< ASN.1 sl-TimeInterval-r16；INTEGER (0..639)，位宽 10 bit；OPTIONAL。 */
};


/**
 * @brief SL_SyncConfig_r16_TxParameters_r16
 * @note ASN.1：txParameters-r16；源文件第 23362 行。
 * @note SEQUENCE { syncTxThreshIC-r16, syncTxThreshOoC-r16, syncInfoReserved-r16 }
 */
struct SL_SyncConfig_r16_TxParameters_r16 {
    bool has_syncTxThreshIC_r16; /**< syncTxThreshIC-r16 是否存在。 */
    SL_RSRP_Range_r16 syncTxThreshIC_r16; /**< ASN.1 syncTxThreshIC-r16；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_syncTxThreshOoC_r16; /**< syncTxThreshOoC-r16 是否存在。 */
    SL_RSRP_Range_r16 syncTxThreshOoC_r16; /**< ASN.1 syncTxThreshOoC-r16；INTEGER (0..13)，位宽 4 bit；OPTIONAL。 */
    bool has_syncInfoReserved_r16; /**< syncInfoReserved-r16 是否存在。 */
    BitString syncInfoReserved_r16; /**< ASN.1 syncInfoReserved-r16；SIZE (2)，定长；OPTIONAL。 */
};


/**
 * @brief SL_SyncConfig_r16
 * @note ASN.1：SL-SyncConfig-r16；源文件第 23354 行。
 * @note SL-SyncConfig-r16 ::= SEQUENCE { sl-SyncRefMinHyst-r16, sl-SyncRefDiffHyst-r16, sl-FilterCoefficien...
 */
struct SL_SyncConfig_r16 {
    bool has_sl_SyncRefMinHyst_r16; /**< sl-SyncRefMinHyst-r16 是否存在。 */
    SL_SyncConfig_r16_Sl_SyncRefMinHyst_r16 sl_SyncRefMinHyst_r16; /**< ASN.1 sl-SyncRefMinHyst-r16；枚举；OPTIONAL。 */
    bool has_sl_SyncRefDiffHyst_r16; /**< sl-SyncRefDiffHyst-r16 是否存在。 */
    SL_SyncConfig_r16_Sl_SyncRefDiffHyst_r16 sl_SyncRefDiffHyst_r16; /**< ASN.1 sl-SyncRefDiffHyst-r16；枚举；OPTIONAL。 */
    bool has_sl_FilterCoefficient_r16; /**< sl-FilterCoefficient-r16 是否存在。 */
    FilterCoefficient sl_FilterCoefficient_r16; /**< ASN.1 sl-FilterCoefficient-r16；枚举；OPTIONAL。 */
    bool has_sl_SSB_TimeAllocation1_r16; /**< sl-SSB-TimeAllocation1-r16 是否存在。 */
    SL_SSB_TimeAllocation_r16 sl_SSB_TimeAllocation1_r16; /**< ASN.1 sl-SSB-TimeAllocation1-r16；结构体；OPTIONAL。 */
    bool has_sl_SSB_TimeAllocation2_r16; /**< sl-SSB-TimeAllocation2-r16 是否存在。 */
    SL_SSB_TimeAllocation_r16 sl_SSB_TimeAllocation2_r16; /**< ASN.1 sl-SSB-TimeAllocation2-r16；结构体；OPTIONAL。 */
    bool has_sl_SSB_TimeAllocation3_r16; /**< sl-SSB-TimeAllocation3-r16 是否存在。 */
    SL_SSB_TimeAllocation_r16 sl_SSB_TimeAllocation3_r16; /**< ASN.1 sl-SSB-TimeAllocation3-r16；结构体；OPTIONAL。 */
    bool has_sl_SSID_r16; /**< sl-SSID-r16 是否存在。 */
    int64_t sl_SSID_r16; /**< ASN.1 sl-SSID-r16；INTEGER (0..671)，位宽 10 bit；OPTIONAL。 */
    SL_SyncConfig_r16_TxParameters_r16 txParameters_r16; /**< ASN.1 txParameters-r16；结构体。 */
    bool has_gnss_Sync_r16; /**< gnss-Sync-r16 是否存在。 */
    SL_SyncConfig_r16_Gnss_Sync_r16 gnss_Sync_r16; /**< ASN.1 gnss-Sync-r16；枚举；OPTIONAL。 */
};


/**
 * @brief MBS_NeighbourCell_r17
 * @note ASN.1：MBS-NeighbourCell-r17；源文件第 23500 行。
 * @note MBS-NeighbourCell-r17 ::= SEQUENCE { physCellId-r17, carrierFreq-r17 }
 */
struct MBS_NeighbourCell_r17 {
    PhysCellId physCellId_r17; /**< ASN.1 physCellId-r17；INTEGER (0..1007)，位宽 10 bit。 */
    bool has_carrierFreq_r17; /**< carrierFreq-r17 是否存在。 */
    ARFCN_ValueNR carrierFreq_r17; /**< ASN.1 carrierFreq-r17；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
};


/**
 * @brief FreqInfoMBS_r18
 * @note ASN.1：FreqInfoMBS-r18；源文件第 23519 行。
 * @note FreqInfoMBS-r18 ::= SEQUENCE { carrierFreqMBS-r18, freqBandIndicatorMBS-r18 }
 */
struct FreqInfoMBS_r18 {
    ARFCN_ValueNR carrierFreqMBS_r18; /**< ASN.1 carrierFreqMBS-r18；INTEGER (0..3279165)，位宽 22 bit。 */
    FreqBandIndicatorNR freqBandIndicatorMBS_r18; /**< ASN.1 freqBandIndicatorMBS-r18；INTEGER (1..1024)，位宽 10 bit。 */
};


/**
 * @brief CFR_LocationAndBW_r18
 * @note ASN.1：CFR-LocationAndBW-r18；源文件第 23524 行。
 * @note CFR-LocationAndBW-r18 ::= SEQUENCE { locationAndBandwidthMBS-r18, absoluteFrequencyPointA-MBS-r18, offs...
 */
struct CFR_LocationAndBW_r18 {
    bool has_locationAndBandwidthMBS_r18; /**< locationAndBandwidthMBS-r18 是否存在。 */
    int64_t locationAndBandwidthMBS_r18; /**< ASN.1 locationAndBandwidthMBS-r18；INTEGER (0..37949)，位宽 16 bit；OPTIONAL。 */
    bool has_absoluteFrequencyPointA_MBS_r18; /**< absoluteFrequencyPointA-MBS-r18 是否存在。 */
    ARFCN_ValueNR absoluteFrequencyPointA_MBS_r18; /**< ASN.1 absoluteFrequencyPointA-MBS-r18；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    bool has_offsetToCarrierMBS_r18; /**< offsetToCarrierMBS-r18 是否存在。 */
    int64_t offsetToCarrierMBS_r18; /**< ASN.1 offsetToCarrierMBS-r18；INTEGER (0..2199)，位宽 12 bit；OPTIONAL。 */
};


/**
 * @brief NonServingInfo_r18_Cfr_InfoMBS_r18
 * @note ASN.1：cfr-InfoMBS-r18；源文件第 23512 行。
 * @note CHOICE { cfr-Bandwidth-r18, cfr-LocationAndBW-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NonServingInfo_r18_Cfr_InfoMBS_r18_Tag {
    NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_Bandwidth_r18 = 0, /**< ASN.1 cfr-Bandwidth-r18 */
    NonServingInfo_r18_Cfr_InfoMBS_r18_Tag_cfr_LocationAndBW_r18 = 1, /**< ASN.1 cfr-LocationAndBW-r18 */
} NonServingInfo_r18_Cfr_InfoMBS_r18_Tag;

struct NonServingInfo_r18_Cfr_InfoMBS_r18 {
    NonServingInfo_r18_Cfr_InfoMBS_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t cfr_Bandwidth_r18; /**< ASN.1 cfr-Bandwidth-r18 */
        CFR_LocationAndBW_r18 cfr_LocationAndBW_r18; /**< ASN.1 cfr-LocationAndBW-r18 */
    } u;
};


/**
 * @brief NonServingInfo_r18
 * @note ASN.1：NonServingInfo-r18；源文件第 23510 行。
 * @note NonServingInfo-r18 ::= SEQUENCE { freqInfoMBS-r18, cfr-InfoMBS-r18, subcarrierSpacing-r18 }
 */
struct NonServingInfo_r18 {
    bool has_freqInfoMBS_r18; /**< freqInfoMBS-r18 是否存在。 */
    FreqInfoMBS_r18 freqInfoMBS_r18; /**< ASN.1 freqInfoMBS-r18；结构体；OPTIONAL。 */
    bool has_cfr_InfoMBS_r18; /**< cfr-InfoMBS-r18 是否存在。 */
    NonServingInfo_r18_Cfr_InfoMBS_r18 cfr_InfoMBS_r18; /**< ASN.1 cfr-InfoMBS-r18；结构体；OPTIONAL。 */
    bool has_subcarrierSpacing_r18; /**< subcarrierSpacing-r18 是否存在。 */
    SubcarrierSpacing subcarrierSpacing_r18; /**< ASN.1 subcarrierSpacing-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MBS_ServiceInfo_r17
 * @note ASN.1：MBS-ServiceInfo-r17；源文件第 23535 行。
 * @note MBS-ServiceInfo-r17 ::= SEQUENCE { tmgi-r17 }
 */
struct MBS_ServiceInfo_r17 {
    TMGI_r17 tmgi_r17; /**< ASN.1 tmgi-r17；结构体。 */
};


/**
 * @brief MRB_ListBroadcast_r17
 * @note ASN.1：MRB-ListBroadcast-r17；源文件第 23560 行。
 * @note MRB-ListBroadcast-r17 ::= SEQUENCE OF (size 1..4) OF MRB-InfoBroadcast-r17
 */
struct MRB_ListBroadcast_r17 {
    MRB_InfoBroadcast_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBS_SessionInfo_r17
 * @note ASN.1：MBS-SessionInfo-r17；源文件第 23544 行。
 * @note MBS-SessionInfo-r17 ::= SEQUENCE { mbs-SessionId-r17, g-RNTI-r17, mrb-ListBroadcast-r17, mtch-Schedul...
 */
struct MBS_SessionInfo_r17 {
    TMGI_r17 mbs_SessionId_r17; /**< ASN.1 mbs-SessionId-r17；结构体。 */
    RNTI_Value g_RNTI_r17; /**< ASN.1 g-RNTI-r17；INTEGER (0..65535)，位宽 16 bit。 */
    MRB_ListBroadcast_r17 mrb_ListBroadcast_r17; /**< ASN.1 mrb-ListBroadcast-r17；SEQUENCE OF MRB_InfoBroadcast_r17，SIZE (1..4)。 */
    bool has_mtch_SchedulingInfo_r17; /**< mtch-SchedulingInfo-r17 是否存在。 */
    DRX_ConfigPTM_Index_r17 mtch_SchedulingInfo_r17; /**< ASN.1 mtch-SchedulingInfo-r17；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_mtch_NeighbourCell_r17; /**< mtch-NeighbourCell-r17 是否存在。 */
    BitString mtch_NeighbourCell_r17; /**< ASN.1 mtch-NeighbourCell-r17；SIZE (8)，定长；OPTIONAL。 */
    bool has_pdsch_ConfigIndex_r17; /**< pdsch-ConfigIndex-r17 是否存在。 */
    PDSCH_ConfigIndex_r17 pdsch_ConfigIndex_r17; /**< ASN.1 pdsch-ConfigIndex-r17；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_mtch_SSB_MappingWindowIndex_r17; /**< mtch-SSB-MappingWindowIndex-r17 是否存在。 */
    MTCH_SSB_MappingWindowIndex_r17 mtch_SSB_MappingWindowIndex_r17; /**< ASN.1 mtch-SSB-MappingWindowIndex-r17；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
};


/**
 * @brief MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17
 * @note ASN.1：headerCompression-r17/rohc/profiles-r17；源文件第 23574 行。
 * @note SEQUENCE { profile0x0000-r17, profile0x0001-r17, profile0x0002-r17 }
 */
struct MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17 {
    bool profile0x0000_r17; /**< ASN.1 profile0x0000-r17；BOOLEAN，1 bit。 */
    bool profile0x0001_r17; /**< ASN.1 profile0x0001-r17；BOOLEAN，1 bit。 */
    bool profile0x0002_r17; /**< ASN.1 profile0x0002-r17；BOOLEAN，1 bit。 */
};


/**
 * @brief MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc
 * @note ASN.1：headerCompression-r17/rohc；源文件第 23572 行。
 * @note SEQUENCE { maxCID-r17, profiles-r17 }
 */
struct MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc {
    int64_t maxCID_r17; /**< ASN.1 maxCID-r17；INTEGER (1..16)，位宽 4 bit；DEFAULT 15。 */
    MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc_Profiles_r17 profiles_r17; /**< ASN.1 profiles-r17；结构体。 */
};


/**
 * @brief MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17
 * @note ASN.1：headerCompression-r17；源文件第 23570 行。
 * @note CHOICE { notUsed, rohc }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag {
    MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_notUsed = 0, /**< ASN.1 notUsed */
    MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag_rohc = 1, /**< ASN.1 rohc */
} MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag;

struct MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17 {
    MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null notUsed; /**< ASN.1 notUsed */
        MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17_Rohc rohc; /**< ASN.1 rohc */
    } u;
};


/**
 * @brief MRB_PDCP_ConfigBroadcast_r17
 * @note ASN.1：MRB-PDCP-ConfigBroadcast-r17；源文件第 23568 行。
 * @note MRB-PDCP-ConfigBroadcast-r17 ::= SEQUENCE { pdcp-SN-SizeDL-r17, headerCompression-r17, t-Reordering-r17 }
 */
struct MRB_PDCP_ConfigBroadcast_r17 {
    bool has_pdcp_SN_SizeDL_r17; /**< pdcp-SN-SizeDL-r17 是否存在。 */
    MRB_PDCP_ConfigBroadcast_r17_Pdcp_SN_SizeDL_r17 pdcp_SN_SizeDL_r17; /**< ASN.1 pdcp-SN-SizeDL-r17；枚举；OPTIONAL。 */
    MRB_PDCP_ConfigBroadcast_r17_HeaderCompression_r17 headerCompression_r17; /**< ASN.1 headerCompression-r17；结构体。 */
    bool has_t_Reordering_r17; /**< t-Reordering-r17 是否存在。 */
    MRB_PDCP_ConfigBroadcast_r17_T_Reordering_r17 t_Reordering_r17; /**< ASN.1 t-Reordering-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MRB_RLC_ConfigBroadcast_r17
 * @note ASN.1：MRB-RLC-ConfigBroadcast-r17；源文件第 23584 行。
 * @note MRB-RLC-ConfigBroadcast-r17 ::= SEQUENCE { logicalChannelIdentity-r17, sn-FieldLength-r17, t-Reassembly-r17 }
 */
struct MRB_RLC_ConfigBroadcast_r17 {
    LogicalChannelIdentity logicalChannelIdentity_r17; /**< ASN.1 logicalChannelIdentity-r17；INTEGER (1..32)，位宽 5 bit。 */
    bool has_sn_FieldLength_r17; /**< sn-FieldLength-r17 是否存在。 */
    MRB_RLC_ConfigBroadcast_r17_Sn_FieldLength_r17 sn_FieldLength_r17; /**< ASN.1 sn-FieldLength-r17；枚举；OPTIONAL。 */
    bool has_t_Reassembly_r17; /**< t-Reassembly-r17 是否存在。 */
    T_Reassembly t_Reassembly_r17; /**< ASN.1 t-Reassembly-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MRB_InfoBroadcast_r17
 * @note ASN.1：MRB-InfoBroadcast-r17；源文件第 23562 行。
 * @note MRB-InfoBroadcast-r17 ::= SEQUENCE { pdcp-Config-r17, rlc-Config-r17 }
 */
struct MRB_InfoBroadcast_r17 {
    MRB_PDCP_ConfigBroadcast_r17 pdcp_Config_r17; /**< ASN.1 pdcp-Config-r17；结构体。 */
    MRB_RLC_ConfigBroadcast_r17 rlc_Config_r17; /**< ASN.1 rlc-Config-r17；结构体。 */
};


/**
 * @brief MRB_ListMulticast_r18
 * @note ASN.1：MRB-ListMulticast-r18；源文件第 23609 行。
 * @note MRB-ListMulticast-r18 ::= SEQUENCE OF (size 1..32) OF MRB-InfoMulticast-r18
 */
struct MRB_ListMulticast_r18 {
    MRB_InfoMulticast_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief MBS_SessionInfoMulticast_r18
 * @note ASN.1：MBS-SessionInfoMulticast-r18；源文件第 23595 行。
 * @note MBS-SessionInfoMulticast-r18 ::= SEQUENCE { mbs-SessionId-r18, g-RNTI-r18, mrb-ListMulticast-r18, mtch-Schedul...
 */
struct MBS_SessionInfoMulticast_r18 {
    TMGI_r17 mbs_SessionId_r18; /**< ASN.1 mbs-SessionId-r18；结构体。 */
    bool has_g_RNTI_r18; /**< g-RNTI-r18 是否存在。 */
    RNTI_Value g_RNTI_r18; /**< ASN.1 g-RNTI-r18；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_mrb_ListMulticast_r18; /**< mrb-ListMulticast-r18 是否存在。 */
    MRB_ListMulticast_r18 mrb_ListMulticast_r18; /**< ASN.1 mrb-ListMulticast-r18；SEQUENCE OF MRB_InfoMulticast_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_mtch_SchedulingInfo_r18; /**< mtch-SchedulingInfo-r18 是否存在。 */
    DRX_ConfigPTM_Index_r17 mtch_SchedulingInfo_r18; /**< ASN.1 mtch-SchedulingInfo-r18；INTEGER (0..63)，位宽 6 bit；OPTIONAL。 */
    bool has_mtch_NeighbourCell_r18; /**< mtch-NeighbourCell-r18 是否存在。 */
    BitString mtch_NeighbourCell_r18; /**< ASN.1 mtch-NeighbourCell-r18；SIZE (8)，定长；OPTIONAL。 */
    bool has_pdsch_ConfigIndex_r18; /**< pdsch-ConfigIndex-r18 是否存在。 */
    PDSCH_ConfigIndex_r17 pdsch_ConfigIndex_r18; /**< ASN.1 pdsch-ConfigIndex-r18；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_mtch_SSB_MappingWindowIndex_r18; /**< mtch-SSB-MappingWindowIndex-r18 是否存在。 */
    MTCH_SSB_MappingWindowIndex_r17 mtch_SSB_MappingWindowIndex_r18; /**< ASN.1 mtch-SSB-MappingWindowIndex-r18；INTEGER (0..15)，位宽 4 bit；OPTIONAL。 */
    bool has_thresholdIndex_r18; /**< thresholdIndex-r18 是否存在。 */
    int64_t thresholdIndex_r18; /**< ASN.1 thresholdIndex-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_pdcp_SyncIndicator_r18; /**< pdcp-SyncIndicator-r18 是否存在。 */
    MBS_SessionInfoMulticast_r18_Pdcp_SyncIndicator_r18 pdcp_SyncIndicator_r18; /**< ASN.1 pdcp-SyncIndicator-r18；枚举；OPTIONAL。 */
    bool has_stopMonitoringRNTI_r18; /**< stopMonitoringRNTI-r18 是否存在。 */
    MBS_SessionInfoMulticast_r18_StopMonitoringRNTI_r18 stopMonitoringRNTI_r18; /**< ASN.1 stopMonitoringRNTI-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18
 * @note ASN.1：headerCompression-r18/rohc/profiles-r18；源文件第 23623 行。
 * @note SEQUENCE { profile0x0000-r18, profile0x0001-r18, profile0x0002-r18 }
 */
struct MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18 {
    bool profile0x0000_r18; /**< ASN.1 profile0x0000-r18；BOOLEAN，1 bit。 */
    bool profile0x0001_r18; /**< ASN.1 profile0x0001-r18；BOOLEAN，1 bit。 */
    bool profile0x0002_r18; /**< ASN.1 profile0x0002-r18；BOOLEAN，1 bit。 */
};


/**
 * @brief MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc
 * @note ASN.1：headerCompression-r18/rohc；源文件第 23621 行。
 * @note SEQUENCE { maxCID-r18, profiles-r18 }
 */
struct MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc {
    int64_t maxCID_r18; /**< ASN.1 maxCID-r18；INTEGER (1..16)，位宽 4 bit；DEFAULT 15。 */
    MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc_Profiles_r18 profiles_r18; /**< ASN.1 profiles-r18；结构体。 */
};


/**
 * @brief MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18
 * @note ASN.1：headerCompression-r18；源文件第 23619 行。
 * @note CHOICE { notUsed, rohc }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag {
    MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_notUsed = 0, /**< ASN.1 notUsed */
    MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag_rohc = 1, /**< ASN.1 rohc */
} MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag;

struct MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18 {
    MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null notUsed; /**< ASN.1 notUsed */
        MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18_Rohc rohc; /**< ASN.1 rohc */
    } u;
};


/**
 * @brief MRB_PDCP_ConfigMulticast_r18
 * @note ASN.1：MRB-PDCP-ConfigMulticast-r18；源文件第 23617 行。
 * @note MRB-PDCP-ConfigMulticast-r18 ::= SEQUENCE { pdcp-SN-SizeDL-r18, headerCompression-r18, t-Reordering-r17 }
 */
struct MRB_PDCP_ConfigMulticast_r18 {
    MRB_PDCP_ConfigMulticast_r18_Pdcp_SN_SizeDL_r18 pdcp_SN_SizeDL_r18; /**< ASN.1 pdcp-SN-SizeDL-r18；枚举。 */
    MRB_PDCP_ConfigMulticast_r18_HeaderCompression_r18 headerCompression_r18; /**< ASN.1 headerCompression-r18；结构体。 */
    bool has_t_Reordering_r17; /**< t-Reordering-r17 是否存在。 */
    MRB_PDCP_ConfigMulticast_r18_T_Reordering_r17 t_Reordering_r17; /**< ASN.1 t-Reordering-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18
 * @note ASN.1：logicalChannelIdentity-r18；源文件第 23634 行。
 * @note CHOICE { logicalChannelIdentitymulticast-r18, logicalChannelIdentityExt-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag {
    MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentitymulticast_r18 = 0, /**< ASN.1 logicalChannelIdentitymulticast-r18 */
    MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag_logicalChannelIdentityExt_r18 = 1, /**< ASN.1 logicalChannelIdentityExt-r18 */
} MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag;

struct MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18 {
    MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        LogicalChannelIdentity logicalChannelIdentitymulticast_r18; /**< ASN.1 logicalChannelIdentitymulticast-r18 */
        LogicalChannelIdentityExt_r17 logicalChannelIdentityExt_r18; /**< ASN.1 logicalChannelIdentityExt-r18 */
    } u;
};


/**
 * @brief MRB_RLC_ConfigMulticast_r18
 * @note ASN.1：MRB-RLC-ConfigMulticast-r18；源文件第 23633 行。
 * @note MRB-RLC-ConfigMulticast-r18 ::= SEQUENCE { logicalChannelIdentity-r18, sn-FieldLength-r18, t-Reassembly-r18 }
 */
struct MRB_RLC_ConfigMulticast_r18 {
    MRB_RLC_ConfigMulticast_r18_LogicalChannelIdentity_r18 logicalChannelIdentity_r18; /**< ASN.1 logicalChannelIdentity-r18；结构体。 */
    MRB_RLC_ConfigMulticast_r18_Sn_FieldLength_r18 sn_FieldLength_r18; /**< ASN.1 sn-FieldLength-r18；枚举。 */
    bool has_t_Reassembly_r18; /**< t-Reassembly-r18 是否存在。 */
    T_Reassembly t_Reassembly_r18; /**< ASN.1 t-Reassembly-r18；枚举；OPTIONAL。 */
};


/**
 * @brief MRB_InfoMulticast_r18
 * @note ASN.1：MRB-InfoMulticast-r18；源文件第 23611 行。
 * @note MRB-InfoMulticast-r18 ::= SEQUENCE { pdcp-Config-r18, rlc-Config-r18 }
 */
struct MRB_InfoMulticast_r18 {
    MRB_PDCP_ConfigMulticast_r18 pdcp_Config_r18; /**< ASN.1 pdcp-Config-r18；结构体。 */
    MRB_RLC_ConfigMulticast_r18 rlc_Config_r18; /**< ASN.1 rlc-Config-r18；结构体。 */
};


/**
 * @brief MTCH_SSB_MappingWindowCycleOffset_r17
 * @note ASN.1：MTCH-SSB-MappingWindowCycleOffset-r17；源文件第 23647 行。
 * @note MTCH-SSB-MappingWindowCycleOffset-r17 ::= CHOICE { ms10, ms20, ms32, ms64, ms128, ms256 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum MTCH_SSB_MappingWindowCycleOffset_r17_Tag {
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms10 = 0, /**< ASN.1 ms10 */
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms20 = 1, /**< ASN.1 ms20 */
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms32 = 2, /**< ASN.1 ms32 */
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms64 = 3, /**< ASN.1 ms64 */
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms128 = 4, /**< ASN.1 ms128 */
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag_ms256 = 5, /**< ASN.1 ms256 */
} MTCH_SSB_MappingWindowCycleOffset_r17_Tag;

struct MTCH_SSB_MappingWindowCycleOffset_r17 {
    MTCH_SSB_MappingWindowCycleOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms10; /**< ASN.1 ms10 */
        int64_t ms20; /**< ASN.1 ms20 */
        int64_t ms32; /**< ASN.1 ms32 */
        int64_t ms64; /**< ASN.1 ms64 */
        int64_t ms128; /**< ASN.1 ms128 */
        int64_t ms256; /**< ASN.1 ms256 */
    } u;
};


/**
 * @brief PDSCH_ConfigPTM_r17
 * @note ASN.1：PDSCH-ConfigPTM-r17；源文件第 23668 行。
 * @note PDSCH-ConfigPTM-r17 ::= SEQUENCE { dataScramblingIdentityPDSCH-r17, dmrs-ScramblingID0-r17, pdsch-Agg...
 */
struct PDSCH_ConfigPTM_r17 {
    bool has_dataScramblingIdentityPDSCH_r17; /**< dataScramblingIdentityPDSCH-r17 是否存在。 */
    int64_t dataScramblingIdentityPDSCH_r17; /**< ASN.1 dataScramblingIdentityPDSCH-r17；INTEGER (0..1023)，位宽 10 bit；OPTIONAL。 */
    bool has_dmrs_ScramblingID0_r17; /**< dmrs-ScramblingID0-r17 是否存在。 */
    int64_t dmrs_ScramblingID0_r17; /**< ASN.1 dmrs-ScramblingID0-r17；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_pdsch_AggregationFactor_r17; /**< pdsch-AggregationFactor-r17 是否存在。 */
    PDSCH_ConfigPTM_r17_Pdsch_AggregationFactor_r17 pdsch_AggregationFactor_r17; /**< ASN.1 pdsch-AggregationFactor-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SystemInformation_IEs_Sib_TypeAndInfo_Item
 * @note ASN.1：sib-TypeAndInfo/Item；源文件第 2174 行。
 * @note CHOICE { sib2, sib3, sib4, sib5, sib6, sib7, sib8, sib9, sib10-v1610, sib11-v...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag {
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib2 = 0, /**< ASN.1 sib2 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib3 = 1, /**< ASN.1 sib3 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib4 = 2, /**< ASN.1 sib4 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib5 = 3, /**< ASN.1 sib5 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib6 = 4, /**< ASN.1 sib6 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib7 = 5, /**< ASN.1 sib7 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib8 = 6, /**< ASN.1 sib8 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib9 = 7, /**< ASN.1 sib9 */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib10_v1610 = 8, /**< ASN.1 sib10-v1610（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib11_v1610 = 9, /**< ASN.1 sib11-v1610（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib12_v1610 = 10, /**< ASN.1 sib12-v1610（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib13_v1610 = 11, /**< ASN.1 sib13-v1610（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib14_v1610 = 12, /**< ASN.1 sib14-v1610（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib15_v1700 = 13, /**< ASN.1 sib15-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib16_v1700 = 14, /**< ASN.1 sib16-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib17_v1700 = 15, /**< ASN.1 sib17-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib18_v1700 = 16, /**< ASN.1 sib18-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib19_v1700 = 17, /**< ASN.1 sib19-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib20_v1700 = 18, /**< ASN.1 sib20-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib21_v1700 = 19, /**< ASN.1 sib21-v1700（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib22_v1800 = 20, /**< ASN.1 sib22-v1800（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib23_v1800 = 21, /**< ASN.1 sib23-v1800（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib24_v1800 = 22, /**< ASN.1 sib24-v1800（扩展备选） */
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag_sib25_v1800 = 23, /**< ASN.1 sib25-v1800（扩展备选） */
} SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag;

struct SystemInformation_IEs_Sib_TypeAndInfo_Item {
    SystemInformation_IEs_Sib_TypeAndInfo_Item_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SIB2 sib2; /**< ASN.1 sib2 */
        SIB3 sib3; /**< ASN.1 sib3 */
        SIB4 sib4; /**< ASN.1 sib4 */
        SIB5 sib5; /**< ASN.1 sib5 */
        SIB6 sib6; /**< ASN.1 sib6 */
        SIB7 sib7; /**< ASN.1 sib7 */
        SIB8 sib8; /**< ASN.1 sib8 */
        SIB9 sib9; /**< ASN.1 sib9 */
        SIB10_r16 sib10_v1610; /**< ASN.1 sib10-v1610 */
        SIB11_r16 sib11_v1610; /**< ASN.1 sib11-v1610 */
        SIB12_r16 sib12_v1610; /**< ASN.1 sib12-v1610 */
        SIB13_r16 sib13_v1610; /**< ASN.1 sib13-v1610 */
        SIB14_r16 sib14_v1610; /**< ASN.1 sib14-v1610 */
        SIB15_r17 sib15_v1700; /**< ASN.1 sib15-v1700 */
        SIB16_r17 sib16_v1700; /**< ASN.1 sib16-v1700 */
        SIB17_r17 sib17_v1700; /**< ASN.1 sib17-v1700 */
        SIB18_r17 sib18_v1700; /**< ASN.1 sib18-v1700 */
        SIB19_r17 sib19_v1700; /**< ASN.1 sib19-v1700 */
        SIB20_r17 sib20_v1700; /**< ASN.1 sib20-v1700 */
        SIB21_r17 sib21_v1700; /**< ASN.1 sib21-v1700 */
        SIB22_r18 sib22_v1800; /**< ASN.1 sib22-v1800 */
        SIB23_r18 sib23_v1800; /**< ASN.1 sib23-v1800 */
        SIB24_r18 sib24_v1800; /**< ASN.1 sib24-v1800 */
        SIB25_r18 sib25_v1800; /**< ASN.1 sib25-v1800 */
    } u;
};


/**
 * @brief PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item
 * @note ASN.1：posSIB-TypeAndInfo-r16/Item；源文件第 4126 行。
 * @note CHOICE { posSib1-1-r16, posSib1-2-r16, posSib1-3-r16, posSib1-4-r16, posSib1-...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag {
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_1_r16 = 0, /**< ASN.1 posSib1-1-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_2_r16 = 1, /**< ASN.1 posSib1-2-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_3_r16 = 2, /**< ASN.1 posSib1-3-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_4_r16 = 3, /**< ASN.1 posSib1-4-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_5_r16 = 4, /**< ASN.1 posSib1-5-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_6_r16 = 5, /**< ASN.1 posSib1-6-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_7_r16 = 6, /**< ASN.1 posSib1-7-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_8_r16 = 7, /**< ASN.1 posSib1-8-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_1_r16 = 8, /**< ASN.1 posSib2-1-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_2_r16 = 9, /**< ASN.1 posSib2-2-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_3_r16 = 10, /**< ASN.1 posSib2-3-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_4_r16 = 11, /**< ASN.1 posSib2-4-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_5_r16 = 12, /**< ASN.1 posSib2-5-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_6_r16 = 13, /**< ASN.1 posSib2-6-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_7_r16 = 14, /**< ASN.1 posSib2-7-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_8_r16 = 15, /**< ASN.1 posSib2-8-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_9_r16 = 16, /**< ASN.1 posSib2-9-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_10_r16 = 17, /**< ASN.1 posSib2-10-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_11_r16 = 18, /**< ASN.1 posSib2-11-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_12_r16 = 19, /**< ASN.1 posSib2-12-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_13_r16 = 20, /**< ASN.1 posSib2-13-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_14_r16 = 21, /**< ASN.1 posSib2-14-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_15_r16 = 22, /**< ASN.1 posSib2-15-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_16_r16 = 23, /**< ASN.1 posSib2-16-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17_r16 = 24, /**< ASN.1 posSib2-17-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18_r16 = 25, /**< ASN.1 posSib2-18-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_19_r16 = 26, /**< ASN.1 posSib2-19-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20_r16 = 27, /**< ASN.1 posSib2-20-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_21_r16 = 28, /**< ASN.1 posSib2-21-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_22_r16 = 29, /**< ASN.1 posSib2-22-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_23_r16 = 30, /**< ASN.1 posSib2-23-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib3_1_r16 = 31, /**< ASN.1 posSib3-1-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib4_1_r16 = 32, /**< ASN.1 posSib4-1-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib5_1_r16 = 33, /**< ASN.1 posSib5-1-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_1_r16 = 34, /**< ASN.1 posSib6-1-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_2_r16 = 35, /**< ASN.1 posSib6-2-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_3_r16 = 36, /**< ASN.1 posSib6-3-r16 */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_9_v1700 = 37, /**< ASN.1 posSib1-9-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_10_v1700 = 38, /**< ASN.1 posSib1-10-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_24_v1700 = 39, /**< ASN.1 posSib2-24-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_25_v1700 = 40, /**< ASN.1 posSib2-25-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_4_v1700 = 41, /**< ASN.1 posSib6-4-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_5_v1700 = 42, /**< ASN.1 posSib6-5-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_6_v1700 = 43, /**< ASN.1 posSib6-6-v1700（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_17a_v1770 = 44, /**< ASN.1 posSib2-17a-v1770（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_18a_v1770 = 45, /**< ASN.1 posSib2-18a-v1770（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_20a_v1770 = 46, /**< ASN.1 posSib2-20a-v1770（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_11_v1800 = 47, /**< ASN.1 posSib1-11-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib1_12_v1800 = 48, /**< ASN.1 posSib1-12-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_26_v1800 = 49, /**< ASN.1 posSib2-26-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib2_27_v1800 = 50, /**< ASN.1 posSib2-27-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib6_7_v1800 = 51, /**< ASN.1 posSib6-7-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_1_v1800 = 52, /**< ASN.1 posSib7-1-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_2_v1800 = 53, /**< ASN.1 posSib7-2-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_3_v1800 = 54, /**< ASN.1 posSib7-3-v1800（扩展备选） */
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag_posSib7_4_v1800 = 55, /**< ASN.1 posSib7-4-v1800（扩展备选） */
} PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag;

struct PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item {
    PosSystemInformation_r16_IEs_PosSIB_TypeAndInfo_r16_Item_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SIBpos_r16 posSib1_1_r16; /**< ASN.1 posSib1-1-r16 */
        SIBpos_r16 posSib1_2_r16; /**< ASN.1 posSib1-2-r16 */
        SIBpos_r16 posSib1_3_r16; /**< ASN.1 posSib1-3-r16 */
        SIBpos_r16 posSib1_4_r16; /**< ASN.1 posSib1-4-r16 */
        SIBpos_r16 posSib1_5_r16; /**< ASN.1 posSib1-5-r16 */
        SIBpos_r16 posSib1_6_r16; /**< ASN.1 posSib1-6-r16 */
        SIBpos_r16 posSib1_7_r16; /**< ASN.1 posSib1-7-r16 */
        SIBpos_r16 posSib1_8_r16; /**< ASN.1 posSib1-8-r16 */
        SIBpos_r16 posSib2_1_r16; /**< ASN.1 posSib2-1-r16 */
        SIBpos_r16 posSib2_2_r16; /**< ASN.1 posSib2-2-r16 */
        SIBpos_r16 posSib2_3_r16; /**< ASN.1 posSib2-3-r16 */
        SIBpos_r16 posSib2_4_r16; /**< ASN.1 posSib2-4-r16 */
        SIBpos_r16 posSib2_5_r16; /**< ASN.1 posSib2-5-r16 */
        SIBpos_r16 posSib2_6_r16; /**< ASN.1 posSib2-6-r16 */
        SIBpos_r16 posSib2_7_r16; /**< ASN.1 posSib2-7-r16 */
        SIBpos_r16 posSib2_8_r16; /**< ASN.1 posSib2-8-r16 */
        SIBpos_r16 posSib2_9_r16; /**< ASN.1 posSib2-9-r16 */
        SIBpos_r16 posSib2_10_r16; /**< ASN.1 posSib2-10-r16 */
        SIBpos_r16 posSib2_11_r16; /**< ASN.1 posSib2-11-r16 */
        SIBpos_r16 posSib2_12_r16; /**< ASN.1 posSib2-12-r16 */
        SIBpos_r16 posSib2_13_r16; /**< ASN.1 posSib2-13-r16 */
        SIBpos_r16 posSib2_14_r16; /**< ASN.1 posSib2-14-r16 */
        SIBpos_r16 posSib2_15_r16; /**< ASN.1 posSib2-15-r16 */
        SIBpos_r16 posSib2_16_r16; /**< ASN.1 posSib2-16-r16 */
        SIBpos_r16 posSib2_17_r16; /**< ASN.1 posSib2-17-r16 */
        SIBpos_r16 posSib2_18_r16; /**< ASN.1 posSib2-18-r16 */
        SIBpos_r16 posSib2_19_r16; /**< ASN.1 posSib2-19-r16 */
        SIBpos_r16 posSib2_20_r16; /**< ASN.1 posSib2-20-r16 */
        SIBpos_r16 posSib2_21_r16; /**< ASN.1 posSib2-21-r16 */
        SIBpos_r16 posSib2_22_r16; /**< ASN.1 posSib2-22-r16 */
        SIBpos_r16 posSib2_23_r16; /**< ASN.1 posSib2-23-r16 */
        SIBpos_r16 posSib3_1_r16; /**< ASN.1 posSib3-1-r16 */
        SIBpos_r16 posSib4_1_r16; /**< ASN.1 posSib4-1-r16 */
        SIBpos_r16 posSib5_1_r16; /**< ASN.1 posSib5-1-r16 */
        SIBpos_r16 posSib6_1_r16; /**< ASN.1 posSib6-1-r16 */
        SIBpos_r16 posSib6_2_r16; /**< ASN.1 posSib6-2-r16 */
        SIBpos_r16 posSib6_3_r16; /**< ASN.1 posSib6-3-r16 */
        SIBpos_r16 posSib1_9_v1700; /**< ASN.1 posSib1-9-v1700 */
        SIBpos_r16 posSib1_10_v1700; /**< ASN.1 posSib1-10-v1700 */
        SIBpos_r16 posSib2_24_v1700; /**< ASN.1 posSib2-24-v1700 */
        SIBpos_r16 posSib2_25_v1700; /**< ASN.1 posSib2-25-v1700 */
        SIBpos_r16 posSib6_4_v1700; /**< ASN.1 posSib6-4-v1700 */
        SIBpos_r16 posSib6_5_v1700; /**< ASN.1 posSib6-5-v1700 */
        SIBpos_r16 posSib6_6_v1700; /**< ASN.1 posSib6-6-v1700 */
        SIBpos_r16 posSib2_17a_v1770; /**< ASN.1 posSib2-17a-v1770 */
        SIBpos_r16 posSib2_18a_v1770; /**< ASN.1 posSib2-18a-v1770 */
        SIBpos_r16 posSib2_20a_v1770; /**< ASN.1 posSib2-20a-v1770 */
        SIBpos_r16 posSib1_11_v1800; /**< ASN.1 posSib1-11-v1800 */
        SIBpos_r16 posSib1_12_v1800; /**< ASN.1 posSib1-12-v1800 */
        SIBpos_r16 posSib2_26_v1800; /**< ASN.1 posSib2-26-v1800 */
        SIBpos_r16 posSib2_27_v1800; /**< ASN.1 posSib2-27-v1800 */
        SIBpos_r16 posSib6_7_v1800; /**< ASN.1 posSib6-7-v1800 */
        SIBpos_r16 posSib7_1_v1800; /**< ASN.1 posSib7-1-v1800 */
        SIBpos_r16 posSib7_2_v1800; /**< ASN.1 posSib7-2-v1800 */
        SIBpos_r16 posSib7_3_v1800; /**< ASN.1 posSib7-3-v1800 */
        SIBpos_r16 posSib7_4_v1800; /**< ASN.1 posSib7-4-v1800 */
    } u;
};


/**
 * @brief RateMatchPatternGroup_Item
 * @note ASN.1：Item；源文件第 9526 行。
 * @note CHOICE { cellLevel, bwpLevel }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RateMatchPatternGroup_Item_Tag {
    RateMatchPatternGroup_Item_Tag_cellLevel = 0, /**< ASN.1 cellLevel */
    RateMatchPatternGroup_Item_Tag_bwpLevel = 1, /**< ASN.1 bwpLevel */
} RateMatchPatternGroup_Item_Tag;

struct RateMatchPatternGroup_Item {
    RateMatchPatternGroup_Item_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RateMatchPatternId cellLevel; /**< ASN.1 cellLevel */
        RateMatchPatternId bwpLevel; /**< ASN.1 bwpLevel */
    } u;
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART025_H */
