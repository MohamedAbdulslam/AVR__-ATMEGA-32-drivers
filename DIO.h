

#ifndef DIO_H_
#define DIO_H_

void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber,unsigned char direction);


void DIO_write(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue);


unsigned char DIO_u8read(unsigned char portname,unsigned char pinnumber);


void DIO_toggle(unsigned char portname,unsigned char pinnumber);



void DIO_set_port_direction(unsigned char portname,unsigned char direction);



void DIO_write_port(unsigned char portname,unsigned char portvalue);

void toggle_port(unsigned char portname);

unsigned char DIO_read_port(unsigned char portname);

void connect_pullup(unsigned char portname,unsigned char pinnumber,unsigned char connect_pullup);

void DIO_write_low_nibble(unsigned char portname,unsigned char value);

void DIO_write_high_nibble(unsigned char portname,unsigned char value);

#endif

