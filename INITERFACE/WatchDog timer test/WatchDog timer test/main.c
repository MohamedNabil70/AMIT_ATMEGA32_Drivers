/*
 * WatchDog timer test.c
 *
 * Created: 9/29/2022 1:32:30 PM
 * Author : Mohamed Nabil
 */ 


#define F_CPU 16000000UL
#include <util/delay.h>
	/*UTILES LIB*/
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"
	#include "ATMEGA32_REG.h"

	/* MCAL */
	#include "WDT_interface.h"
#include "DIO_interface.h"
int main(void)
{
   
   
 DIO_setPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT) ; 
 DIO_setPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT) ;
 WDT_start(2);
	 DIO_setPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH) ;
	 _delay_ms(1000);
 DIO_setPinValue(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW) ;
    while (1) 
    {

    }
	WDT_stop();

}

