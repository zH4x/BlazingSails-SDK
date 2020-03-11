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

// Function BP_RumCrate.BP_RumCrate_C.OnRep_BottleAmount
struct ABP_RumCrate_C_OnRep_BottleAmount_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.SetShowBottleState
struct ABP_RumCrate_C_SetShowBottleState_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.GiveBottle
struct ABP_RumCrate_C_GiveBottle_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.UserConstructionScript
struct ABP_RumCrate_C_UserConstructionScript_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.ReceiveBeginPlay
struct ABP_RumCrate_C_ReceiveBeginPlay_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.ReceiveTick
struct ABP_RumCrate_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RumCrate.BP_RumCrate_C.ShowReceivedIndicator
struct ABP_RumCrate_C_ShowReceivedIndicator_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RumCrate.BP_RumCrate_C.UpdateVisualState
struct ABP_RumCrate_C_UpdateVisualState_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.ResourceReceiveAnimation
struct ABP_RumCrate_C_ResourceReceiveAnimation_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.GiveResources
struct ABP_RumCrate_C_GiveResources_Params
{
};

// Function BP_RumCrate.BP_RumCrate_C.ExecuteUbergraph_BP_RumCrate
struct ABP_RumCrate_C_ExecuteUbergraph_BP_RumCrate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
