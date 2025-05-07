#include "VLegacyLockpickingMenuTumbler.h"

UVLegacyLockpickingMenuTumbler::UVLegacyLockpickingMenuTumbler() {
    this->IsSolved = false;
    this->IsTumbling = false;
}


void UVLegacyLockpickingMenuTumbler::SetIsTumbling(const bool Value) {
}

void UVLegacyLockpickingMenuTumbler::SetIsSolved(const bool Value) {
}

void UVLegacyLockpickingMenuTumbler::SetInitialMovement(const FLegacyLockpickMenuTumblerProperties& Value) {
}




float UVLegacyLockpickingMenuTumbler::GetNextAnimationTime(const float DeltaTime) {
    return 0.0f;
}

bool UVLegacyLockpickingMenuTumbler::GetIsTumbling() const {
    return false;
}

bool UVLegacyLockpickingMenuTumbler::GetIsSolved() const {
    return false;
}

FLegacyLockpickMenuTumblerProperties UVLegacyLockpickingMenuTumbler::GetInitialMovement() const {
    return FLegacyLockpickMenuTumblerProperties{};
}

bool UVLegacyLockpickingMenuTumbler::AttemptSolve() {
    return false;
}


