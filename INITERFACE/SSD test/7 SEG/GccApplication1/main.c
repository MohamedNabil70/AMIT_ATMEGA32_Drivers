/*
 * GccApplication1.c
 *
 * Created: 9/4/2022 2:02:49 PM
 * Author : PC
 */ 

#include <avr/io.h>
#include "BIT_MATH.h"
#define F_CPU 8000000
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
   DDRC=0xff;
   PORTC=0b01111111;
   SET_BIT(DDRD,4);
   SET_BIT(PORTD,4);
   SET_BIT(DDRD,7);
   SET_BIT(PORTD,7);
   
   
   PORTC=0b00111111;
   
	
	while (1) 
    {
		PORTC=0b01111101;
		CLR_BIT(PORTD,4);
		_delay_ms(10);
		SET_BIT(PORTD,4);
		
		PORTC=0b01001111;
		CLR_BIT(PORTD,7);
		_delay_ms(10);
		SET_BIT(PORTD,7);
		
    }
}

