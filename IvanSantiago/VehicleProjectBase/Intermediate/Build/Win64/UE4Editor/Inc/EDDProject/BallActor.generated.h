// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDDPROJECT_BallActor_generated_h
#error "BallActor.generated.h already included, missing '#pragma once' in BallActor.h"
#endif
#define EDDPROJECT_BallActor_generated_h

#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_SPARSE_DATA
#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeTheBallJump);


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeTheBallJump);


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallActor(); \
	friend struct Z_Construct_UClass_ABallActor_Statics; \
public: \
	DECLARE_CLASS(ABallActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(ABallActor)


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABallActor(); \
	friend struct Z_Construct_UClass_ABallActor_Statics; \
public: \
	DECLARE_CLASS(ABallActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(ABallActor)


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallActor(ABallActor&&); \
	NO_API ABallActor(const ABallActor&); \
public:


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallActor(ABallActor&&); \
	NO_API ABallActor(const ABallActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallActor)


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_PRIVATE_PROPERTY_OFFSET
#define VehicleProjectBase_Source_EDDProject_BallActor_h_9_PROLOG
#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_RPC_WRAPPERS \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_INCLASS \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleProjectBase_Source_EDDProject_BallActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_INCLASS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_BallActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDDPROJECT_API UClass* StaticClass<class ABallActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleProjectBase_Source_EDDProject_BallActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS