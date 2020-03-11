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

// Function UI_SailDamageProgress.UI_SailDamageProgress_C.ShowWidget
struct UUI_SailDamageProgress_C_ShowWidget_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SailDamageProgress.UI_SailDamageProgress_C.GetHealthPercent
struct UUI_SailDamageProgress_C_GetHealthPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SailDamageProgress.UI_SailDamageProgress_C.Construct
struct UUI_SailDamageProgress_C_Construct_Params
{
};

// Function UI_SailDamageProgress.UI_SailDamageProgress_C.Tick
struct UUI_SailDamageProgress_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SailDamageProgress.UI_SailDamageProgress_C.ExecuteUbergraph_UI_SailDamageProgress
struct UUI_SailDamageProgress_C_ExecuteUbergraph_UI_SailDamageProgress_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
