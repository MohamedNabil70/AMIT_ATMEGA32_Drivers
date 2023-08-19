/*
 * SPI test.c
 *
 * Created: 10/4/2022 1:26:10 PM
 * Author : Mohamed Nabil
 */ 



#define F_CPU 8000000UL
#include <util/delay.h>
		/* UTILS */
		#include "STD_TYPES.h"
		#include "BIT_MATH.h"
		#include "ATMEGA32_REG.h"

		/* MCAL */
		#include "SPI_interface.h"
		#include "DIO_interface.h"

int main(void)
{
	
DIO_setPinDirection(DIO_PORTB,DIO_PIN4,DIO_PIN_OUTPUT); //ss
DIO_setPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_OUTPUT); //MOSI	
DIO_setPinDirection(DIO_PORTB,DIO_PIN6,DIO_PIN_INPUT);  //MISO
DIO_setPinDirection(DIO_PORTB,DIO_PIN7,DIO_PIN_OUTPUT); //CLK

	
DIO_setPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT); //LED 0
DIO_setPinValue(DIO_PORTB,DIO_PIN4,DIO_PIN_LOW); //SS -> 0


SPI_initMaster();

u8 Returned;	
    while (1) 
    {
	SPI_trancieve(10,&Returned);
	
	if (Returned == 5)
	{
	TOG_BIT(PORTC,2);
	
	}
_delay_ms(250);			
    }
}

