
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

// Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnSelectionCam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.UserConstructionScript");

	ABP_SpawnSelectionCam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpawnSelectionCam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.ReceiveBeginPlay");

	ABP_SpawnSelectionCam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnSelectionCam_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.ReceiveTick");

	ABP_SpawnSelectionCam_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.ExecuteUbergraph_BP_SpawnSelectionCam
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnSelectionCam_C::ExecuteUbergraph_BP_SpawnSelectionCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnSelectionCam.BP_SpawnSelectionCam_C.ExecuteUbergraph_BP_SpawnSelectionCam");

	ABP_SpawnSelectionCam_C_ExecuteUbergraph_BP_SpawnSelectionCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
