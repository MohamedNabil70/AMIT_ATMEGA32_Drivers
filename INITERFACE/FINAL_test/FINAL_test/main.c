/*
 * ADC Driver.c
 *
 * Created: 9/20/2022 11:51:34 AM
 * Author : Mohamed Nabil
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>	
	/*UTILES LIB*/
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"
	#include "ATMEGA32_REG.h"

	/* MCAL */
	#include "ADC_interface.h"
	#include "DIO_interface.h"
	#include "LCD_interface.h"
	#include "LCD_config.h"
	#include "FLEX_config.h"
	#include "Flex_interface.h"

u16 analogVal2,analogVal4,analogVal5,analogVal6,analogVal7;

int main(void)
{
LCD_setPinDirections();
	
	ADC_init();
	LCD_init();


	_delay_ms(20);
	
	while (1) 
    {
	FLEX_init();	
   FLEX_getAnalogValue();
   _delay_ms(10);
	LCD_setPinDirections(); 
   FLEX_displyVal();


   

   _delay_ms(400);
   LCD_clear();

	}
	

}

