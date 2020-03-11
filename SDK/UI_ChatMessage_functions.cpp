
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

// Function UI_ChatMessage.UI_ChatMessage_C.FormatChatMessageText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ChatMessage_C::FormatChatMessageText(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChatMessage.UI_ChatMessage_C.FormatChatMessageText");

	UUI_ChatMessage_C_FormatChatMessageText_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChatMessage.UI_ChatMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ChatMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChatMessage.UI_ChatMessage_C.Construct");

	UUI_ChatMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChatMessage.UI_ChatMessage_C.ExecuteUbergraph_UI_ChatMessage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ChatMessage_C::ExecuteUbergraph_UI_ChatMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChatMessage.UI_ChatMessage_C.ExecuteUbergraph_UI_ChatMessage");

	UUI_ChatMessage_C_ExecuteUbergraph_UI_ChatMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
