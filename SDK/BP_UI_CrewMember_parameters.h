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

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.UpdateShouldShowInfoWidget
struct ABP_UI_CrewMember_C_UpdateShouldShowInfoWidget_Params
{
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.UpdateSlot
struct ABP_UI_CrewMember_C_UpdateSlot_Params
{
};

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ToggleVisible
struct ABP_UI_CrewMember_C_ToggleVisible_Params
{
	bool                                               bNewVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ResetCrewSlot
struct ABP_UI_CrewMember_C_ResetCrewSlot_Params
{
};

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.UserConstructionScript
struct ABP_UI_CrewMember_C_UserConstructionScript_Params
{
};

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ReceiveBeginPlay
struct ABP_UI_CrewMember_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_CrewMember.BP_UI_CrewMember_C.ExecuteUbergraph_BP_UI_CrewMember
struct ABP_UI_CrewMember_C_ExecuteUbergraph_BP_UI_CrewMember_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
