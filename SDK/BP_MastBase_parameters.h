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

// Function BP_MastBase.BP_MastBase_C.OnRep_SailColor
struct ABP_MastBase_C_OnRep_SailColor_Params
{
};

// Function BP_MastBase.BP_MastBase_C.AddRepairHit
struct ABP_MastBase_C_AddRepairHit_Params
{
};

// Function BP_MastBase.BP_MastBase_C.DamageSail
struct ABP_MastBase_C_DamageSail_Params
{
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase.BP_MastBase_C.GetSailPercentage
struct ABP_MastBase_C_GetSailPercentage_Params
{
	float                                              BestSailAngle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase.BP_MastBase_C.GetBestSailAngle
struct ABP_MastBase_C_GetBestSailAngle_Params
{
	float                                              BestSailAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase.BP_MastBase_C.GetClosestWindActor
struct ABP_MastBase_C_GetClosestWindActor_Params
{
};

// Function BP_MastBase.BP_MastBase_C.UserConstructionScript
struct ABP_MastBase_C_UserConstructionScript_Params
{
};

// Function BP_MastBase.BP_MastBase_C.ReceiveBeginPlay
struct ABP_MastBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MastBase.BP_MastBase_C.ReceiveTick
struct ABP_MastBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase.BP_MastBase_C.S_SailUpPressed
struct ABP_MastBase_C_S_SailUpPressed_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_SailDownPressed
struct ABP_MastBase_C_S_SailDownPressed_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_SailDownReleased
struct ABP_MastBase_C_S_SailDownReleased_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_SailUpReleased
struct ABP_MastBase_C_S_SailUpReleased_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_RotateLeftPressed
struct ABP_MastBase_C_S_RotateLeftPressed_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_RotateLeftReleased
struct ABP_MastBase_C_S_RotateLeftReleased_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_RotateRightPressed
struct ABP_MastBase_C_S_RotateRightPressed_Params
{
};

// Function BP_MastBase.BP_MastBase_C.S_RotateRightReleased
struct ABP_MastBase_C_S_RotateRightReleased_Params
{
};

// Function BP_MastBase.BP_MastBase_C.HighLight
struct ABP_MastBase_C_HighLight_Params
{
};

// Function BP_MastBase.BP_MastBase_C.NoHighlight
struct ABP_MastBase_C_NoHighlight_Params
{
};

// Function BP_MastBase.BP_MastBase_C.MC_SailRotation
struct ABP_MastBase_C_MC_SailRotation_Params
{
	int                                                Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase.BP_MastBase_C.LoadKeys
struct ABP_MastBase_C_LoadKeys_Params
{
};

// Function BP_MastBase.BP_MastBase_C.Resetkeys
struct ABP_MastBase_C_Resetkeys_Params
{
};

// Function BP_MastBase.BP_MastBase_C.RefreshKeys
struct ABP_MastBase_C_RefreshKeys_Params
{
};

// Function BP_MastBase.BP_MastBase_C.ExecuteUbergraph_BP_MastBase
struct ABP_MastBase_C_ExecuteUbergraph_BP_MastBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
