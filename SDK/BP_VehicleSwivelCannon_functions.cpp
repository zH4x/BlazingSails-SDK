
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

// Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleSwivelCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.UserConstructionScript");

	ABP_VehicleSwivelCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleSwivelCannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.ReceiveBeginPlay");

	ABP_VehicleSwivelCannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.ExecuteUbergraph_BP_VehicleSwivelCannon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleSwivelCannon_C::ExecuteUbergraph_BP_VehicleSwivelCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C.ExecuteUbergraph_BP_VehicleSwivelCannon");

	ABP_VehicleSwivelCannon_C_ExecuteUbergraph_BP_VehicleSwivelCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
