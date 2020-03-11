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

// Function UI_PlayerAmount.UI_PlayerAmount_C.Get_Txt_Players_Text_1
struct UUI_PlayerAmount_C_Get_Txt_Players_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_PlayerAmount.UI_PlayerAmount_C.Tick
struct UUI_PlayerAmount_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PlayerAmount.UI_PlayerAmount_C.refresh
struct UUI_PlayerAmount_C_refresh_Params
{
};

// Function UI_PlayerAmount.UI_PlayerAmount_C.Construct
struct UUI_PlayerAmount_C_Construct_Params
{
};

// Function UI_PlayerAmount.UI_PlayerAmount_C.ExecuteUbergraph_UI_PlayerAmount
struct UUI_PlayerAmount_C_ExecuteUbergraph_UI_PlayerAmount_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
