
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

// Function UI_SpawnSelection.UI_SpawnSelection_C.SetSelectedClusterText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnSelection_C::SetSelectedClusterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.SetSelectedClusterText");

	UUI_SpawnSelection_C_SetSelectedClusterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnSelection.UI_SpawnSelection_C.SetSpawnSelectionTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnSelection_C::SetSpawnSelectionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.SetSpawnSelectionTime");

	UUI_SpawnSelection_C_SetSpawnSelectionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnSelection.UI_SpawnSelection_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnSelection_C::BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSelection_C_BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSelection.UI_SpawnSelection_C.refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_SpawnSelection_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.refresh");

	UUI_SpawnSelection_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSelection.UI_SpawnSelection_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSelection_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.Tick");

	UUI_SpawnSelection_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSelection.UI_SpawnSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpawnSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.Construct");

	UUI_SpawnSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSelection.UI_SpawnSelection_C.ExecuteUbergraph_UI_SpawnSelection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSelection_C::ExecuteUbergraph_UI_SpawnSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSelection.UI_SpawnSelection_C.ExecuteUbergraph_UI_SpawnSelection");

	UUI_SpawnSelection_C_ExecuteUbergraph_UI_SpawnSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
