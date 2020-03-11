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

// WidgetBlueprintGeneratedClass UI_AttractMode.UI_AttractMode_C
// 0x0048 (0x0250 - 0x0208)
class UUI_AttractMode_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultMasterVolume;                                      // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PrevMousePos;                                             // 0x021C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	float                                              MaxIdleTime;                                              // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEnabled;                                                // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisabled;                                               // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AttractMode.UI_AttractMode_C");
		return ptr;
	}


	void EnableAttractMode();
	void SetAttractModeEnabled(bool bEnable);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_UI_AttractMode(int EntryPoint);
	void OnDisabled__DelegateSignature();
	void OnEnabled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
