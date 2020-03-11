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

// Function UI_PlayerKnife.UI_PlayerKnife_C.SetColor
struct UUI_PlayerKnife_C_SetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PlayerKnife.UI_PlayerKnife_C.Construct
struct UUI_PlayerKnife_C_Construct_Params
{
};

// Function UI_PlayerKnife.UI_PlayerKnife_C.ActivateSword
struct UUI_PlayerKnife_C_ActivateSword_Params
{
};

// Function UI_PlayerKnife.UI_PlayerKnife_C.SetSwordColor
struct UUI_PlayerKnife_C_SetSwordColor_Params
{
	int                                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PlayerKnife.UI_PlayerKnife_C.ExecuteUbergraph_UI_PlayerKnife
struct UUI_PlayerKnife_C_ExecuteUbergraph_UI_PlayerKnife_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
