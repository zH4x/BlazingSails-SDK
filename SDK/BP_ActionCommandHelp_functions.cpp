
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

// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.GetListOfCommands
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 List                           (Parm, OutParm, ZeroConstructor)

void ABP_ActionCommandHelp_C::GetListOfCommands(struct FString* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.GetListOfCommands");

	ABP_ActionCommandHelp_C_GetListOfCommands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandHelp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.UserConstructionScript");

	ABP_ActionCommandHelp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandHelp_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.StartAction");

	ABP_ActionCommandHelp_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.ExecuteUbergraph_BP_ActionCommandHelp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionCommandHelp_C::ExecuteUbergraph_BP_ActionCommandHelp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.ExecuteUbergraph_BP_ActionCommandHelp");

	ABP_ActionCommandHelp_C_ExecuteUbergraph_BP_ActionCommandHelp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
