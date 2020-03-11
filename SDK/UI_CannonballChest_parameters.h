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

// Function UI_CannonballChest.UI_CannonballChest_C.GetItemFromCannonAmmo
struct UUI_CannonballChest_C_GetItemFromCannonAmmo_Params
{
	TEnumAsByte<E_CannonAmmo>                          cannonball;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Items>                               Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CannonballChest.UI_CannonballChest_C.ShowNoCannonballsText
struct UUI_CannonballChest_C_ShowNoCannonballsText_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CannonballChest.UI_CannonballChest_C.LoadCannonballs
struct UUI_CannonballChest_C_LoadCannonballs_Params
{
};

// Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UUI_CannonballChest_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UUI_CannonballChest_C_BndEvt__Button_130_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_CannonballChest.UI_CannonballChest_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_CannonballChest_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_CannonballChest.UI_CannonballChest_C.ExecuteUbergraph_UI_CannonballChest
struct UUI_CannonballChest_C_ExecuteUbergraph_UI_CannonballChest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
