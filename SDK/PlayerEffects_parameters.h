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

// Function PlayerEffects.PlayerEffects_C.GetClosestSteeringWheel
struct UPlayerEffects_C_GetClosestSteeringWheel_Params
{
	class ABP_VehicleSteeringWheel_C*                  steeringwheel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.GetClosestBowBarrelMount
struct UPlayerEffects_C_GetClosestBowBarrelMount_Params
{
	class ABP_BowBarrelMount_C*                        BowBarrelMount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.GetClosestCapstan
struct UPlayerEffects_C_GetClosestCapstan_Params
{
	class ABP_CapstanSloop_C*                          SwivelPostionRef;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.GetClosestSwivelPosition
struct UPlayerEffects_C_GetClosestSwivelPosition_Params
{
	class ABP_SwivelPosition_C*                        SwivelPostionRef;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.GetClosestCannon
struct UPlayerEffects_C_GetClosestCannon_Params
{
	class ABP_VehicleCannon_C*                         ClosestCannonRef;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.ApplyDamageOverTime
struct UPlayerEffects_C_ApplyDamageOverTime_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeBetweenDamage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageRepeats;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayerEffectsWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.RestoreHealth
struct UPlayerEffects_C_RestoreHealth_Params
{
	int                                                RestoreAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Consumed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.S_UseItem
struct UPlayerEffects_C_S_UseItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventory_C*                                FromInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.MC_HealEffect
struct UPlayerEffects_C_MC_HealEffect_Params
{
};

// Function PlayerEffects.PlayerEffects_C.ReceiveTick
struct UPlayerEffects_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.OC_BottleHealEffect
struct UPlayerEffects_C_OC_BottleHealEffect_Params
{
};

// Function PlayerEffects.PlayerEffects_C.RestoreHealthFromClient
struct UPlayerEffects_C_RestoreHealthFromClient_Params
{
	int                                                RestoreAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.S_RestoreHealth
struct UPlayerEffects_C_S_RestoreHealth_Params
{
	int                                                RestoreAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEffects.PlayerEffects_C.OC_HealEffect
struct UPlayerEffects_C_OC_HealEffect_Params
{
};

// Function PlayerEffects.PlayerEffects_C.ExecuteUbergraph_PlayerEffects
struct UPlayerEffects_C_ExecuteUbergraph_PlayerEffects_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
