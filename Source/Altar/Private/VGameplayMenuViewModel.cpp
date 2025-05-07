#include "VGameplayMenuViewModel.h"

UVGameplayMenuViewModel::UVGameplayMenuViewModel() {
    this->Difficulty = 0.00f;
    this->GeneralSubtitles = true;
    this->DialogSubtitles = true;
    this->Crosshair = true;
    this->SaveOnRest = true;
    this->SaveOnWait = true;
    this->SaveOnTravel = true;
}

void UVGameplayMenuViewModel::SetSaveOnWait(const bool Value) {
}

void UVGameplayMenuViewModel::SetSaveOnTravel(const bool Value) {
}

void UVGameplayMenuViewModel::SetSaveOnRest(const bool Value) {
}

void UVGameplayMenuViewModel::SetGeneralSubtitles(const bool Value) {
}

void UVGameplayMenuViewModel::SetDifficulty(const float Value) {
}

void UVGameplayMenuViewModel::SetDialogSubtitles(const bool Value) {
}

void UVGameplayMenuViewModel::SetCrosshair(const bool Value) {
}

void UVGameplayMenuViewModel::RegisterSendClickedButton(ELegacyGameplayMenuIDs InButtonIndex) {
}

bool UVGameplayMenuViewModel::GetSaveOnWait() const {
    return false;
}

bool UVGameplayMenuViewModel::GetSaveOnTravel() const {
    return false;
}

bool UVGameplayMenuViewModel::GetSaveOnRest() const {
    return false;
}

bool UVGameplayMenuViewModel::GetGeneralSubtitles() const {
    return false;
}

float UVGameplayMenuViewModel::GetDifficulty() const {
    return 0.0f;
}

bool UVGameplayMenuViewModel::GetDialogSubtitles() const {
    return false;
}

bool UVGameplayMenuViewModel::GetCrosshair() const {
    return false;
}


