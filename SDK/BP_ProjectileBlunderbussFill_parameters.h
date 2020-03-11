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

// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.UserConstructionScript
struct ABP_ProjectileBlunderbussFill_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveBeginPlay
struct ABP_ProjectileBlunderbussFill_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveActorBeginOverlap
struct ABP_ProjectileBlunderbussFill_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveTick
struct ABP_ProjectileBlunderbussFill_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ExecuteUbergraph_BP_ProjectileBlunderbussFill
struct ABP_ProjectileBlunderbussFill_C_ExecuteUbergraph_BP_ProjectileBlunderbussFill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
