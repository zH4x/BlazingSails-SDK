
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

// Function BP_WaterPP.BP_WaterPP_C.SwitchToCabin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromUnderwater                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPP_C::SwitchToCabin(bool FromUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.SwitchToCabin");

	ABP_WaterPP_C_SwitchToCabin_Params params;
	params.FromUnderwater = FromUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPP.BP_WaterPP_C.SwitchToAboveWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromUnderwater                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPP_C::SwitchToAboveWater(bool FromUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.SwitchToAboveWater");

	ABP_WaterPP_C_SwitchToAboveWater_Params params;
	params.FromUnderwater = FromUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPP.BP_WaterPP_C.SwitchToUnderwater
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterPP_C::SwitchToUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.SwitchToUnderwater");

	ABP_WaterPP_C_SwitchToUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPP.BP_WaterPP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterPP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.UserConstructionScript");

	ABP_WaterPP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPP.BP_WaterPP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WaterPP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.ReceiveBeginPlay");

	ABP_WaterPP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPP.BP_WaterPP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.ReceiveTick");

	ABP_WaterPP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaterPP.BP_WaterPP_C.ExecuteUbergraph_BP_WaterPP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterPP_C::ExecuteUbergraph_BP_WaterPP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterPP.BP_WaterPP_C.ExecuteUbergraph_BP_WaterPP");

	ABP_WaterPP_C_ExecuteUbergraph_BP_WaterPP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
