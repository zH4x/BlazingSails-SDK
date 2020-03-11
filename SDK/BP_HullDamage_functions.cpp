
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

// Function BP_HullDamage.BP_HullDamage_C.UpdateDamagePointSize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::UpdateDamagePointSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.UpdateDamagePointSize");

	ABP_HullDamage_C_UpdateDamagePointSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.OnRep_DamagePointSize
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::OnRep_DamagePointSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.OnRep_DamagePointSize");

	ABP_HullDamage_C_OnRep_DamagePointSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.OnRep_RepairHitAmount
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::OnRep_RepairHitAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.OnRep_RepairHitAmount");

	ABP_HullDamage_C_OnRep_RepairHitAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.OnRep_DamagePointUnderHullWater
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::OnRep_DamagePointUnderHullWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.OnRep_DamagePointUnderHullWater");

	ABP_HullDamage_C_OnRep_DamagePointUnderHullWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.AddRepairHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::AddRepairHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.AddRepairHit");

	ABP_HullDamage_C_AddRepairHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.OnRep_WaterDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::OnRep_WaterDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.OnRep_WaterDamage");

	ABP_HullDamage_C_OnRep_WaterDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.UserConstructionScript");

	ABP_HullDamage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HullDamage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.ReceiveBeginPlay");

	ABP_HullDamage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.ReceiveTick");

	ABP_HullDamage_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.HighlightHullDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ENoughWood                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::HighlightHullDamage(bool ENoughWood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.HighlightHullDamage");

	ABP_HullDamage_C_HighlightHullDamage_Params params;
	params.ENoughWood = ENoughWood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.NoHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::NoHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.NoHighlight");

	ABP_HullDamage_C_NoHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.CheckForDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::CheckForDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.CheckForDestroy");

	ABP_HullDamage_C_CheckForDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.MC_DamageEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NoSound                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::MC_DamageEffects(bool NoSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.MC_DamageEffects");

	ABP_HullDamage_C_MC_DamageEffects_Params params;
	params.NoSound = NoSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.S_RepairDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::S_RepairDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.S_RepairDamage");

	ABP_HullDamage_C_S_RepairDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.MC_HammerRepairHit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::MC_HammerRepairHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.MC_HammerRepairHit");

	ABP_HullDamage_C_MC_HammerRepairHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.DisableDamagePointAfterDelay
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::DisableDamagePointAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.DisableDamagePointAfterDelay");

	ABP_HullDamage_C_DisableDamagePointAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ResetVisualCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_HullDamage_C::ResetVisualCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.ResetVisualCheck");

	ABP_HullDamage_C_ResetVisualCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HullDamage_C::ExecuteUbergraph_BP_HullDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HullDamage.BP_HullDamage_C.ExecuteUbergraph_BP_HullDamage");

	ABP_HullDamage_C_ExecuteUbergraph_BP_HullDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
