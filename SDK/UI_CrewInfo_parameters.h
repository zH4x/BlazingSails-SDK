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

// Function UI_CrewInfo.UI_CrewInfo_C.SetGoldAmount
struct UUI_CrewInfo_C_SetGoldAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CrewInfo.UI_CrewInfo_C.RefreshCrewMembers
struct UUI_CrewInfo_C_RefreshCrewMembers_Params
{
};

// Function UI_CrewInfo.UI_CrewInfo_C.Construct
struct UUI_CrewInfo_C_Construct_Params
{
};

// Function UI_CrewInfo.UI_CrewInfo_C.Tick
struct UUI_CrewInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CrewInfo.UI_CrewInfo_C.RefreshEmblemAndPlayers
struct UUI_CrewInfo_C_RefreshEmblemAndPlayers_Params
{
};

// Function UI_CrewInfo.UI_CrewInfo_C.ExecuteUbergraph_UI_CrewInfo
struct UUI_CrewInfo_C_ExecuteUbergraph_UI_CrewInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
