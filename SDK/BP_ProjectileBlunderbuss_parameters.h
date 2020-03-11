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

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.UserConstructionScript
struct ABP_ProjectileBlunderbuss_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveBeginPlay
struct ABP_ProjectileBlunderbuss_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveActorBeginOverlap
struct ABP_ProjectileBlunderbuss_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveTick
struct ABP_ProjectileBlunderbuss_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.Init
struct ABP_ProjectileBlunderbuss_C_Init_Params
{
};

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ExecuteUbergraph_BP_ProjectileBlunderbuss
struct ABP_ProjectileBlunderbuss_C_ExecuteUbergraph_BP_ProjectileBlunderbuss_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
