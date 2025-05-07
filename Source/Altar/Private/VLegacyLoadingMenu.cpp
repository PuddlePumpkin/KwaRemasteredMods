#include "VLegacyLoadingMenu.h"

UVLegacyLoadingMenu::UVLegacyLoadingMenu() {
    this->LoadingProgress = 0.00f;
}

void UVLegacyLoadingMenu::SetLoadingScreen(const FLegacyLoadingMenuGameInfo& Value) {
}

void UVLegacyLoadingMenu::SetLoadingProgress(const float Value) {
}



FLegacyLoadingMenuGameInfo UVLegacyLoadingMenu::GetLoadingScreen() const {
    return FLegacyLoadingMenuGameInfo{};
}

float UVLegacyLoadingMenu::GetLoadingProgress() const {
    return 0.0f;
}


