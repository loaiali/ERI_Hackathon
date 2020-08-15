/*
 * pwm.c
 *
 *  Created on: Sep 27, 2019
 *      Author: Loai Ali
 */

#include "pwm.h"
#include"BIT_MATH.h"
#include"DIO.h"


#define TCCR0 *((volatile u8*)0x53)
#define SREG *((volatile u8*)0x5F)
#define TIMSK *((volatile u8*)0x59)
#define TCCR1A *((volatile u8*)0x4F)
#define TCCR1B *((volatile u8*)0x4E)
#define TCNT1 *((volatile u16*)0x4C)
#define ICR1 *((volatile u16*)0x46)
#define OCR1A *((volatile u16*)0x4B)


static u16 top;
void PWM_init(PWM_CONFIG_T PWM_CONFIG){
	switch (PWM_CONFIG.PWM_CHANNELS){
		case(channel0_0):
				TCCR0 = (1<<6) | (1<<3) | (1<<5) | (1<<0);
				DIO_SetPinDirection(PORTB,PIN3,OUTPUT);
				break;

		case(channel1_A):

				break;
		case(channel1_B):


				break;

		case(channel2_0):
				break;
	}

	TCCR1A=(1<<7)|(1<<1);
	TCCR1B=(1<<3)|(1<<4)|(1<<0)|(1<<1);

	ICR1=top;
	DIO_SetPinDirection(PORTD,PIN4,OUTPUT);
}
void set_PWM(PWM_CONFIG_T PWM_CONFIG,u8 duty){
	top=(8000000-PWM_CONFIG.frequency*64)/(64*PWM_CONFIG.frequency);


	OCR1A=(duty*top)/100;
}
void PWM_measeure_ICU_init(){
	TCCR1A=0;
}



/*void timer1_init(){
	TCCR1A=(1<<7)|(1<<5)|(1<<0);
	TCCR1B=(1<<3)|(1<<2)|(1<<0);

	OCR0=128;

	//TIMSK|=(1<<0);
	//SREG|=(1<<7);
}*/
