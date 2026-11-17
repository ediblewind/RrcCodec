# CI 与本地质量门禁

方案第 7.8 / 9.4 节的质量门禁脚本。CI 定义见仓库根 `.github/workflows/ci.yml`；
本目录提供可直接在本地执行的等价脚本。

## 本地一键验证

Windows（PowerShell，MinGW）：

```powershell
pwsh ci/ci-windows.ps1
```

Linux（bash，GCC/Clang）：

```bash
bash ci/ci-linux.sh
```

## 门禁清单

| 门禁 | 命令 | 通过标准 |
|---|---|---|
| Debug 构建 + 测试 | `cmake --preset mingw-debug && cmake --build --preset mingw-debug && ctest --preset mingw-debug` | 7/7 |
| Release + `-Werror` | 见脚本 | 零警告，7/7 |
| 共享库 | `-DRRC_CODEC_BUILD_SHARED=ON` | 6/6（消息级内部符号测试跳过），导出 8 符号 |
| 生成物一致性 | `python -m rrcgen ... --check` | 逐字节一致 |
| 公共头 | `rrc_codec_headers_c99` 测试 | C99 + C++17 通过 |
| 安装消费 | `rrc_codec_install_consumers` 测试 | find_package / add_subdirectory 通过（有 pkg-config 时含 pkg-config） |
| 体积/时间记录 | 脚本输出 | 构建 ≤5 min（8 并发）；共享库 ≤10 MB |

## 基线（本机 MinGW-W64 GCC 16.1.0，2026-11-17）

| 指标 | 值 |
|---|---:|
| configure | 1.24 s |
| 全量构建（Release，8 并发，含测试/示例） | 8.74 s |
| ctest | 6.31 s |
| 静态库 Release | 8.34 MB |
| 共享库 Release（未 strip） | 5.24 MB |
| `rrc_types.h` | 6.2 MB |
| `src/generated/` | 11.1 MB |

## 说明

- Windows 本机未安装 pkg-config / Doxygen；对应项在安装测试中自动跳过，Doxygen
  告警检查未执行（见 `docs/测试报告.md` 第 6 节）。
- pycrate / 现行 v1 差分对拍需要额外环境，未纳入本脚本；建议在具备 pycrate 的
  Linux CI 中追加。
- ASan/UBSan：MinGW 运行库不提供 UBSan 运行时；Linux 下可用
  `-DRRC_CODEC_ENABLE_SANITIZERS=ON` 打开。
