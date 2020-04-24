// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASR_AsrDelegate_generated_h
#error "AsrDelegate.generated.h already included, missing '#pragma once' in AsrDelegate.h"
#endif
#define ASR_AsrDelegate_generated_h

#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_RPC_WRAPPERS
#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsrDelegate(); \
	friend struct Z_Construct_UClass_UAsrDelegate_Statics; \
public: \
	DECLARE_CLASS(UAsrDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/asr"), NO_API) \
	DECLARE_SERIALIZER(UAsrDelegate)


#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAsrDelegate(); \
	friend struct Z_Construct_UClass_UAsrDelegate_Statics; \
public: \
	DECLARE_CLASS(UAsrDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/asr"), NO_API) \
	DECLARE_SERIALIZER(UAsrDelegate)


#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsrDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsrDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsrDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsrDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsrDelegate(UAsrDelegate&&); \
	NO_API UAsrDelegate(const UAsrDelegate&); \
public:


#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsrDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsrDelegate(UAsrDelegate&&); \
	NO_API UAsrDelegate(const UAsrDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsrDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsrDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsrDelegate)


#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_PRIVATE_PROPERTY_OFFSET
#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_12_PROLOG
#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_PRIVATE_PROPERTY_OFFSET \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_RPC_WRAPPERS \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_INCLASS \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_PRIVATE_PROPERTY_OFFSET \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_INCLASS_NO_PURE_DECLS \
	AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASR_API UClass* StaticClass<class UAsrDelegate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AsrPlugin_Plugins_asr_Source_asr_Public_AsrDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
