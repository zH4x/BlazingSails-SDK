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

// Function UI_Chat.UI_Chat_C.TrimCommand
struct UUI_Chat_C_TrimCommand_Params
{
	struct FString                                     Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Trimmed;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Chat.UI_Chat_C.SetChatVisibility
struct UUI_Chat_C_SetChatVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.SetChatChannelName
struct UUI_Chat_C_SetChatChannelName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Chat.UI_Chat_C.Commands
struct UUI_Chat_C_Commands_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CommandFound;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionBlueprintClass;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ServerCommand;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.OnMouseButtonDown
struct UUI_Chat_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Chat.UI_Chat_C.ShowEnterMessage
struct UUI_Chat_C_ShowEnterMessage_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.OpenEnterMessage
struct UUI_Chat_C_OpenEnterMessage_Params
{
	bool                                               BringMouseToChatWindow;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_168_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Textbox_EnterMessage_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Chat.UI_Chat_C.AddChatMessage
struct UUI_Chat_C_AddChatMessage_Params
{
	struct FSt_ComplexMessage                          NewChatMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FormatText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.Construct
struct UUI_Chat_C_Construct_Params
{
};

// Function UI_Chat.UI_Chat_C.FadeChatOut
struct UUI_Chat_C_FadeChatOut_Params
{
};

// Function UI_Chat.UI_Chat_C.BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__Button_155_K2Node_ComponentBoundEvent_162_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Chat.UI_Chat_C.ToggleTeamChat
struct UUI_Chat_C_ToggleTeamChat_Params
{
};

// Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
struct UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
