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

// AnimBlueprintGeneratedClass steeringwheel_AnimBP.steeringwheel_AnimBP_C
// 0x00C0 (0x0420 - 0x0360)
class Usteeringwheel_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_538955E7488C10DE1FE9829B19EF5E70;      // 0x0368(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C9F0DC0B4520BFE6AA14ECA8B4858AB6;// 0x03A8(0x0070)
	bool                                               bSteering;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              CurrentFrame;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass steeringwheel_AnimBP.steeringwheel_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_steeringwheel_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
