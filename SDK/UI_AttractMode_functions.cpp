
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

// Function UI_AttractMode.UI_AttractMode_C.EnableAttractMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_AttractMode_C::EnableAttractMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.EnableAttractMode");

	UUI_AttractMode_C_EnableAttractMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AttractMode.UI_AttractMode_C.SetAttractModeEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AttractMode_C::SetAttractModeEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.SetAttractModeEnabled");

	UUI_AttractMode_C_SetAttractModeEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AttractMode.UI_AttractMode_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AttractMode_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.Tick");

	UUI_AttractMode_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AttractMode.UI_AttractMode_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_AttractMode_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.OnInitialized");

	UUI_AttractMode_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AttractMode.UI_AttractMode_C.ExecuteUbergraph_UI_AttractMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_AttractMode_C::ExecuteUbergraph_UI_AttractMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.ExecuteUbergraph_UI_AttractMode");

	UUI_AttractMode_C_ExecuteUbergraph_UI_AttractMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AttractMode.UI_AttractMode_C.OnDisabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_AttractMode_C::OnDisabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.OnDisabled__DelegateSignature");

	UUI_AttractMode_C_OnDisabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_AttractMode.UI_AttractMode_C.OnEnabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_AttractMode_C::OnEnabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AttractMode.UI_AttractMode_C.OnEnabled__DelegateSignature");

	UUI_AttractMode_C_OnEnabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
