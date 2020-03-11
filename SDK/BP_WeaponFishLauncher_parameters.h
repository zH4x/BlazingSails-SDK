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

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.UserConstructionScript
struct ABP_WeaponFishLauncher_C_UserConstructionScript_Params
{
};

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ReceiveBeginPlay
struct ABP_WeaponFishLauncher_C_ReceiveBeginPlay_Params
{
};

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ReceiveTick
struct ABP_WeaponFishLauncher_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.LoadedState
struct ABP_WeaponFishLauncher_C_LoadedState_Params
{
	bool                                               Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.SecondaryFire
struct ABP_WeaponFishLauncher_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ExecuteUbergraph_BP_WeaponFishLauncher
struct ABP_WeaponFishLauncher_C_ExecuteUbergraph_BP_WeaponFishLauncher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
