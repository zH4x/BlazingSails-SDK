
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

// Function UI_Cannon.UI_Cannon_C.ShowCannonBlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowCannonBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowCannonBlocked");

	UUI_Cannon_C_ShowCannonBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.GetReloadInterpolationSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Cannon_C::GetReloadInterpolationSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.GetReloadInterpolationSpeed");

	UUI_Cannon_C_GetReloadInterpolationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function UI_Cannon.UI_Cannon_C.ShowHoldText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowHoldText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowHoldText");

	UUI_Cannon_C_ShowHoldText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.SetInfoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Cannon_C::SetInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.SetInfoText");

	UUI_Cannon_C_SetInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.SetInfoBgColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Cannon_C::SetInfoBgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.SetInfoBgColor");

	UUI_Cannon_C_SetInfoBgColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowArrows
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowArrows");

	UUI_Cannon_C_ShowArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowNoAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowNoAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowNoAmmo");

	UUI_Cannon_C_ShowNoAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowAmmoType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowAmmoType");

	UUI_Cannon_C_ShowAmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.SetAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Cannon_C::SetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.SetAmount");

	UUI_Cannon_C_SetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowChangeIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowChangeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowChangeIcon");

	UUI_Cannon_C_ShowChangeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.SetBgColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_Cannon_C::SetBgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.SetBgColor");

	UUI_Cannon_C_SetBgColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowLoadedAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowLoadedAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowLoadedAmmo");

	UUI_Cannon_C_ShowLoadedAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.SetLoadedAmmoIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Cannon_C::SetLoadedAmmoIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.SetLoadedAmmoIcon");

	UUI_Cannon_C_SetLoadedAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.SetAmmoType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Cannon_C::SetAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.SetAmmoType");

	UUI_Cannon_C_SetAmmoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowReloadInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowReloadInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowReloadInfo");

	UUI_Cannon_C_ShowReloadInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.ShowLoadingBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Cannon_C::ShowLoadingBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ShowLoadingBar");

	UUI_Cannon_C_ShowLoadingBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Cannon.UI_Cannon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cannon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.PreConstruct");

	UUI_Cannon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cannon.UI_Cannon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Cannon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.Construct");

	UUI_Cannon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cannon.UI_Cannon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cannon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.Tick");

	UUI_Cannon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Cannon.UI_Cannon_C.ExecuteUbergraph_UI_Cannon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Cannon_C::ExecuteUbergraph_UI_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cannon.UI_Cannon_C.ExecuteUbergraph_UI_Cannon");

	UUI_Cannon_C_ExecuteUbergraph_UI_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
