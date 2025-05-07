#include "VUIStateSubsystem.h"

UVUIStateSubsystem::UVUIStateSubsystem() {
    this->HUDVisibility = EHUDVisibility::None;
    this->bIsVisibleGlobal = false;
    this->bIsPlayerInDialog = false;
}

bool UVUIStateSubsystem::SetGlobalVisibility(bool bVisible) {
    return false;
}

bool UVUIStateSubsystem::HUDVisibilityContains(EHUDVisibility Flag) {
    return false;
}

EHUDVisibility UVUIStateSubsystem::GetHUDVisibilityMask() {
    return EHUDVisibility::None;
}

bool UVUIStateSubsystem::GetGlobalVisibility() {
    return false;
}

bool UVUIStateSubsystem::AddOrRemoveHUDVisibilityFlag(EHUDVisibility Flag, bool bAdd) {
    return false;
}


