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

// Function UI_LevelBar.UI_LevelBar_C.SetTitle
struct UUI_LevelBar_C_SetTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LevelBar.UI_LevelBar_C.GetLevel
struct UUI_LevelBar_C_GetLevel_Params
{
	int                                                EntryLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LevelBar.UI_LevelBar_C.GetPrestigeRank
struct UUI_LevelBar_C_GetPrestigeRank_Params
{
	int                                                RankLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PrestigeRank;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LevelBar.UI_LevelBar_C.SetAmount
struct UUI_LevelBar_C_SetAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LevelBar.UI_LevelBar_C.SetPercentage
struct UUI_LevelBar_C_SetPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LevelBar.UI_LevelBar_C.SetLevel
struct UUI_LevelBar_C_SetLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LevelBar.UI_LevelBar_C.Tick
struct UUI_LevelBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LevelBar.UI_LevelBar_C.ExecuteUbergraph_UI_LevelBar
struct UUI_LevelBar_C_ExecuteUbergraph_UI_LevelBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
