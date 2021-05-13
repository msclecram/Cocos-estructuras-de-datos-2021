// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EDDProject/PuzzleBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleBall() {}
// Cross Module References
	EDDPROJECT_API UClass* Z_Construct_UClass_APuzzleBall_NoRegister();
	EDDPROJECT_API UClass* Z_Construct_UClass_APuzzleBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EDDProject();
	EDDPROJECT_API UEnum* Z_Construct_UEnum_EDDProject_PuzzleColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APuzzleBall::StaticRegisterNativesAPuzzleBall()
	{
	}
	UClass* Z_Construct_UClass_APuzzleBall_NoRegister()
	{
		return APuzzleBall::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ballID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ballID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_puzzleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_puzzleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EDDProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleBall.h" },
		{ "ModuleRelativePath", "PuzzleBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleBall_Statics::NewProp_ballID_MetaData[] = {
		{ "Category", "Example" },
		{ "ModuleRelativePath", "PuzzleBall.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APuzzleBall_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleBall, ballID), METADATA_PARAMS(Z_Construct_UClass_APuzzleBall_Statics::NewProp_ballID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleBall_Statics::NewProp_ballID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleBall_Statics::NewProp_puzzleColor_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "PuzzleBall.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APuzzleBall_Statics::NewProp_puzzleColor = { "puzzleColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleBall, puzzleColor), Z_Construct_UEnum_EDDProject_PuzzleColor, METADATA_PARAMS(Z_Construct_UClass_APuzzleBall_Statics::NewProp_puzzleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleBall_Statics::NewProp_puzzleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleBall_Statics::NewProp_myStaticMesh_MetaData[] = {
		{ "Category", "Status" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuzzleBall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleBall_Statics::NewProp_myStaticMesh = { "myStaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleBall, myStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzleBall_Statics::NewProp_myStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleBall_Statics::NewProp_myStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleBall_Statics::NewProp_ballID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleBall_Statics::NewProp_puzzleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleBall_Statics::NewProp_myStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleBall_Statics::ClassParams = {
		&APuzzleBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzleBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleBall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleBall, 3173465186);
	template<> EDDPROJECT_API UClass* StaticClass<APuzzleBall>()
	{
		return APuzzleBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleBall(Z_Construct_UClass_APuzzleBall, &APuzzleBall::StaticClass, TEXT("/Script/EDDProject"), TEXT("APuzzleBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
