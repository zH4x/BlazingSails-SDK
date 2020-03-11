
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_InventoryItem_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDoubleClick");

	UUI_InventoryItem_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetBgColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_InventoryItem_C::SetBgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetBgColor");

	UUI_InventoryItem_C_SetBgColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_InventoryItem_C::SetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetTextColor");

	UUI_InventoryItem_C_SetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetArrow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_InventoryItem_C::SetArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetArrow");

	UUI_InventoryItem_C_SetArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetSelectionColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_InventoryItem_C::SetSelectionColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetSelectionColor");

	UUI_InventoryItem_C_SetSelectionColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetFadeColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_InventoryItem_C::SetFadeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetFadeColor");

	UUI_InventoryItem_C_SetFadeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_InventoryItem_C::SetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetItemName");

	UUI_InventoryItem_C_SetItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetIconAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_InventoryItem_C::SetIconAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetIconAlpha");

	UUI_InventoryItem_C_SetIconAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryItem_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnDragDetected");

	UUI_InventoryItem_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_InventoryItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDown");

	UUI_InventoryItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_InventoryItem_C::SetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetIcon");

	UUI_InventoryItem_C_SetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.SetAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_InventoryItem_C::SetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.SetAmount");

	UUI_InventoryItem_C_SetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryItem_C::BndEvt__Button_140_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UUI_InventoryItem_C_BndEvt__Button_140_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_InventoryItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnMouseEnter");

	UUI_InventoryItem_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_InventoryItem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnMouseLeave");

	UUI_InventoryItem_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryItem_C::BndEvt__Button_140_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");

	UUI_InventoryItem_C_BndEvt__Button_140_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_Remove_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryItem_C::BndEvt__Button_Remove_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_Remove_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature");

	UUI_InventoryItem_C_BndEvt__Button_Remove_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.LoadToolTip
// (BlueprintCallable, BlueprintEvent)

void UUI_InventoryItem_C::LoadToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.LoadToolTip");

	UUI_InventoryItem_C_LoadToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Construct");

	UUI_InventoryItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryItem_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnDragCancelled");

	UUI_InventoryItem_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.DepositItem
// (BlueprintCallable, BlueprintEvent)

void UUI_InventoryItem_C::DepositItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.DepositItem");

	UUI_InventoryItem_C_DepositItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.MoveItem
// (BlueprintCallable, BlueprintEvent)

void UUI_InventoryItem_C::MoveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.MoveItem");

	UUI_InventoryItem_C_MoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryItem.UI_InventoryItem_C.ExecuteUbergraph_UI_InventoryItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryItem_C::ExecuteUbergraph_UI_InventoryItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.ExecuteUbergraph_UI_InventoryItem");

	UUI_InventoryItem_C_ExecuteUbergraph_UI_InventoryItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
