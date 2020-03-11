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

// Function MainMenu2.MainMenu2_C.ReceiveBeginPlay
struct AMainMenu2_C_ReceiveBeginPlay_Params
{
};

// Function MainMenu2.MainMenu2_C.ReceiveTick
struct AMainMenu2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu2.MainMenu2_C.ExecuteUbergraph_MainMenu2
struct AMainMenu2_C_ExecuteUbergraph_MainMenu2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
