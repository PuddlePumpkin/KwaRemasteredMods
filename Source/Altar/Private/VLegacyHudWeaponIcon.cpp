#include "VLegacyHudWeaponIcon.h"

UVLegacyHudWeaponIcon::UVLegacyHudWeaponIcon() {
    this->Health = 1.00f;
    this->IsAmmoVisible = true;
    this->AmmoCount = 0;
    this->Status = 0;
}

void UVLegacyHudWeaponIcon::SetWeaponTexture(UTexture2D* Value) {
}

void UVLegacyHudWeaponIcon::SetWeaponBrush(const FSlateBrush& Value) {
}

void UVLegacyHudWeaponIcon::SetStatusInternal(int32 Value) {
}

void UVLegacyHudWeaponIcon::SetStatus(int32 Value) {
}

void UVLegacyHudWeaponIcon::SetIsAmmoVisible(bool Value) {
}

void UVLegacyHudWeaponIcon::SetHealth(float Value) {
}

void UVLegacyHudWeaponIcon::SetAmmoCount(int32 Value) {
}






FSlateBrush UVLegacyHudWeaponIcon::GetWeaponBrush() const {
    return FSlateBrush{};
}

int32 UVLegacyHudWeaponIcon::GetStatusInternal() const {
    return 0;
}

int32 UVLegacyHudWeaponIcon::GetStatus() const {
    return 0;
}

bool UVLegacyHudWeaponIcon::GetIsAmmoVisible() const {
    return false;
}

float UVLegacyHudWeaponIcon::GetHealth() const {
    return 0.0f;
}

int32 UVLegacyHudWeaponIcon::GetAmmoCount() const {
    return 0;
}


