
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

// Function UI_ShipInfo.UI_ShipInfo_C.SetShipHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_ShipInfo_C::SetShipHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipInfo.UI_ShipInfo_C.SetShipHealth");

	UUI_ShipInfo_C_SetShipHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ShipInfo.UI_ShipInfo_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ShipInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipInfo.UI_ShipInfo_C.Tick");

	UUI_ShipInfo_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShipInfo.UI_ShipInfo_C.RefreshShipInfo
// (BlueprintCallable, BlueprintEvent)

void UUI_ShipInfo_C::RefreshShipInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipInfo.UI_ShipInfo_C.RefreshShipInfo");

	UUI_ShipInfo_C_RefreshShipInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShipInfo.UI_ShipInfo_C.ExecuteUbergraph_UI_ShipInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ShipInfo_C::ExecuteUbergraph_UI_ShipInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShipInfo.UI_ShipInfo_C.ExecuteUbergraph_UI_ShipInfo");

	UUI_ShipInfo_C_ExecuteUbergraph_UI_ShipInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
