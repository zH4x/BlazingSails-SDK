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

// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.UserConstructionScript
struct ABP_ProjectilePoisonArrow_C_UserConstructionScript_Params
{
};

// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PostHit
struct ABP_ProjectilePoisonArrow_C_PostHit_Params
{
	bool                                               ForceKilled_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PlayerHit
struct ABP_ProjectilePoisonArrow_C_PlayerHit_Params
{
	class ABP_Character_C*                             HitPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.ExecuteUbergraph_BP_ProjectilePoisonArrow
struct ABP_ProjectilePoisonArrow_C_ExecuteUbergraph_BP_ProjectilePoisonArrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
