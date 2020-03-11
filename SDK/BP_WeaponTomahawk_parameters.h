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

// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.OnRep_ShowWeapon
struct ABP_WeaponTomahawk_C_OnRep_ShowWeapon_Params
{
};

// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.UserConstructionScript
struct ABP_WeaponTomahawk_C_UserConstructionScript_Params
{
};

// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.MC_Throw
struct ABP_WeaponTomahawk_C_MC_Throw_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.SecondaryFire
struct ABP_WeaponTomahawk_C_SecondaryFire_Params
{
	struct FVector                                     CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.ExecuteUbergraph_BP_WeaponTomahawk
struct ABP_WeaponTomahawk_C_ExecuteUbergraph_BP_WeaponTomahawk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
