
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

// Function BP_CapstanSloop.BP_CapstanSloop_C.OnRep_CapstanControllers
// (BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::OnRep_CapstanControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.OnRep_CapstanControllers");

	ABP_CapstanSloop_C_OnRep_CapstanControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.UpgradeCapstan
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::UpgradeCapstan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.UpgradeCapstan");

	ABP_CapstanSloop_C_UpgradeCapstan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.SetCapstanLevelAppearance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::SetCapstanLevelAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.SetCapstanLevelAppearance");

	ABP_CapstanSloop_C_SetCapstanLevelAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.OnRep_Level
// (BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::OnRep_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.OnRep_Level");

	ABP_CapstanSloop_C_OnRep_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.OnRep_Active
// (BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.OnRep_Active");

	ABP_CapstanSloop_C_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.SetCapstanControllers
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::SetCapstanControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.SetCapstanControllers");

	ABP_CapstanSloop_C_SetCapstanControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.UserConstructionScript");

	ABP_CapstanSloop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CapstanSloop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.ReceiveBeginPlay");

	ABP_CapstanSloop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CapstanSloop_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.ReceiveTick");

	ABP_CapstanSloop_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.RespawnCrewMembers
// (BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::RespawnCrewMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.RespawnCrewMembers");

	ABP_CapstanSloop_C_RespawnCrewMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.MC_SetRotation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CapstanSloop_C::MC_SetRotation(float Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.MC_SetRotation");

	ABP_CapstanSloop_C_MC_SetRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.MC_SetBeingTurned
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeingTurned                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CapstanSloop_C::MC_SetBeingTurned(bool BeingTurned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.MC_SetBeingTurned");

	ABP_CapstanSloop_C_MC_SetBeingTurned_Params params;
	params.BeingTurned = BeingTurned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.ResetCapstan
// (BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::ResetCapstan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.ResetCapstan");

	ABP_CapstanSloop_C_ResetCapstan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.MC_UpgradeCapstan
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_CapstanSloop_C::MC_UpgradeCapstan()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.MC_UpgradeCapstan");

	ABP_CapstanSloop_C_MC_UpgradeCapstan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CapstanSloop.BP_CapstanSloop_C.ExecuteUbergraph_BP_CapstanSloop
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CapstanSloop_C::ExecuteUbergraph_BP_CapstanSloop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CapstanSloop.BP_CapstanSloop_C.ExecuteUbergraph_BP_CapstanSloop");

	ABP_CapstanSloop_C_ExecuteUbergraph_BP_CapstanSloop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
