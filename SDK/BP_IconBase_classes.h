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

// BlueprintGeneratedClass BP_IconBase.BP_IconBase_C
// 0x005C (0x0384 - 0x0328)
class ABP_IconBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            IconWidget;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IconSize;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconHeight;                                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleIcon;                                                // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysStraightUp;                                         // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GlobalIcon;                                               // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x034B(0x0005) MISSED OFFSET
	class UClass*                                      Widget;                                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 WidgetRef;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0360(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x036C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamPlayerColor;                                          // 0x0370(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Rotation;                                                 // 0x0374(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Marker;                                                   // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              RandomIconHeightOffset;                                   // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalIconHeight;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IconBase.BP_IconBase_C");
		return ptr;
	}


	void OnRep_TeamPlayerColor();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetIconProperties(int IconScale);
	void SetWidget();
	void MC_SetDeathIcon();
	void ExecuteUbergraph_BP_IconBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
