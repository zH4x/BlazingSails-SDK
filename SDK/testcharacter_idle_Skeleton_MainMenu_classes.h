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

// AnimBlueprintGeneratedClass testcharacter_idle_Skeleton_MainMenu.testcharacter_idle_Skeleton_MainMenu_C
// 0x0928 (0x0C88 - 0x0360)
class Utestcharacter_idle_Skeleton_MainMenu_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6CEF23B64703B811CA71F1BE736C043A;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_95B1EFC8488A3DCAC6E3C8958F23292E;      // 0x03A8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B554EAFB4745B23BAE0D97B92143E75A;// 0x0410(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8ABD49C34731C97E8DBD74955DDA4FDC;// 0x04B0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0198C4D940215009A997AF841D23F418;// 0x05E8(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_49BE37AE49FA7E31034D52895138020A;// 0x0720(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_78334AF04E346786C5B56995E891DB44;// 0x0760(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AF1F029A4B9BD65C07FB28A6B847C7B4;// 0x07A0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9D63E1CE42A86B00E211E392B9DD26D1;// 0x08D8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F450636C481E011E98365EA179AC9896;// 0x0A10(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1958D98C4D1A3F2963FBC988E3429F3B;// 0x0B48(0x0138)
	TEnumAsByte<E_MainMenuAnimations>                  Animation;                                                // 0x0C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C81(0x0003) MISSED OFFSET
	int                                                AnimationStep;                                            // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass testcharacter_idle_Skeleton_MainMenu.testcharacter_idle_Skeleton_MainMenu_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_testcharacter_idle_Skeleton_MainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
