#include "VLevelUpMenuViewModel.h"

UVLevelUpMenuViewModel::UVLevelUpMenuViewModel() {
    this->CurrentPointsNb = 0;
}

void UVLevelUpMenuViewModel::UpdateCurrentPointsNb(const bool IsPlus, const int32 BonusCost) {
}

void UVLevelUpMenuViewModel::SetModifiedAttributesIndexArray(const TArray<int32>& NewModifiedAttributesIndexArray) {
}

void UVLevelUpMenuViewModel::SetCurrentPointsNb(const int32& NewPointsNb) {
}

void UVLevelUpMenuViewModel::SetBonusesArray(const TArray<int32>& NewBonusesArray) {
}

void UVLevelUpMenuViewModel::RegisterSendSelectAttributeHandler(const EVAttribute SelectedAttribute) {
}

void UVLevelUpMenuViewModel::RegisterSendModifiedAttributesAndClickedDoneHandler() {
}

void UVLevelUpMenuViewModel::RegisterSendClickedDoneHandler() {
}

TArray<int32> UVLevelUpMenuViewModel::GetModifiedAttributesIndexArray() const {
    return TArray<int32>();
}

FLevelUpMenuInitializationData UVLevelUpMenuViewModel::GetInitializationData() const {
    return FLevelUpMenuInitializationData{};
}

FLevelUpMenuState UVLevelUpMenuViewModel::GetCurrentState() const {
    return FLevelUpMenuState{};
}

int32 UVLevelUpMenuViewModel::GetCurrentPointsNb() const {
    return 0;
}

TArray<int32> UVLevelUpMenuViewModel::GetBonusesArray() const {
    return TArray<int32>();
}


