/*
 * LED Driver.c
 *
 * Created: 9/11/2022 2:26:44 AM
 * Author : Mohamed Nabil
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
	/*UTILES LIB*/
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"
	#include "ATMEGA32_REG.h"

	/* MCAL */
	#include "DIO_interface.h"

	/* HAL */
	#include "LED_INTERFACE.h"


int main(void)
{

LED_t LED0=AMIT_LED0;
LED_t LED1=AMIT_LED1;
LED_t LED2=AMIT_LED2;


	while (1) 
    {
    LED_toggle(&LED1);
	_delay_ms(250);
    }
}




