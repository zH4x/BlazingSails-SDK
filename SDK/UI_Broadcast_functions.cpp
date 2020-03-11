
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_Broadcast.UI_Broadcast_C.SetMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NotificationSound              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Broadcast_C::SetMessage(const struct FText& Message, bool NotificationSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Broadcast.UI_Broadcast_C.SetMessage");

	UUI_Broadcast_C_SetMessage_Params params;
	params.Message = Message;
	params.NotificationSound = NotificationSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Broadcast.UI_Broadcast_C.ExecuteUbergraph_UI_Broadcast
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Broadcast_C::ExecuteUbergraph_UI_Broadcast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Broadcast.UI_Broadcast_C.ExecuteUbergraph_UI_Broadcast");

	UUI_Broadcast_C_ExecuteUbergraph_UI_Broadcast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
