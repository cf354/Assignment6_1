// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assignment6/Public/SpartaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaGameMode() {}

// Begin Cross Module References
ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpartaGameMode();
ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpartaGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_assignment6();
// End Cross Module References

// Begin Class ASpartaGameMode
void ASpartaGameMode::StaticRegisterNativesASpartaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaGameMode);
UClass* Z_Construct_UClass_ASpartaGameMode_NoRegister()
{
	return ASpartaGameMode::StaticClass();
}
struct Z_Construct_UClass_ASpartaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpartaGameMode.h" },
		{ "ModuleRelativePath", "Public/SpartaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpartaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaGameMode_Statics::ClassParams = {
	&ASpartaGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaGameMode()
{
	if (!Z_Registration_Info_UClass_ASpartaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaGameMode.OuterSingleton, Z_Construct_UClass_ASpartaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaGameMode.OuterSingleton;
}
template<> ASSIGNMENT6_API UClass* StaticClass<ASpartaGameMode>()
{
	return ASpartaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaGameMode);
ASpartaGameMode::~ASpartaGameMode() {}
// End Class ASpartaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpartaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaGameMode, ASpartaGameMode::StaticClass, TEXT("ASpartaGameMode"), &Z_Registration_Info_UClass_ASpartaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaGameMode), 3300657305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpartaGameMode_h_4123634262(TEXT("/Script/assignment6"),
	Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpartaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_SpartaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
