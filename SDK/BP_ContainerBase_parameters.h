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

// Function BP_ContainerBase.BP_ContainerBase_C.OnRep_InitialLocation
struct ABP_ContainerBase_C_OnRep_InitialLocation_Params
{
};

// Function BP_ContainerBase.BP_ContainerBase_C.UserConstructionScript
struct ABP_ContainerBase_C_UserConstructionScript_Params
{
};

// Function BP_ContainerBase.BP_ContainerBase_C.ReceiveBeginPlay
struct ABP_ContainerBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_ContainerBase.BP_ContainerBase_C.ReceiveTick
struct ABP_ContainerBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ContainerBase.BP_ContainerBase_C.Init
struct ABP_ContainerBase_C_Init_Params
{
};

// Function BP_ContainerBase.BP_ContainerBase_C.Activate
struct ABP_ContainerBase_C_Activate_Params
{
	class ABP_Character_C*                             LocalCharacterRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ContainerBase.BP_ContainerBase_C.S_Activate
struct ABP_ContainerBase_C_S_Activate_Params
{
};

// Function BP_ContainerBase.BP_ContainerBase_C.StopActivate
struct ABP_ContainerBase_C_StopActivate_Params
{
};

// Function BP_ContainerBase.BP_ContainerBase_C.ExecuteUbergraph_BP_ContainerBase
struct ABP_ContainerBase_C_ExecuteUbergraph_BP_ContainerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
