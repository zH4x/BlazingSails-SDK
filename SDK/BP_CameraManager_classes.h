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

// BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C
// 0x0028 (0x2498 - 0x2470)
class ABP_CameraManager_C : public APlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x2478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2484(0x0004) MISSED OFFSET
	class ABP_WaterPP_C*                               UnderwaterPPRef;                                          // 0x2488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASound_Volume_Detecter_C*                    SoundVolumeDetecterRef;                                   // 0x2490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraManager.BP_CameraManager_C");
		return ptr;
	}


	void InitializeVoiceChat();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_CameraManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
