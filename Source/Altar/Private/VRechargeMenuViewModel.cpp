#include "VRechargeMenuViewModel.h"

UVRechargeMenuViewModel::UVRechargeMenuViewModel() {
    this->RechargeMenuPage = ELegacyRechargeMenuPage::Gold;
    this->SortType = EOriginalInventoryMenuSortType::Name;
    this->bIsOpenedFromQuickWheel = false;
    this->bIsSortReversed = false;
}

void UVRechargeMenuViewModel::SetSortType(const EOriginalInventoryMenuSortType& NewSortType) {
}

void UVRechargeMenuViewModel::SetRechargeMenuSoulProperties(const FLegacyRechargeMenuSoulProperties& NewValue) {
}

void UVRechargeMenuViewModel::SetRechargeMenuPage(const ELegacyRechargeMenuPage& NewValue) {
}

void UVRechargeMenuViewModel::SetRechargeMenuGoldProperties(const FLegacyRechargeMenuGoldProperties& NewValue) {
}

void UVRechargeMenuViewModel::SetPlayerGold(int32 NewPlayerGold) {
}

void UVRechargeMenuViewModel::SetPlayerData(const FModernRechargeMenuCharacterData& NewPlayerData) {
}

void UVRechargeMenuViewModel::SetMerchantGold(int32 NewMerchantGold) {
}

void UVRechargeMenuViewModel::SetMerchantData(const FModernRechargeMenuCharacterData& NewMerchantData) {
}

void UVRechargeMenuViewModel::SetItems(const TArray<FLegacyRechargeMenuItemProperties>& NewItems) {
}

void UVRechargeMenuViewModel::SetIsSortReversed(bool bNewIsSortReversed) {
}

void UVRechargeMenuViewModel::SetIsOpenedFromQuickWheel(bool bNewIsOpenedFromQuickWheel) {
}

void UVRechargeMenuViewModel::RegisterSendHoveredItem(int32 Index) {
}

void UVRechargeMenuViewModel::RegisterSendClickedRechargeAll() {
}

void UVRechargeMenuViewModel::RegisterSendClickedItem(int32 Index) {
}

void UVRechargeMenuViewModel::RegisterSendClickedExit() {
}

bool UVRechargeMenuViewModel::IsSortReversed() const {
    return false;
}

bool UVRechargeMenuViewModel::IsOpenedFromQuickWheel() const {
    return false;
}

EOriginalInventoryMenuSortType UVRechargeMenuViewModel::GetSortType() const {
    return EOriginalInventoryMenuSortType::Name;
}

FLegacyRechargeMenuSoulProperties UVRechargeMenuViewModel::GetRechargeMenuSoulProperties() const {
    return FLegacyRechargeMenuSoulProperties{};
}

ELegacyRechargeMenuPage UVRechargeMenuViewModel::GetRechargeMenuPage() const {
    return ELegacyRechargeMenuPage::Gold;
}

FLegacyRechargeMenuGoldProperties UVRechargeMenuViewModel::GetRechargeMenuGoldProperties() const {
    return FLegacyRechargeMenuGoldProperties{};
}

FModernRechargeMenuCharacterData UVRechargeMenuViewModel::GetPlayerData() const {
    return FModernRechargeMenuCharacterData{};
}

FModernRechargeMenuCharacterData UVRechargeMenuViewModel::GetMerchantData() const {
    return FModernRechargeMenuCharacterData{};
}

TArray<FLegacyRechargeMenuItemProperties> UVRechargeMenuViewModel::GetItems() const {
    return TArray<FLegacyRechargeMenuItemProperties>();
}


