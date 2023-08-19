/*
 * KPD_test.c
 *
 * Created: 9/13/2022 10:00:28 AM
 * Author : AMIT
 */ 


#define F_CPU 16000000UL
#include <util/delay.h>
/* UTILES_LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"

/* MCAL */
#include "DIO_interface.h"

/* HAL */
#include "KPD_interface.h"
#include "KPD_config.h"

int main(void)
{
  
	DIO_setPinDirection(KPD_COLS_PORT,KPD_COL0_PIN,DIO_PIN_OUTPUT);
	DIO_setPinDirection(KPD_COLS_PORT,KPD_COL1_PIN,DIO_PIN_OUTPUT);
	DIO_setPinDirection(KPD_COLS_PORT,KPD_COL2_PIN,DIO_PIN_OUTPUT);
	DIO_setPinDirection(KPD_COLS_PORT,KPD_COL3_PIN,DIO_PIN_OUTPUT);
	
	DIO_setPinDirection(KPD_ROWS_PORT,KPD_ROW0_PIN,DIO_PIN_INPUT);
	DIO_setPinDirection(KPD_ROWS_PORT,KPD_ROW1_PIN,DIO_PIN_INPUT);
	DIO_setPinDirection(KPD_ROWS_PORT,KPD_ROW2_PIN,DIO_PIN_INPUT);
	DIO_setPinDirection(KPD_ROWS_PORT,KPD_ROW3_PIN,DIO_PIN_INPUT);
	
	DIO_setInputPinResistence(KPD_ROWS_PORT,KPD_ROW0_PIN);
	DIO_setInputPinResistence(KPD_ROWS_PORT,KPD_ROW1_PIN);
	DIO_setInputPinResistence(KPD_ROWS_PORT,KPD_ROW2_PIN);
	DIO_setInputPinResistence(KPD_ROWS_PORT,KPD_ROW3_PIN);
	
	DIO_setPinDirection(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT);
	DIO_setPinDirection(DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT);

	DIO_setPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_OUTPUT);


	u8 kpdkey;
    while (1) 
    {
		KPD_getValue(&kpdkey);
		if(KPD_NOT_PRESSED != kpdkey)
		{
			
			}
    }
}