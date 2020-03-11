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

// BlueprintGeneratedClass FireworksFlare_BP.FireworksFlare_BP_C
// 0x0050 (0x0378 - 0x0328)
class AFireworksFlare_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Flare02;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline02;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Flare01;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline01;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Flare1_BE6EF5C74F1B05186421CB80F532E862;       // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_BE6EF5C74F1B05186421CB80F532E862;   // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              flares_Flare1_AC5C015643F04E9FC72BE898722C813F;           // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    flares__Direction_AC5C015643F04E9FC72BE898722C813F;       // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          flares;                                                   // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FireworksFlare_BP.FireworksFlare_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void flares__FinishedFunc();
	void flares__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FireworksFlare_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
