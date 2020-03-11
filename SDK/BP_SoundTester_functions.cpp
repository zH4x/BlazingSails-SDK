
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

// Function BP_SoundTester.BP_SoundTester_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SoundTester_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundTester.BP_SoundTester_C.UserConstructionScript");

	ABP_SoundTester_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundTester.BP_SoundTester_C.PlayTestSound
// (BlueprintCallable, BlueprintEvent)

void ABP_SoundTester_C::PlayTestSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundTester.BP_SoundTester_C.PlayTestSound");

	ABP_SoundTester_C_PlayTestSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SoundTester.BP_SoundTester_C.ExecuteUbergraph_BP_SoundTester
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SoundTester_C::ExecuteUbergraph_BP_SoundTester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SoundTester.BP_SoundTester_C.ExecuteUbergraph_BP_SoundTester");

	ABP_SoundTester_C_ExecuteUbergraph_BP_SoundTester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
