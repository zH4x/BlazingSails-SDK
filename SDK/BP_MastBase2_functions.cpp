
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

// Function BP_MastBase2.BP_MastBase2_C.OnRep_TeamID
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::OnRep_TeamID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.OnRep_TeamID");

	ABP_MastBase2_C_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.SetSailParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstanceRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::SetSailParameters(class UMaterialInstanceDynamic* MaterialInstanceRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.SetSailParameters");

	ABP_MastBase2_C_SetSailParameters_Params params;
	params.MaterialInstanceRef = MaterialInstanceRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.SailRolledUpMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::SailRolledUpMultiplier(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.SailRolledUpMultiplier");

	ABP_MastBase2_C_SailRolledUpMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BP_MastBase2.BP_MastBase2_C.GetSailAnglePercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::GetSailAnglePercentage(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.GetSailAnglePercentage");

	ABP_MastBase2_C_GetSailAnglePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BP_MastBase2.BP_MastBase2_C.OnRep_SailColor
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::OnRep_SailColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.OnRep_SailColor");

	ABP_MastBase2_C_OnRep_SailColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.AddRepairHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::AddRepairHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.AddRepairHit");

	ABP_MastBase2_C_AddRepairHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.DamageSail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::DamageSail(int damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.DamageSail");

	ABP_MastBase2_C_DamageSail_Params params;
	params.damage = damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.GetClosestWindActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::GetClosestWindActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.GetClosestWindActor");

	ABP_MastBase2_C_GetClosestWindActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.UserConstructionScript");

	ABP_MastBase2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MastBase2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.ReceiveBeginPlay");

	ABP_MastBase2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.ReceiveTick");

	ABP_MastBase2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::LoadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.LoadKeys");

	ABP_MastBase2_C_LoadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.Resetkeys
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::Resetkeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.Resetkeys");

	ABP_MastBase2_C_Resetkeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::RefreshKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.RefreshKeys");

	ABP_MastBase2_C_RefreshKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.RaiseSail
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::RaiseSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.RaiseSail");

	ABP_MastBase2_C_RaiseSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.LowerSail
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::LowerSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.LowerSail");

	ABP_MastBase2_C_LowerSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.StopRaiseSail
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::StopRaiseSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.StopRaiseSail");

	ABP_MastBase2_C_StopRaiseSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.StopLowerSail
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::StopLowerSail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.StopLowerSail");

	ABP_MastBase2_C_StopLowerSail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.TurnMastLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::TurnMastLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.TurnMastLeft");

	ABP_MastBase2_C_TurnMastLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.StopTurnMastLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::StopTurnMastLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.StopTurnMastLeft");

	ABP_MastBase2_C_StopTurnMastLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.TurnRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::TurnRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.TurnRight");

	ABP_MastBase2_C_TurnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.StopTurnRight
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::StopTurnRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.StopTurnRight");

	ABP_MastBase2_C_StopTurnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.S_UpdateMast
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SailAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::S_UpdateMast(float SailAmount, float RotationAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.S_UpdateMast");

	ABP_MastBase2_C_S_UpdateMast_Params params;
	params.SailAmount = SailAmount;
	params.RotationAmount = RotationAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.MC_DetractSails
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MastBase2_C::MC_DetractSails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.MC_DetractSails");

	ABP_MastBase2_C_MC_DetractSails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase2.BP_MastBase2_C.ExecuteUbergraph_BP_MastBase2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase2_C::ExecuteUbergraph_BP_MastBase2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase2.BP_MastBase2_C.ExecuteUbergraph_BP_MastBase2");

	ABP_MastBase2_C_ExecuteUbergraph_BP_MastBase2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
