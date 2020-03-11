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

// Function BP_ProjectileBase.BP_ProjectileBase_C.DamageWeapon
struct ABP_ProjectileBase_C_DamageWeapon_Params
{
	class ABP_WeaponBase_C*                            WeaponRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.CalculateRadius
struct ABP_ProjectileBase_C_CalculateRadius_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.CalculateDamage
struct ABP_ProjectileBase_C_CalculateDamage_Params
{
	int                                                damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.SpawnAOE
struct ABP_ProjectileBase_C_SpawnAOE_Params
{
	class UClass*                                      AOEActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_AOEBase_C*                               AOEActorRef;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.DamagePlayer
struct ABP_ProjectileBase_C_DamagePlayer_Params
{
	class ABP_Character_C*                             HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.UserConstructionScript
struct ABP_ProjectileBase_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveBeginPlay
struct ABP_ProjectileBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveTick
struct ABP_ProjectileBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.PostHit
struct ABP_ProjectileBase_C_PostHit_Params
{
	bool                                               ForceKilled_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.WaterSplash
struct ABP_ProjectileBase_C_WaterSplash_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveActorBeginOverlap
struct ABP_ProjectileBase_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveActorEndOverlap
struct ABP_ProjectileBase_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.Init
struct ABP_ProjectileBase_C_Init_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.PlayerHit
struct ABP_ProjectileBase_C_PlayerHit_Params
{
	class ABP_Character_C*                             HitPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ProjectileDeath
struct ABP_ProjectileBase_C_ProjectileDeath_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ForceKillProjectile
struct ABP_ProjectileBase_C_ForceKillProjectile_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ForceRe-Deactivate
struct ABP_ProjectileBase_C_ForceRe_Deactivate_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ForceCheckIfInShip
struct ABP_ProjectileBase_C_ForceCheckIfInShip_Params
{
};

// Function BP_ProjectileBase.BP_ProjectileBase_C.ExecuteUbergraph_BP_ProjectileBase
struct ABP_ProjectileBase_C_ExecuteUbergraph_BP_ProjectileBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
