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

// Function BP_DamageOverTime.BP_DamageOverTime_C.UserConstructionScript
struct ABP_DamageOverTime_C_UserConstructionScript_Params
{
};

// Function BP_DamageOverTime.BP_DamageOverTime_C.ReceiveTick
struct ABP_DamageOverTime_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageOverTime.BP_DamageOverTime_C.Init
struct ABP_DamageOverTime_C_Init_Params
{
	class UClass*                                      DamageEffectsWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageOverTime.BP_DamageOverTime_C.ExecuteUbergraph_BP_DamageOverTime
struct ABP_DamageOverTime_C_ExecuteUbergraph_BP_DamageOverTime_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
