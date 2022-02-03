// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_doorControl_generated_h
#error "doorControl.generated.h already included, missing '#pragma once' in doorControl.h"
#endif
#define BUILDINGESCAPE_doorControl_generated_h

#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUdoorControl(); \
	friend struct Z_Construct_UClass_UdoorControl_Statics; \
public: \
	DECLARE_CLASS(UdoorControl, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UdoorControl)


#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUdoorControl(); \
	friend struct Z_Construct_UClass_UdoorControl_Statics; \
public: \
	DECLARE_CLASS(UdoorControl, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UdoorControl)


#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UdoorControl(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UdoorControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UdoorControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UdoorControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UdoorControl(UdoorControl&&); \
	NO_API UdoorControl(const UdoorControl&); \
public:


#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UdoorControl(UdoorControl&&); \
	NO_API UdoorControl(const UdoorControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UdoorControl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UdoorControl); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UdoorControl)


#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__targetYaw() { return STRUCT_OFFSET(UdoorControl, targetYaw); } \
	FORCEINLINE static uint32 __PPO__doorDelayTime() { return STRUCT_OFFSET(UdoorControl, doorDelayTime); } \
	FORCEINLINE static uint32 __PPO__doorCloseSpeed() { return STRUCT_OFFSET(UdoorControl, doorCloseSpeed); } \
	FORCEINLINE static uint32 __PPO__doorOpenSpeed() { return STRUCT_OFFSET(UdoorControl, doorOpenSpeed); } \
	FORCEINLINE static uint32 __PPO__doorPressurePlate() { return STRUCT_OFFSET(UdoorControl, doorPressurePlate); } \
	FORCEINLINE static uint32 __PPO__actorThatOpens() { return STRUCT_OFFSET(UdoorControl, actorThatOpens); } \
	FORCEINLINE static uint32 __PPO__maxMassRequired() { return STRUCT_OFFSET(UdoorControl, maxMassRequired); }


#define BuildingEscape_Source_BuildingEscape_doorControl_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_INCLASS \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_doorControl_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_doorControl_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UdoorControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_doorControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
