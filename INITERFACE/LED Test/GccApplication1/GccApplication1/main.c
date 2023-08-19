/*
 * GccApplication1.c
 *
 * Created: 9/4/2022 10:58:20 AM
 * Author : PC
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
   SET_BIT(DDRC,2);
   SET_BIT(DDRC,7);
   SET_BIT(DDRD,3);
   
    while (1) 
    {
		 TOG_BIT(PORTD,3);
		 _delay_ms(500); 
		  TOG_BIT(PORTC,7);
		  _delay_ms(550);
		 TOG_BIT(PORTC,2);
		 _delay_ms(600);
		
		

    }
}

