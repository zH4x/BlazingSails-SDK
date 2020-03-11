
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

// Function BP_TreasureChest.BP_TreasureChest_C.OnRep_Opened
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_C::OnRep_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.OnRep_Opened");

	ABP_TreasureChest_C_OnRep_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.UserConstructionScript");

	ABP_TreasureChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TreasureChest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.ReceiveBeginPlay");

	ABP_TreasureChest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureChest_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.ReceiveTick");

	ABP_TreasureChest_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureChest_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.Activate");

	ABP_TreasureChest_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.S_Activate");

	ABP_TreasureChest_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.OpenEffects
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_C::OpenEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.OpenEffects");

	ABP_TreasureChest_C_OpenEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.MC_Opened
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_TreasureChest_C::MC_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.MC_Opened");

	ABP_TreasureChest_C_MC_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TreasureChest.BP_TreasureChest_C.ExecuteUbergraph_BP_TreasureChest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureChest_C::ExecuteUbergraph_BP_TreasureChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TreasureChest.BP_TreasureChest_C.ExecuteUbergraph_BP_TreasureChest");

	ABP_TreasureChest_C_ExecuteUbergraph_BP_TreasureChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
