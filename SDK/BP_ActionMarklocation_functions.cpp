
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

// Function BP_ActionMarklocation.BP_ActionMarklocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionMarklocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionMarklocation.BP_ActionMarklocation_C.UserConstructionScript");

	ABP_ActionMarklocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionMarklocation.BP_ActionMarklocation_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionMarklocation_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionMarklocation.BP_ActionMarklocation_C.StartAction");

	ABP_ActionMarklocation_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionMarklocation.BP_ActionMarklocation_C.ExecuteUbergraph_BP_ActionMarklocation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionMarklocation_C::ExecuteUbergraph_BP_ActionMarklocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionMarklocation.BP_ActionMarklocation_C.ExecuteUbergraph_BP_ActionMarklocation");

	ABP_ActionMarklocation_C_ExecuteUbergraph_BP_ActionMarklocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
