
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

// Function BP_ActionItems.BP_ActionItems_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionItems_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionItems.BP_ActionItems_C.UserConstructionScript");

	ABP_ActionItems_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionItems.BP_ActionItems_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionItems_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionItems.BP_ActionItems_C.StartAction");

	ABP_ActionItems_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionItems.BP_ActionItems_C.ExecuteUbergraph_BP_ActionItems
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionItems_C::ExecuteUbergraph_BP_ActionItems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionItems.BP_ActionItems_C.ExecuteUbergraph_BP_ActionItems");

	ABP_ActionItems_C_ExecuteUbergraph_BP_ActionItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
