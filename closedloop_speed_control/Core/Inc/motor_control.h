/*
 * motor_control.h
 *
 *  Created on: Jun 17, 2023
 *      Author: hht
 */

#ifndef INC_MOTOR_CONTROL_H_
#define INC_MOTOR_CONTROL_H_
#include "stm32f1xx_hal.h"
#include <math.h>


#define _constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))

float _normalizeAngle(float angle);
float _electricalAngle(float shaft_angle, int pole_pairs);
float velocityOpenloop(float target_velocity, float Uq, TIM_TypeDef * TIM_BASE);
void setPwm(float Ua, float Ub, float Uc, TIM_TypeDef * TIM_BASE);
void setPhaseVoltage(float Uq,float Ud, float angle_el, TIM_TypeDef * TIM_BASE);

#endif /* INC_MOTOR_CONTROL_H_ */
