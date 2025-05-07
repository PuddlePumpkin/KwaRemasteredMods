#include "VContainerMenuViewModel.h"

UVContainerMenuViewModel::UVContainerMenuViewModel() {
    this->MenuType = ELegacyContainerMenuType::Merchant;
    this->CurrentTab = ELegacyContainerMenuTab::TakeBuy;
    this->CurrentPageContainer = ELegacyInventoryMenuPage::Weapon;
    this->SortTypeContainer = EOriginalInventoryMenuSortType::Name;
    this->bIsSortReversedContainer = false;
    this->bIsSimpleContainer = false;
}

void UVContainerMenuViewModel::SetSortTypeContainer(const EOriginalInventoryMenuSortType& NewSortTypeContainer) {
}

void UVContainerMenuViewModel::SetNpcData(const FLegacyContainerMenuNpcData& NewNPCData) {
}

void UVContainerMenuViewModel::SetMenuType(ELegacyContainerMenuType NewMenuType) {
}

void UVContainerMenuViewModel::SetIsSortReversedContainer(bool bNewIsSortReversedContainer) {
}

void UVContainerMenuViewModel::SetIsSimpleContainer(bool bNewIsSimpleContainer) {
}

void UVContainerMenuViewModel::SetCurrentTab(ELegacyContainerMenuTab NewMenuTab) {
}

void UVContainerMenuViewModel::SetCurrentPageContainer(ELegacyInventoryMenuPage NewPage) {
}

void UVContainerMenuViewModel::SetContainerItems(const TArray<FOriginalInventoryMenuItemProperties>& NewContainerItems) {
}

void UVContainerMenuViewModel::SetButtonData(const FLegacyContainerMenuButtonData& NewButtonData) {
}

void UVContainerMenuViewModel::ReplaceCurrentPageItemsContainer(const TArray<FOriginalInventoryMenuItemProperties>& NewPageContainer) {
}

void UVContainerMenuViewModel::RegisterSendButtonTakeAllHandler() {
}

void UVContainerMenuViewModel::RegisterSendButtonSwitchToInventoryHandler(bool ForceSwitch) {
}

void UVContainerMenuViewModel::RegisterSendButtonSwitchToContainerHandler(bool ForceSwitch) {
}

void UVContainerMenuViewModel::RegisterSendButtonHaggleHandler() {
}

void UVContainerMenuViewModel::RegisterSendButtonExitHandler() {
}

bool UVContainerMenuViewModel::IsContainerTab() const {
    return false;
}

EOriginalInventoryMenuSortType UVContainerMenuViewModel::GetSortTypeContainer() const {
    return EOriginalInventoryMenuSortType::Name;
}

FLegacyContainerMenuNpcData UVContainerMenuViewModel::GetNpcData() const {
    return FLegacyContainerMenuNpcData{};
}

ELegacyContainerMenuType UVContainerMenuViewModel::GetMenuType() const {
    return ELegacyContainerMenuType::Merchant;
}

bool UVContainerMenuViewModel::GetIsSortReversedContainer() const {
    return false;
}

bool UVContainerMenuViewModel::GetIsSimpleContainer() const {
    return false;
}

ELegacyContainerMenuTab UVContainerMenuViewModel::GetCurrentTab() const {
    return ELegacyContainerMenuTab::GiveSell;
}

TArray<FOriginalInventoryMenuItemProperties> UVContainerMenuViewModel::GetCurrentPageItemsContainer() const {
    return TArray<FOriginalInventoryMenuItemProperties>();
}

ELegacyInventoryMenuPage UVContainerMenuViewModel::GetCurrentPageContainer() const {
    return ELegacyInventoryMenuPage::Weapon;
}

TArray<FOriginalInventoryMenuItemProperties> UVContainerMenuViewModel::GetContainerItems() const {
    return TArray<FOriginalInventoryMenuItemProperties>();
}

FLegacyContainerMenuButtonData UVContainerMenuViewModel::GetButtonData() const {
    return FLegacyContainerMenuButtonData{};
}


