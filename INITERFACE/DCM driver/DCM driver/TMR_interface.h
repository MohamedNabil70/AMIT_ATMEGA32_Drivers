/*
 * TMR_interface.h
 *
 * Created: 9/25/2022 5:56:21 AM
 *  Author: Mohamed Nabil 
 */ 


#ifndef TMR_INTERFACE_H_
#define TMR_INTERFACE_H_

//TIMER MODES
#define TMR_TMR0_NORMAL_MODE     1
#define TMR_TMR0_CTC_MODE	     2
#define TMR_TMR0_FAST_PWM_MODE	 3




void TMR_timer0init(void);
void TMR_timer0start(void);
void TMR_timer0stop(void);

// TMR0_NORMAL_MODE 
void TMR_timer0_OVF_SetCallBack(void(*ptr)(void));

// TMR0_CTC_MODE
void TMR_timer0SetCompareMatchValue(u8 OCR0_Value );
void TMR_timer0_CTC_SetCallBack(void(*ptr)(void));



#endif /* TMR_INTERFACE_H_ */