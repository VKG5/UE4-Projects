// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Learning_Project_1/Learning_Project_1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearning_Project_1HUD() {}
// Cross Module References
	LEARNING_PROJECT_1_API UClass* Z_Construct_UClass_ALearning_Project_1HUD_NoRegister();
	LEARNING_PROJECT_1_API UClass* Z_Construct_UClass_ALearning_Project_1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Learning_Project_1();
// End Cross Module References
	void ALearning_Project_1HUD::StaticRegisterNativesALearning_Project_1HUD()
	{
	}
	UClass* Z_Construct_UClass_ALearning_Project_1HUD_NoRegister()
	{
		return ALearning_Project_1HUD::StaticClass();
	}
	struct Z_Construct_UClass_ALearning_Project_1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearning_Project_1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Learning_Project_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearning_Project_1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Learning_Project_1HUD.h" },
		{ "ModuleRelativePath", "Learning_Project_1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearning_Project_1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearning_Project_1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALearning_Project_1HUD_Statics::ClassParams = {
		&ALearning_Project_1HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALearning_Project_1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALearning_Project_1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALearning_Project_1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALearning_Project_1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearning_Project_1HUD, 3044366958);
	template<> LEARNING_PROJECT_1_API UClass* StaticClass<ALearning_Project_1HUD>()
	{
		return ALearning_Project_1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearning_Project_1HUD(Z_Construct_UClass_ALearning_Project_1HUD, &ALearning_Project_1HUD::StaticClass, TEXT("/Script/Learning_Project_1"), TEXT("ALearning_Project_1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearning_Project_1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
