#ifndef __PROJECT_ERBIUM_CONF_H__
#define __PROJECT_ERBIUM_CONF_H__

#undef NETSTACK_CONF_RDC
#define NETSTACK_CONF_RDC              contikimac_driver

#undef RPL_CONF_MAX_DAG_PER_INSTANCE
#define RPL_CONF_MAX_DAG_PER_INSTANCE     1

#undef UIP_CONF_TCP
#define UIP_CONF_TCP                   0

#if CONTIKI_TARGET_SRF06_CC26XX
#undef NETSTACK_CONF_MAC
#define NETSTACK_CONF_MAC     csma_driver
#else
#undef NETSTACK_CONF_MAC
#define NETSTACK_CONF_MAC     nullmac_driver
#endif

#undef REST_MAX_CHUNK_SIZE
#define REST_MAX_CHUNK_SIZE            48

#undef RPL_CONF_WITH_DAO_ACK
#define RPL_CONF_WITH_DAO_ACK          0

#undef RPL_CONF_OF
#define RPL_CONF_OF                    rpl_of0

#endif 
