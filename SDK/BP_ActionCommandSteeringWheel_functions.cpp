
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

// Function BP_ActionCommandSteeringWheel.BP_ActionCommandSteeringWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandSteeringWheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandSteeringWheel.BP_ActionCommandSteeringWheel_C.UserConstructionScript");

	ABP_ActionCommandSteeringWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandSteeringWheel.BP_ActionCommandSteeringWheel_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandSteeringWheel_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandSteeringWheel.BP_ActionCommandSteeringWheel_C.StartAction");

	ABP_ActionCommandSteeringWheel_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandSteeringWheel.BP_ActionCommandSteeringWheel_C.ExecuteUbergraph_BP_ActionCommandSteeringWheel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionCommandSteeringWheel_C::ExecuteUbergraph_BP_ActionCommandSteeringWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandSteeringWheel.BP_ActionCommandSteeringWheel_C.ExecuteUbergraph_BP_ActionCommandSteeringWheel");

	ABP_ActionCommandSteeringWheel_C_ExecuteUbergraph_BP_ActionCommandSteeringWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
