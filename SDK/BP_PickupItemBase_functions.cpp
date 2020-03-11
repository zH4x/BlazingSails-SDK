
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

// Function BP_PickupItemBase.BP_PickupItemBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupItemBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupItemBase.BP_PickupItemBase_C.UserConstructionScript");

	ABP_PickupItemBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupItemBase.BP_PickupItemBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupItemBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupItemBase.BP_PickupItemBase_C.ReceiveBeginPlay");

	ABP_PickupItemBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupItemBase.BP_PickupItemBase_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupItemBase_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupItemBase.BP_PickupItemBase_C.S_Activate");

	ABP_PickupItemBase_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupItemBase.BP_PickupItemBase_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         LocalCharacterRef              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupItemBase_C::Activate(class ABP_Character_C* LocalCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupItemBase.BP_PickupItemBase_C.Activate");

	ABP_PickupItemBase_C_Activate_Params params;
	params.LocalCharacterRef = LocalCharacterRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupItemBase.BP_PickupItemBase_C.ExecuteUbergraph_BP_PickupItemBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupItemBase_C::ExecuteUbergraph_BP_PickupItemBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupItemBase.BP_PickupItemBase_C.ExecuteUbergraph_BP_PickupItemBase");

	ABP_PickupItemBase_C_ExecuteUbergraph_BP_PickupItemBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
