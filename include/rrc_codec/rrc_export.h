/* ============================================================================
 * rrc_export.h — RRC 编解码库导出宏
 *
 * 3GPP TS 38.331 v18.10.0（NR-RRC-Definitions）UPER 编解码库。
 *
 * 用法：
 *   - 静态库：构建时 PUBLIC 定义 RRC_CODEC_STATIC，消费者无需额外定义；
 *   - 动态库：库自身定义 RRC_CODEC_BUILDING_LIBRARY，导出 RRC_CODEC_API 符号；
 *     消费者包含本头时自动使用 dllimport（Windows）。
 *
 * 宏前缀统一为 RRC_CODEC_，避免污染用户宏空间。
 * ========================================================================== */
#ifndef RRC_CODEC_EXPORT_H
#define RRC_CODEC_EXPORT_H

#if defined(RRC_CODEC_STATIC)
#  define RRC_CODEC_API
#elif defined(_WIN32) || defined(__CYGWIN__)
#  if defined(RRC_CODEC_BUILDING_LIBRARY)
#    if defined(__GNUC__)
#      define RRC_CODEC_API __attribute__((dllexport))
#    else
#      define RRC_CODEC_API __declspec(dllexport)
#    endif
#  else
#    if defined(__GNUC__)
#      define RRC_CODEC_API __attribute__((dllimport))
#    else
#      define RRC_CODEC_API __declspec(dllimport)
#    endif
#  endif
#else
#  if defined(__GNUC__) && (__GNUC__ >= 4)
#    define RRC_CODEC_API __attribute__((visibility("default")))
#  else
#    define RRC_CODEC_API
#  endif
#endif

#endif /* RRC_CODEC_EXPORT_H */
