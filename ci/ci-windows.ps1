# ============================================================================
# ci-windows.ps1 — Windows/MinGW 本地 CI 等价脚本（方案 7.8 / 9.4）
#
# 依次执行：
#   1. Debug 静态库构建 + ctest
#   2. Release + -Werror 构建 + ctest
#   3. 共享库构建 + ctest + 导出符号检查
#   4. 生成物一致性检查（python -m rrcgen --check）
#   5. 记录构建时间、库体积
#
# 用法：pwsh ci/ci-windows.ps1 [-SkipShared]
# ============================================================================
param(
  [switch]$SkipShared
)

$ErrorActionPreference = 'Stop'
$RepoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$BuildRoot = Join-Path $RepoRoot 'build'
$Jobs = [Math]::Min(8, [Environment]::ProcessorCount)
$script:Failures = 0

function Invoke-Step {
  param([string]$Name, [scriptblock]$Body)
  Write-Host "`n==> $Name" -ForegroundColor Cyan
  $sw = [System.Diagnostics.Stopwatch]::StartNew()
  & $Body
  if ($LASTEXITCODE -ne 0) {
    $script:Failures++
    Write-Host "FAILED: $Name" -ForegroundColor Red
  } else {
    Write-Host ("OK: {0} ({1:N1}s)" -f $Name, $sw.Elapsed.TotalSeconds) -ForegroundColor Green
  }
  $sw.Stop()
}

function Configure-And-Build {
  param([string]$Dir, [string]$BuildType, [string[]]$Extra = @())
  $args = @('-S', $RepoRoot, '-B', $Dir, '-G', 'Ninja', "-DCMAKE_BUILD_TYPE=$BuildType") + $Extra
  cmake @args
  if ($LASTEXITCODE -ne 0) { throw "configure failed: $Dir" }
  cmake --build $Dir --parallel $Jobs
  if ($LASTEXITCODE -ne 0) { throw "build failed: $Dir" }
}

Push-Location $RepoRoot
try {
  Invoke-Step 'Debug build + ctest' {
    Configure-And-Build (Join-Path $BuildRoot 'ci-debug') 'Debug'
    ctest --test-dir (Join-Path $BuildRoot 'ci-debug') --output-on-failure
  }

  Invoke-Step 'Release -Werror build + ctest' {
    Configure-And-Build (Join-Path $BuildRoot 'ci-werror') 'Release' @('-DRRC_CODEC_WARNINGS_AS_ERRORS=ON')
    ctest --test-dir (Join-Path $BuildRoot 'ci-werror') --output-on-failure
  }

  if (-not $SkipShared) {
    Invoke-Step 'Shared library build + ctest' {
      Configure-And-Build (Join-Path $BuildRoot 'ci-shared') 'Release' @(
        '-DRRC_CODEC_BUILD_SHARED=ON', '-DRRC_CODEC_WARNINGS_AS_ERRORS=ON')
      ctest --test-dir (Join-Path $BuildRoot 'ci-shared') --output-on-failure
      $dll = Join-Path $BuildRoot 'ci-shared\bin\librrc_codec.dll'
      if (-not (Test-Path $dll)) { throw "missing $dll" }
      $exports = (objdump -p $dll | Select-String -Pattern '^\s+\[.*\]  [0-9A-Fa-f]{4} (\w+)$') |
        ForEach-Object { $_.Matches[0].Groups[1].Value }
      $expected = @('EncodeMessage', 'DecodeMessage', 'FreeMessage', 'FreeEncodedMessage',
                    'GetLastErrorInfo', 'SetErrorHandler', 'GetVersionString', 'GetAsn1VersionString')
      $missing = $expected | Where-Object { $exports -notcontains $_ }
      $extra = $exports | Where-Object { $expected -notcontains $_ }
      if ($missing -or $extra) {
        throw "export mismatch: missing=$($missing -join ',') extra=$($extra -join ',')"
      }
      Write-Host "DLL exports OK: $($exports -join ', ')"
    }
  }

  Invoke-Step 'Generated code consistency (rrcgen --check)' {
    Push-Location (Join-Path $RepoRoot 'tools\rrcgen')
    try {
      python -m rrcgen --input (Join-Path $RepoRoot 'data\38.331_v18.10.0.asn') `
        --check-input-sha256 (Join-Path $RepoRoot 'data\asn-input.sha256') `
        --repo-root $RepoRoot --check
      if ($LASTEXITCODE -ne 0) { throw 'generated code differs from repository' }
    } finally {
      Pop-Location
    }
  }

  Write-Host "`n== Baseline (sizes/timings)" -ForegroundColor Cyan
  $staticLib = Join-Path $BuildRoot 'ci-werror\librrc_codec.a'
  if (Test-Path $staticLib) {
    Write-Host ("static lib : {0:N2} MB" -f ((Get-Item $staticLib).Length / 1MB))
  }
  $typesHeader = Join-Path $RepoRoot 'include\rrc_codec\types\rrc_types.h'
  Write-Host ("rrc_types.h: {0:N2} MB" -f ((Get-Item $typesHeader).Length / 1MB))
} finally {
  Pop-Location
}

if ($script:Failures -ne 0) {
  Write-Host "`nCI FAILED: $script:Failures step(s)" -ForegroundColor Red
  exit 1
}
Write-Host "`nCI PASSED" -ForegroundColor Green
exit 0
