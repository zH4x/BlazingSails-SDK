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

// Function UI_SideArm.UI_SideArm_C.SetOpacity
struct UUI_SideArm_C_SetOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SideArm.UI_SideArm_C.OnDragDetected
struct UUI_SideArm_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SideArm.UI_SideArm_C.OnMouseButtonDown
struct UUI_SideArm_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SideArm.UI_SideArm_C.SetMainIcon
struct UUI_SideArm_C_SetMainIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SideArm.UI_SideArm_C.OnDragCancelled
struct UUI_SideArm_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SideArm.UI_SideArm_C.LoadToolTip
struct UUI_SideArm_C_LoadToolTip_Params
{
};

// Function UI_SideArm.UI_SideArm_C.OnMouseEnter
struct UUI_SideArm_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_SideArm.UI_SideArm_C.ExecuteUbergraph_UI_SideArm
struct UUI_SideArm_C_ExecuteUbergraph_UI_SideArm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
