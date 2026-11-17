/* ============================================================================
 * tests/install/consumer-cmake/main_c.c — find_package 消费者的纯 C99 入口
 * ========================================================================== */
#include <rrc_codec/rrc_codec.h>

#include <stdio.h>

#include "mib_roundtrip.h"

int main(void)
{
    printf("RrcCodec %s (ASN.1 %s), C consumer\n", GetVersionString(),
           GetAsn1VersionString());
    return rrc_install_report();
}
