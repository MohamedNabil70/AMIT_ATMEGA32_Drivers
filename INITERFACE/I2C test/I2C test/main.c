/*
 * TWI test.c
 *
 * Created: 10/6/2022 12:28:28 PM
 * Author : Mohamed Nabil
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
		/* UTILS */
		#include "STD_TYPES.h"
		#include "BIT_MATH.h"
		#include "ATMEGA32_REG.h"

		/* MCAL */
		#include "TWI_interface.h"
		#include "DIO_interface.h"
		/* HAL */
		#include "EEPROM_interface.h"
		#include "LCD_interface.h"
		#include "LCD_config.h"
int main(void)
{
LCD_setPinDirections();	
LCD_init();	
	
u8 data;
TWI_initMaster(); 
  
EEPROM_writeByte(1023,'Z');

EEPROM_readByte(1023,&data); 
 
 
    while (1) 
    {
		
	LCD_sendChar(data);
	_delay_ms(250);
    }
}

