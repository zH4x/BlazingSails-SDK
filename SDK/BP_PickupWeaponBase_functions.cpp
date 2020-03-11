
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

// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupWeaponBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.UserConstructionScript");

	ABP_PickupWeaponBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupWeaponBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.ReceiveBeginPlay");

	ABP_PickupWeaponBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupWeaponBase_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.S_Activate");

	ABP_PickupWeaponBase_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupWeaponBase_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.Activate");

	ABP_PickupWeaponBase_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.ExecuteUbergraph_BP_PickupWeaponBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupWeaponBase_C::ExecuteUbergraph_BP_PickupWeaponBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBase.BP_PickupWeaponBase_C.ExecuteUbergraph_BP_PickupWeaponBase");

	ABP_PickupWeaponBase_C_ExecuteUbergraph_BP_PickupWeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
