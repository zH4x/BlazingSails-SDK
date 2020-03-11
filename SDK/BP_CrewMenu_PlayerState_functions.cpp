
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

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.GetTeamID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TeamID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CrewMenu_PlayerState_C::GetTeamID(int* TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.GetTeamID");

	ABP_CrewMenu_PlayerState_C_GetTeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamID != nullptr)
		*TeamID = params.TeamID;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.SetTeamID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CrewMenu_PlayerState_C::SetTeamID(int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.SetTeamID");

	ABP_CrewMenu_PlayerState_C_SetTeamID_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_LeaderCustomization
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewMenu_PlayerState_C::OnRep_LeaderCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_LeaderCustomization");

	ABP_CrewMenu_PlayerState_C_OnRep_LeaderCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewMenu_PlayerState_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_TeamID");

	ABP_CrewMenu_PlayerState_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.Client_UpdateCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Customisation       Customization                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CrewMenu_PlayerState_C::Client_UpdateCustomization(const struct FST_Customisation& Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.Client_UpdateCustomization");

	ABP_CrewMenu_PlayerState_C_Client_UpdateCustomization_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_Customization
// (BlueprintCallable, BlueprintEvent)

void ABP_CrewMenu_PlayerState_C::OnRep_Customization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_Customization");

	ABP_CrewMenu_PlayerState_C_OnRep_Customization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CrewMenu_PlayerState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.UserConstructionScript");

	ABP_CrewMenu_PlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.Server_SetCustomization
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Customisation       Customization                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CrewMenu_PlayerState_C::Server_SetCustomization(const struct FST_Customisation& Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.Server_SetCustomization");

	ABP_CrewMenu_PlayerState_C_Server_SetCustomization_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.ExecuteUbergraph_BP_CrewMenu_PlayerState
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CrewMenu_PlayerState_C::ExecuteUbergraph_BP_CrewMenu_PlayerState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.ExecuteUbergraph_BP_CrewMenu_PlayerState");

	ABP_CrewMenu_PlayerState_C_ExecuteUbergraph_BP_CrewMenu_PlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
