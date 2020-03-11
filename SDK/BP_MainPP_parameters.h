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

// Function BP_MainPP.BP_MainPP_C.UserConstructionScript
struct ABP_MainPP_C_UserConstructionScript_Params
{
};

// Function BP_MainPP.BP_MainPP_C.AimDOF
struct ABP_MainPP_C_AimDOF_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainPP.BP_MainPP_C.SetDOFFocusRange
struct ABP_MainPP_C_SetDOFFocusRange_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainPP.BP_MainPP_C.SetScopePP
struct ABP_MainPP_C_SetScopePP_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseDOF;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainPP.BP_MainPP_C.ExecuteUbergraph_BP_MainPP
struct ABP_MainPP_C_ExecuteUbergraph_BP_MainPP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
