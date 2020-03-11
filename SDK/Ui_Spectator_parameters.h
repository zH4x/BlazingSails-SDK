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

// Function Ui_Spectator.UI_Spectator_C.SetTeam
struct UUI_Spectator_C_SetTeam_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ui_Spectator.UI_Spectator_C.SetShowDefeatedUI
struct UUI_Spectator_C_SetShowDefeatedUI_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ui_Spectator.UI_Spectator_C.SetShowSpectatorUI
struct UUI_Spectator_C_SetShowSpectatorUI_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ui_Spectator.UI_Spectator_C.SetLevel
struct UUI_Spectator_C_SetLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ui_Spectator.UI_Spectator_C.SetSpectatingName
struct UUI_Spectator_C_SetSpectatingName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ui_Spectator.UI_Spectator_C.Construct
struct UUI_Spectator_C_Construct_Params
{
};

// Function Ui_Spectator.UI_Spectator_C.Tick
struct UUI_Spectator_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ui_Spectator.UI_Spectator_C.ExecuteUbergraph_UI_Spectator
struct UUI_Spectator_C_ExecuteUbergraph_UI_Spectator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
