/*
 * EXTERNAL INTERRUPT driver.c
 *
 * Created: 9/15/2022 12:02:34 PM
 * Author : Mohamed Nabil
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
	/*UTILES LIB*/
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"
	#include "ATMEGA32_REG.h"

	/* MCAL */
	#include "EXTI_interface.h"
	#include "DIO_interface.h"
	#include "GI_Interface.h"

void func(void);

int main(void)
{
DIO_setPinDirection(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT);
DIO_setPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);
DIO_setPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT);



GI_enable(); //Enable global interrupt

EXTI_INT0SetCallBack(&func);
EXTI_enable(EXTI_INT0,EXTI_RISING_EDGE);

    while (1) 
    {
		
    }
}


void func(void)
{
	DIO_setPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	DIO_setPinValue(DIO_PORTC,DIO_PIN7,DIO_PIN_HIGH);
	_delay_ms(500);
	DIO_setPinValue(DIO_PORTC,DIO_PIN7,DIO_PIN_LOW);
	DIO_setPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
}