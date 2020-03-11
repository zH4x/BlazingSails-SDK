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

// Function UI_InteractableInfo.UI_InteractableInfo_C.SetInteractableInfo
struct UUI_InteractableInfo_C_SetInteractableInfo_Params
{
};

// Function UI_InteractableInfo.UI_InteractableInfo_C.Tick
struct UUI_InteractableInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InteractableInfo.UI_InteractableInfo_C.refresh
struct UUI_InteractableInfo_C_refresh_Params
{
};

// Function UI_InteractableInfo.UI_InteractableInfo_C.ExecuteUbergraph_UI_InteractableInfo
struct UUI_InteractableInfo_C_ExecuteUbergraph_UI_InteractableInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
