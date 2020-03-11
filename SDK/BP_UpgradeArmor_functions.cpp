
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

// Function BP_UpgradeArmor.BP_UpgradeArmor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UpgradeArmor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpgradeArmor.BP_UpgradeArmor_C.UserConstructionScript");

	ABP_UpgradeArmor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UpgradeArmor.BP_UpgradeArmor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UpgradeArmor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpgradeArmor.BP_UpgradeArmor_C.ReceiveTick");

	ABP_UpgradeArmor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UpgradeArmor.BP_UpgradeArmor_C.ExecuteUbergraph_BP_UpgradeArmor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UpgradeArmor_C::ExecuteUbergraph_BP_UpgradeArmor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpgradeArmor.BP_UpgradeArmor_C.ExecuteUbergraph_BP_UpgradeArmor");

	ABP_UpgradeArmor_C_ExecuteUbergraph_BP_UpgradeArmor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
