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

// BlueprintGeneratedClass BP_SoundTester.BP_SoundTester_C
// 0x0029 (0x0351 - 0x0328)
class ABP_SoundTester_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound2;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound3;                                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSound2;                                             // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoundTester.BP_SoundTester_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayTestSound();
	void ExecuteUbergraph_BP_SoundTester(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
