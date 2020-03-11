#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Mannequin.BP_Mannequin_C.RefreshVisualCosmetics
struct ABP_Mannequin_C_RefreshVisualCosmetics_Params
{
	struct FST_Customisation                           ST_Customisation;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Mannequin.BP_Mannequin_C.UpdateCosmetics
struct ABP_Mannequin_C_UpdateCosmetics_Params
{
};

// Function BP_Mannequin.BP_Mannequin_C.InitLocal
struct ABP_Mannequin_C_InitLocal_Params
{
};

// Function BP_Mannequin.BP_Mannequin_C.SetCosmetics
struct ABP_Mannequin_C_SetCosmetics_Params
{
	struct FST_Customisation                           ST_Customisation;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Mannequin.BP_Mannequin_C.UserConstructionScript
struct ABP_Mannequin_C_UserConstructionScript_Params
{
};

// Function BP_Mannequin.BP_Mannequin_C.ReceiveTick
struct ABP_Mannequin_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mannequin.BP_Mannequin_C.ResetClothing
struct ABP_Mannequin_C_ResetClothing_Params
{
};

// Function BP_Mannequin.BP_Mannequin_C.SetSkinColor
struct ABP_Mannequin_C_SetSkinColor_Params
{
	float                                              SkinColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mannequin.BP_Mannequin_C.SetScar
struct ABP_Mannequin_C_SetScar_Params
{
	int                                                Scar;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mannequin.BP_Mannequin_C.ExecuteUbergraph_BP_Mannequin
struct ABP_Mannequin_C_ExecuteUbergraph_BP_Mannequin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mannequin.BP_Mannequin_C.OnCosmeticsChanged__DelegateSignature
struct ABP_Mannequin_C_OnCosmeticsChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
