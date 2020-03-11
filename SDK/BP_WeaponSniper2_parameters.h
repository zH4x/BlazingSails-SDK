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

// Function BP_WeaponSniper2.BP_WeaponSniper2_C.UserConstructionScript
struct ABP_WeaponSniper2_C_UserConstructionScript_Params
{
};

// Function BP_WeaponSniper2.BP_WeaponSniper2_C.SecondaryFire
struct ABP_WeaponSniper2_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponSniper2.BP_WeaponSniper2_C.HolsteredEvent
struct ABP_WeaponSniper2_C_HolsteredEvent_Params
{
};

// Function BP_WeaponSniper2.BP_WeaponSniper2_C.StopSecondaryFire
struct ABP_WeaponSniper2_C_StopSecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponSniper2.BP_WeaponSniper2_C.ExecuteUbergraph_BP_WeaponSniper2
struct ABP_WeaponSniper2_C_ExecuteUbergraph_BP_WeaponSniper2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
