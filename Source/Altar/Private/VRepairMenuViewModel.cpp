#include "VRepairMenuViewModel.h"

UVRepairMenuViewModel::UVRepairMenuViewModel() {
    this->TypeMenu = ELegacyRepairMenuType::None;
    this->SortType = EOriginalInventoryMenuSortType::Name;
    this->bIsRepairAllButtonVisible = false;
    this->bIsRepairAllButtonEnable = false;
    this->bIsRemoveButtonVisible = false;
    this->bIsFilterButtonVisible = false;
    this->bIsSortReversed = false;
    this->bIsAtLeastExpert = false;
    this->bIsOpenedFromQuickWheel = false;
    this->HammerBreakChance = 0.00f;
}

void UVRepairMenuViewModel::SetTypeMenu(ELegacyRepairMenuType NewType) {
}

void UVRepairMenuViewModel::SetSortType(const EOriginalInventoryMenuSortType& NewSortType) {
}

void UVRepairMenuViewModel::SetRepairList(const TArray<FLegacyRepairItemProperties>& NewProperties) {
}

void UVRepairMenuViewModel::SetRepairAllButtonVisible(bool bIsVisible) {
}

void UVRepairMenuViewModel::SetRepairAllButtonEnable(bool bIsEnable) {
}

void UVRepairMenuViewModel::SetRepairAllAmount(const FLegacyRepairAmount& NewValue) {
}

void UVRepairMenuViewModel::SetRemoveButtonVisible(bool bIsVisible) {
}

void UVRepairMenuViewModel::SetPlayerData(const FModernRepairMenuCharacterData& NewPlayerData) {
}

void UVRepairMenuViewModel::SetMerchantData(const FModernRepairMenuCharacterData& NewMerchantData) {
}

void UVRepairMenuViewModel::SetIsSortReversed(bool bNewIsSortReversed) {
}

void UVRepairMenuViewModel::SetIsOpenedFromQuickWheel(bool bNewIsOpenedFromQuickWheel) {
}

void UVRepairMenuViewModel::SetIsAtLeastExpert(bool bNewIsAtLeastExpert) {
}

void UVRepairMenuViewModel::SetHammerBreakChance(float BreakChanceValue) {
}

void UVRepairMenuViewModel::SetFilterButtonVisible(bool bIsVisible) {
}

void UVRepairMenuViewModel::SetFilterButtonName(const FText& NewText) {
}

void UVRepairMenuViewModel::SetAmountPlayerGold(int32 NewValue) {
}

void UVRepairMenuViewModel::SetAmountMerchantGold(int32 NewValue) {
}

void UVRepairMenuViewModel::SetAmountHammer(FLegacyRepairAmount NewValue) {
}

void UVRepairMenuViewModel::RegisterSendHoverItem(int32 ItemIndex) {
}

void UVRepairMenuViewModel::RegisterSendClickedRepairAll() {
}

void UVRepairMenuViewModel::RegisterSendClickedRemove() {
}

void UVRepairMenuViewModel::RegisterSendClickedOnRepair(int32 Item) {
}

void UVRepairMenuViewModel::RegisterSendClickedFilter() {
}

void UVRepairMenuViewModel::RegisterSendClickedExit() {
}

bool UVRepairMenuViewModel::IsSortReversed() const {
    return false;
}

bool UVRepairMenuViewModel::IsOpenedFromQuickWheel() const {
    return false;
}

bool UVRepairMenuViewModel::IsAtLeastExpert() const {
    return false;
}

ELegacyRepairMenuType UVRepairMenuViewModel::GetTypeMenu() const {
    return ELegacyRepairMenuType::Repair;
}

EOriginalInventoryMenuSortType UVRepairMenuViewModel::GetSortType() const {
    return EOriginalInventoryMenuSortType::Name;
}

TArray<FLegacyRepairItemProperties> UVRepairMenuViewModel::GetRepairList() const {
    return TArray<FLegacyRepairItemProperties>();
}

bool UVRepairMenuViewModel::GetRepairAllButtonVisible() const {
    return false;
}

bool UVRepairMenuViewModel::GetRepairAllButtonEnable() const {
    return false;
}

FLegacyRepairAmount UVRepairMenuViewModel::GetRepairAllAmount() const {
    return FLegacyRepairAmount{};
}

bool UVRepairMenuViewModel::GetRemoveButtonVisible() const {
    return false;
}

FModernRepairMenuCharacterData UVRepairMenuViewModel::GetPlayerData() const {
    return FModernRepairMenuCharacterData{};
}

FModernRepairMenuCharacterData UVRepairMenuViewModel::GetMerchantData() const {
    return FModernRepairMenuCharacterData{};
}

float UVRepairMenuViewModel::GetHammerBreakChance() const {
    return 0.0f;
}

bool UVRepairMenuViewModel::GetFilterButtonVisible() const {
    return false;
}

FText UVRepairMenuViewModel::GetFilterButtonName() const {
    return FText::GetEmpty();
}

FLegacyRepairAmount UVRepairMenuViewModel::GetAmountHammer() const {
    return FLegacyRepairAmount{};
}


