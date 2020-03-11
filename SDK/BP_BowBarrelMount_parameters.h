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

// Function BP_BowBarrelMount.BP_BowBarrelMount_C.MountBarrel
struct ABP_BowBarrelMount_C_MountBarrel_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            ControllerRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Mounted;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowBarrelMount.BP_BowBarrelMount_C.UserConstructionScript
struct ABP_BowBarrelMount_C_UserConstructionScript_Params
{
};

// Function BP_BowBarrelMount.BP_BowBarrelMount_C.MC_MountBarrel
struct ABP_BowBarrelMount_C_MC_MountBarrel_Params
{
};

// Function BP_BowBarrelMount.BP_BowBarrelMount_C.ExecuteUbergraph_BP_BowBarrelMount
struct ABP_BowBarrelMount_C_ExecuteUbergraph_BP_BowBarrelMount_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
