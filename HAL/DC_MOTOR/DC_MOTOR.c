/*
 * DC_MOTOR.c
 *
 *  Created on: Aug 14, 2020
 *      Author: Loai Ali
 */
#include "DC_MOTOR.h"
#include "DIO.h"

void initDcMotor(dc_motor_config_T dc_motor_config){

	DIO_SetPinDirection(dc_motor_config.portId,dc_motor_config.pin1Id,HIGH);
	DIO_SetPinDirection(dc_motor_config.portId,dc_motor_config.pin2Id,HIGH);
	DIO_SetPinDirection(dc_motor_config.portId,dc_motor_config.pin3Id,HIGH);

}
void moveForward(dc_motor_config_T dc_motor_config){

}

void moveBackward(dc_motor_config_T dc_motor_config){

}

void stopMotor(dc_motor_config_T dc_motor_config){

}


