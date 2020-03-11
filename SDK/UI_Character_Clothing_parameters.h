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

// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshAppearanceGrid
struct UUI_Character_Clothing_C_RefreshAppearanceGrid_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothingGrid
struct UUI_Character_Clothing_C_RefreshClothingGrid_Params
{
	TEnumAsByte<E_ClothingCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.Construct
struct UUI_Character_Clothing_C_Construct_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_Character_Clothing_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothing
struct UUI_Character_Clothing_C_RefreshClothing_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.UnlockItem
struct UUI_Character_Clothing_C_UnlockItem_Params
{
	struct FString                                     UnlockItemName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadFaces
struct UUI_Character_Clothing_C_LoadFaces_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadHats
struct UUI_Character_Clothing_C_LoadHats_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadPants
struct UUI_Character_Clothing_C_LoadPants_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBelts
struct UUI_Character_Clothing_C_LoadBelts_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBeards
struct UUI_Character_Clothing_C_LoadBeards_Params
{
};

// Function UI_Character_Clothing.UI_Character_Clothing_C.ExecuteUbergraph_UI_Character_Clothing
struct UUI_Character_Clothing_C_ExecuteUbergraph_UI_Character_Clothing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
