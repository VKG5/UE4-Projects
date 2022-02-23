// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/doorControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedoorControl() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UdoorControl_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UdoorControl();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void UdoorControl::StaticRegisterNativesUdoorControl()
	{
	}
	UClass* Z_Construct_UClass_UdoorControl_NoRegister()
	{
		return UdoorControl::StaticClass();
	}
	struct Z_Construct_UClass_UdoorControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_targetYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_doorDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorCloseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_doorCloseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorOpenSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_doorOpenSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorPressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorPressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxMassRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxMassRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UdoorControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "doorControl.h" },
		{ "ModuleRelativePath", "doorControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_targetYaw_MetaData[] = {
		{ "Category", "doorControl" },
		{ "Comment", "// Giving default value\n" },
		{ "ModuleRelativePath", "doorControl.h" },
		{ "ToolTip", "Giving default value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_targetYaw = { "targetYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, targetYaw), METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_targetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_targetYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_doorDelayTime_MetaData[] = {
		{ "Category", "doorControl" },
		{ "Comment", "// To define Door Delay Speed\n" },
		{ "ModuleRelativePath", "doorControl.h" },
		{ "ToolTip", "To define Door Delay Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_doorDelayTime = { "doorDelayTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, doorDelayTime), METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_doorCloseSpeed_MetaData[] = {
		{ "Category", "doorControl" },
		{ "Comment", "// To define Door Close Speed\n" },
		{ "ModuleRelativePath", "doorControl.h" },
		{ "ToolTip", "To define Door Close Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_doorCloseSpeed = { "doorCloseSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, doorCloseSpeed), METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorCloseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorCloseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_doorOpenSpeed_MetaData[] = {
		{ "Category", "doorControl" },
		{ "Comment", "// To define Door Open Speed\n" },
		{ "ModuleRelativePath", "doorControl.h" },
		{ "ToolTip", "To define Door Open Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_doorOpenSpeed = { "doorOpenSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, doorOpenSpeed), METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorOpenSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorOpenSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_doorPressurePlate_MetaData[] = {
		{ "Category", "doorControl" },
		{ "Comment", "// Actors\n// Getting the Trigger Volume\n" },
		{ "ModuleRelativePath", "doorControl.h" },
		{ "ToolTip", "Actors\nGetting the Trigger Volume" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_doorPressurePlate = { "doorPressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, doorPressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorPressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_doorPressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_audioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "doorControl.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_audioComponent = { "audioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, audioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_audioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_audioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UdoorControl_Statics::NewProp_maxMassRequired_MetaData[] = {
		{ "Category", "doorControl" },
		{ "ModuleRelativePath", "doorControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UdoorControl_Statics::NewProp_maxMassRequired = { "maxMassRequired", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UdoorControl, maxMassRequired), METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::NewProp_maxMassRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::NewProp_maxMassRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UdoorControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_targetYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_doorDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_doorCloseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_doorOpenSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_doorPressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_audioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UdoorControl_Statics::NewProp_maxMassRequired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UdoorControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UdoorControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UdoorControl_Statics::ClassParams = {
		&UdoorControl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UdoorControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UdoorControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UdoorControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UdoorControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UdoorControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UdoorControl, 2650178149);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UdoorControl>()
	{
		return UdoorControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UdoorControl(Z_Construct_UClass_UdoorControl, &UdoorControl::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UdoorControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UdoorControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
