/*
 * pwm.h
 *
 *  Created on: Sep 27, 2019
 *      Author: Loai Ali
 */

#include"STD_TYPES.h"

#ifndef MCAL_PWM_PWM_H_
#define MCAL_PWM_PWM_H_
//frequency,channel
typedef enum{
	channel0_0,
	channel1_A,
	channel1_B,
	channel2_0
}PWM_CHANNELS_T ;


typedef  struct{
	u16 frequency;
	PWM_CHANNELS_T PWM_CHANNELS;
}PWM_CONFIG_T;

void PWM_init(PWM_CONFIG_T PWM_CONFIG);
void set_PWM(PWM_CONFIG_T PWM_CONFIG,u8 duty);
void disableTimer1();
u8 getTimerTick1();
void PWM_measeure_ICU_init();
void set_TCNT1(u8 val);

#endif /* MCAL_PWM_PWM_H_ */
