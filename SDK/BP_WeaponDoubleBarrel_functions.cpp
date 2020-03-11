
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

// Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponDoubleBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.UserConstructionScript");

	ABP_WeaponDoubleBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponDoubleBarrel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.ReceiveTick");

	ABP_WeaponDoubleBarrel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.ExecuteUbergraph_BP_WeaponDoubleBarrel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponDoubleBarrel_C::ExecuteUbergraph_BP_WeaponDoubleBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDoubleBarrel.BP_WeaponDoubleBarrel_C.ExecuteUbergraph_BP_WeaponDoubleBarrel");

	ABP_WeaponDoubleBarrel_C_ExecuteUbergraph_BP_WeaponDoubleBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
