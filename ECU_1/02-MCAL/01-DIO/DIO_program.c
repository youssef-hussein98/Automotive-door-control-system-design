#include "01-LIB\comm_macros.h"
#include "01-LIB\std_types.h"

#include"DIO_registers.h"
#include "DIO_interface.h"

void DIO_init()
{
    /* initialize dio */
}
uint_8 DIO_write(uint_8 Port_no,uint_8 Pin_no,uint_8 Pin_value)
{
    /* change the value of the pin if pin_value is acceptable */
    /* then return E_OK   */
    /* if Pin_value isn't acceptable then return E_NOK */
}
uint_8 DIO_read(uint_8 Port_no,uint_8 Pin_no)
{
    /* return pin value  */
}

