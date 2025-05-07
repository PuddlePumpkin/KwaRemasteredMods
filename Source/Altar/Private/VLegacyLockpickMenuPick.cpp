#include "VLegacyLockpickMenuPick.h"

UVLegacyLockpickMenuPick::UVLegacyLockpickMenuPick() {
    this->ActiveTumbler = 0;
    this->IsBroken = false;
    this->IsMovementDisabled = false;
    this->HandleType = ELegacyLockpickMenuHandleType::Normal;
    this->DeadZone = 10.00f;
}

void UVLegacyLockpickMenuPick::SetTumblerPositions(const TArray<float>& Value) {
}

void UVLegacyLockpickMenuPick::SetIsMovementDisabled(const bool Value) {
}

void UVLegacyLockpickMenuPick::SetIsBroken(const bool Value) {
}

void UVLegacyLockpickMenuPick::SetHandleType(const ELegacyLockpickMenuHandleType Value) {
}

void UVLegacyLockpickMenuPick::SetDeadZone(const float Value) {
}

void UVLegacyLockpickMenuPick::SetActiveTumbler(const int32 Value) {
}





void UVLegacyLockpickMenuPick::MovePick(const ELegacyLockpickMenuPickMovement Action) {
}

TArray<float> UVLegacyLockpickMenuPick::GetTumblerPositions() const {
    return TArray<float>();
}

float UVLegacyLockpickMenuPick::GetPreviousTumblerPosition() const {
    return 0.0f;
}

ELegacyLockpickMenuPickMovement UVLegacyLockpickMenuPick::GetMovementActionFromMouseMovement() {
    return ELegacyLockpickMenuPickMovement::None;
}

bool UVLegacyLockpickMenuPick::GetIsMovementDisabled() const {
    return false;
}

bool UVLegacyLockpickMenuPick::GetIsBroken() const {
    return false;
}

ELegacyLockpickMenuHandleType UVLegacyLockpickMenuPick::GetHandleType() const {
    return ELegacyLockpickMenuHandleType::Normal;
}

float UVLegacyLockpickMenuPick::GetDeadZone() const {
    return 0.0f;
}

float UVLegacyLockpickMenuPick::GetActiveTumblerPosition() const {
    return 0.0f;
}

int32 UVLegacyLockpickMenuPick::GetActiveTumbler() const {
    return 0;
}

bool UVLegacyLockpickMenuPick::CanPickMove_Implementation() const {
    return false;
}


