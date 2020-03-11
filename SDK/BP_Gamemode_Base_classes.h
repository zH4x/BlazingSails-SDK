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

// BlueprintGeneratedClass BP_Gamemode_Base.BP_Gamemode_Base_C
// 0x0010 (0x0420 - 0x0410)
class ABP_Gamemode_Base_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gamemode_Base.BP_Gamemode_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Gamemode_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
