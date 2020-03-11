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

// Function UI_ServerBrowser.UI_ServerBrowser_C.SetTotalPlayerAmount
struct UUI_ServerBrowser_C_SetTotalPlayerAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowOutdatedWarning
struct UUI_ServerBrowser_C_ShowOutdatedWarning_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowTopInfo
struct UUI_ServerBrowser_C_ShowTopInfo_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowThrobbler
struct UUI_ServerBrowser_C_ShowThrobbler_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.SetServersText
struct UUI_ServerBrowser_C_SetServersText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.SetNoServersVisibility
struct UUI_ServerBrowser_C_SetNoServersVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.OnFailure_372B4671406457B058FF9DAE29112477
struct UUI_ServerBrowser_C_OnFailure_372B4671406457B058FF9DAE29112477_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.OnSuccess_372B4671406457B058FF9DAE29112477
struct UUI_ServerBrowser_C_OnSuccess_372B4671406457B058FF9DAE29112477_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.Construct
struct UUI_ServerBrowser_C_Construct_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshServerList
struct UUI_ServerBrowser_C_RefreshServerList_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__ComboBoxString_97_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UUI_ServerBrowser_C_BndEvt__ComboBoxString_97_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser
struct UUI_ServerBrowser_C_ExecuteUbergraph_UI_ServerBrowser_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
