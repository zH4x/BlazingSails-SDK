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

// Function BP_WaterPP.BP_WaterPP_C.SwitchToCabin
struct ABP_WaterPP_C_SwitchToCabin_Params
{
	bool                                               FromUnderwater;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaterPP.BP_WaterPP_C.SwitchToAboveWater
struct ABP_WaterPP_C_SwitchToAboveWater_Params
{
	bool                                               FromUnderwater;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaterPP.BP_WaterPP_C.SwitchToUnderwater
struct ABP_WaterPP_C_SwitchToUnderwater_Params
{
};

// Function BP_WaterPP.BP_WaterPP_C.UserConstructionScript
struct ABP_WaterPP_C_UserConstructionScript_Params
{
};

// Function BP_WaterPP.BP_WaterPP_C.ReceiveBeginPlay
struct ABP_WaterPP_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaterPP.BP_WaterPP_C.ReceiveTick
struct ABP_WaterPP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WaterPP.BP_WaterPP_C.ExecuteUbergraph_BP_WaterPP
struct ABP_WaterPP_C_ExecuteUbergraph_BP_WaterPP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
