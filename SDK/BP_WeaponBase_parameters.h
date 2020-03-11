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

// Function BP_WeaponBase.BP_WeaponBase_C.ApplyDamage
struct ABP_WeaponBase_C_ApplyDamage_Params
{
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponBase.BP_WeaponBase_C.OnRep_Holstered
struct ABP_WeaponBase_C_OnRep_Holstered_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.ResetTransform
struct ABP_WeaponBase_C_ResetTransform_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.SetCustomHolsterTransform
struct ABP_WeaponBase_C_SetCustomHolsterTransform_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.UserConstructionScript
struct ABP_WeaponBase_C_UserConstructionScript_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.ReceiveBeginPlay
struct ABP_WeaponBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.ReceiveTick
struct ABP_WeaponBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponBase.BP_WeaponBase_C.MC_DamagedEffects
struct ABP_WeaponBase_C_MC_DamagedEffects_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.SpawnDualWeaponLeft
struct ABP_WeaponBase_C_SpawnDualWeaponLeft_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.ReceiveDestroyed
struct ABP_WeaponBase_C_ReceiveDestroyed_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.PrimaryFire
struct ABP_WeaponBase_C_PrimaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPrecision;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasSprinting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponBase.BP_WeaponBase_C.StopPrimaryFire
struct ABP_WeaponBase_C_StopPrimaryFire_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.SecondaryFire
struct ABP_WeaponBase_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponBase.BP_WeaponBase_C.StopSecondaryFire
struct ABP_WeaponBase_C_StopSecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponBase.BP_WeaponBase_C.HolsteredEvent
struct ABP_WeaponBase_C_HolsteredEvent_Params
{
};

// Function BP_WeaponBase.BP_WeaponBase_C.ExecuteUbergraph_BP_WeaponBase
struct ABP_WeaponBase_C_ExecuteUbergraph_BP_WeaponBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
