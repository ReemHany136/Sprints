/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 11/8/2021 12:05 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


/**
 *
 * Runnable SM_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE__HeightBtnState
 *
 */

void SM_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpHeightBtnState_HeightBtnState(&HeightBtnState);
	if(HeightBtnState == MULTISTATE_MINUS){
		step = MOTOR_STEP_MINUS;
		status = Rte_Call_rpInclineMotor_Opr_Move(step);
	}
	if(HeightBtnState == MULTISTATE_PLUS){
		step = MOTOR_STEP_PLUS;
		status = Rte_Call_rpInclineMotor_Opr_Move(step);
	}
	
}


/**
 *
 * Runnable SM_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE__
 *
 */

void SM_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType IncineBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpIncineBtnState_IncineBtnState(&IncineBtnState);
	if(IncineBtnState == MULTISTATE_MINUS){
		step = MOTOR_STEP_MINUS;
		status = Rte_Call_rpInclineMotor_Opr_Move(step);
	}
	if(IncineBtnState == MULTISTATE_PLUS){
		step = MOTOR_STEP_PLUS;
		status = Rte_Call_rpInclineMotor_Opr_Move(step);
	}
	
	
	
}


/**
 *
 * Runnable SM_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE__SlideBtnState
 *
 */

void SM_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType SlideBtnState;
	StepMotorStepType step;

	/* Data Receive Points */
	status = Rte_Read_rpSlideBtnState_SlideBtnState(&SlideBtnState);
	
	if(SlideBtnState == MULTISTATE_MINUS){
		step = MOTOR_STEP_MINUS;
		status = Rte_Call_rpInclineMotor_Opr_Move(step);
	}
	if(SlideBtnState == MULTISTATE_PLUS){
		step = MOTOR_STEP_PLUS;
		status = Rte_Call_rpInclineMotor_Opr_Move(step);
	}
	
}

