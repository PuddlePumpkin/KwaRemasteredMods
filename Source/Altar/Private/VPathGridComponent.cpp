#include "VPathGridComponent.h"

UVPathGridComponent::UVPathGridComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->AlwaysLoadOnClient = false;
    this->bUseEditorCompositing = true;
}


