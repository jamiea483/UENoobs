// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EnemyAIController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}
// Cross Module References
	SNIPERACADEMY_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_AEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SniperAcademy();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
	{
	}
	UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
	{
		return AEnemyAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyAIController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_SniperAcademy();
			OuterClass = AEnemyAIController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;


				UProperty* NewProp_BotTargetPoints = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BotTargetPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BotTargetPoints, AEnemyAIController), 0x0040000000020001);
				UProperty* NewProp_BotTargetPoints_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BotTargetPoints, TEXT("BotTargetPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_BehaviorComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BehaviorComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BehaviorComp, AEnemyAIController), 0x0040000000082008, Z_Construct_UClass_UBehaviorTreeComponent_NoRegister());
				UProperty* NewProp_BlackboardComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BlackboardComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BlackboardComp, AEnemyAIController), 0x0040000000082008, Z_Construct_UClass_UBlackboardComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemyAIController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnemyAIController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("EnemyAIController.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("//UENUM(BlueprintType)\n//enum class State : uint8\n//{\n//     EC_Start                UMETA(DisplayName = \"Start\"),\n//     EC_Running              UMETA(DisplayName = \"Running\"),\n//     EC_Pause                UMETA(DisplayName = \"Pause\"),\n//     EC_GameOver             UMETA(DisplayName = \"GameOver\")\n//};"));
				MetaData->SetValue(NewProp_BotTargetPoints, TEXT("Category"), TEXT("AIComp"));
				MetaData->SetValue(NewProp_BotTargetPoints, TEXT("ModuleRelativePath"), TEXT("EnemyAIController.h"));
				MetaData->SetValue(NewProp_BehaviorComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BehaviorComp, TEXT("ModuleRelativePath"), TEXT("EnemyAIController.h"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BlackboardComp, TEXT("ModuleRelativePath"), TEXT("EnemyAIController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAIController, 1755406232);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAIController(Z_Construct_UClass_AEnemyAIController, &AEnemyAIController::StaticClass, TEXT("/Script/SniperAcademy"), TEXT("AEnemyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
