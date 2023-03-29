// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuokkaVSHumans/Animals/Quokka.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuokka() {}
// Cross Module References
	QUOKKAVSHUMANS_API UClass* Z_Construct_UClass_AQuokka_NoRegister();
	QUOKKAVSHUMANS_API UClass* Z_Construct_UClass_AQuokka();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuokkaVSHumans();
// End Cross Module References
	void AQuokka::StaticRegisterNativesAQuokka()
	{
	}
	UClass* Z_Construct_UClass_AQuokka_NoRegister()
	{
		return AQuokka::StaticClass();
	}
	struct Z_Construct_UClass_AQuokka_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuokka_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuokkaVSHumans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuokka_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animals/Quokka.h" },
		{ "ModuleRelativePath", "Animals/Quokka.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuokka_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuokka>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuokka_Statics::ClassParams = {
		&AQuokka::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuokka_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuokka_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuokka()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuokka_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuokka, 4063367758);
	template<> QUOKKAVSHUMANS_API UClass* StaticClass<AQuokka>()
	{
		return AQuokka::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuokka(Z_Construct_UClass_AQuokka, &AQuokka::StaticClass, TEXT("/Script/QuokkaVSHumans"), TEXT("AQuokka"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuokka);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
