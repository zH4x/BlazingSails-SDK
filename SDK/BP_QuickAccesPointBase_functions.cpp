
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

// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.UserConstructionScript");

	ABP_QuickAccesPointBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_QuickAccesPointBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ReceiveBeginPlay");

	ABP_QuickAccesPointBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickAccesPointBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ReceiveTick");

	ABP_QuickAccesPointBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ShowAmountWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::ShowAmountWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ShowAmountWidget");

	ABP_QuickAccesPointBase_C_ShowAmountWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.HideAmountWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::HideAmountWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.HideAmountWidget");

	ABP_QuickAccesPointBase_C_HideAmountWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.RefreshAmount
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::RefreshAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.RefreshAmount");

	ABP_QuickAccesPointBase_C_RefreshAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickAccesPointBase_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.Activate");

	ABP_QuickAccesPointBase_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ResourceReceiveAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::ResourceReceiveAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ResourceReceiveAnimation");

	ABP_QuickAccesPointBase_C_ResourceReceiveAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ShowHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::ShowHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ShowHighlight");

	ABP_QuickAccesPointBase_C_ShowHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.HideHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::HideHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.HideHighlight");

	ABP_QuickAccesPointBase_C_HideHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.StopActivate
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::StopActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.StopActivate");

	ABP_QuickAccesPointBase_C_StopActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.S_Activate");

	ABP_QuickAccesPointBase_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.GiveResources
// (BlueprintCallable, BlueprintEvent)

void ABP_QuickAccesPointBase_C::GiveResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.GiveResources");

	ABP_QuickAccesPointBase_C_GiveResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ExecuteUbergraph_BP_QuickAccesPointBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickAccesPointBase_C::ExecuteUbergraph_BP_QuickAccesPointBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickAccesPointBase.BP_QuickAccesPointBase_C.ExecuteUbergraph_BP_QuickAccesPointBase");

	ABP_QuickAccesPointBase_C_ExecuteUbergraph_BP_QuickAccesPointBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
