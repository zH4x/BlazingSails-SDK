
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

// Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionSpectatorCam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.UserConstructionScript");

	ABP_ActionSpectatorCam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionSpectatorCam_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.StartAction");

	ABP_ActionSpectatorCam_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.ExecuteUbergraph_BP_ActionSpectatorCam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionSpectatorCam_C::ExecuteUbergraph_BP_ActionSpectatorCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSpectatorCam.BP_ActionSpectatorCam_C.ExecuteUbergraph_BP_ActionSpectatorCam");

	ABP_ActionSpectatorCam_C_ExecuteUbergraph_BP_ActionSpectatorCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
