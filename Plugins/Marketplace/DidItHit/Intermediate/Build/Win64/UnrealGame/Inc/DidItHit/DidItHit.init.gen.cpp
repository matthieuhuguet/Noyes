// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDidItHit_init() {}
	DIDITHIT_API UFunction* Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DidItHit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DidItHit()
	{
		if (!Z_Registration_Info_UPackage__Script_DidItHit.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DidItHit",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x85310C6A,
				0x917E3FD6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DidItHit.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DidItHit.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DidItHit(Z_Construct_UPackage__Script_DidItHit, TEXT("/Script/DidItHit"), Z_Registration_Info_UPackage__Script_DidItHit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x85310C6A, 0x917E3FD6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
