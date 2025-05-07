#include "VModernLockpickingMenuTumbler.h"

UVModernLockpickingMenuTumbler::UVModernLockpickingMenuTumbler() {
    this->IsSolved = false;
    this->IsTumbling = false;
}


void UVModernLockpickingMenuTumbler::SetIsTumbling(const bool Value) {
}

void UVModernLockpickingMenuTumbler::SetIsSolved(const bool Value) {
}

void UVModernLockpickingMenuTumbler::SetInitialMovement(const FModernLockpickMenuTumblerProperties& Value) {
}




float UVModernLockpickingMenuTumbler::GetNextAnimationTime(const float DeltaTime) {
    return 0.0f;
}

bool UVModernLockpickingMenuTumbler::GetIsTumbling() const {
    return false;
}

bool UVModernLockpickingMenuTumbler::GetIsSolved() const {
    return false;
}

FModernLockpickMenuTumblerProperties UVModernLockpickingMenuTumbler::GetInitialMovement() const {
    return FModernLockpickMenuTumblerProperties{};
}

void UVModernLockpickingMenuTumbler::ForceTumblerDown() {
}

bool UVModernLockpickingMenuTumbler::AttemptSolve() {
    return false;
}


