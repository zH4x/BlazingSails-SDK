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

// Function BP_MastBase2.BP_MastBase2_C.OnRep_TeamID
struct ABP_MastBase2_C_OnRep_TeamID_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.SetSailParameters
struct ABP_MastBase2_C_SetSailParameters_Params
{
	class UMaterialInstanceDynamic*                    MaterialInstanceRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase2.BP_MastBase2_C.SailRolledUpMultiplier
struct ABP_MastBase2_C_SailRolledUpMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase2.BP_MastBase2_C.GetSailAnglePercentage
struct ABP_MastBase2_C_GetSailAnglePercentage_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase2.BP_MastBase2_C.OnRep_SailColor
struct ABP_MastBase2_C_OnRep_SailColor_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.AddRepairHit
struct ABP_MastBase2_C_AddRepairHit_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.DamageSail
struct ABP_MastBase2_C_DamageSail_Params
{
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase2.BP_MastBase2_C.GetClosestWindActor
struct ABP_MastBase2_C_GetClosestWindActor_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.UserConstructionScript
struct ABP_MastBase2_C_UserConstructionScript_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.ReceiveBeginPlay
struct ABP_MastBase2_C_ReceiveBeginPlay_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.ReceiveTick
struct ABP_MastBase2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase2.BP_MastBase2_C.LoadKeys
struct ABP_MastBase2_C_LoadKeys_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.Resetkeys
struct ABP_MastBase2_C_Resetkeys_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.RefreshKeys
struct ABP_MastBase2_C_RefreshKeys_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.RaiseSail
struct ABP_MastBase2_C_RaiseSail_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.LowerSail
struct ABP_MastBase2_C_LowerSail_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.StopRaiseSail
struct ABP_MastBase2_C_StopRaiseSail_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.StopLowerSail
struct ABP_MastBase2_C_StopLowerSail_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.TurnMastLeft
struct ABP_MastBase2_C_TurnMastLeft_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.StopTurnMastLeft
struct ABP_MastBase2_C_StopTurnMastLeft_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.TurnRight
struct ABP_MastBase2_C_TurnRight_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.StopTurnRight
struct ABP_MastBase2_C_StopTurnRight_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.S_UpdateMast
struct ABP_MastBase2_C_S_UpdateMast_Params
{
	float                                              SailAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MastBase2.BP_MastBase2_C.MC_DetractSails
struct ABP_MastBase2_C_MC_DetractSails_Params
{
};

// Function BP_MastBase2.BP_MastBase2_C.ExecuteUbergraph_BP_MastBase2
struct ABP_MastBase2_C_ExecuteUbergraph_BP_MastBase2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
