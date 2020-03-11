
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

// Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandFireLCannons_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.UserConstructionScript");

	ABP_ActionCommandFireLCannons_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandFireLCannons_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.StartAction");

	ABP_ActionCommandFireLCannons_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.ExecuteUbergraph_BP_ActionCommandFireLCannons
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionCommandFireLCannons_C::ExecuteUbergraph_BP_ActionCommandFireLCannons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandFireLCannons.BP_ActionCommandFireLCannons_C.ExecuteUbergraph_BP_ActionCommandFireLCannons");

	ABP_ActionCommandFireLCannons_C_ExecuteUbergraph_BP_ActionCommandFireLCannons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
