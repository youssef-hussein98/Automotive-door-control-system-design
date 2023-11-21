#ifndef OS_INTERFACE_H
#define OS_INTERFACE_H

void OS_Start(void);
void OS_Stop(void);
void OS_AddTask(void(*ptrTaskHandler)(void),uint_8 priority);
void OS_Delay(uint_32 ms);


#endif