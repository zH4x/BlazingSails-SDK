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

// Function UI_AttractMode.UI_AttractMode_C.EnableAttractMode
struct UUI_AttractMode_C_EnableAttractMode_Params
{
};

// Function UI_AttractMode.UI_AttractMode_C.SetAttractModeEnabled
struct UUI_AttractMode_C_SetAttractModeEnabled_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AttractMode.UI_AttractMode_C.Tick
struct UUI_AttractMode_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AttractMode.UI_AttractMode_C.OnInitialized
struct UUI_AttractMode_C_OnInitialized_Params
{
};

// Function UI_AttractMode.UI_AttractMode_C.ExecuteUbergraph_UI_AttractMode
struct UUI_AttractMode_C_ExecuteUbergraph_UI_AttractMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AttractMode.UI_AttractMode_C.OnDisabled__DelegateSignature
struct UUI_AttractMode_C_OnDisabled__DelegateSignature_Params
{
};

// Function UI_AttractMode.UI_AttractMode_C.OnEnabled__DelegateSignature
struct UUI_AttractMode_C_OnEnabled__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
