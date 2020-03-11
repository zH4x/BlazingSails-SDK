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

// Function UI_Scoreboard.UI_Scoreboard_C.GetDefeatedText
struct UUI_Scoreboard_C_GetDefeatedText_Params
{
	bool                                               Defeated;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Defeatedtext;                                             // (Parm, OutParm)
};

// Function UI_Scoreboard.UI_Scoreboard_C.SetPlayerAmount
struct UUI_Scoreboard_C_SetPlayerAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Scoreboard.UI_Scoreboard_C.LoadScoreboard
struct UUI_Scoreboard_C_LoadScoreboard_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.Tick
struct UUI_Scoreboard_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Scoreboard.UI_Scoreboard_C.ScrollScoreboardUp
struct UUI_Scoreboard_C_ScrollScoreboardUp_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.ScrollScoreboardDown
struct UUI_Scoreboard_C_ScrollScoreboardDown_Params
{
};

// Function UI_Scoreboard.UI_Scoreboard_C.ExecuteUbergraph_UI_Scoreboard
struct UUI_Scoreboard_C_ExecuteUbergraph_UI_Scoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
