/* ============================================================================
 * types/rrc_types_part007.h — rrc_types.h 的分块定义（自动生成）
 *
 * 自动生成，请勿手工修改。
 * Generator      : rrcgen 2.0.0
 * ASN.1          : 3GPP TS 38.331 v18.10.0（module NR-RRC-Definitions）
 * Input SHA-256  : c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c
 * 重生成命令     :
 *   cmake -S . -B build -DRRC_CODEC_REGENERATE=ON && cmake --build build --target rrc_codec_regenerate
 * ========================================================================== */

#ifndef RRC_CODEC_TYPES_PART007_H
#define RRC_CODEC_TYPES_PART007_H

#include "rrc_types_part000.h"
#include "rrc_types_part001.h"
#include "rrc_types_part002.h"
#include "rrc_types_part003.h"
#include "rrc_types_part004.h"
#include "rrc_types_part005.h"
#include "rrc_types_part006.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 枚举 SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource（ASN.1 maxNumberTxPortsPerResource，源文件第 16109 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource {
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p2 = 0, /**< ASN.1 p2 */
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p4 = 1, /**< ASN.1 p4 */
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p8 = 2, /**< ASN.1 p8 */
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p12 = 3, /**< ASN.1 p12 */
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p16 = 4, /**< ASN.1 p16 */
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p24 = 5, /**< ASN.1 p24 */
    SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource_p32 = 6, /**< ASN.1 p32 */
} SupportedCSI_RS_Resource_MaxNumberTxPortsPerResource;


/**
 * @brief 枚举 SupportedCSI_RS_ReportSetting_r18_MaxN4_r18（ASN.1 maxN4-r18，源文件第 16115 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedCSI_RS_ReportSetting_r18_MaxN4_r18 {
    SupportedCSI_RS_ReportSetting_r18_MaxN4_r18_n1 = 0, /**< ASN.1 n1 */
    SupportedCSI_RS_ReportSetting_r18_MaxN4_r18_n2 = 1, /**< ASN.1 n2 */
    SupportedCSI_RS_ReportSetting_r18_MaxN4_r18_n4 = 2, /**< ASN.1 n4 */
    SupportedCSI_RS_ReportSetting_r18_MaxN4_r18_n8 = 3, /**< ASN.1 n8 */
} SupportedCSI_RS_ReportSetting_r18_MaxN4_r18;


/**
 * @brief 枚举 SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18（ASN.1 maxNumberTxPortsPerResource-r18，源文件第 16116 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18 {
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p2 = 0, /**< ASN.1 p2 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p4 = 1, /**< ASN.1 p4 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p8 = 2, /**< ASN.1 p8 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p12 = 3, /**< ASN.1 p12 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p16 = 4, /**< ASN.1 p16 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p24 = 5, /**< ASN.1 p24 */
    SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18_p32 = 6, /**< ASN.1 p32 */
} SupportedCSI_RS_ReportSetting_r18_MaxNumberTxPortsPerResource_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18（ASN.1 maximumPRS-BandwidthAcrossAllHopsFR1-r18，源文件第 16125 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18_mhz40 = 0, /**< ASN.1 mhz40 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18_mhz50 = 1, /**< ASN.1 mhz50 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18_mhz80 = 2, /**< ASN.1 mhz80 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18_mhz100 = 3, /**< ASN.1 mhz100 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR1_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18（ASN.1 maximumPRS-BandwidthAcrossAllHopsFR2-r18，源文件第 16126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18_mhz100 = 0, /**< ASN.1 mhz100 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18_mhz200 = 1, /**< ASN.1 mhz200 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18_mhz400 = 2, /**< ASN.1 mhz400 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumPRS_BandwidthAcrossAllHopsFR2_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18（ASN.1 maximumFH-Hops-r18，源文件第 16127 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18_n2 = 0, /**< ASN.1 n2 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18_n3 = 1, /**< ASN.1 n3 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18_n4 = 2, /**< ASN.1 n4 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18_n5 = 3, /**< ASN.1 n5 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18_n6 = 4, /**< ASN.1 n6 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_MaximumFH_Hops_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18（ASN.1 processingDuration-r18/processingPRS-SymbolsDurationN3-r18，源文件第 16129 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_msDot125 = 0, /**< ASN.1 msDot125 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_msDot25 = 1, /**< ASN.1 msDot25 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_msDot5 = 2, /**< ASN.1 msDot5 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms1 = 3, /**< ASN.1 ms1 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms2 = 4, /**< ASN.1 ms2 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms4 = 5, /**< ASN.1 ms4 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms6 = 6, /**< ASN.1 ms6 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms8 = 7, /**< ASN.1 ms8 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms12 = 8, /**< ASN.1 ms12 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms16 = 9, /**< ASN.1 ms16 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms20 = 10, /**< ASN.1 ms20 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms25 = 11, /**< ASN.1 ms25 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms30 = 12, /**< ASN.1 ms30 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms32 = 13, /**< ASN.1 ms32 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms35 = 14, /**< ASN.1 ms35 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms40 = 15, /**< ASN.1 ms40 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms45 = 16, /**< ASN.1 ms45 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18_ms50 = 17, /**< ASN.1 ms50 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingPRS_SymbolsDurationN3_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18（ASN.1 processingDuration-r18/processingDurationT3-r18，源文件第 16131 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms8 = 0, /**< ASN.1 ms8 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms16 = 1, /**< ASN.1 ms16 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms20 = 2, /**< ASN.1 ms20 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms30 = 3, /**< ASN.1 ms30 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms40 = 4, /**< ASN.1 ms40 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms80 = 5, /**< ASN.1 ms80 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms160 = 6, /**< ASN.1 ms160 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms320 = 7, /**< ASN.1 ms320 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms640 = 8, /**< ASN.1 ms640 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18_ms1280 = 9, /**< ASN.1 ms1280 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_ProcessingDuration_r18_ProcessingDurationT3_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18（ASN.1 rf-RxRetunTimeFR1-r18，源文件第 16133 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18_n70 = 0, /**< ASN.1 n70 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18_n140 = 1, /**< ASN.1 n140 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18_n210 = 2, /**< ASN.1 n210 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR1_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18（ASN.1 rf-RxRetunTimeFR2-r18，源文件第 16134 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18_n35 = 0, /**< ASN.1 n35 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18_n70 = 1, /**< ASN.1 n70 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18_n140 = 2, /**< ASN.1 n140 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_Rf_RxRetunTimeFR2_r18;


/**
 * @brief 枚举 DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18（ASN.1 numOfOverlappingPRB-r18，源文件第 16135 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18 {
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18_n0 = 0, /**< ASN.1 n0 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18_n1 = 1, /**< ASN.1 n1 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18_n2 = 2, /**< ASN.1 n2 */
    DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18_n4 = 3, /**< ASN.1 n4 */
} DL_PRS_MeasurementWithRxFH_RRC_Connected_r18_NumOfOverlappingPRB_r18;


/**
 * @brief 枚举 ERedCapParameters_r18_SupportOfERedCap_r18（ASN.1 supportOfERedCap-r18，源文件第 16144 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ERedCapParameters_r18_SupportOfERedCap_r18 {
    ERedCapParameters_r18_SupportOfERedCap_r18_supported = 0, /**< ASN.1 supported */
} ERedCapParameters_r18_SupportOfERedCap_r18;


/**
 * @brief 枚举 ERedCapParameters_r18_ERedCapNotReducedBB_BW_r18（ASN.1 eRedCapNotReducedBB-BW-r18，源文件第 16146 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ERedCapParameters_r18_ERedCapNotReducedBB_BW_r18 {
    ERedCapParameters_r18_ERedCapNotReducedBB_BW_r18_supported = 0, /**< ASN.1 supported */
} ERedCapParameters_r18_ERedCapNotReducedBB_BW_r18;


/**
 * @brief 枚举 ERedCapParameters_r18_ERedCapIgnoreCapabilityFiltering_r18（ASN.1 eRedCapIgnoreCapabilityFiltering-r18，源文件第 16147 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum ERedCapParameters_r18_ERedCapIgnoreCapabilityFiltering_r18 {
    ERedCapParameters_r18_ERedCapIgnoreCapabilityFiltering_r18_supported = 0, /**< ASN.1 supported */
} ERedCapParameters_r18_ERedCapIgnoreCapabilityFiltering_r18;


/**
 * @brief 枚举 FeatureSetDownlink_ScalingFactor（ASN.1 scalingFactor，源文件第 16180 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_ScalingFactor {
    FeatureSetDownlink_ScalingFactor_f0p4 = 0, /**< ASN.1 f0p4 */
    FeatureSetDownlink_ScalingFactor_f0p75 = 1, /**< ASN.1 f0p75 */
    FeatureSetDownlink_ScalingFactor_f0p8 = 2, /**< ASN.1 f0p8 */
} FeatureSetDownlink_ScalingFactor;


/**
 * @brief 枚举 FeatureSetDownlink_Dummy8（ASN.1 dummy8，源文件第 16181 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Dummy8 {
    FeatureSetDownlink_Dummy8_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_Dummy8;


/**
 * @brief 枚举 FeatureSetDownlink_ScellWithoutSSB（ASN.1 scellWithoutSSB，源文件第 16182 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_ScellWithoutSSB {
    FeatureSetDownlink_ScellWithoutSSB_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_ScellWithoutSSB;


/**
 * @brief 枚举 FeatureSetDownlink_Csi_RS_MeasSCellWithoutSSB（ASN.1 csi-RS-MeasSCellWithoutSSB，源文件第 16183 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Csi_RS_MeasSCellWithoutSSB {
    FeatureSetDownlink_Csi_RS_MeasSCellWithoutSSB_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_Csi_RS_MeasSCellWithoutSSB;


/**
 * @brief 枚举 FeatureSetDownlink_Dummy1（ASN.1 dummy1，源文件第 16184 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Dummy1 {
    FeatureSetDownlink_Dummy1_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_Dummy1;


/**
 * @brief 枚举 FeatureSetDownlink_Type1_3_CSS（ASN.1 type1-3-CSS，源文件第 16185 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Type1_3_CSS {
    FeatureSetDownlink_Type1_3_CSS_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_Type1_3_CSS;


/**
 * @brief 枚举 FeatureSetDownlink_Pdcch_MonitoringAnyOccasions（ASN.1 pdcch-MonitoringAnyOccasions，源文件第 16186 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Pdcch_MonitoringAnyOccasions {
    FeatureSetDownlink_Pdcch_MonitoringAnyOccasions_withoutDCI_Gap = 0, /**< ASN.1 withoutDCI-Gap */
    FeatureSetDownlink_Pdcch_MonitoringAnyOccasions_withDCI_Gap = 1, /**< ASN.1 withDCI-Gap */
} FeatureSetDownlink_Pdcch_MonitoringAnyOccasions;


/**
 * @brief 枚举 FeatureSetDownlink_Dummy2（ASN.1 dummy2，源文件第 16187 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Dummy2 {
    FeatureSetDownlink_Dummy2_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_Dummy2;


/**
 * @brief 枚举 FeatureSetDownlink_Ue_SpecificUL_DL_Assignment（ASN.1 ue-SpecificUL-DL-Assignment，源文件第 16188 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Ue_SpecificUL_DL_Assignment {
    FeatureSetDownlink_Ue_SpecificUL_DL_Assignment_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_Ue_SpecificUL_DL_Assignment;


/**
 * @brief 枚举 FeatureSetDownlink_SearchSpaceSharingCA_DL（ASN.1 searchSpaceSharingCA-DL，源文件第 16189 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_SearchSpaceSharingCA_DL {
    FeatureSetDownlink_SearchSpaceSharingCA_DL_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_SearchSpaceSharingCA_DL;


/**
 * @brief 枚举 FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz（ASN.1 timeDurationForQCL/scs-60kHz，源文件第 16191 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz {
    FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz_s7 = 0, /**< ASN.1 s7 */
    FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz_s14 = 1, /**< ASN.1 s14 */
    FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz_s28 = 2, /**< ASN.1 s28 */
} FeatureSetDownlink_TimeDurationForQCL_Scs_60kHz;


/**
 * @brief 枚举 FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz（ASN.1 timeDurationForQCL/scs-120kHz，源文件第 16192 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz {
    FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz_s14 = 0, /**< ASN.1 s14 */
    FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz_s28 = 1, /**< ASN.1 s28 */
} FeatureSetDownlink_TimeDurationForQCL_Scs_120kHz;


/**
 * @brief 枚举 FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz（ASN.1 pdsch-ProcessingType1-DifferentTB-PerSlot/scs-15kHz，源文件第 16195 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz {
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz;


/**
 * @brief 枚举 FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz（ASN.1 pdsch-ProcessingType1-DifferentTB-PerSlot/scs-30kHz，源文件第 16196 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz {
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz;


/**
 * @brief 枚举 FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz（ASN.1 pdsch-ProcessingType1-DifferentTB-PerSlot/scs-60kHz，源文件第 16197 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz {
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz;


/**
 * @brief 枚举 FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz（ASN.1 pdsch-ProcessingType1-DifferentTB-PerSlot/scs-120kHz，源文件第 16198 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz {
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetDownlink_Pdsch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_OneFL_DMRS_TwoAdditionalDMRS_DL（ASN.1 oneFL-DMRS-TwoAdditionalDMRS-DL，源文件第 16208 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_OneFL_DMRS_TwoAdditionalDMRS_DL {
    FeatureSetDownlink_v1540_OneFL_DMRS_TwoAdditionalDMRS_DL_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1540_OneFL_DMRS_TwoAdditionalDMRS_DL;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_AdditionalDMRS_DL_Alt（ASN.1 additionalDMRS-DL-Alt，源文件第 16209 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_AdditionalDMRS_DL_Alt {
    FeatureSetDownlink_v1540_AdditionalDMRS_DL_Alt_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1540_AdditionalDMRS_DL_Alt;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_TwoFL_DMRS_TwoAdditionalDMRS_DL（ASN.1 twoFL-DMRS-TwoAdditionalDMRS-DL，源文件第 16210 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_TwoFL_DMRS_TwoAdditionalDMRS_DL {
    FeatureSetDownlink_v1540_TwoFL_DMRS_TwoAdditionalDMRS_DL_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1540_TwoFL_DMRS_TwoAdditionalDMRS_DL;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_OneFL_DMRS_ThreeAdditionalDMRS_DL（ASN.1 oneFL-DMRS-ThreeAdditionalDMRS-DL，源文件第 16211 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_OneFL_DMRS_ThreeAdditionalDMRS_DL {
    FeatureSetDownlink_v1540_OneFL_DMRS_ThreeAdditionalDMRS_DL_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1540_OneFL_DMRS_ThreeAdditionalDMRS_DL;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz（ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGap/scs-15kHz，源文件第 16213 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz {
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz_set1 = 0, /**< ASN.1 set1 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz_set2 = 1, /**< ASN.1 set2 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz_set3 = 2, /**< ASN.1 set3 */
} FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_15kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz（ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGap/scs-30kHz，源文件第 16214 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz {
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz_set1 = 0, /**< ASN.1 set1 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz_set2 = 1, /**< ASN.1 set2 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz_set3 = 2, /**< ASN.1 set3 */
} FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_30kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz（ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGap/scs-60kHz，源文件第 16215 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz {
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz_set1 = 0, /**< ASN.1 set1 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz_set2 = 1, /**< ASN.1 set2 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz_set3 = 2, /**< ASN.1 set3 */
} FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_60kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz（ASN.1 pdcch-MonitoringAnyOccasionsWithSpanGap/scs-120kHz，源文件第 16216 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz {
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz_set1 = 0, /**< ASN.1 set1 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz_set2 = 1, /**< ASN.1 set2 */
    FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz_set3 = 2, /**< ASN.1 set3 */
} FeatureSetDownlink_v1540_Pdcch_MonitoringAnyOccasionsWithSpanGap_Scs_120kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Pdsch_SeparationWithGap（ASN.1 pdsch-SeparationWithGap，源文件第 16218 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Pdsch_SeparationWithGap {
    FeatureSetDownlink_v1540_Pdsch_SeparationWithGap_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1540_Pdsch_SeparationWithGap;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz（ASN.1 pdsch-ProcessingType2-Limited/differentTB-PerSlot-SCS-30kHz，源文件第 16225 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz {
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz_upto1 = 0, /**< ASN.1 upto1 */
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1540_Pdsch_ProcessingType2_Limited_DifferentTB_PerSlot_SCS_30kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1540_Dl_MCS_TableAlt_DynamicIndication（ASN.1 dl-MCS-TableAlt-DynamicIndication，源文件第 16227 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1540_Dl_MCS_TableAlt_DynamicIndication {
    FeatureSetDownlink_v1540_Dl_MCS_TableAlt_DynamicIndication_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1540_Dl_MCS_TableAlt_DynamicIndication;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16（ASN.1 cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-15kHz-r16，源文件第 16237 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16（ASN.1 cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-30kHz-r16，源文件第 16238 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16（ASN.1 cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-60kHz-r16，源文件第 16239 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16（ASN.1 cbgPDSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-120kHz-r16，源文件第 16240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16（ASN.1 cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-15kHz-r16，源文件第 16245 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16（ASN.1 cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-30kHz-r16，源文件第 16246 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16（ASN.1 cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-60kHz-r16，源文件第 16247 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16（ASN.1 cbgPDSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-120kHz-r16，源文件第 16248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16 {
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_one = 0, /**< ASN.1 one */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetDownlink_v1610_CbgPDSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqDiffSCS_DAPS_r16（ASN.1 intraFreqDAPS-r16/intraFreqDiffSCS-DAPS-r16，源文件第 16251 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqDiffSCS_DAPS_r16 {
    FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqDiffSCS_DAPS_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqDiffSCS_DAPS_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqAsyncDAPS_r16（ASN.1 intraFreqDAPS-r16/intraFreqAsyncDAPS-r16，源文件第 16252 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqAsyncDAPS_r16 {
    FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqAsyncDAPS_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1610_IntraFreqDAPS_r16_IntraFreqAsyncDAPS_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_Pdcch_MonitoringMixed_r16（ASN.1 pdcch-MonitoringMixed-r16，源文件第 16270 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_Pdcch_MonitoringMixed_r16 {
    FeatureSetDownlink_v1610_Pdcch_MonitoringMixed_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1610_Pdcch_MonitoringMixed_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-15kHz-120kHz-r16，源文件第 16274 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16 {
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-15kHz-60kHz-r16，源文件第 16275 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16 {
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-30kHz-120kHz-r16，源文件第 16276 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16 {
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-15kHz-30kHz-r16，源文件第 16277 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16 {
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16_n2 = 0, /**< ASN.1 n2 */
} FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-30kHz-60kHz-r16，源文件第 16278 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16 {
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16_n2 = 0, /**< ASN.1 n2 */
} FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-60kHz-120kHz-r16，源文件第 16279 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16 {
    FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16_n2 = 0, /**< ASN.1 n2 */
} FeatureSetDownlink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1610_SingleDCI_SDM_scheme_r16（ASN.1 singleDCI-SDM-scheme-r16，源文件第 16283 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1610_SingleDCI_SDM_scheme_r16 {
    FeatureSetDownlink_v1610_SingleDCI_SDM_scheme_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1610_SingleDCI_SDM_scheme_r16;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17（ASN.1 scalingFactor-1024QAM-FR1-r17，源文件第 16288 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17 {
    FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17_f0p4 = 0, /**< ASN.1 f0p4 */
    FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17_f0p75 = 1, /**< ASN.1 f0p75 */
    FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17_f0p8 = 2, /**< ASN.1 f0p8 */
} FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz（ASN.1 timeDurationForQCL-v1710/scs-480kHz，源文件第 16291 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz {
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz_s56 = 0, /**< ASN.1 s56 */
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz_s112 = 1, /**< ASN.1 s112 */
} FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz（ASN.1 timeDurationForQCL-v1710/scs-960kHz，源文件第 16292 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz {
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz_s112 = 0, /**< ASN.1 s112 */
    FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz_s224 = 1, /**< ASN.1 s224 */
} FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeA_r17（ASN.1 sfn-SchemeA-r17，源文件第 16295 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeA_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeA_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeA_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeA_PDCCH_only_r17（ASN.1 sfn-SchemeA-PDCCH-only-r17，源文件第 16297 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeA_PDCCH_only_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeA_PDCCH_only_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeA_PDCCH_only_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeA_DynamicSwitching_r17（ASN.1 sfn-SchemeA-DynamicSwitching-r17，源文件第 16299 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeA_DynamicSwitching_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeA_DynamicSwitching_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeA_DynamicSwitching_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeA_PDSCH_only_r17（ASN.1 sfn-SchemeA-PDSCH-only-r17，源文件第 16301 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeA_PDSCH_only_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeA_PDSCH_only_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeA_PDSCH_only_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeB_r17（ASN.1 sfn-SchemeB-r17，源文件第 16303 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeB_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeB_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeB_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeB_DynamicSwitching_r17（ASN.1 sfn-SchemeB-DynamicSwitching-r17，源文件第 16305 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeB_DynamicSwitching_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeB_DynamicSwitching_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeB_DynamicSwitching_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_Sfn_SchemeB_PDSCH_only_r17（ASN.1 sfn-SchemeB-PDSCH-only-r17，源文件第 16307 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_Sfn_SchemeB_PDSCH_only_r17 {
    FeatureSetDownlink_v1700_Sfn_SchemeB_PDSCH_only_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_Sfn_SchemeB_PDSCH_only_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_MTRP_PDCCH_multiDCI_multiTRP_r17（ASN.1 mTRP-PDCCH-multiDCI-multiTRP-r17，源文件第 16321 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_MTRP_PDCCH_multiDCI_multiTRP_r17 {
    FeatureSetDownlink_v1700_MTRP_PDCCH_multiDCI_multiTRP_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_MTRP_PDCCH_multiDCI_multiTRP_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_DynamicMulticastPCell_r17（ASN.1 dynamicMulticastPCell-r17，源文件第 16323 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_DynamicMulticastPCell_r17 {
    FeatureSetDownlink_v1700_DynamicMulticastPCell_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1700_DynamicMulticastPCell_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17（ASN.1 mTRP-PDCCH-Repetition-r17/maxNumOverlaps-r17，源文件第 16327 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17 {
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n3 = 2, /**< ASN.1 n3 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n5 = 3, /**< ASN.1 n5 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n10 = 4, /**< ASN.1 n10 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n20 = 5, /**< ASN.1 n20 */
    FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17_n40 = 6, /**< ASN.1 n40 */
} FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Rtt_BasedPDC_CSI_RS_ForTracking_r17（ASN.1 rtt-BasedPDC-CSI-RS-ForTracking-r17，源文件第 16333 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Rtt_BasedPDC_CSI_RS_ForTracking_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_CSI_RS_ForTracking_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1720_Rtt_BasedPDC_CSI_RS_ForTracking_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17（ASN.1 rtt-BasedPDC-PRS-r17/maxNumberPRS-Resource-r17，源文件第 16336 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n4 = 2, /**< ASN.1 n4 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n8 = 3, /**< ASN.1 n8 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n16 = 4, /**< ASN.1 n16 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n32 = 5, /**< ASN.1 n32 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17_n64 = 6, /**< ASN.1 n64 */
} FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17（ASN.1 rtt-BasedPDC-PRS-r17/maxNumberPRS-ResourceProcessedPerSlot-r17/scs-15kHz-r17，源文件第 16338 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n4 = 2, /**< ASN.1 n4 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n6 = 3, /**< ASN.1 n6 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n8 = 4, /**< ASN.1 n8 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n12 = 5, /**< ASN.1 n12 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n16 = 6, /**< ASN.1 n16 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n24 = 7, /**< ASN.1 n24 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n32 = 8, /**< ASN.1 n32 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n48 = 9, /**< ASN.1 n48 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17_n64 = 10, /**< ASN.1 n64 */
} FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17（ASN.1 rtt-BasedPDC-PRS-r17/maxNumberPRS-ResourceProcessedPerSlot-r17/scs-30kHz-r17，源文件第 16339 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n4 = 2, /**< ASN.1 n4 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n6 = 3, /**< ASN.1 n6 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n8 = 4, /**< ASN.1 n8 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n12 = 5, /**< ASN.1 n12 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n16 = 6, /**< ASN.1 n16 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n24 = 7, /**< ASN.1 n24 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n32 = 8, /**< ASN.1 n32 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n48 = 9, /**< ASN.1 n48 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17_n64 = 10, /**< ASN.1 n64 */
} FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17（ASN.1 rtt-BasedPDC-PRS-r17/maxNumberPRS-ResourceProcessedPerSlot-r17/scs-60kHz-r17，源文件第 16340 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n4 = 2, /**< ASN.1 n4 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n6 = 3, /**< ASN.1 n6 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n8 = 4, /**< ASN.1 n8 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n12 = 5, /**< ASN.1 n12 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n16 = 6, /**< ASN.1 n16 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n24 = 7, /**< ASN.1 n24 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n32 = 8, /**< ASN.1 n32 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n48 = 9, /**< ASN.1 n48 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17_n64 = 10, /**< ASN.1 n64 */
} FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17（ASN.1 rtt-BasedPDC-PRS-r17/maxNumberPRS-ResourceProcessedPerSlot-r17/scs-120kHz-r17，源文件第 16341 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17 {
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n4 = 2, /**< ASN.1 n4 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n6 = 3, /**< ASN.1 n6 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n8 = 4, /**< ASN.1 n8 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n12 = 5, /**< ASN.1 n12 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n16 = 6, /**< ASN.1 n16 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n24 = 7, /**< ASN.1 n24 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n32 = 8, /**< ASN.1 n32 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n48 = 9, /**< ASN.1 n48 */
    FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17_n64 = 10, /**< ASN.1 n64 */
} FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1720_Sps_Multicast_r17（ASN.1 sps-Multicast-r17，源文件第 16345 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1720_Sps_Multicast_r17 {
    FeatureSetDownlink_v1720_Sps_Multicast_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1720_Sps_Multicast_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1730_Prs_AsSpatialRelationRS_For_SRS_r17（ASN.1 prs-AsSpatialRelationRS-For-SRS-r17，源文件第 16350 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1730_Prs_AsSpatialRelationRS_For_SRS_r17 {
    FeatureSetDownlink_v1730_Prs_AsSpatialRelationRS_For_SRS_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1730_Prs_AsSpatialRelationRS_For_SRS_r17;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_TypeA_DMRS_r18（ASN.1 pdsch-TypeA-DMRS-r18，源文件第 16355 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_TypeA_DMRS_r18 {
    FeatureSetDownlink_v1800_Pdsch_TypeA_DMRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_TypeA_DMRS_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_TypeB_DMRS_r18（ASN.1 pdsch-TypeB-DMRS-r18，源文件第 16357 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_TypeB_DMRS_r18 {
    FeatureSetDownlink_v1800_Pdsch_TypeB_DMRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_TypeB_DMRS_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition2Symbol_r18（ASN.1 pdsch-1SymbolFL-DMRS-Addition2Symbol-r18，源文件第 16359 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition2Symbol_r18 {
    FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition2Symbol_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition2Symbol_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_AlternativeDMRS_Coexistence_r18（ASN.1 pdsch-AlternativeDMRS-Coexistence-r18，源文件第 16361 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_AlternativeDMRS_Coexistence_r18 {
    FeatureSetDownlink_v1800_Pdsch_AlternativeDMRS_Coexistence_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_AlternativeDMRS_Coexistence_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_r18（ASN.1 pdsch-2SymbolFL-DMRS-r18，源文件第 16363 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_r18 {
    FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_Addition2Symbol_r18（ASN.1 pdsch-2SymbolFL-DMRS-Addition2Symbol-r18，源文件第 16365 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_Addition2Symbol_r18 {
    FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_Addition2Symbol_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_Addition2Symbol_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition3Symbol_r18（ASN.1 pdsch-1SymbolFL-DMRS-Addition3Symbol-r18，源文件第 16367 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition3Symbol_r18 {
    FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition3Symbol_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition3Symbol_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18（ASN.1 pdsch-DMRS-Type-r18，源文件第 16369 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18 {
    FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18_etype1 = 0, /**< ASN.1 etype1 */
    FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18_etype1And2 = 1, /**< ASN.1 etype1And2 */
} FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_1PortDL_PTRS_r18（ASN.1 pdsch-1PortDL-PTRS-r18，源文件第 16371 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_1PortDL_PTRS_r18 {
    FeatureSetDownlink_v1800_Pdsch_1PortDL_PTRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_1PortDL_PTRS_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_2PortDL_PTRS_r18（ASN.1 pdsch-2PortDL-PTRS-r18，源文件第 16373 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_2PortDL_PTRS_r18 {
    FeatureSetDownlink_v1800_Pdsch_2PortDL_PTRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_2PortDL_PTRS_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_MappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18（ASN.1 mappingTypeA-1SymbolFL-DMRS-Addition2Symbol-r18，源文件第 16375 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_MappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18 {
    FeatureSetDownlink_v1800_MappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_MappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_ReceptionWithoutSchedulingRestriction_r18（ASN.1 pdsch-ReceptionWithoutSchedulingRestriction-r18，源文件第 16378 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_ReceptionWithoutSchedulingRestriction_r18 {
    FeatureSetDownlink_v1800_Pdsch_ReceptionWithoutSchedulingRestriction_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_ReceptionWithoutSchedulingRestriction_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeA_r18（ASN.1 pdsch-ReceptionSchemeA-r18，源文件第 16380 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeA_r18 {
    FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeA_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeA_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeB_r18（ASN.1 pdsch-ReceptionSchemeB-r18，源文件第 16382 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeB_r18 {
    FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeB_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeB_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Dmrs_MultiTRP_SingleDCI_r18（ASN.1 dmrs-MultiTRP-SingleDCI-r18，源文件第 16385 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Dmrs_MultiTRP_SingleDCI_r18 {
    FeatureSetDownlink_v1800_Dmrs_MultiTRP_SingleDCI_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Dmrs_MultiTRP_SingleDCI_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Dmrs_MultiTRP_AddtionRows_r18（ASN.1 dmrs-MultiTRP-AddtionRows-r18，源文件第 16387 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Dmrs_MultiTRP_AddtionRows_r18 {
    FeatureSetDownlink_v1800_Dmrs_MultiTRP_AddtionRows_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Dmrs_MultiTRP_AddtionRows_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Dmrs_MultiTRP_MultiDCI_r18（ASN.1 dmrs-MultiTRP-MultiDCI-r18，源文件第 16389 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Dmrs_MultiTRP_MultiDCI_r18 {
    FeatureSetDownlink_v1800_Dmrs_MultiTRP_MultiDCI_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Dmrs_MultiTRP_MultiDCI_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_BwpOperationMeasWithoutInterrupt_r18（ASN.1 bwpOperationMeasWithoutInterrupt-r18，源文件第 16398 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_BwpOperationMeasWithoutInterrupt_r18 {
    FeatureSetDownlink_v1800_BwpOperationMeasWithoutInterrupt_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_BwpOperationMeasWithoutInterrupt_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_15kHz_r18（ASN.1 pdcch-MonitoringSpan2-2-r18/pdsch-ProcessingType1-r18/scs-15kHz-r18，源文件第 16403 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_15kHz_r18 {
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_15kHz_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_15kHz_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_30kHz_r18（ASN.1 pdcch-MonitoringSpan2-2-r18/pdsch-ProcessingType1-r18/scs-30kHz-r18，源文件第 16404 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_30kHz_r18 {
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_30kHz_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_30kHz_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_15kHz_r18（ASN.1 pdcch-MonitoringSpan2-2-r18/pdsch-ProcessingType2-r18/scs-15kHz-r18，源文件第 16407 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_15kHz_r18 {
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_15kHz_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_15kHz_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_30kHz_r18（ASN.1 pdcch-MonitoringSpan2-2-r18/pdsch-ProcessingType2-r18/scs-30kHz-r18，源文件第 16408 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_30kHz_r18 {
    FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_30kHz_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_30kHz_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_Pdcch_MonitoringMixed_r18（ASN.1 pdcch-MonitoringMixed-r18，源文件第 16412 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_Pdcch_MonitoringMixed_r18 {
    FeatureSetDownlink_v1800_Pdcch_MonitoringMixed_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_Pdcch_MonitoringMixed_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_ScellWithoutSSB_InterBandCA_r18（ASN.1 scellWithoutSSB-InterBandCA-r18，源文件第 16414 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_ScellWithoutSSB_InterBandCA_r18 {
    FeatureSetDownlink_v1800_ScellWithoutSSB_InterBandCA_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_ScellWithoutSSB_InterBandCA_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_MulticastInactive_r18（ASN.1 multicastInactive-r18，源文件第 16415 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_MulticastInactive_r18 {
    FeatureSetDownlink_v1800_MulticastInactive_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_MulticastInactive_r18;


/**
 * @brief 枚举 FeatureSetDownlink_v1800_ThresholdBasedMulticastResume_r18（ASN.1 thresholdBasedMulticastResume-r18，源文件第 16416 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlink_v1800_ThresholdBasedMulticastResume_r18 {
    FeatureSetDownlink_v1800_ThresholdBasedMulticastResume_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlink_v1800_ThresholdBasedMulticastResume_r18;


/**
 * @brief 枚举 PDCCH_MonitoringOccasions_r16_Period7span3_r16（ASN.1 period7span3-r16，源文件第 16420 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_MonitoringOccasions_r16_Period7span3_r16 {
    PDCCH_MonitoringOccasions_r16_Period7span3_r16_supported = 0, /**< ASN.1 supported */
} PDCCH_MonitoringOccasions_r16_Period7span3_r16;


/**
 * @brief 枚举 PDCCH_MonitoringOccasions_r16_Period4span3_r16（ASN.1 period4span3-r16，源文件第 16421 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_MonitoringOccasions_r16_Period4span3_r16 {
    PDCCH_MonitoringOccasions_r16_Period4span3_r16_supported = 0, /**< ASN.1 supported */
} PDCCH_MonitoringOccasions_r16_Period4span3_r16;


/**
 * @brief 枚举 PDCCH_MonitoringOccasions_r16_Period2span2_r16（ASN.1 period2span2-r16，源文件第 16422 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_MonitoringOccasions_r16_Period2span2_r16 {
    PDCCH_MonitoringOccasions_r16_Period2span2_r16_supported = 0, /**< ASN.1 supported */
} PDCCH_MonitoringOccasions_r16_Period2span2_r16;


/**
 * @brief 枚举 PDCCH_RepetitionParameters_r17_SupportedMode_r17（ASN.1 supportedMode-r17，源文件第 16426 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_RepetitionParameters_r17_SupportedMode_r17 {
    PDCCH_RepetitionParameters_r17_SupportedMode_r17_intra_span = 0, /**< ASN.1 intra-span */
    PDCCH_RepetitionParameters_r17_SupportedMode_r17_inter_span = 1, /**< ASN.1 inter-span */
    PDCCH_RepetitionParameters_r17_SupportedMode_r17_both = 2, /**< ASN.1 both */
} PDCCH_RepetitionParameters_r17_SupportedMode_r17;


/**
 * @brief 枚举 PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17（ASN.1 limitX-PerCC-r17，源文件第 16427 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17 {
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_n4 = 0, /**< ASN.1 n4 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_n8 = 1, /**< ASN.1 n8 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_n16 = 2, /**< ASN.1 n16 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_n32 = 3, /**< ASN.1 n32 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_n44 = 4, /**< ASN.1 n44 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_n64 = 5, /**< ASN.1 n64 */
    PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17_nolimit = 6, /**< ASN.1 nolimit */
} PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17;


/**
 * @brief 枚举 PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17（ASN.1 limitX-AcrossCC-r17，源文件第 16428 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17 {
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n4 = 0, /**< ASN.1 n4 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n8 = 1, /**< ASN.1 n8 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n16 = 2, /**< ASN.1 n16 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n32 = 3, /**< ASN.1 n32 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n44 = 4, /**< ASN.1 n44 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n64 = 5, /**< ASN.1 n64 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n128 = 6, /**< ASN.1 n128 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n256 = 7, /**< ASN.1 n256 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_n512 = 8, /**< ASN.1 n512 */
    PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17_nolimit = 9, /**< ASN.1 nolimit */
} PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17;


/**
 * @brief 枚举 DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC（ASN.1 maxNumberPortsAcrossNZP-CSI-RS-PerCC，源文件第 16433 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC {
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p2 = 0, /**< ASN.1 p2 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p4 = 1, /**< ASN.1 p4 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p8 = 2, /**< ASN.1 p8 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p12 = 3, /**< ASN.1 p12 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p16 = 4, /**< ASN.1 p16 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p24 = 5, /**< ASN.1 p24 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p32 = 6, /**< ASN.1 p32 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p40 = 7, /**< ASN.1 p40 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p48 = 8, /**< ASN.1 p48 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p56 = 9, /**< ASN.1 p56 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p64 = 10, /**< ASN.1 p64 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p72 = 11, /**< ASN.1 p72 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p80 = 12, /**< ASN.1 p80 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p88 = 13, /**< ASN.1 p88 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p96 = 14, /**< ASN.1 p96 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p104 = 15, /**< ASN.1 p104 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p112 = 16, /**< ASN.1 p112 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p120 = 17, /**< ASN.1 p120 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p128 = 18, /**< ASN.1 p128 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p136 = 19, /**< ASN.1 p136 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p144 = 20, /**< ASN.1 p144 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p152 = 21, /**< ASN.1 p152 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p160 = 22, /**< ASN.1 p160 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p168 = 23, /**< ASN.1 p168 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p176 = 24, /**< ASN.1 p176 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p184 = 25, /**< ASN.1 p184 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p192 = 26, /**< ASN.1 p192 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p200 = 27, /**< ASN.1 p200 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p208 = 28, /**< ASN.1 p208 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p216 = 29, /**< ASN.1 p216 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p224 = 30, /**< ASN.1 p224 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p232 = 31, /**< ASN.1 p232 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p240 = 32, /**< ASN.1 p240 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p248 = 33, /**< ASN.1 p248 */
    DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC_p256 = 34, /**< ASN.1 p256 */
} DummyA_MaxNumberPortsAcrossNZP_CSI_RS_PerCC;


/**
 * @brief 枚举 DummyA_MaxNumberCS_IM_PerCC（ASN.1 maxNumberCS-IM-PerCC，源文件第 16436 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyA_MaxNumberCS_IM_PerCC {
    DummyA_MaxNumberCS_IM_PerCC_n1 = 0, /**< ASN.1 n1 */
    DummyA_MaxNumberCS_IM_PerCC_n2 = 1, /**< ASN.1 n2 */
    DummyA_MaxNumberCS_IM_PerCC_n4 = 2, /**< ASN.1 n4 */
    DummyA_MaxNumberCS_IM_PerCC_n8 = 3, /**< ASN.1 n8 */
    DummyA_MaxNumberCS_IM_PerCC_n16 = 4, /**< ASN.1 n16 */
    DummyA_MaxNumberCS_IM_PerCC_n32 = 5, /**< ASN.1 n32 */
} DummyA_MaxNumberCS_IM_PerCC;


/**
 * @brief 枚举 DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC（ASN.1 maxNumberSimultaneousCSI-RS-ActBWP-AllCC，源文件第 16437 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC {
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n5 = 0, /**< ASN.1 n5 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n6 = 1, /**< ASN.1 n6 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n7 = 2, /**< ASN.1 n7 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n8 = 3, /**< ASN.1 n8 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n9 = 4, /**< ASN.1 n9 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n10 = 5, /**< ASN.1 n10 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n12 = 6, /**< ASN.1 n12 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n14 = 7, /**< ASN.1 n14 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n16 = 8, /**< ASN.1 n16 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n18 = 9, /**< ASN.1 n18 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n20 = 10, /**< ASN.1 n20 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n22 = 11, /**< ASN.1 n22 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n24 = 12, /**< ASN.1 n24 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n26 = 13, /**< ASN.1 n26 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n28 = 14, /**< ASN.1 n28 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n30 = 15, /**< ASN.1 n30 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n32 = 16, /**< ASN.1 n32 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n34 = 17, /**< ASN.1 n34 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n36 = 18, /**< ASN.1 n36 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n38 = 19, /**< ASN.1 n38 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n40 = 20, /**< ASN.1 n40 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n42 = 21, /**< ASN.1 n42 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n44 = 22, /**< ASN.1 n44 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n46 = 23, /**< ASN.1 n46 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n48 = 24, /**< ASN.1 n48 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n50 = 25, /**< ASN.1 n50 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n52 = 26, /**< ASN.1 n52 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n54 = 27, /**< ASN.1 n54 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n56 = 28, /**< ASN.1 n56 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n58 = 29, /**< ASN.1 n58 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n60 = 30, /**< ASN.1 n60 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n62 = 31, /**< ASN.1 n62 */
    DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC_n64 = 32, /**< ASN.1 n64 */
} DummyA_MaxNumberSimultaneousCSI_RS_ActBWP_AllCC;


/**
 * @brief 枚举 DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC（ASN.1 totalNumberPortsSimultaneousCSI-RS-ActBWP-AllCC，源文件第 16440 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC {
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p8 = 0, /**< ASN.1 p8 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p12 = 1, /**< ASN.1 p12 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p16 = 2, /**< ASN.1 p16 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p24 = 3, /**< ASN.1 p24 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p32 = 4, /**< ASN.1 p32 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p40 = 5, /**< ASN.1 p40 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p48 = 6, /**< ASN.1 p48 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p56 = 7, /**< ASN.1 p56 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p64 = 8, /**< ASN.1 p64 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p72 = 9, /**< ASN.1 p72 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p80 = 10, /**< ASN.1 p80 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p88 = 11, /**< ASN.1 p88 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p96 = 12, /**< ASN.1 p96 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p104 = 13, /**< ASN.1 p104 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p112 = 14, /**< ASN.1 p112 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p120 = 15, /**< ASN.1 p120 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p128 = 16, /**< ASN.1 p128 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p136 = 17, /**< ASN.1 p136 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p144 = 18, /**< ASN.1 p144 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p152 = 19, /**< ASN.1 p152 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p160 = 20, /**< ASN.1 p160 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p168 = 21, /**< ASN.1 p168 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p176 = 22, /**< ASN.1 p176 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p184 = 23, /**< ASN.1 p184 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p192 = 24, /**< ASN.1 p192 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p200 = 25, /**< ASN.1 p200 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p208 = 26, /**< ASN.1 p208 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p216 = 27, /**< ASN.1 p216 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p224 = 28, /**< ASN.1 p224 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p232 = 29, /**< ASN.1 p232 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p240 = 30, /**< ASN.1 p240 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p248 = 31, /**< ASN.1 p248 */
    DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p256 = 32, /**< ASN.1 p256 */
} DummyA_TotalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC;


/**
 * @brief 枚举 DummyB_MaxNumberTxPortsPerResource（ASN.1 maxNumberTxPortsPerResource，源文件第 16446 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyB_MaxNumberTxPortsPerResource {
    DummyB_MaxNumberTxPortsPerResource_p2 = 0, /**< ASN.1 p2 */
    DummyB_MaxNumberTxPortsPerResource_p4 = 1, /**< ASN.1 p4 */
    DummyB_MaxNumberTxPortsPerResource_p8 = 2, /**< ASN.1 p8 */
    DummyB_MaxNumberTxPortsPerResource_p12 = 3, /**< ASN.1 p12 */
    DummyB_MaxNumberTxPortsPerResource_p16 = 4, /**< ASN.1 p16 */
    DummyB_MaxNumberTxPortsPerResource_p24 = 5, /**< ASN.1 p24 */
    DummyB_MaxNumberTxPortsPerResource_p32 = 6, /**< ASN.1 p32 */
} DummyB_MaxNumberTxPortsPerResource;


/**
 * @brief 枚举 DummyB_SupportedCodebookMode（ASN.1 supportedCodebookMode，源文件第 16449 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyB_SupportedCodebookMode {
    DummyB_SupportedCodebookMode_mode1 = 0, /**< ASN.1 mode1 */
    DummyB_SupportedCodebookMode_mode1AndMode2 = 1, /**< ASN.1 mode1AndMode2 */
} DummyB_SupportedCodebookMode;


/**
 * @brief 枚举 DummyC_MaxNumberTxPortsPerResource（ASN.1 maxNumberTxPortsPerResource，源文件第 16454 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyC_MaxNumberTxPortsPerResource {
    DummyC_MaxNumberTxPortsPerResource_p8 = 0, /**< ASN.1 p8 */
    DummyC_MaxNumberTxPortsPerResource_p16 = 1, /**< ASN.1 p16 */
    DummyC_MaxNumberTxPortsPerResource_p32 = 2, /**< ASN.1 p32 */
} DummyC_MaxNumberTxPortsPerResource;


/**
 * @brief 枚举 DummyC_SupportedCodebookMode（ASN.1 supportedCodebookMode，源文件第 16457 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyC_SupportedCodebookMode {
    DummyC_SupportedCodebookMode_mode1 = 0, /**< ASN.1 mode1 */
    DummyC_SupportedCodebookMode_mode2 = 1, /**< ASN.1 mode2 */
    DummyC_SupportedCodebookMode_both = 2, /**< ASN.1 both */
} DummyC_SupportedCodebookMode;


/**
 * @brief 枚举 DummyC_SupportedNumberPanels（ASN.1 supportedNumberPanels，源文件第 16458 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyC_SupportedNumberPanels {
    DummyC_SupportedNumberPanels_n2 = 0, /**< ASN.1 n2 */
    DummyC_SupportedNumberPanels_n4 = 1, /**< ASN.1 n4 */
} DummyC_SupportedNumberPanels;


/**
 * @brief 枚举 DummyD_MaxNumberTxPortsPerResource（ASN.1 maxNumberTxPortsPerResource，源文件第 16463 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyD_MaxNumberTxPortsPerResource {
    DummyD_MaxNumberTxPortsPerResource_p4 = 0, /**< ASN.1 p4 */
    DummyD_MaxNumberTxPortsPerResource_p8 = 1, /**< ASN.1 p8 */
    DummyD_MaxNumberTxPortsPerResource_p12 = 2, /**< ASN.1 p12 */
    DummyD_MaxNumberTxPortsPerResource_p16 = 3, /**< ASN.1 p16 */
    DummyD_MaxNumberTxPortsPerResource_p24 = 4, /**< ASN.1 p24 */
    DummyD_MaxNumberTxPortsPerResource_p32 = 5, /**< ASN.1 p32 */
} DummyD_MaxNumberTxPortsPerResource;


/**
 * @brief 枚举 DummyD_AmplitudeScalingType（ASN.1 amplitudeScalingType，源文件第 16467 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyD_AmplitudeScalingType {
    DummyD_AmplitudeScalingType_wideband = 0, /**< ASN.1 wideband */
    DummyD_AmplitudeScalingType_widebandAndSubband = 1, /**< ASN.1 widebandAndSubband */
} DummyD_AmplitudeScalingType;


/**
 * @brief 枚举 DummyD_AmplitudeSubsetRestriction（ASN.1 amplitudeSubsetRestriction，源文件第 16468 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyD_AmplitudeSubsetRestriction {
    DummyD_AmplitudeSubsetRestriction_supported = 0, /**< ASN.1 supported */
} DummyD_AmplitudeSubsetRestriction;


/**
 * @brief 枚举 DummyE_MaxNumberTxPortsPerResource（ASN.1 maxNumberTxPortsPerResource，源文件第 16473 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyE_MaxNumberTxPortsPerResource {
    DummyE_MaxNumberTxPortsPerResource_p4 = 0, /**< ASN.1 p4 */
    DummyE_MaxNumberTxPortsPerResource_p8 = 1, /**< ASN.1 p8 */
    DummyE_MaxNumberTxPortsPerResource_p12 = 2, /**< ASN.1 p12 */
    DummyE_MaxNumberTxPortsPerResource_p16 = 3, /**< ASN.1 p16 */
    DummyE_MaxNumberTxPortsPerResource_p24 = 4, /**< ASN.1 p24 */
    DummyE_MaxNumberTxPortsPerResource_p32 = 5, /**< ASN.1 p32 */
} DummyE_MaxNumberTxPortsPerResource;


/**
 * @brief 枚举 DummyE_AmplitudeScalingType（ASN.1 amplitudeScalingType，源文件第 16477 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum DummyE_AmplitudeScalingType {
    DummyE_AmplitudeScalingType_wideband = 0, /**< ASN.1 wideband */
    DummyE_AmplitudeScalingType_widebandAndSubband = 1, /**< ASN.1 widebandAndSubband */
} DummyE_AmplitudeScalingType;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_ChannelBW_90mhz（ASN.1 channelBW-90mhz，源文件第 16492 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_ChannelBW_90mhz {
    FeatureSetDownlinkPerCC_ChannelBW_90mhz_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_ChannelBW_90mhz;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1620_SupportFDM_SchemeB_r16（ASN.1 supportFDM-SchemeB-r16，源文件第 16501 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1620_SupportFDM_SchemeB_r16 {
    FeatureSetDownlinkPerCC_v1620_SupportFDM_SchemeB_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1620_SupportFDM_SchemeB_r16;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1700_BroadcastSCell_r17（ASN.1 broadcastSCell-r17，源文件第 16506 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1700_BroadcastSCell_r17 {
    FeatureSetDownlinkPerCC_v1700_BroadcastSCell_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1700_BroadcastSCell_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17（ASN.1 maxNumberMIMO-LayersMulticastPDSCH-r17，源文件第 16508 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17 {
    FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17_n2 = 0, /**< ASN.1 n2 */
    FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17_n4 = 1, /**< ASN.1 n4 */
    FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17_n8 = 2, /**< ASN.1 n8 */
} FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1700_DynamicMulticastSCell_r17（ASN.1 dynamicMulticastSCell-r17，源文件第 16510 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1700_DynamicMulticastSCell_r17 {
    FeatureSetDownlinkPerCC_v1700_DynamicMulticastSCell_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1700_DynamicMulticastSCell_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17（ASN.1 maxModulationOrderForMulticastDataRateCalculation-r17，源文件第 16518 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17 {
    FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17_qam64 = 0, /**< ASN.1 qam64 */
    FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17_qam256 = 1, /**< ASN.1 qam256 */
    FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17_qam1024 = 2, /**< ASN.1 qam1024 */
} FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1720_Fdm_BroadcastUnicast_r17（ASN.1 fdm-BroadcastUnicast-r17，源文件第 16520 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1720_Fdm_BroadcastUnicast_r17 {
    FeatureSetDownlinkPerCC_v1720_Fdm_BroadcastUnicast_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1720_Fdm_BroadcastUnicast_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1720_Fdm_MulticastUnicast_r17（ASN.1 fdm-MulticastUnicast-r17，源文件第 16522 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1720_Fdm_MulticastUnicast_r17 {
    FeatureSetDownlinkPerCC_v1720_Fdm_MulticastUnicast_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1720_Fdm_MulticastUnicast_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17（ASN.1 intraSlotTDM-UnicastGroupCommonPDSCH-r17，源文件第 16527 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17 {
    FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17_yes = 0, /**< ASN.1 yes */
    FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17_no = 1, /**< ASN.1 no */
} FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1730_Sps_MulticastSCell_r17（ASN.1 sps-MulticastSCell-r17，源文件第 16529 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1730_Sps_MulticastSCell_r17 {
    FeatureSetDownlinkPerCC_v1730_Sps_MulticastSCell_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1730_Sps_MulticastSCell_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1730_Dci_BroadcastWith16Repetitions_r17（ASN.1 dci-BroadcastWith16Repetitions-r17，源文件第 16533 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1730_Dci_BroadcastWith16Repetitions_r17 {
    FeatureSetDownlinkPerCC_v1730_Dci_BroadcastWith16Repetitions_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1730_Dci_BroadcastWith16Repetitions_r17;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1800_MultiDCI_IntraCellMultiTRP_TwoTA_r18（ASN.1 multiDCI-IntraCellMultiTRP-TwoTA-r18，源文件第 16542 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1800_MultiDCI_IntraCellMultiTRP_TwoTA_r18 {
    FeatureSetDownlinkPerCC_v1800_MultiDCI_IntraCellMultiTRP_TwoTA_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1800_MultiDCI_IntraCellMultiTRP_TwoTA_r18;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1800_RxTimingDiff_r18（ASN.1 rxTimingDiff-r18，源文件第 16546 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1800_RxTimingDiff_r18 {
    FeatureSetDownlinkPerCC_v1800_RxTimingDiff_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1800_RxTimingDiff_r18;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1800_MultiDCI_MultiTRP_CORESET_Monitoring_r18（ASN.1 multiDCI-MultiTRP-CORESET-Monitoring-r18，源文件第 16549 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1800_MultiDCI_MultiTRP_CORESET_Monitoring_r18 {
    FeatureSetDownlinkPerCC_v1800_MultiDCI_MultiTRP_CORESET_Monitoring_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1800_MultiDCI_MultiTRP_CORESET_Monitoring_r18;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1800_BroadcastNonServingCell_r18（ASN.1 broadcastNonServingCell-r18，源文件第 16550 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1800_BroadcastNonServingCell_r18 {
    FeatureSetDownlinkPerCC_v1800_BroadcastNonServingCell_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1800_BroadcastNonServingCell_r18;


/**
 * @brief 枚举 FeatureSetDownlinkPerCC_v1800_SchedulingMeasurementRelaxation_r18（ASN.1 schedulingMeasurementRelaxation-r18，源文件第 16553 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetDownlinkPerCC_v1800_SchedulingMeasurementRelaxation_r18 {
    FeatureSetDownlinkPerCC_v1800_SchedulingMeasurementRelaxation_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetDownlinkPerCC_v1800_SchedulingMeasurementRelaxation_r18;


/**
 * @brief 枚举 MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16（ASN.1 maxNumberCORESET-r16，源文件第 16557 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16 {
    MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16_n2 = 0, /**< ASN.1 n2 */
    MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16_n3 = 1, /**< ASN.1 n3 */
    MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16_n4 = 2, /**< ASN.1 n4 */
    MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16_n5 = 3, /**< ASN.1 n5 */
} MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16;


/**
 * @brief 枚举 MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16（ASN.1 maxNumberUnicastPDSCH-PerPool-r16，源文件第 16559 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16 {
    MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16_n1 = 0, /**< ASN.1 n1 */
    MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16_n2 = 1, /**< ASN.1 n2 */
    MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16_n3 = 2, /**< ASN.1 n3 */
    MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16_n4 = 3, /**< ASN.1 n4 */
    MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16_n7 = 4, /**< ASN.1 n7 */
} MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16;


/**
 * @brief 枚举 CRS_InterfMitigation_r17_Crs_IM_DSS_15kHzSCS_r17（ASN.1 crs-IM-DSS-15kHzSCS-r17，源文件第 16564 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CRS_InterfMitigation_r17_Crs_IM_DSS_15kHzSCS_r17 {
    CRS_InterfMitigation_r17_Crs_IM_DSS_15kHzSCS_r17_supported = 0, /**< ASN.1 supported */
} CRS_InterfMitigation_r17_Crs_IM_DSS_15kHzSCS_r17;


/**
 * @brief 枚举 CRS_InterfMitigation_r17_Crs_IM_nonDSS_15kHzSCS_r17（ASN.1 crs-IM-nonDSS-15kHzSCS-r17，源文件第 16566 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CRS_InterfMitigation_r17_Crs_IM_nonDSS_15kHzSCS_r17 {
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_15kHzSCS_r17_supported = 0, /**< ASN.1 supported */
} CRS_InterfMitigation_r17_Crs_IM_nonDSS_15kHzSCS_r17;


/**
 * @brief 枚举 CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_15kHzSCS_r17（ASN.1 crs-IM-nonDSS-NWA-15kHzSCS-r17，源文件第 16568 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_15kHzSCS_r17 {
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_15kHzSCS_r17_supported = 0, /**< ASN.1 supported */
} CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_15kHzSCS_r17;


/**
 * @brief 枚举 CRS_InterfMitigation_r17_Crs_IM_nonDSS_30kHzSCS_r17（ASN.1 crs-IM-nonDSS-30kHzSCS-r17，源文件第 16570 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CRS_InterfMitigation_r17_Crs_IM_nonDSS_30kHzSCS_r17 {
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_30kHzSCS_r17_supported = 0, /**< ASN.1 supported */
} CRS_InterfMitigation_r17_Crs_IM_nonDSS_30kHzSCS_r17;


/**
 * @brief 枚举 CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_30kHzSCS_r17（ASN.1 crs-IM-nonDSS-NWA-30kHzSCS-r17，源文件第 16572 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_30kHzSCS_r17 {
    CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_30kHzSCS_r17_supported = 0, /**< ASN.1 supported */
} CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_30kHzSCS_r17;


/**
 * @brief 枚举 FeatureSetUplink_ScalingFactor（ASN.1 scalingFactor，源文件第 16654 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_ScalingFactor {
    FeatureSetUplink_ScalingFactor_f0p4 = 0, /**< ASN.1 f0p4 */
    FeatureSetUplink_ScalingFactor_f0p75 = 1, /**< ASN.1 f0p75 */
    FeatureSetUplink_ScalingFactor_f0p8 = 2, /**< ASN.1 f0p8 */
} FeatureSetUplink_ScalingFactor;


/**
 * @brief 枚举 FeatureSetUplink_Dummy3（ASN.1 dummy3，源文件第 16655 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_Dummy3 {
    FeatureSetUplink_Dummy3_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_Dummy3;


/**
 * @brief 枚举 FeatureSetUplink_SearchSpaceSharingCA_UL（ASN.1 searchSpaceSharingCA-UL，源文件第 16657 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_SearchSpaceSharingCA_UL {
    FeatureSetUplink_SearchSpaceSharingCA_UL_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_SearchSpaceSharingCA_UL;


/**
 * @brief 枚举 FeatureSetUplink_TwoPUCCH_Group（ASN.1 twoPUCCH-Group，源文件第 16660 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_TwoPUCCH_Group {
    FeatureSetUplink_TwoPUCCH_Group_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_TwoPUCCH_Group;


/**
 * @brief 枚举 FeatureSetUplink_DynamicSwitchSUL（ASN.1 dynamicSwitchSUL，源文件第 16661 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_DynamicSwitchSUL {
    FeatureSetUplink_DynamicSwitchSUL_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_DynamicSwitchSUL;


/**
 * @brief 枚举 FeatureSetUplink_SimultaneousTxSUL_NonSUL（ASN.1 simultaneousTxSUL-NonSUL，源文件第 16662 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_SimultaneousTxSUL_NonSUL {
    FeatureSetUplink_SimultaneousTxSUL_NonSUL_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_SimultaneousTxSUL_NonSUL;


/**
 * @brief 枚举 FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz（ASN.1 pusch-ProcessingType1-DifferentTB-PerSlot/scs-15kHz，源文件第 16664 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz {
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz;


/**
 * @brief 枚举 FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz（ASN.1 pusch-ProcessingType1-DifferentTB-PerSlot/scs-30kHz，源文件第 16665 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz {
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz;


/**
 * @brief 枚举 FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz（ASN.1 pusch-ProcessingType1-DifferentTB-PerSlot/scs-60kHz，源文件第 16666 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz {
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz;


/**
 * @brief 枚举 FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz（ASN.1 pusch-ProcessingType1-DifferentTB-PerSlot/scs-120kHz，源文件第 16667 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz {
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz_upto2 = 0, /**< ASN.1 upto2 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz_upto4 = 1, /**< ASN.1 upto4 */
    FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz_upto7 = 2, /**< ASN.1 upto7 */
} FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz;


/**
 * @brief 枚举 FeatureSetUplink_v1540_ZeroSlotOffsetAperiodicSRS（ASN.1 zeroSlotOffsetAperiodicSRS，源文件第 16673 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1540_ZeroSlotOffsetAperiodicSRS {
    FeatureSetUplink_v1540_ZeroSlotOffsetAperiodicSRS_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1540_ZeroSlotOffsetAperiodicSRS;


/**
 * @brief 枚举 FeatureSetUplink_v1540_Pa_PhaseDiscontinuityImpacts（ASN.1 pa-PhaseDiscontinuityImpacts，源文件第 16674 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1540_Pa_PhaseDiscontinuityImpacts {
    FeatureSetUplink_v1540_Pa_PhaseDiscontinuityImpacts_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1540_Pa_PhaseDiscontinuityImpacts;


/**
 * @brief 枚举 FeatureSetUplink_v1540_Pusch_SeparationWithGap（ASN.1 pusch-SeparationWithGap，源文件第 16675 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1540_Pusch_SeparationWithGap {
    FeatureSetUplink_v1540_Pusch_SeparationWithGap_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1540_Pusch_SeparationWithGap;


/**
 * @brief 枚举 FeatureSetUplink_v1540_Ul_MCS_TableAlt_DynamicIndication（ASN.1 ul-MCS-TableAlt-DynamicIndication，源文件第 16681 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1540_Ul_MCS_TableAlt_DynamicIndication {
    FeatureSetUplink_v1540_Ul_MCS_TableAlt_DynamicIndication_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1540_Ul_MCS_TableAlt_DynamicIndication;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16（ASN.1 pusch-RepetitionTypeB-r16/maxNumberPUSCH-Tx-r16，源文件第 16687 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16 {
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n2 = 0, /**< ASN.1 n2 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n3 = 1, /**< ASN.1 n3 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n4 = 2, /**< ASN.1 n4 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n7 = 3, /**< ASN.1 n7 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n8 = 4, /**< ASN.1 n8 */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16_n12 = 5, /**< ASN.1 n12 */
} FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16（ASN.1 pusch-RepetitionTypeB-r16/hoppingScheme-r16，源文件第 16688 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16 {
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16_interSlotHopping = 0, /**< ASN.1 interSlotHopping */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16_interRepetitionHopping = 1, /**< ASN.1 interRepetitionHopping */
    FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16_both = 2, /**< ASN.1 both */
} FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_CancellationSelfCarrier_r16（ASN.1 ul-CancellationSelfCarrier-r16，源文件第 16691 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_CancellationSelfCarrier_r16 {
    FeatureSetUplink_v1610_Ul_CancellationSelfCarrier_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Ul_CancellationSelfCarrier_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_CancellationCrossCarrier_r16（ASN.1 ul-CancellationCrossCarrier-r16，源文件第 16693 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_CancellationCrossCarrier_r16 {
    FeatureSetUplink_v1610_Ul_CancellationCrossCarrier_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Ul_CancellationCrossCarrier_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16（ASN.1 ul-FullPwrMode2-MaxSRS-ResInSet-r16，源文件第 16695 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16 {
    FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16（ASN.1 cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-15kHz-r16，源文件第 16699 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16（ASN.1 cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-30kHz-r16，源文件第 16700 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16（ASN.1 cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-60kHz-r16，源文件第 16701 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16（ASN.1 cbgPUSCH-ProcessingType1-DifferentTB-PerSlot-r16/scs-120kHz-r16，源文件第 16702 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16（ASN.1 cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-15kHz-r16，源文件第 16707 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16（ASN.1 cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-30kHz-r16，源文件第 16708 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16（ASN.1 cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-60kHz-r16，源文件第 16709 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16（ASN.1 cbgPUSCH-ProcessingType2-DifferentTB-PerSlot-r16/scs-120kHz-r16，源文件第 16710 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16 {
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_one_pusch = 0, /**< ASN.1 one-pusch */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto2 = 1, /**< ASN.1 upto2 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto4 = 2, /**< ASN.1 upto4 */
    FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16_upto7 = 3, /**< ASN.1 upto7 */
} FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy（ASN.1 intraFreqDAPS-UL-r16/dummy，源文件第 16714 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy {
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy;


/**
 * @brief 枚举 FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_IntraFreqTwoTAGs_DAPS_r16（ASN.1 intraFreqDAPS-UL-r16/intraFreqTwoTAGs-DAPS-r16，源文件第 16715 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_IntraFreqTwoTAGs_DAPS_r16 {
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_IntraFreqTwoTAGs_DAPS_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_IntraFreqTwoTAGs_DAPS_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy1（ASN.1 intraFreqDAPS-UL-r16/dummy1，源文件第 16716 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy1 {
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy1_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy1;


/**
 * @brief 枚举 FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy2（ASN.1 intraFreqDAPS-UL-r16/dummy2，源文件第 16717 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy2 {
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy2_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy2;


/**
 * @brief 枚举 FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3（ASN.1 intraFreqDAPS-UL-r16/dummy3，源文件第 16718 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3 {
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3_short_ = 0, /**< ASN.1 short */
    FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3_long_ = 1, /**< ASN.1 long */
} FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3;


/**
 * @brief 枚举 FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16（ASN.1 multiPUCCH-r16/sub-SlotConfig-NCP-r16，源文件第 16724 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16 {
    FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16_set1 = 0, /**< ASN.1 set1 */
    FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16_set2 = 1, /**< ASN.1 set2 */
} FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16（ASN.1 multiPUCCH-r16/sub-SlotConfig-ECP-r16，源文件第 16725 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16 {
    FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16_set1 = 0, /**< ASN.1 set1 */
    FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16_set2 = 1, /**< ASN.1 set2 */
} FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type1_r16（ASN.1 twoPUCCH-Type1-r16，源文件第 16728 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type1_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type1_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type2_r16（ASN.1 twoPUCCH-Type2-r16，源文件第 16730 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type2_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type2_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type2_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type3_r16（ASN.1 twoPUCCH-Type3-r16，源文件第 16732 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type3_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type3_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type3_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type4_r16（ASN.1 twoPUCCH-Type4-r16，源文件第 16735 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type4_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type4_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type4_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Mux_SR_HARQ_ACK_r16（ASN.1 mux-SR-HARQ-ACK-r16，源文件第 16738 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Mux_SR_HARQ_ACK_r16 {
    FeatureSetUplink_v1610_Mux_SR_HARQ_ACK_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Mux_SR_HARQ_ACK_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Dummy1（ASN.1 dummy1，源文件第 16739 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Dummy1 {
    FeatureSetUplink_v1610_Dummy1_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Dummy1;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Dummy2（ASN.1 dummy2，源文件第 16740 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Dummy2 {
    FeatureSetUplink_v1610_Dummy2_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Dummy2;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type5_r16（ASN.1 twoPUCCH-Type5-r16，源文件第 16742 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type5_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type5_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type5_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type6_r16（ASN.1 twoPUCCH-Type6-r16，源文件第 16745 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type6_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type6_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type6_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type7_r16（ASN.1 twoPUCCH-Type7-r16，源文件第 16747 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type7_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type7_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type7_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type8_r16（ASN.1 twoPUCCH-Type8-r16，源文件第 16750 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type8_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type8_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type8_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type9_r16（ASN.1 twoPUCCH-Type9-r16，源文件第 16752 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type9_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type9_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type9_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type10_r16（ASN.1 twoPUCCH-Type10-r16，源文件第 16755 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type10_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type10_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type10_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_TwoPUCCH_Type11_r16（ASN.1 twoPUCCH-Type11-r16，源文件第 16758 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_TwoPUCCH_Type11_r16 {
    FeatureSetUplink_v1610_TwoPUCCH_Type11_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_TwoPUCCH_Type11_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16（ASN.1 ul-IntraUE-Mux-r16/pusch-PreparationLowPriority-r16，源文件第 16761 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16 {
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16_sym0 = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16_sym1 = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16_sym2 = 2, /**< ASN.1 sym2 */
} FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16（ASN.1 ul-IntraUE-Mux-r16/pusch-PreparationHighPriority-r16，源文件第 16762 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16 {
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16_sym0 = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16_sym1 = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16_sym2 = 2, /**< ASN.1 sym2 */
} FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_FullPwrMode_r16（ASN.1 ul-FullPwrMode-r16，源文件第 16765 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_FullPwrMode_r16 {
    FeatureSetUplink_v1610_Ul_FullPwrMode_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Ul_FullPwrMode_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-15kHz-120kHz-r16，源文件第 16768 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16 {
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-15kHz-60kHz-r16，源文件第 16769 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16 {
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-30kHz-120kHz-r16，源文件第 16770 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16 {
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-15kHz-30kHz-r16，源文件第 16771 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16 {
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16_n2 = 0, /**< ASN.1 n2 */
} FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-30kHz-60kHz-r16，源文件第 16772 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16 {
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16_n2 = 0, /**< ASN.1 n2 */
} FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16（ASN.1 crossCarrierSchedulingProcessing-DiffSCS-r16/scs-60kHz-120kHz-r16，源文件第 16773 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16 {
    FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16_n2 = 0, /**< ASN.1 n2 */
} FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_FullPwrMode1_r16（ASN.1 ul-FullPwrMode1-r16，源文件第 16776 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_FullPwrMode1_r16 {
    FeatureSetUplink_v1610_Ul_FullPwrMode1_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1610_Ul_FullPwrMode1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16（ASN.1 ul-FullPwrMode2-SRSConfig-diffNumSRSPorts-r16，源文件第 16778 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16 {
    FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16_p1_2 = 0, /**< ASN.1 p1-2 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16_p1_4 = 1, /**< ASN.1 p1-4 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16_p1_2_4 = 2, /**< ASN.1 p1-2-4 */
} FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16（ASN.1 ul-FullPwrMode2-TPMIGroup-r16/fourPortsNonCoherent-r16，源文件第 16782 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16 {
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16_g0 = 0, /**< ASN.1 g0 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16_g1 = 1, /**< ASN.1 g1 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16_g2 = 2, /**< ASN.1 g2 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16_g3 = 3, /**< ASN.1 g3 */
} FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16（ASN.1 ul-FullPwrMode2-TPMIGroup-r16/fourPortsPartialCoherent-r16，源文件第 16783 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16 {
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g0 = 0, /**< ASN.1 g0 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g1 = 1, /**< ASN.1 g1 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g2 = 2, /**< ASN.1 g2 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g3 = 3, /**< ASN.1 g3 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g4 = 4, /**< ASN.1 g4 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g5 = 5, /**< ASN.1 g5 */
    FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16_g6 = 6, /**< ASN.1 g6 */
} FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_Ant_Switch_fr1_r16（ASN.1 offsetSRS-CB-PUSCH-Ant-Switch-fr1-r16，源文件第 16789 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_Ant_Switch_fr1_r16 {
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_Ant_Switch_fr1_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_Ant_Switch_fr1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16（ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorSingleOcc-fr1-r16，源文件第 16792 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16 {
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16（ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithoutGap-fr1-r16，源文件第 16795 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16 {
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16（ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithGap-fr1-r16，源文件第 16798 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16 {
    FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1630_Dummy（ASN.1 dummy，源文件第 16799 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1630_Dummy {
    FeatureSetUplink_v1630_Dummy_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1630_Dummy;


/**
 * @brief 枚举 FeatureSetUplink_v1630_PartialCancellationPUCCH_PUSCH_PRACH_TX_r16（ASN.1 partialCancellationPUCCH-PUSCH-PRACH-TX-r16，源文件第 16801 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1630_PartialCancellationPUCCH_PUSCH_PRACH_TX_r16 {
    FeatureSetUplink_v1630_PartialCancellationPUCCH_PUSCH_PRACH_TX_r16_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1630_PartialCancellationPUCCH_PUSCH_PRACH_TX_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16（ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithSpanGap-fr1-r16/scs-15kHz-r16，源文件第 16814 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16 {
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16_set1 = 0, /**< ASN.1 set1 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16_set2 = 1, /**< ASN.1 set2 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16_set3 = 2, /**< ASN.1 set3 */
} FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16（ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithSpanGap-fr1-r16/scs-30kHz-r16，源文件第 16815 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16 {
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16_set1 = 0, /**< ASN.1 set1 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16_set2 = 1, /**< ASN.1 set2 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16_set3 = 2, /**< ASN.1 set3 */
} FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16（ASN.1 offsetSRS-CB-PUSCH-PDCCH-MonitorAnyOccWithSpanGap-fr1-r16/scs-60kHz-r16，源文件第 16816 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16 {
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16_set1 = 0, /**< ASN.1 set1 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16_set2 = 1, /**< ASN.1 set2 */
    FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16_set3 = 2, /**< ASN.1 set3 */
} FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16;


/**
 * @brief 枚举 FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16（ASN.1 pusch-RepetitionTypeB-v16d0/maxNumberPUSCH-Tx-Cap1-r16，源文件第 16822 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16 {
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n2 = 0, /**< ASN.1 n2 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n3 = 1, /**< ASN.1 n3 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n4 = 2, /**< ASN.1 n4 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n7 = 3, /**< ASN.1 n7 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n8 = 4, /**< ASN.1 n8 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16_n12 = 5, /**< ASN.1 n12 */
} FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16;


/**
 * @brief 枚举 FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16（ASN.1 pusch-RepetitionTypeB-v16d0/maxNumberPUSCH-Tx-Cap2-r16，源文件第 16823 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16 {
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n2 = 0, /**< ASN.1 n2 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n3 = 1, /**< ASN.1 n3 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n4 = 2, /**< ASN.1 n4 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n7 = 3, /**< ASN.1 n7 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n8 = 4, /**< ASN.1 n8 */
    FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16_n12 = 5, /**< ASN.1 n12 */
} FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16;


/**
 * @brief 枚举 FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17（ASN.1 mTRP-PUSCH-TypeA-CB-r17，源文件第 16829 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17 {
    FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17（ASN.1 mTRP-PUSCH-RepetitionTypeA-r17，源文件第 16831 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17 {
    FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17_n3 = 2, /**< ASN.1 n3 */
    FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17_n4 = 3, /**< ASN.1 n4 */
} FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17（ASN.1 mTRP-PUCCH-IntraSlot-r17，源文件第 16833 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17 {
    FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17_pf0_2 = 0, /**< ASN.1 pf0-2 */
    FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17_pf1_3_4 = 1, /**< ASN.1 pf1-3-4 */
    FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17_pf0_4 = 2, /**< ASN.1 pf0-4 */
} FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_Srs_AntennaSwitching2SP_1Periodic_r17（ASN.1 srs-AntennaSwitching2SP-1Periodic-r17，源文件第 16835 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_Srs_AntennaSwitching2SP_1Periodic_r17 {
    FeatureSetUplink_v1710_Srs_AntennaSwitching2SP_1Periodic_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1710_Srs_AntennaSwitching2SP_1Periodic_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_Srs_ExtensionAperiodicSRS_r17（ASN.1 srs-ExtensionAperiodicSRS-r17，源文件第 16837 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_Srs_ExtensionAperiodicSRS_r17 {
    FeatureSetUplink_v1710_Srs_ExtensionAperiodicSRS_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1710_Srs_ExtensionAperiodicSRS_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_Srs_OneAP_SRS_r17（ASN.1 srs-OneAP-SRS-r17，源文件第 16839 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_Srs_OneAP_SRS_r17 {
    FeatureSetUplink_v1710_Srs_OneAP_SRS_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1710_Srs_OneAP_SRS_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17（ASN.1 ue-PowerClassPerBandPerBC-r17，源文件第 16841 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17 {
    FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17_pc1dot5 = 0, /**< ASN.1 pc1dot5 */
    FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17_pc2 = 1, /**< ASN.1 pc2 */
    FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17_pc3 = 2, /**< ASN.1 pc3 */
} FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1710_Tx_Support_UL_GapFR2_r17（ASN.1 tx-Support-UL-GapFR2-r17，源文件第 16843 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1710_Tx_Support_UL_GapFR2_r17 {
    FeatureSetUplink_v1710_Tx_Support_UL_GapFR2_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1710_Tx_Support_UL_GapFR2_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_RRC_Config_r17（ASN.1 pucch-Repetition-F0-1-2-3-4-RRC-Config-r17，源文件第 16848 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_RRC_Config_r17 {
    FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_RRC_Config_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_RRC_Config_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17（ASN.1 pucch-Repetition-F0-1-2-3-4-DynamicIndication-r17，源文件第 16850 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17 {
    FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_InterSubslotFreqHopping_PUCCH_r17（ASN.1 interSubslotFreqHopping-PUCCH-r17，源文件第 16852 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_InterSubslotFreqHopping_PUCCH_r17 {
    FeatureSetUplink_v1720_InterSubslotFreqHopping_PUCCH_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1720_InterSubslotFreqHopping_PUCCH_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_SemiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17（ASN.1 semiStaticHARQ-ACK-CodebookSub-SlotPUCCH-r17，源文件第 16854 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_SemiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17 {
    FeatureSetUplink_v1720_SemiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1720_SemiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17（ASN.1 phy-PrioritizationHighPriorityDG-LowPriorityCG-r17/pusch-PreparationLowPriority-r17，源文件第 16859 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17 {
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17_sym0 = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17_sym1 = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17_sym2 = 2, /**< ASN.1 sym2 */
} FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_15kHz_r17（ASN.1 phy-PrioritizationHighPriorityDG-LowPriorityCG-r17/additionalCancellationTime-r17/scs-15kHz-r17，源文件第 16861 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_15kHz_r17 {
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_982c890b = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_1e7c8e41 = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_fda0d074 = 2, /**< ASN.1 sym2 */
} FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_15kHz_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_30kHz_r17（ASN.1 phy-PrioritizationHighPriorityDG-LowPriorityCG-r17/additionalCancellationTime-r17/scs-30kHz-r17，源文件第 16862 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_30kHz_r17 {
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_c5ce2f38 = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_67de32a1 = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_fd9fa524 = 2, /**< ASN.1 sym2 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_8426dae7 = 3, /**< ASN.1 sym3 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_42890fbf = 4, /**< ASN.1 sym4 */
} FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_30kHz_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_60kHz_r17（ASN.1 phy-PrioritizationHighPriorityDG-LowPriorityCG-r17/additionalCancellationTime-r17/scs-60kHz-r17，源文件第 16863 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_60kHz_r17 {
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_a15bf2d7 = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_2c0a029d = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_8b44c2e2 = 2, /**< ASN.1 sym2 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_4661ac70 = 3, /**< ASN.1 sym3 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_a8efbb83 = 4, /**< ASN.1 sym4 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_0d032f70 = 5, /**< ASN.1 sym5 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_7be8ab4c = 6, /**< ASN.1 sym6 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_78de7930 = 7, /**< ASN.1 sym7 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_d489b6c6 = 8, /**< ASN.1 sym8 */
} FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_60kHz_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_120kHz_r17（ASN.1 phy-PrioritizationHighPriorityDG-LowPriorityCG-r17/additionalCancellationTime-r17/scs-120kHz-r17，源文件第 16864 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_120kHz_r17 {
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_3c1db66b = 0, /**< ASN.1 sym0 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_897f1496 = 1, /**< ASN.1 sym1 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_83d6177b = 2, /**< ASN.1 sym2 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_9dcb213d = 3, /**< ASN.1 sym3 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_046faffb = 4, /**< ASN.1 sym4 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_95fd36e1 = 5, /**< ASN.1 sym5 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_8ca0ee02 = 6, /**< ASN.1 sym6 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_e1d1f870 = 7, /**< ASN.1 sym7 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_dfb428ce = 8, /**< ASN.1 sym8 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_e0499d75 = 9, /**< ASN.1 sym9 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_40b7a2b4 = 10, /**< ASN.1 sym10 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_e87cfaa7 = 11, /**< ASN.1 sym11 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_19ee9581 = 12, /**< ASN.1 sym12 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_679266bf = 13, /**< ASN.1 sym13 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_9461bcaf = 14, /**< ASN.1 sym14 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_55ea85d9 = 15, /**< ASN.1 sym15 */
    FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_bc747e9a = 16, /**< ASN.1 sym16 */
} FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_120kHz_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1720_ExtendedDC_LocationReport_r17（ASN.1 extendedDC-LocationReport-r17，源文件第 16870 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1720_ExtendedDC_LocationReport_r17 {
    FeatureSetUplink_v1720_ExtendedDC_LocationReport_r17_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1720_ExtendedDC_LocationReport_r17;


/**
 * @brief 枚举 FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18（ASN.1 maxDelayValueBeyondD-Basic-r18，源文件第 16875 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18 {
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18_sl2 = 0, /**< ASN.1 sl2 */
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18_sl3 = 1, /**< ASN.1 sl3 */
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18_sl4 = 2, /**< ASN.1 sl4 */
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18_sl5 = 3, /**< ASN.1 sl5 */
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18_sl6 = 4, /**< ASN.1 sl6 */
    FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18_sl10 = 5, /**< ASN.1 sl10 */
} FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_PhaseReportMoreThanOne_r18（ASN.1 phaseReportMoreThanOne-r18，源文件第 16879 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_PhaseReportMoreThanOne_r18 {
    FeatureSetUplink_v1800_PhaseReportMoreThanOne_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_PhaseReportMoreThanOne_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18（ASN.1 pusch-DMRS-TypeEnh-r18/dmrs-Type-r18，源文件第 16887 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18_etype1 = 0, /**< ASN.1 etype1 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18_both = 1, /**< ASN.1 both */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-TypeA-DMRS-r18/dmrs-TypeA-r18，源文件第 16890 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-TypeA-DMRS-r18/pusch-2SymbolFL-DMRS-r18，源文件第 16892 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_Addition2Symbol_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-TypeA-DMRS-r18/pusch-2SymbolFL-DMRS-Addition2Symbol-r18，源文件第 16894 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_Addition2Symbol_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_Addition2Symbol_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_Addition2Symbol_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_1SymbolFL_DMRS_Addition3Symbol_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-TypeA-DMRS-r18/pusch-1SymbolFL-DMRS-Addition3Symbol-r18，源文件第 16896 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_1SymbolFL_DMRS_Addition3Symbol_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_1SymbolFL_DMRS_Addition3Symbol_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_1SymbolFL_DMRS_Addition3Symbol_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-TypeA-DMRS-r18/pusch-DMRS8Tx-r18，源文件第 16898 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18_rel15 = 0, /**< ASN.1 rel15 */
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18_both = 1, /**< ASN.1 both */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeB_DMRS_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-TypeB-DMRS-r18，源文件第 16901 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeB_DMRS_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeB_DMRS_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeB_DMRS_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_1Port_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-rank-1-4-1Port-r18，源文件第 16903 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_1Port_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_1Port_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_1Port_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_1Port_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-rank-5-8-1Port-r18，源文件第 16905 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_1Port_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_1Port_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_1Port_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_2Port_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-rank-1-4-2Port-r18，源文件第 16907 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_2Port_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_2Port_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_2Port_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_2Port_r18（ASN.1 pusch-DMRS-TypeEnh-r18/pusch-rank-5-8-2Port-r18，源文件第 16909 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_2Port_r18 {
    FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_2Port_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_2Port_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Ul_DMRS_SingleDCI_M_TRP_r18（ASN.1 ul-DMRS-SingleDCI-M-TRP-r18，源文件第 16912 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Ul_DMRS_SingleDCI_M_TRP_r18 {
    FeatureSetUplink_v1800_Ul_DMRS_SingleDCI_M_TRP_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Ul_DMRS_SingleDCI_M_TRP_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Ul_DMRS_M_DCI_M_TRP_r18（ASN.1 ul-DMRS-M-DCI-M-TRP-r18，源文件第 16914 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Ul_DMRS_M_DCI_M_TRP_r18 {
    FeatureSetUplink_v1800_Ul_DMRS_M_DCI_M_TRP_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Ul_DMRS_M_DCI_M_TRP_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Srs_AntennaSwitching8T8R2SP_1Periodic_r18（ASN.1 srs-AntennaSwitching8T8R2SP-1Periodic-r18，源文件第 16916 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Srs_AntennaSwitching8T8R2SP_1Periodic_r18 {
    FeatureSetUplink_v1800_Srs_AntennaSwitching8T8R2SP_1Periodic_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_Srs_AntennaSwitching8T8R2SP_1Periodic_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18（ASN.1 pucch-SingleDCI-STx2P-SFN-r18，源文件第 16919 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18 {
    FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18_pf0_2 = 0, /**< ASN.1 pf0-2 */
    FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18_pf1_3_4 = 1, /**< ASN.1 pf1-3-4 */
    FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18_pf0_4 = 2, /**< ASN.1 pf0-4 */
} FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_TxDiversity4Tx_r18（ASN.1 txDiversity4Tx-r18，源文件第 16929 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_TxDiversity4Tx_r18 {
    FeatureSetUplink_v1800_TxDiversity4Tx_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_TxDiversity4Tx_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_r18（ASN.1 powerBoosting-pi2BPSK-QPSK-r18，源文件第 16932 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_r18 {
    FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_Modified_r18（ASN.1 powerBoosting-pi2BPSK-QPSK-Modified-r18，源文件第 16934 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_Modified_r18 {
    FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_Modified_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_Modified_r18;


/**
 * @brief 枚举 FeatureSetUplink_v1800_TxDiversity2Tx_r18（ASN.1 txDiversity2Tx-r18，源文件第 16936 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplink_v1800_TxDiversity2Tx_r18 {
    FeatureSetUplink_v1800_TxDiversity2Tx_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplink_v1800_TxDiversity2Tx_r18;


/**
 * @brief 枚举 SubSlot_Config_r16_Sub_SlotConfig_NCP_r16（ASN.1 sub-SlotConfig-NCP-r16，源文件第 16940 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SubSlot_Config_r16_Sub_SlotConfig_NCP_r16 {
    SubSlot_Config_r16_Sub_SlotConfig_NCP_r16_n4 = 0, /**< ASN.1 n4 */
    SubSlot_Config_r16_Sub_SlotConfig_NCP_r16_n5 = 1, /**< ASN.1 n5 */
    SubSlot_Config_r16_Sub_SlotConfig_NCP_r16_n6 = 2, /**< ASN.1 n6 */
    SubSlot_Config_r16_Sub_SlotConfig_NCP_r16_n7 = 3, /**< ASN.1 n7 */
} SubSlot_Config_r16_Sub_SlotConfig_NCP_r16;


/**
 * @brief 枚举 SubSlot_Config_r16_Sub_SlotConfig_ECP_r16（ASN.1 sub-SlotConfig-ECP-r16，源文件第 16941 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SubSlot_Config_r16_Sub_SlotConfig_ECP_r16 {
    SubSlot_Config_r16_Sub_SlotConfig_ECP_r16_n4 = 0, /**< ASN.1 n4 */
    SubSlot_Config_r16_Sub_SlotConfig_ECP_r16_n5 = 1, /**< ASN.1 n5 */
    SubSlot_Config_r16_Sub_SlotConfig_ECP_r16_n6 = 2, /**< ASN.1 n6 */
} SubSlot_Config_r16_Sub_SlotConfig_ECP_r16;


/**
 * @brief 枚举 SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16（ASN.1 maxNumberSRS-PosResourceSetPerBWP-r16，源文件第 16951 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16 {
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n4 = 2, /**< ASN.1 n4 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n8 = 3, /**< ASN.1 n8 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n12 = 4, /**< ASN.1 n12 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16_n16 = 5, /**< ASN.1 n16 */
} SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16;


/**
 * @brief 枚举 SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16（ASN.1 maxNumberSRS-PosResourcesPerBWP-r16，源文件第 16952 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16 {
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n4 = 2, /**< ASN.1 n4 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n8 = 3, /**< ASN.1 n8 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n16 = 4, /**< ASN.1 n16 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n32 = 5, /**< ASN.1 n32 */
    SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16_n64 = 6, /**< ASN.1 n64 */
} SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16;


/**
 * @brief 枚举 SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16（ASN.1 maxNumberSRS-ResourcesPerBWP-PerSlot-r16，源文件第 16953 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16 {
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n3 = 2, /**< ASN.1 n3 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n4 = 3, /**< ASN.1 n4 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n5 = 4, /**< ASN.1 n5 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n6 = 5, /**< ASN.1 n6 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n8 = 6, /**< ASN.1 n8 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n10 = 7, /**< ASN.1 n10 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n12 = 8, /**< ASN.1 n12 */
    SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16_n14 = 9, /**< ASN.1 n14 */
} SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16;


/**
 * @brief 枚举 SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16（ASN.1 maxNumberPeriodicSRS-PosResourcesPerBWP-r16，源文件第 16954 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16 {
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n4 = 2, /**< ASN.1 n4 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n8 = 3, /**< ASN.1 n8 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n16 = 4, /**< ASN.1 n16 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n32 = 5, /**< ASN.1 n32 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16_n64 = 6, /**< ASN.1 n64 */
} SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16;


/**
 * @brief 枚举 SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16（ASN.1 maxNumberPeriodicSRS-PosResourcesPerBWP-PerSlot-r16，源文件第 16955 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16 {
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n3 = 2, /**< ASN.1 n3 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n4 = 3, /**< ASN.1 n4 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n5 = 4, /**< ASN.1 n5 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n6 = 5, /**< ASN.1 n6 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n8 = 6, /**< ASN.1 n8 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n10 = 7, /**< ASN.1 n10 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n12 = 8, /**< ASN.1 n12 */
    SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n14 = 9, /**< ASN.1 n14 */
} SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16;


/**
 * @brief 枚举 SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16（ASN.1 maxNumberAP-SRS-PosResourcesPerBWP-r16，源文件第 16959 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16 {
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n4 = 2, /**< ASN.1 n4 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n8 = 3, /**< ASN.1 n8 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n16 = 4, /**< ASN.1 n16 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n32 = 5, /**< ASN.1 n32 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16_n64 = 6, /**< ASN.1 n64 */
} SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16;


/**
 * @brief 枚举 SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16（ASN.1 maxNumberAP-SRS-PosResourcesPerBWP-PerSlot-r16，源文件第 16960 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16 {
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n3 = 2, /**< ASN.1 n3 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n4 = 3, /**< ASN.1 n4 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n5 = 4, /**< ASN.1 n5 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n6 = 5, /**< ASN.1 n6 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n8 = 6, /**< ASN.1 n8 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n10 = 7, /**< ASN.1 n10 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n12 = 8, /**< ASN.1 n12 */
    SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16_n14 = 9, /**< ASN.1 n14 */
} SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16;


/**
 * @brief 枚举 SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16（ASN.1 maxNumberSP-SRS-PosResourcesPerBWP-r16，源文件第 16964 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16 {
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n4 = 2, /**< ASN.1 n4 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n8 = 3, /**< ASN.1 n8 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n16 = 4, /**< ASN.1 n16 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n32 = 5, /**< ASN.1 n32 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16_n64 = 6, /**< ASN.1 n64 */
} SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16;


/**
 * @brief 枚举 SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16（ASN.1 maxNumberSP-SRS-PosResourcesPerBWP-PerSlot-r16，源文件第 16965 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16 {
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n1 = 0, /**< ASN.1 n1 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n2 = 1, /**< ASN.1 n2 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n3 = 2, /**< ASN.1 n3 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n4 = 3, /**< ASN.1 n4 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n5 = 4, /**< ASN.1 n5 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n6 = 5, /**< ASN.1 n6 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n8 = 6, /**< ASN.1 n8 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n10 = 7, /**< ASN.1 n10 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n12 = 8, /**< ASN.1 n12 */
    SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16_n14 = 9, /**< ASN.1 n14 */
} SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16;


/**
 * @brief 枚举 SRS_Resources_MaxNumberAperiodicSRS_PerBWP（ASN.1 maxNumberAperiodicSRS-PerBWP，源文件第 16969 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resources_MaxNumberAperiodicSRS_PerBWP {
    SRS_Resources_MaxNumberAperiodicSRS_PerBWP_n1 = 0, /**< ASN.1 n1 */
    SRS_Resources_MaxNumberAperiodicSRS_PerBWP_n2 = 1, /**< ASN.1 n2 */
    SRS_Resources_MaxNumberAperiodicSRS_PerBWP_n4 = 2, /**< ASN.1 n4 */
    SRS_Resources_MaxNumberAperiodicSRS_PerBWP_n8 = 3, /**< ASN.1 n8 */
    SRS_Resources_MaxNumberAperiodicSRS_PerBWP_n16 = 4, /**< ASN.1 n16 */
} SRS_Resources_MaxNumberAperiodicSRS_PerBWP;


/**
 * @brief 枚举 SRS_Resources_MaxNumberPeriodicSRS_PerBWP（ASN.1 maxNumberPeriodicSRS-PerBWP，源文件第 16971 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resources_MaxNumberPeriodicSRS_PerBWP {
    SRS_Resources_MaxNumberPeriodicSRS_PerBWP_n1 = 0, /**< ASN.1 n1 */
    SRS_Resources_MaxNumberPeriodicSRS_PerBWP_n2 = 1, /**< ASN.1 n2 */
    SRS_Resources_MaxNumberPeriodicSRS_PerBWP_n4 = 2, /**< ASN.1 n4 */
    SRS_Resources_MaxNumberPeriodicSRS_PerBWP_n8 = 3, /**< ASN.1 n8 */
    SRS_Resources_MaxNumberPeriodicSRS_PerBWP_n16 = 4, /**< ASN.1 n16 */
} SRS_Resources_MaxNumberPeriodicSRS_PerBWP;


/**
 * @brief 枚举 SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP（ASN.1 maxNumberSemiPersistentSRS-PerBWP，源文件第 16973 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP {
    SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP_n1 = 0, /**< ASN.1 n1 */
    SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP_n2 = 1, /**< ASN.1 n2 */
    SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP_n4 = 2, /**< ASN.1 n4 */
    SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP_n8 = 3, /**< ASN.1 n8 */
    SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP_n16 = 4, /**< ASN.1 n16 */
} SRS_Resources_MaxNumberSemiPersistentSRS_PerBWP;


/**
 * @brief 枚举 SRS_Resources_MaxNumberSRS_Ports_PerResource（ASN.1 maxNumberSRS-Ports-PerResource，源文件第 16975 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum SRS_Resources_MaxNumberSRS_Ports_PerResource {
    SRS_Resources_MaxNumberSRS_Ports_PerResource_n1 = 0, /**< ASN.1 n1 */
    SRS_Resources_MaxNumberSRS_Ports_PerResource_n2 = 1, /**< ASN.1 n2 */
    SRS_Resources_MaxNumberSRS_Ports_PerResource_n4 = 2, /**< ASN.1 n4 */
} SRS_Resources_MaxNumberSRS_Ports_PerResource;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18（ASN.1 numOfCarriersIntraBandContiguous-r18，源文件第 16986 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18 {
    PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18_two = 0, /**< ASN.1 two */
    PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18_three = 1, /**< ASN.1 three */
    PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18_twoandthree = 2, /**< ASN.1 twoandthree */
} PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18（ASN.1 maximumAggregatedBW-TwoCarriersFR1-r18，源文件第 16987 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz80 = 0, /**< ASN.1 mhz80 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz160 = 2, /**< ASN.1 mhz160 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz200 = 3, /**< ASN.1 mhz200 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18（ASN.1 maximumAggregatedBW-TwoCarriersFR2-r18，源文件第 16988 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz400 = 3, /**< ASN.1 mhz400 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz600 = 4, /**< ASN.1 mhz600 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz800 = 5, /**< ASN.1 mhz800 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18（ASN.1 maximumAggregatedBW-ThreeCarriersFR1-r18，源文件第 16989 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz80 = 0, /**< ASN.1 mhz80 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz160 = 2, /**< ASN.1 mhz160 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz200 = 3, /**< ASN.1 mhz200 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz300 = 4, /**< ASN.1 mhz300 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18（ASN.1 maximumAggregatedBW-ThreeCarriersFR2-r18，源文件第 16990 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz400 = 3, /**< ASN.1 mhz400 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz600 = 4, /**< ASN.1 mhz600 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz800 = 5, /**< ASN.1 mhz800 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz1000 = 6, /**< ASN.1 mhz1000 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz1200 = 7, /**< ASN.1 mhz1200 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18（ASN.1 maximumAggregatedResourceSet-r18，源文件第 16992 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n12 = 4, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n16 = 5, /**< ASN.1 n16 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18（ASN.1 maximumAggregatedResourcePeriodic-r18，源文件第 16993 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n16 = 4, /**< ASN.1 n16 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n32 = 5, /**< ASN.1 n32 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n64 = 6, /**< ASN.1 n64 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18（ASN.1 maximumAggregatedResourceAperiodic-r18，源文件第 16994 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18（ASN.1 maximumAggregatedResourceSemi-r18，源文件第 16995 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18（ASN.1 maximumAggregatedResourcePeriodicPerSlot-r18，源文件第 16996 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n3 = 2, /**< ASN.1 n3 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n5 = 4, /**< ASN.1 n5 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n6 = 5, /**< ASN.1 n6 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n8 = 6, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n10 = 7, /**< ASN.1 n10 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n12 = 8, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n14 = 9, /**< ASN.1 n14 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18（ASN.1 maximumAggregatedResourceAperiodicPerSlot-r18，源文件第 16997 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n3 = 3, /**< ASN.1 n3 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n4 = 4, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n5 = 5, /**< ASN.1 n5 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n6 = 6, /**< ASN.1 n6 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n8 = 7, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n10 = 8, /**< ASN.1 n10 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n12 = 9, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n14 = 10, /**< ASN.1 n14 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18（ASN.1 maximumAggregatedResourceSemiPerSlot-r18，源文件第 16998 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18 {
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n3 = 3, /**< ASN.1 n3 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n4 = 4, /**< ASN.1 n4 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n5 = 5, /**< ASN.1 n5 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n6 = 6, /**< ASN.1 n6 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n8 = 7, /**< ASN.1 n8 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n10 = 8, /**< ASN.1 n10 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n12 = 9, /**< ASN.1 n12 */
    PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n14 = 10, /**< ASN.1 n14 */
} PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18（ASN.1 supportOfSameSRS-PowerReduction-r18，源文件第 16999 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18 {
    PosSRS_BWA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18_supported = 0, /**< ASN.1 supported */
} PosSRS_BWA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18（ASN.1 numOfCarriersIntraBandContiguous-r18，源文件第 17004 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18_two = 0, /**< ASN.1 two */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18_three = 1, /**< ASN.1 three */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18_twoandthree = 2, /**< ASN.1 twoandthree */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18（ASN.1 maximumAggregatedBW-TwoCarriersFR1-r18，源文件第 17005 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz80 = 0, /**< ASN.1 mhz80 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz160 = 2, /**< ASN.1 mhz160 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18_mhz200 = 3, /**< ASN.1 mhz200 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18（ASN.1 maximumAggregatedBW-TwoCarriersFR2-r18，源文件第 17006 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz400 = 3, /**< ASN.1 mhz400 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz600 = 4, /**< ASN.1 mhz600 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18_mhz800 = 5, /**< ASN.1 mhz800 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18（ASN.1 maximumAggregatedBW-ThreeCarriersFR1-r18，源文件第 17007 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz80 = 0, /**< ASN.1 mhz80 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz160 = 2, /**< ASN.1 mhz160 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz200 = 3, /**< ASN.1 mhz200 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18_mhz300 = 4, /**< ASN.1 mhz300 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18（ASN.1 maximumAggregatedBW-ThreeCarriersFR2-r18，源文件第 17008 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz50 = 0, /**< ASN.1 mhz50 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz100 = 1, /**< ASN.1 mhz100 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz200 = 2, /**< ASN.1 mhz200 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz400 = 3, /**< ASN.1 mhz400 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz600 = 4, /**< ASN.1 mhz600 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz800 = 5, /**< ASN.1 mhz800 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz1000 = 6, /**< ASN.1 mhz1000 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18_mhz1200 = 7, /**< ASN.1 mhz1200 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18（ASN.1 maximumAggregatedResourceSet-r18，源文件第 17010 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n12 = 4, /**< ASN.1 n12 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18_n16 = 5, /**< ASN.1 n16 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18（ASN.1 maximumAggregatedResourcePeriodic-r18，源文件第 17011 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n4 = 2, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n8 = 3, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n16 = 4, /**< ASN.1 n16 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n32 = 5, /**< ASN.1 n32 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18_n64 = 6, /**< ASN.1 n64 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18（ASN.1 maximumAggregatedResourceAperiodic-r18，源文件第 17012 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18（ASN.1 maximumAggregatedResourceSemi-r18，源文件第 17013 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n8 = 4, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n16 = 5, /**< ASN.1 n16 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n32 = 6, /**< ASN.1 n32 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18_n64 = 7, /**< ASN.1 n64 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18（ASN.1 maximumAggregatedResourcePeriodicPerSlot-r18，源文件第 17014 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n1 = 0, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n2 = 1, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n3 = 2, /**< ASN.1 n3 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n4 = 3, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n5 = 4, /**< ASN.1 n5 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n6 = 5, /**< ASN.1 n6 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n8 = 6, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n10 = 7, /**< ASN.1 n10 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n12 = 8, /**< ASN.1 n12 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18_n14 = 9, /**< ASN.1 n14 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18（ASN.1 maximumAggregatedResourceAperiodicPerSlot-r18，源文件第 17015 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n3 = 3, /**< ASN.1 n3 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n4 = 4, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n5 = 5, /**< ASN.1 n5 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n6 = 6, /**< ASN.1 n6 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n8 = 7, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n10 = 8, /**< ASN.1 n10 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n12 = 9, /**< ASN.1 n12 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18_n14 = 10, /**< ASN.1 n14 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18（ASN.1 maximumAggregatedResourceSemiPerSlot-r18，源文件第 17016 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n0 = 0, /**< ASN.1 n0 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n1 = 1, /**< ASN.1 n1 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n2 = 2, /**< ASN.1 n2 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n3 = 3, /**< ASN.1 n3 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n4 = 4, /**< ASN.1 n4 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n5 = 5, /**< ASN.1 n5 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n6 = 6, /**< ASN.1 n6 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n8 = 7, /**< ASN.1 n8 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n10 = 8, /**< ASN.1 n10 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n12 = 9, /**< ASN.1 n12 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18_n14 = 10, /**< ASN.1 n14 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18（ASN.1 supportOfSameSRS-PowerReduction-r18，源文件第 17017 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18_supported = 0, /**< ASN.1 supported */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18;


/**
 * @brief 枚举 PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18（ASN.1 guardPeriod-r18，源文件第 17018 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18 {
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18_ms0 = 0, /**< ASN.1 ms0 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18_ms30 = 1, /**< ASN.1 ms30 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18_ms100 = 2, /**< ASN.1 ms100 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18_ms140 = 3, /**< ASN.1 ms140 */
    PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18_ms200 = 4, /**< ASN.1 ms200 */
} PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_ChannelBW_90mhz（ASN.1 channelBW-90mhz，源文件第 17033 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_ChannelBW_90mhz {
    FeatureSetUplinkPerCC_ChannelBW_90mhz_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_ChannelBW_90mhz;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17（ASN.1 mTRP-PUSCH-RepetitionTypeB-r17，源文件第 17051 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17 {
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17_n3 = 2, /**< ASN.1 n3 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17_n4 = 3, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17（ASN.1 mTRP-PUSCH-TypeB-CB-r17，源文件第 17053 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17 {
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STxMP_TwoTA_r18（ASN.1 twoPUSCH-MultiDCI-STxMP-TwoTA-r18，源文件第 17063 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STxMP_TwoTA_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STxMP_TwoTA_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STxMP_TwoTA_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18（ASN.1 pusch-CB-SingleDCI-STx2P-SDM-r18/maxNumberSRS-ResourcePerSet-r18，源文件第 17066 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18（ASN.1 pusch-CB-SingleDCI-STx2P-SDM-r18/maxNumberNZP-PUSCH-PortsPerSet-r18，源文件第 17068 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18（ASN.1 pusch-CB-SingleDCI-STx2P-SDM-r18/maxNumberSRS-AntennaPortsPerSet-r18，源文件第 17069 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18（ASN.1 pusch-CB-SingleDCI-STx2P-SFN-r18/maxNumberSRS-ResourcePerSet-r18，源文件第 17079 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18（ASN.1 pusch-CB-SingleDCI-STx2P-SFN-r18/maxNumberSRS-AntennaPortsPerSet-r18，源文件第 17081 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18（ASN.1 pusch-CB-SingleDCI-STx2P-SFN-r18/maxNumberNZP-PUSCH-PortsPerSet-r18，源文件第 17082 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18 {
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18/maxNumberSRS-ResourcePerSet-r18，源文件第 17092 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18/maxNumberNZP-PUSCH-Overlapping-r18，源文件第 17094 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18/maxNumberPUSCH-PerCORESET-PerSlot-r18/scs-60kHz-r18，源文件第 17096 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18_n3 = 2, /**< ASN.1 n3 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18_n4 = 3, /**< ASN.1 n4 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18_n7 = 4, /**< ASN.1 n7 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18/maxNumberPUSCH-PerCORESET-PerSlot-r18/scs-120kHz-r18，源文件第 17097 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18_n3 = 2, /**< ASN.1 n3 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18_n4 = 3, /**< ASN.1 n4 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18_n7 = 4, /**< ASN.1 n7 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18（ASN.1 twoPUSCH-CB-MultiDCI-STx2P-DG-DG-r18/maxNumberSRS-AntennaPortsPerSet-r18，源文件第 17100 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-DG-DG-r18/maxNumberPUSCH-PerCORESET-PerSlot-r18/scs-60kHz-r18，源文件第 17108 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_43d65743 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_29ccb43e = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_f1665518 = 2, /**< ASN.1 n3 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_c2c894b6 = 3, /**< ASN.1 n4 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_2ff1fadb = 4, /**< ASN.1 n7 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18（ASN.1 twoPUSCH-NonCB-MultiDCI-STx2P-DG-DG-r18/maxNumberPUSCH-PerCORESET-PerSlot-r18/scs-120kHz-r18，源文件第 17109 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_6dbdbf56 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_a5b51af0 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_b4cb3c4f = 2, /**< ASN.1 n3 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_ebb9c34d = 3, /**< ASN.1 n4 */
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlo_afe2f5bc = 4, /**< ASN.1 n7 */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STx2P_OutOfOrder_r18（ASN.1 twoPUSCH-MultiDCI-STx2P-OutOfOrder-r18，源文件第 17114 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STx2P_OutOfOrder_r18 {
    FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STx2P_OutOfOrder_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STx2P_OutOfOrder_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18（ASN.1 codebookParameter8TxPUSCH-r18/codebook-8TxBasic-r18/srs-8TxPorts-r18，源文件第 17121 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18_noTDM = 0, /**< ASN.1 noTDM */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18_both = 1, /**< ASN.1 both */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18（ASN.1 codebookParameter8TxPUSCH-r18/codebook1-8TxPUSCH-r18，源文件第 17124 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18_n4_1 = 0, /**< ASN.1 n4-1 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18_n2_2 = 1, /**< ASN.1 n2-2 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18_both = 2, /**< ASN.1 both */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook2_8TxPUSCH_r18（ASN.1 codebookParameter8TxPUSCH-r18/codebook2-8TxPUSCH-r18，源文件第 17126 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook2_8TxPUSCH_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook2_8TxPUSCH_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook2_8TxPUSCH_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook3_8TxPUSCH_r18（ASN.1 codebookParameter8TxPUSCH-r18/codebook3-8TxPUSCH-r18，源文件第 17128 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook3_8TxPUSCH_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook3_8TxPUSCH_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook3_8TxPUSCH_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook4_8TxPUSCH_r18（ASN.1 codebookParameter8TxPUSCH-r18/codebook4-8TxPUSCH-r18，源文件第 17130 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook4_8TxPUSCH_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook4_8TxPUSCH_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook4_8TxPUSCH_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode0_r18（ASN.1 codebookParameter8TxPUSCH-r18/ul-FullPwrTransMode0-r18，源文件第 17132 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode0_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode0_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode0_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode1_r18（ASN.1 codebookParameter8TxPUSCH-r18/ul-FullPwrTransMode1-r18，源文件第 17134 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode1_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode1_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode1_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18（ASN.1 codebookParameter8TxPUSCH-r18/ul-FullPwrTransMode2-r18，源文件第 17136 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18_n1 = 0, /**< ASN.1 n1 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18_n2 = 1, /**< ASN.1 n2 */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18_n4 = 2, /**< ASN.1 n4 */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18（ASN.1 codebookParameter8TxPUSCH-r18/tpmi-FullPwrCodebook2-r18，源文件第 17140 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18 {
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18_first = 0, /**< ASN.1 first */
    FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18_second = 1, /**< ASN.1 second */
} FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18;


/**
 * @brief 枚举 FeatureSetUplinkPerCC_v1800_Cgb_2CW_PUSCH_r18（ASN.1 cgb-2CW-PUSCH-r18，源文件第 17151 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FeatureSetUplinkPerCC_v1800_Cgb_2CW_PUSCH_r18 {
    FeatureSetUplinkPerCC_v1800_Cgb_2CW_PUSCH_r18_supported = 0, /**< ASN.1 supported */
} FeatureSetUplinkPerCC_v1800_Cgb_2CW_PUSCH_r18;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_120kHz_r17（ASN.1 dl-FR2-2-SCS-120kHz-r17，源文件第 17210 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_120kHz_r17（ASN.1 ul-FR2-2-SCS-120kHz-r17，源文件第 17212 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_120kHz_r17（ASN.1 initialAccessSSB-120kHz-r17，源文件第 17214 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_120kHz_r17（ASN.1 widebandPRACH-SCS-120kHz-r17，源文件第 17216 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_120kHz_r17（ASN.1 multiRB-PUCCH-SCS-120kHz-r17，源文件第 17218 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_MultiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17（ASN.1 multiPDSCH-SingleDCI-FR2-2-SCS-120kHz-r17，源文件第 17220 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_MultiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_MultiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_MultiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_MultiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17（ASN.1 multiPUSCH-SingleDCI-FR2-2-SCS-120kHz-r17，源文件第 17222 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_MultiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_MultiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_MultiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_480kHz_r17（ASN.1 dl-FR2-2-SCS-480kHz-r17，源文件第 17224 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_480kHz_r17（ASN.1 ul-FR2-2-SCS-480kHz-r17，源文件第 17226 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_480kHz_r17（ASN.1 initialAccessSSB-480kHz-r17，源文件第 17228 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_480kHz_r17（ASN.1 widebandPRACH-SCS-480kHz-r17，源文件第 17230 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_480kHz_r17（ASN.1 multiRB-PUCCH-SCS-480kHz-r17，源文件第 17232 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_480kHz_r17（ASN.1 enhancedPDCCH-monitoringSCS-480kHz-r17，源文件第 17234 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_960kHz_r17（ASN.1 dl-FR2-2-SCS-960kHz-r17，源文件第 17236 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_960kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_960kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_960kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_960kHz_r17（ASN.1 ul-FR2-2-SCS-960kHz-r17，源文件第 17238 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_960kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_960kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_960kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_960kHz_r17（ASN.1 multiRB-PUCCH-SCS-960kHz-r17，源文件第 17240 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_960kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_960kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_960kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_1_r17（ASN.1 enhancedPDCCH-monitoringSCS-960kHz-r17/pdcch-monitoring4-1-r17，源文件第 17243 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_1_r17 {
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_1_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_1_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_2_r17（ASN.1 enhancedPDCCH-monitoringSCS-960kHz-r17/pdcch-monitoring4-2-r17，源文件第 17244 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_2_r17 {
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_2_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_2_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring8_4_r17（ASN.1 enhancedPDCCH-monitoringSCS-960kHz-r17/pdcch-monitoring8-4-r17，源文件第 17245 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring8_4_r17 {
    FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring8_4_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring8_4_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Type1_ChannelAccess_FR2_2_r17（ASN.1 type1-ChannelAccess-FR2-2-r17，源文件第 17248 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Type1_ChannelAccess_FR2_2_r17 {
    FR2_2_AccessParamsPerBand_r17_Type1_ChannelAccess_FR2_2_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Type1_ChannelAccess_FR2_2_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Type2_ChannelAccess_FR2_2_r17（ASN.1 type2-ChannelAccess-FR2-2-r17，源文件第 17250 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Type2_ChannelAccess_FR2_2_r17 {
    FR2_2_AccessParamsPerBand_r17_Type2_ChannelAccess_FR2_2_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Type2_ChannelAccess_FR2_2_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Reduced_BeamSwitchTiming_FR2_2_r17（ASN.1 reduced-BeamSwitchTiming-FR2-2-r17，源文件第 17252 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Reduced_BeamSwitchTiming_FR2_2_r17 {
    FR2_2_AccessParamsPerBand_r17_Reduced_BeamSwitchTiming_FR2_2_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Reduced_BeamSwitchTiming_FR2_2_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17（ASN.1 support32-DL-HARQ-ProcessPerSCS-r17/scs-120kHz-r17，源文件第 17255 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17（ASN.1 support32-DL-HARQ-ProcessPerSCS-r17/scs-480kHz-r17，源文件第 17256 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17（ASN.1 support32-DL-HARQ-ProcessPerSCS-r17/scs-960kHz-r17，源文件第 17257 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17（ASN.1 support32-UL-HARQ-ProcessPerSCS-r17/scs-120kHz-r17，源文件第 17261 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17（ASN.1 support32-UL-HARQ-ProcessPerSCS-r17/scs-480kHz-r17，源文件第 17262 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17（ASN.1 support32-UL-HARQ-ProcessPerSCS-r17/scs-960kHz-r17，源文件第 17263 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17 {
    FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17;


/**
 * @brief 枚举 FR2_2_AccessParamsPerBand_r17_ExtGroup1_Modulation64_QAM_PUSCH_FR2_2_r17（ASN.1 modulation64-QAM-PUSCH-FR2-2-r17，源文件第 17268 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum FR2_2_AccessParamsPerBand_r17_ExtGroup1_Modulation64_QAM_PUSCH_FR2_2_r17 {
    FR2_2_AccessParamsPerBand_r17_ExtGroup1_Modulation64_QAM_PUSCH_FR2_2_r17_supported = 0, /**< ASN.1 supported */
} FR2_2_AccessParamsPerBand_r17_ExtGroup1_Modulation64_QAM_PUSCH_FR2_2_r17;


/**
 * @brief 枚举 HighSpeedParameters_r16_MeasurementEnhancement_r16（ASN.1 measurementEnhancement-r16，源文件第 17276 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedParameters_r16_MeasurementEnhancement_r16 {
    HighSpeedParameters_r16_MeasurementEnhancement_r16_supported = 0, /**< ASN.1 supported */
} HighSpeedParameters_r16_MeasurementEnhancement_r16;


/**
 * @brief 枚举 HighSpeedParameters_r16_DemodulationEnhancement_r16（ASN.1 demodulationEnhancement-r16，源文件第 17277 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedParameters_r16_DemodulationEnhancement_r16 {
    HighSpeedParameters_r16_DemodulationEnhancement_r16_supported = 0, /**< ASN.1 supported */
} HighSpeedParameters_r16_DemodulationEnhancement_r16;


/**
 * @brief 枚举 HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16（ASN.1 intraNR-MeasurementEnhancement-r16，源文件第 17281 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16 {
    HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16_supported = 0, /**< ASN.1 supported */
} HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16;


/**
 * @brief 枚举 HighSpeedParameters_v1650_InterRAT_MeasurementEnhancement_r16（ASN.1 interRAT-MeasurementEnhancement-r16，源文件第 17282 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedParameters_v1650_InterRAT_MeasurementEnhancement_r16 {
    HighSpeedParameters_v1650_InterRAT_MeasurementEnhancement_r16_supported = 0, /**< ASN.1 supported */
} HighSpeedParameters_v1650_InterRAT_MeasurementEnhancement_r16;


/**
 * @brief 枚举 HighSpeedParameters_v1700_MeasurementEnhancementCA_r17（ASN.1 measurementEnhancementCA-r17，源文件第 17287 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedParameters_v1700_MeasurementEnhancementCA_r17 {
    HighSpeedParameters_v1700_MeasurementEnhancementCA_r17_supported = 0, /**< ASN.1 supported */
} HighSpeedParameters_v1700_MeasurementEnhancementCA_r17;


/**
 * @brief 枚举 HighSpeedParameters_v1700_MeasurementEnhancementInterFreq_r17（ASN.1 measurementEnhancementInterFreq-r17，源文件第 17289 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum HighSpeedParameters_v1700_MeasurementEnhancementInterFreq_r17 {
    HighSpeedParameters_v1700_MeasurementEnhancementInterFreq_r17_supported = 0, /**< ASN.1 supported */
} HighSpeedParameters_v1700_MeasurementEnhancementInterFreq_r17;


/**
 * @brief 枚举 IMS_ParametersCommon_VoiceOverEUTRA_5GC（ASN.1 voiceOverEUTRA-5GC，源文件第 17306 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IMS_ParametersCommon_VoiceOverEUTRA_5GC {
    IMS_ParametersCommon_VoiceOverEUTRA_5GC_supported = 0, /**< ASN.1 supported */
} IMS_ParametersCommon_VoiceOverEUTRA_5GC;


/**
 * @brief 枚举 IMS_ParametersCommon_ExtGroup1_VoiceOverSCG_BearerEUTRA_5GC（ASN.1 voiceOverSCG-BearerEUTRA-5GC，源文件第 17309 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IMS_ParametersCommon_ExtGroup1_VoiceOverSCG_BearerEUTRA_5GC {
    IMS_ParametersCommon_ExtGroup1_VoiceOverSCG_BearerEUTRA_5GC_supported = 0, /**< ASN.1 supported */
} IMS_ParametersCommon_ExtGroup1_VoiceOverSCG_BearerEUTRA_5GC;


/**
 * @brief 枚举 IMS_ParametersCommon_ExtGroup2_VoiceFallbackIndicationEPS_r16（ASN.1 voiceFallbackIndicationEPS-r16，源文件第 17312 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IMS_ParametersCommon_ExtGroup2_VoiceFallbackIndicationEPS_r16 {
    IMS_ParametersCommon_ExtGroup2_VoiceFallbackIndicationEPS_r16_supported = 0, /**< ASN.1 supported */
} IMS_ParametersCommon_ExtGroup2_VoiceFallbackIndicationEPS_r16;


/**
 * @brief 枚举 IMS_ParametersFRX_Diff_VoiceOverNR（ASN.1 voiceOverNR，源文件第 17317 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IMS_ParametersFRX_Diff_VoiceOverNR {
    IMS_ParametersFRX_Diff_VoiceOverNR_supported = 0, /**< ASN.1 supported */
} IMS_ParametersFRX_Diff_VoiceOverNR;


/**
 * @brief 枚举 IMS_ParametersFR2_2_r17_VoiceOverNR_r17（ASN.1 voiceOverNR-r17，源文件第 17322 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum IMS_ParametersFR2_2_r17_VoiceOverNR_r17 {
    IMS_ParametersFR2_2_r17_VoiceOverNR_r17_supported = 0, /**< ASN.1 supported */
} IMS_ParametersFR2_2_r17_VoiceOverNR_r17;


/**
 * @brief 枚举 EUTRA_ParametersCommon_Mfbi_EUTRA（ASN.1 mfbi-EUTRA，源文件第 17346 行）。
 * @note 不可扩展 ENUMERATED：C enum，序号即编码索引。
 */
typedef enum EUTRA_ParametersCommon_Mfbi_EUTRA {
    EUTRA_ParametersCommon_Mfbi_EUTRA_supported = 0, /**< ASN.1 supported */
} EUTRA_ParametersCommon_Mfbi_EUTRA;


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_TYPES_PART007_H */
