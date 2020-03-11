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

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UnloadWeapon
struct ABP_WeaponRangedBase_C_UnloadWeapon_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SetClipAmount
struct ABP_WeaponRangedBase_C_SetClipAmount_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.OnRep_IsLoaded
struct ABP_WeaponRangedBase_C_OnRep_IsLoaded_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CalculateInaccuracyOffset
struct ABP_WeaponRangedBase_C_CalculateInaccuracyOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CheckClipAmmo
struct ABP_WeaponRangedBase_C_CheckClipAmmo_Params
{
	bool                                               ClipEmpty;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnAndLaunchProjectile
struct ABP_WeaponRangedBase_C_SpawnAndLaunchProjectile_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnProjectile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.UserConstructionScript
struct ABP_WeaponRangedBase_C_UserConstructionScript_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveBeginPlay
struct ABP_WeaponRangedBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReceiveTick
struct ABP_WeaponRangedBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectile
struct ABP_WeaponRangedBase_C_SpawnProjectile_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.SpawnProjectileFromServer
struct ABP_WeaponRangedBase_C_SpawnProjectileFromServer_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeftWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.MC_SpawnProjectile
struct ABP_WeaponRangedBase_C_MC_SpawnProjectile_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeftWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AddedVelocity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.LoadedState
struct ABP_WeaponRangedBase_C_LoadedState_Params
{
	bool                                               Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Effects
struct ABP_WeaponRangedBase_C_Effects_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.PrimaryFire
struct ABP_WeaponRangedBase_C_PrimaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPrecision;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasSprinting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ReloadWeaponLocal
struct ABP_WeaponRangedBase_C_ReloadWeaponLocal_Params
{
	bool                                               DelayedReload;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.CancelReload
struct ABP_WeaponRangedBase_C_CancelReload_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Fired
struct ABP_WeaponRangedBase_C_Fired_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.Unfired
struct ABP_WeaponRangedBase_C_Unfired_Params
{
};

// Function BP_WeaponRangedBase.BP_WeaponRangedBase_C.ExecuteUbergraph_BP_WeaponRangedBase
struct ABP_WeaponRangedBase_C_ExecuteUbergraph_BP_WeaponRangedBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
