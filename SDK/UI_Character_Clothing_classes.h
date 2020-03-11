#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Character_Clothing.UI_Character_Clothing_C
// 0x0030 (0x0238 - 0x0208)
class UUI_Character_Clothing_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                           Grid;                                                     // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  List;                                                     // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FST_ClothingItems>                   Hats;                                                     // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABP_Mannequin_C*                             MannequinRef;                                             // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Character_Clothing.UI_Character_Clothing_C");
		return ptr;
	}


	void RefreshAppearanceGrid();
	void RefreshClothingGrid(TEnumAsByte<E_ClothingCategories> Category);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void RefreshClothing();
	void UnlockItem(const struct FString& UnlockItemName);
	void LoadFaces();
	void LoadHats();
	void LoadPants();
	void LoadBelts();
	void LoadBeards();
	void ExecuteUbergraph_UI_Character_Clothing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
