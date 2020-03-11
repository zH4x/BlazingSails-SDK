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

// Function UI_PieMenu.UI_PieMenu_C.MiddleActionHighlight
struct UUI_PieMenu_C_MiddleActionHighlight_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PieMenu.UI_PieMenu_C.ShowMiddleButton
struct UUI_PieMenu_C_ShowMiddleButton_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_PieMenu.UI_PieMenu_C.Action
struct UUI_PieMenu_C_Action_Params
{
};

// Function UI_PieMenu.UI_PieMenu_C.OnMouseButtonDown
struct UUI_PieMenu_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_PieMenu.UI_PieMenu_C.GetMouseLength
struct UUI_PieMenu_C_GetMouseLength_Params
{
};

// Function UI_PieMenu.UI_PieMenu_C.GetMouseLocation
struct UUI_PieMenu_C_GetMouseLocation_Params
{
};

// Function UI_PieMenu.UI_PieMenu_C.LoadPieMenu
struct UUI_PieMenu_C_LoadPieMenu_Params
{
	struct FText                                       PieMenuName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FST_PieMenuSelection>                PieSelections;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                SelectionColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PieMenu.UI_PieMenu_C.Construct
struct UUI_PieMenu_C_Construct_Params
{
};

// Function UI_PieMenu.UI_PieMenu_C.Tick
struct UUI_PieMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_PieMenu.UI_PieMenu_C.Destruct
struct UUI_PieMenu_C_Destruct_Params
{
};

// Function UI_PieMenu.UI_PieMenu_C.ExecuteUbergraph_UI_PieMenu
struct UUI_PieMenu_C_ExecuteUbergraph_UI_PieMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
