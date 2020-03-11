
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

// Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BoatMeshBrigantine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.UserConstructionScript");

	ABP_BoatMeshBrigantine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoatMeshBrigantine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.ReceiveBeginPlay");

	ABP_BoatMeshBrigantine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatMeshBrigantine_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.ReceiveTick");

	ABP_BoatMeshBrigantine_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.CheckForAutoStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BoatMeshBrigantine_C::CheckForAutoStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.CheckForAutoStop");

	ABP_BoatMeshBrigantine_C_CheckForAutoStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.refresh
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatMeshBrigantine_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.refresh");

	ABP_BoatMeshBrigantine_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.ExecuteUbergraph_BP_BoatMeshBrigantine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatMeshBrigantine_C::ExecuteUbergraph_BP_BoatMeshBrigantine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatMeshBrigantine.BP_BoatMeshBrigantine_C.ExecuteUbergraph_BP_BoatMeshBrigantine");

	ABP_BoatMeshBrigantine_C_ExecuteUbergraph_BP_BoatMeshBrigantine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
