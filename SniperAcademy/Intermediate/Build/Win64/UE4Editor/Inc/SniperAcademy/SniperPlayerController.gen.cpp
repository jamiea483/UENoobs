// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SniperPlayerController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperPlayerController() {}
// Cross Module References
	SNIPERACADEMY_API UFunction* Z_Construct_UFunction_ASniperPlayerController_GetScore();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_ASniperPlayerController();
	SNIPERACADEMY_API UFunction* Z_Construct_UFunction_ASniperPlayerController_SetScore();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_ASniperPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SniperAcademy();
// End Cross Module References
	void ASniperPlayerController::StaticRegisterNativesASniperPlayerController()
	{
		UClass* Class = ASniperPlayerController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetScore", (Native)&ASniperPlayerController::execGetScore },
			{ "SetScore", (Native)&ASniperPlayerController::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASniperPlayerController_GetScore()
	{
		struct SniperPlayerController_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ASniperPlayerController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetScore"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SniperPlayerController_eventGetScore_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, SniperPlayerController_eventGetScore_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Score"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SniperPlayerController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASniperPlayerController_SetScore()
	{
		struct SniperPlayerController_eventSetScore_Parms
		{
			int32 value;
		};
		UObject* Outer = Z_Construct_UClass_ASniperPlayerController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetScore"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SniperPlayerController_eventSetScore_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(value, SniperPlayerController_eventSetScore_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Score"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SniperPlayerController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASniperPlayerController_NoRegister()
	{
		return ASniperPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ASniperPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_SniperAcademy();
			OuterClass = ASniperPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASniperPlayerController_GetScore());
				OuterClass->LinkChild(Z_Construct_UFunction_ASniperPlayerController_SetScore());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASniperPlayerController_GetScore(), "GetScore"); // 410411146
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASniperPlayerController_SetScore(), "SetScore"); // 2048675317
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ASniperPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SniperPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SniperPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASniperPlayerController, 3595191366);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASniperPlayerController(Z_Construct_UClass_ASniperPlayerController, &ASniperPlayerController::StaticClass, TEXT("/Script/SniperAcademy"), TEXT("ASniperPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASniperPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
