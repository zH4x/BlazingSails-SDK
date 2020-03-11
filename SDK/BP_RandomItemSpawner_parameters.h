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

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.RemoveAllItems
struct ABP_RandomItemSpawner_C_RemoveAllItems_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetRandomUpgrade
struct ABP_RandomItemSpawner_C_GetRandomUpgrade_Params
{
	class UClass*                                      Upgrade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetSurfaceSnapTransform
struct ABP_RandomItemSpawner_C_GetSurfaceSnapTransform_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  SurfaceTransform;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               IncorrectSpawn;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.CheckNoneCrateTier
struct ABP_RandomItemSpawner_C_CheckNoneCrateTier_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Tier;                                                     // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<E_Tiers>                               TierClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SplitNoneCrateItemsInTiers
struct ABP_RandomItemSpawner_C_SplitNoneCrateItemsInTiers_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetRandomItem
struct ABP_RandomItemSpawner_C_GetRandomItem_Params
{
	TEnumAsByte<E_Items>                               Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeapon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnTreasureChests
struct ABP_RandomItemSpawner_C_SpawnTreasureChests_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SplitItemsInTiers
struct ABP_RandomItemSpawner_C_SplitItemsInTiers_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnItem
struct ABP_RandomItemSpawner_C_SpawnItem_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ItemTier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Respawns;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Tiers>                               TierClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.CheckItemTier
struct ABP_RandomItemSpawner_C_CheckItemTier_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Tier;                                                     // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<E_Tiers>                               TierClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.UserConstructionScript
struct ABP_RandomItemSpawner_C_UserConstructionScript_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.ReceiveBeginPlay
struct ABP_RandomItemSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnChestItemAtLocation
struct ABP_RandomItemSpawner_C_SpawnChestItemAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Tiers>                               MinimumTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnItems
struct ABP_RandomItemSpawner_C_SpawnItems_Params
{
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnLootCrateItem
struct ABP_RandomItemSpawner_C_SpawnLootCrateItem_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.ExecuteUbergraph_BP_RandomItemSpawner
struct ABP_RandomItemSpawner_C_ExecuteUbergraph_BP_RandomItemSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
