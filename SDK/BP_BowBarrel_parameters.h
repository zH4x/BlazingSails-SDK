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

// Function BP_BowBarrel.BP_BowBarrel_C.UserConstructionScript
struct ABP_BowBarrel_C_UserConstructionScript_Params
{
};

// Function BP_BowBarrel.BP_BowBarrel_C.ReceiveTick
struct ABP_BowBarrel_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowBarrel.BP_BowBarrel_C.ReceiveActorBeginOverlap
struct ABP_BowBarrel_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowBarrel.BP_BowBarrel_C.MC_Explode
struct ABP_BowBarrel_C_MC_Explode_Params
{
};

// Function BP_BowBarrel.BP_BowBarrel_C.Explode
struct ABP_BowBarrel_C_Explode_Params
{
};

// Function BP_BowBarrel.BP_BowBarrel_C.ExecuteUbergraph_BP_BowBarrel
struct ABP_BowBarrel_C_ExecuteUbergraph_BP_BowBarrel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
