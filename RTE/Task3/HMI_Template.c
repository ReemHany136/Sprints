/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 11/8/2021 12:05 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HMI.h"


/**
 *
 * Runnable HMI_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_HMI_MainFunction_100ms
 *
 */

void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType IncineBtnState;
	MultiStateBtnType SlideBtnState;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;

	/* Data Send Points */
	status = Rte_Write_ppHeightBtnState_HeightBtnState(HeightBtnState);
	status = Rte_Write_ppIncineBtnState_IncineBtnState(IncineBtnState);
	status = Rte_Write_ppSlideBtnState_SlideBtnState(SlideBtnState);
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlsData_Height(&Height);
	status = Rte_Read_rpSeatCtrlsData_Incline(&Incline);
	status = Rte_Read_rpSeatCtrlsData_Slide(&Slide);
	
}

