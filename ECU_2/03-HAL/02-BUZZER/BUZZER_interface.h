#ifndef BUZZER_INTERFACE_H
#define BUZZER_INTERFACE_H

void BUZZER_init(void);

void BUZZER_ChangeState(uint_8 State);

#define BUZZER_OFF      ((uint_8)0)  
#define BUZZER_ON       ((uint_8)1) 

#endif