#include "VSaveLoadMenuViewModel.h"

UVSaveLoadMenuViewModel::UVSaveLoadMenuViewModel() {
    this->CachedOpeningSource = ESaveLoadMenuOpeningSource::Unknown;
    this->bIsSaveMenu = false;
    this->ClickedItemIndex = -1;
    this->IsShiftPressed = false;
    this->HoverItemIndex = -1;
    this->bShouldAllowListViewItemClicks = true;
    this->bCanBackOutMenu = true;
    this->bMenuIsBusy = false;
}

void UVSaveLoadMenuViewModel::UpdateLoadingScreenDataFromSave(const FString& SaveSlotName) {
}

bool UVSaveLoadMenuViewModel::ShouldAllowListViewItemClicks() const {
    return false;
}

void UVSaveLoadMenuViewModel::SetShouldAllowListViewItemClicks(bool bInNewValue) {
}

void UVSaveLoadMenuViewModel::SetSavesMetaData(const TMap<FString, FVSaveGameDetails>& NewSavesMetaData) {
}

void UVSaveLoadMenuViewModel::SetMenuIsBusy(bool newMenuIsBusy) {
}

void UVSaveLoadMenuViewModel::SetCanBackOutMenu(bool bInNewValue) {
}

void UVSaveLoadMenuViewModel::RegisterSendClickedUploadItem(int32 SaveIndex, const FString& SaveSlotName, const FString& SaveContext) {
}

void UVSaveLoadMenuViewModel::RegisterSendClickedReturnButton() {
}

void UVSaveLoadMenuViewModel::RegisterSendClickedItem(int32 SaveIndex, const FString& SaveSlotName, bool InIsShiftPressed) {
}

bool UVSaveLoadMenuViewModel::MustShowUploadItemButton() const {
    return false;
}

bool UVSaveLoadMenuViewModel::MenuIsBusy() const {
    return false;
}

bool UVSaveLoadMenuViewModel::IsSaveMenu() const {
    return false;
}

FText UVSaveLoadMenuViewModel::GetSaveTextFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

TMap<FString, FVSaveGameDetails> UVSaveLoadMenuViewModel::GetSavesMetaData() const {
    return TMap<FString, FVSaveGameDetails>();
}

FText UVSaveLoadMenuViewModel::GetModernSaveTypeFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSaveTimeFromSlot(const FString& SlotName, const bool InFormat) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSavePlayerNameFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSaveNameFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSaveLocationFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSaveLevelFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSaveDayFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetModernSaveDateFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FText UVSaveLoadMenuViewModel::GetGameDetailsFromSlot(const FString& SlotName) const {
    return FText::GetEmpty();
}

FString UVSaveLoadMenuViewModel::GetFullSaveNameFromSlot(const FString& SlotName) const {
    return TEXT("");
}

bool UVSaveLoadMenuViewModel::GetDisableAchievementFromSlot(const FString& SlotName) const {
    return false;
}

FString UVSaveLoadMenuViewModel::GetCurrentPlayerName() const {
    return TEXT("");
}

UTexture2D* UVSaveLoadMenuViewModel::FindOrAddGameThumbnailFromSlot(const FString& SlotName) {
    return NULL;
}

bool UVSaveLoadMenuViewModel::CanBackOutMenu() const {
    return false;
}


