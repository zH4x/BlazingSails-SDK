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

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.UserConstructionScript
struct ABP_ProjectileCannonballBase_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ReceiveTick
struct ABP_ProjectileCannonballBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.PostHit
struct ABP_ProjectileCannonballBase_C_PostHit_Params
{
	bool                                               ForceKilled_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ReceiveBeginPlay
struct ABP_ProjectileCannonballBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ExecuteUbergraph_BP_ProjectileCannonballBase
struct ABP_ProjectileCannonballBase_C_ExecuteUbergraph_BP_ProjectileCannonballBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
