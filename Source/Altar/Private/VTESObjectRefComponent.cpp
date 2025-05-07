#include "VTESObjectRefComponent.h"

UVTESObjectRefComponent::UVTESObjectRefComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FormIDInstance = 0;
    this->TESForm = NULL;
    this->bIsPaired = false;
    this->BossTag = EVBossCategory::None;
}

FString UVTESObjectRefComponent::GetHexFormRefID() const {
    return TEXT("");
}

EVBossCategory UVTESObjectRefComponent::GetBossTag() const {
    return EVBossCategory::None;
}


