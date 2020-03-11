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

// Function BP_TreasureChest.BP_TreasureChest_C.OnRep_Opened
struct ABP_TreasureChest_C_OnRep_Opened_Params
{
};

// Function BP_TreasureChest.BP_TreasureChest_C.UserConstructionScript
struct ABP_TreasureChest_C_UserConstructionScript_Params
{
};

// Function BP_TreasureChest.BP_TreasureChest_C.ReceiveBeginPlay
struct ABP_TreasureChest_C_ReceiveBeginPlay_Params
{
};

// Function BP_TreasureChest.BP_TreasureChest_C.ReceiveTick
struct ABP_TreasureChest_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasureChest.BP_TreasureChest_C.Activate
struct ABP_TreasureChest_C_Activate_Params
{
	class ABP_Character_C*                             LocalCharacterRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TreasureChest.BP_TreasureChest_C.S_Activate
struct ABP_TreasureChest_C_S_Activate_Params
{
};

// Function BP_TreasureChest.BP_TreasureChest_C.OpenEffects
struct ABP_TreasureChest_C_OpenEffects_Params
{
};

// Function BP_TreasureChest.BP_TreasureChest_C.MC_Opened
struct ABP_TreasureChest_C_MC_Opened_Params
{
};

// Function BP_TreasureChest.BP_TreasureChest_C.ExecuteUbergraph_BP_TreasureChest
struct ABP_TreasureChest_C_ExecuteUbergraph_BP_TreasureChest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
