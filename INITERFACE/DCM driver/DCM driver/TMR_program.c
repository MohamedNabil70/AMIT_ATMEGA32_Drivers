/*
 * TMR_program.c
 *
 * Created: 9/25/2022 5:55:55 AM
 *  Author: Mohamed Nabil 
 */ 

		/* UTILS */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

		/* MCAL */
#include "TMR_interface.h"
#include "TMR_config.h"


static void(*TMR_timer0_OVF_pCallBack)(void) = NULL;
static void(*TMR_timer0_CTC_pCallBack)(void) = NULL;




void TMR_timer0init(void)
{ 

#if TMR_TMR0_MODE == TMR_TMR0_NORMAL_MODE
//Select Mode = Normal Mode
CLR_BIT(TCCR0,3);
CLR_BIT(TCCR0,6);

//Set Preload value
TCNT0 = TMR_TMR0_PRELOAD_VALUE;

//Enable OVF Interrupt
SET_BIT(TIMSK,0);

#elif TMR_TMR0_MODE == TMR_TMR0_CTC_MODE

//Select Mode = CTC Mode
SET_BIT(TCCR0,3);
CLR_BIT(TCCR0,6);

//Enable CTC Interrupt
SET_BIT(TIMSK,1);

#elif TMR_TMR0_MODE == TMR_TMR0_FAST_PWM_MODE

//Select Mode = FAST PWM MODE 
SET_BIT(TCCR0,3);
SET_BIT(TCCR0,6); 

//Select PWM MODE = Non Inverting (set on top /clear on compare match)
SET_BIT(TCCR0,5);
CLR_BIT(TCCR0,4);

#endif

}


void TMR_timer0start(void)
{

//Set Prescaller Value = 64
SET_BIT(TCCR0,0);
SET_BIT(TCCR0,1);
CLR_BIT(TCCR0,2);	
}

void TMR_timer0stop(void)
{
//Set Prescaller bits = 000
CLR_BIT(TCCR0,0);
CLR_BIT(TCCR0,1);
CLR_BIT(TCCR0,2);	
}


// TMR0_NORMAL_MODE 
void TMR_timer0_OVF_SetCallBack(void(*ptr)(void))
{
	if (ptr!=NULL)
	{
		TMR_timer0_OVF_pCallBack=ptr;
	}
}


// TMR0_CTC_MODE

void TMR_timer0SetCompareMatchValue(u8 OCR0_Value )
{
//	init timer HARDWARE with compare value [Output Compare REG]
OCR0 = OCR0_Value;
}


void TMR_timer0_CTC_SetCallBack(void(*ptr)(void))
{
if (ptr!=NULL)
{
	TMR_timer0_CTC_pCallBack=ptr;
}	

}




				/* ISR Functions */


// ISR Function Prototype for Timer0 OVF
void __vector_11(void) __attribute__ ((signal));
void __vector_11(void)
{
static u16 counterOVF=0;
counterOVF++;
if (TMR_TMR0_OVF_COUNTER == counterOVF)
{
//Set Preload value
TCNT0 = TMR_TMR0_PRELOAD_VALUE;

//reset counter 
counterOVF =0;	

	//call action
if (TMR_timer0_OVF_pCallBack!=NULL)
{
	TMR_timer0_OVF_pCallBack();
}

}
}


// ISR Function Prototype for Timer0 CTC
void __vector_10(void) __attribute__ ((signal));
void __vector_10(void)
{
static u16 counterCTC= 0;
counterCTC++;
if (TMR_TMR0_CTC_COUNTER == counterCTC)
{
	//reset counter
	counterCTC =0;


if (TMR_timer0_CTC_pCallBack!=NULL)
{			   
	TMR_timer0_CTC_pCallBack();
}

}
}