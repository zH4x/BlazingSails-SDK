
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

// Function BP_ActionCommandSails.BP_ActionCommandSails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandSails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandSails.BP_ActionCommandSails_C.UserConstructionScript");

	ABP_ActionCommandSails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandSails.BP_ActionCommandSails_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandSails_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandSails.BP_ActionCommandSails_C.StartAction");

	ABP_ActionCommandSails_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandSails.BP_ActionCommandSails_C.ExecuteUbergraph_BP_ActionCommandSails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionCommandSails_C::ExecuteUbergraph_BP_ActionCommandSails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandSails.BP_ActionCommandSails_C.ExecuteUbergraph_BP_ActionCommandSails");

	ABP_ActionCommandSails_C_ExecuteUbergraph_BP_ActionCommandSails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
