
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

// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.OnRep_Holstered
// (BlueprintCallable, BlueprintEvent)

void ABP_DualLeftWeaponBase_C::OnRep_Holstered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.OnRep_Holstered");

	ABP_DualLeftWeaponBase_C_OnRep_Holstered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DualLeftWeaponBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.UserConstructionScript");

	ABP_DualLeftWeaponBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.MC_Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DualLeftWeaponBase_C::MC_Effects(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.MC_Effects");

	ABP_DualLeftWeaponBase_C_MC_Effects_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.S_Effects
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DualLeftWeaponBase_C::S_Effects(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.S_Effects");

	ABP_DualLeftWeaponBase_C_S_Effects_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.Effects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Character_C*         CharacterRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DualLeftWeaponBase_C::Effects(const struct FVector& Direction, class ABP_Character_C* CharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.Effects");

	ABP_DualLeftWeaponBase_C_Effects_Params params;
	params.Direction = Direction;
	params.CharacterRef = CharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.ExecuteUbergraph_BP_DualLeftWeaponBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DualLeftWeaponBase_C::ExecuteUbergraph_BP_DualLeftWeaponBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DualLeftWeaponBase.BP_DualLeftWeaponBase_C.ExecuteUbergraph_BP_DualLeftWeaponBase");

	ABP_DualLeftWeaponBase_C_ExecuteUbergraph_BP_DualLeftWeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
