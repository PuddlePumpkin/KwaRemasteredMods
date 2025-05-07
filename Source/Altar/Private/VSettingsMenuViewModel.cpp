#include "VSettingsMenuViewModel.h"

UVSettingsMenuViewModel::UVSettingsMenuViewModel() {
    this->CurrentPageIndex = 0;
}

bool UVSettingsMenuViewModel::ThisIsForPluginCompliance() const {
    return false;
}

void UVSettingsMenuViewModel::SetPageIndex(int32 NewPageIndex) {
}

void UVSettingsMenuViewModel::RegisterSendGameplaySaveSettings() {
}

void UVSettingsMenuViewModel::RegisterSendGameDifficulty() {
}

void UVSettingsMenuViewModel::RegisterSendClickedButton(ELegacySettingsMenuIDs InButtonIndex) {
}

int32 UVSettingsMenuViewModel::GetPageIndex() const {
    return 0;
}

FText UVSettingsMenuViewModel::GetBuildInfo() const {
    return FText::GetEmpty();
}


