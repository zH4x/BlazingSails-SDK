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

// Function BP_WoodCrate.BP_WoodCrate_C.OnRep_Sinking
struct ABP_WoodCrate_C_OnRep_Sinking_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.OnRep_Empty
struct ABP_WoodCrate_C_OnRep_Empty_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.SetShowWoodState
struct ABP_WoodCrate_C_SetShowWoodState_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.UserConstructionScript
struct ABP_WoodCrate_C_UserConstructionScript_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveBeginPlay
struct ABP_WoodCrate_C_ReceiveBeginPlay_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveTick
struct ABP_WoodCrate_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodCrate.BP_WoodCrate_C.ShowReceivedIndicatorWood
struct ABP_WoodCrate_C_ShowReceivedIndicatorWood_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodCrate.BP_WoodCrate_C.UpdateVisualState
struct ABP_WoodCrate_C_UpdateVisualState_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.SinkCrate
struct ABP_WoodCrate_C_SinkCrate_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.ShowReceivedIndicatorCannonballs
struct ABP_WoodCrate_C_ShowReceivedIndicatorCannonballs_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveActorBeginOverlap
struct ABP_WoodCrate_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveActorEndOverlap
struct ABP_WoodCrate_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodCrate.BP_WoodCrate_C.EmptyCrate
struct ABP_WoodCrate_C_EmptyCrate_Params
{
};

// Function BP_WoodCrate.BP_WoodCrate_C.ExecuteUbergraph_BP_WoodCrate
struct ABP_WoodCrate_C_ExecuteUbergraph_BP_WoodCrate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
