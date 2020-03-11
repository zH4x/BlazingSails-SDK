
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

// Function BP_MainPP.BP_MainPP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainPP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainPP.BP_MainPP_C.UserConstructionScript");

	ABP_MainPP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainPP.BP_MainPP_C.AimDOF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainPP_C::AimDOF(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainPP.BP_MainPP_C.AimDOF");

	ABP_MainPP_C_AimDOF_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainPP.BP_MainPP_C.SetDOFFocusRange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainPP_C::SetDOFFocusRange(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainPP.BP_MainPP_C.SetDOFFocusRange");

	ABP_MainPP_C_SetDOFFocusRange_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainPP.BP_MainPP_C.SetScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseDOF                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainPP_C::SetScopePP(bool Enable, bool UseDOF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainPP.BP_MainPP_C.SetScopePP");

	ABP_MainPP_C_SetScopePP_Params params;
	params.Enable = Enable;
	params.UseDOF = UseDOF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainPP.BP_MainPP_C.ExecuteUbergraph_BP_MainPP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainPP_C::ExecuteUbergraph_BP_MainPP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainPP.BP_MainPP_C.ExecuteUbergraph_BP_MainPP");

	ABP_MainPP_C_ExecuteUbergraph_BP_MainPP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
