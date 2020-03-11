
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

// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ArmorPlateSlot_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.SetActive");

	ABP_ArmorPlateSlot_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ArmorPlateSlot_C::damage(int DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.damage");

	ABP_ArmorPlateSlot_C_damage_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.OnRep_Active
// (BlueprintCallable, BlueprintEvent)

void ABP_ArmorPlateSlot_C::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.OnRep_Active");

	ABP_ArmorPlateSlot_C_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ArmorPlateSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.UserConstructionScript");

	ABP_ArmorPlateSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ArmorPlateSlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.ReceiveBeginPlay");

	ABP_ArmorPlateSlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.HighLight
// (BlueprintCallable, BlueprintEvent)

void ABP_ArmorPlateSlot_C::HighLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.HighLight");

	ABP_ArmorPlateSlot_C_HighLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.NoHighlight
// (BlueprintCallable, BlueprintEvent)

void ABP_ArmorPlateSlot_C::NoHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.NoHighlight");

	ABP_ArmorPlateSlot_C_NoHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.ExecuteUbergraph_BP_ArmorPlateSlot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ArmorPlateSlot_C::ExecuteUbergraph_BP_ArmorPlateSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArmorPlateSlot.BP_ArmorPlateSlot_C.ExecuteUbergraph_BP_ArmorPlateSlot");

	ABP_ArmorPlateSlot_C_ExecuteUbergraph_BP_ArmorPlateSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
