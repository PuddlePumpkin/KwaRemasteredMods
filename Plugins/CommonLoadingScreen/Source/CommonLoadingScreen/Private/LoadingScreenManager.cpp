#include "LoadingScreenManager.h"

ULoadingScreenManager::ULoadingScreenManager() {
    this->ActiveLoadingScreenUserWidgetInstance = NULL;
}

UUserWidget* ULoadingScreenManager::GetLoadingScreenWidget() const {
    return NULL;
}

FString ULoadingScreenManager::GetDebugReasonForShowingOrHidingLoadingScreen() const {
    return TEXT("");
}


