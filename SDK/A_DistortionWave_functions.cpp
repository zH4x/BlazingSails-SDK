
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

// Function A_DistortionWave.A_DistortionWave_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AA_DistortionWave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DistortionWave.A_DistortionWave_C.UserConstructionScript");

	AA_DistortionWave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DistortionWave.A_DistortionWave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AA_DistortionWave_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DistortionWave.A_DistortionWave_C.ReceiveBeginPlay");

	AA_DistortionWave_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DistortionWave.A_DistortionWave_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AA_DistortionWave_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DistortionWave.A_DistortionWave_C.ReceiveTick");

	AA_DistortionWave_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_DistortionWave.A_DistortionWave_C.ExecuteUbergraph_A_DistortionWave
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AA_DistortionWave_C::ExecuteUbergraph_A_DistortionWave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_DistortionWave.A_DistortionWave_C.ExecuteUbergraph_A_DistortionWave");

	AA_DistortionWave_C_ExecuteUbergraph_A_DistortionWave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
