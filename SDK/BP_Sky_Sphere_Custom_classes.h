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

// BlueprintGeneratedClass BP_Sky_Sphere_Custom.BP_Sky_Sphere_Custom_C
// 0x00D4 (0x03FC - 0x0328)
class ABP_Sky_Sphere_Custom_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sky_Sphere_mesh;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Sky_Material_Instance;                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Sky_material;                                     // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseMoon_;                                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Refresh_material;                                         // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	class ADirectionalLight*                           Directional_light_actor;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Colors_determined_by_sun_position;                        // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              Sun_height;                                               // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_brightness;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Horizon_falloff;                                          // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Zenith_color;                                             // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InBetweenColor;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Horizon_color;                                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Cloud_color;                                              // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Overall_Color;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_speed;                                              // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_opacity;                                            // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stars_brightness;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Horizon_color_curve;                                      // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Zenith_color_curve;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Cloud_color_curve;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerActorArray;                                         // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	int                                                RaysHit;                                                  // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfRays;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBrightnessValue;                                      // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunRadius;                                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere_Custom.BP_Sky_Sphere_Custom_C");
		return ptr;
	}


	void UpdateSunDirection();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Sky_Sphere_Custom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
