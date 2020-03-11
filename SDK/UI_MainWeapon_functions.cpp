
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

// Function UI_MainWeapon.UI_MainWeapon_C.SetOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_MainWeapon_C::SetOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.SetOpacity");

	UUI_MainWeapon_C_SetOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MainWeapon.UI_MainWeapon_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MainWeapon_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.OnDragDetected");

	UUI_MainWeapon_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UI_MainWeapon.UI_MainWeapon_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MainWeapon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.OnMouseButtonDown");

	UUI_MainWeapon_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MainWeapon.UI_MainWeapon_C.SetMainIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_MainWeapon_C::SetMainIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.SetMainIcon");

	UUI_MainWeapon_C_SetMainIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MainWeapon.UI_MainWeapon_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainWeapon_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.OnDragCancelled");

	UUI_MainWeapon_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainWeapon.UI_MainWeapon_C.LoadToolTip
// (BlueprintCallable, BlueprintEvent)

void UUI_MainWeapon_C::LoadToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.LoadToolTip");

	UUI_MainWeapon_C_LoadToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainWeapon.UI_MainWeapon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MainWeapon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.OnMouseEnter");

	UUI_MainWeapon_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MainWeapon.UI_MainWeapon_C.ExecuteUbergraph_UI_MainWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MainWeapon_C::ExecuteUbergraph_UI_MainWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MainWeapon.UI_MainWeapon_C.ExecuteUbergraph_UI_MainWeapon");

	UUI_MainWeapon_C_ExecuteUbergraph_UI_MainWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
