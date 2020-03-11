
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

// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshAppearanceGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::RefreshAppearanceGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshAppearanceGrid");

	UUI_Character_Clothing_C_RefreshAppearanceGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothingGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ClothingCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_Clothing_C::RefreshClothingGrid(TEnumAsByte<E_ClothingCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothingGrid");

	UUI_Character_Clothing_C_RefreshClothingGrid_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Character_Clothing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.Construct");

	UUI_Character_Clothing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_Clothing_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_Character_Clothing_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothing
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::RefreshClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.RefreshClothing");

	UUI_Character_Clothing_C_RefreshClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.UnlockItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UnlockItemName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_Character_Clothing_C::UnlockItem(const struct FString& UnlockItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.UnlockItem");

	UUI_Character_Clothing_C_UnlockItem_Params params;
	params.UnlockItemName = UnlockItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadFaces
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::LoadFaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.LoadFaces");

	UUI_Character_Clothing_C_LoadFaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadHats
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::LoadHats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.LoadHats");

	UUI_Character_Clothing_C_LoadHats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadPants
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::LoadPants()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.LoadPants");

	UUI_Character_Clothing_C_LoadPants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBelts
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::LoadBelts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBelts");

	UUI_Character_Clothing_C_LoadBelts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBeards
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_Clothing_C::LoadBeards()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.LoadBeards");

	UUI_Character_Clothing_C_LoadBeards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character_Clothing.UI_Character_Clothing_C.ExecuteUbergraph_UI_Character_Clothing
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_Clothing_C::ExecuteUbergraph_UI_Character_Clothing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character_Clothing.UI_Character_Clothing_C.ExecuteUbergraph_UI_Character_Clothing");

	UUI_Character_Clothing_C_ExecuteUbergraph_UI_Character_Clothing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
