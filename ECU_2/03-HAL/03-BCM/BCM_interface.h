#ifndef BCM_INTERFACE_H
#define BCM_INTERFACE_H

void BCM_init(void);
uint_8 BCM_sendState(uint_8 ID,uint_8 State);
uint_8 BCM_receiveState(uint_8 ID);

#define DOOR_ID         ((uint_8)0)
#define SWITCH_ID       ((uint_8)1)
#define SPEED_ID        ((uint_8)2)

#endif