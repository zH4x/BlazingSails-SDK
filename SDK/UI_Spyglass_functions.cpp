
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

// Function UI_Spyglass.UI_Spyglass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Spyglass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Spyglass.UI_Spyglass_C.Construct");

	UUI_Spyglass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Spyglass.UI_Spyglass_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Spyglass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Spyglass.UI_Spyglass_C.Tick");

	UUI_Spyglass_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Spyglass.UI_Spyglass_C.CloseSpyglass
// (BlueprintCallable, BlueprintEvent)

void UUI_Spyglass_C::CloseSpyglass()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Spyglass.UI_Spyglass_C.CloseSpyglass");

	UUI_Spyglass_C_CloseSpyglass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Spyglass.UI_Spyglass_C.ExecuteUbergraph_UI_Spyglass
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Spyglass_C::ExecuteUbergraph_UI_Spyglass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Spyglass.UI_Spyglass_C.ExecuteUbergraph_UI_Spyglass");

	UUI_Spyglass_C_ExecuteUbergraph_UI_Spyglass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
