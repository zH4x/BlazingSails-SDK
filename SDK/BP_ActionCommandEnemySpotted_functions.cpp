
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

// Function BP_ActionCommandEnemySpotted.BP_ActionCommandEnemySpotted_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandEnemySpotted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandEnemySpotted.BP_ActionCommandEnemySpotted_C.UserConstructionScript");

	ABP_ActionCommandEnemySpotted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandEnemySpotted.BP_ActionCommandEnemySpotted_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionCommandEnemySpotted_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandEnemySpotted.BP_ActionCommandEnemySpotted_C.StartAction");

	ABP_ActionCommandEnemySpotted_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionCommandEnemySpotted.BP_ActionCommandEnemySpotted_C.ExecuteUbergraph_BP_ActionCommandEnemySpotted
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionCommandEnemySpotted_C::ExecuteUbergraph_BP_ActionCommandEnemySpotted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionCommandEnemySpotted.BP_ActionCommandEnemySpotted_C.ExecuteUbergraph_BP_ActionCommandEnemySpotted");

	ABP_ActionCommandEnemySpotted_C_ExecuteUbergraph_BP_ActionCommandEnemySpotted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
