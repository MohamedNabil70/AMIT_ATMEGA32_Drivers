/*
 * DCM_program.c
 *
 * Created: 9/27/2022 10:51:56 AM
 *  Author: Mohamed Nabil
 */ 

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




void DCM_init(void)
{
//Enable pins Directions
DIO_setPinDirection(H_EN1_PORT,H_EN1_PIN,DIO_PIN_OUTPUT);
DIO_setPinDirection(H_EN2_PORT,H_EN2_PIN,DIO_PIN_OUTPUT);

//Control pins Directions
DIO_setPinDirection(H_CONTROL_PORT,H_A1_PIN,DIO_PIN_OUTPUT);
DIO_setPinDirection(H_CONTROL_PORT,H_A2_PIN,DIO_PIN_OUTPUT);

DIO_setPinDirection(H_CONTROL_PORT,H_A3_PIN,DIO_PIN_OUTPUT);
DIO_setPinDirection(H_CONTROL_PORT,H_A4_PIN,DIO_PIN_OUTPUT);
	
}

void DCM_on(u8 motorId,u8 motorDirection)
{
	
if (motorId == DCM_MOTOR_A)
{
DIO_setPinValue(H_EN1_PORT,H_EN1_PIN,DIO_PIN_HIGH);

if (motorDirection == DCM_CW)
{
DIO_setPinValue(H_CONTROL_PORT,H_A1_PIN,DIO_PIN_HIGH);
DIO_setPinValue(H_CONTROL_PORT,H_A2_PIN,DIO_PIN_LOW);	
} 
else if(motorDirection == DCM_CCW)
{
DIO_setPinValue(H_CONTROL_PORT,H_A1_PIN,DIO_PIN_LOW);
DIO_setPinValue(H_CONTROL_PORT,H_A2_PIN,DIO_PIN_HIGH);	
}
	
} 

else if(motorId == DCM_MOTOR_B)
{
DIO_setPinValue(H_EN2_PORT,H_EN2_PIN,DIO_PIN_HIGH);	

if (motorDirection == DCM_CW)
{
DIO_setPinValue(H_CONTROL_PORT,H_A3_PIN,DIO_PIN_HIGH);
DIO_setPinValue(H_CONTROL_PORT,H_A4_PIN,DIO_PIN_LOW);	
} 
else if(motorDirection == DCM_CCW)
{
DIO_setPinValue(H_CONTROL_PORT,H_A3_PIN,DIO_PIN_LOW);
DIO_setPinValue(H_CONTROL_PORT,H_A4_PIN,DIO_PIN_HIGH);	
}

}	
}

void DCM_off(u8 motorId)
{
	
if (motorId == DCM_MOTOR_A)
{
DIO_setPinValue(H_EN1_PORT,H_EN1_PIN,DIO_PIN_LOW);	
} 
else if(motorId == DCM_MOTOR_B)
{
DIO_setPinValue(H_EN2_PORT,H_EN2_PIN,DIO_PIN_LOW);		
}
	
}

void DCM_setSpeed(u8 motorId,u8 motorDirection,u8 speedRatio)
{
	 //Set OCR0 according to timer 0  fast PWM mode calculations
	 //in order to get PWM with duty cycle of (speedRatio %)
	 
TMR_timer0SetCompareMatchValue((speedRatio*1024)/400);	

if (motorId == DCM_MOTOR_A)
{
	
	DIO_setPinValue(H_EN1_PORT,H_EN1_PIN,DIO_PIN_HIGH);

	if (motorDirection == DCM_CW)
	{
		DIO_setPinValue(H_CONTROL_PORT,H_A1_PIN,DIO_PIN_HIGH);
		DIO_setPinValue(H_CONTROL_PORT,H_A2_PIN,DIO_PIN_LOW);
	}
	else if(motorDirection == DCM_CCW)
	{
		DIO_setPinValue(H_CONTROL_PORT,H_A1_PIN,DIO_PIN_LOW);
		DIO_setPinValue(H_CONTROL_PORT,H_A2_PIN,DIO_PIN_HIGH);
	}
	
}

else if(motorId == DCM_MOTOR_B)
{
	DIO_setPinValue(H_EN2_PORT,H_EN2_PIN,DIO_PIN_HIGH);

	if (motorDirection == DCM_CW)
	{
		DIO_setPinValue(H_CONTROL_PORT,H_A3_PIN,DIO_PIN_HIGH);
		DIO_setPinValue(H_CONTROL_PORT,H_A4_PIN,DIO_PIN_LOW);
	}
	else if(motorDirection == DCM_CCW)
	{
		DIO_setPinValue(H_CONTROL_PORT,H_A3_PIN,DIO_PIN_LOW);
		DIO_setPinValue(H_CONTROL_PORT,H_A4_PIN,DIO_PIN_HIGH);
	}

}	
}

void DCM_setSpeedRatio(u32 speedRatio)
{
	 //Set OCR0 according to timer 0  fast PWM mode calculations
	 //in order to get PWM with duty cycle of (speedRatio %)
	 
	 TMR_timer0SetCompareMatchValue((speedRatio*1024UL)/400);	
}
