
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

// Function BP_RumCrate.BP_RumCrate_C.OnRep_BottleAmount
// (BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::OnRep_BottleAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.OnRep_BottleAmount");

	ABP_RumCrate_C_OnRep_BottleAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.SetShowBottleState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::SetShowBottleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.SetShowBottleState");

	ABP_RumCrate_C_SetShowBottleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.GiveBottle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::GiveBottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.GiveBottle");

	ABP_RumCrate_C_GiveBottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.UserConstructionScript");

	ABP_RumCrate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RumCrate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.ReceiveBeginPlay");

	ABP_RumCrate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RumCrate_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.ReceiveTick");

	ABP_RumCrate_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.ShowReceivedIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RumCrate_C::ShowReceivedIndicator(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.ShowReceivedIndicator");

	ABP_RumCrate_C_ShowReceivedIndicator_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.UpdateVisualState
// (BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::UpdateVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.UpdateVisualState");

	ABP_RumCrate_C_UpdateVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.ResourceReceiveAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::ResourceReceiveAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.ResourceReceiveAnimation");

	ABP_RumCrate_C_ResourceReceiveAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.GiveResources
// (BlueprintCallable, BlueprintEvent)

void ABP_RumCrate_C::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.GiveResources");

	ABP_RumCrate_C_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RumCrate.BP_RumCrate_C.ExecuteUbergraph_BP_RumCrate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RumCrate_C::ExecuteUbergraph_BP_RumCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RumCrate.BP_RumCrate_C.ExecuteUbergraph_BP_RumCrate");

	ABP_RumCrate_C_ExecuteUbergraph_BP_RumCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
