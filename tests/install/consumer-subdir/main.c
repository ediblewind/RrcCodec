/* ============================================================================
 * tests/install/consumer-subdir/main.c — add_subdirectory 消费者的纯 C99 入口
 * ========================================================================== */
#include <rrc_codec/rrc_codec.h>

#include <stdio.h>

#include "mib_roundtrip.h"

int main(void)
{
    printf("RrcCodec %s (ASN.1 %s), add_subdirectory consumer\n",
           GetVersionString(), GetAsn1VersionString());
    return rrc_install_report();
}
