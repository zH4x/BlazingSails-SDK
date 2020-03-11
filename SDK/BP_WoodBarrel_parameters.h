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

// Function BP_WoodBarrel.BP_WoodBarrel_C.OnRep_WoodAmount
struct ABP_WoodBarrel_C_OnRep_WoodAmount_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.SetShowWoodState
struct ABP_WoodBarrel_C_SetShowWoodState_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.GiveWood
struct ABP_WoodBarrel_C_GiveWood_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.UserConstructionScript
struct ABP_WoodBarrel_C_UserConstructionScript_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.ReceiveTick
struct ABP_WoodBarrel_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.ShowReceivedIndicator
struct ABP_WoodBarrel_C_ShowReceivedIndicator_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.UpdateVisualState
struct ABP_WoodBarrel_C_UpdateVisualState_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.ResourceReceiveAnimation
struct ABP_WoodBarrel_C_ResourceReceiveAnimation_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.GiveResources
struct ABP_WoodBarrel_C_GiveResources_Params
{
};

// Function BP_WoodBarrel.BP_WoodBarrel_C.ExecuteUbergraph_BP_WoodBarrel
struct ABP_WoodBarrel_C_ExecuteUbergraph_BP_WoodBarrel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
