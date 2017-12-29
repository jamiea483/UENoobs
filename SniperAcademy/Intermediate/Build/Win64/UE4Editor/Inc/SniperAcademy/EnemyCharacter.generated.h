// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SNIPERACADEMY_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define SNIPERACADEMY_EnemyCharacter_generated_h

#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend SNIPERACADEMY_API class UClass* Z_Construct_UClass_AEnemyCharacter(); \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SniperAcademy"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend SNIPERACADEMY_API class UClass* Z_Construct_UClass_AEnemyCharacter(); \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SniperAcademy"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_9_PROLOG
#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_RPC_WRAPPERS \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_INCLASS \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SniperAcademy_Source_SniperAcademy_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SniperAcademy_Source_SniperAcademy_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
