
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

// Function BP_InteractableBase.BP_InteractableBase_C.OnRep_InUse
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::OnRep_InUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.OnRep_InUse");

	ABP_InteractableBase_C_OnRep_InUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.UserConstructionScript");

	ABP_InteractableBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteractableBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.ReceiveBeginPlay");

	ABP_InteractableBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.ReceiveTick");

	ABP_InteractableBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.S_Activate");

	ABP_InteractableBase_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableBase_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.Activate");

	ABP_InteractableBase_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.StopActivate
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::StopActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.StopActivate");

	ABP_InteractableBase_C_StopActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.ShowInteractionIndicator
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::ShowInteractionIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.ShowInteractionIndicator");

	ABP_InteractableBase_C_ShowInteractionIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.HideInteractionIndicator
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::HideInteractionIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.HideInteractionIndicator");

	ABP_InteractableBase_C_HideInteractionIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.ShowHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::ShowHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.ShowHighlight");

	ABP_InteractableBase_C_ShowHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.HideHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::HideHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.HideHighlight");

	ABP_InteractableBase_C_HideHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.EngageFromServer
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::EngageFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.EngageFromServer");

	ABP_InteractableBase_C_EngageFromServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.UpdateVisualState
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::UpdateVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.UpdateVisualState");

	ABP_InteractableBase_C_UpdateVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.SetInUse
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::SetInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.SetInUse");

	ABP_InteractableBase_C_SetInUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.DoSomething
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractableBase_C::DoSomething()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.DoSomething");

	ABP_InteractableBase_C_DoSomething_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InteractableBase.BP_InteractableBase_C.ExecuteUbergraph_BP_InteractableBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableBase_C::ExecuteUbergraph_BP_InteractableBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableBase.BP_InteractableBase_C.ExecuteUbergraph_BP_InteractableBase");

	ABP_InteractableBase_C_ExecuteUbergraph_BP_InteractableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
