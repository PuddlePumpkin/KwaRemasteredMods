#include "VPauseMenuViewModel.h"

UVPauseMenuViewModel::UVPauseMenuViewModel() {
    this->bIsDisplayed = false;
}

void UVPauseMenuViewModel::SetIsOpeningSaveLoadMenu(bool bNewValue) {
}

void UVPauseMenuViewModel::SetIsMenuClosing(bool bNewValue) {
}

void UVPauseMenuViewModel::SetIsDisplayed(bool bNewValue) {
}

void UVPauseMenuViewModel::RegisterSendClickedReturnToMainMenuButton() {
}

void UVPauseMenuViewModel::RegisterSendClickedQuitGameButton() {
}

void UVPauseMenuViewModel::RegisterSendClickedQuickSaveButton() {
}

void UVPauseMenuViewModel::RegisterSendClickedButton(ELegacyPauseButtonsIDs InButtonIndex) {
}

void UVPauseMenuViewModel::NotifySaveLoadMenuIsClosing() {
}

bool UVPauseMenuViewModel::GetIsOpeningSaveLoadMenu() const {
    return false;
}

bool UVPauseMenuViewModel::GetIsMenuClosing() const {
    return false;
}

bool UVPauseMenuViewModel::GetIsDisplayed() const {
    return false;
}

FText UVPauseMenuViewModel::GetBuildInfo() const {
    return FText::GetEmpty();
}


