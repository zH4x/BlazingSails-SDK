
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

// Function BP_MastBase.BP_MastBase_C.OnRep_SailColor
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::OnRep_SailColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.OnRep_SailColor");

	ABP_MastBase_C_OnRep_SailColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.AddRepairHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::AddRepairHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.AddRepairHit");

	ABP_MastBase_C_AddRepairHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.DamageSail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase_C::DamageSail(int damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.DamageSail");

	ABP_MastBase_C_DamageSail_Params params;
	params.damage = damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.GetSailPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BestSailAngle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase_C::GetSailPercentage(float BestSailAngle, float Difference, float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.GetSailPercentage");

	ABP_MastBase_C_GetSailPercentage_Params params;
	params.BestSailAngle = BestSailAngle;
	params.Difference = Difference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
}


// Function BP_MastBase.BP_MastBase_C.GetBestSailAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BestSailAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Difference                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase_C::GetBestSailAngle(float* BestSailAngle, float* Difference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.GetBestSailAngle");

	ABP_MastBase_C_GetBestSailAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BestSailAngle != nullptr)
		*BestSailAngle = params.BestSailAngle;
	if (Difference != nullptr)
		*Difference = params.Difference;
}


// Function BP_MastBase.BP_MastBase_C.GetClosestWindActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::GetClosestWindActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.GetClosestWindActor");

	ABP_MastBase_C_GetClosestWindActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.UserConstructionScript");

	ABP_MastBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MastBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.ReceiveBeginPlay");

	ABP_MastBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.ReceiveTick");

	ABP_MastBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_SailUpPressed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_SailUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_SailUpPressed");

	ABP_MastBase_C_S_SailUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_SailDownPressed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_SailDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_SailDownPressed");

	ABP_MastBase_C_S_SailDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_SailDownReleased
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_SailDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_SailDownReleased");

	ABP_MastBase_C_S_SailDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_SailUpReleased
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_SailUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_SailUpReleased");

	ABP_MastBase_C_S_SailUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_RotateLeftPressed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_RotateLeftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_RotateLeftPressed");

	ABP_MastBase_C_S_RotateLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_RotateLeftReleased
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_RotateLeftReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_RotateLeftReleased");

	ABP_MastBase_C_S_RotateLeftReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_RotateRightPressed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_RotateRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_RotateRightPressed");

	ABP_MastBase_C_S_RotateRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.S_RotateRightReleased
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::S_RotateRightReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.S_RotateRightReleased");

	ABP_MastBase_C_S_RotateRightReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.HighLight
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::HighLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.HighLight");

	ABP_MastBase_C_HighLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.NoHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::NoHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.NoHighlight");

	ABP_MastBase_C_NoHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.MC_SailRotation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase_C::MC_SailRotation(int Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.MC_SailRotation");

	ABP_MastBase_C_MC_SailRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.LoadKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::LoadKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.LoadKeys");

	ABP_MastBase_C_LoadKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.Resetkeys
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::Resetkeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.Resetkeys");

	ABP_MastBase_C_Resetkeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_MastBase_C::RefreshKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.RefreshKeys");

	ABP_MastBase_C_RefreshKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MastBase.BP_MastBase_C.ExecuteUbergraph_BP_MastBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MastBase_C::ExecuteUbergraph_BP_MastBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MastBase.BP_MastBase_C.ExecuteUbergraph_BP_MastBase");

	ABP_MastBase_C_ExecuteUbergraph_BP_MastBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
