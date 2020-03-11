
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

// Function BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionPauseDeadZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C.UserConstructionScript");

	ABP_ActionPauseDeadZone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionPauseDeadZone_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C.StartAction");

	ABP_ActionPauseDeadZone_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C.ExecuteUbergraph_BP_ActionPauseDeadZone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionPauseDeadZone_C::ExecuteUbergraph_BP_ActionPauseDeadZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPauseDeadZone.BP_ActionPauseDeadZone_C.ExecuteUbergraph_BP_ActionPauseDeadZone");

	ABP_ActionPauseDeadZone_C_ExecuteUbergraph_BP_ActionPauseDeadZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
