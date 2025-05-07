#include "VLockpickMenuViewModel.h"

UVLockpickMenuViewModel::UVLockpickMenuViewModel() {
    this->HasAutoAttemptWorked = EAttemptSuccess::NoAttempt;
}

void UVLockpickMenuViewModel::SetTumblerDefaultProperties(const FLegacyLockpickMenuTumblerDefaultProperties& NewTumblerDefaultProperties) {
}

void UVLockpickMenuViewModel::SetMenuProperties(const FLegacyLockpickMenuProperties& NewProperties) {
}

void UVLockpickMenuViewModel::SetHasAutoAttemptWorked(EAttemptSuccess NewValue) {
}

void UVLockpickMenuViewModel::RegisterSendTumblerPicked() {
}

void UVLockpickMenuViewModel::RegisterSendComplete() {
}

void UVLockpickMenuViewModel::RegisterSendClickedClose() {
}

void UVLockpickMenuViewModel::RegisterSendClickedAutoAttempt() {
}

void UVLockpickMenuViewModel::RegisterSendBrokeAPick() {
}

FLegacyLockpickMenuTumblerDefaultProperties UVLockpickMenuViewModel::GetTumblerDefaultProperties() const {
    return FLegacyLockpickMenuTumblerDefaultProperties{};
}

FLegacyLockpickMenuProperties UVLockpickMenuViewModel::GetMenuProperties() const {
    return FLegacyLockpickMenuProperties{};
}

EAttemptSuccess UVLockpickMenuViewModel::GetHasAutoAttemptWorked() const {
    return EAttemptSuccess::NoAttempt;
}


