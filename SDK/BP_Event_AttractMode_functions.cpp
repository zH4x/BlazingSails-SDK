
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

// Function BP_Event_AttractMode.BP_Event_AttractMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Event_AttractMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Event_AttractMode.BP_Event_AttractMode_C.UserConstructionScript");

	ABP_Event_AttractMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Event_AttractMode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Event_AttractMode.BP_Event_AttractMode_C.ReceiveTick");

	ABP_Event_AttractMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Event_AttractMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Event_AttractMode.BP_Event_AttractMode_C.ReceiveBeginPlay");

	ABP_Event_AttractMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.DisableAudio
// (BlueprintCallable, BlueprintEvent)

void ABP_Event_AttractMode_C::DisableAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Event_AttractMode.BP_Event_AttractMode_C.DisableAudio");

	ABP_Event_AttractMode_C_DisableAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.OnEnable
// (BlueprintCallable, BlueprintEvent)

void ABP_Event_AttractMode_C::OnEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Event_AttractMode.BP_Event_AttractMode_C.OnEnable");

	ABP_Event_AttractMode_C_OnEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Event_AttractMode.BP_Event_AttractMode_C.ExecuteUbergraph_BP_Event_AttractMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Event_AttractMode_C::ExecuteUbergraph_BP_Event_AttractMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Event_AttractMode.BP_Event_AttractMode_C.ExecuteUbergraph_BP_Event_AttractMode");

	ABP_Event_AttractMode_C_ExecuteUbergraph_BP_Event_AttractMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
