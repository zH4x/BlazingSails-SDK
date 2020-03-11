
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

// Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionPaintSpray_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.UserConstructionScript");

	ABP_ActionPaintSpray_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionPaintSpray_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.StartAction");

	ABP_ActionPaintSpray_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.ExecuteUbergraph_BP_ActionPaintSpray
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionPaintSpray_C::ExecuteUbergraph_BP_ActionPaintSpray(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionPaintSpray.BP_ActionPaintSpray_C.ExecuteUbergraph_BP_ActionPaintSpray");

	ABP_ActionPaintSpray_C_ExecuteUbergraph_BP_ActionPaintSpray_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
