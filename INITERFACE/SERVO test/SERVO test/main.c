/*
 * SERVO test.c
 *
 * Created: 9/30/2022 10:09:44 PM
 * Author : Mohamed Nabil
 */ 

#define  F_CPU 16000000UL
#include <util/delay.h>

	/*UTILES LIB*/
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"
	#include "ATMEGA32_REG.h"

	/* MCAL */
	#include "SERVO_interface.h"
	#include "TMR_interface.h"
	#include "TMR_config.h"
	#include "DIO_interface.h"
	#include "ADC_interface.h"


int main(void)
{

 
  
SERVO_on(SERVO_DRIVING_TIMER_1);

    while (1) 
    {
SERVO_setAngle(-90);
_delay_ms(1000);
/*
SERVO_setAngle(0);
_delay_ms(1000);*/
SERVO_setAngle(90);
_delay_ms(1000);

	}
	
}

