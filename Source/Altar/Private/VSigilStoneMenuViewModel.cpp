#include "VSigilStoneMenuViewModel.h"

UVSigilStoneMenuViewModel::UVSigilStoneMenuViewModel() {
    this->SortType = EOriginalInventoryMenuSortType::Name;
    this->bIsSortReversed = false;
}

void UVSigilStoneMenuViewModel::SetWeaponEffect(const FModernEffectItemData& NewAvailableEffect) {
}

void UVSigilStoneMenuViewModel::SetSortType(const EOriginalInventoryMenuSortType& NewSortType) {
}

void UVSigilStoneMenuViewModel::SetSigilStoneInfo(const FSoulGemInfo& NewSigilStoneInfo) {
}

void UVSigilStoneMenuViewModel::SetItemToEnchantInfo(const FItemToEnchantInfo& NewItemToEnchantInfo) {
}

void UVSigilStoneMenuViewModel::SetItemsList(const TArray<FModernSigilStoneMenuItemProperties>& NewList) {
}

void UVSigilStoneMenuViewModel::SetIsSortReversed(bool bNewIsSortReversed) {
}

void UVSigilStoneMenuViewModel::SetGearEffect(const FModernEffectItemData& NewAvailableEffect) {
}

void UVSigilStoneMenuViewModel::RegisterSendHoverAnItemToEnchant(int32 ItemIndex) {
}

void UVSigilStoneMenuViewModel::RegisterSendClickOnItemButton() {
}

void UVSigilStoneMenuViewModel::RegisterSendClickOnExitButton() {
}

void UVSigilStoneMenuViewModel::RegisterSendClickOnCreateButton(const FString& NewEnchantedItemName) {
}

bool UVSigilStoneMenuViewModel::IsSortReversed() const {
    return false;
}

FModernEffectItemData UVSigilStoneMenuViewModel::GetWeaponEffect() const {
    return FModernEffectItemData{};
}

EOriginalInventoryMenuSortType UVSigilStoneMenuViewModel::GetSortType() const {
    return EOriginalInventoryMenuSortType::Name;
}

FSoulGemInfo UVSigilStoneMenuViewModel::GetSigilStoneInfo() const {
    return FSoulGemInfo{};
}

FItemToEnchantInfo UVSigilStoneMenuViewModel::GetItemToEnchantInfo() const {
    return FItemToEnchantInfo{};
}

TArray<FModernSigilStoneMenuItemProperties> UVSigilStoneMenuViewModel::GetItemsList() const {
    return TArray<FModernSigilStoneMenuItemProperties>();
}

FModernEffectItemData UVSigilStoneMenuViewModel::GetGearEffect() const {
    return FModernEffectItemData{};
}


