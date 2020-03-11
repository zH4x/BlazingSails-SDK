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

// BlueprintGeneratedClass BP_ActionCommandSails.BP_ActionCommandSails_C
// 0x0008 (0x0368 - 0x0360)
class ABP_ActionCommandSails_C : public ABP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionCommandSails.BP_ActionCommandSails_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartAction();
	void ExecuteUbergraph_BP_ActionCommandSails(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
