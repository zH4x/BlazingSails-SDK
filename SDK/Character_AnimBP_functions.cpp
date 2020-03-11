
#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Character_AnimBP.Character_AnimBP_C.PlayJumpLandSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       PhysicalSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacter_AnimBP_C::PlayJumpLandSound(class UPhysicalMaterial* PhysicalSurface, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.PlayJumpLandSound");

	UCharacter_AnimBP_C_PlayJumpLandSound_Params params;
	params.PhysicalSurface = PhysicalSurface;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.PlayJumpLaunchSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       PhysicalSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacter_AnimBP_C::PlayJumpLaunchSound(class UPhysicalMaterial* PhysicalSurface, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.PlayJumpLaunchSound");

	UCharacter_AnimBP_C_PlayJumpLaunchSound_Params params;
	params.PhysicalSurface = PhysicalSurface;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.PlayFootstepSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OwnFootsteps_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacter_AnimBP_C::PlayFootstepSound(class UPhysicalMaterial* SurfaceType, bool OwnFootsteps_, const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.PlayFootstepSound");

	UCharacter_AnimBP_C_PlayFootstepSound_Params params;
	params.SurfaceType = SurfaceType;
	params.OwnFootsteps_ = OwnFootsteps_;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_5DC71AFD4E5103DD14DAACB28A288523
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_5DC71AFD4E5103DD14DAACB28A288523()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_5DC71AFD4E5103DD14DAACB28A288523");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_5DC71AFD4E5103DD14DAACB28A288523_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A6D756E84352E62D3F1AEC8949DDA0B8
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A6D756E84352E62D3F1AEC8949DDA0B8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A6D756E84352E62D3F1AEC8949DDA0B8");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A6D756E84352E62D3F1AEC8949DDA0B8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_3D1BD5D04B40B429D99A19B3C9F16CC8
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_3D1BD5D04B40B429D99A19B3C9F16CC8()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_3D1BD5D04B40B429D99A19B3C9F16CC8");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_3D1BD5D04B40B429D99A19B3C9F16CC8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C535ACE049571A14329C45906E37DE97
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C535ACE049571A14329C45906E37DE97()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C535ACE049571A14329C45906E37DE97");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C535ACE049571A14329C45906E37DE97_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3C4DAB7B4E9738CD52FF3A963FA5D900
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3C4DAB7B4E9738CD52FF3A963FA5D900()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3C4DAB7B4E9738CD52FF3A963FA5D900");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3C4DAB7B4E9738CD52FF3A963FA5D900_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_2AE72E714B80D6A01F820B9A12EF525C
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_2AE72E714B80D6A01F820B9A12EF525C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_2AE72E714B80D6A01F820B9A12EF525C");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_2AE72E714B80D6A01F820B9A12EF525C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3CC7302C4CD11F478F42ADA475EEE495
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3CC7302C4CD11F478F42ADA475EEE495()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3CC7302C4CD11F478F42ADA475EEE495");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3CC7302C4CD11F478F42ADA475EEE495_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_82244DAD410142996B02518D1AD027AD
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_82244DAD410142996B02518D1AD027AD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_82244DAD410142996B02518D1AD027AD");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_82244DAD410142996B02518D1AD027AD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_D80CF66C492232827FA3DF8E993CF087
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_D80CF66C492232827FA3DF8E993CF087()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_D80CF66C492232827FA3DF8E993CF087");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_D80CF66C492232827FA3DF8E993CF087_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3FAC085E462C40EC7A9614A196D83FCE
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3FAC085E462C40EC7A9614A196D83FCE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3FAC085E462C40EC7A9614A196D83FCE");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_3FAC085E462C40EC7A9614A196D83FCE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_CD58802645651724C3F3C7AB1749FC01
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_CD58802645651724C3F3C7AB1749FC01()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_CD58802645651724C3F3C7AB1749FC01");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_CD58802645651724C3F3C7AB1749FC01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_00A70DC44891CD65EB98E38855E49577
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_00A70DC44891CD65EB98E38855E49577()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_00A70DC44891CD65EB98E38855E49577");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_00A70DC44891CD65EB98E38855E49577_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_DABAA2504809372CFA5DCBB9C6A987CA
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_DABAA2504809372CFA5DCBB9C6A987CA()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_DABAA2504809372CFA5DCBB9C6A987CA");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_DABAA2504809372CFA5DCBB9C6A987CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_E7E2461E4434CEC30D3694B619D2EC0F
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_E7E2461E4434CEC30D3694B619D2EC0F()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_E7E2461E4434CEC30D3694B619D2EC0F");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_E7E2461E4434CEC30D3694B619D2EC0F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A1902AD54F85BE9AF13AD6BADA5B3693
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A1902AD54F85BE9AF13AD6BADA5B3693()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A1902AD54F85BE9AF13AD6BADA5B3693");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_BlendListByBool_A1902AD54F85BE9AF13AD6BADA5B3693_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C8E0AABF492AD26947431CAD9E9B91BF
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C8E0AABF492AD26947431CAD9E9B91BF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C8E0AABF492AD26947431CAD9E9B91BF");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_ModifyBone_C8E0AABF492AD26947431CAD9E9B91BF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_9D0E611F4A746845ECA8C59556C9AEAE
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_9D0E611F4A746845ECA8C59556C9AEAE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_9D0E611F4A746845ECA8C59556C9AEAE");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_9D0E611F4A746845ECA8C59556C9AEAE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_AD9D9D8A43C5795C46159D8CBC255D96
// (BlueprintEvent)

void UCharacter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_AD9D9D8A43C5795C46159D8CBC255D96()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_AD9D9D8A43C5795C46159D8CBC255D96");

	UCharacter_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Character_AnimBP_AnimGraphNode_TransitionResult_AD9D9D8A43C5795C46159D8CBC255D96_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacter_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.BlueprintUpdateAnimation");

	UCharacter_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.UseFullPose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacter_AnimBP_C::UseFullPose(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.UseFullPose");

	UCharacter_AnimBP_C_UseFullPose_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Shake1
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_Shake1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Shake1");

	UCharacter_AnimBP_C_AnimNotify_Shake1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Shake2
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_Shake2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Shake2");

	UCharacter_AnimBP_C_AnimNotify_Shake2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_FirstHit
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_FirstHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_FirstHit");

	UCharacter_AnimBP_C_AnimNotify_FirstHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_SecondHit
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_SecondHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_SecondHit");

	UCharacter_AnimBP_C_AnimNotify_SecondHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Block1
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_Block1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Block1");

	UCharacter_AnimBP_C_AnimNotify_Block1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Block2
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_Block2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Block2");

	UCharacter_AnimBP_C_AnimNotify_Block2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Footstep1
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_Footstep1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Footstep1");

	UCharacter_AnimBP_C_AnimNotify_Footstep1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::AnimNotify_Footstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.AnimNotify_Footstep");

	UCharacter_AnimBP_C_AnimNotify_Footstep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.JumpLaunchSound
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::JumpLaunchSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.JumpLaunchSound");

	UCharacter_AnimBP_C_JumpLaunchSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.JumpLandSound
// (BlueprintCallable, BlueprintEvent)

void UCharacter_AnimBP_C::JumpLandSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.JumpLandSound");

	UCharacter_AnimBP_C_JumpLandSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_AnimBP.Character_AnimBP_C.ExecuteUbergraph_Character_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacter_AnimBP_C::ExecuteUbergraph_Character_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_AnimBP.Character_AnimBP_C.ExecuteUbergraph_Character_AnimBP");

	UCharacter_AnimBP_C_ExecuteUbergraph_Character_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
