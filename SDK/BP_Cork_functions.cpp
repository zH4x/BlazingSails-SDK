
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

// Function BP_Cork.BP_Cork_C.OnRep_Popped
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::OnRep_Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.OnRep_Popped");

	ABP_Cork_C_OnRep_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.UserConstructionScript");

	ABP_Cork_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Cork_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.ReceiveBeginPlay");

	ABP_Cork_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cork_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.ReceiveTick");

	ABP_Cork_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.StopActivate
// (BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::StopActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.StopActivate");

	ABP_Cork_C_StopActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cork_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.Activate");

	ABP_Cork_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.ShowHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::ShowHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.ShowHighlight");

	ABP_Cork_C_ShowHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.HideHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::HideHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.HideHighlight");

	ABP_Cork_C_HideHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.EngageFromServer
// (BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::EngageFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.EngageFromServer");

	ABP_Cork_C_EngageFromServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.MC_ResetTimer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::MC_ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.MC_ResetTimer");

	ABP_Cork_C_MC_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.S_Activate");

	ABP_Cork_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.SetInUse
// (BlueprintCallable, BlueprintEvent)

void ABP_Cork_C::SetInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.SetInUse");

	ABP_Cork_C_SetInUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cork.BP_Cork_C.ExecuteUbergraph_BP_Cork
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cork_C::ExecuteUbergraph_BP_Cork(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cork.BP_Cork_C.ExecuteUbergraph_BP_Cork");

	ABP_Cork_C_ExecuteUbergraph_BP_Cork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
