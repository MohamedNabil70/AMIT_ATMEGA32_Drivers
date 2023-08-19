/*
 * DIO_test.c
 *
 * Created: 9/6/2022 11:25:20 PM
 * Author : ahmed
 */ 

#define F_CPU 16000000
#include <util/delay.h> 

/* UTILES_LIB */
#include   "STD_TYPES.h"
#include   "BIT_MATH.h"
#include   "ATMEGA32_REG.h"

/* MCAL */
#include "DIO_interface.h"


int main(void)
{
    DIO_SetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT) ; // BUZ
	DIO_SetPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT) ; // LED0
	DIO_SetPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT) ; // LED1
	DIO_SetPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT) ; // LED2
	
	DIO_SetPinDirection(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT) ; // B0
	DIO_SetPinDirection(DIO_PORTD,DIO_PIN6,DIO_PIN_INPUT) ; // B1
	DIO_SetPinDirection(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT) ; // B2
	
	u8 b0_state , b1_state , b2_state ; 

    while (1) 
    {
		DIO_GetPinValue(DIO_PORTB,DIO_PIN0,&b0_state) ;
		DIO_GetPinValue(DIO_PORTD,DIO_PIN6,&b1_state) ;
		DIO_GetPinValue(DIO_PORTD,DIO_PIN2,&b2_state) ;
		
		
		        if (DIO_PIN_HIGH==b0_state)
		        {
			        DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH) ;
		        }
		        else
		        {
			        DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW)	;
		        }

		        if (DIO_PIN_HIGH==b1_state)
		        {
			        DIO_SetPinValue(DIO_PORTC,DIO_PIN7,DIO_PIN_HIGH) ;
		        }
		        else
		        {
			        DIO_SetPinValue(DIO_PORTC,DIO_PIN7,DIO_PIN_LOW)	;
		        }
				
		        if (DIO_PIN_HIGH==b2_state)
		        {
			        DIO_SetPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH) ;
					DIO_SetPinValue(DIO_PORTD,DIO_PIN3,DIO_PIN_HIGH) ;
		        }
		        else 
		        {
			        DIO_SetPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW) ;
			        DIO_SetPinValue(DIO_PORTD,DIO_PIN3,DIO_PIN_LOW) ;
		        }
				
												
    }
}