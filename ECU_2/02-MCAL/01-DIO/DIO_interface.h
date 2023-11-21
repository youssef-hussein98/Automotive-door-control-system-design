#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/* this file includes functions' declarations */
void DIO_init();
uint_8 DIO_write(uint_8 Port_no,uint_8 Pin_no,uint_8 Pin_value);
uint_8 DIO_read(uint_8 Port_no,uint_8 Pin_no);


#endif