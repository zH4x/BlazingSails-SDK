
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

// Function UI_WaypointMarker.UI_WaypointMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WaypointMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointMarker.UI_WaypointMarker_C.Construct");

	UUI_WaypointMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointMarker.UI_WaypointMarker_C.ExecuteUbergraph_UI_WaypointMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointMarker_C::ExecuteUbergraph_UI_WaypointMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointMarker.UI_WaypointMarker_C.ExecuteUbergraph_UI_WaypointMarker");

	UUI_WaypointMarker_C_ExecuteUbergraph_UI_WaypointMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
