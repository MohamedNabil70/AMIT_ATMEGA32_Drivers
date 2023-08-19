/*
 * LCD_program.c
 *
 * Created: 9/11/2022 11:32:37 AM
 *  Author: Mohamed Nabil
 */ 
 
#define F_CPU 16000000UL
#include <util/delay.h> 
	/*UTILES LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"  

	/* MCAL */
#include "DIO_interface.h"

	/* HAL */
#include "LCD_interface.h"
#include "LCD_config.h"

void LCD_init(void)
{
_delay_ms(35);
	//set Rs pin to 0 (command)
DIO_setPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
	//set Rw pin to 0 (write)
DIO_setPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);

writeHalfPort(0b0010);
	//enable pulse H=>L	
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(1);
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_LOW);

LCD_sendCmnd(0b00101000);
_delay_us(45);
//display on,blink on, cursor on
LCD_sendCmnd(0b00001111);
_delay_us(45);
// clear display
LCD_sendCmnd(0b00000001);
_delay_ms(2);
//set 
LCD_sendCmnd(0b00000110);


}
void LCD_sendCmnd(u8 cmnd)
{
	//set Rs pin to 0 (command)
DIO_setPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
	//set Rw pin to 0 (write)
DIO_setPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
	//write most seg 4 bits of command
writeHalfPort(cmnd>>4);	
	//enable pulse H=>L
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(1);
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_LOW);
	//write least seg 4 bits command
writeHalfPort(cmnd);
	//enable pulse H=>L	
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(1);
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_LOW);

}
void LCD_sendChar(u8 data)
{
	//set Rs pin to 1 (data)
DIO_setPinValue(DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
	//set Rw pin to 0 (write)
DIO_setPinValue(DIO_PORTB,DIO_PIN2,DIO_PIN_LOW);
	//write most seg 4 bits of data
writeHalfPort(data>>4);	
	//enable pulse H=>L
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(1);
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_LOW);
	//write least seg 4 bits of data
writeHalfPort(data);
	//enable pulse H=>L	
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(1);
DIO_setPinValue(DIO_PORTB,DIO_PIN3,DIO_PIN_LOW);
	
}


void LCD_sendString(u8* data,u8 length)
{
u8 count;
 for(count=0; count<length; ++count)
{
	LCD_sendChar(data[count]);
}
}




static void writeHalfPort(u8 value)
{
if(1 == GET_BIT(value,0))
{
DIO_setPinValue(DIO_PORTA,DIO_PIN4,DIO_PIN_HIGH);		
}else{
DIO_setPinValue(DIO_PORTA,DIO_PIN4,DIO_PIN_LOW);	
}
if(1 == GET_BIT(value,1))
{
DIO_setPinValue(DIO_PORTA,DIO_PIN5,DIO_PIN_HIGH);		
}else{                           
DIO_setPinValue(DIO_PORTA,DIO_PIN5,DIO_PIN_LOW);	
}
if(1 == GET_BIT(value,2))
{
DIO_setPinValue(DIO_PORTA,DIO_PIN6,DIO_PIN_HIGH);		
}else{
DIO_setPinValue(DIO_PORTA,DIO_PIN6,DIO_PIN_LOW);	
}
if(1 == GET_BIT(value,3))
{
DIO_setPinValue(DIO_PORTA,DIO_PIN7,DIO_PIN_HIGH);		
}else{
DIO_setPinValue(DIO_PORTA,DIO_PIN7,DIO_PIN_LOW);	
}
		
}
