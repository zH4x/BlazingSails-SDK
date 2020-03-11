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

// BlueprintGeneratedClass BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C
// 0x0018 (0x0458 - 0x0440)
class ABP_PickupExplosiveBarrel_C : public ABP_PickupItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender1;                                              // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void S_Activate();
	void Explode();
	void MC_Effects();
	void S_Explode(class ABP_Controller_C* ControllerRef);
	void ExecuteUbergraph_BP_PickupExplosiveBarrel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
