
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

// Function UI_PlayerKnife.UI_PlayerKnife_C.SetColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_PlayerKnife_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerKnife.UI_PlayerKnife_C.SetColor");

	UUI_PlayerKnife_C_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PlayerKnife.UI_PlayerKnife_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PlayerKnife_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerKnife.UI_PlayerKnife_C.Construct");

	UUI_PlayerKnife_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerKnife.UI_PlayerKnife_C.ActivateSword
// (BlueprintCallable, BlueprintEvent)

void UUI_PlayerKnife_C::ActivateSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerKnife.UI_PlayerKnife_C.ActivateSword");

	UUI_PlayerKnife_C_ActivateSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerKnife.UI_PlayerKnife_C.SetSwordColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerKnife_C::SetSwordColor(int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerKnife.UI_PlayerKnife_C.SetSwordColor");

	UUI_PlayerKnife_C_SetSwordColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerKnife.UI_PlayerKnife_C.ExecuteUbergraph_UI_PlayerKnife
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerKnife_C::ExecuteUbergraph_UI_PlayerKnife(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerKnife.UI_PlayerKnife_C.ExecuteUbergraph_UI_PlayerKnife");

	UUI_PlayerKnife_C_ExecuteUbergraph_UI_PlayerKnife_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
