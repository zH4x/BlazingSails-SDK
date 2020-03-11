
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

// Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VehicleWidgetBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.Tick");

	UUI_VehicleWidgetBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.ExecuteUbergraph_UI_VehicleWidgetBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VehicleWidgetBase_C::ExecuteUbergraph_UI_VehicleWidgetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleWidgetBase.UI_VehicleWidgetBase_C.ExecuteUbergraph_UI_VehicleWidgetBase");

	UUI_VehicleWidgetBase_C_ExecuteUbergraph_UI_VehicleWidgetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
