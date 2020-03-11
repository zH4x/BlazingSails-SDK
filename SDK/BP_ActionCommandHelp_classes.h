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

// BlueprintGeneratedClass BP_ActionCommandHelp.BP_ActionCommandHelp_C
// 0x0030 (0x0390 - 0x0360)
class ABP_ActionCommandHelp_C : public ABP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FString>                             CommandList;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     testlist;                                                 // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUI_Chat_C*                                  ChatRef;                                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionCommandHelp.BP_ActionCommandHelp_C");
		return ptr;
	}


	void GetListOfCommands(struct FString* List);
	void UserConstructionScript();
	void StartAction();
	void ExecuteUbergraph_BP_ActionCommandHelp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
