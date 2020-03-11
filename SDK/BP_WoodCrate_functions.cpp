
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

// Function BP_WoodCrate.BP_WoodCrate_C.OnRep_Sinking
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::OnRep_Sinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.OnRep_Sinking");

	ABP_WoodCrate_C_OnRep_Sinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.OnRep_Empty
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::OnRep_Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.OnRep_Empty");

	ABP_WoodCrate_C_OnRep_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.SetShowWoodState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::SetShowWoodState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.SetShowWoodState");

	ABP_WoodCrate_C_SetShowWoodState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.UserConstructionScript");

	ABP_WoodCrate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WoodCrate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ReceiveBeginPlay");

	ABP_WoodCrate_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodCrate_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ReceiveTick");

	ABP_WoodCrate_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ShowReceivedIndicatorWood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodCrate_C::ShowReceivedIndicatorWood(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ShowReceivedIndicatorWood");

	ABP_WoodCrate_C_ShowReceivedIndicatorWood_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.UpdateVisualState
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::UpdateVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.UpdateVisualState");

	ABP_WoodCrate_C_UpdateVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.SinkCrate
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::SinkCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.SinkCrate");

	ABP_WoodCrate_C_SinkCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ShowReceivedIndicatorCannonballs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodCrate_C::ShowReceivedIndicatorCannonballs(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ShowReceivedIndicatorCannonballs");

	ABP_WoodCrate_C_ShowReceivedIndicatorCannonballs_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodCrate_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ReceiveActorBeginOverlap");

	ABP_WoodCrate_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodCrate_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ReceiveActorEndOverlap");

	ABP_WoodCrate_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.EmptyCrate
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodCrate_C::EmptyCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.EmptyCrate");

	ABP_WoodCrate_C_EmptyCrate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodCrate.BP_WoodCrate_C.ExecuteUbergraph_BP_WoodCrate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodCrate_C::ExecuteUbergraph_BP_WoodCrate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodCrate.BP_WoodCrate_C.ExecuteUbergraph_BP_WoodCrate");

	ABP_WoodCrate_C_ExecuteUbergraph_BP_WoodCrate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
