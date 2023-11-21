#include "01-LIB/comm_macros.h"
#include "01-LIB/std_types.h"

#include "01-DOOR/DOOR_interface.h"
#include "02-SWITCH/SWITCH_interface.h"
#include "03-SPEED/SPEED_interface.h"
#include "04-BCM/BCM_interface.h"

#include "01-OS/OS_interface.h"


void DOOR_Handler(void);
void SWITCH_Handler(void);
void SPEED_Handler(void);

int main(void)
{
    DOOR_init();
    SWITCH_init();
    SPEED_init();
    BCM_init();

    OS_AddTask(SWITCH_Handler,1);
    OS_AddTask(DOOR_Handler,2);
    OS_AddTask(SPEED_Handler,3);

    while(1);
    return 0;
}



void DOOR_Handler(void)
{
    BCM_sendState(DOOR_ID,DOOR_reading());
    OS_Delay(10);
}
void SWITCH_Handler(void)
{
    BCM_sendState(SWITCH_ID,SWITCH_reading());
    OS_Delay(20);
}
void SPEED_Handler(void)
{
    BCM_sendState(SPEED_ID,SPEED_reading());
    OS_Delay(5);
}
