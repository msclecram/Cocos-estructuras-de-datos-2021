// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EDDProject/GameLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLogic() {}
// Cross Module References
	EDDPROJECT_API UClass* Z_Construct_UClass_AGameLogic_NoRegister();
	EDDPROJECT_API UClass* Z_Construct_UClass_AGameLogic();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EDDProject();
	EDDPROJECT_API UClass* Z_Construct_UClass_APuzzleBall_NoRegister();
	EDDPROJECT_API UEnum* Z_Construct_UEnum_EDDProject_PuzzleColor();
// End Cross Module References
	DEFINE_FUNCTION(AGameLogic::execModifyScore)
	{
		P_GET_OBJECT(APuzzleBall,Z_Param_ballToAnalyze);
		P_GET_PROPERTY(FByteProperty,Z_Param_porterColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ModifyScore(Z_Param_ballToAnalyze,PuzzleColor(Z_Param_porterColor));
		P_NATIVE_END;
	}
	void AGameLogic::StaticRegisterNativesAGameLogic()
	{
		UClass* Class = AGameLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyScore", &AGameLogic::execModifyScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameLogic_ModifyScore_Statics
	{
		struct GameLogic_eventModifyScore_Parms
		{
			APuzzleBall* ballToAnalyze;
			TEnumAsByte<PuzzleColor> porterColor;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ballToAnalyze;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_porterColor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::NewProp_ballToAnalyze = { "ballToAnalyze", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventModifyScore_Parms, ballToAnalyze), Z_Construct_UClass_APuzzleBall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::NewProp_porterColor = { "porterColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventModifyScore_Parms, porterColor), Z_Construct_UEnum_EDDProject_PuzzleColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventModifyScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::NewProp_ballToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::NewProp_porterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "ModifyScore", nullptr, nullptr, sizeof(GameLogic_eventModifyScore_Parms), Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_ModifyScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_ModifyScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameLogic_NoRegister()
	{
		return AGameLogic::StaticClass();
	}
	struct Z_Construct_UClass_AGameLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EDDProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameLogic_ModifyScore, "ModifyScore" }, // 957965744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameLogic.h" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameLogic_Statics::ClassParams = {
		&AGameLogic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLogic, 47084045);
	template<> EDDPROJECT_API UClass* StaticClass<AGameLogic>()
	{
		return AGameLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLogic(Z_Construct_UClass_AGameLogic, &AGameLogic::StaticClass, TEXT("/Script/EDDProject"), TEXT("AGameLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
