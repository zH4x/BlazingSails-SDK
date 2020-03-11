
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

// Function BP_Lootcrate.BP_Lootcrate_C.SpawnItemWithRaycast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lootcrate_C::SpawnItemWithRaycast(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.SpawnItemWithRaycast");

	ABP_Lootcrate_C_SpawnItemWithRaycast_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.BreakLootcrate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lootcrate_C::BreakLootcrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.BreakLootcrate");

	ABP_Lootcrate_C_BreakLootcrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.OnRep_Broken
// (BlueprintCallable, BlueprintEvent)

void ABP_Lootcrate_C::OnRep_Broken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.OnRep_Broken");

	ABP_Lootcrate_C_OnRep_Broken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lootcrate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.UserConstructionScript");

	ABP_Lootcrate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lootcrate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.ReceiveBeginPlay");

	ABP_Lootcrate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.BreakCrate
// (BlueprintCallable, BlueprintEvent)

void ABP_Lootcrate_C::BreakCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.BreakCrate");

	ABP_Lootcrate_C_BreakCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.MC_BreakCrate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Lootcrate_C::MC_BreakCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.MC_BreakCrate");

	ABP_Lootcrate_C_MC_BreakCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.BreakCrateLocally
// (BlueprintCallable, BlueprintEvent)

void ABP_Lootcrate_C::BreakCrateLocally()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.BreakCrateLocally");

	ABP_Lootcrate_C_BreakCrateLocally_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lootcrate.BP_Lootcrate_C.ExecuteUbergraph_BP_Lootcrate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lootcrate_C::ExecuteUbergraph_BP_Lootcrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lootcrate.BP_Lootcrate_C.ExecuteUbergraph_BP_Lootcrate");

	ABP_Lootcrate_C_ExecuteUbergraph_BP_Lootcrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
