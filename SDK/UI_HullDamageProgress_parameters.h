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

// Function UI_HullDamageProgress.UI_HullDamageProgress_C.GetInterpolationSpeed
struct UUI_HullDamageProgress_C_GetInterpolationSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HullDamageProgress.UI_HullDamageProgress_C.Construct
struct UUI_HullDamageProgress_C_Construct_Params
{
};

// Function UI_HullDamageProgress.UI_HullDamageProgress_C.Tick
struct UUI_HullDamageProgress_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HullDamageProgress.UI_HullDamageProgress_C.ExecuteUbergraph_UI_HullDamageProgress
struct UUI_HullDamageProgress_C_ExecuteUbergraph_UI_HullDamageProgress_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
