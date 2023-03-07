// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class AActor;
class UPrimitiveComponent;
#ifdef DIDITHIT_DitItHitActorComponent_generated_h
#error "DitItHitActorComponent.generated.h already included, missing '#pragma once' in DitItHitActorComponent.h"
#endif
#define DIDITHIT_DitItHitActorComponent_generated_h

#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_31_DELEGATE \
struct _Script_DidItHit_eventOnItemAdded_Parms \
{ \
	FHitResult LastItem; \
}; \
static inline void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FHitResult LastItem) \
{ \
	_Script_DidItHit_eventOnItemAdded_Parms Parms; \
	Parms.LastItem=LastItem; \
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_SPARSE_DATA
#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSocket_t0); \
	DECLARE_FUNCTION(execClearSocketLocationMap); \
	DECLARE_FUNCTION(execClearHitArray); \
	DECLARE_FUNCTION(execToggleTraceCheck); \
	DECLARE_FUNCTION(execAddHitToHitArray); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetPrimaryComponent); \
	DECLARE_FUNCTION(execUpdateLastSocketLocation); \
	DECLARE_FUNCTION(execSetupVariables);


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSocket_t0); \
	DECLARE_FUNCTION(execClearSocketLocationMap); \
	DECLARE_FUNCTION(execClearHitArray); \
	DECLARE_FUNCTION(execToggleTraceCheck); \
	DECLARE_FUNCTION(execAddHitToHitArray); \
	DECLARE_FUNCTION(execGetSockets); \
	DECLARE_FUNCTION(execGetPrimaryComponent); \
	DECLARE_FUNCTION(execUpdateLastSocketLocation); \
	DECLARE_FUNCTION(execSetupVariables);


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDitItHitActorComponent(); \
	friend struct Z_Construct_UClass_UDitItHitActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDitItHitActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DidItHit"), NO_API) \
	DECLARE_SERIALIZER(UDitItHitActorComponent)


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUDitItHitActorComponent(); \
	friend struct Z_Construct_UClass_UDitItHitActorComponent_Statics; \
public: \
	DECLARE_CLASS(UDitItHitActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DidItHit"), NO_API) \
	DECLARE_SERIALIZER(UDitItHitActorComponent)


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDitItHitActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDitItHitActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDitItHitActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDitItHitActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDitItHitActorComponent(UDitItHitActorComponent&&); \
	NO_API UDitItHitActorComponent(const UDitItHitActorComponent&); \
public:


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDitItHitActorComponent(UDitItHitActorComponent&&); \
	NO_API UDitItHitActorComponent(const UDitItHitActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDitItHitActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDitItHitActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDitItHitActorComponent)


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_33_PROLOG
#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_SPARSE_DATA \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_RPC_WRAPPERS \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_INCLASS \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_SPARSE_DATA \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIDITHIT_API UClass* StaticClass<class UDitItHitActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DidItHit_Source_DidItHit_Public_DitItHitActorComponent_h


#define FOREACH_ENUM_EKISMETTRACETYPE(op) \
	op(EKismetTraceType::LineTrace) \
	op(EKismetTraceType::BoxTrace) \
	op(EKismetTraceType::CapsuleTrace) \
	op(EKismetTraceType::SphereTrace) 

enum class EKismetTraceType : uint8;
template<> DIDITHIT_API UEnum* StaticEnum<EKismetTraceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
