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

// BlueprintGeneratedClass BP_HangLamp.BP_HangLamp_C
// 0x005F (0x040D - 0x03AE)
class ABP_HangLamp_C : public ABP_InteractableBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WiggleBone;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightGlassBox;                                            // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LongDistanceFlare;                                        // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Lit;                                                      // 0x03E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFlare;                                                 // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	struct FLinearColor                                LightColorMaterial;                                       // 0x03EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                LightColorLamp;                                           // 0x03FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadLightColor;                                           // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HangLamp.BP_HangLamp_C");
		return ptr;
	}


	void SetLightColor(const struct FLinearColor& LightColor, const struct FLinearColor& LightMaterialColor);
	void OnRep_Lit();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void S_Activate();
	void ExecuteUbergraph_BP_HangLamp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
