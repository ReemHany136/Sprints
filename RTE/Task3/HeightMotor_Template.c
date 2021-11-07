/**
 *
 * \file HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 11/8/2021 12:05 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HeightMotor.h"


/**
 *
 * Runnable HeightMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Opr_Move
 *
 */

void HeightMotor_Move (StepMotorStepType step)
{
	Std_ReturnType status;
	if(step == MOTOR_STEP_MINUS){
		status = Dio_WriteChannel(HeightMotorPIN,LOW);
	}
	if(step == MOTOR_STEP_PLUS){
		status = Dio_WriteChannel(HeightMotorPIN,HIGH);
	}

}

