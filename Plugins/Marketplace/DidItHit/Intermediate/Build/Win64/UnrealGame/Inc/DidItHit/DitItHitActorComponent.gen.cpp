// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DidItHit/Public/DitItHitActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDitItHitActorComponent() {}
// Cross Module References
	DIDITHIT_API UEnum* Z_Construct_UEnum_DidItHit_EKismetTraceType();
	UPackage* Z_Construct_UPackage__Script_DidItHit();
	DIDITHIT_API UFunction* Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	DIDITHIT_API UClass* Z_Construct_UClass_UDitItHitActorComponent_NoRegister();
	DIDITHIT_API UClass* Z_Construct_UClass_UDitItHitActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKismetTraceType;
	static UEnum* EKismetTraceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKismetTraceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKismetTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DidItHit_EKismetTraceType, Z_Construct_UPackage__Script_DidItHit(), TEXT("EKismetTraceType"));
		}
		return Z_Registration_Info_UEnum_EKismetTraceType.OuterSingleton;
	}
	template<> DIDITHIT_API UEnum* StaticEnum<EKismetTraceType>()
	{
		return EKismetTraceType_StaticEnum();
	}
	struct Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enumerators[] = {
		{ "EKismetTraceType::LineTrace", (int64)EKismetTraceType::LineTrace },
		{ "EKismetTraceType::BoxTrace", (int64)EKismetTraceType::BoxTrace },
		{ "EKismetTraceType::CapsuleTrace", (int64)EKismetTraceType::CapsuleTrace },
		{ "EKismetTraceType::SphereTrace", (int64)EKismetTraceType::SphereTrace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxTrace.DisplayName", "Box Trace" },
		{ "BoxTrace.Name", "EKismetTraceType::BoxTrace" },
		{ "CapsuleTrace.DisplayName", "Capsule Trace" },
		{ "CapsuleTrace.Name", "EKismetTraceType::CapsuleTrace" },
		{ "Comment", "/*There are 10^11 stars in the galaxy.\nThat used to be a huge number.\nBut it's only a hundred billion.\nIt's less than the national deficit!\nWe used to call them astronomical numbers.\nNow we should call them economical numbers.*/" },
		{ "LineTrace.DisplayName", "Line Trace" },
		{ "LineTrace.Name", "EKismetTraceType::LineTrace" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "SphereTrace.DisplayName", "Sphere Trace" },
		{ "SphereTrace.Name", "EKismetTraceType::SphereTrace" },
		{ "ToolTip", "There are 10^11 stars in the galaxy.\nThat used to be a huge number.\nBut it's only a hundred billion.\nIt's less than the national deficit!\nWe used to call them astronomical numbers.\nNow we should call them economical numbers." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DidItHit,
		nullptr,
		"EKismetTraceType",
		"EKismetTraceType",
		Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DidItHit_EKismetTraceType()
	{
		if (!Z_Registration_Info_UEnum_EKismetTraceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKismetTraceType.InnerSingleton, Z_Construct_UEnum_DidItHit_EKismetTraceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKismetTraceType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics
	{
		struct _Script_DidItHit_eventOnItemAdded_Parms
		{
			FHitResult LastItem;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::NewProp_LastItem = { "LastItem", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DidItHit_eventOnItemAdded_Parms, LastItem), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::NewProp_LastItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DidItHit, nullptr, "OnItemAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::_Script_DidItHit_eventOnItemAdded_Parms), Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execGetSocket_t0)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSocket_t0();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execClearSocketLocationMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSocketLocationMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execClearHitArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHitArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execToggleTraceCheck)
	{
		P_GET_UBOOL(Z_Param_CanTraceInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleTraceCheck(Z_Param_CanTraceInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execAddHitToHitArray)
	{
		P_GET_TARRAY(FHitResult,Z_Param_HitArrayToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddHitToHitArray(Z_Param_HitArrayToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execGetSockets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSockets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execGetPrimaryComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPrimaryComponent(Z_Param_ActorTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execUpdateLastSocketLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLastSocketLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDitItHitActorComponent::execSetupVariables)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyPrimitiveTarget);
		P_GET_OBJECT(AActor,Z_Param_MyActorTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupVariables(Z_Param_MyPrimitiveTarget,Z_Param_MyActorTarget);
		P_NATIVE_END;
	}
	void UDitItHitActorComponent::StaticRegisterNativesUDitItHitActorComponent()
	{
		UClass* Class = UDitItHitActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddHitToHitArray", &UDitItHitActorComponent::execAddHitToHitArray },
			{ "ClearHitArray", &UDitItHitActorComponent::execClearHitArray },
			{ "ClearSocketLocationMap", &UDitItHitActorComponent::execClearSocketLocationMap },
			{ "GetPrimaryComponent", &UDitItHitActorComponent::execGetPrimaryComponent },
			{ "GetSocket_t0", &UDitItHitActorComponent::execGetSocket_t0 },
			{ "GetSockets", &UDitItHitActorComponent::execGetSockets },
			{ "SetupVariables", &UDitItHitActorComponent::execSetupVariables },
			{ "ToggleTraceCheck", &UDitItHitActorComponent::execToggleTraceCheck },
			{ "UpdateLastSocketLocation", &UDitItHitActorComponent::execUpdateLastSocketLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics
	{
		struct DitItHitActorComponent_eventAddHitToHitArray_Parms
		{
			TArray<FHitResult> HitArrayToAdd;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitArrayToAdd_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitArrayToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd_Inner = { "HitArrayToAdd", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd = { "HitArrayToAdd", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DitItHitActorComponent_eventAddHitToHitArray_Parms, HitArrayToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::NewProp_HitArrayToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "AddHitToHitArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::DitItHitActorComponent_eventAddHitToHitArray_Parms), Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "ClearHitArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "ClearSocketLocationMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics
	{
		struct DitItHitActorComponent_eventGetPrimaryComponent_Parms
		{
			AActor* ActorTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::NewProp_ActorTarget = { "ActorTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DitItHitActorComponent_eventGetPrimaryComponent_Parms, ActorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::NewProp_ActorTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets the primitive component\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Gets the primitive component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "GetPrimaryComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::DitItHitActorComponent_eventGetPrimaryComponent_Parms), Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "GetSocket_t0", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_GetSockets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_GetSockets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets the sockets\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Gets the sockets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_GetSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "GetSockets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_GetSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_GetSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_GetSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_GetSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics
	{
		struct DitItHitActorComponent_eventSetupVariables_Parms
		{
			UPrimitiveComponent* MyPrimitiveTarget;
			AActor* MyActorTarget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPrimitiveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPrimitiveTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActorTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget = { "MyPrimitiveTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DitItHitActorComponent_eventSetupVariables_Parms, MyPrimitiveTarget), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyActorTarget = { "MyActorTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DitItHitActorComponent_eventSetupVariables_Parms, MyActorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyPrimitiveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::NewProp_MyActorTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "Comment", "////////////\n//A Blueprint callable event to be set in the constructor of the owner to setup the actor or weapon to derive the primitive and therefore the sockets\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "A Blueprint callable event to be set in the constructor of the owner to setup the actor or weapon to derive the primitive and therefore the sockets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "SetupVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::DitItHitActorComponent_eventSetupVariables_Parms), Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics
	{
		struct DitItHitActorComponent_eventToggleTraceCheck_Parms
		{
			bool CanTraceInput;
		};
		static void NewProp_CanTraceInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTraceInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput_SetBit(void* Obj)
	{
		((DitItHitActorComponent_eventToggleTraceCheck_Parms*)Obj)->CanTraceInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput = { "CanTraceInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DitItHitActorComponent_eventToggleTraceCheck_Parms), &Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::NewProp_CanTraceInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Did It Hit?" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "ToggleTraceCheck", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::DitItHitActorComponent_eventToggleTraceCheck_Parms), Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "////////////\n//Updates a map of the socket names and the vector location\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Updates a map of the socket names and the vector location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDitItHitActorComponent, nullptr, "UpdateLastSocketLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDitItHitActorComponent);
	UClass* Z_Construct_UClass_UDitItHitActorComponent_NoRegister()
	{
		return UDitItHitActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDitItHitActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MySockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MySockets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownSocketLocation_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LastKnownSocketLocation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownSocketLocation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LastKnownSocketLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitSameSocketAtDifferentTimes_MetaData[];
#endif
		static void NewProp_bHitSameSocketAtDifferentTimes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitSameSocketAtDifferentTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitOtherSocketsAtSameTime_MetaData[];
#endif
		static void NewProp_bHitOtherSocketsAtSameTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitOtherSocketsAtSameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitOtherSocketsAtDifferentTime_MetaData[];
#endif
		static void NewProp_bHitOtherSocketsAtDifferentTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitOtherSocketsAtDifferentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuloSkip_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ModuloSkip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipStringFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkipStringFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InclusionStringFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InclusionStringFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuloNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ModuloNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanTrace_MetaData[];
#endif
		static void NewProp_CanTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseKismet_MetaData[];
#endif
		static void NewProp_UseKismet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseKismet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceByChannelOrObjects_MetaData[];
#endif
		static void NewProp_TraceByChannelOrObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceByChannelOrObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxHalfSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxHalfSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyKismetTraceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyKismetTraceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MyKismetTraceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyTraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyObjectTypesToHit_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyObjectTypesToHit_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyObjectTypesToHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldTraceComplex_MetaData[];
#endif
		static void NewProp_ShouldTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MyActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldIgnoreSelf_MetaData[];
#endif
		static void NewProp_ShouldIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldIgnoreSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyDrawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyDrawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTraceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTraceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTraceHitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTraceHitColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyDrawDebugType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyDrawDebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyWorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyWorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDitItHitActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DidItHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDitItHitActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDitItHitActorComponent_AddHitToHitArray, "AddHitToHitArray" }, // 4273150752
		{ &Z_Construct_UFunction_UDitItHitActorComponent_ClearHitArray, "ClearHitArray" }, // 1537687873
		{ &Z_Construct_UFunction_UDitItHitActorComponent_ClearSocketLocationMap, "ClearSocketLocationMap" }, // 3189654853
		{ &Z_Construct_UFunction_UDitItHitActorComponent_GetPrimaryComponent, "GetPrimaryComponent" }, // 50984800
		{ &Z_Construct_UFunction_UDitItHitActorComponent_GetSocket_t0, "GetSocket_t0" }, // 3140370964
		{ &Z_Construct_UFunction_UDitItHitActorComponent_GetSockets, "GetSockets" }, // 2083740968
		{ &Z_Construct_UFunction_UDitItHitActorComponent_SetupVariables, "SetupVariables" }, // 2673960074
		{ &Z_Construct_UFunction_UDitItHitActorComponent_ToggleTraceCheck, "ToggleTraceCheck" }, // 1062549932
		{ &Z_Construct_UFunction_UDitItHitActorComponent_UpdateLastSocketLocation, "UpdateLastSocketLocation" }, // 2859202585
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "AC_DitItHit" },
		{ "IncludePath", "DitItHitActorComponent.h" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_OnItemAdded_MetaData[] = {
		{ "Category", "AC_DitItHit" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, OnItemAdded), Z_Construct_UDelegateFunction_DidItHit_OnItemAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_OnItemAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_OnItemAdded_MetaData)) }; // 3375585811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyStaticMeshComponent_MetaData[] = {
		{ "Comment", "//Required to determine sockets locations\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Required to determine sockets locations" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyStaticMeshComponent = { "MyStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyPrimitive_MetaData[] = {
		{ "Comment", "//Required to determine sockets locations\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Required to determine sockets locations" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyPrimitive = { "MyPrimitive", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyPrimitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActor_MetaData[] = {
		{ "Comment", "//Fallback in case no primitive or staticmesh comp is available\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Fallback in case no primitive or staticmesh comp is available" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActor_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets_Inner = { "MySockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets_MetaData[] = {
		{ "Comment", "//The whole point of the plugin\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "The whole point of the plugin" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets = { "MySockets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MySockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_ValueProp = { "LastKnownSocketLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_Key_KeyProp = { "LastKnownSocketLocation_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_MetaData[] = {
		{ "Comment", "//To keep sockets in memory and their previous locations\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "To keep sockets in memory and their previous locations" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation = { "LastKnownSocketLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, LastKnownSocketLocation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "If true, will trace between the same socket at different times" },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->bHitSameSocketAtDifferentTimes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes = { "bHitSameSocketAtDifferentTimes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "If true, will trace between the different sockets at the same time" },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->bHitOtherSocketsAtSameTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime = { "bHitOtherSocketsAtSameTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "If true, will trace between the different socket at different times" },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->bHitOtherSocketsAtDifferentTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime = { "bHitOtherSocketsAtDifferentTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloSkip_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Modulo skip factor. Can be used to skip ticks." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloSkip = { "ModuloSkip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, ModuloSkip), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloSkip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SkipStringFilter_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "String filter to skip socket names containing this string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SkipStringFilter = { "SkipStringFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, SkipStringFilter), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SkipStringFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SkipStringFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_InclusionStringFilter_MetaData[] = {
		{ "Category", "Method" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "String filter to only include socket names containing this string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_InclusionStringFilter = { "InclusionStringFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, InclusionStringFilter), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_InclusionStringFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_InclusionStringFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloNumber = { "ModuloNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, ModuloNumber), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloNumber_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray_Inner = { "HitArray", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Return Value for the plugin. It is a raw hit struct and can be broken down further." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray = { "HitArray", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, HitArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray_MetaData)) }; // 1416937132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace_MetaData[] = {
		{ "Comment", "//Boolean used during Tick\n" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "ToolTip", "Boolean used during Tick" },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->CanTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace = { "CanTrace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Kismet will use the regular nodes in blueprints however may be more costly. Great for debugging though!" },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->UseKismet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet = { "UseKismet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "If True, will trace by channel; otherwise will trace for objects." },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->TraceByChannelOrObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects = { "TraceByChannelOrObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxHalfSize_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you use BoxTrace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxHalfSize = { "BoxHalfSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, BoxHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxHalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxHalfSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxOrientation_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you use BoxTrace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxOrientation = { "BoxOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, BoxOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you use CapsuleTrace." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, CapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you use CapsuleTrace." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, CapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you use SphereTrace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SphereRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Allows to change from the regular line trace." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType = { "MyKismetTraceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyKismetTraceType), Z_Construct_UEnum_DidItHit_EKismetTraceType, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType_MetaData)) }; // 3776016800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceChannel_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you trace by channel." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceChannel = { "MyTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceChannel_MetaData)) }; // 2906040657
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_Inner = { "MyObjectTypesToHit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "In case you trace for objects (array)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit = { "MyObjectTypesToHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyObjectTypesToHit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "True means trace complex, false means trace simple collisions." },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->ShouldTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex = { "ShouldTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore_Inner = { "MyActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Actors to ignore (array)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore = { "MyActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "True means it will ignore self." },
	};
#endif
	void Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_SetBit(void* Obj)
	{
		((UDitItHitActorComponent*)Obj)->ShouldIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf = { "ShouldIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDitItHitActorComponent), &Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawTime_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Custom duration for draw time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawTime = { "MyDrawTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyDrawTime), METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceColor_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Color when tracing but not hitting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceColor = { "MyTraceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceHitColor_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Color when hitting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceHitColor = { "MyTraceHitColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyTraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceHitColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceHitColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawDebugType_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "How you want to debug the trace if at all." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawDebugType = { "MyDrawDebugType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyDrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawDebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawDebugType_MetaData)) }; // 2158289653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyWorldContextObject_MetaData[] = {
		{ "Category", "KismetTraceSettings" },
		{ "ModuleRelativePath", "Public/DitItHitActorComponent.h" },
		{ "Tooltip", "Set by default to this. Do not change unless you know what it does." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyWorldContextObject = { "MyWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDitItHitActorComponent, MyWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyWorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyWorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDitItHitActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_OnItemAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyPrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MySockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_LastKnownSocketLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitSameSocketAtDifferentTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtSameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_bHitOtherSocketsAtDifferentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloSkip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SkipStringFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_InclusionStringFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ModuloNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_HitArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CanTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_UseKismet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_TraceByChannelOrObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxHalfSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_BoxOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_CapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyKismetTraceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyObjectTypesToHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_ShouldIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyTraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyDrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDitItHitActorComponent_Statics::NewProp_MyWorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDitItHitActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDitItHitActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDitItHitActorComponent_Statics::ClassParams = {
		&UDitItHitActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDitItHitActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDitItHitActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDitItHitActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDitItHitActorComponent()
	{
		if (!Z_Registration_Info_UClass_UDitItHitActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDitItHitActorComponent.OuterSingleton, Z_Construct_UClass_UDitItHitActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDitItHitActorComponent.OuterSingleton;
	}
	template<> DIDITHIT_API UClass* StaticClass<UDitItHitActorComponent>()
	{
		return UDitItHitActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDitItHitActorComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics::EnumInfo[] = {
		{ EKismetTraceType_StaticEnum, TEXT("EKismetTraceType"), &Z_Registration_Info_UEnum_EKismetTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3776016800U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDitItHitActorComponent, UDitItHitActorComponent::StaticClass, TEXT("UDitItHitActorComponent"), &Z_Registration_Info_UClass_UDitItHitActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDitItHitActorComponent), 1271529317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_689670261(TEXT("/Script/DidItHit"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
