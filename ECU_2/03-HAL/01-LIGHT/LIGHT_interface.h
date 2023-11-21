#ifndef LIGHT_INTERFACE_H
#define LIGHT_INTERFACE_H

void LED_init(void);

void LED_ChangeState(uint_8 LED_ID,uint_8 State);

#define LED_OFF     ((uint_8)0) 
#define LED_ON      ((uint_8)1)

#define LED_RIGHT   ((uint_8)0)
#define LED_LIFT    ((uint_8)1)

#endif