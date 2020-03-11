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

// Function BP_MapCamera.BP_MapCamera_C.TeleportActorToPlayerForRelevancy
struct ABP_MapCamera_C_TeleportActorToPlayerForRelevancy_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.SaveLocAndZoom
struct ABP_MapCamera_C_SaveLocAndZoom_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.FindAndShowIcons
struct ABP_MapCamera_C_FindAndShowIcons_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.SetIconPosition
struct ABP_MapCamera_C_SetIconPosition_Params
{
	class ABP_IconBase_C*                              Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapCamera.BP_MapCamera_C.GetFocusPoint
struct ABP_MapCamera_C_GetFocusPoint_Params
{
	struct FVector                                     FocusPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapCamera.BP_MapCamera_C.UserConstructionScript
struct ABP_MapCamera_C_UserConstructionScript_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_3
struct ABP_MapCamera_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapCamera.BP_MapCamera_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_2
struct ABP_MapCamera_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapCamera.BP_MapCamera_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_1
struct ABP_MapCamera_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapCamera.BP_MapCamera_C.ReceiveBeginPlay
struct ABP_MapCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.ReceiveTick
struct ABP_MapCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapCamera.BP_MapCamera_C.OC_SetStartLocation
struct ABP_MapCamera_C_OC_SetStartLocation_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.OC_HideIcons
struct ABP_MapCamera_C_OC_HideIcons_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.S_PlaceMarker
struct ABP_MapCamera_C_S_PlaceMarker_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayerColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapCamera.BP_MapCamera_C.DragPressed
struct ABP_MapCamera_C_DragPressed_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.DragReleased
struct ABP_MapCamera_C_DragReleased_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.ZoomIn
struct ABP_MapCamera_C_ZoomIn_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.ZoomOut
struct ABP_MapCamera_C_ZoomOut_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.PlaceMarker
struct ABP_MapCamera_C_PlaceMarker_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.RefreshIcons
struct ABP_MapCamera_C_RefreshIcons_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.SetStartLocation
struct ABP_MapCamera_C_SetStartLocation_Params
{
};

// Function BP_MapCamera.BP_MapCamera_C.ExecuteUbergraph_BP_MapCamera
struct ABP_MapCamera_C_ExecuteUbergraph_BP_MapCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
