/*
 * DCM driver.c
 *
 * Created: 9/27/2022 10:51:30 AM
 * Author : Mohamed Nabil
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
/* UTILS */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

/* MCAL */
#include "DIO_interface.h"
#include "TMR_interface.h"
#include "TMR_config.h"

/* HAL */
#include "DCM_interface.h"
#include "DCM_config.h"
#include "SWITCH_interface.h"
#include "RELAY_interface.h"

SWITCH_t b0 = AMIT_BUTTON0;
SWITCH_t b1 = AMIT_BUTTON1;
SWITCH_t b2 = AMIT_BUTTON2;
RELAY_t RELAY = AMIT_RELAY;
int main(void)
{
DCM_init();
DIO_setPinDirection(DIO_PORTB,DIO_PIN3,DIO_PIN_OUTPUT);
TMR_timer0init();
TMR_timer0start();
RELAY_on(&RELAY);
	_delay_ms(300);

    while (1) 
    {
RELAY_on(&RELAY);
	
DCM_setSpeedRatio(90);
_delay_ms(3000);
DCM_setSpeedRatio(0);
_delay_ms(800);
RELAY_off(&RELAY);
_delay_ms(400);

	
    }
}

