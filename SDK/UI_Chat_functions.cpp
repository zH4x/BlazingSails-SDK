
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

// Function UI_Chat.UI_Chat_C.TrimCommand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Trimmed                        (Parm, OutParm, ZeroConstructor)

void UUI_Chat_C::TrimCommand(const struct FString& Command, struct FString* Trimmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.TrimCommand");

	UUI_Chat_C_TrimCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Trimmed != nullptr)
		*Trimmed = params.Trimmed;
}


// Function UI_Chat.UI_Chat_C.SetChatVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Chat_C::SetChatVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.SetChatVisibility");

	UUI_Chat_C_SetChatVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Chat.UI_Chat_C.SetChatChannelName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Chat_C::SetChatChannelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.SetChatChannelName");

	UUI_Chat_C_SetChatChannelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Chat.UI_Chat_C.Commands
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CommandFound                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActionBlueprintClass           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ServerCommand                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Chat_C::Commands(const struct FText& Message, bool* CommandFound, class UClass** ActionBlueprintClass, bool* ServerCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.Commands");

	UUI_Chat_C_Commands_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CommandFound != nullptr)
		*CommandFound = params.CommandFound;
	if (ActionBlueprintClass != nullptr)
		*ActionBlueprintClass = params.ActionBlueprintClass;
	if (ServerCommand != nullptr)
		*ServerCommand = params.ServerCommand;
}


// Function UI_Chat.UI_Chat_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Chat_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.OnMouseButtonDown");

	UUI_Chat_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Chat.UI_Chat_C.ShowEnterMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Chat_C::ShowEnterMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.ShowEnterMessage");

	UUI_Chat_C_ShowEnterMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Chat.UI_Chat_C.OpenEnterMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BringMouseToChatWindow         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Chat_C::OpenEnterMessage(bool BringMouseToChatWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.OpenEnterMessage");

	UUI_Chat_C_OpenEnterMessage_Params params;
	params.BringMouseToChatWindow = BringMouseToChatWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Chat_C::BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_Chat_C_BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Chat_C::BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_Chat_C_BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.AddChatMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSt_ComplexMessage      NewChatMessage                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FormatText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Chat_C::AddChatMessage(const struct FSt_ComplexMessage& NewChatMessage, bool FormatText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.AddChatMessage");

	UUI_Chat_C_AddChatMessage_Params params;
	params.NewChatMessage = NewChatMessage;
	params.FormatText = FormatText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Chat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.Construct");

	UUI_Chat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.FadeChatOut
// (BlueprintCallable, BlueprintEvent)

void UUI_Chat_C::FadeChatOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.FadeChatOut");

	UUI_Chat_C_FadeChatOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Chat_C::BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature");

	UUI_Chat_C_BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.ToggleTeamChat
// (BlueprintCallable, BlueprintEvent)

void UUI_Chat_C::ToggleTeamChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.ToggleTeamChat");

	UUI_Chat_C_ToggleTeamChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Chat_C::ExecuteUbergraph_UI_Chat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat");

	UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
