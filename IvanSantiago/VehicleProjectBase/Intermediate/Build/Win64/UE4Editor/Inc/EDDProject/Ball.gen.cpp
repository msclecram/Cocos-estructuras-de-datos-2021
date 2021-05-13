// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EDDProject/Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}
// Cross Module References
	EDDPROJECT_API UClass* Z_Construct_UClass_UBall_NoRegister();
	EDDPROJECT_API UClass* Z_Construct_UClass_UBall();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EDDProject();
	EDDPROJECT_API UEnum* Z_Construct_UEnum_EDDProject_PuzzleColor();
// End Cross Module References
	void UBall::StaticRegisterNativesUBall()
	{
	}
	UClass* Z_Construct_UClass_UBall_NoRegister()
	{
		return UBall::StaticClass();
	}
	struct Z_Construct_UClass_UBall_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EDDProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBall_Statics::NewProp_ballID_MetaData[] = {
		{ "Category", "Example" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBall_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBall, ballID), METADATA_PARAMS(Z_Construct_UClass_UBall_Statics::NewProp_ballID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBall_Statics::NewProp_ballID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBall_Statics::NewProp_puzzleColor_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBall_Statics::NewProp_puzzleColor = { "puzzleColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBall, puzzleColor), Z_Construct_UEnum_EDDProject_PuzzleColor, METADATA_PARAMS(Z_Construct_UClass_UBall_Statics::NewProp_puzzleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBall_Statics::NewProp_puzzleColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBall_Statics::NewProp_ballID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBall_Statics::NewProp_puzzleColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBall_Statics::ClassParams = {
		&UBall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBall_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBall, 67202317);
	template<> EDDPROJECT_API UClass* StaticClass<UBall>()
	{
		return UBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBall(Z_Construct_UClass_UBall, &UBall::StaticClass, TEXT("/Script/EDDProject"), TEXT("UBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
