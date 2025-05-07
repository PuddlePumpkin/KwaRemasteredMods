#include "VMainMenuViewModel.h"

UVMainMenuViewModel::UVMainMenuViewModel() {
    this->ContinueVisibility = true;
    this->VersionText = FText::FromString(TEXT("{Version}"));
    this->ButtonsVisibility = FLegacyMainMenuButtonVisibility::Buttons;
    this->bIsMoviePlaying = false;
    this->bDoesNeedOnboarding = true;
}

void UVMainMenuViewModel::ValidateOnboarding() {
}

void UVMainMenuViewModel::UpdateContinueVisibility() {
}

void UVMainMenuViewModel::UnRegisterToLevelChangeData() {
}

void UVMainMenuViewModel::UnloadInstanceLevels(UWorld* CurrentWorld) {
}

void UVMainMenuViewModel::SetVersionText(const FText& NewText) {
}

void UVMainMenuViewModel::SetIsMoviePlaying(bool bNewIsMoviePlaying) {
}

void UVMainMenuViewModel::SetContinueVisibility(bool bVisibility) {
}

void UVMainMenuViewModel::SetButtonsVisibility(FLegacyMainMenuButtonVisibility NewButtonsVisibility) {
}

void UVMainMenuViewModel::SendCloseMainMenu() {
}

void UVMainMenuViewModel::RequiresHideHUD() {
}

void UVMainMenuViewModel::RegisterToLevelChangeData() {
}

void UVMainMenuViewModel::RegisterSendConfirmNewGame() {
}

void UVMainMenuViewModel::RegisterSendClickedSettings() {
}

void UVMainMenuViewModel::RegisterSendClickedNewGame() {
}

void UVMainMenuViewModel::RegisterSendClickedLoadGame() {
}

void UVMainMenuViewModel::RegisterSendClickedExitGame() {
}

void UVMainMenuViewModel::RegisterSendClickedContinue() {
}

void UVMainMenuViewModel::PrepareLoadingScreenContextOnNewGame() {
}

void UVMainMenuViewModel::OnPostSeamlessTravel() {
}

void UVMainMenuViewModel::LoadInstanceOfLevels(UWorld* CurrentWorld) {
}

bool UVMainMenuViewModel::IsBackgroundLoaded() {
    return false;
}

FText UVMainMenuViewModel::GetVersionText() const {
    return FText::GetEmpty();
}

bool UVMainMenuViewModel::GetIsMoviePlaying() const {
    return false;
}

bool UVMainMenuViewModel::GetDoesNeedOnboarding() const {
    return false;
}

bool UVMainMenuViewModel::GetContinueVisibility() const {
    return false;
}

FLegacyMainMenuButtonVisibility UVMainMenuViewModel::GetButtonsVisibility() const {
    return FLegacyMainMenuButtonVisibility::None;
}

FText UVMainMenuViewModel::GetBuildInfo() const {
    return FText::GetEmpty();
}


