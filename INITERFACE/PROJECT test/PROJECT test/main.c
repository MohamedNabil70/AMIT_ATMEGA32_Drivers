/*
 * PROJECT test.c
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

LCD_setPinDirections();
	/*Button Pins Direction*/
DIO_setPinDirection(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT); // B0
DIO_setPinDirection(DIO_PORTD,DIO_PIN6,DIO_PIN_INPUT); // B1
DIO_setPinDirection(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT) ; // B2

u8 b0_state , b1_state , b2_state ; 

LCD_init();

_delay_ms(1500);
start :
_delay_ms(500);
LCD_typeString((u8*)"Say My Name");
_delay_ms(100);
LCD_sendChar(':');

_delay_ms(1200);
LCD_clear();
LCD_goToSpecificPosition(LCD_LINE_ONE,0);
LCD_typeString((u8*)"1) Eren Yeager");
LCD_goToSpecificPosition(LCD_LINE_TWO,0);
_delay_ms(200);
LCD_typeString((u8*)"2) Heisenberg");

	while(1)
	{
				DIO_getPinValue(DIO_PORTB,DIO_PIN0,&b0_state) ;
				DIO_getPinValue(DIO_PORTD,DIO_PIN6,&b1_state) ;
				DIO_getPinValue(DIO_PORTD,DIO_PIN2,&b2_state) ;
				
				 if (DIO_PIN_HIGH==b0_state)
				 {
				LCD_clear();
				goto start; 
				 }
			

				 if (DIO_PIN_HIGH==b1_state)
				 {
					 LCD_clear();
					LCD_goToSpecificPosition(LCD_LINE_ONE,0);
					LCD_sendString((u8*)"## ");
					LCD_goToSpecificPosition(LCD_LINE_ONE,14);
					LCD_sendString((u8*)" ##");
					LCD_goToSpecificPosition(LCD_LINE_ONE,3);
					LCD_typeString((u8*)"TATAKAI !!");
								_delay_ms(3500);
								LCD_clear();
								goto start;
				 }

				 
				 if (DIO_PIN_HIGH==b2_state)
				 {
					 LCD_clear();
					LCD_goToSpecificPosition(LCD_LINE_ONE,0);
					LCD_typeString((u8*)"You're God Damn");
					LCD_goToSpecificPosition(LCD_LINE_TWO,0);
					LCD_typeString((u8*)"Right!");
					_delay_ms(3500);
					LCD_clear();
					goto start;
				 }

	}
}

