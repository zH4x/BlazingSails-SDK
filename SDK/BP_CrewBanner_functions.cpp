
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

// Function BP_CrewBanner.BP_CrewBanner_C.OnRep_CrewIsFull
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::OnRep_CrewIsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.OnRep_CrewIsFull");

	ABP_CrewBanner_C_OnRep_CrewIsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.OnRep_Useable
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::OnRep_Useable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.OnRep_Useable");

	ABP_CrewBanner_C_OnRep_Useable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.OnRep_TeamID");

	ABP_CrewBanner_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.UserConstructionScript");

	ABP_CrewBanner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CrewBanner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.ReceiveBeginPlay");

	ABP_CrewBanner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.S_Activate");

	ABP_CrewBanner_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.SetFlag
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::SetFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.SetFlag");

	ABP_CrewBanner_C_SetFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.UpdateCrewIsFullState
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewBanner_C::UpdateCrewIsFullState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.UpdateCrewIsFullState");

	ABP_CrewBanner_C_UpdateCrewIsFullState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewBanner.BP_CrewBanner_C.ExecuteUbergraph_BP_CrewBanner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CrewBanner_C::ExecuteUbergraph_BP_CrewBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewBanner.BP_CrewBanner_C.ExecuteUbergraph_BP_CrewBanner");

	ABP_CrewBanner_C_ExecuteUbergraph_BP_CrewBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
