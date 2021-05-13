// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APuzzleBall;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef EDDPROJECT_AGoal_generated_h
#error "AGoal.generated.h already included, missing '#pragma once' in AGoal.h"
#endif
#define EDDPROJECT_AGoal_generated_h

#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_SPARSE_DATA
#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execModifyScoreFromBlueprint); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execBeginOverlap);


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyScoreFromBlueprint); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execBeginOverlap);


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGoal(); \
	friend struct Z_Construct_UClass_AAGoal_Statics; \
public: \
	DECLARE_CLASS(AAGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(AAGoal)


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAGoal(); \
	friend struct Z_Construct_UClass_AAGoal_Statics; \
public: \
	DECLARE_CLASS(AAGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(AAGoal)


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAGoal(AAGoal&&); \
	NO_API AAGoal(const AAGoal&); \
public:


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAGoal(AAGoal&&); \
	NO_API AAGoal(const AAGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAGoal)


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_PRIVATE_PROPERTY_OFFSET
#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_13_PROLOG
#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_RPC_WRAPPERS \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_INCLASS \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_INCLASS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_Goal_AGoal_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDDPROJECT_API UClass* StaticClass<class AAGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleProjectBase_Source_EDDProject_Goal_AGoal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
