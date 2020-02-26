// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKELETONEDITOR_BoneProxy_generated_h
#error "BoneProxy.generated.h already included, missing '#pragma once' in BoneProxy.h"
#endif
#define SKELETONEDITOR_BoneProxy_generated_h

#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneProxy(); \
	friend struct Z_Construct_UClass_UBoneProxy_Statics; \
public: \
	DECLARE_CLASS(UBoneProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletonEditor"), NO_API) \
	DECLARE_SERIALIZER(UBoneProxy)


#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBoneProxy(); \
	friend struct Z_Construct_UClass_UBoneProxy_Statics; \
public: \
	DECLARE_CLASS(UBoneProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletonEditor"), NO_API) \
	DECLARE_SERIALIZER(UBoneProxy)


#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoneProxy(UBoneProxy&&); \
	NO_API UBoneProxy(const UBoneProxy&); \
public:


#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoneProxy(UBoneProxy&&); \
	NO_API UBoneProxy(const UBoneProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoneProxy)


#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_16_PROLOG
#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_INCLASS \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETONEDITOR_API UClass* StaticClass<class UBoneProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS