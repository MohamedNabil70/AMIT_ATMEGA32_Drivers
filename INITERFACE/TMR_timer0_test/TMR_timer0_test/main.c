/*
 * TMR_timer0_test.c
 *
 * Created: 9/25/2022 5:55:11 AM
 * Author : Mohamed Nabil 
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>

		/* UTILS */
		#include "STD_TYPES.h"
		#include "BIT_MATH.h"
		#include "ATMEGA32_REG.h"

		/* MCAL */
		#include "TMR_interface.h"
		#include "TMR_config.h"
		#include "DIO_interface.h"
		#include "GI_Interface.h"
		

		/*HAL*/
		#include "LED_interface.h"
		#include "LCD_interface.h"
		#include "LCD_config.h"


void CTC_func(void);

LED_t LED0=AMIT_LED0;
LED_t LED1=AMIT_LED1;
LED_t LED2=AMIT_LED2;
		
		
int main(void)
{
		DIO_setPinDirection(DIO_PORTB,DIO_PIN1,DIO_PIN_OUTPUT);
		DIO_setPinDirection(DIO_PORTB,DIO_PIN2,DIO_PIN_OUTPUT);
		DIO_setPinDirection(DIO_PORTB,DIO_PIN3,DIO_PIN_OUTPUT);

		/* Data Pins Direction */
		DIO_setPinDirection(DIO_PORTA,DIO_PIN4,DIO_PIN_OUTPUT);
		DIO_setPinDirection(DIO_PORTA,DIO_PIN5,DIO_PIN_OUTPUT);
		DIO_setPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_OUTPUT);
		DIO_setPinDirection(DIO_PORTA,DIO_PIN7,DIO_PIN_OUTPUT);

		DIO_setPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);
		DIO_setPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT);

LCD_init();		
GI_enable();
TMR_timer0SetCompareMatchValue(250);
TMR_timer0_CTC_SetCallBack(&CTC_func);  
TMR_timer0init();
TMR_timer0start();


		
	while (1) 
    {			
LED_toggle(&LED1);
_delay_ms(965);
   }
}



void CTC_func(void){
	static u8 hour,minute,second;
	LCD_clear();
	second++;
	if(second==60){
		second=0;
		minute++;
	}
	if(minute==60){
		minute=0;
		hour++;
	}
	LCD_sendString((u8*)"Time:");
	LCD_goToSpecificPosition(LCD_LINE_TWO,4);
	if(hour<10) LCD_goToSpecificPosition(LCD_LINE_TWO,5);
	LCD_writeNumber(hour);
	LCD_goToSpecificPosition(LCD_LINE_TWO,6);
	LCD_sendChar(':');
	if(minute<10) LCD_goToSpecificPosition(LCD_LINE_TWO,8);
	LCD_writeNumber(minute);
	LCD_goToSpecificPosition(LCD_LINE_TWO,9);
	LCD_sendChar(':');
	if(second<10) LCD_goToSpecificPosition(LCD_LINE_TWO,11);
	LCD_writeNumber(second);
	
}
