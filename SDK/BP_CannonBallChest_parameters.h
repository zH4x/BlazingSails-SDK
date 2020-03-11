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

// Function BP_CannonBallChest.BP_CannonBallChest_C.GiveCannonballs
struct ABP_CannonBallChest_C_GiveCannonballs_Params
{
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.UserConstructionScript
struct ABP_CannonBallChest_C_UserConstructionScript_Params
{
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.ShowReceivedIndicator
struct ABP_CannonBallChest_C_ShowReceivedIndicator_Params
{
	int                                                CannonballAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AntiSailAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.CloseChest
struct ABP_CannonBallChest_C_CloseChest_Params
{
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.Activate
struct ABP_CannonBallChest_C_Activate_Params
{
	class ABP_Character_C*                             LocalCharacterRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.ReceiveTick
struct ABP_CannonBallChest_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.S_Activate
struct ABP_CannonBallChest_C_S_Activate_Params
{
};

// Function BP_CannonBallChest.BP_CannonBallChest_C.ExecuteUbergraph_BP_CannonBallChest
struct ABP_CannonBallChest_C_ExecuteUbergraph_BP_CannonBallChest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
