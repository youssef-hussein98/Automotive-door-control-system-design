#include "01-LIB/std_types.h"
#include "01-LIB/comm_macros.h"

#include "CAN_interface.h"
#include "CAN_registers.h"
#include "CAN_config.h"

void CAN_init(void)
{
    /* initialize peripheral  */
}

void CANMessageSet(uint_32 BaseID,uint_32 ReceiverID ,uint_32* psMsgObject)
{
    /* send message */
}

void CANMessageGet(uint_32 BaseID,uint_32 SenderID ,uint_32* psMsgObject)
{
    /* send message */
}