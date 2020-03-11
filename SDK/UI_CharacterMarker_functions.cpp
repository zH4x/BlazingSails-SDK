
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

// Function UI_CharacterMarker.UI_CharacterMarker_C.SetSHowIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CharacterMarker_C::SetSHowIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterMarker.UI_CharacterMarker_C.SetSHowIcon");

	UUI_CharacterMarker_C_SetSHowIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterMarker.UI_CharacterMarker_C.SetColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_CharacterMarker_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterMarker.UI_CharacterMarker_C.SetColor");

	UUI_CharacterMarker_C_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterMarker.UI_CharacterMarker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterMarker.UI_CharacterMarker_C.Tick");

	UUI_CharacterMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterMarker.UI_CharacterMarker_C.ExecuteUbergraph_UI_CharacterMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterMarker_C::ExecuteUbergraph_UI_CharacterMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterMarker.UI_CharacterMarker_C.ExecuteUbergraph_UI_CharacterMarker");

	UUI_CharacterMarker_C_ExecuteUbergraph_UI_CharacterMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
