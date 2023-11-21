#ifndef CAN_INTERFACE_H
#define CAN_INTERFACE_H

void CAN_init(void);
void CANMessageSet(uint_32 BaseID,uint_32 ReceiverID ,uint_32* psMsgObject);
void CANMessageGet(uint_32 BaseID,uint_32 SenderID ,uint_32* psMsgObject);

#endif