#include "VHUDReticleViewModel.h"

UVHUDReticleViewModel::UVHUDReticleViewModel() {
    this->ReticleIcon = ELegacyHudReticleIcon::None;
    this->bIsStealing = false;
    this->SneakDetectionLevel = 0.00f;
    this->ReticleWeaponBehavior = EModernReticleWeaponBehavior::Default;
    this->bIsMenuMode = false;
}

//void UVHUDReticleViewModel::TriggerHitCrosshairAnimation(const FPairedOblivionHitEvent& HitEvent) {}

void UVHUDReticleViewModel::SetWeaponTag(FGameplayTag NewWeaponTag) {
}

void UVHUDReticleViewModel::SetSneakingProperties(const FLegacyReticleSneakingProperties& NewSneakingProperties) {
}

void UVHUDReticleViewModel::SetSneakDetectionLevel(const float Detection) {
}

void UVHUDReticleViewModel::SetReticleWeaponBehavior(EModernReticleWeaponBehavior newReticleWeaponBehavior) {
}

void UVHUDReticleViewModel::SetReticleIcon(ELegacyHudReticleIcon NewReticleIcon) {
}

void UVHUDReticleViewModel::SetNPCName(const FText& NewNpcName) {
}

void UVHUDReticleViewModel::SetIsStealing(bool bNewIsStealing) {
}

void UVHUDReticleViewModel::SetIsMenuMode(bool bNewValue) {
}

void UVHUDReticleViewModel::SetEnemyHealthProperties(const FLegacyReticleEnemyHealthProperties& NewEnemyHealthProperties) {
}

FGameplayTag UVHUDReticleViewModel::GetWeaponTag() const {
    return FGameplayTag{};
}

bool UVHUDReticleViewModel::GetSneakingProperties() const {
    return false;
}

float UVHUDReticleViewModel::GetSneakingLevel() const {
    return 0.0f;
}

float UVHUDReticleViewModel::GetSneakDetectionLevel() const {
    return 0.0f;
}

EModernReticleWeaponBehavior UVHUDReticleViewModel::GetReticleWeaponBehavior() const {
    return EModernReticleWeaponBehavior::Default;
}

ELegacyHudReticleIcon UVHUDReticleViewModel::GetReticleIcon() const {
    return ELegacyHudReticleIcon::None;
}

FText UVHUDReticleViewModel::GetNPCName() const {
    return FText::GetEmpty();
}

bool UVHUDReticleViewModel::GetIsStealing() const {
    return false;
}

bool UVHUDReticleViewModel::GetIsMenuMode() const {
    return false;
}

FLegacyReticleEnemyHealthProperties UVHUDReticleViewModel::GetEnemyHealthProperties() const {
    return FLegacyReticleEnemyHealthProperties{};
}


