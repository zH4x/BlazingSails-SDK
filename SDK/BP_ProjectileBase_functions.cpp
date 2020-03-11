
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

// Function BP_ProjectileBase.BP_ProjectileBase_C.DamageWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_WeaponBase_C*        WeaponRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::DamageWeapon(class ABP_WeaponBase_C* WeaponRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.DamageWeapon");

	ABP_ProjectileBase_C_DamageWeapon_Params params;
	params.WeaponRef = WeaponRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.CalculateRadius
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::CalculateRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.CalculateRadius");

	ABP_ProjectileBase_C_CalculateRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.CalculateDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::CalculateDamage(int* damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.CalculateDamage");

	ABP_ProjectileBase_C_CalculateDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (damage != nullptr)
		*damage = params.damage;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SpawnAOE
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AOEActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_AOEBase_C*           AOEActorRef                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::SpawnAOE(class UClass* AOEActor, class ABP_AOEBase_C** AOEActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.SpawnAOE");

	ABP_ProjectileBase_C_SpawnAOE_Params params;
	params.AOEActor = AOEActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AOEActorRef != nullptr)
		*AOEActorRef = params.AOEActorRef;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.DamagePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::DamagePlayer(class ABP_Character_C* HitCharacter, bool headshot, const struct FVector& DamageLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.DamagePlayer");

	ABP_ProjectileBase_C_DamagePlayer_Params params;
	params.HitCharacter = HitCharacter;
	params.headshot = headshot;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.UserConstructionScript");

	ABP_ProjectileBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveBeginPlay");

	ABP_ProjectileBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveTick");

	ABP_ProjectileBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.PostHit");

	ABP_ProjectileBase_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.WaterSplash
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::WaterSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.WaterSplash");

	ABP_ProjectileBase_C_WaterSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveActorBeginOverlap");

	ABP_ProjectileBase_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveActorEndOverlap");

	ABP_ProjectileBase_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Init
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.Init");

	ABP_ProjectileBase_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.PlayerHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         HitPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::PlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.PlayerHit");

	ABP_ProjectileBase_C_PlayerHit_Params params;
	params.HitPlayer = HitPlayer;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ProjectileDeath
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::ProjectileDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ProjectileDeath");

	ABP_ProjectileBase_C_ProjectileDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ForceKillProjectile
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::ForceKillProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ForceKillProjectile");

	ABP_ProjectileBase_C_ForceKillProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ForceRe-Deactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::ForceRe_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ForceRe-Deactivate");

	ABP_ProjectileBase_C_ForceRe_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ForceCheckIfInShip
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBase_C::ForceCheckIfInShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ForceCheckIfInShip");

	ABP_ProjectileBase_C_ForceCheckIfInShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ExecuteUbergraph_BP_ProjectileBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBase_C::ExecuteUbergraph_BP_ProjectileBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBase.BP_ProjectileBase_C.ExecuteUbergraph_BP_ProjectileBase");

	ABP_ProjectileBase_C_ExecuteUbergraph_BP_ProjectileBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
