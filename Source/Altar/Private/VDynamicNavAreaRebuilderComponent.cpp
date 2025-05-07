#include "VDynamicNavAreaRebuilderComponent.h"

UVDynamicNavAreaRebuilderComponent::UVDynamicNavAreaRebuilderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bAutoActivate = true;
    this->bDirtyNavAreaOnBeginPlay = false;
    this->bDirtyNavAreaOnPhysicsStateChanged = false;
    this->bDefaultPhysicsState = true;
    this->bUsePrimitivesBounds = false;
    this->bUseAttachedChildPrimitivesBounds = false;
    this->bUseCustomBounds = false;
    this->OptionalPhysicsControllerComponent = NULL;
}

void UVDynamicNavAreaRebuilderComponent::ForceDirtyNavArea(const FName& DebugReason) {
}

void UVDynamicNavAreaRebuilderComponent::DirtyNavArea(const FName& DebugReason) {
}


