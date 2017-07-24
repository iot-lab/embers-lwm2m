/* Network stack configuration */


/* Custom channel and PAN ID configuration */
/*
   #undef RF_CHANNEL
   #define RF_CHANNEL                     26

   #undef IEEE802154_CONF_PANID
   #define IEEE802154_CONF_PANID          0xABCD
 */

/* IP buffer size must match all other hops, in particular the border router. */
#undef UIP_CONF_BUFFER_SIZE
#define UIP_CONF_BUFFER_SIZE           1280

#undef RPL_CONF_MAX_DAG_PER_INSTANCE
#define RPL_CONF_MAX_DAG_PER_INSTANCE     1



/* Turn off DAO ACK to make code smaller */
#undef RPL_CONF_WITH_DAO_ACK
#define RPL_CONF_WITH_DAO_ACK          0

#undef RPL_CONF_OF
#define RPL_CONF_OF                    rpl_of0

/* Define WITH_NON_STORING=1 (in Makefile.config) to run with non-storing mode */
#ifndef WITH_NON_STORING
#define WITH_NON_STORING 0
#endif

#undef IOTLAB_WITH_NON_STORING
#define IOTLAB_WITH_NON_STORING WITH_NON_STORING

#undef TSCH_LOG_CONF_LEVEL
#define TSCH_LOG_CONF_LEVEL 0

#include "examples/iotlab/00-configuration/tsch-project-conf.h"
#include "examples/iotlab/00-configuration/iotlab-project-conf.h"
