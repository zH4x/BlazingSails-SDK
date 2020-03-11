#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPublicKeyToBytes
struct ULowEntryEncryptionLibrary_RsaPublicKeyToBytes_Params
{
	class ULowEntryRsaPublicKey*                       PublicKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPrivateKeyToBytes
struct ULowEntryEncryptionLibrary_RsaPrivateKeyToBytes_Params
{
	class ULowEntryRsaPrivateKey*                      PrivateKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytesRandomLength
struct ULowEntryEncryptionLibrary_GenerateSecureRandomBytesRandomLength_Params
{
	int                                                MinLength;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxLength;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytes
struct ULowEntryEncryptionLibrary_GenerateSecureRandomBytes_Params
{
	int                                                Length;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateKeysRsa
struct ULowEntryEncryptionLibrary_GenerateKeysRsa_Params
{
	class ULowEntryRsaPublicKey*                       PublicKey;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULowEntryRsaPrivateKey*                      PrivateKey;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Bits;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptRsa
struct ULowEntryEncryptionLibrary_EncryptRsa_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryRsaPublicKey*                       PublicKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptAes
struct ULowEntryEncryptionLibrary_EncryptAes_Params
{
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AddHash;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptRsa
struct ULowEntryEncryptionLibrary_DecryptRsa_Params
{
	TArray<unsigned char>                              EncryptedData;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ULowEntryRsaPrivateKey*                      PrivateKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptAes
struct ULowEntryEncryptionLibrary_DecryptAes_Params
{
	TArray<unsigned char>                              EncryptedData;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AddedHash;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPublicKey
struct ULowEntryEncryptionLibrary_BytesToRsaPublicKey_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULowEntryRsaPublicKey*                       PublicKey;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPrivateKey
struct ULowEntryEncryptionLibrary_BytesToRsaPrivateKey_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULowEntryRsaPrivateKey*                      PrivateKey;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ByteArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
