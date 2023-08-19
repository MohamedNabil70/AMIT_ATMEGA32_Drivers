/*
 * LCD.c
 *
 * Created: 9/11/2022 11:27:07 AM
 * Author : NoUr MD
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>

//UTILES
#include "TYPE_DEF.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

//MCAL
#include "DIO_Interface.h"

//HAL
#include "LCD_Interface.h"
#include "LCD_Config.h"
#include "LED_Interface.h"
#include "Switch_Interface.h"

int main(void)
{
	u8 timer,button;
    LCD_Start_AMIT();
	LCD_Init();
    LCD_AmitSendString((u8*)"Hello there");
	_delay_ms(1000);
	LCD_clear();
	
	LCD_AmitSendString((u8*)"you want play a game");
	_delay_ms(2000);
	LCD_clear();
	
	LCD_AmitSendString((u8*)"OH ! do you hear it ?");
	_delay_ms(2000);
	LCD_clear();
	
	LCD_AmitSendString((u8*)"no ? come a bit close ");
	_delay_ms(100);
	DIO_SetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_INPUT);
	for(timer=0;timer<5;timer++){
		DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
		_delay_ms(400);
		DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
		_delay_ms(400);
	}
	LCD_clear();
	LCD_AmitSendString((u8*)"a bit more ! ");
	_delay_ms(200);
		DIO_SetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);
	for(timer=0;timer<5;timer++){
		DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
		_delay_ms(300);
		DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
		_delay_ms(300);
	}
	LCD_clear();
	LCD_AmitSendString((u8*)"Well I put a bomb in your KIT");
	_delay_ms(3000);
	LCD_clear();
	LCD_AmitSendString((u8*)"now you need to press button 1 ");
	_delay_ms(3000);
	LCD_clear();
	LCD_AmitSendString((u8*)"After second 0.6");
	_delay_ms(2500);
	LCD_clear();
	LCD_AmitSendString((u8*)"you have 3s from now ");
	for(timer=0;timer<5;timer++){
		DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
		_delay_ms(100);
		DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
		_delay_ms(100);
	}
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,7);
	LCD_AmitSendString((u8*)"2");
	
for(timer=0;timer<5;timer++){
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(100);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(100);
}
LCD_clear();
LCD_goToSpecificPosition(LCD_LINE_ONE,7);
LCD_AmitSendString((u8*)"1");
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
_delay_ms(50);
LCD_clear();
LCD_goToSpecificPosition(LCD_LINE_ONE,6);
LCD_AmitSendString((u8*)"0.9");
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
_delay_ms(50);
LCD_clear();
LCD_goToSpecificPosition(LCD_LINE_ONE,6);
LCD_AmitSendString((u8*)"0.8");
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
_delay_ms(50);
LCD_clear();
LCD_goToSpecificPosition(LCD_LINE_ONE,6);
LCD_AmitSendString((u8*)"0.7");
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(50);
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
_delay_ms(50);
LCD_clear();
LCD_goToSpecificPosition(LCD_LINE_ONE,6);
LCD_AmitSendString((u8*)"0.6");
button=Switch_GetState(Button1_PORT,Button1_PIN);
while(button!=1){
	
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(50);
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_AmitSendString((u8*)"0.5");
button=Switch_GetState(Button1_PORT,Button1_PIN);
if(button==1)goto Win;
	
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(50);
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_AmitSendString((u8*)"0.4");
button=Switch_GetState(Button1_PORT,Button1_PIN);
if(button==1)goto Win;
	
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(50);
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_AmitSendString((u8*)"0.3");
button=Switch_GetState(Button1_PORT,Button1_PIN);
if(button==1)goto Win;
	
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(50);
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_AmitSendString((u8*)"0.2");
button=Switch_GetState(Button1_PORT,Button1_PIN);
if(button==1)goto Win;
	
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(50);
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_AmitSendString((u8*)"0.1");
button=Switch_GetState(Button1_PORT,Button1_PIN);
if(button==1)goto Win;
	
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	_delay_ms(50);
	DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	_delay_ms(50);
	LCD_clear();
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_AmitSendString((u8*)"0.0");
	goto Lose;
	
}

Win:
_delay_ms(100);
LCD_clear();
LCD_AmitSendString((u8*)"Ok You win this one");
_delay_ms(1500);
LCD_clear();
LCD_AmitSendString((u8*)"But i will back soon");




 while (1)
 {
 }
Lose:
DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
_delay_ms(100);
LCD_clear();
LCD_AmitSendString((u8*)"!!!! BOOM !!!!");

	
	
	
	
	
	
    while (1) 
    {
    }
}

