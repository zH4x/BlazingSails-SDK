
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

// Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomUISniperScope1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.Construct");

	UUI_CustomUISniperScope1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomUISniperScope1_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.Destruct");

	UUI_CustomUISniperScope1_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomUISniperScope1_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.Tick");

	UUI_CustomUISniperScope1_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.ExecuteUbergraph_UI_CustomUISniperScope1
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomUISniperScope1_C::ExecuteUbergraph_UI_CustomUISniperScope1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUISniperScope1.UI_CustomUISniperScope1_C.ExecuteUbergraph_UI_CustomUISniperScope1");

	UUI_CustomUISniperScope1_C_ExecuteUbergraph_UI_CustomUISniperScope1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
