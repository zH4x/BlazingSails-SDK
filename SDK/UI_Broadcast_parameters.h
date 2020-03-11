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

// Function UI_Broadcast.UI_Broadcast_C.SetMessage
struct UUI_Broadcast_C_SetMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotificationSound;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Broadcast.UI_Broadcast_C.ExecuteUbergraph_UI_Broadcast
struct UUI_Broadcast_C_ExecuteUbergraph_UI_Broadcast_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
