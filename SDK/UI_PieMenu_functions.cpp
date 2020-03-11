
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

// Function UI_PieMenu.UI_PieMenu_C.MiddleActionHighlight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_PieMenu_C::MiddleActionHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.MiddleActionHighlight");

	UUI_PieMenu_C_MiddleActionHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PieMenu.UI_PieMenu_C.ShowMiddleButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_PieMenu_C::ShowMiddleButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.ShowMiddleButton");

	UUI_PieMenu_C_ShowMiddleButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PieMenu.UI_PieMenu_C.Action
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_PieMenu_C::Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.Action");

	UUI_PieMenu_C_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PieMenu.UI_PieMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_PieMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.OnMouseButtonDown");

	UUI_PieMenu_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PieMenu.UI_PieMenu_C.GetMouseLength
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PieMenu_C::GetMouseLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.GetMouseLength");

	UUI_PieMenu_C_GetMouseLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PieMenu.UI_PieMenu_C.GetMouseLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PieMenu_C::GetMouseLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.GetMouseLocation");

	UUI_PieMenu_C_GetMouseLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PieMenu.UI_PieMenu_C.LoadPieMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PieMenuName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FST_PieMenuSelection> PieSelections                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            SelectionColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PieMenu_C::LoadPieMenu(const struct FText& PieMenuName, const struct FLinearColor& SelectionColor, TArray<struct FST_PieMenuSelection>* PieSelections)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.LoadPieMenu");

	UUI_PieMenu_C_LoadPieMenu_Params params;
	params.PieMenuName = PieMenuName;
	params.SelectionColor = SelectionColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PieSelections != nullptr)
		*PieSelections = params.PieSelections;
}


// Function UI_PieMenu.UI_PieMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PieMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.Construct");

	UUI_PieMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PieMenu.UI_PieMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PieMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.Tick");

	UUI_PieMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PieMenu.UI_PieMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PieMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.Destruct");

	UUI_PieMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PieMenu.UI_PieMenu_C.ExecuteUbergraph_UI_PieMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PieMenu_C::ExecuteUbergraph_UI_PieMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PieMenu.UI_PieMenu_C.ExecuteUbergraph_UI_PieMenu");

	UUI_PieMenu_C_ExecuteUbergraph_UI_PieMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
