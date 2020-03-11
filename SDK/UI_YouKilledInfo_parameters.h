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

// Function UI_YouKilledInfo.UI_YouKilledInfo_C.Construct
struct UUI_YouKilledInfo_C_Construct_Params
{
};

// Function UI_YouKilledInfo.UI_YouKilledInfo_C.AddKill
struct UUI_YouKilledInfo_C_AddKill_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_YouKilledInfo.UI_YouKilledInfo_C.ExecuteUbergraph_UI_YouKilledInfo
struct UUI_YouKilledInfo_C_ExecuteUbergraph_UI_YouKilledInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
