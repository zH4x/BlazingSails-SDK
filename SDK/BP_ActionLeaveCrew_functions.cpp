
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

// Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionLeaveCrew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.UserConstructionScript");

	ABP_ActionLeaveCrew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionLeaveCrew_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.StartAction");

	ABP_ActionLeaveCrew_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.ExecuteUbergraph_BP_ActionLeaveCrew
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionLeaveCrew_C::ExecuteUbergraph_BP_ActionLeaveCrew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionLeaveCrew.BP_ActionLeaveCrew_C.ExecuteUbergraph_BP_ActionLeaveCrew");

	ABP_ActionLeaveCrew_C_ExecuteUbergraph_BP_ActionLeaveCrew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
