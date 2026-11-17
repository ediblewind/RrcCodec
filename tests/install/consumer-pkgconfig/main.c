/* ============================================================================
 * tests/install/consumer-pkgconfig/main.c — pkg-config 消费者的纯 C99 入口
 *
 * 编译/链接参数完全来自 pkg-config（见同目录 CMakeLists.txt），本文件不包含
 * 任何安装路径或链接选项。
 * ========================================================================== */
#include <rrc_codec/rrc_codec.h>

#include <stdio.h>

#include "mib_roundtrip.h"

int main(void)
{
    printf("RrcCodec %s (ASN.1 %s), pkg-config consumer\n", GetVersionString(),
           GetAsn1VersionString());
    return rrc_install_report();
}
