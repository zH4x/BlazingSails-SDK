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

// Function BP_AOEBase.BP_AOEBase_C.CalculateDamage
struct ABP_AOEBase_C_CalculateDamage_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AOEBase.BP_AOEBase_C.CheckIfBehindObstacle
struct ABP_AOEBase_C_CheckIfBehindObstacle_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamaged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AOEBase.BP_AOEBase_C.UserConstructionScript
struct ABP_AOEBase_C_UserConstructionScript_Params
{
};

// Function BP_AOEBase.BP_AOEBase_C.ReceiveBeginPlay
struct ABP_AOEBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_AOEBase.BP_AOEBase_C.ExecuteUbergraph_BP_AOEBase
struct ABP_AOEBase_C_ExecuteUbergraph_BP_AOEBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
