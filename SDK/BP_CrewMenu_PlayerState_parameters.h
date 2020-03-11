#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.GetTeamID
struct ABP_CrewMenu_PlayerState_C_GetTeamID_Params
{
	int                                                TeamID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.SetTeamID
struct ABP_CrewMenu_PlayerState_C_SetTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_LeaderCustomization
struct ABP_CrewMenu_PlayerState_C_OnRep_LeaderCustomization_Params
{
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_TeamID
struct ABP_CrewMenu_PlayerState_C_OnRep_TeamID_Params
{
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.Client_UpdateCustomization
struct ABP_CrewMenu_PlayerState_C_Client_UpdateCustomization_Params
{
	struct FST_Customisation                           Customization;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.OnRep_Customization
struct ABP_CrewMenu_PlayerState_C_OnRep_Customization_Params
{
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.UserConstructionScript
struct ABP_CrewMenu_PlayerState_C_UserConstructionScript_Params
{
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.Server_SetCustomization
struct ABP_CrewMenu_PlayerState_C_Server_SetCustomization_Params
{
	struct FST_Customisation                           Customization;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C.ExecuteUbergraph_BP_CrewMenu_PlayerState
struct ABP_CrewMenu_PlayerState_C_ExecuteUbergraph_BP_CrewMenu_PlayerState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
