/*
 * STEPM driver.c
 *
 * Created: 9/28/2022 10:03:31 PM
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
	#include "STEPM_config.h"
	#include "STEPM_interface.h"


int main(void)
{
  STEPM_init();
DIO_setPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT);  
 DIO_setPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
DIO_setPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT);
 DIO_setPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);



STEPM_rotateAngle(180);	
 DIO_setPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
 _delay_ms(40);
 DIO_setPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);

    while (1) 
    {
		
	
			
		}

}

