// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EnemyCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	SNIPERACADEMY_API UFunction* Z_Construct_UFunction_AEnemyCharacter_OnHit();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_AEnemyCharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SniperAcademy();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
		UClass* Class = AEnemyCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AEnemyCharacter::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AEnemyCharacter_OnHit()
	{
		struct EnemyCharacter_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer = Z_Construct_UClass_AEnemyCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(EnemyCharacter_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, EnemyCharacter_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, EnemyCharacter_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, EnemyCharacter_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, EnemyCharacter_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, EnemyCharacter_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("EnemyCharacter.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_SniperAcademy();
			OuterClass = AEnemyCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AEnemyCharacter_OnHit());

				UProperty* NewProp_BotBehavior = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BotBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BotBehavior, AEnemyCharacter), 0x0010000000000001, Z_Construct_UClass_UBehaviorTree_NoRegister());
				UProperty* NewProp_BlackboardComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlackboardComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BlackboardComp, AEnemyCharacter), 0x0010000000080009, Z_Construct_UClass_UBlackboardComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnemyCharacter_OnHit(), "OnHit"); // 263700261
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemyCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EnemyCharacter.h"));
				MetaData->SetValue(NewProp_BotBehavior, TEXT("Category"), TEXT("Behavior"));
				MetaData->SetValue(NewProp_BotBehavior, TEXT("ModuleRelativePath"), TEXT("EnemyCharacter.h"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("Category"), TEXT("Behavior"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("ModuleRelativePath"), TEXT("EnemyCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyCharacter, 1757871086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyCharacter(Z_Construct_UClass_AEnemyCharacter, &AEnemyCharacter::StaticClass, TEXT("/Script/SniperAcademy"), TEXT("AEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
