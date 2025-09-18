// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assignment6/Public/SpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}

// Begin Cross Module References
ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpawnManager();
ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpawnManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_assignment6();
// End Cross Module References

// Begin Class ASpawnManager Function DestroyItem
struct Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics
{
	struct SpawnManager_eventDestroyItem_Parms
	{
		AActor* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnManager_eventDestroyItem_Parms, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnManager, nullptr, "DestroyItem", nullptr, nullptr, Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::SpawnManager_eventDestroyItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::SpawnManager_eventDestroyItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnManager_DestroyItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnManager_DestroyItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnManager::execDestroyItem)
{
	P_GET_OBJECT(AActor,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class ASpawnManager Function DestroyItem

// Begin Class ASpawnManager Function SpawnAll
struct Z_Construct_UFunction_ASpawnManager_SpawnAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnManager_SpawnAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnManager, nullptr, "SpawnAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnManager_SpawnAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnManager_SpawnAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawnManager_SpawnAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnManager_SpawnAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnManager::execSpawnAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnAll();
	P_NATIVE_END;
}
// End Class ASpawnManager Function SpawnAll

// Begin Class ASpawnManager
void ASpawnManager::StaticRegisterNativesASpawnManager()
{
	UClass* Class = ASpawnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyItem", &ASpawnManager::execDestroyItem },
		{ "SpawnAll", &ASpawnManager::execSpawnAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnManager);
UClass* Z_Construct_UClass_ASpawnManager_NoRegister()
{
	return ASpawnManager::StaticClass();
}
struct Z_Construct_UClass_ASpawnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Item|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNumber_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpawnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnManager_DestroyItem, "DestroyItem" }, // 1164556059
		{ &Z_Construct_UFunction_ASpawnManager_SpawnAll, "SpawnAll" }, // 1007847210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_AllNumber = { "AllNumber", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, AllNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNumber_MetaData), NewProp_AllNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnLocations_Inner = { "SpawnLocations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, SpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocations_MetaData), NewProp_SpawnLocations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distance_MetaData), NewProp_distance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnedItems_Inner = { "SpawnedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnedItems = { "SpawnedItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnManager, SpawnedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedItems_MetaData), NewProp_SpawnedItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_AllNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnManager_Statics::NewProp_SpawnedItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnManager_Statics::ClassParams = {
	&ASpawnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnManager()
{
	if (!Z_Registration_Info_UClass_ASpawnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnManager.OuterSingleton, Z_Construct_UClass_ASpawnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnManager.OuterSingleton;
}
template<> ASSIGNMENT6_API UClass* StaticClass<ASpawnManager>()
{
	return ASpawnManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnManager);
ASpawnManager::~ASpawnManager() {}
// End Class ASpawnManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpawnManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnManager, ASpawnManager::StaticClass, TEXT("ASpawnManager"), &Z_Registration_Info_UClass_ASpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnManager), 1816349436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpawnManager_h_4140888308(TEXT("/Script/assignment6"),
	Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpawnManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
