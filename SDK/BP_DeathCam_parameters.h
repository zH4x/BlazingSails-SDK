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

// Function BP_DeathCam.BP_DeathCam_C.UserConstructionScript
struct ABP_DeathCam_C_UserConstructionScript_Params
{
};

// Function BP_DeathCam.BP_DeathCam_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3
struct ABP_DeathCam_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeathCam.BP_DeathCam_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
struct ABP_DeathCam_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeathCam.BP_DeathCam_C.InpActEvt_X_K2Node_InputKeyEvent_1
struct ABP_DeathCam_C_InpActEvt_X_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeathCam.BP_DeathCam_C.ReceiveBeginPlay
struct ABP_DeathCam_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeathCam.BP_DeathCam_C.ReceiveTick
struct ABP_DeathCam_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.OC_LookAtKiller
struct ABP_DeathCam_C_OC_LookAtKiller_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.AttachToEntity
struct ABP_DeathCam_C_AttachToEntity_Params
{
	bool                                               Defeated;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ABP_DeathCam_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
struct ABP_DeathCam_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.S_UpdateNetLocation
struct ABP_DeathCam_C_S_UpdateNetLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.OC_AttachToEntity
struct ABP_DeathCam_C_OC_AttachToEntity_Params
{
	bool                                               Defeated;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeathCam.BP_DeathCam_C.CloseTeammenu
struct ABP_DeathCam_C_CloseTeammenu_Params
{
};

// Function BP_DeathCam.BP_DeathCam_C.ExecuteUbergraph_BP_DeathCam
struct ABP_DeathCam_C_ExecuteUbergraph_BP_DeathCam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
