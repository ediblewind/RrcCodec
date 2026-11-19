# tests/interop — 差分对拍（预留）

与 pycrate 参考实现、现行 v1 动态实现做差分：

1. 同一码流分别用 v1 动态实现与 v2 解码，比较关键字段；
2. 用两套实现分别重编码，逐比特比较；
3. 覆盖 `SuspendConfig`、`RRCReconfiguration`（含扩展组/`CONTAINING`）等样例。

本仓库当前**未包含可执行的差分对拍**，原因：

- 本机未安装 pycrate（Python 参考实现）；
- v1 位于独立仓库 `D:\RrcEncodeDecode`，两套库的构建/依赖不同，需要专门的双库
  harness；本次交付聚焦 v2 自身的黄金向量与 53 消息 round-trip。

## 建议实现方式（后续补齐）

- 在具备 `pycrate` 的 Linux CI 中，用 pycrate 的 UPER 编解码对同一结构体，
  与 `EncodeMessage`/`DecodeMessage` 结果逐字节/逐字段比较；
- 对 v1：以 v1 的 C++ API 解码同一码流，导出字段快照，再与 v2 结构体字段比较；
- 重点样例：MIB 黄金向量 `5471ac`、SIB1、RRCReconfiguration（扩展组、
  `masterCellGroup`/`secondaryCellGroup`）、SuspendConfig、Paging。

在补齐之前，该项在测试记录中如实标记为未执行。
