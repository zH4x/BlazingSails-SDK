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

// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDoubleClick
struct UUI_InventoryItem_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetBgColor
struct UUI_InventoryItem_C_SetBgColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetTextColor
struct UUI_InventoryItem_C_SetTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetArrow
struct UUI_InventoryItem_C_SetArrow_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetSelectionColor
struct UUI_InventoryItem_C_SetSelectionColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetFadeColor
struct UUI_InventoryItem_C_SetFadeColor_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetItemName
struct UUI_InventoryItem_C_SetItemName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetIconAlpha
struct UUI_InventoryItem_C_SetIconAlpha_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.OnDragDetected
struct UUI_InventoryItem_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDown
struct UUI_InventoryItem_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetIcon
struct UUI_InventoryItem_C_SetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.SetAmount
struct UUI_InventoryItem_C_SetAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UUI_InventoryItem_C_BndEvt__Button_140_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseEnter
struct UUI_InventoryItem_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseLeave
struct UUI_InventoryItem_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
struct UUI_InventoryItem_C_BndEvt__Button_140_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_Remove_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature
struct UUI_InventoryItem_C_BndEvt__Button_Remove_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.LoadToolTip
struct UUI_InventoryItem_C_LoadToolTip_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.Construct
struct UUI_InventoryItem_C_Construct_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.OnDragCancelled
struct UUI_InventoryItem_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.DepositItem
struct UUI_InventoryItem_C_DepositItem_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.MoveItem
struct UUI_InventoryItem_C_MoveItem_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.ExecuteUbergraph_UI_InventoryItem
struct UUI_InventoryItem_C_ExecuteUbergraph_UI_InventoryItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
