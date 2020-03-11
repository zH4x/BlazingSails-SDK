
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.RemoveAllItems
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RandomItemSpawner_C::RemoveAllItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.RemoveAllItems");

	ABP_RandomItemSpawner_C_RemoveAllItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetRandomUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Upgrade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::GetRandomUpgrade(class UClass** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetRandomUpgrade");

	ABP_RandomItemSpawner_C_GetRandomUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Upgrade != nullptr)
		*Upgrade = params.Upgrade;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetSurfaceSnapTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              SurfaceTransform               (Parm, OutParm, IsPlainOldData)
// bool                           IncorrectSpawn                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::GetSurfaceSnapTransform(const struct FTransform& Transform, struct FTransform* SurfaceTransform, bool* IncorrectSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetSurfaceSnapTransform");

	ABP_RandomItemSpawner_C_GetSurfaceSnapTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurfaceTransform != nullptr)
		*SurfaceTransform = params.SurfaceTransform;
	if (IncorrectSpawn != nullptr)
		*IncorrectSpawn = params.IncorrectSpawn;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.CheckNoneCrateTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Tier                           (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<E_Tiers>           TierClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::CheckNoneCrateTier(int Number, TArray<class UClass*>* Tier, TEnumAsByte<E_Tiers>* TierClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.CheckNoneCrateTier");

	ABP_RandomItemSpawner_C_CheckNoneCrateTier_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tier != nullptr)
		*Tier = params.Tier;
	if (TierClass != nullptr)
		*TierClass = params.TierClass;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SplitNoneCrateItemsInTiers
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RandomItemSpawner_C::SplitNoneCrateItemsInTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SplitNoneCrateItemsInTiers");

	ABP_RandomItemSpawner_C_SplitNoneCrateItemsInTiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetRandomItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeapon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::GetRandomItem(TEnumAsByte<E_Items>* Item, int* Amount, bool* IsWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.GetRandomItem");

	ABP_RandomItemSpawner_C_GetRandomItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
	if (Amount != nullptr)
		*Amount = params.Amount;
	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnTreasureChests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RandomItemSpawner_C::SpawnTreasureChests()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnTreasureChests");

	ABP_RandomItemSpawner_C_SpawnTreasureChests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SplitItemsInTiers
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RandomItemSpawner_C::SplitItemsInTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SplitItemsInTiers");

	ABP_RandomItemSpawner_C_SplitItemsInTiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ItemTier                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Respawns                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RespawnTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_Tiers>           TierClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::SpawnItem(const struct FVector& Location, bool Respawns, float RespawnTime, TEnumAsByte<E_Tiers> TierClass, TArray<class UClass*>* ItemTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnItem");

	ABP_RandomItemSpawner_C_SpawnItem_Params params;
	params.Location = Location;
	params.Respawns = Respawns;
	params.RespawnTime = RespawnTime;
	params.TierClass = TierClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemTier != nullptr)
		*ItemTier = params.ItemTier;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.CheckItemTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Tier                           (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<E_Tiers>           TierClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::CheckItemTier(int Number, TArray<class UClass*>* Tier, TEnumAsByte<E_Tiers>* TierClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.CheckItemTier");

	ABP_RandomItemSpawner_C_CheckItemTier_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tier != nullptr)
		*Tier = params.Tier;
	if (TierClass != nullptr)
		*TierClass = params.TierClass;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RandomItemSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.UserConstructionScript");

	ABP_RandomItemSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RandomItemSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.ReceiveBeginPlay");

	ABP_RandomItemSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnChestItemAtLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_Tiers>           MinimumTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::SpawnChestItemAtLocation(const struct FVector& Location, TEnumAsByte<E_Tiers> MinimumTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnChestItemAtLocation");

	ABP_RandomItemSpawner_C_SpawnChestItemAtLocation_Params params;
	params.Location = Location;
	params.MinimumTier = MinimumTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnItems
// (BlueprintCallable, BlueprintEvent)

void ABP_RandomItemSpawner_C::SpawnItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnItems");

	ABP_RandomItemSpawner_C_SpawnItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnLootCrateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::SpawnLootCrateItem(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.SpawnLootCrateItem");

	ABP_RandomItemSpawner_C_SpawnLootCrateItem_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.ExecuteUbergraph_BP_RandomItemSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RandomItemSpawner_C::ExecuteUbergraph_BP_RandomItemSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RandomItemSpawner.BP_RandomItemSpawner_C.ExecuteUbergraph_BP_RandomItemSpawner");

	ABP_RandomItemSpawner_C_ExecuteUbergraph_BP_RandomItemSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
