
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

// Function BP_Mannequin.BP_Mannequin_C.RefreshVisualCosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Customisation       ST_Customisation               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Mannequin_C::RefreshVisualCosmetics(const struct FST_Customisation& ST_Customisation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.RefreshVisualCosmetics");

	ABP_Mannequin_C_RefreshVisualCosmetics_Params params;
	params.ST_Customisation = ST_Customisation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.UpdateCosmetics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::UpdateCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.UpdateCosmetics");

	ABP_Mannequin_C_UpdateCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.InitLocal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::InitLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.InitLocal");

	ABP_Mannequin_C_InitLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.SetCosmetics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Customisation       ST_Customisation               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Mannequin_C::SetCosmetics(const struct FST_Customisation& ST_Customisation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.SetCosmetics");

	ABP_Mannequin_C_SetCosmetics_Params params;
	params.ST_Customisation = ST_Customisation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.UserConstructionScript");

	ABP_Mannequin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ReceiveTick");

	ABP_Mannequin_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ResetClothing
// (BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::ResetClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ResetClothing");

	ABP_Mannequin_C_ResetClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.SetSkinColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkinColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::SetSkinColor(float SkinColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.SetSkinColor");

	ABP_Mannequin_C_SetSkinColor_Params params;
	params.SkinColor = SkinColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.SetScar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Scar                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::SetScar(int Scar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.SetScar");

	ABP_Mannequin_C_SetScar_Params params;
	params.Scar = Scar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ExecuteUbergraph_BP_Mannequin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::ExecuteUbergraph_BP_Mannequin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ExecuteUbergraph_BP_Mannequin");

	ABP_Mannequin_C_ExecuteUbergraph_BP_Mannequin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.OnCosmeticsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::OnCosmeticsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.OnCosmeticsChanged__DelegateSignature");

	ABP_Mannequin_C_OnCosmeticsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
