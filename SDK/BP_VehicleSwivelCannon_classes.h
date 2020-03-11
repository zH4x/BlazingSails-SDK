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

// BlueprintGeneratedClass BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C
// 0x0014 (0x0540 - 0x052C)
class ABP_VehicleSwivelCannon_C : public ABP_VehicleCannon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cylinder_1;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSwivelCannon.BP_VehicleSwivelCannon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VehicleSwivelCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
