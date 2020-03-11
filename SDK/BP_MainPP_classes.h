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

// BlueprintGeneratedClass BP_MainPP.BP_MainPP_C
// 0x0020 (0x0348 - 0x0328)
class ABP_MainPP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       ScopePP;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       CorePostProcess;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainPP.BP_MainPP_C");
		return ptr;
	}


	void UserConstructionScript();
	void AimDOF(bool Enable);
	void SetDOFFocusRange(float Distance);
	void SetScopePP(bool Enable, bool UseDOF);
	void ExecuteUbergraph_BP_MainPP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
