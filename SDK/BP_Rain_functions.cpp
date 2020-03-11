
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

// Function BP_Rain.BP_Rain_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Rain_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rain.BP_Rain_C.UserConstructionScript");

	ABP_Rain_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rain.BP_Rain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Rain_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rain.BP_Rain_C.ReceiveBeginPlay");

	ABP_Rain_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rain.BP_Rain_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Rain_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rain.BP_Rain_C.ReceiveTick");

	ABP_Rain_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Rain.BP_Rain_C.ExecuteUbergraph_BP_Rain
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Rain_C::ExecuteUbergraph_BP_Rain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rain.BP_Rain_C.ExecuteUbergraph_BP_Rain");

	ABP_Rain_C_ExecuteUbergraph_BP_Rain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
