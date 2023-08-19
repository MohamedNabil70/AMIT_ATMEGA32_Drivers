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
	#include "SSD_interface.h"



int main(void)
{
	DIO_setPinDirection(DIO_PORTB,DIO_PIN1,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTB,DIO_PIN2,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTB,DIO_PIN3,DIO_PIN_OUTPUT);

	/* Data Pins Direction */
	DIO_setPinDirection(DIO_PORTA,DIO_PIN4,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTA,DIO_PIN5,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTA,DIO_PIN7,DIO_PIN_OUTPUT);
	
/* POT Direction */
DIO_setPinDirection(DIO_PORTA,DIO_PIN1,DIO_PIN_INPUT); 

/* Buzzer Direction */

DIO_setPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);

	ADC_init();
	

	
	u16 check=0,AnalogVal;
	while (1) 
    {
	ADC_getAnalogValue(ADC_CHANNEL_1,&AnalogVal);

	
	if(check!=AnalogVal/50)
	{
			SSD_displayNumber(AnalogVal/50);
		DIO_setPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
		_delay_ms(25);
		DIO_setPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
		check=AnalogVal/50;	
	}else{
	SSD_displayNumber(check);
	}
			

	}
	

}

