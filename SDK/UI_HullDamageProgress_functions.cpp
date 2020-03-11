
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

// Function UI_HullDamageProgress.UI_HullDamageProgress_C.GetInterpolationSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HullDamageProgress_C::GetInterpolationSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullDamageProgress.UI_HullDamageProgress_C.GetInterpolationSpeed");

	UUI_HullDamageProgress_C_GetInterpolationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function UI_HullDamageProgress.UI_HullDamageProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HullDamageProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullDamageProgress.UI_HullDamageProgress_C.Construct");

	UUI_HullDamageProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullDamageProgress.UI_HullDamageProgress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HullDamageProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullDamageProgress.UI_HullDamageProgress_C.Tick");

	UUI_HullDamageProgress_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HullDamageProgress.UI_HullDamageProgress_C.ExecuteUbergraph_UI_HullDamageProgress
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HullDamageProgress_C::ExecuteUbergraph_UI_HullDamageProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HullDamageProgress.UI_HullDamageProgress_C.ExecuteUbergraph_UI_HullDamageProgress");

	UUI_HullDamageProgress_C_ExecuteUbergraph_UI_HullDamageProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
