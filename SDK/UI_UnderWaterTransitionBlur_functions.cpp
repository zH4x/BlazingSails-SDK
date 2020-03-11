
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

// Function UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_UnderWaterTransitionBlur_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C.Construct");

	UUI_UnderWaterTransitionBlur_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C.ExecuteUbergraph_UI_UnderWaterTransitionBlur
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_UnderWaterTransitionBlur_C::ExecuteUbergraph_UI_UnderWaterTransitionBlur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UnderWaterTransitionBlur.UI_UnderWaterTransitionBlur_C.ExecuteUbergraph_UI_UnderWaterTransitionBlur");

	UUI_UnderWaterTransitionBlur_C_ExecuteUbergraph_UI_UnderWaterTransitionBlur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
