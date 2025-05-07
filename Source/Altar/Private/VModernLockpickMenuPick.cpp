#include "VModernLockpickMenuPick.h"

UVModernLockpickMenuPick::UVModernLockpickMenuPick() {
    this->ActiveTumbler = 0;
    this->PreviousTumbler = 0;
    this->bIsBroken = false;
    this->bIsMovementDisabled = false;
    this->HandleType = EModernLockpickMenuHandleType::Normal;
    this->DeadZone = 10.00f;
    this->bHasCycled = false;
}

void UVModernLockpickMenuPick::TumblerUp() {
}

void UVModernLockpickMenuPick::SetCycledMousePosition(const FPointerEvent& Input) {
}

void UVModernLockpickMenuPick::SetActiveTumbler(const int32 Value) {
}

void UVModernLockpickMenuPick::PreviousActiveTumbler() {
}





void UVModernLockpickMenuPick::NextActiveTumbler() {
}

void UVModernLockpickMenuPick::MovePick(const EModernLockpickMenuPickMovement Action) {
}

EModernLockpickMenuPickMovement UVModernLockpickMenuPick::GetMovementActionFromMouseMovement(const FPointerEvent& Input) {
    return EModernLockpickMenuPickMovement::None;
}



