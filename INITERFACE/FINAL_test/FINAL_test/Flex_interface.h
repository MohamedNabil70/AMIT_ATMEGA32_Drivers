/*
 * FINAL_interface.h
 *
 * Created: 10/18/2022 10:01:50 PM
 *  Author: PC
 */ 


#ifndef FINAL_INTERFACE_H_
#define FINAL_INTERFACE_H_

#define FINGER_1  analogVal5
#define FINGER_2  analogVal4
#define FINGER_3  analogVal7
#define FINGER_4  analogVal6
#define FINGER_5  analogVal2

void FLEX_init(void);
void FLEX_getAnalogValue(void);
void FLEX_displyVal(void);



#endif /* FINAL_INTERFACE_H_ */