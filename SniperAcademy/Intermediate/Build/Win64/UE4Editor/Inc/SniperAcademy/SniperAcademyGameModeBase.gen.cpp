// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SniperAcademyGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperAcademyGameModeBase() {}
// Cross Module References
	SNIPERACADEMY_API UClass* Z_Construct_UClass_ASniperAcademyGameModeBase_NoRegister();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_ASniperAcademyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SniperAcademy();
// End Cross Module References
	void ASniperAcademyGameModeBase::StaticRegisterNativesASniperAcademyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASniperAcademyGameModeBase_NoRegister()
	{
		return ASniperAcademyGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ASniperAcademyGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_SniperAcademy();
			OuterClass = ASniperAcademyGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASniperAcademyGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SniperAcademyGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SniperAcademyGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASniperAcademyGameModeBase, 1429757987);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASniperAcademyGameModeBase(Z_Construct_UClass_ASniperAcademyGameModeBase, &ASniperAcademyGameModeBase::StaticClass, TEXT("/Script/SniperAcademy"), TEXT("ASniperAcademyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASniperAcademyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
