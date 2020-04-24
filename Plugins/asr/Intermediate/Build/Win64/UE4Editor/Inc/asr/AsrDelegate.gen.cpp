// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "asr/Public/AsrDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsrDelegate() {}
// Cross Module References
	ASR_API UClass* Z_Construct_UClass_UAsrDelegate_NoRegister();
	ASR_API UClass* Z_Construct_UClass_UAsrDelegate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_asr();
// End Cross Module References
	void UAsrDelegate::StaticRegisterNativesUAsrDelegate()
	{
	}
	UClass* Z_Construct_UClass_UAsrDelegate_NoRegister()
	{
		return UAsrDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UAsrDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsrDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_asr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsrDelegate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsrDelegate.h" },
		{ "ModuleRelativePath", "Public/AsrDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsrDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsrDelegate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsrDelegate_Statics::ClassParams = {
		&UAsrDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsrDelegate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsrDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsrDelegate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsrDelegate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsrDelegate, 1549603123);
	template<> ASR_API UClass* StaticClass<UAsrDelegate>()
	{
		return UAsrDelegate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsrDelegate(Z_Construct_UClass_UAsrDelegate, &UAsrDelegate::StaticClass, TEXT("/Script/asr"), TEXT("UAsrDelegate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsrDelegate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
