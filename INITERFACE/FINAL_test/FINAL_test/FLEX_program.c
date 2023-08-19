/*
 * FLEX.c
 *
 * Created: 10/18/2022 10:00:45 PM
 *  Author: PC
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
/*UTILES LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

/* MCAL */
#include "ADC_interface.h"
#include "DIO_interface.h"
#include "LCD_interface.h"
#include "LCD_config.h"

extern u16 analogVal2,analogVal4,analogVal5,analogVal6,analogVal7;

void FLEX_init(void)
{
	// Set Direction
	DIO_setPinDirection(DIO_PORTA,DIO_PIN2,DIO_PIN_INPUT);

	DIO_setPinDirection(DIO_PORTA,DIO_PIN4,DIO_PIN_INPUT);
	DIO_setPinDirection(DIO_PORTA,DIO_PIN5,DIO_PIN_INPUT);
	DIO_setPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_INPUT);
	DIO_setPinDirection(DIO_PORTA,DIO_PIN7,DIO_PIN_INPUT);
}

void FLEX_getAnalogValue(void)
{
	
		ADC_getAnalogValue(ADC_CHANNEL_2,&analogVal2);
		ADC_getAnalogValue(ADC_CHANNEL_4,&analogVal4);
		ADC_getAnalogValue(ADC_CHANNEL_5,&analogVal5);
		ADC_getAnalogValue(ADC_CHANNEL_6,&analogVal6);
		ADC_getAnalogValue(ADC_CHANNEL_7,&analogVal7);

	
}

void FLEX_displyVal(void)
{
	//write: >
	LCD_goToSpecificPosition(LCD_LINE_ONE,0);
	LCD_sendChar(62);
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_sendChar(62);
	LCD_goToSpecificPosition(LCD_LINE_ONE,12);
	LCD_sendChar(62);

	LCD_goToSpecificPosition(LCD_LINE_TWO,0);
	LCD_sendChar(62);
	LCD_goToSpecificPosition(LCD_LINE_TWO,6);
	LCD_sendChar(62);





	//write digital Values
	LCD_goToSpecificPosition(LCD_LINE_ONE,1);
	LCD_writeNumber(analogVal4);
	LCD_goToSpecificPosition(LCD_LINE_ONE,7);
	LCD_writeNumber(analogVal5);
	LCD_goToSpecificPosition(LCD_LINE_ONE,13);
	LCD_writeNumber(analogVal2);


	LCD_goToSpecificPosition(LCD_LINE_TWO,1);
	LCD_writeNumber(analogVal6);
	LCD_goToSpecificPosition(LCD_LINE_TWO,7);
	LCD_writeNumber(analogVal7);


	LCD_goToSpecificPosition(LCD_LINE_TWO,15);
}