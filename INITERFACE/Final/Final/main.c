/*
 * ADC Driver.c
 *
 * Created: 9/20/2022 11:51:34 AM
 * Author : Mohamed Nabil Mohamed, Ahmed Alaa Lotfy, Ahmed Hussein Mohamed
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
	#include "Flex_interface.h"

	/* HAL */
	#include "FLEX_interface.h"

u16 analogValue2,analogValue4,analogValue5,analogValue6,analogValue7;

int main(void)
{
	
    LCD_setPinDirections();
	FLEX_init();	
	
	ADC_init();
	LCD_init();

	
	
	while (1) 
    {
		
 FLEX_getAnalogValue();

 if ((FINGER_1>860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4>950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"I Love You <3");
	 
 }
 
 else if ((FINGER_1>860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4>950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"That's Awesome !");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2>980)  && (FINGER_3>980)  && (FINGER_4>950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"HELLO !");
 }
 
 else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4<950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"Good Job");
 }
 
 else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3>980)  && (FINGER_4>950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"I'm Watching You");
 }
 
 else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4>950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"You !");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2<980)  && (FINGER_3>980)  && (FINGER_4>950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"I Really Love U");
 }
 
 else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4<950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"Sorry");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2>980)  && (FINGER_3<980)  && (FINGER_4>950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"Like ");
 }
 
 else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4>950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"Brother");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4<950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"Phone");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2>980)  && (FINGER_3>980)  && (FINGER_4<950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"Perfect");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2<980)  && (FINGER_3<980)  && (FINGER_4<950)  && (FINGER_5<425))
 {
	 LCD_sendString((u8*)"End");
 }
 
 else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3>980)  && (FINGER_4>950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"Gun");
 }
 
 else if ((FINGER_1>860)  && (FINGER_2>980)  && (FINGER_3<980)  && (FINGER_4>950)  && (FINGER_5>425))
 {
	 LCD_sendString((u8*)"Favorite");
 }
 
  else if ((FINGER_1<860)  && (FINGER_2<980)  && (FINGER_3>980)  && (FINGER_4<950)  && (FINGER_5<425))
  {
	  LCD_sendString((u8*)"5od Na7o !");
  }
 
 
 else
 {
	 LCD_sendString((u8*)"Reading");
	 _delay_ms(55);
	 LCD_sendChar('.');
	 _delay_ms(55);
	 LCD_sendChar('.');
	 _delay_ms(55);
	 LCD_sendChar('.');
	 _delay_ms(55);
	 LCD_sendChar('.');
	 _delay_ms(30);
	 LCD_sendChar('.');
	 _delay_ms(30);
	 LCD_sendChar('.');
 }
 

   
   

   _delay_ms(400);
   LCD_clear();

	}
	

}

