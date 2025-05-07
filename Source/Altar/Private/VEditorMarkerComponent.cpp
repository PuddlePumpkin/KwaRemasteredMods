#include "VEditorMarkerComponent.h"

UVEditorMarkerComponent::UVEditorMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->CastShadow = false;
    this->AlwaysLoadOnClient = false;
    this->bUseEditorCompositing = true;
}


