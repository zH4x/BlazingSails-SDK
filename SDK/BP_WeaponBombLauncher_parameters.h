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

// Function BP_WeaponBombLauncher.BP_WeaponBombLauncher_C.UserConstructionScript
struct ABP_WeaponBombLauncher_C_UserConstructionScript_Params
{
};

// Function BP_WeaponBombLauncher.BP_WeaponBombLauncher_C.SecondaryFire
struct ABP_WeaponBombLauncher_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponBombLauncher.BP_WeaponBombLauncher_C.ExecuteUbergraph_BP_WeaponBombLauncher
struct ABP_WeaponBombLauncher_C_ExecuteUbergraph_BP_WeaponBombLauncher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
