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
DIO_setPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_INPUT); //MOSI	
DIO_setPinDirection(DIO_PORTB,DIO_PIN6,DIO_PIN_OUTPUT);  //MISO
DIO_setPinDirection(DIO_PORTB,DIO_PIN7,DIO_PIN_INPUT); //CLK
DIO_setPinDirection(DIO_PORTB,DIO_PIN4,DIO_PIN_INPUT); //SS
	
DIO_setPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT); //LED 2


SPI_initSlave();


u8 SlaveData;	
    while (1) 
    {
	SPI_trancieve(5,&SlaveData);
	
	if (SlaveData == 10)
	{
	TOG_BIT(PORTD,3);
	
	}
_delay_ms(250);
	
    }
}

