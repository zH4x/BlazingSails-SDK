
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

// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ContainerDestroyedShipChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.UserConstructionScript");

	ABP_ContainerDestroyedShipChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ContainerDestroyedShipChest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ReceiveBeginPlay");

	ABP_ContainerDestroyedShipChest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContainerDestroyedShipChest_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ReceiveTick");

	ABP_ContainerDestroyedShipChest_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ExecuteUbergraph_BP_ContainerDestroyedShipChest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContainerDestroyedShipChest_C::ExecuteUbergraph_BP_ContainerDestroyedShipChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerDestroyedShipChest.BP_ContainerDestroyedShipChest_C.ExecuteUbergraph_BP_ContainerDestroyedShipChest");

	ABP_ContainerDestroyedShipChest_C_ExecuteUbergraph_BP_ContainerDestroyedShipChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
