#include "VMagicPopupMenuViewModel.h"

UVMagicPopupMenuViewModel::UVMagicPopupMenuViewModel() {
    this->bIsDisplayed = false;
    this->TargetYOffset = 0.00f;
}

void UVMagicPopupMenuViewModel::SetTargetYOffset(float NewValue) {
}

void UVMagicPopupMenuViewModel::SetRequires(const FText& NewRequiresText) {
}

void UVMagicPopupMenuViewModel::SetIsDisplayed(bool bNewValue) {
}

void UVMagicPopupMenuViewModel::SetEffects(const TArray<FLegacyMagicPopupEffectProperties>& NewEffectsProperties) {
}

float UVMagicPopupMenuViewModel::GetTargetYOffset() const {
    return 0.0f;
}

FText UVMagicPopupMenuViewModel::GetRequires() const {
    return FText::GetEmpty();
}

bool UVMagicPopupMenuViewModel::GetIsDisplayed() const {
    return false;
}

TArray<FLegacyMagicPopupEffectProperties> UVMagicPopupMenuViewModel::GetEffects() const {
    return TArray<FLegacyMagicPopupEffectProperties>();
}


