/*****************************************************************************************
******************************************************************************************
**********************		 	Date:11/9/2022                      **********************
**********************			Name: Mohamed Nabil                 **********************
**********************		  	Version: 1.0                        **********************
**********************		 	SWC: SWITCH_INTERFACE.h             **********************
******************************************************************************************
******************************************************************************************
*/


#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_




		
//MACROS FOR CONNECTION_TYPE
#define SWITCH_FORWARD		0
#define SWITCH_REVERSE		1


u8 SWITCH_getState(u8 PortId,u8 PinId,u8 ConnectionType);



#endif