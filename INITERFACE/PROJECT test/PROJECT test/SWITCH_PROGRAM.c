/*****************************************************************************************
******************************************************************************************
**********************		 	Date:11/9/2022                      **********************
**********************			Name: Mohamed Nabil                 **********************
**********************		  	Version: 1.0                        **********************
**********************		 	SWC: SWITCH_PROGRAM.c               **********************
******************************************************************************************
******************************************************************************************
*/


/*UTILES LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REG.h"  

	/* MCAL */
#include "DIO_interface.h"

	/* HAL */
#include "SWITCH_INTERFACE.h"


u8 SWITCH_getState(u8 PortId,u8 PinId,u8 ConnectionType)
{
u8 switchState;

if((PortId<=3)&&(PinId<=7)&&((ConnectionType == SWITCH_FORWARD)||(ConnectionType == SWITCH_REVERSE)))
{
if(ConnectionType == SWITCH_FORWARD)
{
DIO_setPinDirection(PortId,PinId,DIO_PIN_INPUT);
DIO_getPinValue(PortId,PinId,&switchState);

if(switchState==DIO_PIN_HIGH)
{
return DIO_PIN_HIGH ;
}else{
return DIO_PIN_LOW ;	
}

}else{
DIO_setPinDirection(PortId,PinId,DIO_PIN_INPUT);
DIO_setInputPinResistence(PortId,PinId);
DIO_getPinValue(PortId,PinId,&switchState);

if(switchState==DIO_PIN_HIGH)
{
return DIO_PIN_HIGH ;
}else{
return DIO_PIN_LOW ;	
}

}

}	
}