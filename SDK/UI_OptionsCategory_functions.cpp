
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

// Function UI_OptionsCategory.UI_OptionsCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OptionsCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsCategory.UI_OptionsCategory_C.Construct");

	UUI_OptionsCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsCategory.UI_OptionsCategory_C.ExecuteUbergraph_UI_OptionsCategory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsCategory_C::ExecuteUbergraph_UI_OptionsCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsCategory.UI_OptionsCategory_C.ExecuteUbergraph_UI_OptionsCategory");

	UUI_OptionsCategory_C_ExecuteUbergraph_UI_OptionsCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
