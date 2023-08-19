/*
 * LCD driver.c
 *
 * Created: 9/11/2022 11:30:44 AM
 * Author : Mohamed Nabil
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



int main(void)
{
	/* Data Pins Direction */
DIO_setPinDirection(LCD_D4_PORT,DIO_PIN4,DIO_PIN_OUTPUT);	
DIO_setPinDirection(LCD_D5_PORT,DIO_PIN5,DIO_PIN_OUTPUT);
DIO_setPinDirection(LCD_D6_PORT,DIO_PIN6,DIO_PIN_OUTPUT);
DIO_setPinDirection(LCD_D7_PORT,DIO_PIN7,DIO_PIN_OUTPUT);
	/* Control Pins Direction */
DIO_setPinDirection(LCD_E_PORT,LCD_RS_PIN,DIO_PIN_OUTPUT);
DIO_setPinDirection(LCD_E_PORT,LCD_RW_PIN,DIO_PIN_OUTPUT);
DIO_setPinDirection(LCD_E_PORT,LCD_E_PIN,DIO_PIN_OUTPUT);


LCD_init();

LCD_typeString((u8*)"Say My Name");
_delay_ms(100);
LCD_sendChar(':');

_delay_ms(1000);
LCD_goToSpecificPosition(LCD_LINE_TWO,4);
LCD_typeString((u8*)"7MO EL-TE5A");
_delay_ms(700);

LCD_clear();

LCD_typeString((u8*)"You're God Damn");
LCD_goToSpecificPosition(LCD_LINE_TWO,0);
LCD_typeString((u8*)"Right!");
_delay_ms(500);
LCD_shift(LCD_SHIFT_LEFT);
u8 i=0;
    while (i<=40) 
    {
		_delay_ms(100);
    LCD_shift(LCD_SHIFT_RIGHT);
	i++;
	}
	
	while(1)
	{
		
	}
}

