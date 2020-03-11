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

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.ShowMemberInfo
struct UUI_CrewMemberInfo_C_ShowMemberInfo_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.UpdateMemberInfo
struct UUI_CrewMemberInfo_C_UpdateMemberInfo_Params
{
	bool                                               bIsValid;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerNetID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsLeader;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_Customisation                           Customization;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.UpdateReadyState
struct UUI_CrewMemberInfo_C_UpdateReadyState_Params
{
	bool                                               bIsReady;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.Tick
struct UUI_CrewMemberInfo_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.Construct
struct UUI_CrewMemberInfo_C_Construct_Params
{
};

// Function UI_CrewMemberInfo.UI_CrewMemberInfo_C.ExecuteUbergraph_UI_CrewMemberInfo
struct UUI_CrewMemberInfo_C_ExecuteUbergraph_UI_CrewMemberInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
