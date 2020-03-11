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

// WidgetBlueprintGeneratedClass UI_MainWeapon.UI_MainWeapon_C
// 0x0019 (0x0221 - 0x0208)
class UUI_MainWeapon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_151;                                                // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_CharacterInventory_C*                    HUDRef;                                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Dragged;                                                  // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainWeapon.UI_MainWeapon_C");
		return ptr;
	}


	struct FLinearColor SetOpacity();
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FSlateBrush SetMainIcon();
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void LoadToolTip();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_UI_MainWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
