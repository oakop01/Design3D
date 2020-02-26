// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_Event_generated_h
#error "K2Node_Event.generated.h already included, missing '#pragma once' in K2Node_Event.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Event_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Event, BLUEPRINTGRAPH_API)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_Event(); \
	friend struct Z_Construct_UClass_UK2Node_Event_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Event, UK2Node_EditablePinBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_Event) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node_Event*>(this); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Event(); \
	friend struct Z_Construct_UClass_UK2Node_Event_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Event, UK2Node_EditablePinBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_Event) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node_Event*>(this); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_Event(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Event) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_Event); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Event); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLUEPRINTGRAPH_API UK2Node_Event(UK2Node_Event&&); \
	BLUEPRINTGRAPH_API UK2Node_Event(const UK2Node_Event&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_Event(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLUEPRINTGRAPH_API UK2Node_Event(UK2Node_Event&&); \
	BLUEPRINTGRAPH_API UK2Node_Event(const UK2Node_Event&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_Event); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Event); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Event)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_20_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node_Event."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_Event>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS