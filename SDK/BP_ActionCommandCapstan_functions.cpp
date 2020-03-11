
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

// Function BP_ActionCommandCapstan.BP_ActionCommandCapstan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandCapstan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandCapstan.BP_ActionCommandCapstan_C.UserConstructionScript");

	ABP_ActionCommandCapstan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandCapstan.BP_ActionCommandCapstan_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandCapstan_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandCapstan.BP_ActionCommandCapstan_C.StartAction");

	ABP_ActionCommandCapstan_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandCapstan.BP_ActionCommandCapstan_C.ExecuteUbergraph_BP_ActionCommandCapstan
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionCommandCapstan_C::ExecuteUbergraph_BP_ActionCommandCapstan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandCapstan.BP_ActionCommandCapstan_C.ExecuteUbergraph_BP_ActionCommandCapstan");

	ABP_ActionCommandCapstan_C_ExecuteUbergraph_BP_ActionCommandCapstan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
