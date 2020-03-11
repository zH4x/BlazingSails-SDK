
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

// Function BP_WoodBarrel.BP_WoodBarrel_C.OnRep_WoodAmount
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::OnRep_WoodAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.OnRep_WoodAmount");

	ABP_WoodBarrel_C_OnRep_WoodAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.SetShowWoodState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::SetShowWoodState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.SetShowWoodState");

	ABP_WoodBarrel_C_SetShowWoodState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.GiveWood
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::GiveWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.GiveWood");

	ABP_WoodBarrel_C_GiveWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.UserConstructionScript");

	ABP_WoodBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodBarrel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.ReceiveTick");

	ABP_WoodBarrel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.ShowReceivedIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodBarrel_C::ShowReceivedIndicator(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.ShowReceivedIndicator");

	ABP_WoodBarrel_C_ShowReceivedIndicator_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.UpdateVisualState
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::UpdateVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.UpdateVisualState");

	ABP_WoodBarrel_C_UpdateVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.ResourceReceiveAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::ResourceReceiveAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.ResourceReceiveAnimation");

	ABP_WoodBarrel_C_ResourceReceiveAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.GiveResources
// (BlueprintCallable, BlueprintEvent)

void ABP_WoodBarrel_C::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.GiveResources");

	ABP_WoodBarrel_C_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WoodBarrel.BP_WoodBarrel_C.ExecuteUbergraph_BP_WoodBarrel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodBarrel_C::ExecuteUbergraph_BP_WoodBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodBarrel.BP_WoodBarrel_C.ExecuteUbergraph_BP_WoodBarrel");

	ABP_WoodBarrel_C_ExecuteUbergraph_BP_WoodBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
