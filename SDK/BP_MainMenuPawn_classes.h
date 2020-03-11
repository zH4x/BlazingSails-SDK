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

// BlueprintGeneratedClass BP_MainMenuPawn.BP_MainMenuPawn_C
// 0x0028 (0x03B0 - 0x0388)
class ABP_MainMenuPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CharacterDressingMode;                                    // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	struct FVector                                     CameraLocation;                                           // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenuPawn.BP_MainMenuPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MainMenuPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
