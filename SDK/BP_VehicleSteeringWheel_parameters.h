#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.SetShipTurnRotation
struct ABP_VehicleSteeringWheel_C_SetShipTurnRotation_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRep_SteeringLeft
struct ABP_VehicleSteeringWheel_C_OnRep_SteeringLeft_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRep_SteeringRight
struct ABP_VehicleSteeringWheel_C_OnRep_SteeringRight_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.CheckWheelState
struct ABP_VehicleSteeringWheel_C_CheckWheelState_Params
{
	float                                              ForwardPosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BackWardPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.UserConstructionScript
struct ABP_VehicleSteeringWheel_C_UserConstructionScript_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpActEvt_Jump_K2Node_InputActionEvent_1
struct ABP_VehicleSteeringWheel_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ReceiveBeginPlay
struct ABP_VehicleSteeringWheel_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ABP_VehicleSteeringWheel_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
struct ABP_VehicleSteeringWheel_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipSteerRight
struct ABP_VehicleSteeringWheel_C_S_ShipSteerRight_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipStopSteerRight
struct ABP_VehicleSteeringWheel_C_S_ShipStopSteerRight_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipSteerLeft
struct ABP_VehicleSteeringWheel_C_S_ShipSteerLeft_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ShipStopSteerLeft
struct ABP_VehicleSteeringWheel_C_S_ShipStopSteerLeft_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_StopWheel
struct ABP_VehicleSteeringWheel_C_S_StopWheel_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.Reset
struct ABP_VehicleSteeringWheel_C_Reset_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ReceiveTick
struct ABP_VehicleSteeringWheel_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.UnOccupied
struct ABP_VehicleSteeringWheel_C_UnOccupied_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_AnchorDrop
struct ABP_VehicleSteeringWheel_C_S_AnchorDrop_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_AnchorDrop
struct ABP_VehicleSteeringWheel_C_MC_AnchorDrop_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_ReverseShip
struct ABP_VehicleSteeringWheel_C_S_ReverseShip_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_StopReverseShip
struct ABP_VehicleSteeringWheel_C_S_StopReverseShip_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.S_SetWheelRotation
struct ABP_VehicleSteeringWheel_C_S_SetWheelRotation_Params
{
	int                                                Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_SetWheelRotation
struct ABP_VehicleSteeringWheel_C_MC_SetWheelRotation_Params
{
	int                                                WheelRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ResetWheelRotation
struct ABP_VehicleSteeringWheel_C_ResetWheelRotation_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.LoadKeys
struct ABP_VehicleSteeringWheel_C_LoadKeys_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.Resetkeys
struct ABP_VehicleSteeringWheel_C_Resetkeys_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.RefreshKeys
struct ABP_VehicleSteeringWheel_C_RefreshKeys_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.OnRepOccupied
struct ABP_VehicleSteeringWheel_C_OnRepOccupied_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_ResetSpringArm
struct ABP_VehicleSteeringWheel_C_MC_ResetSpringArm_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.AnchorDrop
struct ABP_VehicleSteeringWheel_C_AnchorDrop_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.SetAnchorReady
struct ABP_VehicleSteeringWheel_C_SetAnchorReady_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.MC_UpgradeSteeringWheel
struct ABP_VehicleSteeringWheel_C_MC_UpgradeSteeringWheel_Params
{
};

// Function BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C.ExecuteUbergraph_BP_VehicleSteeringWheel
struct ABP_VehicleSteeringWheel_C_ExecuteUbergraph_BP_VehicleSteeringWheel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
