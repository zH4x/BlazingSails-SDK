
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

// Function PlayerEffects.PlayerEffects_C.GetClosestSteeringWheel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleSteeringWheel_C* steeringwheel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::GetClosestSteeringWheel(class ABP_VehicleSteeringWheel_C** steeringwheel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.GetClosestSteeringWheel");

	UPlayerEffects_C_GetClosestSteeringWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (steeringwheel != nullptr)
		*steeringwheel = params.steeringwheel;
}


// Function PlayerEffects.PlayerEffects_C.GetClosestBowBarrelMount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BowBarrelMount_C*    BowBarrelMount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::GetClosestBowBarrelMount(class ABP_BowBarrelMount_C** BowBarrelMount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.GetClosestBowBarrelMount");

	UPlayerEffects_C_GetClosestBowBarrelMount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BowBarrelMount != nullptr)
		*BowBarrelMount = params.BowBarrelMount;
}


// Function PlayerEffects.PlayerEffects_C.GetClosestCapstan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CapstanSloop_C*      SwivelPostionRef               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::GetClosestCapstan(class ABP_CapstanSloop_C** SwivelPostionRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.GetClosestCapstan");

	UPlayerEffects_C_GetClosestCapstan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwivelPostionRef != nullptr)
		*SwivelPostionRef = params.SwivelPostionRef;
}


// Function PlayerEffects.PlayerEffects_C.GetClosestSwivelPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SwivelPosition_C*    SwivelPostionRef               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::GetClosestSwivelPosition(class ABP_SwivelPosition_C** SwivelPostionRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.GetClosestSwivelPosition");

	UPlayerEffects_C_GetClosestSwivelPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwivelPostionRef != nullptr)
		*SwivelPostionRef = params.SwivelPostionRef;
}


// Function PlayerEffects.PlayerEffects_C.GetClosestCannon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VehicleCannon_C*     ClosestCannonRef               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::GetClosestCannon(class ABP_VehicleCannon_C** ClosestCannonRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.GetClosestCannon");

	UPlayerEffects_C_GetClosestCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestCannonRef != nullptr)
		*ClosestCannonRef = params.ClosestCannonRef;
}


// Function PlayerEffects.PlayerEffects_C.ApplyDamageOverTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeBetweenDamage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageRepeats                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  PlayerEffectsWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::ApplyDamageOverTime(int DamageAmount, float TimeBetweenDamage, int DamageRepeats, class UParticleSystem* ParticleEffect, class ABP_Controller_C* Attacker, class UClass* PlayerEffectsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.ApplyDamageOverTime");

	UPlayerEffects_C_ApplyDamageOverTime_Params params;
	params.DamageAmount = DamageAmount;
	params.TimeBetweenDamage = TimeBetweenDamage;
	params.DamageRepeats = DamageRepeats;
	params.ParticleEffect = ParticleEffect;
	params.Attacker = Attacker;
	params.PlayerEffectsWidget = PlayerEffectsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.RestoreHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RestoreAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Consumed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::RestoreHealth(int RestoreAmount, bool* Consumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.RestoreHealth");

	UPlayerEffects_C_RestoreHealth_Params params;
	params.RestoreAmount = RestoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Consumed != nullptr)
		*Consumed = params.Consumed;
}


// Function PlayerEffects.PlayerEffects_C.S_UseItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Items>           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventory_C*            FromInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerEffects_C::S_UseItem(TEnumAsByte<E_Items> Item, class UInventory_C* FromInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.S_UseItem");

	UPlayerEffects_C_S_UseItem_Params params;
	params.Item = Item;
	params.FromInventory = FromInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.MC_HealEffect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UPlayerEffects_C::MC_HealEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.MC_HealEffect");

	UPlayerEffects_C_MC_HealEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.ReceiveTick");

	UPlayerEffects_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.OC_BottleHealEffect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UPlayerEffects_C::OC_BottleHealEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.OC_BottleHealEffect");

	UPlayerEffects_C_OC_BottleHealEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.RestoreHealthFromClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RestoreAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::RestoreHealthFromClient(int RestoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.RestoreHealthFromClient");

	UPlayerEffects_C_RestoreHealthFromClient_Params params;
	params.RestoreAmount = RestoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.S_RestoreHealth
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RestoreAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::S_RestoreHealth(int RestoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.S_RestoreHealth");

	UPlayerEffects_C_S_RestoreHealth_Params params;
	params.RestoreAmount = RestoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.OC_HealEffect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UPlayerEffects_C::OC_HealEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.OC_HealEffect");

	UPlayerEffects_C_OC_HealEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEffects.PlayerEffects_C.ExecuteUbergraph_PlayerEffects
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerEffects_C::ExecuteUbergraph_PlayerEffects(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEffects.PlayerEffects_C.ExecuteUbergraph_PlayerEffects");

	UPlayerEffects_C_ExecuteUbergraph_PlayerEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
