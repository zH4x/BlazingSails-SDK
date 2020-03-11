
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

// Function BP_WaterPump.BP_WaterPump_C.CheckIfInteractingCharsAreValid
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::CheckIfInteractingCharsAreValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.CheckIfInteractingCharsAreValid");

	ABP_WaterPump_C_CheckIfInteractingCharsAreValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.OnRep_Pumping
// (BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::OnRep_Pumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.OnRep_Pumping");

	ABP_WaterPump_C_OnRep_Pumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.UserConstructionScript");

	ABP_WaterPump_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WaterPump_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.ReceiveBeginPlay");

	ABP_WaterPump_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPump_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.ReceiveTick");

	ABP_WaterPump_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.StopActivate
// (BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::StopActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.StopActivate");

	ABP_WaterPump_C_StopActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.S_Activate");

	ABP_WaterPump_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPump_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.Activate");

	ABP_WaterPump_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.ShowHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::ShowHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.ShowHighlight");

	ABP_WaterPump_C_ShowHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.HideHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::HideHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.HideHighlight");

	ABP_WaterPump_C_HideHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.EngageFromServer
// (BlueprintCallable, BlueprintEvent)

void ABP_WaterPump_C::EngageFromServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.EngageFromServer");

	ABP_WaterPump_C_EngageFromServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPump.BP_WaterPump_C.ExecuteUbergraph_BP_WaterPump
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPump_C::ExecuteUbergraph_BP_WaterPump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPump.BP_WaterPump_C.ExecuteUbergraph_BP_WaterPump");

	ABP_WaterPump_C_ExecuteUbergraph_BP_WaterPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
