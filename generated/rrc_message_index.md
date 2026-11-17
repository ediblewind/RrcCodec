# 生成消息索引（53 个实际消息）

> 自动生成，请勿手工修改。
> 生成器：rrcgen 2.0.0；ASN.1：18.10.0；输入 SHA-256：`c56d55d553c94d7435015e04b3917e1672440f9e9d80259c48f81e7fcfa1187c`

| # | MessageKind | ASN.1 消息 | 结构体 | 信道 | 包装位路径（索引/备选数） | 入口位数 |
|---:|---|---|---|---|---|---:|
| 1 | `MessageKind_MIB` | `MIB` | `MIB` | `ChannelType_BCCH_BCH` | 0/2 | 1 |
| 2 | `MessageKind_SystemInformation` | `SystemInformation` | `SystemInformation` | `ChannelType_BCCH_DL_SCH` | 0/2 → 0/2 | 2 |
| 3 | `MessageKind_SIB1` | `SIB1` | `SIB1` | `ChannelType_BCCH_DL_SCH` | 0/2 → 1/2 | 2 |
| 4 | `MessageKind_RRCReject` | `RRCReject` | `RRCReject` | `ChannelType_DL_CCCH` | 0/2 → 0/4 | 3 |
| 5 | `MessageKind_RRCSetup` | `RRCSetup` | `RRCSetup` | `ChannelType_DL_CCCH` | 0/2 → 1/4 | 3 |
| 6 | `MessageKind_RRCReconfiguration` | `RRCReconfiguration` | `RRCReconfiguration` | `ChannelType_DL_DCCH` | 0/2 → 0/16 | 5 |
| 7 | `MessageKind_RRCResume` | `RRCResume` | `RRCResume` | `ChannelType_DL_DCCH` | 0/2 → 1/16 | 5 |
| 8 | `MessageKind_RRCRelease` | `RRCRelease` | `RRCRelease` | `ChannelType_DL_DCCH` | 0/2 → 2/16 | 5 |
| 9 | `MessageKind_RRCReestablishment` | `RRCReestablishment` | `RRCReestablishment` | `ChannelType_DL_DCCH` | 0/2 → 3/16 | 5 |
| 10 | `MessageKind_SecurityModeCommand` | `SecurityModeCommand` | `SecurityModeCommand` | `ChannelType_DL_DCCH` | 0/2 → 4/16 | 5 |
| 11 | `MessageKind_DLInformationTransfer` | `DLInformationTransfer` | `DLInformationTransfer` | `ChannelType_DL_DCCH` | 0/2 → 5/16 | 5 |
| 12 | `MessageKind_UECapabilityEnquiry` | `UECapabilityEnquiry` | `UECapabilityEnquiry` | `ChannelType_DL_DCCH` | 0/2 → 6/16 | 5 |
| 13 | `MessageKind_CounterCheck` | `CounterCheck` | `CounterCheck` | `ChannelType_DL_DCCH` | 0/2 → 7/16 | 5 |
| 14 | `MessageKind_MobilityFromNRCommand` | `MobilityFromNRCommand` | `MobilityFromNRCommand` | `ChannelType_DL_DCCH` | 0/2 → 8/16 | 5 |
| 15 | `MessageKind_DLDedicatedMessageSegment_r16` | `DLDedicatedMessageSegment-r16` | `DLDedicatedMessageSegment_r16` | `ChannelType_DL_DCCH` | 0/2 → 9/16 | 5 |
| 16 | `MessageKind_UEInformationRequest_r16` | `UEInformationRequest-r16` | `UEInformationRequest_r16` | `ChannelType_DL_DCCH` | 0/2 → 10/16 | 5 |
| 17 | `MessageKind_DLInformationTransferMRDC_r16` | `DLInformationTransferMRDC-r16` | `DLInformationTransferMRDC_r16` | `ChannelType_DL_DCCH` | 0/2 → 11/16 | 5 |
| 18 | `MessageKind_LoggedMeasurementConfiguration_r16` | `LoggedMeasurementConfiguration-r16` | `LoggedMeasurementConfiguration_r16` | `ChannelType_DL_DCCH` | 0/2 → 12/16 | 5 |
| 19 | `MessageKind_MBSBroadcastConfiguration_r17` | `MBSBroadcastConfiguration-r17` | `MBSBroadcastConfiguration_r17` | `ChannelType_MCCH_r17` | 0/2 → 0/2 | 2 |
| 20 | `MessageKind_MBSMulticastConfiguration_r18` | `MBSMulticastConfiguration-r18` | `MBSMulticastConfiguration_r18` | `ChannelType_MulticastMCCH_r18` | 0/2 → 0/2 | 2 |
| 21 | `MessageKind_Paging` | `Paging` | `Paging` | `ChannelType_PCCH` | 0/2 → 0/2 | 2 |
| 22 | `MessageKind_RRCSetupRequest` | `RRCSetupRequest` | `RRCSetupRequest` | `ChannelType_UL_CCCH` | 0/2 → 0/4 | 3 |
| 23 | `MessageKind_RRCResumeRequest` | `RRCResumeRequest` | `RRCResumeRequest` | `ChannelType_UL_CCCH` | 0/2 → 1/4 | 3 |
| 24 | `MessageKind_RRCReestablishmentRequest` | `RRCReestablishmentRequest` | `RRCReestablishmentRequest` | `ChannelType_UL_CCCH` | 0/2 → 2/4 | 3 |
| 25 | `MessageKind_RRCSystemInfoRequest` | `RRCSystemInfoRequest` | `RRCSystemInfoRequest` | `ChannelType_UL_CCCH` | 0/2 → 3/4 | 3 |
| 26 | `MessageKind_RRCResumeRequest1` | `RRCResumeRequest1` | `RRCResumeRequest1` | `ChannelType_UL_CCCH1` | 0/2 → 0/4 | 3 |
| 27 | `MessageKind_MeasurementReport` | `MeasurementReport` | `MeasurementReport` | `ChannelType_UL_DCCH` | 0/2 → 0/16 | 5 |
| 28 | `MessageKind_RRCReconfigurationComplete` | `RRCReconfigurationComplete` | `RRCReconfigurationComplete` | `ChannelType_UL_DCCH` | 0/2 → 1/16 | 5 |
| 29 | `MessageKind_RRCSetupComplete` | `RRCSetupComplete` | `RRCSetupComplete` | `ChannelType_UL_DCCH` | 0/2 → 2/16 | 5 |
| 30 | `MessageKind_RRCReestablishmentComplete` | `RRCReestablishmentComplete` | `RRCReestablishmentComplete` | `ChannelType_UL_DCCH` | 0/2 → 3/16 | 5 |
| 31 | `MessageKind_RRCResumeComplete` | `RRCResumeComplete` | `RRCResumeComplete` | `ChannelType_UL_DCCH` | 0/2 → 4/16 | 5 |
| 32 | `MessageKind_SecurityModeComplete` | `SecurityModeComplete` | `SecurityModeComplete` | `ChannelType_UL_DCCH` | 0/2 → 5/16 | 5 |
| 33 | `MessageKind_SecurityModeFailure` | `SecurityModeFailure` | `SecurityModeFailure` | `ChannelType_UL_DCCH` | 0/2 → 6/16 | 5 |
| 34 | `MessageKind_ULInformationTransfer` | `ULInformationTransfer` | `ULInformationTransfer` | `ChannelType_UL_DCCH` | 0/2 → 7/16 | 5 |
| 35 | `MessageKind_LocationMeasurementIndication` | `LocationMeasurementIndication` | `LocationMeasurementIndication` | `ChannelType_UL_DCCH` | 0/2 → 8/16 | 5 |
| 36 | `MessageKind_UECapabilityInformation` | `UECapabilityInformation` | `UECapabilityInformation` | `ChannelType_UL_DCCH` | 0/2 → 9/16 | 5 |
| 37 | `MessageKind_CounterCheckResponse` | `CounterCheckResponse` | `CounterCheckResponse` | `ChannelType_UL_DCCH` | 0/2 → 10/16 | 5 |
| 38 | `MessageKind_UEAssistanceInformation` | `UEAssistanceInformation` | `UEAssistanceInformation` | `ChannelType_UL_DCCH` | 0/2 → 11/16 | 5 |
| 39 | `MessageKind_FailureInformation` | `FailureInformation` | `FailureInformation` | `ChannelType_UL_DCCH` | 0/2 → 12/16 | 5 |
| 40 | `MessageKind_ULInformationTransferMRDC` | `ULInformationTransferMRDC` | `ULInformationTransferMRDC` | `ChannelType_UL_DCCH` | 0/2 → 13/16 | 5 |
| 41 | `MessageKind_SCGFailureInformation` | `SCGFailureInformation` | `SCGFailureInformation` | `ChannelType_UL_DCCH` | 0/2 → 14/16 | 5 |
| 42 | `MessageKind_SCGFailureInformationEUTRA` | `SCGFailureInformationEUTRA` | `SCGFailureInformationEUTRA` | `ChannelType_UL_DCCH` | 0/2 → 15/16 | 5 |
| 43 | `MessageKind_ULDedicatedMessageSegment_r16` | `ULDedicatedMessageSegment-r16` | `ULDedicatedMessageSegment_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 0/16 | 6 |
| 44 | `MessageKind_DedicatedSIBRequest_r16` | `DedicatedSIBRequest-r16` | `DedicatedSIBRequest_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 1/16 | 6 |
| 45 | `MessageKind_MCGFailureInformation_r16` | `MCGFailureInformation-r16` | `MCGFailureInformation_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 2/16 | 6 |
| 46 | `MessageKind_UEInformationResponse_r16` | `UEInformationResponse-r16` | `UEInformationResponse_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 3/16 | 6 |
| 47 | `MessageKind_SidelinkUEInformationNR_r16` | `SidelinkUEInformationNR-r16` | `SidelinkUEInformationNR_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 4/16 | 6 |
| 48 | `MessageKind_ULInformationTransferIRAT_r16` | `ULInformationTransferIRAT-r16` | `ULInformationTransferIRAT_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 5/16 | 6 |
| 49 | `MessageKind_IABOtherInformation_r16` | `IABOtherInformation-r16` | `IABOtherInformation_r16` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 6/16 | 6 |
| 50 | `MessageKind_MBSInterestIndication_r17` | `MBSInterestIndication-r17` | `MBSInterestIndication_r17` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 7/16 | 6 |
| 51 | `MessageKind_UEPositioningAssistanceInfo_r17` | `UEPositioningAssistanceInfo-r17` | `UEPositioningAssistanceInfo_r17` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 8/16 | 6 |
| 52 | `MessageKind_MeasurementReportAppLayer_r17` | `MeasurementReportAppLayer-r17` | `MeasurementReportAppLayer_r17` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 9/16 | 6 |
| 53 | `MessageKind_IndirectPathFailureInformation_r18` | `IndirectPathFailureInformation-r18` | `IndirectPathFailureInformation_r18` | `ChannelType_UL_DCCH` | 1/2 → 0/2 → 10/16 | 6 |
