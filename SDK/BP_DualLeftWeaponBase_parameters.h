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

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.OnRep_Holstered
struct ABP_DualLeftWeaponBase_C_OnRep_Holstered_Params
{
};

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.UserConstructionScript
struct ABP_DualLeftWeaponBase_C_UserConstructionScript_Params
{
};

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.MC_Effects
struct ABP_DualLeftWeaponBase_C_MC_Effects_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.S_Effects
struct ABP_DualLeftWeaponBase_C_S_Effects_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.Effects
struct ABP_DualLeftWeaponBase_C_Effects_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             CharacterRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.ExecuteUbergraph_BP_DualLeftWeaponBase
struct ABP_DualLeftWeaponBase_C_ExecuteUbergraph_BP_DualLeftWeaponBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
