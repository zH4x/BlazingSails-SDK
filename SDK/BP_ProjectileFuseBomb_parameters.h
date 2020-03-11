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

// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.UserConstructionScript
struct ABP_ProjectileFuseBomb_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.ReceiveTick
struct ABP_ProjectileFuseBomb_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.PostHit
struct ABP_ProjectileFuseBomb_C_PostHit_Params
{
	bool                                               ForceKilled_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.ExecuteUbergraph_BP_ProjectileFuseBomb
struct ABP_ProjectileFuseBomb_C_ExecuteUbergraph_BP_ProjectileFuseBomb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
