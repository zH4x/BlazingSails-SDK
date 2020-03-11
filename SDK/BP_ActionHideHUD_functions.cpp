
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

// Function BP_ActionHideHUD.BP_ActionHideHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionHideHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHideHUD.BP_ActionHideHUD_C.UserConstructionScript");

	ABP_ActionHideHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionHideHUD.BP_ActionHideHUD_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionHideHUD_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHideHUD.BP_ActionHideHUD_C.StartAction");

	ABP_ActionHideHUD_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionHideHUD.BP_ActionHideHUD_C.ExecuteUbergraph_BP_ActionHideHUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionHideHUD_C::ExecuteUbergraph_BP_ActionHideHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHideHUD.BP_ActionHideHUD_C.ExecuteUbergraph_BP_ActionHideHUD");

	ABP_ActionHideHUD_C_ExecuteUbergraph_BP_ActionHideHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
