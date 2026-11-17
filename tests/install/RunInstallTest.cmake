# ============================================================================
# tests/install/RunInstallTest.cmake — 安装消费测试驱动（cmake -P 脚本）
#
# 由 CTest 以 `cmake -P RunInstallTest.cmake` 调用（见 tests/install/CMakeLists.txt）。
# 步骤：
#   1. cmake --install 到临时前缀（每次运行前清空）；
#   2. 校验安装布局（头文件 / 库 / CMake 包 / pkg-config 文件）；
#   3. 构建并运行 consumer-cmake（find_package，C 与 C++ 两个 main）；
#   4. 若系统有 pkg-config，构建并运行 consumer-pkgconfig；
#   5. 构建并运行 consumer-subdir（add_subdirectory 源码内嵌）。
#
# 必需输入（-D 传入，绝对路径）：
#   RRC_CODEC_BINARY_DIR      顶层构建目录（已构建）
#   RRC_CODEC_SOURCE_DIR      RrcCodec 源码根目录
#   RRC_CODEC_PREFIX          临时安装前缀
#   RRC_CODEC_WORK_DIR        消费者构建工作目录
#   RRC_CODEC_INSTALL_INCLUDEDIR / LIBDIR / BINDIR / PKGCONFIG_DIR
# 可选输入：
#   RRC_CODEC_GENERATOR、RRC_CODEC_BUILD_CONFIG、RRC_CODEC_MULTI_CONFIG、
#   RRC_CODEC_C_COMPILER、RRC_CODEC_CXX_COMPILER、RRC_CODEC_PKG_CONFIG、
#   RRC_CODEC_EXPECT_SHARED（ON/OFF）
# ============================================================================
cmake_minimum_required(VERSION 3.20)

# ---------------------------------------------------------------------------
# 0. 输入校验与清理
# ---------------------------------------------------------------------------
foreach(_required
    RRC_CODEC_BINARY_DIR
    RRC_CODEC_SOURCE_DIR
    RRC_CODEC_PREFIX
    RRC_CODEC_WORK_DIR
    RRC_CODEC_INSTALL_INCLUDEDIR
    RRC_CODEC_INSTALL_LIBDIR
    RRC_CODEC_INSTALL_BINDIR
    RRC_CODEC_INSTALL_PKGCONFIG_DIR)
  if(NOT DEFINED ${_required} OR "${${_required}}" STREQUAL "")
    message(FATAL_ERROR
      "RunInstallTest.cmake 缺少输入：-D${_required}=...（由 tests/install/CMakeLists.txt 传入）")
  endif()
endforeach()

foreach(_absolute
    RRC_CODEC_BINARY_DIR RRC_CODEC_SOURCE_DIR RRC_CODEC_PREFIX RRC_CODEC_WORK_DIR)
  if(NOT IS_ABSOLUTE "${${_absolute}}")
    message(FATAL_ERROR
      "RunInstallTest.cmake 输入必须是绝对路径：${_absolute}=${${_absolute}}")
  endif()
endforeach()

if(NOT DEFINED RRC_CODEC_BUILD_CONFIG)
  set(RRC_CODEC_BUILD_CONFIG "")
endif()
if(NOT DEFINED RRC_CODEC_MULTI_CONFIG)
  set(RRC_CODEC_MULTI_CONFIG OFF)
endif()

file(REMOVE_RECURSE "${RRC_CODEC_PREFIX}" "${RRC_CODEC_WORK_DIR}")
file(MAKE_DIRECTORY "${RRC_CODEC_PREFIX}" "${RRC_CODEC_WORK_DIR}")

# ---------------------------------------------------------------------------
# 辅助函数
# ---------------------------------------------------------------------------

# 运行命令；失败时打印完整输出并终止脚本。
function(rrc_run _label)
  execute_process(
    COMMAND ${ARGN}
    RESULT_VARIABLE _result
    OUTPUT_VARIABLE _stdout
    ERROR_VARIABLE _stderr)
  if(NOT _result EQUAL 0)
    message(FATAL_ERROR
      "[install-test] ${_label} 失败（退出码 ${_result}）\n"
      "命令：${ARGN}\n"
      "--- stdout ---\n${_stdout}\n--- stderr ---\n${_stderr}")
  endif()
  message(STATUS "[install-test] ${_label} ... OK")
endfunction()

# 配置并构建一个消费者工程；额外参数透传给 cmake 配置阶段。
function(rrc_configure_and_build _label _source_dir _binary_dir)
  set(_configure_cmd "${CMAKE_COMMAND}" -S "${_source_dir}" -B "${_binary_dir}")
  if(DEFINED RRC_CODEC_GENERATOR AND NOT "${RRC_CODEC_GENERATOR}" STREQUAL "")
    list(APPEND _configure_cmd -G "${RRC_CODEC_GENERATOR}")
  endif()
  if(DEFINED RRC_CODEC_C_COMPILER AND NOT "${RRC_CODEC_C_COMPILER}" STREQUAL "")
    list(APPEND _configure_cmd "-DCMAKE_C_COMPILER=${RRC_CODEC_C_COMPILER}")
  endif()
  if(DEFINED RRC_CODEC_CXX_COMPILER AND NOT "${RRC_CODEC_CXX_COMPILER}" STREQUAL "")
    list(APPEND _configure_cmd "-DCMAKE_CXX_COMPILER=${RRC_CODEC_CXX_COMPILER}")
  endif()
  if(RRC_CODEC_MULTI_CONFIG)
    if(NOT "${RRC_CODEC_BUILD_CONFIG}" STREQUAL "")
      list(APPEND _configure_cmd "--config" "${RRC_CODEC_BUILD_CONFIG}")
    endif()
  elseif(NOT "${RRC_CODEC_BUILD_CONFIG}" STREQUAL "")
    list(APPEND _configure_cmd "-DCMAKE_BUILD_TYPE=${RRC_CODEC_BUILD_CONFIG}")
  endif()
  list(APPEND _configure_cmd
    "-DCMAKE_PREFIX_PATH=${RRC_CODEC_PREFIX}"
    "-DRRC_CODEC_PREFIX=${RRC_CODEC_PREFIX}"
    "-DRRC_CODEC_SOURCE_DIR=${RRC_CODEC_SOURCE_DIR}"
    "-DRRC_CODEC_INSTALL_PKGCONFIG_DIR=${RRC_CODEC_INSTALL_PKGCONFIG_DIR}"
    ${ARGN})
  rrc_run("配置 ${_label}" ${_configure_cmd})

  set(_build_cmd "${CMAKE_COMMAND}" --build "${_binary_dir}")
  if(RRC_CODEC_MULTI_CONFIG AND NOT "${RRC_CODEC_BUILD_CONFIG}" STREQUAL "")
    list(APPEND _build_cmd --config "${RRC_CODEC_BUILD_CONFIG}")
  endif()
  rrc_run("构建 ${_label}" ${_build_cmd})
endfunction()

# 运行消费者可执行文件（自动适配 exe 后缀 / 多配置子目录 / 动态库 PATH）。
function(rrc_run_consumer _label _binary_dir _name)
  set(_suffix "")
  if(CMAKE_HOST_WIN32)
    set(_suffix ".exe")
  endif()
  set(_candidates)
  if(RRC_CODEC_MULTI_CONFIG AND NOT "${RRC_CODEC_BUILD_CONFIG}" STREQUAL "")
    list(APPEND _candidates
      "${_binary_dir}/${RRC_CODEC_BUILD_CONFIG}/${_name}${_suffix}")
  endif()
  list(APPEND _candidates "${_binary_dir}/${_name}${_suffix}")

  set(_exe "")
  foreach(_candidate IN LISTS _candidates)
    if(EXISTS "${_candidate}")
      set(_exe "${_candidate}")
      break()
    endif()
  endforeach()
  if("${_exe}" STREQUAL "")
    message(FATAL_ERROR "[install-test] 找不到可执行文件：${_candidates}")
  endif()

  set(_run_cmd "${CMAKE_COMMAND}" -E env)
  if(RRC_CODEC_EXPECT_SHARED)
    # 动态库安装到 <prefix>/<bindir>，运行时需要它在 PATH（Windows）上。
    if(CMAKE_HOST_WIN32)
      set(_path_sep ";")
    else()
      set(_path_sep ":")
    endif()
    list(APPEND _run_cmd
      "PATH=${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_BINDIR}${_path_sep}$ENV{PATH}")
  endif()
  list(APPEND _run_cmd "${_exe}")
  rrc_run("运行 ${_label}" ${_run_cmd})
endfunction()

# ---------------------------------------------------------------------------
# 1. 安装
# ---------------------------------------------------------------------------
set(_install_cmd "${CMAKE_COMMAND}" --install "${RRC_CODEC_BINARY_DIR}"
    --prefix "${RRC_CODEC_PREFIX}")
if(RRC_CODEC_MULTI_CONFIG AND NOT "${RRC_CODEC_BUILD_CONFIG}" STREQUAL "")
  list(APPEND _install_cmd --config "${RRC_CODEC_BUILD_CONFIG}")
endif()
rrc_run("cmake --install" ${_install_cmd})

# ---------------------------------------------------------------------------
# 2. 校验安装布局
# ---------------------------------------------------------------------------
set(_include_root "${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_INCLUDEDIR}")
set(_headers
  rrc_codec.h rrc_export.h rrc_version.h rrc_channel.h rrc_error.h
  types/rrc_types.h
  messages/rrc_messages.h)
foreach(_header IN LISTS _headers)
  if(NOT EXISTS "${_include_root}/rrc_codec/${_header}")
    message(FATAL_ERROR "[install-test] 缺少已安装头文件：${_include_root}/rrc_codec/${_header}")
  endif()
endforeach()

file(GLOB _installed_libs "${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_LIBDIR}/*rrc_codec*")
if(NOT _installed_libs)
  message(FATAL_ERROR
    "[install-test] 在 ${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_LIBDIR} 下找不到 rrc_codec 库文件")
endif()

set(_cmake_package_dir
  "${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_LIBDIR}/cmake/RrcCodec")
foreach(_package_file RrcCodecConfig.cmake RrcCodecConfigVersion.cmake RrcCodecTargets.cmake)
  if(NOT EXISTS "${_cmake_package_dir}/${_package_file}")
    message(FATAL_ERROR "[install-test] 缺少 CMake 包文件：${_cmake_package_dir}/${_package_file}")
  endif()
endforeach()

set(_pc_file
  "${RRC_CODEC_PREFIX}/${RRC_CODEC_INSTALL_PKGCONFIG_DIR}/rrc_codec.pc")
if(NOT EXISTS "${_pc_file}")
  message(FATAL_ERROR "[install-test] 缺少 pkg-config 文件：${_pc_file}")
endif()

# ---------------------------------------------------------------------------
# 3. consumer-cmake：find_package(RrcCodec 2 CONFIG REQUIRED)
# ---------------------------------------------------------------------------
rrc_configure_and_build("consumer-cmake"
  "${CMAKE_CURRENT_LIST_DIR}/consumer-cmake"
  "${RRC_CODEC_WORK_DIR}/consumer-cmake")
rrc_run_consumer("consumer-cmake C"
  "${RRC_CODEC_WORK_DIR}/consumer-cmake" consumer_c)
rrc_run_consumer("consumer-cmake C++"
  "${RRC_CODEC_WORK_DIR}/consumer-cmake" consumer_cpp)

# ---------------------------------------------------------------------------
# 4. consumer-pkgconfig：pkg-config --cflags/--libs
# ---------------------------------------------------------------------------
set(_pkg_config_exe)
if(DEFINED RRC_CODEC_PKG_CONFIG AND EXISTS "${RRC_CODEC_PKG_CONFIG}")
  set(_pkg_config_exe "${RRC_CODEC_PKG_CONFIG}")
else()
  find_program(_pkg_config_exe NAMES pkg-config pkg-config.exe)
endif()

if(_pkg_config_exe)
  rrc_configure_and_build("consumer-pkgconfig"
    "${CMAKE_CURRENT_LIST_DIR}/consumer-pkgconfig"
    "${RRC_CODEC_WORK_DIR}/consumer-pkgconfig"
    "-DPKG_CONFIG_EXECUTABLE=${_pkg_config_exe}")
  rrc_run_consumer("consumer-pkgconfig"
    "${RRC_CODEC_WORK_DIR}/consumer-pkgconfig" consumer_pkgconfig)
else()
  message(STATUS
    "[install-test] 跳过 pkg-config consumer：本机未找到 pkg-config（已校验 .pc 文件存在）")
endif()

# ---------------------------------------------------------------------------
# 5. consumer-subdir：add_subdirectory（源码内嵌）
# ---------------------------------------------------------------------------
rrc_configure_and_build("consumer-subdir"
  "${CMAKE_CURRENT_LIST_DIR}/consumer-subdir"
  "${RRC_CODEC_WORK_DIR}/consumer-subdir")
rrc_run_consumer("consumer-subdir"
  "${RRC_CODEC_WORK_DIR}/consumer-subdir" consumer_subdir)

message(STATUS "[install-test] 全部安装消费测试通过")
