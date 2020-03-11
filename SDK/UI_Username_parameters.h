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

// Function UI_Username.UI_Username_C.ShowVoiceChatIcon
struct UUI_Username_C_ShowVoiceChatIcon_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.SetUsernameVisibility
struct UUI_Username_C_SetUsernameVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.GetPrestigeRank
struct UUI_Username_C_GetPrestigeRank_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.GetLevel
struct UUI_Username_C_GetLevel_Params
{
	int                                                LevelInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.SetPrestigeRankColor
struct UUI_Username_C_SetPrestigeRankColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Username.UI_Username_C.ShowTitle
struct UUI_Username_C_ShowTitle_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.SetTitle
struct UUI_Username_C_SetTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Username.UI_Username_C.SetLevel
struct UUI_Username_C_SetLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Username.UI_Username_C.ShowIcon
struct UUI_Username_C_ShowIcon_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.ShowName
struct UUI_Username_C_ShowName_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.SetColor
struct UUI_Username_C_SetColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Username.UI_Username_C.Construct
struct UUI_Username_C_Construct_Params
{
};

// Function UI_Username.UI_Username_C.Tick
struct UUI_Username_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Username.UI_Username_C.ExecuteUbergraph_UI_Username
struct UUI_Username_C_ExecuteUbergraph_UI_Username_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
