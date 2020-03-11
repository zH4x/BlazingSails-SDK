
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

// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmountColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_QuickAccessAmount_C::SetAmountColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmountColor");

	UUI_QuickAccessAmount_C_SetAmountColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_QuickAccessAmount_C::SetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessAmount.UI_QuickAccessAmount_C.SetAmount");

	UUI_QuickAccessAmount_C_SetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
