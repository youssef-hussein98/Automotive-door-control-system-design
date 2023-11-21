#include "01-LIB/std_types.h"
#include "01-LIB/comm_macros.h"

#include "02-CAN/CAN_interface.h"

#include "BCM_interface.h"
#include "BCM_config.h"

void BCM_init(void)
{
    /* initialize BCM*/
    /* initialize CAN */
    CAN_init();
}

uint_8 BCM_sendState(uint_8 ID,uint_8 State)
{
    /* send id and state of the sensor*/
}

uint_8 BCM_receiveState(uint_8 ID)
{
    /* return state of the selected sensor*/
}