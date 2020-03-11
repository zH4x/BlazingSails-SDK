
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

// Function BP_CrewCreator.BP_CrewCreator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CrewCreator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewCreator.BP_CrewCreator_C.UserConstructionScript");

	ABP_CrewCreator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewCreator.BP_CrewCreator_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_CrewCreator_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewCreator.BP_CrewCreator_C.S_Activate");

	ABP_CrewCreator_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewCreator.BP_CrewCreator_C.ExecuteUbergraph_BP_CrewCreator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CrewCreator_C::ExecuteUbergraph_BP_CrewCreator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewCreator.BP_CrewCreator_C.ExecuteUbergraph_BP_CrewCreator");

	ABP_CrewCreator_C_ExecuteUbergraph_BP_CrewCreator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
