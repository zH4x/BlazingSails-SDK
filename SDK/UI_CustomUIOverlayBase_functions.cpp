
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

// Function UI_CustomUIOverlayBase.UI_CustomUIOverlayBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomUIOverlayBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUIOverlayBase.UI_CustomUIOverlayBase_C.Tick");

	UUI_CustomUIOverlayBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomUIOverlayBase.UI_CustomUIOverlayBase_C.ExecuteUbergraph_UI_CustomUIOverlayBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomUIOverlayBase_C::ExecuteUbergraph_UI_CustomUIOverlayBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomUIOverlayBase.UI_CustomUIOverlayBase_C.ExecuteUbergraph_UI_CustomUIOverlayBase");

	UUI_CustomUIOverlayBase_C_ExecuteUbergraph_UI_CustomUIOverlayBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
