#include "VSpellPurchaseMenuViewModel.h"

UVSpellPurchaseMenuViewModel::UVSpellPurchaseMenuViewModel() {
    this->PlayerMoney = 0;
    this->SortType = ELegacySpellPurchaseMenuSortType::None;
    this->IsSortReversed = false;
}

void UVSpellPurchaseMenuViewModel::SetSortType(const ELegacySpellPurchaseMenuSortType Value) {
}

void UVSpellPurchaseMenuViewModel::SetPlayerName(const FText& NewPlayerName) {
}

void UVSpellPurchaseMenuViewModel::SetPlayerMoney(int32 NewPlayerMoney) {
}

void UVSpellPurchaseMenuViewModel::SetNpcData(const FLegacySpellPurchaseMenuNPCData& NewNPCData) {
}

void UVSpellPurchaseMenuViewModel::SetIsSortReversed(const bool Value) {
}

void UVSpellPurchaseMenuViewModel::RegisterSendSpellItemClicked(int32 InButtonIndex) {
}

void UVSpellPurchaseMenuViewModel::RegisterSendItemHoverHandler(int32 InButtonIndex) {
}

void UVSpellPurchaseMenuViewModel::RegisterSendHaggleButtonClicked() {
}

void UVSpellPurchaseMenuViewModel::RegisterSendCloseButtonClicked() {
}

TArray<FLegacySpellPurchaseMenuItemProperties> UVSpellPurchaseMenuViewModel::GetSpellList() const {
    return TArray<FLegacySpellPurchaseMenuItemProperties>();
}

ELegacySpellPurchaseMenuSortType UVSpellPurchaseMenuViewModel::GetSortType() const {
    return ELegacySpellPurchaseMenuSortType::None;
}

FText UVSpellPurchaseMenuViewModel::GetPlayerName() const {
    return FText::GetEmpty();
}

int32 UVSpellPurchaseMenuViewModel::GetPlayerMoney() const {
    return 0;
}

FLegacySpellPurchaseMenuNPCData UVSpellPurchaseMenuViewModel::GetNpcData() const {
    return FLegacySpellPurchaseMenuNPCData{};
}

bool UVSpellPurchaseMenuViewModel::GetIsSortReversed() const {
    return false;
}


