// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_grabber_generated_h
#error "grabber.generated.h already included, missing '#pragma once' in grabber.h"
#endif
#define BUILDINGESCAPE_grabber_generated_h

#define BuildingEscape_Source_BuildingEscape_grabber_h_14_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_grabber_h_14_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_grabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_grabber_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUgrabber(); \
	friend struct Z_Construct_UClass_Ugrabber_Statics; \
public: \
	DECLARE_CLASS(Ugrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(Ugrabber)


#define BuildingEscape_Source_BuildingEscape_grabber_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUgrabber(); \
	friend struct Z_Construct_UClass_Ugrabber_Statics; \
public: \
	DECLARE_CLASS(Ugrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(Ugrabber)


#define BuildingEscape_Source_BuildingEscape_grabber_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ugrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ugrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ugrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ugrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ugrabber(Ugrabber&&); \
	NO_API Ugrabber(const Ugrabber&); \
public:


#define BuildingEscape_Source_BuildingEscape_grabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ugrabber(Ugrabber&&); \
	NO_API Ugrabber(const Ugrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ugrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ugrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ugrabber)


#define BuildingEscape_Source_BuildingEscape_grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__physicsHandle() { return STRUCT_OFFSET(Ugrabber, physicsHandle); } \
	FORCEINLINE static uint32 __PPO__inputComponent() { return STRUCT_OFFSET(Ugrabber, inputComponent); }


#define BuildingEscape_Source_BuildingEscape_grabber_h_11_PROLOG
#define BuildingEscape_Source_BuildingEscape_grabber_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_INCLASS \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_grabber_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_grabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class Ugrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
