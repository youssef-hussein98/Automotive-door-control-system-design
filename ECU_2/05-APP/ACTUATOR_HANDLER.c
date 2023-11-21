#include "01-LIB/comm_macros.h"
#include "01-LIB/std_types.h"

#include "01-LIGHT/LIGHT_interface.h"
#include "02-BUZZER/BUZZER_interface.h"
#include "03-BCM/BCM_interface.h"

#include "01-OS/OS_interface.h"

void SENSORS_reading_handler(void);
void LIGHT_handler(void);
void BUZZER_handler(void);

uint_8 DOOR_readings;
uint_8 SWITCH_readings;
uint_8 SPEED_readings;

void main(void)
{
    LED_init();
    BUZZER_init();
    BCM_init();

    OS_AddTask(SENSORS_reading_handler,3);
    OS_AddTask(LIGHT_handler,2);
    OS_AddTask(BUZZER_handler,1);
    OS_Start();

    while(1);
    return 0;
}

void SENSORS_reading_handler(void)
{
    DOOR_readings = BCM_receiveState(DOOR_ID);
    SWITCH_readings = BCM_receiveState(SWITCH_ID);
    SPEED_readings = BCM_receiveState(SPEED_ID);

    OS_Delay(1);

}
void LIGHT_handler(void)
{
    /* change light state according to state machine */
    OS_Delay(1);
}
void BUZZER_handler(void)
{
    /* change Buzzer state according to state machine */
    OS_Delay(1);
}