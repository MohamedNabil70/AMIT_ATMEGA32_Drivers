/*
 * DCM_interface.h
 *
 * Created: 9/27/2022 10:52:08 AM
 *  Author: Mohamed Nabil
 */ 


#ifndef DCM_INTERFACE_H_
#define DCM_INTERFACE_H_


//MACROS FOR MOTOR IDs
#define DCM_MOTOR_A		1
#define DCM_MOTOR_B		2

//MACROS FOR MOTOR DIRECTION
#define DCM_CW			0
#define DCM_CCW			1


//Prototypes For H-BRIDGE IC [L293]  Control Functions

void DCM_init(void);
void DCM_on(u8 motorId,u8 motorDirection);
void DCM_off(u8 motorId);
void DCM_setSpeed(u8 motorId,u8 motorDirection,u8 speedRatio);


//Prototype for motor whith relay control
void DCM_setSpeedRatio(u32 speedRatio);

#endif /* DCM_INTERFACE_H_ */