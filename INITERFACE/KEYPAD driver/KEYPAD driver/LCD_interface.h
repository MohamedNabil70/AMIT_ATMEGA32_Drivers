/*
 * LCD_interface.h
 *
 * Created: 9/11/2022 11:33:19 AM
 *  Author: Mohamed Nabil
 */ 


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_


//main functions
void LCD_init(void);
void LCD_sendCmnd(u8 cmnd);
void LCD_sendChar(u8 data);
void LCD_sendString(u8* data,u8 length);

static void writeHalfPort(u8 value);
#endif /* LCD_INTERFACE_H_ */