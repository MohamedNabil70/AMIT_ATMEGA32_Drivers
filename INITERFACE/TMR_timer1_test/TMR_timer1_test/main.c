/*
 * TMR_timer1_test.c
 *
 * Created: 9/29/2022 10:29:35 AM
 * Author : Mohamed Nabil
 */ 

		
#define  F_CPU 16000000UL
#include <util/delay.h>
		
		/* UTILS */
		#include "STD_TYPES.h"
		#include "BIT_MATH.h"
		#include "ATMEGA32_REG.h"

		/* MCAL */
		#include "TMR_interface.h"
		#include "TMR_config.h"
		#include "DIO_interface.h"

int main(void)
{
DIO_setPinDirection(DIO_PORTD,DIO_PIN5,DIO_PIN_OUTPUT);
s8 angle =-84;

TMR_timer1init();

TMR_timer1SetCompareMatchAValue(249+((25*(90+angle))/18));

TMR_timer1start();

    while (1) 
    {

    }
}



