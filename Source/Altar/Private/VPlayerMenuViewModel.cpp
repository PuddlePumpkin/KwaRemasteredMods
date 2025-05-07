#include "VPlayerMenuViewModel.h"

UVPlayerMenuViewModel::UVPlayerMenuViewModel() {
    this->MenuPage = ELegacyPlayerMenuPage::Stats;
    this->bIsVisible = false;
    this->bIsQuickKeysVisible = false;
}

void UVPlayerMenuViewModel::SetVisibility(bool bNewVisibility) {
}

void UVPlayerMenuViewModel::SetQuickKeysVisibility(bool bNewVisibility) {
}

void UVPlayerMenuViewModel::SetCurrentPage(ELegacyPlayerMenuPage NewPage) {
}

void UVPlayerMenuViewModel::RegisterOpenPauseMenuHandler() {
}

void UVPlayerMenuViewModel::RegisterClosePauseMenuHandler() {
}

void UVPlayerMenuViewModel::RegisterCloseMenuHandler() {
}

void UVPlayerMenuViewModel::RegisterCloseMenuFromSaveMenuHandler() {
}

void UVPlayerMenuViewModel::RegisterChangeMenuHandler(ELegacyPlayerMenuPage NewPage) {
}

bool UVPlayerMenuViewModel::IsVisible() const {
    return false;
}

bool UVPlayerMenuViewModel::IsQuickKeysVisible() const {
    return false;
}

ELegacyPlayerMenuPage UVPlayerMenuViewModel::GetCurrentPage() const {
    return ELegacyPlayerMenuPage::Stats;
}


