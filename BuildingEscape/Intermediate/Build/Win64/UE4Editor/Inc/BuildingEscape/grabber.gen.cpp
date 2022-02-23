// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/grabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegrabber() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_Ugrabber_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_Ugrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	void Ugrabber::StaticRegisterNativesUgrabber()
	{
	}
	UClass* Z_Construct_UClass_Ugrabber_NoRegister()
	{
		return Ugrabber::StaticClass();
	}
	struct Z_Construct_UClass_Ugrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_physicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ugrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ugrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "grabber.h" },
		{ "ModuleRelativePath", "grabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ugrabber_Statics::NewProp_physicsHandle_MetaData[] = {
		{ "Comment", "// To ensure no issues if unassigned, we use nullptr\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "grabber.h" },
		{ "ToolTip", "To ensure no issues if unassigned, we use nullptr" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ugrabber_Statics::NewProp_physicsHandle = { "physicsHandle", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ugrabber, physicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ugrabber_Statics::NewProp_physicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ugrabber_Statics::NewProp_physicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ugrabber_Statics::NewProp_inputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ugrabber_Statics::NewProp_inputComponent = { "inputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ugrabber, inputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ugrabber_Statics::NewProp_inputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ugrabber_Statics::NewProp_inputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ugrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ugrabber_Statics::NewProp_physicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ugrabber_Statics::NewProp_inputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ugrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ugrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ugrabber_Statics::ClassParams = {
		&Ugrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ugrabber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ugrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ugrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ugrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ugrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ugrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ugrabber, 759306509);
	template<> BUILDINGESCAPE_API UClass* StaticClass<Ugrabber>()
	{
		return Ugrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ugrabber(Z_Construct_UClass_Ugrabber, &Ugrabber::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("Ugrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ugrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
