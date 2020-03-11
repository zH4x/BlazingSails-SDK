
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

// Function BP_ItemSpawner.BP_ItemSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSpawner.BP_ItemSpawner_C.UserConstructionScript");

	ABP_ItemSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemSpawner.BP_ItemSpawner_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          SpawnTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemToSpawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MinAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemSpawner_C::SpawnItem(const struct FTransform& SpawnTransform, float SpawnTime, class UClass* ItemToSpawn, int MinAmount, int MaxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSpawner.BP_ItemSpawner_C.SpawnItem");

	ABP_ItemSpawner_C_SpawnItem_Params params;
	params.SpawnTransform = SpawnTransform;
	params.SpawnTime = SpawnTime;
	params.ItemToSpawn = ItemToSpawn;
	params.MinAmount = MinAmount;
	params.MaxAmount = MaxAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemSpawner.BP_ItemSpawner_C.ExecuteUbergraph_BP_ItemSpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemSpawner_C::ExecuteUbergraph_BP_ItemSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemSpawner.BP_ItemSpawner_C.ExecuteUbergraph_BP_ItemSpawner");

	ABP_ItemSpawner_C_ExecuteUbergraph_BP_ItemSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
