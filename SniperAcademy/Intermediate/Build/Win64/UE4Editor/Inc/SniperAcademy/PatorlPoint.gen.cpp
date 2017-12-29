// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PatorlPoint.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatorlPoint() {}
// Cross Module References
	SNIPERACADEMY_API UClass* Z_Construct_UClass_APatorlPoint_NoRegister();
	SNIPERACADEMY_API UClass* Z_Construct_UClass_APatorlPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SniperAcademy();
// End Cross Module References
	void APatorlPoint::StaticRegisterNativesAPatorlPoint()
	{
	}
	UClass* Z_Construct_UClass_APatorlPoint_NoRegister()
	{
		return APatorlPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_APatorlPoint()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SniperAcademy();
			OuterClass = APatorlPoint::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<APatorlPoint> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PatorlPoint.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PatorlPoint.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatorlPoint, 4057391052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatorlPoint(Z_Construct_UClass_APatorlPoint, &APatorlPoint::StaticClass, TEXT("/Script/SniperAcademy"), TEXT("APatorlPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatorlPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
