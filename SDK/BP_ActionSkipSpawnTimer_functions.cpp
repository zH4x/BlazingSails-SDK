
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

// Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionSkipSpawnTimer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.UserConstructionScript");

	ABP_ActionSkipSpawnTimer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionSkipSpawnTimer_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.StartAction");

	ABP_ActionSkipSpawnTimer_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.ExecuteUbergraph_BP_ActionSkipSpawnTimer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionSkipSpawnTimer_C::ExecuteUbergraph_BP_ActionSkipSpawnTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionSkipSpawnTimer.BP_ActionSkipSpawnTimer_C.ExecuteUbergraph_BP_ActionSkipSpawnTimer");

	ABP_ActionSkipSpawnTimer_C_ExecuteUbergraph_BP_ActionSkipSpawnTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
