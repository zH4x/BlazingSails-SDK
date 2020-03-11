
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

// Function BP_WaypointMarker.BP_WaypointMarker_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_WaypointMarker_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMarker.BP_WaypointMarker_C.OnRep_TeamID");

	ABP_WaypointMarker_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointMarker.BP_WaypointMarker_C.OnRep_TeamPlayerColor
// (BlueprintCallable, BlueprintEvent)

void ABP_WaypointMarker_C::OnRep_TeamPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMarker.BP_WaypointMarker_C.OnRep_TeamPlayerColor");

	ABP_WaypointMarker_C_OnRep_TeamPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointMarker.BP_WaypointMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaypointMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMarker.BP_WaypointMarker_C.UserConstructionScript");

	ABP_WaypointMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointMarker.BP_WaypointMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WaypointMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMarker.BP_WaypointMarker_C.ReceiveBeginPlay");

	ABP_WaypointMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointMarker.BP_WaypointMarker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaypointMarker_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMarker.BP_WaypointMarker_C.ReceiveTick");

	ABP_WaypointMarker_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointMarker.BP_WaypointMarker_C.ExecuteUbergraph_BP_WaypointMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaypointMarker_C::ExecuteUbergraph_BP_WaypointMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointMarker.BP_WaypointMarker_C.ExecuteUbergraph_BP_WaypointMarker");

	ABP_WaypointMarker_C_ExecuteUbergraph_BP_WaypointMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
