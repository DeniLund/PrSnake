// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrSnake/PrSnakeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrSnakeGameModeBase() {}
// Cross Module References
	PRSNAKE_API UClass* Z_Construct_UClass_APrSnakeGameModeBase_NoRegister();
	PRSNAKE_API UClass* Z_Construct_UClass_APrSnakeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PrSnake();
// End Cross Module References
	void APrSnakeGameModeBase::StaticRegisterNativesAPrSnakeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APrSnakeGameModeBase_NoRegister()
	{
		return APrSnakeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APrSnakeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrSnakeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PrSnake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrSnakeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PrSnakeGameModeBase.h" },
		{ "ModuleRelativePath", "PrSnakeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrSnakeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrSnakeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrSnakeGameModeBase_Statics::ClassParams = {
		&APrSnakeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrSnakeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrSnakeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrSnakeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrSnakeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrSnakeGameModeBase, 3161766665);
	template<> PRSNAKE_API UClass* StaticClass<APrSnakeGameModeBase>()
	{
		return APrSnakeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrSnakeGameModeBase(Z_Construct_UClass_APrSnakeGameModeBase, &APrSnakeGameModeBase::StaticClass, TEXT("/Script/PrSnake"), TEXT("APrSnakeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrSnakeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
