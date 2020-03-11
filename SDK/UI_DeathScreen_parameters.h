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

// Function UI_DeathScreen.UI_DeathScreen_C.ShowHeadshot
struct UUI_DeathScreen_C_ShowHeadshot_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_DeathScreen.UI_DeathScreen_C.SetTimer
struct UUI_DeathScreen_C_SetTimer_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DeathScreen.UI_DeathScreen_C.SetDeathText
struct UUI_DeathScreen_C_SetDeathText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_DeathScreen.UI_DeathScreen_C.InitDeathScreen
struct UUI_DeathScreen_C_InitDeathScreen_Params
{
	struct FString                                     KillerPlayerName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              RespawnTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DeathScreen.UI_DeathScreen_C.Tick
struct UUI_DeathScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DeathScreen.UI_DeathScreen_C.Construct
struct UUI_DeathScreen_C_Construct_Params
{
};

// Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen
struct UUI_DeathScreen_C_ExecuteUbergraph_UI_DeathScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
