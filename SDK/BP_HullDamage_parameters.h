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

// Function BP_HullDamage.BP_HullDamage_C.UpdateDamagePointSize
struct ABP_HullDamage_C_UpdateDamagePointSize_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.OnRep_DamagePointSize
struct ABP_HullDamage_C_OnRep_DamagePointSize_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.OnRep_RepairHitAmount
struct ABP_HullDamage_C_OnRep_RepairHitAmount_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.OnRep_DamagePointUnderHullWater
struct ABP_HullDamage_C_OnRep_DamagePointUnderHullWater_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.AddRepairHit
struct ABP_HullDamage_C_AddRepairHit_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.OnRep_WaterDamage
struct ABP_HullDamage_C_OnRep_WaterDamage_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
struct ABP_HullDamage_C_UserConstructionScript_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
struct ABP_HullDamage_C_ReceiveBeginPlay_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.ReceiveTick
struct ABP_HullDamage_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HullDamage.BP_HullDamage_C.HighlightHullDamage
struct ABP_HullDamage_C_HighlightHullDamage_Params
{
	bool                                               ENoughWood;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HullDamage.BP_HullDamage_C.NoHighlight
struct ABP_HullDamage_C_NoHighlight_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.CheckForDestroy
struct ABP_HullDamage_C_CheckForDestroy_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.MC_DamageEffects
struct ABP_HullDamage_C_MC_DamageEffects_Params
{
	bool                                               NoSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HullDamage.BP_HullDamage_C.S_RepairDamage
struct ABP_HullDamage_C_S_RepairDamage_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.MC_HammerRepairHit
struct ABP_HullDamage_C_MC_HammerRepairHit_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.DisableDamagePointAfterDelay
struct ABP_HullDamage_C_DisableDamagePointAfterDelay_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.ResetVisualCheck
struct ABP_HullDamage_C_ResetVisualCheck_Params
{
};

// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
struct ABP_HullDamage_C_ExecuteUbergraph_BP_HullDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
