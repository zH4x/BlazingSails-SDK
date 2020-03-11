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

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.OtherHit
struct ABP_WeaponMeleeBase_C_OtherHit_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.DamageLine
struct ABP_WeaponMeleeBase_C_DamageLine_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.UserConstructionScript
struct ABP_WeaponMeleeBase_C_UserConstructionScript_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ReceiveBeginPlay
struct ABP_WeaponMeleeBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ReceiveTick
struct ABP_WeaponMeleeBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_PrimaryFire
struct ABP_WeaponMeleeBase_C_MC_PrimaryFire_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitOther
struct ABP_WeaponMeleeBase_C_HitOther_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitOtherTasks
struct ABP_WeaponMeleeBase_C_HitOtherTasks_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimationDirection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.PrimaryFire
struct ABP_WeaponMeleeBase_C_PrimaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullPrecision;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasSprinting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.S_HitOther
struct ABP_WeaponMeleeBase_C_S_HitOther_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimationDirection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_HitOther
struct ABP_WeaponMeleeBase_C_MC_HitOther_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimationDirection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.SecondaryFire
struct ABP_WeaponMeleeBase_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.StopSecondaryFire
struct ABP_WeaponMeleeBase_C_StopSecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.S_HitPlayer
struct ABP_WeaponMeleeBase_C_S_HitPlayer_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.MC_HitPlayer
struct ABP_WeaponMeleeBase_C_MC_HitPlayer_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.HitPlayer
struct ABP_WeaponMeleeBase_C_HitPlayer_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.PlayerHitEvent
struct ABP_WeaponMeleeBase_C_PlayerHitEvent_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.bLock
struct ABP_WeaponMeleeBase_C_bLock_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.StopBlock
struct ABP_WeaponMeleeBase_C_StopBlock_Params
{
};

// Function BP_WeaponMeleeBase.BP_WeaponMeleeBase_C.ExecuteUbergraph_BP_WeaponMeleeBase
struct ABP_WeaponMeleeBase_C_ExecuteUbergraph_BP_WeaponMeleeBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
