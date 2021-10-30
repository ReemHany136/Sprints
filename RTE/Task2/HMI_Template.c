/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/30/2021 08:28 PM
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
	MultiStateBtnType HeightBtnStatePLUS, HeightBtnStateMINUS, HeightBtnStateINIT;
	MultiStateBtnType InclineBtnStatePLUS, InclineBtnStateMINUS, InclineBtnStateINIT;
	MultiStateBtnType SlideBtnStatePLUS, SlideBtnStateMINUS, SlideBtnStateINIT;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;
	
	status = Rte_Read_rpSeatCtrlsData_Height(&Height);
	if(Height == 1){
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(HeightBtnStatePLUS);
	}
	else if(Height == 2){
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(HeightBtnStateMINUS);
	}
	else{
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(HeightBtnStateINIT);
	}
	
	status = Rte_Read_rpSeatCtrlsData_Incline(&Incline);
	if(Incline == 1){
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(InclineBtnStatePLUS);
	}
	else if(Incline == 2){
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(InclineBtnStateMINUS);
	}
	else{
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(InclineBtnStateINIT);
	}
	
	status = Rte_Read_rpSeatCtrlsData_Slide(&Slide);
	if(Slide == 1){
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(SlideBtnStatePLUS);
	}
	else if(Slide == 2){
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(SlideBtnStateMINUS);
	}
	else{
		status = Rte_Write_ppSeatCtrlsBtns_HeightBtnState(SlideBtnStateINIT);
	}
}

