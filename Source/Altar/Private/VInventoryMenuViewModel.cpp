#include "VInventoryMenuViewModel.h"

UVInventoryMenuViewModel::UVInventoryMenuViewModel() {
    this->SortTypeInventory = EOriginalInventoryMenuSortType::Name;
    this->bIsSortReversedInventory = false;
    this->CurrentPageInventory = ELegacyInventoryMenuPage::Weapon;
    this->bIsListViewHovered = false;
    this->bBlockBackAction = false;
}

bool UVInventoryMenuViewModel::ThisIsForPluginCompliance() const {
    return false;
}

void UVInventoryMenuViewModel::SetSortTypeInventory(const EOriginalInventoryMenuSortType& NewSortTypeInventory) {
}

void UVInventoryMenuViewModel::SetIsSortReversedInventory(bool bNewIsSortReversedInventory) {
}

void UVInventoryMenuViewModel::SetIsListViewHovered(bool bNewIsListViewHovered) {
}

void UVInventoryMenuViewModel::SetInventory(const TArray<FOriginalInventoryMenuItemProperties>& InventoryItems) {
}

void UVInventoryMenuViewModel::SetExtraData(const FLegacyInventoryMenuExtraData& NewExtraData) {
}

void UVInventoryMenuViewModel::SetCurrentPageInventory(ELegacyInventoryMenuPage NewPage) {
}

void UVInventoryMenuViewModel::SetBlockBackAction(bool bNewBlockBackAction) {
}

void UVInventoryMenuViewModel::ReplaceCurrentPageItemsInventory(const TArray<FOriginalInventoryMenuItemProperties>& NewPageInventory) {
}

void UVInventoryMenuViewModel::RegisterSendItemHoverHandler(int32 ItemIndex) {
}

void UVInventoryMenuViewModel::RegisterSendDropItemHandler(int32 ItemIndex) {
}

void UVInventoryMenuViewModel::RegisterSendDropAndHoldItemHandler(int32 ItemIndex) {
}

void UVInventoryMenuViewModel::RegisterSendDropAllItemHandler(int32 ItemIndex, int32 Count) {
}

void UVInventoryMenuViewModel::RegisterSendClickOnItemHandler(int32 ItemIndex) {
}

EOriginalInventoryMenuSortType UVInventoryMenuViewModel::GetSortTypeInventory() const {
    return EOriginalInventoryMenuSortType::Name;
}

bool UVInventoryMenuViewModel::GetIsSortReversedInventory() const {
    return false;
}

bool UVInventoryMenuViewModel::GetIsListViewHovered() const {
    return false;
}

TArray<FOriginalInventoryMenuItemProperties> UVInventoryMenuViewModel::GetInventory() const {
    return TArray<FOriginalInventoryMenuItemProperties>();
}

FLegacyInventoryMenuExtraData UVInventoryMenuViewModel::GetExtraData() const {
    return FLegacyInventoryMenuExtraData{};
}

TArray<FOriginalInventoryMenuItemProperties> UVInventoryMenuViewModel::GetCurrentPageItemsInventory() const {
    return TArray<FOriginalInventoryMenuItemProperties>();
}

ELegacyInventoryMenuPage UVInventoryMenuViewModel::GetCurrentPageInventory() const {
    return ELegacyInventoryMenuPage::Weapon;
}

bool UVInventoryMenuViewModel::GetBlockBackAction() const {
    return false;
}


