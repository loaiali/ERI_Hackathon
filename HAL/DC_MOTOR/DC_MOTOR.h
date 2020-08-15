#ifndef HAL_DC_MOTOR_DC_MOTOR_H_
#define HAL_DC_MOTOR_DC_MOTOR_H_

#include"../../utils/STD_TYPES.h"
	#include"../../MCAL/PWM/pwm.h"
typedef struct{
	u8 portId;
	u8 pin1Id;
	u8 pin2Id;
	u8 pin3Id;
	PWM_CONFIG_T speed;
}dc_motor_config_T;

void initDcMotor(dc_motor_config_T dc_motor_config);

void moveForward(dc_motor_config_T dc_motor_config);

void moveBackward(dc_motor_config_T dc_motor_config);

void stopMotor(dc_motor_config_T dc_motor_config);

#endif /* HAL_DC_MOTOR_DC_MOTOR_H_ */
