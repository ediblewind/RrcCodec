/* ============================================================================
 * types/rrc_types_part017.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART017_H
#define RRC_CODEC_TYPES_PART017_H

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

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief CellIdentity_EUTRA_5GC
 * @note ASN.1：CellIdentity-EUTRA-5GC；源文件第 4779 行。
 * @note CellIdentity-EUTRA-5GC ::= CHOICE { cellIdentity-EUTRA, cellId-index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CellIdentity_EUTRA_5GC_Tag {
    CellIdentity_EUTRA_5GC_Tag_cellIdentity_EUTRA = 0, /**< ASN.1 cellIdentity-EUTRA */
    CellIdentity_EUTRA_5GC_Tag_cellId_index = 1, /**< ASN.1 cellId-index */
} CellIdentity_EUTRA_5GC_Tag;

struct CellIdentity_EUTRA_5GC {
    CellIdentity_EUTRA_5GC_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString cellIdentity_EUTRA; /**< ASN.1 cellIdentity-EUTRA */
        int64_t cellId_index; /**< ASN.1 cellId-index */
    } u;
};


/**
 * @brief CellAccessRelatedInfo_EUTRA_5GC
 * @note ASN.1：CellAccessRelatedInfo-EUTRA-5GC；源文件第 4765 行。
 * @note CellAccessRelatedInfo-EUTRA-5GC ::= SEQUENCE { plmn-IdentityList-eutra-5gc, trackingAreaCode-eutra-5gc, ranac-5gc...
 */
struct CellAccessRelatedInfo_EUTRA_5GC {
    PLMN_IdentityList_EUTRA_5GC plmn_IdentityList_eutra_5gc; /**< ASN.1 plmn-IdentityList-eutra-5gc；SEQUENCE OF PLMN_Identity_EUTRA_5GC，SIZE (1..12)。 */
    TrackingAreaCode trackingAreaCode_eutra_5gc; /**< ASN.1 trackingAreaCode-eutra-5gc；SIZE (24)，定长。 */
    bool has_ranac_5gc; /**< ranac-5gc 是否存在。 */
    RAN_AreaCode ranac_5gc; /**< ASN.1 ranac-5gc；INTEGER (0..255)，位宽 8 bit；OPTIONAL。 */
    CellIdentity_EUTRA_5GC cellIdentity_eutra_5gc; /**< ASN.1 cellIdentity-eutra-5gc；结构体。 */
};


/**
 * @brief PLMN_Identity_EUTRA_5GC
 * @note ASN.1：PLMN-Identity-EUTRA-5GC；源文件第 4774 行。
 * @note PLMN-Identity-EUTRA-5GC ::= CHOICE { plmn-Identity-EUTRA-5GC, plmn-index }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum PLMN_Identity_EUTRA_5GC_Tag {
    PLMN_Identity_EUTRA_5GC_Tag_plmn_Identity_EUTRA_5GC = 0, /**< ASN.1 plmn-Identity-EUTRA-5GC */
    PLMN_Identity_EUTRA_5GC_Tag_plmn_index = 1, /**< ASN.1 plmn-index */
} PLMN_Identity_EUTRA_5GC_Tag;

struct PLMN_Identity_EUTRA_5GC {
    PLMN_Identity_EUTRA_5GC_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        PLMN_Identity plmn_Identity_EUTRA_5GC; /**< ASN.1 plmn-Identity-EUTRA-5GC */
        int64_t plmn_index; /**< ASN.1 plmn-index */
    } u;
};


/**
 * @brief PLMN_IdentityList_EUTRA_EPC
 * @note ASN.1：PLMN-IdentityList-EUTRA-EPC；源文件第 4793 行。
 * @note PLMN-IdentityList-EUTRA-EPC ::= SEQUENCE OF (size 1..12) OF PLMN-Identity
 */
struct PLMN_IdentityList_EUTRA_EPC {
    PLMN_Identity* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CellAccessRelatedInfo_EUTRA_EPC
 * @note ASN.1：CellAccessRelatedInfo-EUTRA-EPC；源文件第 4787 行。
 * @note CellAccessRelatedInfo-EUTRA-EPC ::= SEQUENCE { plmn-IdentityList-eutra-epc, trackingAreaCode-eutra-epc, cellIdent...
 */
struct CellAccessRelatedInfo_EUTRA_EPC {
    PLMN_IdentityList_EUTRA_EPC plmn_IdentityList_eutra_epc; /**< ASN.1 plmn-IdentityList-eutra-epc；SEQUENCE OF PLMN_Identity，SIZE (1..12)。 */
    BitString trackingAreaCode_eutra_epc; /**< ASN.1 trackingAreaCode-eutra-epc；SIZE (16)，定长。 */
    BitString cellIdentity_eutra_epc; /**< ASN.1 cellIdentity-eutra-epc；SIZE (28)，定长。 */
};


/**
 * @brief CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18
 * @note ASN.1：cellDTXDRX-onDurationTimer-r18；源文件第 4799 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag {
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag;

struct CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18 {
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18
 * @note ASN.1：cellDTXDRX-CycleStartOffset-r18；源文件第 4806 行。
 * @note CHOICE { ms10, ms20, ms32, ms40, ms60, ms64, ms70, ms80, ms128, ms160, ms256,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag {
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10 = 0, /**< ASN.1 ms10 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms20 = 1, /**< ASN.1 ms20 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms32 = 2, /**< ASN.1 ms32 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms40 = 3, /**< ASN.1 ms40 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms60 = 4, /**< ASN.1 ms60 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms64 = 5, /**< ASN.1 ms64 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms70 = 6, /**< ASN.1 ms70 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms80 = 7, /**< ASN.1 ms80 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms128 = 8, /**< ASN.1 ms128 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms160 = 9, /**< ASN.1 ms160 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms256 = 10, /**< ASN.1 ms256 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms320 = 11, /**< ASN.1 ms320 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms512 = 12, /**< ASN.1 ms512 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms640 = 13, /**< ASN.1 ms640 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1024 = 14, /**< ASN.1 ms1024 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms1280 = 15, /**< ASN.1 ms1280 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2048 = 16, /**< ASN.1 ms2048 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms2560 = 17, /**< ASN.1 ms2560 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms5120 = 18, /**< ASN.1 ms5120 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag_ms10240 = 19, /**< ASN.1 ms10240 */
} CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag;

struct CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18 {
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
 * @brief CellDTXDRX_Config_r18
 * @note ASN.1：CellDTXDRX-Config-r18；源文件第 4798 行。
 * @note CellDTXDRX-Config-r18 ::= SEQUENCE { cellDTXDRX-onDurationTimer-r18, cellDTXDRX-CycleStartOffset-r18, c...
 */
struct CellDTXDRX_Config_r18 {
    CellDTXDRX_Config_r18_CellDTXDRX_onDurationTimer_r18 cellDTXDRX_onDurationTimer_r18; /**< ASN.1 cellDTXDRX-onDurationTimer-r18；结构体。 */
    CellDTXDRX_Config_r18_CellDTXDRX_CycleStartOffset_r18 cellDTXDRX_CycleStartOffset_r18; /**< ASN.1 cellDTXDRX-CycleStartOffset-r18；结构体。 */
    int64_t cellDTXDRX_SlotOffset_r18; /**< ASN.1 cellDTXDRX-SlotOffset-r18；INTEGER (0..31)，位宽 5 bit。 */
    CellDTXDRX_Config_r18_CellDTXDRXconfigType_r18 cellDTXDRXconfigType_r18; /**< ASN.1 cellDTXDRXconfigType-r18；枚举。 */
    bool has_cellDTXDRXactivationStatus_r18; /**< cellDTXDRXactivationStatus-r18 是否存在。 */
    CellDTXDRX_Config_r18_CellDTXDRXactivationStatus_r18 cellDTXDRXactivationStatus_r18; /**< ASN.1 cellDTXDRXactivationStatus-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CellGroupConfig_ExtGroup1
 * @note ASN.1：CellGroupConfig_ExtGroup1；源文件第 4847 行。
 */
struct CellGroupConfig_ExtGroup1 {
    bool has_reportUplinkTxDirectCurrent; /**< reportUplinkTxDirectCurrent 是否存在。 */
    CellGroupConfig_ExtGroup1_ReportUplinkTxDirectCurrent reportUplinkTxDirectCurrent; /**< ASN.1 reportUplinkTxDirectCurrent；枚举；OPTIONAL。 */
};


/**
 * @brief CellGroupConfig_ExtGroup2
 * @note ASN.1：CellGroupConfig_ExtGroup2；源文件第 4850 行。
 */
struct CellGroupConfig_ExtGroup2 {
    bool has_bap_Address_r16; /**< bap-Address-r16 是否存在。 */
    BitString bap_Address_r16; /**< ASN.1 bap-Address-r16；SIZE (10)，定长；OPTIONAL。 */
    bool has_bh_RLC_ChannelToAddModList_r16; /**< bh-RLC-ChannelToAddModList-r16 是否存在。 */
    BH_RLC_ChannelConfig_r16* bh_RLC_ChannelToAddModList_r16_items; /**< ASN.1 bh-RLC-ChannelToAddModList-r16；SEQUENCE OF BH_RLC_ChannelConfig_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bh_RLC_ChannelToAddModList_r16_count; /**< bh-RLC-ChannelToAddModList-r16 元素个数。 */
    bool has_bh_RLC_ChannelToReleaseList_r16; /**< bh-RLC-ChannelToReleaseList-r16 是否存在。 */
    BH_RLC_ChannelID_r16* bh_RLC_ChannelToReleaseList_r16_items; /**< ASN.1 bh-RLC-ChannelToReleaseList-r16；SEQUENCE OF BH_RLC_ChannelID_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t bh_RLC_ChannelToReleaseList_r16_count; /**< bh-RLC-ChannelToReleaseList-r16 元素个数。 */
    bool has_f1c_TransferPath_r16; /**< f1c-TransferPath-r16 是否存在。 */
    CellGroupConfig_ExtGroup2_F1c_TransferPath_r16 f1c_TransferPath_r16; /**< ASN.1 f1c-TransferPath-r16；枚举；OPTIONAL。 */
    bool has_simultaneousTCI_UpdateList1_r16; /**< simultaneousTCI-UpdateList1-r16 是否存在。 */
    ServCellIndex* simultaneousTCI_UpdateList1_r16_items; /**< ASN.1 simultaneousTCI-UpdateList1-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousTCI_UpdateList1_r16_count; /**< simultaneousTCI-UpdateList1-r16 元素个数。 */
    bool has_simultaneousTCI_UpdateList2_r16; /**< simultaneousTCI-UpdateList2-r16 是否存在。 */
    ServCellIndex* simultaneousTCI_UpdateList2_r16_items; /**< ASN.1 simultaneousTCI-UpdateList2-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousTCI_UpdateList2_r16_count; /**< simultaneousTCI-UpdateList2-r16 元素个数。 */
    bool has_simultaneousSpatial_UpdatedList1_r16; /**< simultaneousSpatial-UpdatedList1-r16 是否存在。 */
    ServCellIndex* simultaneousSpatial_UpdatedList1_r16_items; /**< ASN.1 simultaneousSpatial-UpdatedList1-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousSpatial_UpdatedList1_r16_count; /**< simultaneousSpatial-UpdatedList1-r16 元素个数。 */
    bool has_simultaneousSpatial_UpdatedList2_r16; /**< simultaneousSpatial-UpdatedList2-r16 是否存在。 */
    ServCellIndex* simultaneousSpatial_UpdatedList2_r16_items; /**< ASN.1 simultaneousSpatial-UpdatedList2-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousSpatial_UpdatedList2_r16_count; /**< simultaneousSpatial-UpdatedList2-r16 元素个数。 */
    bool has_uplinkTxSwitchingOption_r16; /**< uplinkTxSwitchingOption-r16 是否存在。 */
    CellGroupConfig_ExtGroup2_UplinkTxSwitchingOption_r16 uplinkTxSwitchingOption_r16; /**< ASN.1 uplinkTxSwitchingOption-r16；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitchingPowerBoosting_r16; /**< uplinkTxSwitchingPowerBoosting-r16 是否存在。 */
    CellGroupConfig_ExtGroup2_UplinkTxSwitchingPowerBoosting_r16 uplinkTxSwitchingPowerBoosting_r16; /**< ASN.1 uplinkTxSwitchingPowerBoosting-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CellGroupConfig_ExtGroup3
 * @note ASN.1：CellGroupConfig_ExtGroup3；源文件第 4862 行。
 */
struct CellGroupConfig_ExtGroup3 {
    bool has_reportUplinkTxDirectCurrentTwoCarrier_r16; /**< reportUplinkTxDirectCurrentTwoCarrier-r16 是否存在。 */
    CellGroupConfig_ExtGroup3_ReportUplinkTxDirectCurrentTwoCarrier_r16 reportUplinkTxDirectCurrentTwoCarrier_r16; /**< ASN.1 reportUplinkTxDirectCurrentTwoCarrier-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CellGroupConfig_ExtGroup4
 * @note ASN.1：CellGroupConfig_ExtGroup4；源文件第 4865 行。
 */
struct CellGroupConfig_ExtGroup4 {
    bool has_f1c_TransferPathNRDC_r17; /**< f1c-TransferPathNRDC-r17 是否存在。 */
    CellGroupConfig_ExtGroup4_F1c_TransferPathNRDC_r17 f1c_TransferPathNRDC_r17; /**< ASN.1 f1c-TransferPathNRDC-r17；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitching_2T_Mode_r17; /**< uplinkTxSwitching-2T-Mode-r17 是否存在。 */
    CellGroupConfig_ExtGroup4_UplinkTxSwitching_2T_Mode_r17 uplinkTxSwitching_2T_Mode_r17; /**< ASN.1 uplinkTxSwitching-2T-Mode-r17；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitching_DualUL_TxState_r17; /**< uplinkTxSwitching-DualUL-TxState-r17 是否存在。 */
    CellGroupConfig_ExtGroup4_UplinkTxSwitching_DualUL_TxState_r17 uplinkTxSwitching_DualUL_TxState_r17; /**< ASN.1 uplinkTxSwitching-DualUL-TxState-r17；枚举；OPTIONAL。 */
    bool has_uu_RelayRLC_ChannelToAddModList_r17; /**< uu-RelayRLC-ChannelToAddModList-r17 是否存在。 */
    Uu_RelayRLC_ChannelConfig_r17* uu_RelayRLC_ChannelToAddModList_r17_items; /**< ASN.1 uu-RelayRLC-ChannelToAddModList-r17；SEQUENCE OF Uu_RelayRLC_ChannelConfig_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uu_RelayRLC_ChannelToAddModList_r17_count; /**< uu-RelayRLC-ChannelToAddModList-r17 元素个数。 */
    bool has_uu_RelayRLC_ChannelToReleaseList_r17; /**< uu-RelayRLC-ChannelToReleaseList-r17 是否存在。 */
    Uu_RelayRLC_ChannelID_r17* uu_RelayRLC_ChannelToReleaseList_r17_items; /**< ASN.1 uu-RelayRLC-ChannelToReleaseList-r17；SEQUENCE OF Uu_RelayRLC_ChannelID_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uu_RelayRLC_ChannelToReleaseList_r17_count; /**< uu-RelayRLC-ChannelToReleaseList-r17 元素个数。 */
    bool has_simultaneousU_TCI_UpdateList1_r17; /**< simultaneousU-TCI-UpdateList1-r17 是否存在。 */
    ServCellIndex* simultaneousU_TCI_UpdateList1_r17_items; /**< ASN.1 simultaneousU-TCI-UpdateList1-r17；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousU_TCI_UpdateList1_r17_count; /**< simultaneousU-TCI-UpdateList1-r17 元素个数。 */
    bool has_simultaneousU_TCI_UpdateList2_r17; /**< simultaneousU-TCI-UpdateList2-r17 是否存在。 */
    ServCellIndex* simultaneousU_TCI_UpdateList2_r17_items; /**< ASN.1 simultaneousU-TCI-UpdateList2-r17；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousU_TCI_UpdateList2_r17_count; /**< simultaneousU-TCI-UpdateList2-r17 元素个数。 */
    bool has_simultaneousU_TCI_UpdateList3_r17; /**< simultaneousU-TCI-UpdateList3-r17 是否存在。 */
    ServCellIndex* simultaneousU_TCI_UpdateList3_r17_items; /**< ASN.1 simultaneousU-TCI-UpdateList3-r17；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousU_TCI_UpdateList3_r17_count; /**< simultaneousU-TCI-UpdateList3-r17 元素个数。 */
    bool has_simultaneousU_TCI_UpdateList4_r17; /**< simultaneousU-TCI-UpdateList4-r17 是否存在。 */
    ServCellIndex* simultaneousU_TCI_UpdateList4_r17_items; /**< ASN.1 simultaneousU-TCI-UpdateList4-r17；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t simultaneousU_TCI_UpdateList4_r17_count; /**< simultaneousU-TCI-UpdateList4-r17 元素个数。 */
    bool has_rlc_BearerToReleaseListExt_r17; /**< rlc-BearerToReleaseListExt-r17 是否存在。 */
    LogicalChannelIdentityExt_r17* rlc_BearerToReleaseListExt_r17_items; /**< ASN.1 rlc-BearerToReleaseListExt-r17；SEQUENCE OF LogicalChannelIdentityExt_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rlc_BearerToReleaseListExt_r17_count; /**< rlc-BearerToReleaseListExt-r17 元素个数。 */
    bool has_iab_ResourceConfigToAddModList_r17; /**< iab-ResourceConfigToAddModList-r17 是否存在。 */
    IAB_ResourceConfig_r17* iab_ResourceConfigToAddModList_r17_items; /**< ASN.1 iab-ResourceConfigToAddModList-r17；SEQUENCE OF IAB_ResourceConfig_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t iab_ResourceConfigToAddModList_r17_count; /**< iab-ResourceConfigToAddModList-r17 元素个数。 */
    bool has_iab_ResourceConfigToReleaseList_r17; /**< iab-ResourceConfigToReleaseList-r17 是否存在。 */
    IAB_ResourceConfigID_r17* iab_ResourceConfigToReleaseList_r17_items; /**< ASN.1 iab-ResourceConfigToReleaseList-r17；SEQUENCE OF IAB_ResourceConfigID_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t iab_ResourceConfigToReleaseList_r17_count; /**< iab-ResourceConfigToReleaseList-r17 元素个数。 */
};


/**
 * @brief ReportUplinkTxDirectCurrentMoreCarrier_r17
 * @note ASN.1：ReportUplinkTxDirectCurrentMoreCarrier-r17；源文件第 4995 行。
 * @note ReportUplinkTxDirectCurrentMoreCarrier-r17 ::= SEQUENCE OF (size 1..32) OF IntraBandCC-CombinationReqList-r17
 */
struct ReportUplinkTxDirectCurrentMoreCarrier_r17 {
    IntraBandCC_CombinationReqList_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief CellGroupConfig_ExtGroup5
 * @note ASN.1：CellGroupConfig_ExtGroup5；源文件第 4881 行。
 */
struct CellGroupConfig_ExtGroup5 {
    bool has_reportUplinkTxDirectCurrentMoreCarrier_r17; /**< reportUplinkTxDirectCurrentMoreCarrier-r17 是否存在。 */
    ReportUplinkTxDirectCurrentMoreCarrier_r17 reportUplinkTxDirectCurrentMoreCarrier_r17; /**< ASN.1 reportUplinkTxDirectCurrentMoreCarrier-r17；SEQUENCE OF IntraBandCC_CombinationReqList_r17，SIZE (1..32)；OPTIONAL。 */
};


/**
 * @brief CellGroupConfig_ExtGroup6
 * @note ASN.1：CellGroupConfig_ExtGroup6；源文件第 4884 行。
 */
struct CellGroupConfig_ExtGroup6 {
    bool has_prioSCellPRACH_OverSP_PeriodicSRS_r17; /**< prioSCellPRACH-OverSP-PeriodicSRS-r17 是否存在。 */
    CellGroupConfig_ExtGroup6_PrioSCellPRACH_OverSP_PeriodicSRS_r17 prioSCellPRACH_OverSP_PeriodicSRS_r17; /**< ASN.1 prioSCellPRACH-OverSP-PeriodicSRS-r17；枚举；OPTIONAL。 */
};


/**
 * @brief NCR_AperiodicFwdConfig_r18
 * @note ASN.1：NCR-AperiodicFwdConfig-r18；源文件第 8486 行。
 * @note NCR-AperiodicFwdConfig-r18 ::= SEQUENCE { aperiodicFwdTimeRsrcToAddModList-r18, aperiodicFwdTimeRsrcToReleas...
 */
struct NCR_AperiodicFwdConfig_r18 {
    bool has_aperiodicFwdTimeRsrcToAddModList_r18; /**< aperiodicFwdTimeRsrcToAddModList-r18 是否存在。 */
    NCR_AperiodicFwdTimeResource_r18* aperiodicFwdTimeRsrcToAddModList_r18_items; /**< ASN.1 aperiodicFwdTimeRsrcToAddModList-r18；SEQUENCE OF NCR_AperiodicFwdTimeResource_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodicFwdTimeRsrcToAddModList_r18_count; /**< aperiodicFwdTimeRsrcToAddModList-r18 元素个数。 */
    bool has_aperiodicFwdTimeRsrcToReleaseList_r18; /**< aperiodicFwdTimeRsrcToReleaseList-r18 是否存在。 */
    NCR_AperiodicFwdTimeResourceId_r18* aperiodicFwdTimeRsrcToReleaseList_r18_items; /**< ASN.1 aperiodicFwdTimeRsrcToReleaseList-r18；SEQUENCE OF NCR_AperiodicFwdTimeResourceId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t aperiodicFwdTimeRsrcToReleaseList_r18_count; /**< aperiodicFwdTimeRsrcToReleaseList-r18 元素个数。 */
    bool has_referenceSCS_r18; /**< referenceSCS-r18 是否存在。 */
    SubcarrierSpacing referenceSCS_r18; /**< ASN.1 referenceSCS-r18；枚举；OPTIONAL。 */
    bool has_aperiodicBeamFieldWidth_r18; /**< aperiodicBeamFieldWidth-r18 是否存在。 */
    int64_t aperiodicBeamFieldWidth_r18; /**< ASN.1 aperiodicBeamFieldWidth-r18；INTEGER (1..6)，位宽 3 bit；OPTIONAL。 */
    bool has_numberOfFields_r18; /**< numberOfFields-r18 是否存在。 */
    int64_t numberOfFields_r18; /**< ASN.1 numberOfFields-r18；INTEGER (1..32)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_NCR_AperiodicFwdConfig_r18
 * @note ASN.1：SetupRelease<NCR-AperiodicFwdConfig-r18>；源文件第 8515 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NCR_AperiodicFwdConfig_r18_Tag {
    SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NCR_AperiodicFwdConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NCR_AperiodicFwdConfig_r18_Tag;

struct SetupRelease_NCR_AperiodicFwdConfig_r18 {
    SetupRelease_NCR_AperiodicFwdConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NCR_AperiodicFwdConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief NCR_FwdConfig_r18
 * @note ASN.1：NCR-FwdConfig-r18；源文件第 8510 行。
 * @note NCR-FwdConfig-r18 ::= SEQUENCE { periodicFwdRsrcSetToAddModList-r18, periodicFwdRsrcSetToReleaseLis...
 */
struct NCR_FwdConfig_r18 {
    bool has_periodicFwdRsrcSetToAddModList_r18; /**< periodicFwdRsrcSetToAddModList-r18 是否存在。 */
    NCR_PeriodicFwdResourceSet_r18* periodicFwdRsrcSetToAddModList_r18_items; /**< ASN.1 periodicFwdRsrcSetToAddModList-r18；SEQUENCE OF NCR_PeriodicFwdResourceSet_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t periodicFwdRsrcSetToAddModList_r18_count; /**< periodicFwdRsrcSetToAddModList-r18 元素个数。 */
    bool has_periodicFwdRsrcSetToReleaseList_r18; /**< periodicFwdRsrcSetToReleaseList-r18 是否存在。 */
    NCR_PeriodicFwdResourceSetId_r18* periodicFwdRsrcSetToReleaseList_r18_items; /**< ASN.1 periodicFwdRsrcSetToReleaseList-r18；SEQUENCE OF NCR_PeriodicFwdResourceSetId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t periodicFwdRsrcSetToReleaseList_r18_count; /**< periodicFwdRsrcSetToReleaseList-r18 元素个数。 */
    bool has_aperiodicFwdConfig_r18; /**< aperiodicFwdConfig-r18 是否存在。 */
    SetupRelease_NCR_AperiodicFwdConfig_r18 aperiodicFwdConfig_r18; /**< ASN.1 aperiodicFwdConfig-r18；结构体；OPTIONAL。 */
    bool has_semiPersistentFwdRsrcSetToAddModList_r18; /**< semiPersistentFwdRsrcSetToAddModList-r18 是否存在。 */
    NCR_SemiPersistentFwdResourceSet_r18* semiPersistentFwdRsrcSetToAddModList_r18_items; /**< ASN.1 semiPersistentFwdRsrcSetToAddModList-r18；SEQUENCE OF NCR_SemiPersistentFwdResourceSet_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t semiPersistentFwdRsrcSetToAddModList_r18_count; /**< semiPersistentFwdRsrcSetToAddModList-r18 元素个数。 */
    bool has_semiPersistentFwdRsrcSetToReleaseList_r18; /**< semiPersistentFwdRsrcSetToReleaseList-r18 是否存在。 */
    NCR_SemiPersistentFwdResourceSetId_r18* semiPersistentFwdRsrcSetToReleaseList_r18_items; /**< ASN.1 semiPersistentFwdRsrcSetToReleaseList-r18；SEQUENCE OF NCR_SemiPersistentFwdResourceSetId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t semiPersistentFwdRsrcSetToReleaseList_r18_count; /**< semiPersistentFwdRsrcSetToReleaseList-r18 元素个数。 */
};


/**
 * @brief SetupRelease_NCR_FwdConfig_r18
 * @note ASN.1：SetupRelease<NCR-FwdConfig-r18>；源文件第 4888 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NCR_FwdConfig_r18_Tag {
    SetupRelease_NCR_FwdConfig_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NCR_FwdConfig_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NCR_FwdConfig_r18_Tag;

struct SetupRelease_NCR_FwdConfig_r18 {
    SetupRelease_NCR_FwdConfig_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NCR_FwdConfig_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief AutonomousDenialParameters_r18
 * @note ASN.1：AutonomousDenialParameters-r18；源文件第 5014 行。
 * @note AutonomousDenialParameters-r18 ::= SEQUENCE { autonomousDenialSlots-r18, autonomousDenialValidity-r18 }
 */
struct AutonomousDenialParameters_r18 {
    AutonomousDenialParameters_r18_AutonomousDenialSlots_r18 autonomousDenialSlots_r18; /**< ASN.1 autonomousDenialSlots-r18；枚举。 */
    AutonomousDenialParameters_r18_AutonomousDenialValidity_r18 autonomousDenialValidity_r18; /**< ASN.1 autonomousDenialValidity-r18；枚举。 */
};


/**
 * @brief SetupRelease_AutonomousDenialParameters_r18
 * @note ASN.1：SetupRelease<AutonomousDenialParameters-r18>；源文件第 4889 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_AutonomousDenialParameters_r18_Tag {
    SetupRelease_AutonomousDenialParameters_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_AutonomousDenialParameters_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_AutonomousDenialParameters_r18_Tag;

struct SetupRelease_AutonomousDenialParameters_r18 {
    SetupRelease_AutonomousDenialParameters_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        AutonomousDenialParameters_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UplinkTxSwitchingBandPairList_r18
 * @note ASN.1：UplinkTxSwitchingBandPairList-r18；源文件第 5035 行。
 * @note UplinkTxSwitchingBandPairList-r18 ::= SEQUENCE OF (size 1..32) OF UplinkTxSwitchingBandPairConfig-r18
 */
struct UplinkTxSwitchingBandPairList_r18 {
    UplinkTxSwitchingBandPairConfig_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UplinkTxSwitchingAssociatedBandDualUL_List_r18
 * @note ASN.1：UplinkTxSwitchingAssociatedBandDualUL-List-r18；源文件第 5046 行。
 * @note UplinkTxSwitchingAssociatedBandDualUL-List-r18 ::= SEQUENCE OF (size 0..32) OF UplinkTxSwitchingAssociatedBandDualUL-r18
 */
struct UplinkTxSwitchingAssociatedBandDualUL_List_r18 {
    UplinkTxSwitchingAssociatedBandDualUL_r18* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief UplinkTxSwitchingMoreBands_r18
 * @note ASN.1：UplinkTxSwitchingMoreBands-r18；源文件第 5028 行。
 * @note UplinkTxSwitchingMoreBands-r18 ::= SEQUENCE { uplinkTxSwitchingBandList-r18, uplinkTxSwitchingBandPairList-r18, ...
 */
struct UplinkTxSwitchingMoreBands_r18 {
    bool has_uplinkTxSwitchingBandList_r18; /**< uplinkTxSwitchingBandList-r18 是否存在。 */
    FreqBandIndicatorNR* uplinkTxSwitchingBandList_r18_items; /**< ASN.1 uplinkTxSwitchingBandList-r18；SEQUENCE OF FreqBandIndicatorNR，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkTxSwitchingBandList_r18_count; /**< uplinkTxSwitchingBandList-r18 元素个数。 */
    bool has_uplinkTxSwitchingBandPairList_r18; /**< uplinkTxSwitchingBandPairList-r18 是否存在。 */
    UplinkTxSwitchingBandPairList_r18 uplinkTxSwitchingBandPairList_r18; /**< ASN.1 uplinkTxSwitchingBandPairList-r18；SEQUENCE OF UplinkTxSwitchingBandPairConfig_r18，SIZE (1..32)；OPTIONAL。 */
    bool has_uplinkTxSwitchingAssociatedBandDualUL_List_r18; /**< uplinkTxSwitchingAssociatedBandDualUL-List-r18 是否存在。 */
    UplinkTxSwitchingAssociatedBandDualUL_List_r18 uplinkTxSwitchingAssociatedBandDualUL_List_r18; /**< ASN.1 uplinkTxSwitchingAssociatedBandDualUL-List-r18；SEQUENCE OF UplinkTxSwitchingAssociatedBandDualUL_r18，SIZE (0..32)；OPTIONAL。 */
};


/**
 * @brief SetupRelease_UplinkTxSwitchingMoreBands_r18
 * @note ASN.1：SetupRelease<UplinkTxSwitchingMoreBands-r18>；源文件第 4892 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag {
    SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag;

struct SetupRelease_UplinkTxSwitchingMoreBands_r18 {
    SetupRelease_UplinkTxSwitchingMoreBands_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UplinkTxSwitchingMoreBands_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief CellGroupConfig_ExtGroup7
 * @note ASN.1：CellGroupConfig_ExtGroup7；源文件第 4887 行。
 */
struct CellGroupConfig_ExtGroup7 {
    bool has_ncr_FwdConfig_r18; /**< ncr-FwdConfig-r18 是否存在。 */
    SetupRelease_NCR_FwdConfig_r18 ncr_FwdConfig_r18; /**< ASN.1 ncr-FwdConfig-r18；结构体；OPTIONAL。 */
    bool has_autonomousDenialParameters_r18; /**< autonomousDenialParameters-r18 是否存在。 */
    SetupRelease_AutonomousDenialParameters_r18 autonomousDenialParameters_r18; /**< ASN.1 autonomousDenialParameters-r18；结构体；OPTIONAL。 */
    bool has_nonCollocatedTypeMRDC_r18; /**< nonCollocatedTypeMRDC-r18 是否存在。 */
    CellGroupConfig_ExtGroup7_NonCollocatedTypeMRDC_r18 nonCollocatedTypeMRDC_r18; /**< ASN.1 nonCollocatedTypeMRDC-r18；枚举；OPTIONAL。 */
    bool has_nonCollocatedTypeNR_CA_r18; /**< nonCollocatedTypeNR-CA-r18 是否存在。 */
    CellGroupConfig_ExtGroup7_NonCollocatedTypeNR_CA_r18 nonCollocatedTypeNR_CA_r18; /**< ASN.1 nonCollocatedTypeNR-CA-r18；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitchingMoreBands_r18; /**< uplinkTxSwitchingMoreBands-r18 是否存在。 */
    SetupRelease_UplinkTxSwitchingMoreBands_r18 uplinkTxSwitchingMoreBands_r18; /**< ASN.1 uplinkTxSwitchingMoreBands-r18；结构体；OPTIONAL。 */
};


/**
 * @brief GoodServingCellEvaluation_r17
 * @note ASN.1：GoodServingCellEvaluation-r17；源文件第 4976 行。
 * @note GoodServingCellEvaluation-r17 ::= SEQUENCE { offset-r17 }
 */
struct GoodServingCellEvaluation_r17 {
    bool has_offset_r17; /**< offset-r17 是否存在。 */
    GoodServingCellEvaluation_r17_Offset_r17 offset_r17; /**< ASN.1 offset-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17
 * @note ASN.1：lowMobilityEvaluationConnected-r17；源文件第 4905 行。
 * @note SEQUENCE { s-SearchDeltaP-Connected-r17, t-SearchDeltaP-Connected-r17 }
 */
struct SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17 {
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_S_SearchDeltaP_Connected_r17 s_SearchDeltaP_Connected_r17; /**< ASN.1 s-SearchDeltaP-Connected-r17；枚举。 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17_T_SearchDeltaP_Connected_r17 t_SearchDeltaP_Connected_r17; /**< ASN.1 t-SearchDeltaP-Connected-r17；枚举。 */
};


/**
 * @brief DeactivatedSCG_Config_r17
 * @note ASN.1：DeactivatedSCG-Config-r17；源文件第 4971 行。
 * @note DeactivatedSCG-Config-r17 ::= SEQUENCE { bfd-and-RLM-r17 }
 */
struct DeactivatedSCG_Config_r17 {
    bool bfd_and_RLM_r17; /**< ASN.1 bfd-and-RLM-r17；BOOLEAN，1 bit。 */
};


/**
 * @brief SetupRelease_DeactivatedSCG_Config_r17
 * @note ASN.1：SetupRelease<DeactivatedSCG-Config-r17>；源文件第 4912 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DeactivatedSCG_Config_r17_Tag {
    SetupRelease_DeactivatedSCG_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DeactivatedSCG_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DeactivatedSCG_Config_r17_Tag;

struct SetupRelease_DeactivatedSCG_Config_r17 {
    SetupRelease_DeactivatedSCG_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DeactivatedSCG_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SpCellConfig_ExtGroup1
 * @note ASN.1：SpCellConfig_ExtGroup1；源文件第 4904 行。
 */
struct SpCellConfig_ExtGroup1 {
    bool has_lowMobilityEvaluationConnected_r17; /**< lowMobilityEvaluationConnected-r17 是否存在。 */
    SpCellConfig_ExtGroup1_LowMobilityEvaluationConnected_r17 lowMobilityEvaluationConnected_r17; /**< ASN.1 lowMobilityEvaluationConnected-r17；结构体；OPTIONAL。 */
    bool has_goodServingCellEvaluationRLM_r17; /**< goodServingCellEvaluationRLM-r17 是否存在。 */
    GoodServingCellEvaluation_r17 goodServingCellEvaluationRLM_r17; /**< ASN.1 goodServingCellEvaluationRLM-r17；结构体；OPTIONAL。 */
    bool has_goodServingCellEvaluationBFD_r17; /**< goodServingCellEvaluationBFD-r17 是否存在。 */
    GoodServingCellEvaluation_r17 goodServingCellEvaluationBFD_r17; /**< ASN.1 goodServingCellEvaluationBFD-r17；结构体；OPTIONAL。 */
    bool has_deactivatedSCG_Config_r17; /**< deactivatedSCG-Config-r17 是否存在。 */
    SetupRelease_DeactivatedSCG_Config_r17 deactivatedSCG_Config_r17; /**< ASN.1 deactivatedSCG-Config-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ReconfigurationWithSync_ExtGroup1
 * @note ASN.1：ReconfigurationWithSync_ExtGroup1；源文件第 4925 行。
 */
struct ReconfigurationWithSync_ExtGroup1 {
    bool has_smtc; /**< smtc 是否存在。 */
    SSB_MTC smtc; /**< ASN.1 smtc；结构体；OPTIONAL。 */
};


/**
 * @brief DAPS_UplinkPowerConfig_r16
 * @note ASN.1：DAPS-UplinkPowerConfig-r16；源文件第 4940 行。
 * @note DAPS-UplinkPowerConfig-r16 ::= SEQUENCE { p-DAPS-Source-r16, p-DAPS-Target-r16, uplinkPowerSharingDAPS-Mode-...
 */
struct DAPS_UplinkPowerConfig_r16 {
    P_Max p_DAPS_Source_r16; /**< ASN.1 p-DAPS-Source-r16；INTEGER (-30..33)，位宽 6 bit。 */
    P_Max p_DAPS_Target_r16; /**< ASN.1 p-DAPS-Target-r16；INTEGER (-30..33)，位宽 6 bit。 */
    DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16 uplinkPowerSharingDAPS_Mode_r16; /**< ASN.1 uplinkPowerSharingDAPS-Mode-r16；枚举。 */
};


/**
 * @brief ReconfigurationWithSync_ExtGroup2
 * @note ASN.1：ReconfigurationWithSync_ExtGroup2；源文件第 4928 行。
 */
struct ReconfigurationWithSync_ExtGroup2 {
    bool has_daps_UplinkPowerConfig_r16; /**< daps-UplinkPowerConfig-r16 是否存在。 */
    DAPS_UplinkPowerConfig_r16 daps_UplinkPowerConfig_r16; /**< ASN.1 daps-UplinkPowerConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SL_PathSwitchConfig_r17
 * @note ASN.1：SL-PathSwitchConfig-r17；源文件第 4980 行。
 * @note SL-PathSwitchConfig-r17 ::= SEQUENCE { targetRelayUE-Identity-r17, t420-r17 }
 */
struct SL_PathSwitchConfig_r17 {
    SL_SourceIdentity_r17 targetRelayUE_Identity_r17; /**< ASN.1 targetRelayUE-Identity-r17；SIZE (24)，定长。 */
    SL_PathSwitchConfig_r17_T420_r17 t420_r17; /**< ASN.1 t420-r17；枚举。 */
};


/**
 * @brief ReconfigurationWithSync_ExtGroup3
 * @note ASN.1：ReconfigurationWithSync_ExtGroup3；源文件第 4931 行。
 */
struct ReconfigurationWithSync_ExtGroup3 {
    bool has_sl_PathSwitchConfig_r17; /**< sl-PathSwitchConfig-r17 是否存在。 */
    SL_PathSwitchConfig_r17 sl_PathSwitchConfig_r17; /**< ASN.1 sl-PathSwitchConfig-r17；结构体；OPTIONAL。 */
};


/**
 * @brief RACH_LessHO_r18_BeamIndication_r18
 * @note ASN.1：beamIndication-r18；源文件第 5021 行。
 * @note CHOICE { tci-StateID-r18, ssb-Index-r18 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum RACH_LessHO_r18_BeamIndication_r18_Tag {
    RACH_LessHO_r18_BeamIndication_r18_Tag_tci_StateID_r18 = 0, /**< ASN.1 tci-StateID-r18 */
    RACH_LessHO_r18_BeamIndication_r18_Tag_ssb_Index_r18 = 1, /**< ASN.1 ssb-Index-r18 */
} RACH_LessHO_r18_BeamIndication_r18_Tag;

struct RACH_LessHO_r18_BeamIndication_r18 {
    RACH_LessHO_r18_BeamIndication_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        TCI_StateId tci_StateID_r18; /**< ASN.1 tci-StateID-r18 */
        SSB_Index ssb_Index_r18; /**< ASN.1 ssb-Index-r18 */
    } u;
};


/**
 * @brief RACH_LessHO_r18
 * @note ASN.1：RACH-LessHO-r18；源文件第 5019 行。
 * @note RACH-LessHO-r18 ::= SEQUENCE { targetNTA-r18, beamIndication-r18 }
 */
struct RACH_LessHO_r18 {
    bool has_targetNTA_r18; /**< targetNTA-r18 是否存在。 */
    RACH_LessHO_r18_TargetNTA_r18 targetNTA_r18; /**< ASN.1 targetNTA-r18；枚举；OPTIONAL。 */
    bool has_beamIndication_r18; /**< beamIndication-r18 是否存在。 */
    RACH_LessHO_r18_BeamIndication_r18 beamIndication_r18; /**< ASN.1 beamIndication-r18；结构体；OPTIONAL。 */
};


/**
 * @brief ReconfigurationWithSync_ExtGroup4
 * @note ASN.1：ReconfigurationWithSync_ExtGroup4；源文件第 4934 行。
 */
struct ReconfigurationWithSync_ExtGroup4 {
    bool has_rach_LessHO_r18; /**< rach-LessHO-r18 是否存在。 */
    RACH_LessHO_r18 rach_LessHO_r18; /**< ASN.1 rach-LessHO-r18；结构体；OPTIONAL。 */
    bool has_sl_IndirectPathMaintain_r18; /**< sl-IndirectPathMaintain-r18 是否存在。 */
    ReconfigurationWithSync_ExtGroup4_Sl_IndirectPathMaintain_r18 sl_IndirectPathMaintain_r18; /**< ASN.1 sl-IndirectPathMaintain-r18；枚举；OPTIONAL。 */
};


/**
 * @brief DownlinkConfigCommon_ExtGroup1
 * @note ASN.1：DownlinkConfigCommon_ExtGroup1；源文件第 6526 行。
 */
struct DownlinkConfigCommon_ExtGroup1 {
    bool has_initialDownlinkBWP_RedCap_r17; /**< initialDownlinkBWP-RedCap-r17 是否存在。 */
    BWP_DownlinkCommon initialDownlinkBWP_RedCap_r17; /**< ASN.1 initialDownlinkBWP-RedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief FrequencyInfoDL_ExtGroup1
 * @note ASN.1：FrequencyInfoDL_ExtGroup1；源文件第 6920 行。
 */
struct FrequencyInfoDL_ExtGroup1 {
    bool has_referenceCell_r18; /**< referenceCell-r18 是否存在。 */
    ServCellIndex referenceCell_r18; /**< ASN.1 referenceCell-r18；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief MultiFrequencyBandListNR
 * @note ASN.1：MultiFrequencyBandListNR；源文件第 8375 行。
 * @note MultiFrequencyBandListNR ::= SEQUENCE OF (size 1..8) OF FreqBandIndicatorNR
 */
struct MultiFrequencyBandListNR {
    FreqBandIndicatorNR* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief FrequencyInfoDL
 * @note ASN.1：FrequencyInfoDL；源文件第 6914 行。
 * @note FrequencyInfoDL ::= SEQUENCE { absoluteFrequencySSB, frequencyBandList, absoluteFrequencyPointA, ...
 */
struct FrequencyInfoDL {
    bool has_absoluteFrequencySSB; /**< absoluteFrequencySSB 是否存在。 */
    ARFCN_ValueNR absoluteFrequencySSB; /**< ASN.1 absoluteFrequencySSB；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    MultiFrequencyBandListNR frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF FreqBandIndicatorNR，SIZE (1..8)。 */
    ARFCN_ValueNR absoluteFrequencyPointA; /**< ASN.1 absoluteFrequencyPointA；INTEGER (0..3279165)，位宽 22 bit。 */
    SCS_SpecificCarrier* scs_SpecificCarrierList_items; /**< ASN.1 scs-SpecificCarrierList；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t scs_SpecificCarrierList_count; /**< scs-SpecificCarrierList 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FrequencyInfoDL_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief DownlinkConfigCommon
 * @note ASN.1：DownlinkConfigCommon；源文件第 6522 行。
 * @note DownlinkConfigCommon ::= SEQUENCE { frequencyInfoDL, initialDownlinkBWP, initialDownlinkBWP-RedCap-r17 }
 */
struct DownlinkConfigCommon {
    bool has_frequencyInfoDL; /**< frequencyInfoDL 是否存在。 */
    FrequencyInfoDL frequencyInfoDL; /**< ASN.1 frequencyInfoDL；结构体；OPTIONAL。 */
    bool has_initialDownlinkBWP; /**< initialDownlinkBWP 是否存在。 */
    BWP_DownlinkCommon initialDownlinkBWP; /**< ASN.1 initialDownlinkBWP；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    DownlinkConfigCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16
 * @note ASN.1：channelAccessMode-r16；源文件第 12673 行。
 * @note CHOICE { dynamic, semiStatic }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag {
    ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic = 0, /**< ASN.1 dynamic */
    ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic = 1, /**< ASN.1 semiStatic */
} ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag;

struct ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16 {
    ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null dynamic; /**< ASN.1 dynamic */
        SemiStaticChannelAccessConfig_r16 semiStatic; /**< ASN.1 semiStatic */
    } u;
};


/**
 * @brief ServingCellConfigCommon_ExtGroup1
 * @note ASN.1：ServingCellConfigCommon_ExtGroup1；源文件第 12672 行。
 */
struct ServingCellConfigCommon_ExtGroup1 {
    bool has_channelAccessMode_r16; /**< channelAccessMode-r16 是否存在。 */
    ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16 channelAccessMode_r16; /**< ASN.1 channelAccessMode-r16；结构体；OPTIONAL。 */
    bool has_discoveryBurstWindowLength_r16; /**< discoveryBurstWindowLength-r16 是否存在。 */
    ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16 discoveryBurstWindowLength_r16; /**< ASN.1 discoveryBurstWindowLength-r16；枚举；OPTIONAL。 */
    bool has_ssb_PositionQCL_r16; /**< ssb-PositionQCL-r16 是否存在。 */
    SSB_PositionQCL_Relation_r16 ssb_PositionQCL_r16; /**< ASN.1 ssb-PositionQCL-r16；枚举；OPTIONAL。 */
    bool has_highSpeedConfig_r16; /**< highSpeedConfig-r16 是否存在。 */
    HighSpeedConfig_r16 highSpeedConfig_r16; /**< ASN.1 highSpeedConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief HighSpeedConfig_v1700
 * @note ASN.1：HighSpeedConfig-v1700；源文件第 6994 行。
 * @note HighSpeedConfig-v1700 ::= SEQUENCE { highSpeedMeasCA-Scell-r17, highSpeedMeasInterFreq-r17, highSpeedDe...
 */
struct HighSpeedConfig_v1700 {
    bool has_highSpeedMeasCA_Scell_r17; /**< highSpeedMeasCA-Scell-r17 是否存在。 */
    HighSpeedConfig_v1700_HighSpeedMeasCA_Scell_r17 highSpeedMeasCA_Scell_r17; /**< ASN.1 highSpeedMeasCA-Scell-r17；枚举；OPTIONAL。 */
    bool has_highSpeedMeasInterFreq_r17; /**< highSpeedMeasInterFreq-r17 是否存在。 */
    HighSpeedConfig_v1700_HighSpeedMeasInterFreq_r17 highSpeedMeasInterFreq_r17; /**< ASN.1 highSpeedMeasInterFreq-r17；枚举；OPTIONAL。 */
    bool has_highSpeedDemodCA_Scell_r17; /**< highSpeedDemodCA-Scell-r17 是否存在。 */
    HighSpeedConfig_v1700_HighSpeedDemodCA_Scell_r17 highSpeedDemodCA_Scell_r17; /**< ASN.1 highSpeedDemodCA-Scell-r17；枚举；OPTIONAL。 */
};


/**
 * @brief UplinkConfigCommon_v1700
 * @note ASN.1：UplinkConfigCommon-v1700；源文件第 13954 行。
 * @note UplinkConfigCommon-v1700 ::= SEQUENCE { initialUplinkBWP-RedCap-r17 }
 */
struct UplinkConfigCommon_v1700 {
    bool has_initialUplinkBWP_RedCap_r17; /**< initialUplinkBWP-RedCap-r17 是否存在。 */
    BWP_UplinkCommon initialUplinkBWP_RedCap_r17; /**< ASN.1 initialUplinkBWP-RedCap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommon_ExtGroup2
 * @note ASN.1：ServingCellConfigCommon_ExtGroup2；源文件第 12681 行。
 */
struct ServingCellConfigCommon_ExtGroup2 {
    bool has_highSpeedConfig_v1700; /**< highSpeedConfig-v1700 是否存在。 */
    HighSpeedConfig_v1700 highSpeedConfig_v1700; /**< ASN.1 highSpeedConfig-v1700；结构体；OPTIONAL。 */
    bool has_channelAccessMode2_r17; /**< channelAccessMode2-r17 是否存在。 */
    ServingCellConfigCommon_ExtGroup2_ChannelAccessMode2_r17 channelAccessMode2_r17; /**< ASN.1 channelAccessMode2-r17；枚举；OPTIONAL。 */
    bool has_discoveryBurstWindowLength_r17; /**< discoveryBurstWindowLength-r17 是否存在。 */
    ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17 discoveryBurstWindowLength_r17; /**< ASN.1 discoveryBurstWindowLength-r17；枚举；OPTIONAL。 */
    bool has_ssb_PositionQCL_r17; /**< ssb-PositionQCL-r17 是否存在。 */
    SSB_PositionQCL_Relation_r17 ssb_PositionQCL_r17; /**< ASN.1 ssb-PositionQCL-r17；枚举；OPTIONAL。 */
    bool has_highSpeedConfigFR2_r17; /**< highSpeedConfigFR2-r17 是否存在。 */
    HighSpeedConfigFR2_r17 highSpeedConfigFR2_r17; /**< ASN.1 highSpeedConfigFR2-r17；结构体；OPTIONAL。 */
    bool has_uplinkConfigCommon_v1700; /**< uplinkConfigCommon-v1700 是否存在。 */
    UplinkConfigCommon_v1700 uplinkConfigCommon_v1700; /**< ASN.1 uplinkConfigCommon-v1700；结构体；OPTIONAL。 */
    bool has_ntn_Config_r17; /**< ntn-Config-r17 是否存在。 */
    NTN_Config_r17 ntn_Config_r17; /**< ASN.1 ntn-Config-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17
 * @note ASN.1：featurePriorities-r17；源文件第 12691 行。
 * @note SEQUENCE { redCapPriority-r17, slicingPriority-r17, msg3-Repetitions-Priority...
 */
struct ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17 {
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
 * @brief ServingCellConfigCommon_ExtGroup3
 * @note ASN.1：ServingCellConfigCommon_ExtGroup3；源文件第 12690 行。
 */
struct ServingCellConfigCommon_ExtGroup3 {
    bool has_featurePriorities_r17; /**< featurePriorities-r17 是否存在。 */
    ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17 featurePriorities_r17; /**< ASN.1 featurePriorities-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommon_ExtGroup4
 * @note ASN.1：ServingCellConfigCommon_ExtGroup4；源文件第 12698 行。
 */
struct ServingCellConfigCommon_ExtGroup4 {
    bool has_ra_ChannelAccess_r17; /**< ra-ChannelAccess-r17 是否存在。 */
    ServingCellConfigCommon_ExtGroup4_Ra_ChannelAccess_r17 ra_ChannelAccess_r17; /**< ASN.1 ra-ChannelAccess-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800
 * @note ASN.1：featurePriorities-v1800；源文件第 12702 行。
 * @note SEQUENCE { msg1-Repetitions-Priority-r18, eRedCapPriority-r18 }
 */
struct ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800 {
    bool has_msg1_Repetitions_Priority_r18; /**< msg1-Repetitions-Priority-r18 是否存在。 */
    FeaturePriority_r17 msg1_Repetitions_Priority_r18; /**< ASN.1 msg1-Repetitions-Priority-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_eRedCapPriority_r18; /**< eRedCapPriority-r18 是否存在。 */
    FeaturePriority_r17 eRedCapPriority_r18; /**< ASN.1 eRedCapPriority-r18；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief ServingCellConfigCommon_ExtGroup5
 * @note ASN.1：ServingCellConfigCommon_ExtGroup5；源文件第 12701 行。
 */
struct ServingCellConfigCommon_ExtGroup5 {
    bool has_featurePriorities_v1800; /**< featurePriorities-v1800 是否存在。 */
    ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800 featurePriorities_v1800; /**< ASN.1 featurePriorities-v1800；结构体；OPTIONAL。 */
    bool has_atg_Config_r18; /**< atg-Config-r18 是否存在。 */
    ATG_Config_r18 atg_Config_r18; /**< ASN.1 atg-Config-r18；结构体；OPTIONAL。 */
};


/**
 * @brief FrequencyInfoUL_ExtGroup1
 * @note ASN.1：FrequencyInfoUL_ExtGroup1；源文件第 6953 行。
 */
struct FrequencyInfoUL_ExtGroup1 {
    bool has_additionalSpectrumEmission_v1760; /**< additionalSpectrumEmission-v1760 是否存在。 */
    AdditionalSpectrumEmission_v1760 additionalSpectrumEmission_v1760; /**< ASN.1 additionalSpectrumEmission-v1760；INTEGER (8..39)，位宽 5 bit；OPTIONAL。 */
};


/**
 * @brief FrequencyInfoUL_ExtGroup2
 * @note ASN.1：FrequencyInfoUL_ExtGroup2；源文件第 6956 行。
 */
struct FrequencyInfoUL_ExtGroup2 {
    bool has_additionalSpectrumEmissionAerial_r18; /**< additionalSpectrumEmissionAerial-r18 是否存在。 */
    AdditionalSpectrumEmission_r18 additionalSpectrumEmissionAerial_r18; /**< ASN.1 additionalSpectrumEmissionAerial-r18；INTEGER (0..39)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief FrequencyInfoUL
 * @note ASN.1：FrequencyInfoUL；源文件第 6945 行。
 * @note FrequencyInfoUL ::= SEQUENCE { frequencyBandList, absoluteFrequencyPointA, scs-SpecificCarrierLis...
 */
struct FrequencyInfoUL {
    bool has_frequencyBandList; /**< frequencyBandList 是否存在。 */
    MultiFrequencyBandListNR frequencyBandList; /**< ASN.1 frequencyBandList；SEQUENCE OF FreqBandIndicatorNR，SIZE (1..8)；OPTIONAL。 */
    bool has_absoluteFrequencyPointA; /**< absoluteFrequencyPointA 是否存在。 */
    ARFCN_ValueNR absoluteFrequencyPointA; /**< ASN.1 absoluteFrequencyPointA；INTEGER (0..3279165)，位宽 22 bit；OPTIONAL。 */
    SCS_SpecificCarrier* scs_SpecificCarrierList_items; /**< ASN.1 scs-SpecificCarrierList；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t scs_SpecificCarrierList_count; /**< scs-SpecificCarrierList 元素个数。 */
    bool has_additionalSpectrumEmission; /**< additionalSpectrumEmission 是否存在。 */
    AdditionalSpectrumEmission additionalSpectrumEmission; /**< ASN.1 additionalSpectrumEmission；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_p_Max; /**< p-Max 是否存在。 */
    P_Max p_Max; /**< ASN.1 p-Max；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_frequencyShift7p5khz; /**< frequencyShift7p5khz 是否存在。 */
    FrequencyInfoUL_FrequencyShift7p5khz frequencyShift7p5khz; /**< ASN.1 frequencyShift7p5khz；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    FrequencyInfoUL_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    FrequencyInfoUL_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief UplinkConfigCommon
 * @note ASN.1：UplinkConfigCommon；源文件第 13948 行。
 * @note UplinkConfigCommon ::= SEQUENCE { frequencyInfoUL, initialUplinkBWP, dummy }
 */
struct UplinkConfigCommon {
    bool has_frequencyInfoUL; /**< frequencyInfoUL 是否存在。 */
    FrequencyInfoUL frequencyInfoUL; /**< ASN.1 frequencyInfoUL；结构体；OPTIONAL。 */
    bool has_initialUplinkBWP; /**< initialUplinkBWP 是否存在。 */
    BWP_UplinkCommon initialUplinkBWP; /**< ASN.1 initialUplinkBWP；结构体；OPTIONAL。 */
    TimeAlignmentTimer dummy; /**< ASN.1 dummy；枚举。 */
};


/**
 * @brief SetupRelease_RateMatchPatternLTE_CRS
 * @note ASN.1：SetupRelease<RateMatchPatternLTE-CRS>；源文件第 12437 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RateMatchPatternLTE_CRS_Tag {
    SetupRelease_RateMatchPatternLTE_CRS_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RateMatchPatternLTE_CRS_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RateMatchPatternLTE_CRS_Tag;

struct SetupRelease_RateMatchPatternLTE_CRS {
    SetupRelease_RateMatchPatternLTE_CRS_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RateMatchPatternLTE_CRS setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfigCommon_Ssb_PositionsInBurst
 * @note ASN.1：ssb-PositionsInBurst；源文件第 12658 行。
 * @note CHOICE { shortBitmap, mediumBitmap, longBitmap }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ServingCellConfigCommon_Ssb_PositionsInBurst_Tag {
    ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_shortBitmap = 0, /**< ASN.1 shortBitmap */
    ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_mediumBitmap = 1, /**< ASN.1 mediumBitmap */
    ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_longBitmap = 2, /**< ASN.1 longBitmap */
} ServingCellConfigCommon_Ssb_PositionsInBurst_Tag;

struct ServingCellConfigCommon_Ssb_PositionsInBurst {
    ServingCellConfigCommon_Ssb_PositionsInBurst_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        BitString shortBitmap; /**< ASN.1 shortBitmap */
        BitString mediumBitmap; /**< ASN.1 mediumBitmap */
        BitString longBitmap; /**< ASN.1 longBitmap */
    } u;
};


/**
 * @brief ServingCellConfigCommon
 * @note ASN.1：ServingCellConfigCommon；源文件第 12652 行。
 * @note ServingCellConfigCommon ::= SEQUENCE { physCellId, downlinkConfigCommon, uplinkConfigCommon, supplementar...
 */
struct ServingCellConfigCommon {
    bool has_physCellId; /**< physCellId 是否存在。 */
    PhysCellId physCellId; /**< ASN.1 physCellId；INTEGER (0..1007)，位宽 10 bit；OPTIONAL。 */
    bool has_downlinkConfigCommon; /**< downlinkConfigCommon 是否存在。 */
    DownlinkConfigCommon downlinkConfigCommon; /**< ASN.1 downlinkConfigCommon；结构体；OPTIONAL。 */
    bool has_uplinkConfigCommon; /**< uplinkConfigCommon 是否存在。 */
    UplinkConfigCommon uplinkConfigCommon; /**< ASN.1 uplinkConfigCommon；结构体；OPTIONAL。 */
    bool has_supplementaryUplinkConfig; /**< supplementaryUplinkConfig 是否存在。 */
    UplinkConfigCommon supplementaryUplinkConfig; /**< ASN.1 supplementaryUplinkConfig；结构体；OPTIONAL。 */
    bool has_n_TimingAdvanceOffset; /**< n-TimingAdvanceOffset 是否存在。 */
    ServingCellConfigCommon_N_TimingAdvanceOffset n_TimingAdvanceOffset; /**< ASN.1 n-TimingAdvanceOffset；枚举；OPTIONAL。 */
    bool has_ssb_PositionsInBurst; /**< ssb-PositionsInBurst 是否存在。 */
    ServingCellConfigCommon_Ssb_PositionsInBurst ssb_PositionsInBurst; /**< ASN.1 ssb-PositionsInBurst；结构体；OPTIONAL。 */
    bool has_ssb_periodicityServingCell; /**< ssb-periodicityServingCell 是否存在。 */
    ServingCellConfigCommon_Ssb_periodicityServingCell ssb_periodicityServingCell; /**< ASN.1 ssb-periodicityServingCell；枚举；OPTIONAL。 */
    ServingCellConfigCommon_Dmrs_TypeA_Position dmrs_TypeA_Position; /**< ASN.1 dmrs-TypeA-Position；枚举。 */
    bool has_lte_CRS_ToMatchAround; /**< lte-CRS-ToMatchAround 是否存在。 */
    SetupRelease_RateMatchPatternLTE_CRS lte_CRS_ToMatchAround; /**< ASN.1 lte-CRS-ToMatchAround；结构体；OPTIONAL。 */
    bool has_rateMatchPatternToAddModList; /**< rateMatchPatternToAddModList 是否存在。 */
    RateMatchPattern* rateMatchPatternToAddModList_items; /**< ASN.1 rateMatchPatternToAddModList；SEQUENCE OF RateMatchPattern，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToAddModList_count; /**< rateMatchPatternToAddModList 元素个数。 */
    bool has_rateMatchPatternToReleaseList; /**< rateMatchPatternToReleaseList 是否存在。 */
    RateMatchPatternId* rateMatchPatternToReleaseList_items; /**< ASN.1 rateMatchPatternToReleaseList；SEQUENCE OF RateMatchPatternId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToReleaseList_count; /**< rateMatchPatternToReleaseList 元素个数。 */
    bool has_ssbSubcarrierSpacing; /**< ssbSubcarrierSpacing 是否存在。 */
    SubcarrierSpacing ssbSubcarrierSpacing; /**< ASN.1 ssbSubcarrierSpacing；枚举；OPTIONAL。 */
    bool has_tdd_UL_DL_ConfigurationCommon; /**< tdd-UL-DL-ConfigurationCommon 是否存在。 */
    TDD_UL_DL_ConfigCommon tdd_UL_DL_ConfigurationCommon; /**< ASN.1 tdd-UL-DL-ConfigurationCommon；结构体；OPTIONAL。 */
    int64_t ss_PBCH_BlockPower; /**< ASN.1 ss-PBCH-BlockPower；INTEGER (-60..50)，位宽 7 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ServingCellConfigCommon_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ServingCellConfigCommon_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ServingCellConfigCommon_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    ServingCellConfigCommon_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    ServingCellConfigCommon_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CFRA_TwoStep_r16_OccasionsTwoStepRA_r16
 * @note ASN.1：occasionsTwoStepRA-r16；源文件第 10852 行。
 * @note SEQUENCE { rach-ConfigGenericTwoStepRA-r16, ssb-PerRACH-OccasionTwoStepRA-r16 }
 */
struct CFRA_TwoStep_r16_OccasionsTwoStepRA_r16 {
    RACH_ConfigGenericTwoStepRA_r16 rach_ConfigGenericTwoStepRA_r16; /**< ASN.1 rach-ConfigGenericTwoStepRA-r16；结构体。 */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16 ssb_PerRACH_OccasionTwoStepRA_r16; /**< ASN.1 ssb-PerRACH-OccasionTwoStepRA-r16；枚举。 */
};


/**
 * @brief CFRA_TwoStep_r16_ResourcesTwoStep_r16
 * @note ASN.1：resourcesTwoStep-r16；源文件第 10859 行。
 * @note SEQUENCE { ssb-ResourceList, ra-ssb-OccasionMaskIndex }
 */
struct CFRA_TwoStep_r16_ResourcesTwoStep_r16 {
    CFRA_SSB_Resource* ssb_ResourceList_items; /**< ASN.1 ssb-ResourceList；SEQUENCE OF CFRA_SSB_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ssb_ResourceList_count; /**< ssb-ResourceList 元素个数。 */
    int64_t ra_ssb_OccasionMaskIndex; /**< ASN.1 ra-ssb-OccasionMaskIndex；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief CFRA_TwoStep_r16
 * @note ASN.1：CFRA-TwoStep-r16；源文件第 10851 行。
 * @note CFRA-TwoStep-r16 ::= SEQUENCE { occasionsTwoStepRA-r16, msgA-CFRA-PUSCH-r16, msgA-TransMax-r16, re...
 */
struct CFRA_TwoStep_r16 {
    bool has_occasionsTwoStepRA_r16; /**< occasionsTwoStepRA-r16 是否存在。 */
    CFRA_TwoStep_r16_OccasionsTwoStepRA_r16 occasionsTwoStepRA_r16; /**< ASN.1 occasionsTwoStepRA-r16；结构体；OPTIONAL。 */
    MsgA_PUSCH_Resource_r16 msgA_CFRA_PUSCH_r16; /**< ASN.1 msgA-CFRA-PUSCH-r16；结构体。 */
    bool has_msgA_TransMax_r16; /**< msgA-TransMax-r16 是否存在。 */
    CFRA_TwoStep_r16_MsgA_TransMax_r16 msgA_TransMax_r16; /**< ASN.1 msgA-TransMax-r16；枚举；OPTIONAL。 */
    CFRA_TwoStep_r16_ResourcesTwoStep_r16 resourcesTwoStep_r16; /**< ASN.1 resourcesTwoStep-r16；结构体。 */
};


/**
 * @brief RACH_ConfigDedicated_ExtGroup1
 * @note ASN.1：RACH_ConfigDedicated_ExtGroup1；源文件第 10820 行。
 */
struct RACH_ConfigDedicated_ExtGroup1 {
    bool has_ra_PrioritizationTwoStep_r16; /**< ra-PrioritizationTwoStep-r16 是否存在。 */
    RA_Prioritization ra_PrioritizationTwoStep_r16; /**< ASN.1 ra-PrioritizationTwoStep-r16；结构体；OPTIONAL。 */
    bool has_cfra_TwoStep_r16; /**< cfra-TwoStep-r16 是否存在。 */
    CFRA_TwoStep_r16 cfra_TwoStep_r16; /**< ASN.1 cfra-TwoStep-r16；结构体；OPTIONAL。 */
};


/**
 * @brief CFRA_ExtGroup1
 * @note ASN.1：CFRA_ExtGroup1；源文件第 10843 行。
 */
struct CFRA_ExtGroup1 {
    bool has_totalNumberOfRA_Preambles; /**< totalNumberOfRA-Preambles 是否存在。 */
    int64_t totalNumberOfRA_Preambles; /**< ASN.1 totalNumberOfRA-Preambles；INTEGER (1..63)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief CFRA_ExtGroup2
 * @note ASN.1：CFRA_ExtGroup2；源文件第 10846 行。
 */
struct CFRA_ExtGroup2 {
    bool has_msg1_RepetitionNum_r18; /**< msg1-RepetitionNum-r18 是否存在。 */
    CFRA_ExtGroup2_Msg1_RepetitionNum_r18 msg1_RepetitionNum_r18; /**< ASN.1 msg1-RepetitionNum-r18；枚举；OPTIONAL。 */
};


/**
 * @brief CFRA_Occasions
 * @note ASN.1：occasions；源文件第 10827 行。
 * @note SEQUENCE { rach-ConfigGeneric, ssb-perRACH-Occasion }
 */
struct CFRA_Occasions {
    RACH_ConfigGeneric rach_ConfigGeneric; /**< ASN.1 rach-ConfigGeneric；结构体。 */
    bool has_ssb_perRACH_Occasion; /**< ssb-perRACH-Occasion 是否存在。 */
    CFRA_Occasions_Ssb_perRACH_Occasion ssb_perRACH_Occasion; /**< ASN.1 ssb-perRACH-Occasion；枚举；OPTIONAL。 */
};


/**
 * @brief CFRA_Resources_Ssb
 * @note ASN.1：resources/ssb；源文件第 10833 行。
 * @note SEQUENCE { ssb-ResourceList, ra-ssb-OccasionMaskIndex }
 */
struct CFRA_Resources_Ssb {
    CFRA_SSB_Resource* ssb_ResourceList_items; /**< ASN.1 ssb-ResourceList；SEQUENCE OF CFRA_SSB_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t ssb_ResourceList_count; /**< ssb-ResourceList 元素个数。 */
    int64_t ra_ssb_OccasionMaskIndex; /**< ASN.1 ra-ssb-OccasionMaskIndex；INTEGER (0..15)，位宽 4 bit。 */
};


/**
 * @brief CFRA_Resources_Csirs
 * @note ASN.1：resources/csirs；源文件第 10837 行。
 * @note SEQUENCE { csirs-ResourceList, rsrp-ThresholdCSI-RS }
 */
struct CFRA_Resources_Csirs {
    CFRA_CSIRS_Resource* csirs_ResourceList_items; /**< ASN.1 csirs-ResourceList；SEQUENCE OF CFRA_CSIRS_Resource，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t csirs_ResourceList_count; /**< csirs-ResourceList 元素个数。 */
    RSRP_Range rsrp_ThresholdCSI_RS; /**< ASN.1 rsrp-ThresholdCSI-RS；INTEGER (0..127)，位宽 7 bit。 */
};


/**
 * @brief CFRA_Resources
 * @note ASN.1：resources；源文件第 10832 行。
 * @note CHOICE { ssb, csirs }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CFRA_Resources_Tag {
    CFRA_Resources_Tag_ssb = 0, /**< ASN.1 ssb */
    CFRA_Resources_Tag_csirs = 1, /**< ASN.1 csirs */
} CFRA_Resources_Tag;

struct CFRA_Resources {
    CFRA_Resources_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CFRA_Resources_Ssb ssb; /**< ASN.1 ssb */
        CFRA_Resources_Csirs csirs; /**< ASN.1 csirs */
    } u;
};


/**
 * @brief CFRA
 * @note ASN.1：CFRA；源文件第 10826 行。
 * @note CFRA ::= SEQUENCE { occasions, resources, totalNumberOfRA-Preambles, msg1-RepetitionNu...
 */
struct CFRA {
    bool has_occasions; /**< occasions 是否存在。 */
    CFRA_Occasions occasions; /**< ASN.1 occasions；结构体；OPTIONAL。 */
    CFRA_Resources resources; /**< ASN.1 resources；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CFRA_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CFRA_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RACH_ConfigDedicated
 * @note ASN.1：RACH-ConfigDedicated；源文件第 10816 行。
 * @note RACH-ConfigDedicated ::= SEQUENCE { cfra, ra-Prioritization, ra-PrioritizationTwoStep-r16, cfra-TwoSte...
 */
struct RACH_ConfigDedicated {
    bool has_cfra; /**< cfra 是否存在。 */
    CFRA cfra; /**< ASN.1 cfra；结构体；OPTIONAL。 */
    bool has_ra_Prioritization; /**< ra-Prioritization 是否存在。 */
    RA_Prioritization ra_Prioritization; /**< ASN.1 ra-Prioritization；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RACH_ConfigDedicated_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ReconfigurationWithSync_Rach_ConfigDedicated
 * @note ASN.1：rach-ConfigDedicated；源文件第 4920 行。
 * @note CHOICE { uplink, supplementaryUplink }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ReconfigurationWithSync_Rach_ConfigDedicated_Tag {
    ReconfigurationWithSync_Rach_ConfigDedicated_Tag_uplink = 0, /**< ASN.1 uplink */
    ReconfigurationWithSync_Rach_ConfigDedicated_Tag_supplementaryUplink = 1, /**< ASN.1 supplementaryUplink */
} ReconfigurationWithSync_Rach_ConfigDedicated_Tag;

struct ReconfigurationWithSync_Rach_ConfigDedicated {
    ReconfigurationWithSync_Rach_ConfigDedicated_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        RACH_ConfigDedicated uplink; /**< ASN.1 uplink */
        RACH_ConfigDedicated supplementaryUplink; /**< ASN.1 supplementaryUplink */
    } u;
};


/**
 * @brief ReconfigurationWithSync
 * @note ASN.1：ReconfigurationWithSync；源文件第 4916 行。
 * @note ReconfigurationWithSync ::= SEQUENCE { spCellConfigCommon, newUE-Identity, t304, rach-ConfigDedicated, sm...
 */
struct ReconfigurationWithSync {
    bool has_spCellConfigCommon; /**< spCellConfigCommon 是否存在。 */
    ServingCellConfigCommon spCellConfigCommon; /**< ASN.1 spCellConfigCommon；结构体；OPTIONAL。 */
    RNTI_Value newUE_Identity; /**< ASN.1 newUE-Identity；INTEGER (0..65535)，位宽 16 bit。 */
    ReconfigurationWithSync_T304 t304; /**< ASN.1 t304；枚举。 */
    bool has_rach_ConfigDedicated; /**< rach-ConfigDedicated 是否存在。 */
    ReconfigurationWithSync_Rach_ConfigDedicated rach_ConfigDedicated; /**< ASN.1 rach-ConfigDedicated；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ReconfigurationWithSync_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ReconfigurationWithSync_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ReconfigurationWithSync_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    ReconfigurationWithSync_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CrossCarrierSchedulingConfig_ExtGroup2
 * @note ASN.1：CrossCarrierSchedulingConfig_ExtGroup2；源文件第 5792 行。
 */
struct CrossCarrierSchedulingConfig_ExtGroup2 {
    bool has_ccs_BlindDetectionSplit_r17; /**< ccs-BlindDetectionSplit-r17 是否存在。 */
    CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17 ccs_BlindDetectionSplit_r17; /**< ASN.1 ccs-BlindDetectionSplit-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16
 * @note ASN.1：carrierIndicatorSize-r16；源文件第 5786 行。
 * @note SEQUENCE { carrierIndicatorSizeDCI-1-2-r16, carrierIndicatorSizeDCI-0-2-r16 }
 */
struct CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16 {
    int64_t carrierIndicatorSizeDCI_1_2_r16; /**< ASN.1 carrierIndicatorSizeDCI-1-2-r16；INTEGER (0..3)，位宽 2 bit。 */
    int64_t carrierIndicatorSizeDCI_0_2_r16; /**< ASN.1 carrierIndicatorSizeDCI-0-2-r16；INTEGER (0..3)，位宽 2 bit。 */
};


/**
 * @brief CrossCarrierSchedulingConfig_ExtGroup1
 * @note ASN.1：CrossCarrierSchedulingConfig_ExtGroup1；源文件第 5785 行。
 */
struct CrossCarrierSchedulingConfig_ExtGroup1 {
    bool has_carrierIndicatorSize_r16; /**< carrierIndicatorSize-r16 是否存在。 */
    CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16 carrierIndicatorSize_r16; /**< ASN.1 carrierIndicatorSize-r16；结构体；OPTIONAL。 */
    bool has_enableDefaultBeamForCCS_r16; /**< enableDefaultBeamForCCS-r16 是否存在。 */
    CrossCarrierSchedulingConfig_ExtGroup1_EnableDefaultBeamForCCS_r16 enableDefaultBeamForCCS_r16; /**< ASN.1 enableDefaultBeamForCCS-r16；枚举；OPTIONAL。 */
};


/**
 * @brief CrossCarrierSchedulingConfig_SchedulingCellInfo_Own
 * @note ASN.1：schedulingCellInfo/own；源文件第 5776 行。
 * @note SEQUENCE { cif-Presence }
 */
struct CrossCarrierSchedulingConfig_SchedulingCellInfo_Own {
    bool cif_Presence; /**< ASN.1 cif-Presence；BOOLEAN，1 bit。 */
};


/**
 * @brief CrossCarrierSchedulingConfig_SchedulingCellInfo_Other
 * @note ASN.1：schedulingCellInfo/other；源文件第 5779 行。
 * @note SEQUENCE { schedulingCellId, cif-InSchedulingCell }
 */
struct CrossCarrierSchedulingConfig_SchedulingCellInfo_Other {
    ServCellIndex schedulingCellId; /**< ASN.1 schedulingCellId；INTEGER (0..31)，位宽 5 bit。 */
    int64_t cif_InSchedulingCell; /**< ASN.1 cif-InSchedulingCell；INTEGER (1..7)，位宽 3 bit。 */
};


/**
 * @brief CrossCarrierSchedulingConfig_SchedulingCellInfo
 * @note ASN.1：schedulingCellInfo；源文件第 5775 行。
 * @note CHOICE { own, other }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag {
    CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_own = 0, /**< ASN.1 own */
    CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_other = 1, /**< ASN.1 other */
} CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag;

struct CrossCarrierSchedulingConfig_SchedulingCellInfo {
    CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        CrossCarrierSchedulingConfig_SchedulingCellInfo_Own own; /**< ASN.1 own */
        CrossCarrierSchedulingConfig_SchedulingCellInfo_Other other; /**< ASN.1 other */
    } u;
};


/**
 * @brief CrossCarrierSchedulingConfig
 * @note ASN.1：CrossCarrierSchedulingConfig；源文件第 5774 行。
 * @note CrossCarrierSchedulingConfig ::= SEQUENCE { schedulingCellInfo, carrierIndicatorSize-r16, enableDefaultBeamFor...
 */
struct CrossCarrierSchedulingConfig {
    CrossCarrierSchedulingConfig_SchedulingCellInfo schedulingCellInfo; /**< ASN.1 schedulingCellInfo；结构体。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CrossCarrierSchedulingConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CrossCarrierSchedulingConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief ServingCellConfig_ExtGroup1
 * @note ASN.1：ServingCellConfig_ExtGroup1；源文件第 12436 行。
 */
struct ServingCellConfig_ExtGroup1 {
    bool has_lte_CRS_ToMatchAround; /**< lte-CRS-ToMatchAround 是否存在。 */
    SetupRelease_RateMatchPatternLTE_CRS lte_CRS_ToMatchAround; /**< ASN.1 lte-CRS-ToMatchAround；结构体；OPTIONAL。 */
    bool has_rateMatchPatternToAddModList; /**< rateMatchPatternToAddModList 是否存在。 */
    RateMatchPattern* rateMatchPatternToAddModList_items; /**< ASN.1 rateMatchPatternToAddModList；SEQUENCE OF RateMatchPattern，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToAddModList_count; /**< rateMatchPatternToAddModList 元素个数。 */
    bool has_rateMatchPatternToReleaseList; /**< rateMatchPatternToReleaseList 是否存在。 */
    RateMatchPatternId* rateMatchPatternToReleaseList_items; /**< ASN.1 rateMatchPatternToReleaseList；SEQUENCE OF RateMatchPatternId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rateMatchPatternToReleaseList_count; /**< rateMatchPatternToReleaseList 元素个数。 */
    bool has_downlinkChannelBW_PerSCS_List; /**< downlinkChannelBW-PerSCS-List 是否存在。 */
    SCS_SpecificCarrier* downlinkChannelBW_PerSCS_List_items; /**< ASN.1 downlinkChannelBW-PerSCS-List；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t downlinkChannelBW_PerSCS_List_count; /**< downlinkChannelBW-PerSCS-List 元素个数。 */
};


/**
 * @brief TDD_UL_DL_ConfigDedicated_IAB_MT_r16
 * @note ASN.1：TDD-UL-DL-ConfigDedicated-IAB-MT-r16；源文件第 13755 行。
 * @note TDD-UL-DL-ConfigDedicated-IAB-MT-r16 ::= SEQUENCE { slotSpecificConfigurationsToAddModList-IAB-MT-r16, slotSpecificCon...
 */
struct TDD_UL_DL_ConfigDedicated_IAB_MT_r16 {
    bool has_slotSpecificConfigurationsToAddModList_IAB_MT_r16; /**< slotSpecificConfigurationsToAddModList-IAB-MT-r16 是否存在。 */
    TDD_UL_DL_SlotConfig_IAB_MT_r16* slotSpecificConfigurationsToAddModList_IAB_MT_r16_items; /**< ASN.1 slotSpecificConfigurationsToAddModList-IAB-MT-r16；SEQUENCE OF TDD_UL_DL_SlotConfig_IAB_MT_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotSpecificConfigurationsToAddModList_IAB_MT_r16_count; /**< slotSpecificConfigurationsToAddModList-IAB-MT-r16 元素个数。 */
    bool has_slotSpecificConfigurationsToReleaseList_IAB_MT_r16; /**< slotSpecificConfigurationsToReleaseList-IAB-MT-r16 是否存在。 */
    TDD_UL_DL_SlotIndex* slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items; /**< ASN.1 slotSpecificConfigurationsToReleaseList-IAB-MT-r16；SEQUENCE OF TDD_UL_DL_SlotIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count; /**< slotSpecificConfigurationsToReleaseList-IAB-MT-r16 元素个数。 */
};


/**
 * @brief WithinActiveTimeConfig_r16
 * @note ASN.1：WithinActiveTimeConfig-r16；源文件第 12571 行。
 * @note WithinActiveTimeConfig-r16 ::= SEQUENCE { firstWithinActiveTimeBWP-Id-r16, dormancyGroupWithinActiveTime-r16 }
 */
struct WithinActiveTimeConfig_r16 {
    bool has_firstWithinActiveTimeBWP_Id_r16; /**< firstWithinActiveTimeBWP-Id-r16 是否存在。 */
    BWP_Id firstWithinActiveTimeBWP_Id_r16; /**< ASN.1 firstWithinActiveTimeBWP-Id-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_dormancyGroupWithinActiveTime_r16; /**< dormancyGroupWithinActiveTime-r16 是否存在。 */
    DormancyGroupID_r16 dormancyGroupWithinActiveTime_r16; /**< ASN.1 dormancyGroupWithinActiveTime-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_WithinActiveTimeConfig_r16
 * @note ASN.1：SetupRelease<WithinActiveTimeConfig-r16>；源文件第 12567 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_WithinActiveTimeConfig_r16_Tag {
    SetupRelease_WithinActiveTimeConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_WithinActiveTimeConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_WithinActiveTimeConfig_r16_Tag;

struct SetupRelease_WithinActiveTimeConfig_r16 {
    SetupRelease_WithinActiveTimeConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        WithinActiveTimeConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief OutsideActiveTimeConfig_r16
 * @note ASN.1：OutsideActiveTimeConfig-r16；源文件第 12576 行。
 * @note OutsideActiveTimeConfig-r16 ::= SEQUENCE { firstOutsideActiveTimeBWP-Id-r16, dormancyGroupOutsideActiveTime-r...
 */
struct OutsideActiveTimeConfig_r16 {
    bool has_firstOutsideActiveTimeBWP_Id_r16; /**< firstOutsideActiveTimeBWP-Id-r16 是否存在。 */
    BWP_Id firstOutsideActiveTimeBWP_Id_r16; /**< ASN.1 firstOutsideActiveTimeBWP-Id-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_dormancyGroupOutsideActiveTime_r16; /**< dormancyGroupOutsideActiveTime-r16 是否存在。 */
    DormancyGroupID_r16 dormancyGroupOutsideActiveTime_r16; /**< ASN.1 dormancyGroupOutsideActiveTime-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_OutsideActiveTimeConfig_r16
 * @note ASN.1：SetupRelease<OutsideActiveTimeConfig-r16>；源文件第 12568 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_OutsideActiveTimeConfig_r16_Tag {
    SetupRelease_OutsideActiveTimeConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_OutsideActiveTimeConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_OutsideActiveTimeConfig_r16_Tag;

struct SetupRelease_OutsideActiveTimeConfig_r16 {
    SetupRelease_OutsideActiveTimeConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        OutsideActiveTimeConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DormantBWP_Config_r16
 * @note ASN.1：DormantBWP-Config-r16；源文件第 12565 行。
 * @note DormantBWP-Config-r16 ::= SEQUENCE { dormantBWP-Id-r16, withinActiveTimeConfig-r16, outsideActiveTimeCo...
 */
struct DormantBWP_Config_r16 {
    bool has_dormantBWP_Id_r16; /**< dormantBWP-Id-r16 是否存在。 */
    BWP_Id dormantBWP_Id_r16; /**< ASN.1 dormantBWP-Id-r16；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_withinActiveTimeConfig_r16; /**< withinActiveTimeConfig-r16 是否存在。 */
    SetupRelease_WithinActiveTimeConfig_r16 withinActiveTimeConfig_r16; /**< ASN.1 withinActiveTimeConfig-r16；结构体；OPTIONAL。 */
    bool has_outsideActiveTimeConfig_r16; /**< outsideActiveTimeConfig-r16 是否存在。 */
    SetupRelease_OutsideActiveTimeConfig_r16 outsideActiveTimeConfig_r16; /**< ASN.1 outsideActiveTimeConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DormantBWP_Config_r16
 * @note ASN.1：SetupRelease<DormantBWP-Config-r16>；源文件第 12445 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DormantBWP_Config_r16_Tag {
    SetupRelease_DormantBWP_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DormantBWP_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DormantBWP_Config_r16_Tag;

struct SetupRelease_DormantBWP_Config_r16 {
    SetupRelease_DormantBWP_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DormantBWP_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16
 * @note ASN.1：ca-SlotOffset-r16；源文件第 12446 行。
 * @note CHOICE { refSCS15kHz, refSCS30KHz, refSCS60KHz, refSCS120KHz }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag {
    ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS15kHz = 0, /**< ASN.1 refSCS15kHz */
    ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS30KHz = 1, /**< ASN.1 refSCS30KHz */
    ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS60KHz = 2, /**< ASN.1 refSCS60KHz */
    ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS120KHz = 3, /**< ASN.1 refSCS120KHz */
} ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag;

struct ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16 {
    ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t refSCS15kHz; /**< ASN.1 refSCS15kHz */
        int64_t refSCS30KHz; /**< ASN.1 refSCS30KHz */
        int64_t refSCS60KHz; /**< ASN.1 refSCS60KHz */
        int64_t refSCS120KHz; /**< ASN.1 refSCS120KHz */
    } u;
};


/**
 * @brief DummyJ
 * @note ASN.1：DummyJ；源文件第 12537 行。
 * @note DummyJ ::= SEQUENCE { maxEnergyDetectionThreshold-r16, energyDetectionThresholdOffset-r1...
 */
struct DummyJ {
    int64_t maxEnergyDetectionThreshold_r16; /**< ASN.1 maxEnergyDetectionThreshold-r16；INTEGER (-85..-52)，位宽 6 bit。 */
    int64_t energyDetectionThresholdOffset_r16; /**< ASN.1 energyDetectionThresholdOffset-r16；INTEGER (-20..-13)，位宽 3 bit。 */
    bool has_ul_toDL_COT_SharingED_Threshold_r16; /**< ul-toDL-COT-SharingED-Threshold-r16 是否存在。 */
    int64_t ul_toDL_COT_SharingED_Threshold_r16; /**< ASN.1 ul-toDL-COT-SharingED-Threshold-r16；INTEGER (-85..-52)，位宽 6 bit；OPTIONAL。 */
    bool has_absenceOfAnyOtherTechnology_r16; /**< absenceOfAnyOtherTechnology-r16 是否存在。 */
    DummyJ_AbsenceOfAnyOtherTechnology_r16 absenceOfAnyOtherTechnology_r16; /**< ASN.1 absenceOfAnyOtherTechnology-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DummyJ
 * @note ASN.1：SetupRelease<DummyJ>；源文件第 12452 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DummyJ_Tag {
    SetupRelease_DummyJ_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DummyJ_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DummyJ_Tag;

struct SetupRelease_DummyJ {
    SetupRelease_DummyJ_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DummyJ setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief LTE_CRS_PatternList_r16
 * @note ASN.1：LTE-CRS-PatternList-r16；源文件第 11164 行。
 * @note LTE-CRS-PatternList-r16 ::= SEQUENCE OF (size 1..3) OF RateMatchPatternLTE-CRS
 */
struct LTE_CRS_PatternList_r16 {
    RateMatchPatternLTE_CRS* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_LTE_CRS_PatternList_r16
 * @note ASN.1：SetupRelease<LTE-CRS-PatternList-r16>；源文件第 12456 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_LTE_CRS_PatternList_r16_Tag {
    SetupRelease_LTE_CRS_PatternList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_LTE_CRS_PatternList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_LTE_CRS_PatternList_r16_Tag;

struct SetupRelease_LTE_CRS_PatternList_r16 {
    SetupRelease_LTE_CRS_PatternList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        LTE_CRS_PatternList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfig_ExtGroup2
 * @note ASN.1：ServingCellConfig_ExtGroup2；源文件第 12442 行。
 */
struct ServingCellConfig_ExtGroup2 {
    bool has_supplementaryUplinkRelease_r16; /**< supplementaryUplinkRelease-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_SupplementaryUplinkRelease_r16 supplementaryUplinkRelease_r16; /**< ASN.1 supplementaryUplinkRelease-r16；枚举；OPTIONAL。 */
    bool has_tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16; /**< tdd-UL-DL-ConfigurationDedicated-IAB-MT-r16 是否存在。 */
    TDD_UL_DL_ConfigDedicated_IAB_MT_r16 tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16; /**< ASN.1 tdd-UL-DL-ConfigurationDedicated-IAB-MT-r16；结构体；OPTIONAL。 */
    bool has_dormantBWP_Config_r16; /**< dormantBWP-Config-r16 是否存在。 */
    SetupRelease_DormantBWP_Config_r16 dormantBWP_Config_r16; /**< ASN.1 dormantBWP-Config-r16；结构体；OPTIONAL。 */
    bool has_ca_SlotOffset_r16; /**< ca-SlotOffset-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16 ca_SlotOffset_r16; /**< ASN.1 ca-SlotOffset-r16；结构体；OPTIONAL。 */
    bool has_dummy2; /**< dummy2 是否存在。 */
    SetupRelease_DummyJ dummy2; /**< ASN.1 dummy2；结构体；OPTIONAL。 */
    bool has_intraCellGuardBandsDL_List_r16; /**< intraCellGuardBandsDL-List-r16 是否存在。 */
    IntraCellGuardBandsPerSCS_r16* intraCellGuardBandsDL_List_r16_items; /**< ASN.1 intraCellGuardBandsDL-List-r16；SEQUENCE OF IntraCellGuardBandsPerSCS_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t intraCellGuardBandsDL_List_r16_count; /**< intraCellGuardBandsDL-List-r16 元素个数。 */
    bool has_intraCellGuardBandsUL_List_r16; /**< intraCellGuardBandsUL-List-r16 是否存在。 */
    IntraCellGuardBandsPerSCS_r16* intraCellGuardBandsUL_List_r16_items; /**< ASN.1 intraCellGuardBandsUL-List-r16；SEQUENCE OF IntraCellGuardBandsPerSCS_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t intraCellGuardBandsUL_List_r16_count; /**< intraCellGuardBandsUL-List-r16 元素个数。 */
    bool has_csi_RS_ValidationWithDCI_r16; /**< csi-RS-ValidationWithDCI-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_Csi_RS_ValidationWithDCI_r16 csi_RS_ValidationWithDCI_r16; /**< ASN.1 csi-RS-ValidationWithDCI-r16；枚举；OPTIONAL。 */
    bool has_lte_CRS_PatternList1_r16; /**< lte-CRS-PatternList1-r16 是否存在。 */
    SetupRelease_LTE_CRS_PatternList_r16 lte_CRS_PatternList1_r16; /**< ASN.1 lte-CRS-PatternList1-r16；结构体；OPTIONAL。 */
    bool has_lte_CRS_PatternList2_r16; /**< lte-CRS-PatternList2-r16 是否存在。 */
    SetupRelease_LTE_CRS_PatternList_r16 lte_CRS_PatternList2_r16; /**< ASN.1 lte-CRS-PatternList2-r16；结构体；OPTIONAL。 */
    bool has_crs_RateMatch_PerCORESETPoolIndex_r16; /**< crs-RateMatch-PerCORESETPoolIndex-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_Crs_RateMatch_PerCORESETPoolIndex_r16 crs_RateMatch_PerCORESETPoolIndex_r16; /**< ASN.1 crs-RateMatch-PerCORESETPoolIndex-r16；枚举；OPTIONAL。 */
    bool has_enableTwoDefaultTCI_States_r16; /**< enableTwoDefaultTCI-States-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_EnableTwoDefaultTCI_States_r16 enableTwoDefaultTCI_States_r16; /**< ASN.1 enableTwoDefaultTCI-States-r16；枚举；OPTIONAL。 */
    bool has_enableDefaultTCI_StatePerCoresetPoolIndex_r16; /**< enableDefaultTCI-StatePerCoresetPoolIndex-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_EnableDefaultTCI_StatePerCoresetPoolIndex_r16 enableDefaultTCI_StatePerCoresetPoolIndex_r16; /**< ASN.1 enableDefaultTCI-StatePerCoresetPoolIndex-r16；枚举；OPTIONAL。 */
    bool has_enableBeamSwitchTiming_r16; /**< enableBeamSwitchTiming-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_EnableBeamSwitchTiming_r16 enableBeamSwitchTiming_r16; /**< ASN.1 enableBeamSwitchTiming-r16；枚举；OPTIONAL。 */
    bool has_cbg_TxDiffTBsProcessingType1_r16; /**< cbg-TxDiffTBsProcessingType1-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType1_r16 cbg_TxDiffTBsProcessingType1_r16; /**< ASN.1 cbg-TxDiffTBsProcessingType1-r16；枚举；OPTIONAL。 */
    bool has_cbg_TxDiffTBsProcessingType2_r16; /**< cbg-TxDiffTBsProcessingType2-r16 是否存在。 */
    ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType2_r16 cbg_TxDiffTBsProcessingType2_r16; /**< ASN.1 cbg-TxDiffTBsProcessingType2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief ChannelAccessConfig_r16_EnergyDetectionConfig_r16
 * @note ASN.1：energyDetectionConfig-r16；源文件第 12545 行。
 * @note CHOICE { maxEnergyDetectionThreshold-r16, energyDetectionThresholdOffset-r16 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag {
    ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_maxEnergyDetectionThreshold_r16 = 0, /**< ASN.1 maxEnergyDetectionThreshold-r16 */
    ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_energyDetectionThresholdOffset_r16 = 1, /**< ASN.1 energyDetectionThresholdOffset-r16 */
} ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag;

struct ChannelAccessConfig_r16_EnergyDetectionConfig_r16 {
    ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t maxEnergyDetectionThreshold_r16; /**< ASN.1 maxEnergyDetectionThreshold-r16 */
        int64_t energyDetectionThresholdOffset_r16; /**< ASN.1 energyDetectionThresholdOffset-r16 */
    } u;
};


/**
 * @brief ChannelAccessConfig_r16
 * @note ASN.1：ChannelAccessConfig-r16；源文件第 12544 行。
 * @note ChannelAccessConfig-r16 ::= SEQUENCE { energyDetectionConfig-r16, ul-toDL-COT-SharingED-Threshold-r16, ab...
 */
struct ChannelAccessConfig_r16 {
    bool has_energyDetectionConfig_r16; /**< energyDetectionConfig-r16 是否存在。 */
    ChannelAccessConfig_r16_EnergyDetectionConfig_r16 energyDetectionConfig_r16; /**< ASN.1 energyDetectionConfig-r16；结构体；OPTIONAL。 */
    bool has_ul_toDL_COT_SharingED_Threshold_r16; /**< ul-toDL-COT-SharingED-Threshold-r16 是否存在。 */
    int64_t ul_toDL_COT_SharingED_Threshold_r16; /**< ASN.1 ul-toDL-COT-SharingED-Threshold-r16；INTEGER (-85..-52)，位宽 6 bit；OPTIONAL。 */
    bool has_absenceOfAnyOtherTechnology_r16; /**< absenceOfAnyOtherTechnology-r16 是否存在。 */
    ChannelAccessConfig_r16_AbsenceOfAnyOtherTechnology_r16 absenceOfAnyOtherTechnology_r16; /**< ASN.1 absenceOfAnyOtherTechnology-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_ChannelAccessConfig_r16
 * @note ASN.1：SetupRelease<ChannelAccessConfig-r16>；源文件第 12467 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_ChannelAccessConfig_r16_Tag {
    SetupRelease_ChannelAccessConfig_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_ChannelAccessConfig_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_ChannelAccessConfig_r16_Tag;

struct SetupRelease_ChannelAccessConfig_r16 {
    SetupRelease_ChannelAccessConfig_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        ChannelAccessConfig_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfig_ExtGroup3
 * @note ASN.1：ServingCellConfig_ExtGroup3；源文件第 12465 行。
 */
struct ServingCellConfig_ExtGroup3 {
    bool has_directionalCollisionHandling_r16; /**< directionalCollisionHandling-r16 是否存在。 */
    ServingCellConfig_ExtGroup3_DirectionalCollisionHandling_r16 directionalCollisionHandling_r16; /**< ASN.1 directionalCollisionHandling-r16；枚举；OPTIONAL。 */
    bool has_channelAccessConfig_r16; /**< channelAccessConfig-r16 是否存在。 */
    SetupRelease_ChannelAccessConfig_r16 channelAccessConfig_r16; /**< ASN.1 channelAccessConfig-r16；结构体；OPTIONAL。 */
};


/**
 * @brief TCI_ActivatedConfig_r17
 * @note ASN.1：TCI-ActivatedConfig-r17；源文件第 13659 行。
 * @note TCI-ActivatedConfig-r17 ::= SEQUENCE { pdcch-TCI-r17, pdsch-TCI-r17 }
 */
struct TCI_ActivatedConfig_r17 {
    TCI_StateId* pdcch_TCI_r17_items; /**< ASN.1 pdcch-TCI-r17；SEQUENCE OF TCI_StateId，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t pdcch_TCI_r17_count; /**< pdcch-TCI-r17 元素个数。 */
    BitString pdsch_TCI_r17; /**< ASN.1 pdsch-TCI-r17；SIZE (1..128)。 */
};


/**
 * @brief NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17
 * @note ASN.1：scs15-r17；源文件第 8825 行。
 * @note CHOICE { n4-r17, n5-r17, n8-r17, n10-r17, n16-r17, n20-r17, n32-r17, n40-r17,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n4_r17 = 0, /**< ASN.1 n4-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5_r17 = 1, /**< ASN.1 n5-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n8_r17 = 2, /**< ASN.1 n8-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10_r17 = 3, /**< ASN.1 n10-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n16_r17 = 4, /**< ASN.1 n16-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n20_r17 = 5, /**< ASN.1 n20-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n32_r17 = 6, /**< ASN.1 n32-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n40_r17 = 7, /**< ASN.1 n40-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n64_r17 = 8, /**< ASN.1 n64-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n80_r17 = 9, /**< ASN.1 n80-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n160_r17 = 10, /**< ASN.1 n160-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n320_r17 = 11, /**< ASN.1 n320-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n640_r17 = 12, /**< ASN.1 n640-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n1280_r17 = 13, /**< ASN.1 n1280-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n2560_r17 = 14, /**< ASN.1 n2560-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5120_r17 = 15, /**< ASN.1 n5120-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10240_r17 = 16, /**< ASN.1 n10240-r17 */
} NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag;

struct NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17 {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n4_r17; /**< ASN.1 n4-r17 */
        int64_t n5_r17; /**< ASN.1 n5-r17 */
        int64_t n8_r17; /**< ASN.1 n8-r17 */
        int64_t n10_r17; /**< ASN.1 n10-r17 */
        int64_t n16_r17; /**< ASN.1 n16-r17 */
        int64_t n20_r17; /**< ASN.1 n20-r17 */
        int64_t n32_r17; /**< ASN.1 n32-r17 */
        int64_t n40_r17; /**< ASN.1 n40-r17 */
        int64_t n64_r17; /**< ASN.1 n64-r17 */
        int64_t n80_r17; /**< ASN.1 n80-r17 */
        int64_t n160_r17; /**< ASN.1 n160-r17 */
        int64_t n320_r17; /**< ASN.1 n320-r17 */
        int64_t n640_r17; /**< ASN.1 n640-r17 */
        int64_t n1280_r17; /**< ASN.1 n1280-r17 */
        int64_t n2560_r17; /**< ASN.1 n2560-r17 */
        int64_t n5120_r17; /**< ASN.1 n5120-r17 */
        int64_t n10240_r17; /**< ASN.1 n10240-r17 */
    } u;
};


/**
 * @brief NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17
 * @note ASN.1：scs30-r17；源文件第 8845 行。
 * @note CHOICE { n8-r17, n10-r17, n16-r17, n20-r17, n32-r17, n40-r17, n64-r17, n80-r1...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n8_r17 = 0, /**< ASN.1 n8-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10_r17 = 1, /**< ASN.1 n10-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n16_r17 = 2, /**< ASN.1 n16-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20_r17 = 3, /**< ASN.1 n20-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n32_r17 = 4, /**< ASN.1 n32-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n40_r17 = 5, /**< ASN.1 n40-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n64_r17 = 6, /**< ASN.1 n64-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n80_r17 = 7, /**< ASN.1 n80-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n128_r17 = 8, /**< ASN.1 n128-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n160_r17 = 9, /**< ASN.1 n160-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n320_r17 = 10, /**< ASN.1 n320-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n640_r17 = 11, /**< ASN.1 n640-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n1280_r17 = 12, /**< ASN.1 n1280-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n2560_r17 = 13, /**< ASN.1 n2560-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n5120_r17 = 14, /**< ASN.1 n5120-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10240_r17 = 15, /**< ASN.1 n10240-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20480_r17 = 16, /**< ASN.1 n20480-r17 */
} NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag;

struct NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17 {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n8_r17; /**< ASN.1 n8-r17 */
        int64_t n10_r17; /**< ASN.1 n10-r17 */
        int64_t n16_r17; /**< ASN.1 n16-r17 */
        int64_t n20_r17; /**< ASN.1 n20-r17 */
        int64_t n32_r17; /**< ASN.1 n32-r17 */
        int64_t n40_r17; /**< ASN.1 n40-r17 */
        int64_t n64_r17; /**< ASN.1 n64-r17 */
        int64_t n80_r17; /**< ASN.1 n80-r17 */
        int64_t n128_r17; /**< ASN.1 n128-r17 */
        int64_t n160_r17; /**< ASN.1 n160-r17 */
        int64_t n320_r17; /**< ASN.1 n320-r17 */
        int64_t n640_r17; /**< ASN.1 n640-r17 */
        int64_t n1280_r17; /**< ASN.1 n1280-r17 */
        int64_t n2560_r17; /**< ASN.1 n2560-r17 */
        int64_t n5120_r17; /**< ASN.1 n5120-r17 */
        int64_t n10240_r17; /**< ASN.1 n10240-r17 */
        int64_t n20480_r17; /**< ASN.1 n20480-r17 */
    } u;
};


/**
 * @brief NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17
 * @note ASN.1：scs60-r17；源文件第 8865 行。
 * @note CHOICE { n16-r17, n20-r17, n32-r17, n40-r17, n64-r17, n80-r17, n128-r17, n160...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n16_r17 = 0, /**< ASN.1 n16-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20_r17 = 1, /**< ASN.1 n20-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n32_r17 = 2, /**< ASN.1 n32-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40_r17 = 3, /**< ASN.1 n40-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n64_r17 = 4, /**< ASN.1 n64-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n80_r17 = 5, /**< ASN.1 n80-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n128_r17 = 6, /**< ASN.1 n128-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n160_r17 = 7, /**< ASN.1 n160-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n256_r17 = 8, /**< ASN.1 n256-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n320_r17 = 9, /**< ASN.1 n320-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n640_r17 = 10, /**< ASN.1 n640-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n1280_r17 = 11, /**< ASN.1 n1280-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n2560_r17 = 12, /**< ASN.1 n2560-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n5120_r17 = 13, /**< ASN.1 n5120-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n10240_r17 = 14, /**< ASN.1 n10240-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20480_r17 = 15, /**< ASN.1 n20480-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40960_r17 = 16, /**< ASN.1 n40960-r17 */
} NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag;

struct NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17 {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n16_r17; /**< ASN.1 n16-r17 */
        int64_t n20_r17; /**< ASN.1 n20-r17 */
        int64_t n32_r17; /**< ASN.1 n32-r17 */
        int64_t n40_r17; /**< ASN.1 n40-r17 */
        int64_t n64_r17; /**< ASN.1 n64-r17 */
        int64_t n80_r17; /**< ASN.1 n80-r17 */
        int64_t n128_r17; /**< ASN.1 n128-r17 */
        int64_t n160_r17; /**< ASN.1 n160-r17 */
        int64_t n256_r17; /**< ASN.1 n256-r17 */
        int64_t n320_r17; /**< ASN.1 n320-r17 */
        int64_t n640_r17; /**< ASN.1 n640-r17 */
        int64_t n1280_r17; /**< ASN.1 n1280-r17 */
        int64_t n2560_r17; /**< ASN.1 n2560-r17 */
        int64_t n5120_r17; /**< ASN.1 n5120-r17 */
        int64_t n10240_r17; /**< ASN.1 n10240-r17 */
        int64_t n20480_r17; /**< ASN.1 n20480-r17 */
        int64_t n40960_r17; /**< ASN.1 n40960-r17 */
    } u;
};


/**
 * @brief NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17
 * @note ASN.1：scs120-r17；源文件第 8885 行。
 * @note CHOICE { n32-r17, n40-r17, n64-r17, n80-r17, n128-r17, n160-r17, n256-r17, n3...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n32_r17 = 0, /**< ASN.1 n32-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40_r17 = 1, /**< ASN.1 n40-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n64_r17 = 2, /**< ASN.1 n64-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n80_r17 = 3, /**< ASN.1 n80-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n128_r17 = 4, /**< ASN.1 n128-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n160_r17 = 5, /**< ASN.1 n160-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n256_r17 = 6, /**< ASN.1 n256-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n320_r17 = 7, /**< ASN.1 n320-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n512_r17 = 8, /**< ASN.1 n512-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n640_r17 = 9, /**< ASN.1 n640-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n1280_r17 = 10, /**< ASN.1 n1280-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n2560_r17 = 11, /**< ASN.1 n2560-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n5120_r17 = 12, /**< ASN.1 n5120-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n10240_r17 = 13, /**< ASN.1 n10240-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n20480_r17 = 14, /**< ASN.1 n20480-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40960_r17 = 15, /**< ASN.1 n40960-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n81920_r17 = 16, /**< ASN.1 n81920-r17 */
} NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag;

struct NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17 {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t n32_r17; /**< ASN.1 n32-r17 */
        int64_t n40_r17; /**< ASN.1 n40-r17 */
        int64_t n64_r17; /**< ASN.1 n64-r17 */
        int64_t n80_r17; /**< ASN.1 n80-r17 */
        int64_t n128_r17; /**< ASN.1 n128-r17 */
        int64_t n160_r17; /**< ASN.1 n160-r17 */
        int64_t n256_r17; /**< ASN.1 n256-r17 */
        int64_t n320_r17; /**< ASN.1 n320-r17 */
        int64_t n512_r17; /**< ASN.1 n512-r17 */
        int64_t n640_r17; /**< ASN.1 n640-r17 */
        int64_t n1280_r17; /**< ASN.1 n1280-r17 */
        int64_t n2560_r17; /**< ASN.1 n2560-r17 */
        int64_t n5120_r17; /**< ASN.1 n5120-r17 */
        int64_t n10240_r17; /**< ASN.1 n10240-r17 */
        int64_t n20480_r17; /**< ASN.1 n20480-r17 */
        int64_t n40960_r17; /**< ASN.1 n40960-r17 */
        int64_t n81920_r17; /**< ASN.1 n81920-r17 */
    } u;
};


/**
 * @brief NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17
 * @note ASN.1：NR-DL-PRS-Periodicity-and-ResourceSetSlotOffset-r17；源文件第 8824 行。
 * @note NR-DL-PRS-Periodicity-and-ResourceSetSlotOffset-r17 ::= CHOICE { scs15-r17, scs30-r17, scs60-r17, scs120-r17 }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs15_r17 = 0, /**< ASN.1 scs15-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs30_r17 = 1, /**< ASN.1 scs30-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs60_r17 = 2, /**< ASN.1 scs60-r17 */
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs120_r17 = 3, /**< ASN.1 scs120-r17 */
} NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag;

struct NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17 {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17 scs15_r17; /**< ASN.1 scs15-r17 */
        NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17 scs30_r17; /**< ASN.1 scs30-r17 */
        NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17 scs60_r17; /**< ASN.1 scs60-r17 */
        NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17 scs120_r17; /**< ASN.1 scs120-r17 */
    } u;
};


/**
 * @brief RepFactorAndTimeGap_r17
 * @note ASN.1：RepFactorAndTimeGap-r17；源文件第 8942 行。
 * @note RepFactorAndTimeGap-r17 ::= SEQUENCE { repetitionFactor-r17, timeGap-r17 }
 */
struct RepFactorAndTimeGap_r17 {
    RepFactorAndTimeGap_r17_RepetitionFactor_r17 repetitionFactor_r17; /**< ASN.1 repetitionFactor-r17；枚举。 */
    RepFactorAndTimeGap_r17_TimeGap_r17 timeGap_r17; /**< ASN.1 timeGap-r17；枚举。 */
};


/**
 * @brief NR_DL_PRS_PDC_ResourceSet_r17
 * @note ASN.1：NR-DL-PRS-PDC-ResourceSet-r17；源文件第 8814 行。
 * @note NR-DL-PRS-PDC-ResourceSet-r17 ::= SEQUENCE { periodicityAndOffset-r17, numSymbols-r17, dl-PRS-ResourceBandwidth...
 */
struct NR_DL_PRS_PDC_ResourceSet_r17 {
    NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17 periodicityAndOffset_r17; /**< ASN.1 periodicityAndOffset-r17；结构体。 */
    NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17 numSymbols_r17; /**< ASN.1 numSymbols-r17；枚举。 */
    int64_t dl_PRS_ResourceBandwidth_r17; /**< ASN.1 dl-PRS-ResourceBandwidth-r17；INTEGER (1..63)，位宽 6 bit。 */
    int64_t dl_PRS_StartPRB_r17; /**< ASN.1 dl-PRS-StartPRB-r17；INTEGER (0..2176)，位宽 12 bit。 */
    NR_DL_PRS_Resource_r17* resourceList_r17_items; /**< ASN.1 resourceList-r17；SEQUENCE OF NR_DL_PRS_Resource_r17，SIZE (0..0)；元素数组（库 malloc）。 */
    uint32_t resourceList_r17_count; /**< resourceList-r17 元素个数。 */
    bool has_repFactorAndTimeGap_r17; /**< repFactorAndTimeGap-r17 是否存在。 */
    RepFactorAndTimeGap_r17 repFactorAndTimeGap_r17; /**< ASN.1 repFactorAndTimeGap-r17；结构体；OPTIONAL。 */
};


/**
 * @brief NR_DL_PRS_PDC_Info_r17
 * @note ASN.1：NR-DL-PRS-PDC-Info-r17；源文件第 8809 行。
 * @note NR-DL-PRS-PDC-Info-r17 ::= SEQUENCE { nr-DL-PRS-PDC-ResourceSet-r17 }
 */
struct NR_DL_PRS_PDC_Info_r17 {
    bool has_nr_DL_PRS_PDC_ResourceSet_r17; /**< nr-DL-PRS-PDC-ResourceSet-r17 是否存在。 */
    NR_DL_PRS_PDC_ResourceSet_r17 nr_DL_PRS_PDC_ResourceSet_r17; /**< ASN.1 nr-DL-PRS-PDC-ResourceSet-r17；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_NR_DL_PRS_PDC_Info_r17
 * @note ASN.1：SetupRelease<NR-DL-PRS-PDC-Info-r17>；源文件第 12470 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag {
    SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag;

struct SetupRelease_NR_DL_PRS_PDC_Info_r17 {
    SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        NR_DL_PRS_PDC_Info_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SemiStaticChannelAccessConfigUE_r17
 * @note ASN.1：SemiStaticChannelAccessConfigUE-r17；源文件第 12381 行。
 * @note SemiStaticChannelAccessConfigUE-r17 ::= SEQUENCE { periodUE-r17, offsetUE-r17 }
 */
struct SemiStaticChannelAccessConfigUE_r17 {
    SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17 periodUE_r17; /**< ASN.1 periodUE-r17；枚举。 */
    int64_t offsetUE_r17; /**< ASN.1 offsetUE-r17；INTEGER (0..559)，位宽 10 bit。 */
};


/**
 * @brief SetupRelease_SemiStaticChannelAccessConfigUE_r17
 * @note ASN.1：SetupRelease<SemiStaticChannelAccessConfigUE-r17>；源文件第 12471 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag {
    SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag;

struct SetupRelease_SemiStaticChannelAccessConfigUE_r17 {
    SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SemiStaticChannelAccessConfigUE_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MIMOParam_r17
 * @note ASN.1：MIMOParam-r17；源文件第 12586 行。
 * @note MIMOParam-r17 ::= SEQUENCE { additionalPCI-ToAddModList-r17, additionalPCI-ToReleaseList-r17, u...
 */
struct MIMOParam_r17 {
    bool has_additionalPCI_ToAddModList_r17; /**< additionalPCI-ToAddModList-r17 是否存在。 */
    SSB_MTC_AdditionalPCI_r17* additionalPCI_ToAddModList_r17_items; /**< ASN.1 additionalPCI-ToAddModList-r17；SEQUENCE OF SSB_MTC_AdditionalPCI_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t additionalPCI_ToAddModList_r17_count; /**< additionalPCI-ToAddModList-r17 元素个数。 */
    bool has_additionalPCI_ToReleaseList_r17; /**< additionalPCI-ToReleaseList-r17 是否存在。 */
    AdditionalPCIIndex_r17* additionalPCI_ToReleaseList_r17_items; /**< ASN.1 additionalPCI-ToReleaseList-r17；SEQUENCE OF AdditionalPCIIndex_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t additionalPCI_ToReleaseList_r17_count; /**< additionalPCI-ToReleaseList-r17 元素个数。 */
    bool has_unifiedTCI_StateType_r17; /**< unifiedTCI-StateType-r17 是否存在。 */
    MIMOParam_r17_UnifiedTCI_StateType_r17 unifiedTCI_StateType_r17; /**< ASN.1 unifiedTCI-StateType-r17；枚举；OPTIONAL。 */
    bool has_uplink_PowerControlToAddModList_r17; /**< uplink-PowerControlToAddModList-r17 是否存在。 */
    Uplink_powerControl_r17* uplink_PowerControlToAddModList_r17_items; /**< ASN.1 uplink-PowerControlToAddModList-r17；SEQUENCE OF Uplink_powerControl_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplink_PowerControlToAddModList_r17_count; /**< uplink-PowerControlToAddModList-r17 元素个数。 */
    bool has_uplink_PowerControlToReleaseList_r17; /**< uplink-PowerControlToReleaseList-r17 是否存在。 */
    Uplink_powerControlId_r17* uplink_PowerControlToReleaseList_r17_items; /**< ASN.1 uplink-PowerControlToReleaseList-r17；SEQUENCE OF Uplink_powerControlId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplink_PowerControlToReleaseList_r17_count; /**< uplink-PowerControlToReleaseList-r17 元素个数。 */
    bool has_sfnSchemePDCCH_r17; /**< sfnSchemePDCCH-r17 是否存在。 */
    MIMOParam_r17_SfnSchemePDCCH_r17 sfnSchemePDCCH_r17; /**< ASN.1 sfnSchemePDCCH-r17；枚举；OPTIONAL。 */
    bool has_sfnSchemePDSCH_r17; /**< sfnSchemePDSCH-r17 是否存在。 */
    MIMOParam_r17_SfnSchemePDSCH_r17 sfnSchemePDSCH_r17; /**< ASN.1 sfnSchemePDSCH-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_MIMOParam_r17
 * @note ASN.1：SetupRelease<MIMOParam-r17>；源文件第 12472 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MIMOParam_r17_Tag {
    SetupRelease_MIMOParam_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MIMOParam_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MIMOParam_r17_Tag;

struct SetupRelease_MIMOParam_r17 {
    SetupRelease_MIMOParam_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MIMOParam_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief LTE_NeighCellsCRS_AssistInfoList_r17
 * @note ASN.1：LTE-NeighCellsCRS-AssistInfoList-r17；源文件第 7148 行。
 * @note LTE-NeighCellsCRS-AssistInfoList-r17 ::= SEQUENCE OF (size 1..8) OF LTE-NeighCellsCRS-AssistInfo-r17
 */
struct LTE_NeighCellsCRS_AssistInfoList_r17 {
    LTE_NeighCellsCRS_AssistInfo_r17* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17
 * @note ASN.1：SetupRelease<LTE-NeighCellsCRS-AssistInfoList-r17>；源文件第 12480 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag {
    SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag;

struct SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17 {
    SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        LTE_NeighCellsCRS_AssistInfoList_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfig_ExtGroup4
 * @note ASN.1：ServingCellConfig_ExtGroup4；源文件第 12469 行。
 */
struct ServingCellConfig_ExtGroup4 {
    bool has_nr_dl_PRS_PDC_Info_r17; /**< nr-dl-PRS-PDC-Info-r17 是否存在。 */
    SetupRelease_NR_DL_PRS_PDC_Info_r17 nr_dl_PRS_PDC_Info_r17; /**< ASN.1 nr-dl-PRS-PDC-Info-r17；结构体；OPTIONAL。 */
    bool has_semiStaticChannelAccessConfigUE_r17; /**< semiStaticChannelAccessConfigUE-r17 是否存在。 */
    SetupRelease_SemiStaticChannelAccessConfigUE_r17 semiStaticChannelAccessConfigUE_r17; /**< ASN.1 semiStaticChannelAccessConfigUE-r17；结构体；OPTIONAL。 */
    bool has_mimoParam_r17; /**< mimoParam-r17 是否存在。 */
    SetupRelease_MIMOParam_r17 mimoParam_r17; /**< ASN.1 mimoParam-r17；结构体；OPTIONAL。 */
    bool has_channelAccessMode2_r17; /**< channelAccessMode2-r17 是否存在。 */
    ServingCellConfig_ExtGroup4_ChannelAccessMode2_r17 channelAccessMode2_r17; /**< ASN.1 channelAccessMode2-r17；枚举；OPTIONAL。 */
    bool has_timeDomainHARQ_BundlingType1_r17; /**< timeDomainHARQ-BundlingType1-r17 是否存在。 */
    ServingCellConfig_ExtGroup4_TimeDomainHARQ_BundlingType1_r17 timeDomainHARQ_BundlingType1_r17; /**< ASN.1 timeDomainHARQ-BundlingType1-r17；枚举；OPTIONAL。 */
    bool has_nrofHARQ_BundlingGroups_r17; /**< nrofHARQ-BundlingGroups-r17 是否存在。 */
    ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17 nrofHARQ_BundlingGroups_r17; /**< ASN.1 nrofHARQ-BundlingGroups-r17；枚举；OPTIONAL。 */
    bool has_fdmed_ReceptionMulticast_r17; /**< fdmed-ReceptionMulticast-r17 是否存在。 */
    ServingCellConfig_ExtGroup4_Fdmed_ReceptionMulticast_r17 fdmed_ReceptionMulticast_r17; /**< ASN.1 fdmed-ReceptionMulticast-r17；枚举；OPTIONAL。 */
    bool has_moreThanOneNackOnlyMode_r17; /**< moreThanOneNackOnlyMode-r17 是否存在。 */
    ServingCellConfig_ExtGroup4_MoreThanOneNackOnlyMode_r17 moreThanOneNackOnlyMode_r17; /**< ASN.1 moreThanOneNackOnlyMode-r17；枚举；OPTIONAL。 */
    bool has_tci_ActivatedConfig_r17; /**< tci-ActivatedConfig-r17 是否存在。 */
    TCI_ActivatedConfig_r17 tci_ActivatedConfig_r17; /**< ASN.1 tci-ActivatedConfig-r17；结构体；OPTIONAL。 */
    bool has_directionalCollisionHandling_DC_r17; /**< directionalCollisionHandling-DC-r17 是否存在。 */
    ServingCellConfig_ExtGroup4_DirectionalCollisionHandling_DC_r17 directionalCollisionHandling_DC_r17; /**< ASN.1 directionalCollisionHandling-DC-r17；枚举；OPTIONAL。 */
    bool has_lte_NeighCellsCRS_AssistInfoList_r17; /**< lte-NeighCellsCRS-AssistInfoList-r17 是否存在。 */
    SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17 lte_NeighCellsCRS_AssistInfoList_r17; /**< ASN.1 lte-NeighCellsCRS-AssistInfoList-r17；结构体；OPTIONAL。 */
};


/**
 * @brief ServingCellConfig_ExtGroup5
 * @note ASN.1：ServingCellConfig_ExtGroup5；源文件第 12482 行。
 */
struct ServingCellConfig_ExtGroup5 {
    bool has_lte_NeighCellsCRS_Assumptions_r17; /**< lte-NeighCellsCRS-Assumptions-r17 是否存在。 */
    ServingCellConfig_ExtGroup5_Lte_NeighCellsCRS_Assumptions_r17 lte_NeighCellsCRS_Assumptions_r17; /**< ASN.1 lte-NeighCellsCRS-Assumptions-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ServingCellConfig_ExtGroup6
 * @note ASN.1：ServingCellConfig_ExtGroup6；源文件第 12485 行。
 */
struct ServingCellConfig_ExtGroup6 {
    bool has_crossCarrierSchedulingConfigRelease_r17; /**< crossCarrierSchedulingConfigRelease-r17 是否存在。 */
    ServingCellConfig_ExtGroup6_CrossCarrierSchedulingConfigRelease_r17 crossCarrierSchedulingConfigRelease_r17; /**< ASN.1 crossCarrierSchedulingConfigRelease-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ServingCellConfig_ExtGroup7
 * @note ASN.1：ServingCellConfig_ExtGroup7；源文件第 12488 行。
 */
struct ServingCellConfig_ExtGroup7 {
    bool has_multiPDSCH_PerSlotType1_CB_r17; /**< multiPDSCH-PerSlotType1-CB-r17 是否存在。 */
    ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17 multiPDSCH_PerSlotType1_CB_r17; /**< ASN.1 multiPDSCH-PerSlotType1-CB-r17；枚举；OPTIONAL。 */
};


/**
 * @brief ServingCellConfig_ExtGroup8_Tag2_r18
 * @note ASN.1：tag2-r18；源文件第 12496 行。
 * @note SEQUENCE { tag2-Id-r18, tag2-flag-r18, n-TimingAdvanceOffset2-r18 }
 */
struct ServingCellConfig_ExtGroup8_Tag2_r18 {
    TAG_Id tag2_Id_r18; /**< ASN.1 tag2-Id-r18；INTEGER (0..3)，位宽 2 bit。 */
    bool tag2_flag_r18; /**< ASN.1 tag2-flag-r18；BOOLEAN，1 bit。 */
    bool has_n_TimingAdvanceOffset2_r18; /**< n-TimingAdvanceOffset2-r18 是否存在。 */
    ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18 n_TimingAdvanceOffset2_r18; /**< ASN.1 n-TimingAdvanceOffset2-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_CellDTXDRX_Config_r18
 * @note ASN.1：SetupRelease<CellDTXDRX-Config-r18>；源文件第 12501 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CellDTXDRX_Config_r18_Tag {
    SetupRelease_CellDTXDRX_Config_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CellDTXDRX_Config_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CellDTXDRX_Config_r18_Tag;

struct SetupRelease_CellDTXDRX_Config_r18 {
    SetupRelease_CellDTXDRX_Config_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CellDTXDRX_Config_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfig_ExtGroup8
 * @note ASN.1：ServingCellConfig_ExtGroup8；源文件第 12491 行。
 */
struct ServingCellConfig_ExtGroup8 {
    bool has_lte_CRS_PatternList3_r18; /**< lte-CRS-PatternList3-r18 是否存在。 */
    SetupRelease_LTE_CRS_PatternList_r16 lte_CRS_PatternList3_r18; /**< ASN.1 lte-CRS-PatternList3-r18；结构体；OPTIONAL。 */
    bool has_lte_CRS_PatternList4_r18; /**< lte-CRS-PatternList4-r18 是否存在。 */
    SetupRelease_LTE_CRS_PatternList_r16 lte_CRS_PatternList4_r18; /**< ASN.1 lte-CRS-PatternList4-r18；结构体；OPTIONAL。 */
    bool has_pdcch_CandidateReceptionWith_CRS_Overlap_r18; /**< pdcch-CandidateReceptionWith-CRS-Overlap-r18 是否存在。 */
    ServingCellConfig_ExtGroup8_Pdcch_CandidateReceptionWith_CRS_Overlap_r18 pdcch_CandidateReceptionWith_CRS_Overlap_r18; /**< ASN.1 pdcch-CandidateReceptionWith-CRS-Overlap-r18；枚举；OPTIONAL。 */
    bool has_cjt_Scheme_PDSCH_r18; /**< cjt-Scheme-PDSCH-r18 是否存在。 */
    ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18 cjt_Scheme_PDSCH_r18; /**< ASN.1 cjt-Scheme-PDSCH-r18；枚举；OPTIONAL。 */
    bool has_tag2_r18; /**< tag2-r18 是否存在。 */
    ServingCellConfig_ExtGroup8_Tag2_r18 tag2_r18; /**< ASN.1 tag2-r18；结构体；OPTIONAL。 */
    bool has_cellDTXDRX_Config_r18; /**< cellDTXDRX-Config-r18 是否存在。 */
    SetupRelease_CellDTXDRX_Config_r18 cellDTXDRX_Config_r18; /**< ASN.1 cellDTXDRX-Config-r18；结构体；OPTIONAL。 */
    bool has_positionInDCI_cellDTRX_r18; /**< positionInDCI-cellDTRX-r18 是否存在。 */
    int64_t positionInDCI_cellDTRX_r18; /**< ASN.1 positionInDCI-cellDTRX-r18；INTEGER (0..139)，位宽 8 bit；OPTIONAL。 */
    bool has_cellDTXDRX_L1activation_r18; /**< cellDTXDRX-L1activation-r18 是否存在。 */
    ServingCellConfig_ExtGroup8_CellDTXDRX_L1activation_r18 cellDTXDRX_L1activation_r18; /**< ASN.1 cellDTXDRX-L1activation-r18；枚举；OPTIONAL。 */
    bool has_mc_DCI_SetOfCellsToAddModList_r18; /**< mc-DCI-SetOfCellsToAddModList-r18 是否存在。 */
    MC_DCI_SetOfCells_r18* mc_DCI_SetOfCellsToAddModList_r18_items; /**< ASN.1 mc-DCI-SetOfCellsToAddModList-r18；SEQUENCE OF MC_DCI_SetOfCells_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mc_DCI_SetOfCellsToAddModList_r18_count; /**< mc-DCI-SetOfCellsToAddModList-r18 元素个数。 */
    bool has_mc_DCI_SetOfCellsToReleaseList_r18; /**< mc-DCI-SetOfCellsToReleaseList-r18 是否存在。 */
    SetOfCellsId_r18* mc_DCI_SetOfCellsToReleaseList_r18_items; /**< ASN.1 mc-DCI-SetOfCellsToReleaseList-r18；SEQUENCE OF SetOfCellsId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t mc_DCI_SetOfCellsToReleaseList_r18_count; /**< mc-DCI-SetOfCellsToReleaseList-r18 元素个数。 */
};


/**
 * @brief UplinkConfig_ExtGroup1
 * @note ASN.1：UplinkConfig_ExtGroup1；源文件第 12517 行。
 */
struct UplinkConfig_ExtGroup1 {
    bool has_powerBoostPi2BPSK; /**< powerBoostPi2BPSK 是否存在。 */
    bool powerBoostPi2BPSK; /**< ASN.1 powerBoostPi2BPSK；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_uplinkChannelBW_PerSCS_List; /**< uplinkChannelBW-PerSCS-List 是否存在。 */
    SCS_SpecificCarrier* uplinkChannelBW_PerSCS_List_items; /**< ASN.1 uplinkChannelBW-PerSCS-List；SEQUENCE OF SCS_SpecificCarrier，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkChannelBW_PerSCS_List_count; /**< uplinkChannelBW-PerSCS-List 元素个数。 */
};


/**
 * @brief UplinkTxSwitching_r16
 * @note ASN.1：UplinkTxSwitching-r16；源文件第 12581 行。
 * @note UplinkTxSwitching-r16 ::= SEQUENCE { uplinkTxSwitchingPeriodLocation-r16, uplinkTxSwitchingCarrier-r16 }
 */
struct UplinkTxSwitching_r16 {
    bool uplinkTxSwitchingPeriodLocation_r16; /**< ASN.1 uplinkTxSwitchingPeriodLocation-r16；BOOLEAN，1 bit。 */
    UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16 uplinkTxSwitchingCarrier_r16; /**< ASN.1 uplinkTxSwitchingCarrier-r16；枚举。 */
};


/**
 * @brief SetupRelease_UplinkTxSwitching_r16
 * @note ASN.1：SetupRelease<UplinkTxSwitching-r16>；源文件第 12526 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UplinkTxSwitching_r16_Tag {
    SetupRelease_UplinkTxSwitching_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UplinkTxSwitching_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UplinkTxSwitching_r16_Tag;

struct SetupRelease_UplinkTxSwitching_r16 {
    SetupRelease_UplinkTxSwitching_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UplinkTxSwitching_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UplinkConfig_ExtGroup2
 * @note ASN.1：UplinkConfig_ExtGroup2；源文件第 12521 行。
 */
struct UplinkConfig_ExtGroup2 {
    bool has_enablePL_RS_UpdateForPUSCH_SRS_r16; /**< enablePL-RS-UpdateForPUSCH-SRS-r16 是否存在。 */
    UplinkConfig_ExtGroup2_EnablePL_RS_UpdateForPUSCH_SRS_r16 enablePL_RS_UpdateForPUSCH_SRS_r16; /**< ASN.1 enablePL-RS-UpdateForPUSCH-SRS-r16；枚举；OPTIONAL。 */
    bool has_enableDefaultBeamPL_ForPUSCH0_0_r16; /**< enableDefaultBeamPL-ForPUSCH0-0-r16 是否存在。 */
    UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUSCH0_0_r16 enableDefaultBeamPL_ForPUSCH0_0_r16; /**< ASN.1 enableDefaultBeamPL-ForPUSCH0-0-r16；枚举；OPTIONAL。 */
    bool has_enableDefaultBeamPL_ForPUCCH_r16; /**< enableDefaultBeamPL-ForPUCCH-r16 是否存在。 */
    UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUCCH_r16 enableDefaultBeamPL_ForPUCCH_r16; /**< ASN.1 enableDefaultBeamPL-ForPUCCH-r16；枚举；OPTIONAL。 */
    bool has_enableDefaultBeamPL_ForSRS_r16; /**< enableDefaultBeamPL-ForSRS-r16 是否存在。 */
    UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForSRS_r16 enableDefaultBeamPL_ForSRS_r16; /**< ASN.1 enableDefaultBeamPL-ForSRS-r16；枚举；OPTIONAL。 */
    bool has_uplinkTxSwitching_r16; /**< uplinkTxSwitching-r16 是否存在。 */
    SetupRelease_UplinkTxSwitching_r16 uplinkTxSwitching_r16; /**< ASN.1 uplinkTxSwitching-r16；结构体；OPTIONAL。 */
    bool has_mpr_PowerBoost_FR2_r16; /**< mpr-PowerBoost-FR2-r16 是否存在。 */
    UplinkConfig_ExtGroup2_Mpr_PowerBoost_FR2_r16 mpr_PowerBoost_FR2_r16; /**< ASN.1 mpr-PowerBoost-FR2-r16；枚举；OPTIONAL。 */
};


/**
 * @brief UplinkConfig_ExtGroup3
 * @note ASN.1：UplinkConfig_ExtGroup3；源文件第 12529 行。
 */
struct UplinkConfig_ExtGroup3 {
    bool has_srs_PosTx_Hopping_r18; /**< srs-PosTx-Hopping-r18 是否存在。 */
    SetupRelease_SRS_PosTx_Hopping_r18 srs_PosTx_Hopping_r18; /**< ASN.1 srs-PosTx-Hopping-r18；结构体；OPTIONAL。 */
    bool has_enablePL_RS_UpdateForType1CG_PUSCH_r18; /**< enablePL-RS-UpdateForType1CG-PUSCH-r18 是否存在。 */
    UplinkConfig_ExtGroup3_EnablePL_RS_UpdateForType1CG_PUSCH_r18 enablePL_RS_UpdateForType1CG_PUSCH_r18; /**< ASN.1 enablePL-RS-UpdateForType1CG-PUSCH-r18；枚举；OPTIONAL。 */
    bool has_powerBoostPi2BPSK_r18; /**< powerBoostPi2BPSK-r18 是否存在。 */
    bool powerBoostPi2BPSK_r18; /**< ASN.1 powerBoostPi2BPSK-r18；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_powerBoostQPSK_r18; /**< powerBoostQPSK-r18 是否存在。 */
    bool powerBoostQPSK_r18; /**< ASN.1 powerBoostQPSK-r18；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief PUSCH_ServingCellConfig_ExtGroup1
 * @note ASN.1：PUSCH_ServingCellConfig_ExtGroup1；源文件第 10572 行。
 */
struct PUSCH_ServingCellConfig_ExtGroup1 {
    bool has_maxMIMO_Layers; /**< maxMIMO-Layers 是否存在。 */
    int64_t maxMIMO_Layers; /**< ASN.1 maxMIMO-Layers；INTEGER (1..4)，位宽 2 bit；OPTIONAL。 */
    bool has_processingType2Enabled; /**< processingType2Enabled 是否存在。 */
    bool processingType2Enabled; /**< ASN.1 processingType2Enabled；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief SetupRelease_MaxMIMO_LayersDCI_0_2_r16
 * @note ASN.1：SetupRelease<MaxMIMO-LayersDCI-0-2-r16>；源文件第 10577 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag {
    SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag;

struct SetupRelease_MaxMIMO_LayersDCI_0_2_r16 {
    SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MaxMIMO_LayersDCI_0_2_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_ServingCellConfig_ExtGroup2
 * @note ASN.1：PUSCH_ServingCellConfig_ExtGroup2；源文件第 10576 行。
 */
struct PUSCH_ServingCellConfig_ExtGroup2 {
    bool has_maxMIMO_LayersDCI_0_2_r16; /**< maxMIMO-LayersDCI-0-2-r16 是否存在。 */
    SetupRelease_MaxMIMO_LayersDCI_0_2_r16 maxMIMO_LayersDCI_0_2_r16; /**< ASN.1 maxMIMO-LayersDCI-0-2-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_UplinkHARQ_mode_r17
 * @note ASN.1：SetupRelease<UplinkHARQ-mode-r17>；源文件第 10581 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_UplinkHARQ_mode_r17_Tag {
    SetupRelease_UplinkHARQ_mode_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_UplinkHARQ_mode_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_UplinkHARQ_mode_r17_Tag;

struct SetupRelease_UplinkHARQ_mode_r17 {
    SetupRelease_UplinkHARQ_mode_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        UplinkHARQ_mode_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_ServingCellConfig_ExtGroup3
 * @note ASN.1：PUSCH_ServingCellConfig_ExtGroup3；源文件第 10579 行。
 */
struct PUSCH_ServingCellConfig_ExtGroup3 {
    bool has_nrofHARQ_ProcessesForPUSCH_r17; /**< nrofHARQ-ProcessesForPUSCH-r17 是否存在。 */
    PUSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPUSCH_r17 nrofHARQ_ProcessesForPUSCH_r17; /**< ASN.1 nrofHARQ-ProcessesForPUSCH-r17；枚举；OPTIONAL。 */
    bool has_uplinkHARQ_mode_r17; /**< uplinkHARQ-mode-r17 是否存在。 */
    SetupRelease_UplinkHARQ_mode_r17 uplinkHARQ_mode_r17; /**< ASN.1 uplinkHARQ-mode-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PUSCH_ServingCellConfig_ExtGroup4
 * @note ASN.1：PUSCH_ServingCellConfig_ExtGroup4；源文件第 10583 行。
 */
struct PUSCH_ServingCellConfig_ExtGroup4 {
    bool has_maxMIMO_Layers_v1810; /**< maxMIMO-Layers-v1810 是否存在。 */
    int64_t maxMIMO_Layers_v1810; /**< ASN.1 maxMIMO-Layers-v1810；INTEGER (5..8)，位宽 2 bit；OPTIONAL。 */
    bool has_maxMIMO_LayersforSDM_r18; /**< maxMIMO-LayersforSDM-r18 是否存在。 */
    int64_t maxMIMO_LayersforSDM_r18; /**< ASN.1 maxMIMO-LayersforSDM-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_maxMIMO_LayersforSDM_DCI_0_2_r18; /**< maxMIMO-LayersforSDM-DCI-0-2-r18 是否存在。 */
    int64_t maxMIMO_LayersforSDM_DCI_0_2_r18; /**< ASN.1 maxMIMO-LayersforSDM-DCI-0-2-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_maxMIMO_LayersforSFN_r18; /**< maxMIMO-LayersforSFN-r18 是否存在。 */
    int64_t maxMIMO_LayersforSFN_r18; /**< ASN.1 maxMIMO-LayersforSFN-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
    bool has_maxMIMO_LayersforSFN_DCI_0_2_r18; /**< maxMIMO-LayersforSFN-DCI-0-2-r18 是否存在。 */
    int64_t maxMIMO_LayersforSFN_DCI_0_2_r18; /**< ASN.1 maxMIMO-LayersforSFN-DCI-0-2-r18；INTEGER (1..2)，位宽 1 bit；OPTIONAL。 */
};


/**
 * @brief PUSCH_CodeBlockGroupTransmission
 * @note ASN.1：PUSCH-CodeBlockGroupTransmission；源文件第 10592 行。
 * @note PUSCH-CodeBlockGroupTransmission ::= SEQUENCE { maxCodeBlockGroupsPerTransportBlock }
 */
struct PUSCH_CodeBlockGroupTransmission {
    PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock maxCodeBlockGroupsPerTransportBlock; /**< ASN.1 maxCodeBlockGroupsPerTransportBlock；枚举。 */
};


/**
 * @brief SetupRelease_PUSCH_CodeBlockGroupTransmission
 * @note ASN.1：SetupRelease<PUSCH-CodeBlockGroupTransmission>；源文件第 10568 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag {
    SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag;

struct SetupRelease_PUSCH_CodeBlockGroupTransmission {
    SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_CodeBlockGroupTransmission setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PUSCH_ServingCellConfig
 * @note ASN.1：PUSCH-ServingCellConfig；源文件第 10567 行。
 * @note PUSCH-ServingCellConfig ::= SEQUENCE { codeBlockGroupTransmission, rateMatching, xOverhead, maxMIMO-Layer...
 */
struct PUSCH_ServingCellConfig {
    bool has_codeBlockGroupTransmission; /**< codeBlockGroupTransmission 是否存在。 */
    SetupRelease_PUSCH_CodeBlockGroupTransmission codeBlockGroupTransmission; /**< ASN.1 codeBlockGroupTransmission；结构体；OPTIONAL。 */
    bool has_rateMatching; /**< rateMatching 是否存在。 */
    PUSCH_ServingCellConfig_RateMatching rateMatching; /**< ASN.1 rateMatching；枚举；OPTIONAL。 */
    bool has_xOverhead; /**< xOverhead 是否存在。 */
    PUSCH_ServingCellConfig_XOverhead xOverhead; /**< ASN.1 xOverhead；枚举；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PUSCH_ServingCellConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PUSCH_ServingCellConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PUSCH_ServingCellConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    PUSCH_ServingCellConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PUSCH_ServingCellConfig
 * @note ASN.1：SetupRelease<PUSCH-ServingCellConfig>；源文件第 12514 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PUSCH_ServingCellConfig_Tag {
    SetupRelease_PUSCH_ServingCellConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PUSCH_ServingCellConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PUSCH_ServingCellConfig_Tag;

struct SetupRelease_PUSCH_ServingCellConfig {
    SetupRelease_PUSCH_ServingCellConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PUSCH_ServingCellConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SRS_TPC_PDCCH_Config
 * @note ASN.1：SRS-TPC-PDCCH-Config；源文件第 13045 行。
 * @note SRS-TPC-PDCCH-Config ::= SEQUENCE { srs-CC-SetIndexlist }
 */
struct SRS_TPC_PDCCH_Config {
    bool has_srs_CC_SetIndexlist; /**< srs-CC-SetIndexlist 是否存在。 */
    SRS_CC_SetIndex* srs_CC_SetIndexlist_items; /**< ASN.1 srs-CC-SetIndexlist；SEQUENCE OF SRS_CC_SetIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t srs_CC_SetIndexlist_count; /**< srs-CC-SetIndexlist 元素个数。 */
};


/**
 * @brief SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA
 * @note ASN.1：srs-TPC-PDCCH-Group/typeA；源文件第 13038 行。
 * @note SEQUENCE OF (size 1..32) OF SRS-TPC-PDCCH-Config
 */
struct SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA {
    SRS_TPC_PDCCH_Config* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SRS_CarrierSwitching_Srs_TPC_PDCCH_Group
 * @note ASN.1：srs-TPC-PDCCH-Group；源文件第 13037 行。
 * @note CHOICE { typeA, typeB }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag {
    SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeA = 0, /**< ASN.1 typeA */
    SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeB = 1, /**< ASN.1 typeB */
} SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag;

struct SRS_CarrierSwitching_Srs_TPC_PDCCH_Group {
    SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA typeA; /**< ASN.1 typeA */
        SRS_TPC_PDCCH_Config typeB; /**< ASN.1 typeB */
    } u;
};


/**
 * @brief SRS_CarrierSwitching
 * @note ASN.1：SRS-CarrierSwitching；源文件第 13034 行。
 * @note SRS-CarrierSwitching ::= SEQUENCE { srs-SwitchFromServCellIndex, srs-SwitchFromCarrier, srs-TPC-PDCCH-...
 */
struct SRS_CarrierSwitching {
    bool has_srs_SwitchFromServCellIndex; /**< srs-SwitchFromServCellIndex 是否存在。 */
    int64_t srs_SwitchFromServCellIndex; /**< ASN.1 srs-SwitchFromServCellIndex；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    SRS_CarrierSwitching_Srs_SwitchFromCarrier srs_SwitchFromCarrier; /**< ASN.1 srs-SwitchFromCarrier；枚举。 */
    bool has_srs_TPC_PDCCH_Group; /**< srs-TPC-PDCCH-Group 是否存在。 */
    SRS_CarrierSwitching_Srs_TPC_PDCCH_Group srs_TPC_PDCCH_Group; /**< ASN.1 srs-TPC-PDCCH-Group；结构体；OPTIONAL。 */
    bool has_monitoringCells; /**< monitoringCells 是否存在。 */
    ServCellIndex* monitoringCells_items; /**< ASN.1 monitoringCells；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t monitoringCells_count; /**< monitoringCells 元素个数。 */
};


/**
 * @brief SetupRelease_SRS_CarrierSwitching
 * @note ASN.1：SetupRelease<SRS-CarrierSwitching>；源文件第 12515 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SRS_CarrierSwitching_Tag {
    SetupRelease_SRS_CarrierSwitching_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SRS_CarrierSwitching_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SRS_CarrierSwitching_Tag;

struct SetupRelease_SRS_CarrierSwitching {
    SetupRelease_SRS_CarrierSwitching_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SRS_CarrierSwitching setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief UplinkConfig
 * @note ASN.1：UplinkConfig；源文件第 12509 行。
 * @note UplinkConfig ::= SEQUENCE { initialUplinkBWP, uplinkBWP-ToReleaseList, uplinkBWP-ToAddModList,...
 */
struct UplinkConfig {
    bool has_initialUplinkBWP; /**< initialUplinkBWP 是否存在。 */
    BWP_UplinkDedicated initialUplinkBWP; /**< ASN.1 initialUplinkBWP；结构体；OPTIONAL。 */
    bool has_uplinkBWP_ToReleaseList; /**< uplinkBWP-ToReleaseList 是否存在。 */
    BWP_Id* uplinkBWP_ToReleaseList_items; /**< ASN.1 uplinkBWP-ToReleaseList；SEQUENCE OF BWP_Id，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkBWP_ToReleaseList_count; /**< uplinkBWP-ToReleaseList 元素个数。 */
    bool has_uplinkBWP_ToAddModList; /**< uplinkBWP-ToAddModList 是否存在。 */
    BWP_Uplink* uplinkBWP_ToAddModList_items; /**< ASN.1 uplinkBWP-ToAddModList；SEQUENCE OF BWP_Uplink，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t uplinkBWP_ToAddModList_count; /**< uplinkBWP-ToAddModList 元素个数。 */
    bool has_firstActiveUplinkBWP_Id; /**< firstActiveUplinkBWP-Id 是否存在。 */
    BWP_Id firstActiveUplinkBWP_Id; /**< ASN.1 firstActiveUplinkBWP-Id；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_pusch_ServingCellConfig; /**< pusch-ServingCellConfig 是否存在。 */
    SetupRelease_PUSCH_ServingCellConfig pusch_ServingCellConfig; /**< ASN.1 pusch-ServingCellConfig；结构体；OPTIONAL。 */
    bool has_carrierSwitching; /**< carrierSwitching 是否存在。 */
    SetupRelease_SRS_CarrierSwitching carrierSwitching; /**< ASN.1 carrierSwitching；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    UplinkConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    UplinkConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    UplinkConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief TDD_UL_DL_ConfigDedicated
 * @note ASN.1：TDD-UL-DL-ConfigDedicated；源文件第 13749 行。
 * @note TDD-UL-DL-ConfigDedicated ::= SEQUENCE { slotSpecificConfigurationsToAddModList, slotSpecificConfigurations...
 */
struct TDD_UL_DL_ConfigDedicated {
    bool has_slotSpecificConfigurationsToAddModList; /**< slotSpecificConfigurationsToAddModList 是否存在。 */
    TDD_UL_DL_SlotConfig* slotSpecificConfigurationsToAddModList_items; /**< ASN.1 slotSpecificConfigurationsToAddModList；SEQUENCE OF TDD_UL_DL_SlotConfig，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotSpecificConfigurationsToAddModList_count; /**< slotSpecificConfigurationsToAddModList 元素个数。 */
    bool has_slotSpecificConfigurationsToReleaseList; /**< slotSpecificConfigurationsToReleaseList 是否存在。 */
    TDD_UL_DL_SlotIndex* slotSpecificConfigurationsToReleaseList_items; /**< ASN.1 slotSpecificConfigurationsToReleaseList；SEQUENCE OF TDD_UL_DL_SlotIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotSpecificConfigurationsToReleaseList_count; /**< slotSpecificConfigurationsToReleaseList 元素个数。 */
};


/**
 * @brief SetupRelease_AvailabilityIndicator_r16
 * @note ASN.1：SetupRelease<AvailabilityIndicator-r16>；源文件第 9270 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_AvailabilityIndicator_r16_Tag {
    SetupRelease_AvailabilityIndicator_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_AvailabilityIndicator_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_AvailabilityIndicator_r16_Tag;

struct SetupRelease_AvailabilityIndicator_r16 {
    SetupRelease_AvailabilityIndicator_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        AvailabilityIndicator_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCCH_ServingCellConfig_ExtGroup1
 * @note ASN.1：PDCCH_ServingCellConfig_ExtGroup1；源文件第 9269 行。
 */
struct PDCCH_ServingCellConfig_ExtGroup1 {
    bool has_availabilityIndicator_r16; /**< availabilityIndicator-r16 是否存在。 */
    SetupRelease_AvailabilityIndicator_r16 availabilityIndicator_r16; /**< ASN.1 availabilityIndicator-r16；结构体；OPTIONAL。 */
    bool has_searchSpaceSwitchTimer_r16; /**< searchSpaceSwitchTimer-r16 是否存在。 */
    int64_t searchSpaceSwitchTimer_r16; /**< ASN.1 searchSpaceSwitchTimer-r16；INTEGER (1..80)，位宽 7 bit；OPTIONAL。 */
};


/**
 * @brief PDCCH_ServingCellConfig_ExtGroup2
 * @note ASN.1：PDCCH_ServingCellConfig_ExtGroup2；源文件第 9273 行。
 */
struct PDCCH_ServingCellConfig_ExtGroup2 {
    bool has_searchSpaceSwitchTimer_v1710; /**< searchSpaceSwitchTimer-v1710 是否存在。 */
    int64_t searchSpaceSwitchTimer_v1710; /**< ASN.1 searchSpaceSwitchTimer-v1710；INTEGER (81..1280)，位宽 11 bit；OPTIONAL。 */
};


/**
 * @brief SlotFormatIndicator_ExtGroup1
 * @note ASN.1：SlotFormatIndicator_ExtGroup1；源文件第 12916 行。
 */
struct SlotFormatIndicator_ExtGroup1 {
    bool has_availableRB_SetsToAddModList_r16; /**< availableRB-SetsToAddModList-r16 是否存在。 */
    AvailableRB_SetsPerCell_r16* availableRB_SetsToAddModList_r16_items; /**< ASN.1 availableRB-SetsToAddModList-r16；SEQUENCE OF AvailableRB_SetsPerCell_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t availableRB_SetsToAddModList_r16_count; /**< availableRB-SetsToAddModList-r16 元素个数。 */
    bool has_availableRB_SetsToReleaseList_r16; /**< availableRB-SetsToReleaseList-r16 是否存在。 */
    ServCellIndex* availableRB_SetsToReleaseList_r16_items; /**< ASN.1 availableRB-SetsToReleaseList-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t availableRB_SetsToReleaseList_r16_count; /**< availableRB-SetsToReleaseList-r16 元素个数。 */
    bool has_switchTriggerToAddModList_r16; /**< switchTriggerToAddModList-r16 是否存在。 */
    SearchSpaceSwitchTrigger_r16* switchTriggerToAddModList_r16_items; /**< ASN.1 switchTriggerToAddModList-r16；SEQUENCE OF SearchSpaceSwitchTrigger_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t switchTriggerToAddModList_r16_count; /**< switchTriggerToAddModList-r16 元素个数。 */
    bool has_switchTriggerToReleaseList_r16; /**< switchTriggerToReleaseList-r16 是否存在。 */
    ServCellIndex* switchTriggerToReleaseList_r16_items; /**< ASN.1 switchTriggerToReleaseList-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t switchTriggerToReleaseList_r16_count; /**< switchTriggerToReleaseList-r16 元素个数。 */
    bool has_co_DurationsPerCellToAddModList_r16; /**< co-DurationsPerCellToAddModList-r16 是否存在。 */
    CO_DurationsPerCell_r16* co_DurationsPerCellToAddModList_r16_items; /**< ASN.1 co-DurationsPerCellToAddModList-r16；SEQUENCE OF CO_DurationsPerCell_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t co_DurationsPerCellToAddModList_r16_count; /**< co-DurationsPerCellToAddModList-r16 元素个数。 */
    bool has_co_DurationsPerCellToReleaseList_r16; /**< co-DurationsPerCellToReleaseList-r16 是否存在。 */
    ServCellIndex* co_DurationsPerCellToReleaseList_r16_items; /**< ASN.1 co-DurationsPerCellToReleaseList-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t co_DurationsPerCellToReleaseList_r16_count; /**< co-DurationsPerCellToReleaseList-r16 元素个数。 */
};


/**
 * @brief SlotFormatIndicator_ExtGroup2
 * @note ASN.1：SlotFormatIndicator_ExtGroup2；源文件第 12924 行。
 */
struct SlotFormatIndicator_ExtGroup2 {
    bool has_switchTriggerToAddModListSizeExt_r16; /**< switchTriggerToAddModListSizeExt-r16 是否存在。 */
    SearchSpaceSwitchTrigger_r16* switchTriggerToAddModListSizeExt_r16_items; /**< ASN.1 switchTriggerToAddModListSizeExt-r16；SEQUENCE OF SearchSpaceSwitchTrigger_r16，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t switchTriggerToAddModListSizeExt_r16_count; /**< switchTriggerToAddModListSizeExt-r16 元素个数。 */
    bool has_switchTriggerToReleaseListSizeExt_r16; /**< switchTriggerToReleaseListSizeExt-r16 是否存在。 */
    ServCellIndex* switchTriggerToReleaseListSizeExt_r16_items; /**< ASN.1 switchTriggerToReleaseListSizeExt-r16；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t switchTriggerToReleaseListSizeExt_r16_count; /**< switchTriggerToReleaseListSizeExt-r16 元素个数。 */
};


/**
 * @brief SlotFormatIndicator_ExtGroup3
 * @note ASN.1：SlotFormatIndicator_ExtGroup3；源文件第 12930 行。
 */
struct SlotFormatIndicator_ExtGroup3 {
    bool has_co_DurationsPerCellToAddModList_r17; /**< co-DurationsPerCellToAddModList-r17 是否存在。 */
    CO_DurationsPerCell_r17* co_DurationsPerCellToAddModList_r17_items; /**< ASN.1 co-DurationsPerCellToAddModList-r17；SEQUENCE OF CO_DurationsPerCell_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t co_DurationsPerCellToAddModList_r17_count; /**< co-DurationsPerCellToAddModList-r17 元素个数。 */
};


/**
 * @brief SlotFormatIndicator
 * @note ASN.1：SlotFormatIndicator；源文件第 12909 行。
 * @note SlotFormatIndicator ::= SEQUENCE { sfi-RNTI, dci-PayloadSize, slotFormatCombToAddModList, slotFormatC...
 */
struct SlotFormatIndicator {
    RNTI_Value sfi_RNTI; /**< ASN.1 sfi-RNTI；INTEGER (0..65535)，位宽 16 bit。 */
    int64_t dci_PayloadSize; /**< ASN.1 dci-PayloadSize；INTEGER (1..128)，位宽 7 bit。 */
    bool has_slotFormatCombToAddModList; /**< slotFormatCombToAddModList 是否存在。 */
    SlotFormatCombinationsPerCell* slotFormatCombToAddModList_items; /**< ASN.1 slotFormatCombToAddModList；SEQUENCE OF SlotFormatCombinationsPerCell，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotFormatCombToAddModList_count; /**< slotFormatCombToAddModList 元素个数。 */
    bool has_slotFormatCombToReleaseList; /**< slotFormatCombToReleaseList 是否存在。 */
    ServCellIndex* slotFormatCombToReleaseList_items; /**< ASN.1 slotFormatCombToReleaseList；SEQUENCE OF ServCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t slotFormatCombToReleaseList_count; /**< slotFormatCombToReleaseList 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SlotFormatIndicator_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    SlotFormatIndicator_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    SlotFormatIndicator_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_SlotFormatIndicator
 * @note ASN.1：SetupRelease<SlotFormatIndicator>；源文件第 9267 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_SlotFormatIndicator_Tag {
    SetupRelease_SlotFormatIndicator_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_SlotFormatIndicator_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_SlotFormatIndicator_Tag;

struct SetupRelease_SlotFormatIndicator {
    SetupRelease_SlotFormatIndicator_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        SlotFormatIndicator setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCCH_ServingCellConfig
 * @note ASN.1：PDCCH-ServingCellConfig；源文件第 9266 行。
 * @note PDCCH-ServingCellConfig ::= SEQUENCE { slotFormatIndicator, availabilityIndicator-r16, searchSpaceSwitchT...
 */
struct PDCCH_ServingCellConfig {
    bool has_slotFormatIndicator; /**< slotFormatIndicator 是否存在。 */
    SetupRelease_SlotFormatIndicator slotFormatIndicator; /**< ASN.1 slotFormatIndicator；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDCCH_ServingCellConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDCCH_ServingCellConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PDCCH_ServingCellConfig
 * @note ASN.1：SetupRelease<PDCCH-ServingCellConfig>；源文件第 12424 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_ServingCellConfig_Tag {
    SetupRelease_PDCCH_ServingCellConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_ServingCellConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_ServingCellConfig_Tag;

struct SetupRelease_PDCCH_ServingCellConfig {
    SetupRelease_PDCCH_ServingCellConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_ServingCellConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_ServingCellConfig_ExtGroup1
 * @note ASN.1：PDSCH_ServingCellConfig_ExtGroup1；源文件第 9563 行。
 */
struct PDSCH_ServingCellConfig_ExtGroup1 {
    bool has_maxMIMO_Layers; /**< maxMIMO-Layers 是否存在。 */
    int64_t maxMIMO_Layers; /**< ASN.1 maxMIMO-Layers；INTEGER (1..8)，位宽 3 bit；OPTIONAL。 */
    bool has_processingType2Enabled; /**< processingType2Enabled 是否存在。 */
    bool processingType2Enabled; /**< ASN.1 processingType2Enabled；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief PDSCH_CodeBlockGroupTransmissionList_r16
 * @note ASN.1：PDSCH-CodeBlockGroupTransmissionList-r16；源文件第 9582 行。
 * @note PDSCH-CodeBlockGroupTransmissionList-r16 ::= SEQUENCE OF (size 1..2) OF PDSCH-CodeBlockGroupTransmission
 */
struct PDSCH_CodeBlockGroupTransmissionList_r16 {
    PDSCH_CodeBlockGroupTransmission* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16
 * @note ASN.1：SetupRelease<PDSCH-CodeBlockGroupTransmissionList-r16>；源文件第 9568 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag {
    SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag;

struct SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16 {
    SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_CodeBlockGroupTransmissionList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_ServingCellConfig_ExtGroup2
 * @note ASN.1：PDSCH_ServingCellConfig_ExtGroup2；源文件第 9567 行。
 */
struct PDSCH_ServingCellConfig_ExtGroup2 {
    bool has_pdsch_CodeBlockGroupTransmissionList_r16; /**< pdsch-CodeBlockGroupTransmissionList-r16 是否存在。 */
    SetupRelease_PDSCH_CodeBlockGroupTransmissionList_r16 pdsch_CodeBlockGroupTransmissionList_r16; /**< ASN.1 pdsch-CodeBlockGroupTransmissionList-r16；结构体；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DownlinkHARQ_FeedbackDisabled_r17
 * @note ASN.1：SetupRelease<DownlinkHARQ-FeedbackDisabled-r17>；源文件第 9571 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag {
    SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag;

struct SetupRelease_DownlinkHARQ_FeedbackDisabled_r17 {
    SetupRelease_DownlinkHARQ_FeedbackDisabled_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DownlinkHARQ_FeedbackDisabled_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_ServingCellConfig_ExtGroup3
 * @note ASN.1：PDSCH_ServingCellConfig_ExtGroup3；源文件第 9570 行。
 */
struct PDSCH_ServingCellConfig_ExtGroup3 {
    bool has_downlinkHARQ_FeedbackDisabled_r17; /**< downlinkHARQ-FeedbackDisabled-r17 是否存在。 */
    SetupRelease_DownlinkHARQ_FeedbackDisabled_r17 downlinkHARQ_FeedbackDisabled_r17; /**< ASN.1 downlinkHARQ-FeedbackDisabled-r17；结构体；OPTIONAL。 */
    bool has_nrofHARQ_ProcessesForPDSCH_v1700; /**< nrofHARQ-ProcessesForPDSCH-v1700 是否存在。 */
    PDSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPDSCH_v1700 nrofHARQ_ProcessesForPDSCH_v1700; /**< ASN.1 nrofHARQ-ProcessesForPDSCH-v1700；枚举；OPTIONAL。 */
};


/**
 * @brief PDSCH_CodeBlockGroupTransmission
 * @note ASN.1：PDSCH-CodeBlockGroupTransmission；源文件第 9576 行。
 * @note PDSCH-CodeBlockGroupTransmission ::= SEQUENCE { maxCodeBlockGroupsPerTransportBlock, codeBlockGroupFlushIndicator }
 */
struct PDSCH_CodeBlockGroupTransmission {
    PDSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock maxCodeBlockGroupsPerTransportBlock; /**< ASN.1 maxCodeBlockGroupsPerTransportBlock；枚举。 */
    bool codeBlockGroupFlushIndicator; /**< ASN.1 codeBlockGroupFlushIndicator；BOOLEAN，1 bit。 */
};


/**
 * @brief SetupRelease_PDSCH_CodeBlockGroupTransmission
 * @note ASN.1：SetupRelease<PDSCH-CodeBlockGroupTransmission>；源文件第 9558 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag {
    SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag;

struct SetupRelease_PDSCH_CodeBlockGroupTransmission {
    SetupRelease_PDSCH_CodeBlockGroupTransmission_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_CodeBlockGroupTransmission setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_ServingCellConfig
 * @note ASN.1：PDSCH-ServingCellConfig；源文件第 9557 行。
 * @note PDSCH-ServingCellConfig ::= SEQUENCE { codeBlockGroupTransmission, xOverhead, nrofHARQ-ProcessesForPDSCH,...
 */
struct PDSCH_ServingCellConfig {
    bool has_codeBlockGroupTransmission; /**< codeBlockGroupTransmission 是否存在。 */
    SetupRelease_PDSCH_CodeBlockGroupTransmission codeBlockGroupTransmission; /**< ASN.1 codeBlockGroupTransmission；结构体；OPTIONAL。 */
    bool has_xOverhead; /**< xOverhead 是否存在。 */
    PDSCH_ServingCellConfig_XOverhead xOverhead; /**< ASN.1 xOverhead；枚举；OPTIONAL。 */
    bool has_nrofHARQ_ProcessesForPDSCH; /**< nrofHARQ-ProcessesForPDSCH 是否存在。 */
    PDSCH_ServingCellConfig_NrofHARQ_ProcessesForPDSCH nrofHARQ_ProcessesForPDSCH; /**< ASN.1 nrofHARQ-ProcessesForPDSCH；枚举；OPTIONAL。 */
    bool has_pucch_Cell; /**< pucch-Cell 是否存在。 */
    ServCellIndex pucch_Cell; /**< ASN.1 pucch-Cell；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PDSCH_ServingCellConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PDSCH_ServingCellConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PDSCH_ServingCellConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PDSCH_ServingCellConfig
 * @note ASN.1：SetupRelease<PDSCH-ServingCellConfig>；源文件第 12425 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_ServingCellConfig_Tag {
    SetupRelease_PDSCH_ServingCellConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_ServingCellConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_ServingCellConfig_Tag;

struct SetupRelease_PDSCH_ServingCellConfig {
    SetupRelease_PDSCH_ServingCellConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_ServingCellConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief CSI_MeasConfig_ExtGroup1
 * @note ASN.1：CSI_MeasConfig_ExtGroup1；源文件第 5929 行。
 */
struct CSI_MeasConfig_ExtGroup1 {
    bool has_reportTriggerSizeDCI_0_2_r16; /**< reportTriggerSizeDCI-0-2-r16 是否存在。 */
    int64_t reportTriggerSizeDCI_0_2_r16; /**< ASN.1 reportTriggerSizeDCI-0-2-r16；INTEGER (0..6)，位宽 3 bit；OPTIONAL。 */
};


/**
 * @brief CSI_MeasConfig_ExtGroup2
 * @note ASN.1：CSI_MeasConfig_ExtGroup2；源文件第 5932 行。
 */
struct CSI_MeasConfig_ExtGroup2 {
    bool has_sCellActivationRS_ConfigToAddModList_r17; /**< sCellActivationRS-ConfigToAddModList-r17 是否存在。 */
    SCellActivationRS_Config_r17* sCellActivationRS_ConfigToAddModList_r17_items; /**< ASN.1 sCellActivationRS-ConfigToAddModList-r17；SEQUENCE OF SCellActivationRS_Config_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sCellActivationRS_ConfigToAddModList_r17_count; /**< sCellActivationRS-ConfigToAddModList-r17 元素个数。 */
    bool has_sCellActivationRS_ConfigToReleaseList_r17; /**< sCellActivationRS-ConfigToReleaseList-r17 是否存在。 */
    SCellActivationRS_ConfigId_r17* sCellActivationRS_ConfigToReleaseList_r17_items; /**< ASN.1 sCellActivationRS-ConfigToReleaseList-r17；SEQUENCE OF SCellActivationRS_ConfigId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sCellActivationRS_ConfigToReleaseList_r17_count; /**< sCellActivationRS-ConfigToReleaseList-r17 元素个数。 */
};


/**
 * @brief CSI_MeasConfig_ExtGroup3
 * @note ASN.1：CSI_MeasConfig_ExtGroup3；源文件第 5936 行。
 */
struct CSI_MeasConfig_ExtGroup3 {
    bool has_ltm_CSI_ReportConfigToAddModList_r18; /**< ltm-CSI-ReportConfigToAddModList-r18 是否存在。 */
    LTM_CSI_ReportConfig_r18* ltm_CSI_ReportConfigToAddModList_r18_items; /**< ASN.1 ltm-CSI-ReportConfigToAddModList-r18；SEQUENCE OF LTM_CSI_ReportConfig_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_CSI_ReportConfigToAddModList_r18_count; /**< ltm-CSI-ReportConfigToAddModList-r18 元素个数。 */
    bool has_ltm_CSI_ReportConfigToReleaseList_r18; /**< ltm-CSI-ReportConfigToReleaseList-r18 是否存在。 */
    LTM_CSI_ReportConfigId_r18* ltm_CSI_ReportConfigToReleaseList_r18_items; /**< ASN.1 ltm-CSI-ReportConfigToReleaseList-r18；SEQUENCE OF LTM_CSI_ReportConfigId_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t ltm_CSI_ReportConfigToReleaseList_r18_count; /**< ltm-CSI-ReportConfigToReleaseList-r18 元素个数。 */
};


/**
 * @brief CSI_AperiodicTriggerStateList
 * @note ASN.1：CSI-AperiodicTriggerStateList；源文件第 5801 行。
 * @note CSI-AperiodicTriggerStateList ::= SEQUENCE OF (size 1..128) OF CSI-AperiodicTriggerState
 */
struct CSI_AperiodicTriggerStateList {
    CSI_AperiodicTriggerState* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_CSI_AperiodicTriggerStateList
 * @note ASN.1：SetupRelease<CSI-AperiodicTriggerStateList>；源文件第 5926 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CSI_AperiodicTriggerStateList_Tag {
    SetupRelease_CSI_AperiodicTriggerStateList_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CSI_AperiodicTriggerStateList_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CSI_AperiodicTriggerStateList_Tag;

struct SetupRelease_CSI_AperiodicTriggerStateList {
    SetupRelease_CSI_AperiodicTriggerStateList_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CSI_AperiodicTriggerStateList setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief CSI_SemiPersistentOnPUSCH_TriggerStateList
 * @note ASN.1：CSI-SemiPersistentOnPUSCH-TriggerStateList；源文件第 6307 行。
 * @note CSI-SemiPersistentOnPUSCH-TriggerStateList ::= SEQUENCE OF (size 1..64) OF CSI-SemiPersistentOnPUSCH-TriggerState
 */
struct CSI_SemiPersistentOnPUSCH_TriggerStateList {
    CSI_SemiPersistentOnPUSCH_TriggerState* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList
 * @note ASN.1：SetupRelease<CSI-SemiPersistentOnPUSCH-TriggerStateList>；源文件第 5927 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag {
    SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag;

struct SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList {
    SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CSI_SemiPersistentOnPUSCH_TriggerStateList setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief CSI_MeasConfig
 * @note ASN.1：CSI-MeasConfig；源文件第 5905 行。
 * @note CSI-MeasConfig ::= SEQUENCE { nzp-CSI-RS-ResourceToAddModList, nzp-CSI-RS-ResourceToReleaseList,...
 */
struct CSI_MeasConfig {
    bool has_nzp_CSI_RS_ResourceToAddModList; /**< nzp-CSI-RS-ResourceToAddModList 是否存在。 */
    NZP_CSI_RS_Resource* nzp_CSI_RS_ResourceToAddModList_items; /**< ASN.1 nzp-CSI-RS-ResourceToAddModList；SEQUENCE OF NZP_CSI_RS_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_ResourceToAddModList_count; /**< nzp-CSI-RS-ResourceToAddModList 元素个数。 */
    bool has_nzp_CSI_RS_ResourceToReleaseList; /**< nzp-CSI-RS-ResourceToReleaseList 是否存在。 */
    NZP_CSI_RS_ResourceId* nzp_CSI_RS_ResourceToReleaseList_items; /**< ASN.1 nzp-CSI-RS-ResourceToReleaseList；SEQUENCE OF NZP_CSI_RS_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_ResourceToReleaseList_count; /**< nzp-CSI-RS-ResourceToReleaseList 元素个数。 */
    bool has_nzp_CSI_RS_ResourceSetToAddModList; /**< nzp-CSI-RS-ResourceSetToAddModList 是否存在。 */
    NZP_CSI_RS_ResourceSet* nzp_CSI_RS_ResourceSetToAddModList_items; /**< ASN.1 nzp-CSI-RS-ResourceSetToAddModList；SEQUENCE OF NZP_CSI_RS_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_ResourceSetToAddModList_count; /**< nzp-CSI-RS-ResourceSetToAddModList 元素个数。 */
    bool has_nzp_CSI_RS_ResourceSetToReleaseList; /**< nzp-CSI-RS-ResourceSetToReleaseList 是否存在。 */
    NZP_CSI_RS_ResourceSetId* nzp_CSI_RS_ResourceSetToReleaseList_items; /**< ASN.1 nzp-CSI-RS-ResourceSetToReleaseList；SEQUENCE OF NZP_CSI_RS_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t nzp_CSI_RS_ResourceSetToReleaseList_count; /**< nzp-CSI-RS-ResourceSetToReleaseList 元素个数。 */
    bool has_csi_IM_ResourceToAddModList; /**< csi-IM-ResourceToAddModList 是否存在。 */
    CSI_IM_Resource* csi_IM_ResourceToAddModList_items; /**< ASN.1 csi-IM-ResourceToAddModList；SEQUENCE OF CSI_IM_Resource，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_IM_ResourceToAddModList_count; /**< csi-IM-ResourceToAddModList 元素个数。 */
    bool has_csi_IM_ResourceToReleaseList; /**< csi-IM-ResourceToReleaseList 是否存在。 */
    CSI_IM_ResourceId* csi_IM_ResourceToReleaseList_items; /**< ASN.1 csi-IM-ResourceToReleaseList；SEQUENCE OF CSI_IM_ResourceId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_IM_ResourceToReleaseList_count; /**< csi-IM-ResourceToReleaseList 元素个数。 */
    bool has_csi_IM_ResourceSetToAddModList; /**< csi-IM-ResourceSetToAddModList 是否存在。 */
    CSI_IM_ResourceSet* csi_IM_ResourceSetToAddModList_items; /**< ASN.1 csi-IM-ResourceSetToAddModList；SEQUENCE OF CSI_IM_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_IM_ResourceSetToAddModList_count; /**< csi-IM-ResourceSetToAddModList 元素个数。 */
    bool has_csi_IM_ResourceSetToReleaseList; /**< csi-IM-ResourceSetToReleaseList 是否存在。 */
    CSI_IM_ResourceSetId* csi_IM_ResourceSetToReleaseList_items; /**< ASN.1 csi-IM-ResourceSetToReleaseList；SEQUENCE OF CSI_IM_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_IM_ResourceSetToReleaseList_count; /**< csi-IM-ResourceSetToReleaseList 元素个数。 */
    bool has_csi_SSB_ResourceSetToAddModList; /**< csi-SSB-ResourceSetToAddModList 是否存在。 */
    CSI_SSB_ResourceSet* csi_SSB_ResourceSetToAddModList_items; /**< ASN.1 csi-SSB-ResourceSetToAddModList；SEQUENCE OF CSI_SSB_ResourceSet，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_SSB_ResourceSetToAddModList_count; /**< csi-SSB-ResourceSetToAddModList 元素个数。 */
    bool has_csi_SSB_ResourceSetToReleaseList; /**< csi-SSB-ResourceSetToReleaseList 是否存在。 */
    CSI_SSB_ResourceSetId* csi_SSB_ResourceSetToReleaseList_items; /**< ASN.1 csi-SSB-ResourceSetToReleaseList；SEQUENCE OF CSI_SSB_ResourceSetId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_SSB_ResourceSetToReleaseList_count; /**< csi-SSB-ResourceSetToReleaseList 元素个数。 */
    bool has_csi_ResourceConfigToAddModList; /**< csi-ResourceConfigToAddModList 是否存在。 */
    CSI_ResourceConfig* csi_ResourceConfigToAddModList_items; /**< ASN.1 csi-ResourceConfigToAddModList；SEQUENCE OF CSI_ResourceConfig，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_ResourceConfigToAddModList_count; /**< csi-ResourceConfigToAddModList 元素个数。 */
    bool has_csi_ResourceConfigToReleaseList; /**< csi-ResourceConfigToReleaseList 是否存在。 */
    CSI_ResourceConfigId* csi_ResourceConfigToReleaseList_items; /**< ASN.1 csi-ResourceConfigToReleaseList；SEQUENCE OF CSI_ResourceConfigId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_ResourceConfigToReleaseList_count; /**< csi-ResourceConfigToReleaseList 元素个数。 */
    bool has_csi_ReportConfigToAddModList; /**< csi-ReportConfigToAddModList 是否存在。 */
    CSI_ReportConfig* csi_ReportConfigToAddModList_items; /**< ASN.1 csi-ReportConfigToAddModList；SEQUENCE OF CSI_ReportConfig，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_ReportConfigToAddModList_count; /**< csi-ReportConfigToAddModList 元素个数。 */
    bool has_csi_ReportConfigToReleaseList; /**< csi-ReportConfigToReleaseList 是否存在。 */
    CSI_ReportConfigId* csi_ReportConfigToReleaseList_items; /**< ASN.1 csi-ReportConfigToReleaseList；SEQUENCE OF CSI_ReportConfigId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t csi_ReportConfigToReleaseList_count; /**< csi-ReportConfigToReleaseList 元素个数。 */
    bool has_reportTriggerSize; /**< reportTriggerSize 是否存在。 */
    int64_t reportTriggerSize; /**< ASN.1 reportTriggerSize；INTEGER (0..6)，位宽 3 bit；OPTIONAL。 */
    bool has_aperiodicTriggerStateList; /**< aperiodicTriggerStateList 是否存在。 */
    SetupRelease_CSI_AperiodicTriggerStateList aperiodicTriggerStateList; /**< ASN.1 aperiodicTriggerStateList；结构体；OPTIONAL。 */
    bool has_semiPersistentOnPUSCH_TriggerStateList; /**< semiPersistentOnPUSCH-TriggerStateList 是否存在。 */
    SetupRelease_CSI_SemiPersistentOnPUSCH_TriggerStateList semiPersistentOnPUSCH_TriggerStateList; /**< ASN.1 semiPersistentOnPUSCH-TriggerStateList；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CSI_MeasConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CSI_MeasConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    CSI_MeasConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_CSI_MeasConfig
 * @note ASN.1：SetupRelease<CSI-MeasConfig>；源文件第 12426 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CSI_MeasConfig_Tag {
    SetupRelease_CSI_MeasConfig_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CSI_MeasConfig_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CSI_MeasConfig_Tag;

struct SetupRelease_CSI_MeasConfig {
    SetupRelease_CSI_MeasConfig_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CSI_MeasConfig setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief ServingCellConfig
 * @note ASN.1：ServingCellConfig；源文件第 12411 行。
 * @note ServingCellConfig ::= SEQUENCE { tdd-UL-DL-ConfigurationDedicated, initialDownlinkBWP, downlinkBWP-...
 */
struct ServingCellConfig {
    bool has_tdd_UL_DL_ConfigurationDedicated; /**< tdd-UL-DL-ConfigurationDedicated 是否存在。 */
    TDD_UL_DL_ConfigDedicated tdd_UL_DL_ConfigurationDedicated; /**< ASN.1 tdd-UL-DL-ConfigurationDedicated；结构体；OPTIONAL。 */
    bool has_initialDownlinkBWP; /**< initialDownlinkBWP 是否存在。 */
    BWP_DownlinkDedicated initialDownlinkBWP; /**< ASN.1 initialDownlinkBWP；结构体；OPTIONAL。 */
    bool has_downlinkBWP_ToReleaseList; /**< downlinkBWP-ToReleaseList 是否存在。 */
    BWP_Id* downlinkBWP_ToReleaseList_items; /**< ASN.1 downlinkBWP-ToReleaseList；SEQUENCE OF BWP_Id，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t downlinkBWP_ToReleaseList_count; /**< downlinkBWP-ToReleaseList 元素个数。 */
    bool has_downlinkBWP_ToAddModList; /**< downlinkBWP-ToAddModList 是否存在。 */
    BWP_Downlink* downlinkBWP_ToAddModList_items; /**< ASN.1 downlinkBWP-ToAddModList；SEQUENCE OF BWP_Downlink，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t downlinkBWP_ToAddModList_count; /**< downlinkBWP-ToAddModList 元素个数。 */
    bool has_firstActiveDownlinkBWP_Id; /**< firstActiveDownlinkBWP-Id 是否存在。 */
    BWP_Id firstActiveDownlinkBWP_Id; /**< ASN.1 firstActiveDownlinkBWP-Id；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_bwp_InactivityTimer; /**< bwp-InactivityTimer 是否存在。 */
    ServingCellConfig_Bwp_InactivityTimer bwp_InactivityTimer; /**< ASN.1 bwp-InactivityTimer；枚举；OPTIONAL。 */
    bool has_defaultDownlinkBWP_Id; /**< defaultDownlinkBWP-Id 是否存在。 */
    BWP_Id defaultDownlinkBWP_Id; /**< ASN.1 defaultDownlinkBWP-Id；INTEGER (0..4)，位宽 3 bit；OPTIONAL。 */
    bool has_uplinkConfig; /**< uplinkConfig 是否存在。 */
    UplinkConfig uplinkConfig; /**< ASN.1 uplinkConfig；结构体；OPTIONAL。 */
    bool has_supplementaryUplink; /**< supplementaryUplink 是否存在。 */
    UplinkConfig supplementaryUplink; /**< ASN.1 supplementaryUplink；结构体；OPTIONAL。 */
    bool has_pdcch_ServingCellConfig; /**< pdcch-ServingCellConfig 是否存在。 */
    SetupRelease_PDCCH_ServingCellConfig pdcch_ServingCellConfig; /**< ASN.1 pdcch-ServingCellConfig；结构体；OPTIONAL。 */
    bool has_pdsch_ServingCellConfig; /**< pdsch-ServingCellConfig 是否存在。 */
    SetupRelease_PDSCH_ServingCellConfig pdsch_ServingCellConfig; /**< ASN.1 pdsch-ServingCellConfig；结构体；OPTIONAL。 */
    bool has_csi_MeasConfig; /**< csi-MeasConfig 是否存在。 */
    SetupRelease_CSI_MeasConfig csi_MeasConfig; /**< ASN.1 csi-MeasConfig；结构体；OPTIONAL。 */
    bool has_sCellDeactivationTimer; /**< sCellDeactivationTimer 是否存在。 */
    ServingCellConfig_SCellDeactivationTimer sCellDeactivationTimer; /**< ASN.1 sCellDeactivationTimer；枚举；OPTIONAL。 */
    bool has_crossCarrierSchedulingConfig; /**< crossCarrierSchedulingConfig 是否存在。 */
    CrossCarrierSchedulingConfig crossCarrierSchedulingConfig; /**< ASN.1 crossCarrierSchedulingConfig；结构体；OPTIONAL。 */
    TAG_Id tag_Id; /**< ASN.1 tag-Id；INTEGER (0..3)，位宽 2 bit。 */
    bool has_dummy1; /**< dummy1 是否存在。 */
    ServingCellConfig_Dummy1 dummy1; /**< ASN.1 dummy1；枚举；OPTIONAL。 */
    bool has_pathlossReferenceLinking; /**< pathlossReferenceLinking 是否存在。 */
    ServingCellConfig_PathlossReferenceLinking pathlossReferenceLinking; /**< ASN.1 pathlossReferenceLinking；枚举；OPTIONAL。 */
    bool has_servingCellMO; /**< servingCellMO 是否存在。 */
    MeasObjectId servingCellMO; /**< ASN.1 servingCellMO；INTEGER (1..64)，位宽 6 bit；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    ServingCellConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    ServingCellConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    ServingCellConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    ServingCellConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    ServingCellConfig_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    ServingCellConfig_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    ServingCellConfig_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    ServingCellConfig_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief RLF_TimersAndConstants_ExtGroup1
 * @note ASN.1：RLF_TimersAndConstants_ExtGroup1；源文件第 12010 行。
 */
struct RLF_TimersAndConstants_ExtGroup1 {
    RLF_TimersAndConstants_ExtGroup1_T311 t311; /**< ASN.1 t311；枚举。 */
};


/**
 * @brief RLF_TimersAndConstants
 * @note ASN.1：RLF-TimersAndConstants；源文件第 12005 行。
 * @note RLF-TimersAndConstants ::= SEQUENCE { t310, n310, n311, t311 }
 */
struct RLF_TimersAndConstants {
    RLF_TimersAndConstants_T310 t310; /**< ASN.1 t310；枚举。 */
    RLF_TimersAndConstants_N310 n310; /**< ASN.1 n310；枚举。 */
    RLF_TimersAndConstants_N311 n311; /**< ASN.1 n311；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    RLF_TimersAndConstants_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_RLF_TimersAndConstants
 * @note ASN.1：SetupRelease<RLF-TimersAndConstants>；源文件第 4900 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RLF_TimersAndConstants_Tag {
    SetupRelease_RLF_TimersAndConstants_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RLF_TimersAndConstants_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RLF_TimersAndConstants_Tag;

struct SetupRelease_RLF_TimersAndConstants {
    SetupRelease_RLF_TimersAndConstants_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RLF_TimersAndConstants setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SpCellConfig
 * @note ASN.1：SpCellConfig；源文件第 4897 行。
 * @note SpCellConfig ::= SEQUENCE { servCellIndex, reconfigurationWithSync, rlf-TimersAndConstants, rl...
 */
struct SpCellConfig {
    bool has_servCellIndex; /**< servCellIndex 是否存在。 */
    ServCellIndex servCellIndex; /**< ASN.1 servCellIndex；INTEGER (0..31)，位宽 5 bit；OPTIONAL。 */
    bool has_reconfigurationWithSync; /**< reconfigurationWithSync 是否存在。 */
    ReconfigurationWithSync reconfigurationWithSync; /**< ASN.1 reconfigurationWithSync；结构体；OPTIONAL。 */
    bool has_rlf_TimersAndConstants; /**< rlf-TimersAndConstants 是否存在。 */
    SetupRelease_RLF_TimersAndConstants rlf_TimersAndConstants; /**< ASN.1 rlf-TimersAndConstants；结构体；OPTIONAL。 */
    bool has_rlmInSyncOutOfSyncThreshold; /**< rlmInSyncOutOfSyncThreshold 是否存在。 */
    SpCellConfig_RlmInSyncOutOfSyncThreshold rlmInSyncOutOfSyncThreshold; /**< ASN.1 rlmInSyncOutOfSyncThreshold；枚举；OPTIONAL。 */
    bool has_spCellConfigDedicated; /**< spCellConfigDedicated 是否存在。 */
    ServingCellConfig spCellConfigDedicated; /**< ASN.1 spCellConfigDedicated；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    SpCellConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_DataInactivityTimer
 * @note ASN.1：SetupRelease<DataInactivityTimer>；源文件第 7316 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DataInactivityTimer_Tag {
    SetupRelease_DataInactivityTimer_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DataInactivityTimer_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DataInactivityTimer_Tag;

struct SetupRelease_DataInactivityTimer {
    SetupRelease_DataInactivityTimer_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DataInactivityTimer setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup1
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup1；源文件第 7314 行。
 */
struct MAC_CellGroupConfig_ExtGroup1 {
    bool has_csi_Mask; /**< csi-Mask 是否存在。 */
    bool csi_Mask; /**< ASN.1 csi-Mask；BOOLEAN，1 bit；OPTIONAL。 */
    bool has_dataInactivityTimer; /**< dataInactivityTimer 是否存在。 */
    SetupRelease_DataInactivityTimer dataInactivityTimer; /**< ASN.1 dataInactivityTimer；结构体；OPTIONAL。 */
};


/**
 * @brief DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16
 * @note ASN.1：drx-onDurationTimer-r16；源文件第 6735 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag {
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag;

struct DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16 {
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief DRX_ConfigSecondaryGroup_r16
 * @note ASN.1：DRX-ConfigSecondaryGroup-r16；源文件第 6734 行。
 * @note DRX-ConfigSecondaryGroup-r16 ::= SEQUENCE { drx-onDurationTimer-r16, drx-InactivityTimer-r16 }
 */
struct DRX_ConfigSecondaryGroup_r16 {
    DRX_ConfigSecondaryGroup_r16_Drx_onDurationTimer_r16 drx_onDurationTimer_r16; /**< ASN.1 drx-onDurationTimer-r16；结构体。 */
    DRX_ConfigSecondaryGroup_r16_Drx_InactivityTimer_r16 drx_InactivityTimer_r16; /**< ASN.1 drx-InactivityTimer-r16；枚举。 */
};


/**
 * @brief SetupRelease_DRX_ConfigSecondaryGroup_r16
 * @note ASN.1：SetupRelease<DRX-ConfigSecondaryGroup-r16>；源文件第 7323 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag {
    SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag;

struct SetupRelease_DRX_ConfigSecondaryGroup_r16 {
    SetupRelease_DRX_ConfigSecondaryGroup_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_ConfigSecondaryGroup_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup2
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup2；源文件第 7318 行。
 */
struct MAC_CellGroupConfig_ExtGroup2 {
    bool has_usePreBSR_r16; /**< usePreBSR-r16 是否存在。 */
    MAC_CellGroupConfig_ExtGroup2_UsePreBSR_r16 usePreBSR_r16; /**< ASN.1 usePreBSR-r16；枚举；OPTIONAL。 */
    bool has_schedulingRequestID_LBT_SCell_r16; /**< schedulingRequestID-LBT-SCell-r16 是否存在。 */
    SchedulingRequestId schedulingRequestID_LBT_SCell_r16; /**< ASN.1 schedulingRequestID-LBT-SCell-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_lch_BasedPrioritization_r16; /**< lch-BasedPrioritization-r16 是否存在。 */
    MAC_CellGroupConfig_ExtGroup2_Lch_BasedPrioritization_r16 lch_BasedPrioritization_r16; /**< ASN.1 lch-BasedPrioritization-r16；枚举；OPTIONAL。 */
    bool has_schedulingRequestID_BFR_SCell_r16; /**< schedulingRequestID-BFR-SCell-r16 是否存在。 */
    SchedulingRequestId schedulingRequestID_BFR_SCell_r16; /**< ASN.1 schedulingRequestID-BFR-SCell-r16；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_drx_ConfigSecondaryGroup_r16; /**< drx-ConfigSecondaryGroup-r16 是否存在。 */
    SetupRelease_DRX_ConfigSecondaryGroup_r16 drx_ConfigSecondaryGroup_r16; /**< ASN.1 drx-ConfigSecondaryGroup-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup3
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup3；源文件第 7325 行。
 */
struct MAC_CellGroupConfig_ExtGroup3 {
    bool has_enhancedSkipUplinkTxDynamic_r16; /**< enhancedSkipUplinkTxDynamic-r16 是否存在。 */
    MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxDynamic_r16 enhancedSkipUplinkTxDynamic_r16; /**< ASN.1 enhancedSkipUplinkTxDynamic-r16；枚举；OPTIONAL。 */
    bool has_enhancedSkipUplinkTxConfigured_r16; /**< enhancedSkipUplinkTxConfigured-r16 是否存在。 */
    MAC_CellGroupConfig_ExtGroup3_EnhancedSkipUplinkTxConfigured_r16 enhancedSkipUplinkTxConfigured_r16; /**< ASN.1 enhancedSkipUplinkTxConfigured-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SchedulingRequestConfig_v1700
 * @note ASN.1：SchedulingRequestConfig-v1700；源文件第 12080 行。
 * @note SchedulingRequestConfig-v1700 ::= SEQUENCE { schedulingRequestToAddModListExt-v1700 }
 */
struct SchedulingRequestConfig_v1700 {
    bool has_schedulingRequestToAddModListExt_v1700; /**< schedulingRequestToAddModListExt-v1700 是否存在。 */
    SchedulingRequestToAddModExt_v1700* schedulingRequestToAddModListExt_v1700_items; /**< ASN.1 schedulingRequestToAddModListExt-v1700；SEQUENCE OF SchedulingRequestToAddModExt_v1700，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestToAddModListExt_v1700_count; /**< schedulingRequestToAddModListExt-v1700 元素个数。 */
};


/**
 * @brief DRX_ConfigSL_r17
 * @note ASN.1：DRX-ConfigSL-r17；源文件第 6751 行。
 * @note DRX-ConfigSL-r17 ::= SEQUENCE { drx-HARQ-RTT-TimerSL-r17, drx-RetransmissionTimerSL-r17 }
 */
struct DRX_ConfigSL_r17 {
    int64_t drx_HARQ_RTT_TimerSL_r17; /**< ASN.1 drx-HARQ-RTT-TimerSL-r17；INTEGER (0..56)，位宽 6 bit。 */
    DRX_ConfigSL_r17_Drx_RetransmissionTimerSL_r17 drx_RetransmissionTimerSL_r17; /**< ASN.1 drx-RetransmissionTimerSL-r17；枚举。 */
};


/**
 * @brief SetupRelease_DRX_ConfigSL_r17
 * @note ASN.1：SetupRelease<DRX-ConfigSL-r17>；源文件第 7331 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_ConfigSL_r17_Tag {
    SetupRelease_DRX_ConfigSL_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_ConfigSL_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_ConfigSL_r17_Tag;

struct SetupRelease_DRX_ConfigSL_r17 {
    SetupRelease_DRX_ConfigSL_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_ConfigSL_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief DRX_ConfigExt_v1700
 * @note ASN.1：DRX-ConfigExt-v1700；源文件第 6687 行。
 * @note DRX-ConfigExt-v1700 ::= SEQUENCE { drx-HARQ-RTT-TimerDL-r17, drx-HARQ-RTT-TimerUL-r17 }
 */
struct DRX_ConfigExt_v1700 {
    int64_t drx_HARQ_RTT_TimerDL_r17; /**< ASN.1 drx-HARQ-RTT-TimerDL-r17；INTEGER (0..448)，位宽 9 bit。 */
    int64_t drx_HARQ_RTT_TimerUL_r17; /**< ASN.1 drx-HARQ-RTT-TimerUL-r17；INTEGER (0..448)，位宽 9 bit。 */
};


/**
 * @brief SetupRelease_DRX_ConfigExt_v1700
 * @note ASN.1：SetupRelease<DRX-ConfigExt-v1700>；源文件第 7332 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_ConfigExt_v1700_Tag {
    SetupRelease_DRX_ConfigExt_v1700_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_ConfigExt_v1700_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_ConfigExt_v1700_Tag;

struct SetupRelease_DRX_ConfigExt_v1700 {
    SetupRelease_DRX_ConfigExt_v1700_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_ConfigExt_v1700 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief TAR_Config_r17
 * @note ASN.1：TAR-Config-r17；源文件第 13643 行。
 * @note TAR-Config-r17 ::= SEQUENCE { offsetThresholdTA-r17, timingAdvanceSR-r17 }
 */
struct TAR_Config_r17 {
    bool has_offsetThresholdTA_r17; /**< offsetThresholdTA-r17 是否存在。 */
    TAR_Config_r17_OffsetThresholdTA_r17 offsetThresholdTA_r17; /**< ASN.1 offsetThresholdTA-r17；枚举；OPTIONAL。 */
    bool has_timingAdvanceSR_r17; /**< timingAdvanceSR-r17 是否存在。 */
    TAR_Config_r17_TimingAdvanceSR_r17 timingAdvanceSR_r17; /**< ASN.1 timingAdvanceSR-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_TAR_Config_r17
 * @note ASN.1：SetupRelease<TAR-Config-r17>；源文件第 7336 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_TAR_Config_r17_Tag {
    SetupRelease_TAR_Config_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_TAR_Config_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_TAR_Config_r17_Tag;

struct SetupRelease_TAR_Config_r17 {
    SetupRelease_TAR_Config_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        TAR_Config_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup4
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup4；源文件第 7329 行。
 */
struct MAC_CellGroupConfig_ExtGroup4 {
    bool has_intraCG_Prioritization_r17; /**< intraCG-Prioritization-r17 是否存在。 */
    MAC_CellGroupConfig_ExtGroup4_IntraCG_Prioritization_r17 intraCG_Prioritization_r17; /**< ASN.1 intraCG-Prioritization-r17；枚举；OPTIONAL。 */
    bool has_drx_ConfigSL_r17; /**< drx-ConfigSL-r17 是否存在。 */
    SetupRelease_DRX_ConfigSL_r17 drx_ConfigSL_r17; /**< ASN.1 drx-ConfigSL-r17；结构体；OPTIONAL。 */
    bool has_drx_ConfigExt_v1700; /**< drx-ConfigExt-v1700 是否存在。 */
    SetupRelease_DRX_ConfigExt_v1700 drx_ConfigExt_v1700; /**< ASN.1 drx-ConfigExt-v1700；结构体；OPTIONAL。 */
    bool has_schedulingRequestID_BFR_r17; /**< schedulingRequestID-BFR-r17 是否存在。 */
    SchedulingRequestId schedulingRequestID_BFR_r17; /**< ASN.1 schedulingRequestID-BFR-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_schedulingRequestID_BFR2_r17; /**< schedulingRequestID-BFR2-r17 是否存在。 */
    SchedulingRequestId schedulingRequestID_BFR2_r17; /**< ASN.1 schedulingRequestID-BFR2-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_schedulingRequestConfig_v1700; /**< schedulingRequestConfig-v1700 是否存在。 */
    SchedulingRequestConfig_v1700 schedulingRequestConfig_v1700; /**< ASN.1 schedulingRequestConfig-v1700；结构体；OPTIONAL。 */
    bool has_tar_Config_r17; /**< tar-Config-r17 是否存在。 */
    SetupRelease_TAR_Config_r17 tar_Config_r17; /**< ASN.1 tar-Config-r17；结构体；OPTIONAL。 */
    bool has_g_RNTI_ConfigToAddModList_r17; /**< g-RNTI-ConfigToAddModList-r17 是否存在。 */
    MBS_RNTI_SpecificConfig_r17* g_RNTI_ConfigToAddModList_r17_items; /**< ASN.1 g-RNTI-ConfigToAddModList-r17；SEQUENCE OF MBS_RNTI_SpecificConfig_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t g_RNTI_ConfigToAddModList_r17_count; /**< g-RNTI-ConfigToAddModList-r17 元素个数。 */
    bool has_g_RNTI_ConfigToReleaseList_r17; /**< g-RNTI-ConfigToReleaseList-r17 是否存在。 */
    MBS_RNTI_SpecificConfigId_r17* g_RNTI_ConfigToReleaseList_r17_items; /**< ASN.1 g-RNTI-ConfigToReleaseList-r17；SEQUENCE OF MBS_RNTI_SpecificConfigId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t g_RNTI_ConfigToReleaseList_r17_count; /**< g-RNTI-ConfigToReleaseList-r17 元素个数。 */
    bool has_g_CS_RNTI_ConfigToAddModList_r17; /**< g-CS-RNTI-ConfigToAddModList-r17 是否存在。 */
    MBS_RNTI_SpecificConfig_r17* g_CS_RNTI_ConfigToAddModList_r17_items; /**< ASN.1 g-CS-RNTI-ConfigToAddModList-r17；SEQUENCE OF MBS_RNTI_SpecificConfig_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t g_CS_RNTI_ConfigToAddModList_r17_count; /**< g-CS-RNTI-ConfigToAddModList-r17 元素个数。 */
    bool has_g_CS_RNTI_ConfigToReleaseList_r17; /**< g-CS-RNTI-ConfigToReleaseList-r17 是否存在。 */
    MBS_RNTI_SpecificConfigId_r17* g_CS_RNTI_ConfigToReleaseList_r17_items; /**< ASN.1 g-CS-RNTI-ConfigToReleaseList-r17；SEQUENCE OF MBS_RNTI_SpecificConfigId_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t g_CS_RNTI_ConfigToReleaseList_r17_count; /**< g-CS-RNTI-ConfigToReleaseList-r17 元素个数。 */
    bool has_allowCSI_SRS_Tx_MulticastDRX_Active_r17; /**< allowCSI-SRS-Tx-MulticastDRX-Active-r17 是否存在。 */
    bool allowCSI_SRS_Tx_MulticastDRX_Active_r17; /**< ASN.1 allowCSI-SRS-Tx-MulticastDRX-Active-r17；BOOLEAN，1 bit；OPTIONAL。 */
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup5
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup5；源文件第 7343 行。
 */
struct MAC_CellGroupConfig_ExtGroup5 {
    bool has_schedulingRequestID_PosMG_Request_r17; /**< schedulingRequestID-PosMG-Request-r17 是否存在。 */
    SchedulingRequestId schedulingRequestID_PosMG_Request_r17; /**< ASN.1 schedulingRequestID-PosMG-Request-r17；INTEGER (0..7)，位宽 3 bit；OPTIONAL。 */
    bool has_drx_LastTransmissionUL_r17; /**< drx-LastTransmissionUL-r17 是否存在。 */
    MAC_CellGroupConfig_ExtGroup5_Drx_LastTransmissionUL_r17 drx_LastTransmissionUL_r17; /**< ASN.1 drx-LastTransmissionUL-r17；枚举；OPTIONAL。 */
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup6
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup6；源文件第 7347 行。
 */
struct MAC_CellGroupConfig_ExtGroup6 {
    bool has_posMG_Request_r17; /**< posMG-Request-r17 是否存在。 */
    MAC_CellGroupConfig_ExtGroup6_PosMG_Request_r17 posMG_Request_r17; /**< ASN.1 posMG-Request-r17；枚举；OPTIONAL。 */
};


/**
 * @brief DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18
 * @note ASN.1：drx-NonIntegerLongCycleStartOffset-r18；源文件第 6693 行。
 * @note CHOICE { ms1001over240, ms25over6, ms25over3, ms1001over120, ms100over9, ms25...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag {
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over240 = 0, /**< ASN.1 ms1001over240 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over6 = 1, /**< ASN.1 ms25over6 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over3 = 2, /**< ASN.1 ms25over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over120 = 3, /**< ASN.1 ms1001over120 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over9 = 4, /**< ASN.1 ms100over9 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms25over2 = 5, /**< ASN.1 ms25over2 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms40over3 = 6, /**< ASN.1 ms40over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over9 = 7, /**< ASN.1 ms125over9 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms50over3 = 8, /**< ASN.1 ms50over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over60 = 9, /**< ASN.1 ms1001over60 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over6 = 10, /**< ASN.1 ms125over6 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over9 = 11, /**< ASN.1 ms200over9 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over9 = 12, /**< ASN.1 ms250over9 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms100over3 = 13, /**< ASN.1 ms100over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over30 = 14, /**< ASN.1 ms1001over30 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms75over2 = 15, /**< ASN.1 ms75over2 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms125over3 = 16, /**< ASN.1 ms125over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over24 = 17, /**< ASN.1 ms1001over24 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms200over3 = 18, /**< ASN.1 ms200over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over15 = 19, /**< ASN.1 ms1001over15 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms250over3 = 20, /**< ASN.1 ms250over3 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms1001over12 = 21, /**< ASN.1 ms1001over12 */
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag_ms400over3 = 22, /**< ASN.1 ms400over3 */
} DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag;

struct DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18 {
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t ms1001over240; /**< ASN.1 ms1001over240 */
        int64_t ms25over6; /**< ASN.1 ms25over6 */
        int64_t ms25over3; /**< ASN.1 ms25over3 */
        int64_t ms1001over120; /**< ASN.1 ms1001over120 */
        int64_t ms100over9; /**< ASN.1 ms100over9 */
        int64_t ms25over2; /**< ASN.1 ms25over2 */
        int64_t ms40over3; /**< ASN.1 ms40over3 */
        int64_t ms125over9; /**< ASN.1 ms125over9 */
        int64_t ms50over3; /**< ASN.1 ms50over3 */
        int64_t ms1001over60; /**< ASN.1 ms1001over60 */
        int64_t ms125over6; /**< ASN.1 ms125over6 */
        int64_t ms200over9; /**< ASN.1 ms200over9 */
        int64_t ms250over9; /**< ASN.1 ms250over9 */
        int64_t ms100over3; /**< ASN.1 ms100over3 */
        int64_t ms1001over30; /**< ASN.1 ms1001over30 */
        int64_t ms75over2; /**< ASN.1 ms75over2 */
        int64_t ms125over3; /**< ASN.1 ms125over3 */
        int64_t ms1001over24; /**< ASN.1 ms1001over24 */
        int64_t ms200over3; /**< ASN.1 ms200over3 */
        int64_t ms1001over15; /**< ASN.1 ms1001over15 */
        int64_t ms250over3; /**< ASN.1 ms250over3 */
        int64_t ms1001over12; /**< ASN.1 ms1001over12 */
        int64_t ms400over3; /**< ASN.1 ms400over3 */
    } u;
};


/**
 * @brief DRX_ConfigExt2_v1800_ShortDRX_r18
 * @note ASN.1：shortDRX-r18；源文件第 6719 行。
 * @note SEQUENCE { drx-NonIntegerShortCycle-r18, drx-ShortCycleTimer-r18 }
 */
struct DRX_ConfigExt2_v1800_ShortDRX_r18 {
    DRX_ConfigExt2_v1800_ShortDRX_r18_Drx_NonIntegerShortCycle_r18 drx_NonIntegerShortCycle_r18; /**< ASN.1 drx-NonIntegerShortCycle-r18；枚举。 */
    int64_t drx_ShortCycleTimer_r18; /**< ASN.1 drx-ShortCycleTimer-r18；INTEGER (1..16)，位宽 4 bit。 */
};


/**
 * @brief DRX_ConfigExt2_v1800
 * @note ASN.1：DRX-ConfigExt2-v1800；源文件第 6692 行。
 * @note DRX-ConfigExt2-v1800 ::= SEQUENCE { drx-NonIntegerLongCycleStartOffset-r18, shortDRX-r18, drx-TimeRefe...
 */
struct DRX_ConfigExt2_v1800 {
    DRX_ConfigExt2_v1800_Drx_NonIntegerLongCycleStartOffset_r18 drx_NonIntegerLongCycleStartOffset_r18; /**< ASN.1 drx-NonIntegerLongCycleStartOffset-r18；结构体。 */
    bool has_shortDRX_r18; /**< shortDRX-r18 是否存在。 */
    DRX_ConfigExt2_v1800_ShortDRX_r18 shortDRX_r18; /**< ASN.1 shortDRX-r18；结构体；OPTIONAL。 */
    bool has_drx_TimeReferenceSFN_r18; /**< drx-TimeReferenceSFN-r18 是否存在。 */
    DRX_ConfigExt2_v1800_Drx_TimeReferenceSFN_r18 drx_TimeReferenceSFN_r18; /**< ASN.1 drx-TimeReferenceSFN-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DRX_ConfigExt2_v1800
 * @note ASN.1：SetupRelease<DRX-ConfigExt2-v1800>；源文件第 7351 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_ConfigExt2_v1800_Tag {
    SetupRelease_DRX_ConfigExt2_v1800_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_ConfigExt2_v1800_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_ConfigExt2_v1800_Tag;

struct SetupRelease_DRX_ConfigExt2_v1800 {
    SetupRelease_DRX_ConfigExt2_v1800_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_ConfigExt2_v1800 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief TAR_Config_r18
 * @note ASN.1：TAR-Config-r18；源文件第 13650 行。
 * @note TAR-Config-r18 ::= SEQUENCE { offsetThresholdTA-r18, timingAdvanceSR-r18 }
 */
struct TAR_Config_r18 {
    bool has_offsetThresholdTA_r18; /**< offsetThresholdTA-r18 是否存在。 */
    int64_t offsetThresholdTA_r18; /**< ASN.1 offsetThresholdTA-r18；INTEGER (1..56)，位宽 6 bit；OPTIONAL。 */
    bool has_timingAdvanceSR_r18; /**< timingAdvanceSR-r18 是否存在。 */
    TAR_Config_r18_TimingAdvanceSR_r18 timingAdvanceSR_r18; /**< ASN.1 timingAdvanceSR-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_TAR_Config_r18
 * @note ASN.1：SetupRelease<TAR-Config-r18>；源文件第 7355 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_TAR_Config_r18_Tag {
    SetupRelease_TAR_Config_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_TAR_Config_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_TAR_Config_r18_Tag;

struct SetupRelease_TAR_Config_r18 {
    SetupRelease_TAR_Config_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        TAR_Config_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MAC_CellGroupConfig_ExtGroup7
 * @note ASN.1：MAC_CellGroupConfig_ExtGroup7；源文件第 7350 行。
 */
struct MAC_CellGroupConfig_ExtGroup7 {
    bool has_drx_ConfigExt2_v1800; /**< drx-ConfigExt2-v1800 是否存在。 */
    SetupRelease_DRX_ConfigExt2_v1800 drx_ConfigExt2_v1800; /**< ASN.1 drx-ConfigExt2-v1800；结构体；OPTIONAL。 */
    bool has_additionalBS_TableAllowed_r18; /**< additionalBS-TableAllowed-r18 是否存在。 */
    BitString additionalBS_TableAllowed_r18; /**< ASN.1 additionalBS-TableAllowed-r18；SIZE (8)，定长；OPTIONAL。 */
    bool has_dsr_ConfigToAddModList_r18; /**< dsr-ConfigToAddModList-r18 是否存在。 */
    LCG_DSR_Config_r18* dsr_ConfigToAddModList_r18_items; /**< ASN.1 dsr-ConfigToAddModList-r18；SEQUENCE OF LCG_DSR_Config_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dsr_ConfigToAddModList_r18_count; /**< dsr-ConfigToAddModList-r18 元素个数。 */
    bool has_dsr_ConfigToReleaseList_r18; /**< dsr-ConfigToReleaseList-r18 是否存在。 */
    LCG_Id_r18* dsr_ConfigToReleaseList_r18_items; /**< ASN.1 dsr-ConfigToReleaseList-r18；SEQUENCE OF LCG_Id_r18，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t dsr_ConfigToReleaseList_r18_count; /**< dsr-ConfigToReleaseList-r18 元素个数。 */
    bool has_tar_Config_r18; /**< tar-Config-r18 是否存在。 */
    SetupRelease_TAR_Config_r18 tar_Config_r18; /**< ASN.1 tar-Config-r18；结构体；OPTIONAL。 */
};


/**
 * @brief SchedulingRequestConfig
 * @note ASN.1：SchedulingRequestConfig；源文件第 12067 行。
 * @note SchedulingRequestConfig ::= SEQUENCE { schedulingRequestToAddModList, schedulingRequestToReleaseList }
 */
struct SchedulingRequestConfig {
    bool has_schedulingRequestToAddModList; /**< schedulingRequestToAddModList 是否存在。 */
    SchedulingRequestToAddMod* schedulingRequestToAddModList_items; /**< ASN.1 schedulingRequestToAddModList；SEQUENCE OF SchedulingRequestToAddMod，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestToAddModList_count; /**< schedulingRequestToAddModList 元素个数。 */
    bool has_schedulingRequestToReleaseList; /**< schedulingRequestToReleaseList 是否存在。 */
    SchedulingRequestId* schedulingRequestToReleaseList_items; /**< ASN.1 schedulingRequestToReleaseList；SEQUENCE OF SchedulingRequestId，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t schedulingRequestToReleaseList_count; /**< schedulingRequestToReleaseList 元素个数。 */
};


/**
 * @brief TAG_Config
 * @note ASN.1：TAG-Config；源文件第 13627 行。
 * @note TAG-Config ::= SEQUENCE { tag-ToReleaseList, tag-ToAddModList }
 */
struct TAG_Config {
    bool has_tag_ToReleaseList; /**< tag-ToReleaseList 是否存在。 */
    TAG_Id* tag_ToReleaseList_items; /**< ASN.1 tag-ToReleaseList；SEQUENCE OF TAG_Id，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tag_ToReleaseList_count; /**< tag-ToReleaseList 元素个数。 */
    bool has_tag_ToAddModList; /**< tag-ToAddModList 是否存在。 */
    TAG* tag_ToAddModList_items; /**< ASN.1 tag-ToAddModList；SEQUENCE OF TAG，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t tag_ToAddModList_count; /**< tag-ToAddModList 元素个数。 */
};


/**
 * @brief DRX_Config_Drx_onDurationTimer
 * @note ASN.1：drx-onDurationTimer；源文件第 6634 行。
 * @note CHOICE { subMilliSeconds, milliSeconds }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRX_Config_Drx_onDurationTimer_Tag {
    DRX_Config_Drx_onDurationTimer_Tag_subMilliSeconds = 0, /**< ASN.1 subMilliSeconds */
    DRX_Config_Drx_onDurationTimer_Tag_milliSeconds = 1, /**< ASN.1 milliSeconds */
} DRX_Config_Drx_onDurationTimer_Tag;

struct DRX_Config_Drx_onDurationTimer {
    DRX_Config_Drx_onDurationTimer_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        int64_t subMilliSeconds; /**< ASN.1 subMilliSeconds */
        DRX_Config_Drx_onDurationTimer_MilliSeconds milliSeconds; /**< ASN.1 milliSeconds */
    } u;
};


/**
 * @brief DRX_Config_Drx_LongCycleStartOffset
 * @note ASN.1：drx-LongCycleStartOffset；源文件第 6655 行。
 * @note CHOICE { ms10, ms20, ms32, ms40, ms60, ms64, ms70, ms80, ms128, ms160, ms256,...
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum DRX_Config_Drx_LongCycleStartOffset_Tag {
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms10 = 0, /**< ASN.1 ms10 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms20 = 1, /**< ASN.1 ms20 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms32 = 2, /**< ASN.1 ms32 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms40 = 3, /**< ASN.1 ms40 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms60 = 4, /**< ASN.1 ms60 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms64 = 5, /**< ASN.1 ms64 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms70 = 6, /**< ASN.1 ms70 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms80 = 7, /**< ASN.1 ms80 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms128 = 8, /**< ASN.1 ms128 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms160 = 9, /**< ASN.1 ms160 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms256 = 10, /**< ASN.1 ms256 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms320 = 11, /**< ASN.1 ms320 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms512 = 12, /**< ASN.1 ms512 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms640 = 13, /**< ASN.1 ms640 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms1024 = 14, /**< ASN.1 ms1024 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms1280 = 15, /**< ASN.1 ms1280 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms2048 = 16, /**< ASN.1 ms2048 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms2560 = 17, /**< ASN.1 ms2560 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms5120 = 18, /**< ASN.1 ms5120 */
    DRX_Config_Drx_LongCycleStartOffset_Tag_ms10240 = 19, /**< ASN.1 ms10240 */
} DRX_Config_Drx_LongCycleStartOffset_Tag;

struct DRX_Config_Drx_LongCycleStartOffset {
    DRX_Config_Drx_LongCycleStartOffset_Tag tag; /**< 必须与 u 中实际成员一致。 */
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
 * @brief DRX_Config_ShortDRX
 * @note ASN.1：shortDRX；源文件第 6677 行。
 * @note SEQUENCE { drx-ShortCycle, drx-ShortCycleTimer }
 */
struct DRX_Config_ShortDRX {
    DRX_Config_ShortDRX_Drx_ShortCycle drx_ShortCycle; /**< ASN.1 drx-ShortCycle；枚举。 */
    int64_t drx_ShortCycleTimer; /**< ASN.1 drx-ShortCycleTimer；INTEGER (1..16)，位宽 4 bit。 */
};


/**
 * @brief DRX_Config
 * @note ASN.1：DRX-Config；源文件第 6633 行。
 * @note DRX-Config ::= SEQUENCE { drx-onDurationTimer, drx-InactivityTimer, drx-HARQ-RTT-TimerDL, dr...
 */
struct DRX_Config {
    DRX_Config_Drx_onDurationTimer drx_onDurationTimer; /**< ASN.1 drx-onDurationTimer；结构体。 */
    DRX_Config_Drx_InactivityTimer drx_InactivityTimer; /**< ASN.1 drx-InactivityTimer；枚举。 */
    int64_t drx_HARQ_RTT_TimerDL; /**< ASN.1 drx-HARQ-RTT-TimerDL；INTEGER (0..56)，位宽 6 bit。 */
    int64_t drx_HARQ_RTT_TimerUL; /**< ASN.1 drx-HARQ-RTT-TimerUL；INTEGER (0..56)，位宽 6 bit。 */
    DRX_Config_Drx_RetransmissionTimerDL drx_RetransmissionTimerDL; /**< ASN.1 drx-RetransmissionTimerDL；枚举。 */
    DRX_Config_Drx_RetransmissionTimerUL drx_RetransmissionTimerUL; /**< ASN.1 drx-RetransmissionTimerUL；枚举。 */
    DRX_Config_Drx_LongCycleStartOffset drx_LongCycleStartOffset; /**< ASN.1 drx-LongCycleStartOffset；结构体。 */
    bool has_shortDRX; /**< shortDRX 是否存在。 */
    DRX_Config_ShortDRX shortDRX; /**< ASN.1 shortDRX；结构体；OPTIONAL。 */
    int64_t drx_SlotOffset; /**< ASN.1 drx-SlotOffset；INTEGER (0..31)，位宽 5 bit。 */
};


/**
 * @brief SetupRelease_DRX_Config
 * @note ASN.1：SetupRelease<DRX-Config>；源文件第 7307 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DRX_Config_Tag {
    SetupRelease_DRX_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DRX_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DRX_Config_Tag;

struct SetupRelease_DRX_Config {
    SetupRelease_DRX_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DRX_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MPE_Config_FR2_r16
 * @note ASN.1：MPE-Config-FR2-r16；源文件第 9653 行。
 * @note MPE-Config-FR2-r16 ::= SEQUENCE { mpe-ProhibitTimer-r16, mpe-Threshold-r16 }
 */
struct MPE_Config_FR2_r16 {
    MPE_Config_FR2_r16_Mpe_ProhibitTimer_r16 mpe_ProhibitTimer_r16; /**< ASN.1 mpe-ProhibitTimer-r16；枚举。 */
    MPE_Config_FR2_r16_Mpe_Threshold_r16 mpe_Threshold_r16; /**< ASN.1 mpe-Threshold-r16；枚举。 */
};


/**
 * @brief SetupRelease_MPE_Config_FR2_r16
 * @note ASN.1：SetupRelease<MPE-Config-FR2-r16>；源文件第 9641 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MPE_Config_FR2_r16_Tag {
    SetupRelease_MPE_Config_FR2_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MPE_Config_FR2_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MPE_Config_FR2_r16_Tag;

struct SetupRelease_MPE_Config_FR2_r16 {
    SetupRelease_MPE_Config_FR2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MPE_Config_FR2_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PHR_Config_ExtGroup1
 * @note ASN.1：PHR_Config_ExtGroup1；源文件第 9640 行。
 */
struct PHR_Config_ExtGroup1 {
    bool has_mpe_Reporting_FR2_r16; /**< mpe-Reporting-FR2-r16 是否存在。 */
    SetupRelease_MPE_Config_FR2_r16 mpe_Reporting_FR2_r16; /**< ASN.1 mpe-Reporting-FR2-r16；结构体；OPTIONAL。 */
};


/**
 * @brief MPE_Config_FR2_r17
 * @note ASN.1：MPE-Config-FR2-r17；源文件第 9658 行。
 * @note MPE-Config-FR2-r17 ::= SEQUENCE { mpe-ProhibitTimer-r17, mpe-Threshold-r17, numberOfN-r17 }
 */
struct MPE_Config_FR2_r17 {
    MPE_Config_FR2_r17_Mpe_ProhibitTimer_r17 mpe_ProhibitTimer_r17; /**< ASN.1 mpe-ProhibitTimer-r17；枚举。 */
    MPE_Config_FR2_r17_Mpe_Threshold_r17 mpe_Threshold_r17; /**< ASN.1 mpe-Threshold-r17；枚举。 */
    int64_t numberOfN_r17; /**< ASN.1 numberOfN-r17；INTEGER (1..4)，位宽 2 bit。 */
};


/**
 * @brief SetupRelease_MPE_Config_FR2_r17
 * @note ASN.1：SetupRelease<MPE-Config-FR2-r17>；源文件第 9644 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MPE_Config_FR2_r17_Tag {
    SetupRelease_MPE_Config_FR2_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MPE_Config_FR2_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MPE_Config_FR2_r17_Tag;

struct SetupRelease_MPE_Config_FR2_r17 {
    SetupRelease_MPE_Config_FR2_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MPE_Config_FR2_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PHR_Config_ExtGroup2
 * @note ASN.1：PHR_Config_ExtGroup2；源文件第 9643 行。
 */
struct PHR_Config_ExtGroup2 {
    bool has_mpe_Reporting_FR2_r17; /**< mpe-Reporting-FR2-r17 是否存在。 */
    SetupRelease_MPE_Config_FR2_r17 mpe_Reporting_FR2_r17; /**< ASN.1 mpe-Reporting-FR2-r17；结构体；OPTIONAL。 */
    bool has_twoPHRMode_r17; /**< twoPHRMode-r17 是否存在。 */
    PHR_Config_ExtGroup2_TwoPHRMode_r17 twoPHRMode_r17; /**< ASN.1 twoPHRMode-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PHR_Config_ExtGroup3
 * @note ASN.1：PHR_Config_ExtGroup3；源文件第 9647 行。
 */
struct PHR_Config_ExtGroup3 {
    bool has_phr_AssumedPUSCH_Reporting_r18; /**< phr-AssumedPUSCH-Reporting-r18 是否存在。 */
    PHR_Config_ExtGroup3_Phr_AssumedPUSCH_Reporting_r18 phr_AssumedPUSCH_Reporting_r18; /**< ASN.1 phr-AssumedPUSCH-Reporting-r18；枚举；OPTIONAL。 */
    bool has_dpc_Reporting_FR1_r18; /**< dpc-Reporting-FR1-r18 是否存在。 */
    PHR_Config_ExtGroup3_Dpc_Reporting_FR1_r18 dpc_Reporting_FR1_r18; /**< ASN.1 dpc-Reporting-FR1-r18；枚举；OPTIONAL。 */
};


/**
 * @brief PHR_Config
 * @note ASN.1：PHR-Config；源文件第 9631 行。
 * @note PHR-Config ::= SEQUENCE { phr-PeriodicTimer, phr-ProhibitTimer, phr-Tx-PowerFactorChange, mu...
 */
struct PHR_Config {
    PHR_Config_Phr_PeriodicTimer phr_PeriodicTimer; /**< ASN.1 phr-PeriodicTimer；枚举。 */
    PHR_Config_Phr_ProhibitTimer phr_ProhibitTimer; /**< ASN.1 phr-ProhibitTimer；枚举。 */
    PHR_Config_Phr_Tx_PowerFactorChange phr_Tx_PowerFactorChange; /**< ASN.1 phr-Tx-PowerFactorChange；枚举。 */
    bool multiplePHR; /**< ASN.1 multiplePHR；BOOLEAN，1 bit。 */
    bool dummy; /**< ASN.1 dummy；BOOLEAN，1 bit。 */
    bool phr_Type2OtherCell; /**< ASN.1 phr-Type2OtherCell；BOOLEAN，1 bit。 */
    PHR_Config_Phr_ModeOtherCG phr_ModeOtherCG; /**< ASN.1 phr-ModeOtherCG；枚举。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PHR_Config_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PHR_Config_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PHR_Config_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief SetupRelease_PHR_Config
 * @note ASN.1：SetupRelease<PHR-Config>；源文件第 7311 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PHR_Config_Tag {
    SetupRelease_PHR_Config_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PHR_Config_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PHR_Config_Tag;

struct SetupRelease_PHR_Config {
    SetupRelease_PHR_Config_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PHR_Config setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief MAC_CellGroupConfig
 * @note ASN.1：MAC-CellGroupConfig；源文件第 7306 行。
 * @note MAC-CellGroupConfig ::= SEQUENCE { drx-Config, schedulingRequestConfig, bsr-Config, tag-Config, phr-C...
 */
struct MAC_CellGroupConfig {
    bool has_drx_Config; /**< drx-Config 是否存在。 */
    SetupRelease_DRX_Config drx_Config; /**< ASN.1 drx-Config；结构体；OPTIONAL。 */
    bool has_schedulingRequestConfig; /**< schedulingRequestConfig 是否存在。 */
    SchedulingRequestConfig schedulingRequestConfig; /**< ASN.1 schedulingRequestConfig；结构体；OPTIONAL。 */
    bool has_bsr_Config; /**< bsr-Config 是否存在。 */
    BSR_Config bsr_Config; /**< ASN.1 bsr-Config；结构体；OPTIONAL。 */
    bool has_tag_Config; /**< tag-Config 是否存在。 */
    TAG_Config tag_Config; /**< ASN.1 tag-Config；结构体；OPTIONAL。 */
    bool has_phr_Config; /**< phr-Config 是否存在。 */
    SetupRelease_PHR_Config phr_Config; /**< ASN.1 phr-Config；结构体；OPTIONAL。 */
    bool skipUplinkTxDynamic; /**< ASN.1 skipUplinkTxDynamic；BOOLEAN，1 bit。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    MAC_CellGroupConfig_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup7
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup7；源文件第 9760 行。
 */
struct PhysicalCellGroupConfig_ExtGroup7 {
    bool has_intraBandNC_PRACH_simulTx_r17; /**< intraBandNC-PRACH-simulTx-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup7_IntraBandNC_PRACH_simulTx_r17 intraBandNC_PRACH_simulTx_r17; /**< ASN.1 intraBandNC-PRACH-simulTx-r17；枚举；OPTIONAL。 */
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup2
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup2；源文件第 9688 行。
 */
struct PhysicalCellGroupConfig_ExtGroup2 {
    bool has_xScale; /**< xScale 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup2_XScale xScale; /**< ASN.1 xScale；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PDCCH_BlindDetection
 * @note ASN.1：SetupRelease<PDCCH-BlindDetection>；源文件第 9692 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_BlindDetection_Tag {
    SetupRelease_PDCCH_BlindDetection_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_BlindDetection_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_BlindDetection_Tag;

struct SetupRelease_PDCCH_BlindDetection {
    SetupRelease_PDCCH_BlindDetection_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_BlindDetection setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup3
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup3；源文件第 9691 行。
 */
struct PhysicalCellGroupConfig_ExtGroup3 {
    bool has_pdcch_BlindDetection; /**< pdcch-BlindDetection 是否存在。 */
    SetupRelease_PDCCH_BlindDetection pdcch_BlindDetection; /**< ASN.1 pdcch-BlindDetection；结构体；OPTIONAL。 */
};


/**
 * @brief DCP_Config_r16
 * @note ASN.1：DCP-Config-r16；源文件第 9800 行。
 * @note DCP-Config-r16 ::= SEQUENCE { ps-RNTI-r16, ps-Offset-r16, sizeDCI-2-6-r16, ps-PositionDCI-2-6-r1...
 */
struct DCP_Config_r16 {
    RNTI_Value ps_RNTI_r16; /**< ASN.1 ps-RNTI-r16；INTEGER (0..65535)，位宽 16 bit。 */
    int64_t ps_Offset_r16; /**< ASN.1 ps-Offset-r16；INTEGER (1..120)，位宽 7 bit。 */
    int64_t sizeDCI_2_6_r16; /**< ASN.1 sizeDCI-2-6-r16；INTEGER (1..140)，位宽 8 bit。 */
    int64_t ps_PositionDCI_2_6_r16; /**< ASN.1 ps-PositionDCI-2-6-r16；INTEGER (0..139)，位宽 8 bit。 */
    bool has_ps_WakeUp_r16; /**< ps-WakeUp-r16 是否存在。 */
    DCP_Config_r16_Ps_WakeUp_r16 ps_WakeUp_r16; /**< ASN.1 ps-WakeUp-r16；枚举；OPTIONAL。 */
    bool has_ps_TransmitPeriodicL1_RSRP_r16; /**< ps-TransmitPeriodicL1-RSRP-r16 是否存在。 */
    DCP_Config_r16_Ps_TransmitPeriodicL1_RSRP_r16 ps_TransmitPeriodicL1_RSRP_r16; /**< ASN.1 ps-TransmitPeriodicL1-RSRP-r16；枚举；OPTIONAL。 */
    bool has_ps_TransmitOtherPeriodicCSI_r16; /**< ps-TransmitOtherPeriodicCSI-r16 是否存在。 */
    DCP_Config_r16_Ps_TransmitOtherPeriodicCSI_r16 ps_TransmitOtherPeriodicCSI_r16; /**< ASN.1 ps-TransmitOtherPeriodicCSI-r16；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_DCP_Config_r16
 * @note ASN.1：SetupRelease<DCP-Config-r16>；源文件第 9695 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_DCP_Config_r16_Tag {
    SetupRelease_DCP_Config_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_DCP_Config_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_DCP_Config_r16_Tag;

struct SetupRelease_DCP_Config_r16 {
    SetupRelease_DCP_Config_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        DCP_Config_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDSCH_HARQ_ACK_CodebookList_r16
 * @note ASN.1：PDSCH-HARQ-ACK-CodebookList-r16；源文件第 9810 行。
 * @note PDSCH-HARQ-ACK-CodebookList-r16 ::= SEQUENCE OF (size 1..2) OF PDSCHHARQACKCodebookListR16Item
 */
struct PDSCH_HARQ_ACK_CodebookList_r16 {
    PDSCH_HARQ_ACK_CodebookList_r16_Item* items; /**< 元素数组（库 malloc；count==0 时可为 NULL）。 */
    uint32_t count; /**< 元素个数。 */
};


/**
 * @brief SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16
 * @note ASN.1：SetupRelease<PDSCH-HARQ-ACK-CodebookList-r16>；源文件第 9711 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag {
    SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag;

struct SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16 {
    SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDSCH_HARQ_ACK_CodebookList_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCCH_BlindDetectionCA_CombIndicator_r16
 * @note ASN.1：PDCCH-BlindDetectionCA-CombIndicator-r16；源文件第 9812 行。
 * @note PDCCH-BlindDetectionCA-CombIndicator-r16 ::= SEQUENCE { pdcch-BlindDetectionCA1-r16, pdcch-BlindDetectionCA2-r16 }
 */
struct PDCCH_BlindDetectionCA_CombIndicator_r16 {
    int64_t pdcch_BlindDetectionCA1_r16; /**< ASN.1 pdcch-BlindDetectionCA1-r16；INTEGER (1..15)，位宽 4 bit。 */
    int64_t pdcch_BlindDetectionCA2_r16; /**< ASN.1 pdcch-BlindDetectionCA2-r16；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16
 * @note ASN.1：SetupRelease<PDCCH-BlindDetectionCA-CombIndicator-r16>；源文件第 9713 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag {
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag;

struct SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16 {
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_BlindDetectionCA_CombIndicator_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_PDCCH_BlindDetection2_r16
 * @note ASN.1：SetupRelease<PDCCH-BlindDetection2-r16>；源文件第 9714 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_BlindDetection2_r16_Tag {
    SetupRelease_PDCCH_BlindDetection2_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_BlindDetection2_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_BlindDetection2_r16_Tag;

struct SetupRelease_PDCCH_BlindDetection2_r16 {
    SetupRelease_PDCCH_BlindDetection2_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_BlindDetection2_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief SetupRelease_PDCCH_BlindDetection3_r16
 * @note ASN.1：SetupRelease<PDCCH-BlindDetection3-r16>；源文件第 9715 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_BlindDetection3_r16_Tag {
    SetupRelease_PDCCH_BlindDetection3_r16_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_BlindDetection3_r16_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_BlindDetection3_r16_Tag;

struct SetupRelease_PDCCH_BlindDetection3_r16 {
    SetupRelease_PDCCH_BlindDetection3_r16_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_BlindDetection3_r16 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup4
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup4；源文件第 9694 行。
 */
struct PhysicalCellGroupConfig_ExtGroup4 {
    bool has_dcp_Config_r16; /**< dcp-Config-r16 是否存在。 */
    SetupRelease_DCP_Config_r16 dcp_Config_r16; /**< ASN.1 dcp-Config-r16；结构体；OPTIONAL。 */
    bool has_harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16; /**< harq-ACK-SpatialBundlingPUCCH-secondaryPUCCHgroup-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16 harq_ACK_SpatialBundlingPUCCH_secondaryPUCCHgroup_r16; /**< ASN.1 harq-ACK-SpatialBundlingPUCCH-secondaryPUCCHgroup-r16；枚举；OPTIONAL。 */
    bool has_harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16; /**< harq-ACK-SpatialBundlingPUSCH-secondaryPUCCHgroup-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16 harq_ACK_SpatialBundlingPUSCH_secondaryPUCCHgroup_r16; /**< ASN.1 harq-ACK-SpatialBundlingPUSCH-secondaryPUCCHgroup-r16；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16; /**< pdsch-HARQ-ACK-Codebook-secondaryPUCCHgroup-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16 pdsch_HARQ_ACK_Codebook_secondaryPUCCHgroup_r16; /**< ASN.1 pdsch-HARQ-ACK-Codebook-secondaryPUCCHgroup-r16；枚举；OPTIONAL。 */
    bool has_p_NR_FR2_r16; /**< p-NR-FR2-r16 是否存在。 */
    P_Max p_NR_FR2_r16; /**< ASN.1 p-NR-FR2-r16；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_p_UE_FR2_r16; /**< p-UE-FR2-r16 是否存在。 */
    P_Max p_UE_FR2_r16; /**< ASN.1 p-UE-FR2-r16；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    bool has_nrdc_PCmode_FR1_r16; /**< nrdc-PCmode-FR1-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR1_r16 nrdc_PCmode_FR1_r16; /**< ASN.1 nrdc-PCmode-FR1-r16；枚举；OPTIONAL。 */
    bool has_nrdc_PCmode_FR2_r16; /**< nrdc-PCmode-FR2-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Nrdc_PCmode_FR2_r16 nrdc_PCmode_FR2_r16; /**< ASN.1 nrdc-PCmode-FR2-r16；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_Codebook_r16; /**< pdsch-HARQ-ACK-Codebook-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_Codebook_r16 pdsch_HARQ_ACK_Codebook_r16; /**< ASN.1 pdsch-HARQ-ACK-Codebook-r16；枚举；OPTIONAL。 */
    bool has_nfi_TotalDAI_Included_r16; /**< nfi-TotalDAI-Included-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Nfi_TotalDAI_Included_r16 nfi_TotalDAI_Included_r16; /**< ASN.1 nfi-TotalDAI-Included-r16；枚举；OPTIONAL。 */
    bool has_ul_TotalDAI_Included_r16; /**< ul-TotalDAI-Included-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Ul_TotalDAI_Included_r16 ul_TotalDAI_Included_r16; /**< ASN.1 ul-TotalDAI-Included-r16；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_OneShotFeedback_r16; /**< pdsch-HARQ-ACK-OneShotFeedback-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedback_r16 pdsch_HARQ_ACK_OneShotFeedback_r16; /**< ASN.1 pdsch-HARQ-ACK-OneShotFeedback-r16；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_OneShotFeedbackNDI_r16; /**< pdsch-HARQ-ACK-OneShotFeedbackNDI-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackNDI_r16 pdsch_HARQ_ACK_OneShotFeedbackNDI_r16; /**< ASN.1 pdsch-HARQ-ACK-OneShotFeedbackNDI-r16；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_OneShotFeedbackCBG_r16; /**< pdsch-HARQ-ACK-OneShotFeedbackCBG-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_Pdsch_HARQ_ACK_OneShotFeedbackCBG_r16 pdsch_HARQ_ACK_OneShotFeedbackCBG_r16; /**< ASN.1 pdsch-HARQ-ACK-OneShotFeedbackCBG-r16；枚举；OPTIONAL。 */
    bool has_downlinkAssignmentIndexDCI_0_2_r16; /**< downlinkAssignmentIndexDCI-0-2-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_0_2_r16 downlinkAssignmentIndexDCI_0_2_r16; /**< ASN.1 downlinkAssignmentIndexDCI-0-2-r16；枚举；OPTIONAL。 */
    bool has_downlinkAssignmentIndexDCI_1_2_r16; /**< downlinkAssignmentIndexDCI-1-2-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_DownlinkAssignmentIndexDCI_1_2_r16 downlinkAssignmentIndexDCI_1_2_r16; /**< ASN.1 downlinkAssignmentIndexDCI-1-2-r16；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_CodebookList_r16; /**< pdsch-HARQ-ACK-CodebookList-r16 是否存在。 */
    SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16 pdsch_HARQ_ACK_CodebookList_r16; /**< ASN.1 pdsch-HARQ-ACK-CodebookList-r16；结构体；OPTIONAL。 */
    bool has_ackNackFeedbackMode_r16; /**< ackNackFeedbackMode-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_AckNackFeedbackMode_r16 ackNackFeedbackMode_r16; /**< ASN.1 ackNackFeedbackMode-r16；枚举；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA_CombIndicator_r16; /**< pdcch-BlindDetectionCA-CombIndicator-r16 是否存在。 */
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r16 pdcch_BlindDetectionCA_CombIndicator_r16; /**< ASN.1 pdcch-BlindDetectionCA-CombIndicator-r16；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetection2_r16; /**< pdcch-BlindDetection2-r16 是否存在。 */
    SetupRelease_PDCCH_BlindDetection2_r16 pdcch_BlindDetection2_r16; /**< ASN.1 pdcch-BlindDetection2-r16；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetection3_r16; /**< pdcch-BlindDetection3-r16 是否存在。 */
    SetupRelease_PDCCH_BlindDetection3_r16 pdcch_BlindDetection3_r16; /**< ASN.1 pdcch-BlindDetection3-r16；结构体；OPTIONAL。 */
    bool has_bdFactorR_r16; /**< bdFactorR-r16 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup4_BdFactorR_r16 bdFactorR_r16; /**< ASN.1 bdFactorR-r16；枚举；OPTIONAL。 */
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup1
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup1；源文件第 9684 行。
 */
struct PhysicalCellGroupConfig_ExtGroup1 {
    bool has_mcs_C_RNTI; /**< mcs-C-RNTI 是否存在。 */
    RNTI_Value mcs_C_RNTI; /**< ASN.1 mcs-C-RNTI；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_p_UE_FR1; /**< p-UE-FR1 是否存在。 */
    P_Max p_UE_FR1; /**< ASN.1 p-UE-FR1；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
};


/**
 * @brief MulticastConfig_r17
 * @note ASN.1：MulticastConfig-r17；源文件第 9823 行。
 * @note MulticastConfig-r17 ::= SEQUENCE { pdsch-HARQ-ACK-CodebookListMulticast-r17, type1CodebookGenerationM...
 */
struct MulticastConfig_r17 {
    bool has_pdsch_HARQ_ACK_CodebookListMulticast_r17; /**< pdsch-HARQ-ACK-CodebookListMulticast-r17 是否存在。 */
    SetupRelease_PDSCH_HARQ_ACK_CodebookList_r16 pdsch_HARQ_ACK_CodebookListMulticast_r17; /**< ASN.1 pdsch-HARQ-ACK-CodebookListMulticast-r17；结构体；OPTIONAL。 */
    bool has_type1CodebookGenerationMode_r17; /**< type1CodebookGenerationMode-r17 是否存在。 */
    MulticastConfig_r17_Type1CodebookGenerationMode_r17 type1CodebookGenerationMode_r17; /**< ASN.1 type1CodebookGenerationMode-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_MulticastConfig_r17
 * @note ASN.1：SetupRelease<MulticastConfig-r17>；源文件第 9754 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_MulticastConfig_r17_Tag {
    SetupRelease_MulticastConfig_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_MulticastConfig_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_MulticastConfig_r17_Tag;

struct SetupRelease_MulticastConfig_r17 {
    SetupRelease_MulticastConfig_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        MulticastConfig_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PDCCH_BlindDetectionCA_CombIndicator_r17
 * @note ASN.1：PDCCH-BlindDetectionCA-CombIndicator-r17；源文件第 9828 行。
 * @note PDCCH-BlindDetectionCA-CombIndicator-r17 ::= SEQUENCE { pdcch-BlindDetectionCA1-r17, pdcch-BlindDetectionCA2-r17, pdcch-Bl...
 */
struct PDCCH_BlindDetectionCA_CombIndicator_r17 {
    bool has_pdcch_BlindDetectionCA1_r17; /**< pdcch-BlindDetectionCA1-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA1_r17; /**< ASN.1 pdcch-BlindDetectionCA1-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA2_r17; /**< pdcch-BlindDetectionCA2-r17 是否存在。 */
    int64_t pdcch_BlindDetectionCA2_r17; /**< ASN.1 pdcch-BlindDetectionCA2-r17；INTEGER (1..15)，位宽 4 bit；OPTIONAL。 */
    int64_t pdcch_BlindDetectionCA3_r17; /**< ASN.1 pdcch-BlindDetectionCA3-r17；INTEGER (1..15)，位宽 4 bit。 */
};


/**
 * @brief SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17
 * @note ASN.1：SetupRelease<PDCCH-BlindDetectionCA-CombIndicator-r17>；源文件第 9755 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag {
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag;

struct SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17 {
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_BlindDetectionCA_CombIndicator_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup5
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup5；源文件第 9718 行。
 */
struct PhysicalCellGroupConfig_ExtGroup5 {
    bool has_pdsch_HARQ_ACK_EnhType3ToAddModList_r17; /**< pdsch-HARQ-ACK-EnhType3ToAddModList-r17 是否存在。 */
    PDSCH_HARQ_ACK_EnhType3_r17* pdsch_HARQ_ACK_EnhType3ToAddModList_r17_items; /**< ASN.1 pdsch-HARQ-ACK-EnhType3ToAddModList-r17；SEQUENCE OF PDSCH_HARQ_ACK_EnhType3_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdsch_HARQ_ACK_EnhType3ToAddModList_r17_count; /**< pdsch-HARQ-ACK-EnhType3ToAddModList-r17 元素个数。 */
    bool has_pdsch_HARQ_ACK_EnhType3ToReleaseList_r17; /**< pdsch-HARQ-ACK-EnhType3ToReleaseList-r17 是否存在。 */
    PDSCH_HARQ_ACK_EnhType3Index_r17* pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_items; /**< ASN.1 pdsch-HARQ-ACK-EnhType3ToReleaseList-r17；SEQUENCE OF PDSCH_HARQ_ACK_EnhType3Index_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdsch_HARQ_ACK_EnhType3ToReleaseList_r17_count; /**< pdsch-HARQ-ACK-EnhType3ToReleaseList-r17 元素个数。 */
    bool has_pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17; /**< pdsch-HARQ-ACK-EnhType3SecondaryToAddModList-r17 是否存在。 */
    PDSCH_HARQ_ACK_EnhType3_r17* pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_items; /**< ASN.1 pdsch-HARQ-ACK-EnhType3SecondaryToAddModList-r17；SEQUENCE OF PDSCH_HARQ_ACK_EnhType3_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdsch_HARQ_ACK_EnhType3SecondaryToAddModList_r17_count; /**< pdsch-HARQ-ACK-EnhType3SecondaryToAddModList-r17 元素个数。 */
    bool has_pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17; /**< pdsch-HARQ-ACK-EnhType3SecondaryToReleaseList-r17 是否存在。 */
    PDSCH_HARQ_ACK_EnhType3Index_r17* pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_items; /**< ASN.1 pdsch-HARQ-ACK-EnhType3SecondaryToReleaseList-r17；SEQUENCE OF PDSCH_HARQ_ACK_EnhType3Index_r17，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pdsch_HARQ_ACK_EnhType3SecondaryToReleaseList_r17_count; /**< pdsch-HARQ-ACK-EnhType3SecondaryToReleaseList-r17 元素个数。 */
    bool has_pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17; /**< pdsch-HARQ-ACK-EnhType3DCI-FieldSecondaryPUCCHgroup-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17 pdsch_HARQ_ACK_EnhType3DCI_FieldSecondaryPUCCHgroup_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3DCI-FieldSecondaryPUCCHgroup-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_EnhType3DCI_Field_r17; /**< pdsch-HARQ-ACK-EnhType3DCI-Field-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_EnhType3DCI_Field_r17 pdsch_HARQ_ACK_EnhType3DCI_Field_r17; /**< ASN.1 pdsch-HARQ-ACK-EnhType3DCI-Field-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_Retx_r17; /**< pdsch-HARQ-ACK-Retx-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_Retx_r17 pdsch_HARQ_ACK_Retx_r17; /**< ASN.1 pdsch-HARQ-ACK-Retx-r17；枚举；OPTIONAL。 */
    bool has_pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17; /**< pdsch-HARQ-ACK-RetxSecondaryPUCCHgroup-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17 pdsch_HARQ_ACK_RetxSecondaryPUCCHgroup_r17; /**< ASN.1 pdsch-HARQ-ACK-RetxSecondaryPUCCHgroup-r17；枚举；OPTIONAL。 */
    bool has_pucch_sSCell_r17; /**< pucch-sSCell-r17 是否存在。 */
    SCellIndex pucch_sSCell_r17; /**< ASN.1 pucch-sSCell-r17；INTEGER (1..31)，位宽 5 bit；OPTIONAL。 */
    bool has_pucch_sSCellSecondaryPUCCHgroup_r17; /**< pucch-sSCellSecondaryPUCCHgroup-r17 是否存在。 */
    SCellIndex pucch_sSCellSecondaryPUCCHgroup_r17; /**< ASN.1 pucch-sSCellSecondaryPUCCHgroup-r17；INTEGER (1..31)，位宽 5 bit；OPTIONAL。 */
    bool has_pucch_sSCellDyn_r17; /**< pucch-sSCellDyn-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDyn_r17 pucch_sSCellDyn_r17; /**< ASN.1 pucch-sSCellDyn-r17；枚举；OPTIONAL。 */
    bool has_pucch_sSCellDynSecondaryPUCCHgroup_r17; /**< pucch-sSCellDynSecondaryPUCCHgroup-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Pucch_sSCellDynSecondaryPUCCHgroup_r17 pucch_sSCellDynSecondaryPUCCHgroup_r17; /**< ASN.1 pucch-sSCellDynSecondaryPUCCHgroup-r17；枚举；OPTIONAL。 */
    bool has_pucch_sSCellPattern_r17; /**< pucch-sSCellPattern-r17 是否存在。 */
    int64_t* pucch_sSCellPattern_r17_items; /**< ASN.1 pucch-sSCellPattern-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pucch_sSCellPattern_r17_count; /**< pucch-sSCellPattern-r17 元素个数。 */
    bool has_pucch_sSCellPatternSecondaryPUCCHgroup_r17; /**< pucch-sSCellPatternSecondaryPUCCHgroup-r17 是否存在。 */
    int64_t* pucch_sSCellPatternSecondaryPUCCHgroup_r17_items; /**< ASN.1 pucch-sSCellPatternSecondaryPUCCHgroup-r17；SEQUENCE OF int64_t，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t pucch_sSCellPatternSecondaryPUCCHgroup_r17_count; /**< pucch-sSCellPatternSecondaryPUCCHgroup-r17 元素个数。 */
    bool has_uci_MuxWithDiffPrio_r17; /**< uci-MuxWithDiffPrio-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrio_r17 uci_MuxWithDiffPrio_r17; /**< ASN.1 uci-MuxWithDiffPrio-r17；枚举；OPTIONAL。 */
    bool has_uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17; /**< uci-MuxWithDiffPrioSecondaryPUCCHgroup-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_Uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17 uci_MuxWithDiffPrioSecondaryPUCCHgroup_r17; /**< ASN.1 uci-MuxWithDiffPrioSecondaryPUCCHgroup-r17；枚举；OPTIONAL。 */
    bool has_simultaneousPUCCH_PUSCH_r17; /**< simultaneousPUCCH-PUSCH-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_r17 simultaneousPUCCH_PUSCH_r17; /**< ASN.1 simultaneousPUCCH-PUSCH-r17；枚举；OPTIONAL。 */
    bool has_simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17; /**< simultaneousPUCCH-PUSCH-SecondaryPUCCHgroup-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_SimultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17 simultaneousPUCCH_PUSCH_SecondaryPUCCHgroup_r17; /**< ASN.1 simultaneousPUCCH-PUSCH-SecondaryPUCCHgroup-r17；枚举；OPTIONAL。 */
    bool has_prioLowDG_HighCG_r17; /**< prioLowDG-HighCG-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_PrioLowDG_HighCG_r17 prioLowDG_HighCG_r17; /**< ASN.1 prioLowDG-HighCG-r17；枚举；OPTIONAL。 */
    bool has_prioHighDG_LowCG_r17; /**< prioHighDG-LowCG-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_PrioHighDG_LowCG_r17 prioHighDG_LowCG_r17; /**< ASN.1 prioHighDG-LowCG-r17；枚举；OPTIONAL。 */
    bool has_twoQCLTypeDforPDCCHRepetition_r17; /**< twoQCLTypeDforPDCCHRepetition-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup5_TwoQCLTypeDforPDCCHRepetition_r17 twoQCLTypeDforPDCCHRepetition_r17; /**< ASN.1 twoQCLTypeDforPDCCHRepetition-r17；枚举；OPTIONAL。 */
    bool has_multicastConfig_r17; /**< multicastConfig-r17 是否存在。 */
    SetupRelease_MulticastConfig_r17 multicastConfig_r17; /**< ASN.1 multicastConfig-r17；结构体；OPTIONAL。 */
    bool has_pdcch_BlindDetectionCA_CombIndicator_r17; /**< pdcch-BlindDetectionCA-CombIndicator-r17 是否存在。 */
    SetupRelease_PDCCH_BlindDetectionCA_CombIndicator_r17 pdcch_BlindDetectionCA_CombIndicator_r17; /**< ASN.1 pdcch-BlindDetectionCA-CombIndicator-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup6
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup6；源文件第 9757 行。
 */
struct PhysicalCellGroupConfig_ExtGroup6 {
    bool has_simultaneousSR_PUSCH_diffPUCCH_Groups_r17; /**< simultaneousSR-PUSCH-diffPUCCH-Groups-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup6_SimultaneousSR_PUSCH_diffPUCCH_Groups_r17 simultaneousSR_PUSCH_diffPUCCH_Groups_r17; /**< ASN.1 simultaneousSR-PUSCH-diffPUCCH-Groups-r17；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_PDCCH_BlindDetection4_r17
 * @note ASN.1：SetupRelease<PDCCH-BlindDetection4-r17>；源文件第 9764 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_PDCCH_BlindDetection4_r17_Tag {
    SetupRelease_PDCCH_BlindDetection4_r17_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_PDCCH_BlindDetection4_r17_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_PDCCH_BlindDetection4_r17_Tag;

struct SetupRelease_PDCCH_BlindDetection4_r17 {
    SetupRelease_PDCCH_BlindDetection4_r17_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        PDCCH_BlindDetection4_r17 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup8
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup8；源文件第 9763 行。
 */
struct PhysicalCellGroupConfig_ExtGroup8 {
    bool has_pdcch_BlindDetection4_r17; /**< pdcch-BlindDetection4-r17 是否存在。 */
    SetupRelease_PDCCH_BlindDetection4_r17 pdcch_BlindDetection4_r17; /**< ASN.1 pdcch-BlindDetection4-r17；结构体；OPTIONAL。 */
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup9
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup9；源文件第 9766 行。
 */
struct PhysicalCellGroupConfig_ExtGroup9 {
    bool has_simultaneousPUCCH_PUSCH_SamePriority_r17; /**< simultaneousPUCCH-PUSCH-SamePriority-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_r17 simultaneousPUCCH_PUSCH_SamePriority_r17; /**< ASN.1 simultaneousPUCCH-PUSCH-SamePriority-r17；枚举；OPTIONAL。 */
    bool has_simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17; /**< simultaneousPUCCH-PUSCH-SamePriority-SecondaryPUCCHgroup-r17 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup9_SimultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17 simultaneousPUCCH_PUSCH_SamePriority_SecondaryPUCCHgroup_r17; /**< ASN.1 simultaneousPUCCH-PUSCH-SamePriority-SecondaryPUCCHgroup-r17；枚举；OPTIONAL。 */
};


/**
 * @brief CellDTRX_DCI_config_r18
 * @note ASN.1：CellDTRX-DCI-config-r18；源文件第 9834 行。
 * @note CellDTRX-DCI-config-r18 ::= SEQUENCE { cellDTRX-RNTI-r18, sizeDCI-2-9-r18 }
 */
struct CellDTRX_DCI_config_r18 {
    RNTI_Value cellDTRX_RNTI_r18; /**< ASN.1 cellDTRX-RNTI-r18；INTEGER (0..65535)，位宽 16 bit。 */
    int64_t sizeDCI_2_9_r18; /**< ASN.1 sizeDCI-2-9-r18；INTEGER (1..140)，位宽 8 bit。 */
};


/**
 * @brief SetupRelease_CellDTRX_DCI_config_r18
 * @note ASN.1：SetupRelease<CellDTRX-DCI-config-r18>；源文件第 9772 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_CellDTRX_DCI_config_r18_Tag {
    SetupRelease_CellDTRX_DCI_config_r18_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_CellDTRX_DCI_config_r18_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_CellDTRX_DCI_config_r18_Tag;

struct SetupRelease_CellDTRX_DCI_config_r18 {
    SetupRelease_CellDTRX_DCI_config_r18_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        CellDTRX_DCI_config_r18 setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PhysicalCellGroupConfig_ExtGroup10
 * @note ASN.1：PhysicalCellGroupConfig_ExtGroup10；源文件第 9770 行。
 */
struct PhysicalCellGroupConfig_ExtGroup10 {
    bool has_ncr_RNTI_r18; /**< ncr-RNTI-r18 是否存在。 */
    RNTI_Value ncr_RNTI_r18; /**< ASN.1 ncr-RNTI-r18；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_cellDTRX_DCI_config_r18; /**< cellDTRX-DCI-config-r18 是否存在。 */
    SetupRelease_CellDTRX_DCI_config_r18 cellDTRX_DCI_config_r18; /**< ASN.1 cellDTRX-DCI-config-r18；结构体；OPTIONAL。 */
    bool has_twoQCL_TypeD_ForMultiDCI_r18; /**< twoQCL-TypeD-ForMultiDCI-r18 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup10_TwoQCL_TypeD_ForMultiDCI_r18 twoQCL_TypeD_ForMultiDCI_r18; /**< ASN.1 twoQCL-TypeD-ForMultiDCI-r18；枚举；OPTIONAL。 */
    bool has_enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18; /**< enableType1HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup10_EnableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 enableType1HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18; /**< ASN.1 enableType1HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18；枚举；OPTIONAL。 */
    bool has_enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18; /**< enableType2HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup10_EnableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 enableType2HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18; /**< ASN.1 enableType2HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18；枚举；OPTIONAL。 */
    bool has_enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18; /**< enableType3HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup10_EnableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18 enableType3HARQ_ACK_MuxForDL_AssignmentAfterUL_Grant_r18; /**< ASN.1 enableType3HARQ-ACK-MuxForDL-AssignmentAfterUL-Grant-r18；枚举；OPTIONAL。 */
    bool has_enableDiffPUCCH_Resource_r18; /**< enableDiffPUCCH-Resource-r18 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup10_EnableDiffPUCCH_Resource_r18 enableDiffPUCCH_Resource_r18; /**< ASN.1 enableDiffPUCCH-Resource-r18；枚举；OPTIONAL。 */
    bool has_enableDiffCB_Size_r18; /**< enableDiffCB-Size-r18 是否存在。 */
    PhysicalCellGroupConfig_ExtGroup10_EnableDiffCB_Size_r18 enableDiffCB_Size_r18; /**< ASN.1 enableDiffCB-Size-r18；枚举；OPTIONAL。 */
};


/**
 * @brief SetupRelease_RNTI_Value
 * @note ASN.1：SetupRelease<RNTI-Value>；源文件第 9682 行。
 * @note CHOICE { release, setup }
 */
/** @brief CHOICE 备选标签；数值即 UPER 编码索引（根备选从 0 开始）。 */
typedef enum SetupRelease_RNTI_Value_Tag {
    SetupRelease_RNTI_Value_Tag_release = 0, /**< ASN.1 release */
    SetupRelease_RNTI_Value_Tag_setup = 1, /**< ASN.1 setup */
} SetupRelease_RNTI_Value_Tag;

struct SetupRelease_RNTI_Value {
    SetupRelease_RNTI_Value_Tag tag; /**< 必须与 u 中实际成员一致。 */
    union {
        Null release; /**< ASN.1 release */
        RNTI_Value setup; /**< ASN.1 setup */
    } u;
};


/**
 * @brief PhysicalCellGroupConfig
 * @note ASN.1：PhysicalCellGroupConfig；源文件第 9673 行。
 * @note PhysicalCellGroupConfig ::= SEQUENCE { harq-ACK-SpatialBundlingPUCCH, harq-ACK-SpatialBundlingPUSCH, p-NR...
 */
struct PhysicalCellGroupConfig {
    bool has_harq_ACK_SpatialBundlingPUCCH; /**< harq-ACK-SpatialBundlingPUCCH 是否存在。 */
    PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUCCH harq_ACK_SpatialBundlingPUCCH; /**< ASN.1 harq-ACK-SpatialBundlingPUCCH；枚举；OPTIONAL。 */
    bool has_harq_ACK_SpatialBundlingPUSCH; /**< harq-ACK-SpatialBundlingPUSCH 是否存在。 */
    PhysicalCellGroupConfig_Harq_ACK_SpatialBundlingPUSCH harq_ACK_SpatialBundlingPUSCH; /**< ASN.1 harq-ACK-SpatialBundlingPUSCH；枚举；OPTIONAL。 */
    bool has_p_NR_FR1; /**< p-NR-FR1 是否存在。 */
    P_Max p_NR_FR1; /**< ASN.1 p-NR-FR1；INTEGER (-30..33)，位宽 6 bit；OPTIONAL。 */
    PhysicalCellGroupConfig_Pdsch_HARQ_ACK_Codebook pdsch_HARQ_ACK_Codebook; /**< ASN.1 pdsch-HARQ-ACK-Codebook；枚举。 */
    bool has_tpc_SRS_RNTI; /**< tpc-SRS-RNTI 是否存在。 */
    RNTI_Value tpc_SRS_RNTI; /**< ASN.1 tpc-SRS-RNTI；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_tpc_PUCCH_RNTI; /**< tpc-PUCCH-RNTI 是否存在。 */
    RNTI_Value tpc_PUCCH_RNTI; /**< ASN.1 tpc-PUCCH-RNTI；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_tpc_PUSCH_RNTI; /**< tpc-PUSCH-RNTI 是否存在。 */
    RNTI_Value tpc_PUSCH_RNTI; /**< ASN.1 tpc-PUSCH-RNTI；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_sp_CSI_RNTI; /**< sp-CSI-RNTI 是否存在。 */
    RNTI_Value sp_CSI_RNTI; /**< ASN.1 sp-CSI-RNTI；INTEGER (0..65535)，位宽 16 bit；OPTIONAL。 */
    bool has_cs_RNTI; /**< cs-RNTI 是否存在。 */
    SetupRelease_RNTI_Value cs_RNTI; /**< ASN.1 cs-RNTI；结构体；OPTIONAL。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup8; /**< 第 8 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup8 extGroup8; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup9; /**< 第 9 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup9 extGroup9; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup10; /**< 第 10 组是否出现。 */
    PhysicalCellGroupConfig_ExtGroup10 extGroup10; /**< 组内容；has_ 为 true 时有效。 */
};


/**
 * @brief CellGroupConfig
 * @note ASN.1：CellGroupConfig；源文件第 4837 行。
 * @note CellGroupConfig ::= SEQUENCE { cellGroupId, rlc-BearerToAddModList, rlc-BearerToReleaseList, mac-...
 */
struct CellGroupConfig {
    CellGroupId cellGroupId; /**< ASN.1 cellGroupId；INTEGER (0..3)，位宽 2 bit。 */
    bool has_rlc_BearerToAddModList; /**< rlc-BearerToAddModList 是否存在。 */
    RLC_BearerConfig* rlc_BearerToAddModList_items; /**< ASN.1 rlc-BearerToAddModList；SEQUENCE OF RLC_BearerConfig，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rlc_BearerToAddModList_count; /**< rlc-BearerToAddModList 元素个数。 */
    bool has_rlc_BearerToReleaseList; /**< rlc-BearerToReleaseList 是否存在。 */
    LogicalChannelIdentity* rlc_BearerToReleaseList_items; /**< ASN.1 rlc-BearerToReleaseList；SEQUENCE OF LogicalChannelIdentity，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t rlc_BearerToReleaseList_count; /**< rlc-BearerToReleaseList 元素个数。 */
    bool has_mac_CellGroupConfig; /**< mac-CellGroupConfig 是否存在。 */
    MAC_CellGroupConfig mac_CellGroupConfig; /**< ASN.1 mac-CellGroupConfig；结构体；OPTIONAL。 */
    bool has_physicalCellGroupConfig; /**< physicalCellGroupConfig 是否存在。 */
    PhysicalCellGroupConfig physicalCellGroupConfig; /**< ASN.1 physicalCellGroupConfig；结构体；OPTIONAL。 */
    bool has_spCellConfig; /**< spCellConfig 是否存在。 */
    SpCellConfig spCellConfig; /**< ASN.1 spCellConfig；结构体；OPTIONAL。 */
    bool has_sCellToAddModList; /**< sCellToAddModList 是否存在。 */
    SCellConfig* sCellToAddModList_items; /**< ASN.1 sCellToAddModList；SEQUENCE OF SCellConfig，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sCellToAddModList_count; /**< sCellToAddModList 元素个数。 */
    bool has_sCellToReleaseList; /**< sCellToReleaseList 是否存在。 */
    SCellIndex* sCellToReleaseList_items; /**< ASN.1 sCellToReleaseList；SEQUENCE OF SCellIndex，SIZE (0..0)；OPTIONAL；元素数组（库 malloc）。 */
    uint32_t sCellToReleaseList_count; /**< sCellToReleaseList 元素个数。 */
    /* [[ ]] 扩展添加组（每组一个开放类型） */
    bool has_extGroup1; /**< 第 1 组是否出现。 */
    CellGroupConfig_ExtGroup1 extGroup1; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup2; /**< 第 2 组是否出现。 */
    CellGroupConfig_ExtGroup2 extGroup2; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup3; /**< 第 3 组是否出现。 */
    CellGroupConfig_ExtGroup3 extGroup3; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup4; /**< 第 4 组是否出现。 */
    CellGroupConfig_ExtGroup4 extGroup4; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup5; /**< 第 5 组是否出现。 */
    CellGroupConfig_ExtGroup5 extGroup5; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup6; /**< 第 6 组是否出现。 */
    CellGroupConfig_ExtGroup6 extGroup6; /**< 组内容；has_ 为 true 时有效。 */
    bool has_extGroup7; /**< 第 7 组是否出现。 */
    CellGroupConfig_ExtGroup7 extGroup7; /**< 组内容；has_ 为 true 时有效。 */
};


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART017_H */
