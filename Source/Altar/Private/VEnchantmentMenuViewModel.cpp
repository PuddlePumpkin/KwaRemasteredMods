#include "VEnchantmentMenuViewModel.h"

UVEnchantmentMenuViewModel::UVEnchantmentMenuViewModel() {
    this->CurrentPage = EModernEnchantmentMenuPage::Gear;
    this->SortType = EOriginalInventoryMenuSortType::Name;
    this->PlayerGold = 0;
    this->bIsSortReversed = false;
}

void UVEnchantmentMenuViewModel::SetSoulGemInfo(const FSoulGemInfo& NewSoulGemInfo) {
}

void UVEnchantmentMenuViewModel::SetSortType(const EOriginalInventoryMenuSortType& NewSortType) {
}

void UVEnchantmentMenuViewModel::SetPlayerGold(int32 NewPlayerGold) {
}

void UVEnchantmentMenuViewModel::SetItemToEnchantInfo(const FItemToEnchantInfo& NewItemToEnchantInfo) {
}

void UVEnchantmentMenuViewModel::SetItemsList(const TArray<FVModernEnchantmentItemProperties>& NewItemsList) {
}

void UVEnchantmentMenuViewModel::SetIsSortReversed(bool bNewIsSortReversed) {
}

void UVEnchantmentMenuViewModel::SetInventoryForPage(const EModernEnchantmentMenuPage Page) {
}

void UVEnchantmentMenuViewModel::SetEffectsList(const TArray<FVModernEnchantmentItemProperties>& NewEffectsList) {
}

void UVEnchantmentMenuViewModel::SetCurrentPageItemsList(const TArray<FVModernEnchantmentItemProperties>& NewItemsList) {
}

void UVEnchantmentMenuViewModel::SetCurrentPage(EModernEnchantmentMenuPage NewPage) {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnSoulGemButton() {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnItemButton() {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnItem(int32 ItemIndex) {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnExitButton() {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnCreateButton(const FString& NewEnchantedItemName) {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnAvailableEffectItem(int32 ItemIndex, bool bWantToDelete) {
}

void UVEnchantmentMenuViewModel::RegisterSendClickOnAddedEffectItem(int32 ItemIndex, bool bWantToDelete) {
}

bool UVEnchantmentMenuViewModel::IsSortReversed() const {
    return false;
}

bool UVEnchantmentMenuViewModel::IsItemTypeOnPage(const EModernEnchantmentMenuItemType ItemType, const EModernEnchantmentMenuPage Page) const {
    return false;
}

FSoulGemInfo UVEnchantmentMenuViewModel::GetSoulGemInfo() const {
    return FSoulGemInfo{};
}

EOriginalInventoryMenuSortType UVEnchantmentMenuViewModel::GetSortType() const {
    return EOriginalInventoryMenuSortType::Name;
}

int32 UVEnchantmentMenuViewModel::GetPlayerGold() const {
    return 0;
}

FItemToEnchantInfo UVEnchantmentMenuViewModel::GetItemToEnchantInfo() const {
    return FItemToEnchantInfo{};
}

TArray<FVModernEnchantmentItemProperties> UVEnchantmentMenuViewModel::GetItemsList() const {
    return TArray<FVModernEnchantmentItemProperties>();
}

TArray<FVModernEnchantmentItemProperties> UVEnchantmentMenuViewModel::GetEffectsList() const {
    return TArray<FVModernEnchantmentItemProperties>();
}

TArray<FVModernEnchantmentItemProperties> UVEnchantmentMenuViewModel::GetCurrentPageItemsList() const {
    return TArray<FVModernEnchantmentItemProperties>();
}

EModernEnchantmentMenuPage UVEnchantmentMenuViewModel::GetCurrentPage() const {
    return EModernEnchantmentMenuPage::Gear;
}


