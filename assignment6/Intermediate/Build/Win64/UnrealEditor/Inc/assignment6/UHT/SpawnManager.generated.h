// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASSIGNMENT6_SpawnManager_generated_h
#error "SpawnManager.generated.h already included, missing '#pragma once' in SpawnManager.h"
#endif
#define ASSIGNMENT6_SpawnManager_generated_h

#define FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyItem); \
	DECLARE_FUNCTION(execSpawnAll);


#define FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnManager(); \
	friend struct Z_Construct_UClass_ASpawnManager_Statics; \
public: \
	DECLARE_CLASS(ASpawnManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/assignment6"), NO_API) \
	DECLARE_SERIALIZER(ASpawnManager)


#define FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnManager(ASpawnManager&&); \
	ASpawnManager(const ASpawnManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnManager) \
	NO_API virtual ~ASpawnManager();


#define FID_assignment6_Source_assignment6_Public_SpawnManager_h_9_PROLOG
#define FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_assignment6_Source_assignment6_Public_SpawnManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT6_API UClass* StaticClass<class ASpawnManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assignment6_Source_assignment6_Public_SpawnManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
