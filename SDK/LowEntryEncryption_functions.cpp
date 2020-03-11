
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

// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPublicKeyToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryRsaPublicKey*   PublicKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPublicKeyToBytes");

	ULowEntryEncryptionLibrary_RsaPublicKeyToBytes_Params params;
	params.PublicKey = PublicKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPrivateKeyToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryRsaPrivateKey*  PrivateKey                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPrivateKeyToBytes");

	ULowEntryEncryptionLibrary_RsaPrivateKeyToBytes_Params params;
	params.PrivateKey = PrivateKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytesRandomLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MinLength                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxLength                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_GenerateSecureRandomBytesRandomLength(int MinLength, int MaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytesRandomLength");

	ULowEntryEncryptionLibrary_GenerateSecureRandomBytesRandomLength_Params params;
	params.MinLength = MinLength;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Length                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_GenerateSecureRandomBytes(int Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytes");

	ULowEntryEncryptionLibrary_GenerateSecureRandomBytes_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateKeysRsa
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ULowEntryRsaPublicKey*   PublicKey                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULowEntryRsaPrivateKey*  PrivateKey                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Bits                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULowEntryEncryptionLibrary::STATIC_GenerateKeysRsa(int Bits, class ULowEntryRsaPublicKey** PublicKey, class ULowEntryRsaPrivateKey** PrivateKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateKeysRsa");

	ULowEntryEncryptionLibrary_GenerateKeysRsa_Params params;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PublicKey != nullptr)
		*PublicKey = params.PublicKey;
	if (PrivateKey != nullptr)
		*PrivateKey = params.PrivateKey;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptRsa
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ULowEntryRsaPublicKey*   PublicKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_EncryptRsa(TArray<unsigned char> Data, class ULowEntryRsaPublicKey* PublicKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptRsa");

	ULowEntryEncryptionLibrary_EncryptRsa_Params params;
	params.Data = Data;
	params.PublicKey = PublicKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptAes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AddHash                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_EncryptAes(TArray<unsigned char> Data, TArray<unsigned char> Key, bool AddHash)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptAes");

	ULowEntryEncryptionLibrary_EncryptAes_Params params;
	params.Data = Data;
	params.Key = Key;
	params.AddHash = AddHash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptRsa
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          EncryptedData                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ULowEntryRsaPrivateKey*  PrivateKey                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_DecryptRsa(TArray<unsigned char> EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptRsa");

	ULowEntryEncryptionLibrary_DecryptRsa_Params params;
	params.EncryptedData = EncryptedData;
	params.PrivateKey = PrivateKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptAes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<unsigned char>          EncryptedData                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AddedHash                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ULowEntryEncryptionLibrary::STATIC_DecryptAes(TArray<unsigned char> EncryptedData, TArray<unsigned char> Key, bool AddedHash)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptAes");

	ULowEntryEncryptionLibrary_DecryptAes_Params params;
	params.EncryptedData = EncryptedData;
	params.Key = Key;
	params.AddedHash = AddedHash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPublicKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULowEntryRsaPublicKey*   PublicKey                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ByteArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)

void ULowEntryEncryptionLibrary::STATIC_BytesToRsaPublicKey(TArray<unsigned char> ByteArray, int Index, int Length, bool* Success, class ULowEntryRsaPublicKey** PublicKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPublicKey");

	ULowEntryEncryptionLibrary_BytesToRsaPublicKey_Params params;
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (PublicKey != nullptr)
		*PublicKey = params.PublicKey;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPrivateKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULowEntryRsaPrivateKey*  PrivateKey                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ByteArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, ZeroConstructor, IsPlainOldData)

void ULowEntryEncryptionLibrary::STATIC_BytesToRsaPrivateKey(TArray<unsigned char> ByteArray, int Index, int Length, bool* Success, class ULowEntryRsaPrivateKey** PrivateKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPrivateKey");

	ULowEntryEncryptionLibrary_BytesToRsaPrivateKey_Params params;
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (PrivateKey != nullptr)
		*PrivateKey = params.PrivateKey;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
