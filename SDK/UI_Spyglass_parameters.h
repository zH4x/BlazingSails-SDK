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

// Function UI_Spyglass.UI_Spyglass_C.Construct
struct UUI_Spyglass_C_Construct_Params
{
};

// Function UI_Spyglass.UI_Spyglass_C.Tick
struct UUI_Spyglass_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Spyglass.UI_Spyglass_C.CloseSpyglass
struct UUI_Spyglass_C_CloseSpyglass_Params
{
};

// Function UI_Spyglass.UI_Spyglass_C.ExecuteUbergraph_UI_Spyglass
struct UUI_Spyglass_C_ExecuteUbergraph_UI_Spyglass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
