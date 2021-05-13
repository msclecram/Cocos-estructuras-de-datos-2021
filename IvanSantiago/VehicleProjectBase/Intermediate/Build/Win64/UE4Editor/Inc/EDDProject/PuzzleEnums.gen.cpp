// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EDDProject/PuzzleEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleEnums() {}
// Cross Module References
	EDDPROJECT_API UEnum* Z_Construct_UEnum_EDDProject_PuzzleColor();
	UPackage* Z_Construct_UPackage__Script_EDDProject();
// End Cross Module References
	static UEnum* PuzzleColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EDDProject_PuzzleColor, Z_Construct_UPackage__Script_EDDProject(), TEXT("PuzzleColor"));
		}
		return Singleton;
	}
	template<> EDDPROJECT_API UEnum* StaticEnum<PuzzleColor>()
	{
		return PuzzleColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PuzzleColor(PuzzleColor_StaticEnum, TEXT("/Script/EDDProject"), TEXT("PuzzleColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EDDProject_PuzzleColor_Hash() { return 2497950387U; }
	UEnum* Z_Construct_UEnum_EDDProject_PuzzleColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EDDProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PuzzleColor"), 0, Get_Z_Construct_UEnum_EDDProject_PuzzleColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Red", (int64)Red },
				{ "Blue", (int64)Blue },
				{ "Green", (int64)Green },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blue.DisplayName", "Blue" },
				{ "Blue.Name", "Blue" },
				{ "Green.DisplayName", "Green" },
				{ "Green.Name", "Green" },
				{ "ModuleRelativePath", "PuzzleEnums.h" },
				{ "Red.DisplayName", "Red" },
				{ "Red.Name", "Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EDDProject,
				nullptr,
				"PuzzleColor",
				"PuzzleColor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
