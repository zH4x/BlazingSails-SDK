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

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.UserConstructionScript
struct ABP_ExplosiveBarrel_C_UserConstructionScript_Params
{
};

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveBeginPlay
struct ABP_ExplosiveBarrel_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveTick
struct ABP_ExplosiveBarrel_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.Explode
struct ABP_ExplosiveBarrel_C_Explode_Params
{
	float                                              DelayedFuse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            ControllerRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.MC_Effects
struct ABP_ExplosiveBarrel_C_MC_Effects_Params
{
};

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.S_Explode
struct ABP_ExplosiveBarrel_C_S_Explode_Params
{
	class ABP_Controller_C*                            ControllerRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayedFuse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ExecuteUbergraph_BP_ExplosiveBarrel
struct ABP_ExplosiveBarrel_C_ExecuteUbergraph_BP_ExplosiveBarrel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
