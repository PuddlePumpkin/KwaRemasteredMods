#include "VMagicMenuViewModel.h"

UVMagicMenuViewModel::UVMagicMenuViewModel() {
    this->SpellEffectiveness = 100.00f;
    this->CurrentPage = ELegacyMagicMenuPage::Self;
    this->SortType = ELegacyMagicMenuSortType::Name;
    this->bIsSortReversed = false;
}

void UVMagicMenuViewModel::ToggleFavoriteItem(const FLegacyMagicMenuItemProperties& InItem) {
}

void UVMagicMenuViewModel::SetSpellEffectiveness(float NewSpellEffectiveness) {
}

void UVMagicMenuViewModel::SetSpellEfectivenessExplanation(const FModernSpellEffectivenessProperties NewSpellEffectivenessExplanation) {
}

void UVMagicMenuViewModel::SetSortType(ELegacyMagicMenuSortType NewSortType) {
}

void UVMagicMenuViewModel::SetIsSortReversed(bool bNewIsSortReversed) {
}

void UVMagicMenuViewModel::SetInventoryForPage(const ELegacyMagicMenuPage Page) {
}

void UVMagicMenuViewModel::SetInventory(const TArray<FLegacyMagicMenuItemProperties>& NewItems) {
}

void UVMagicMenuViewModel::SetCurrentSpellEquiped(const FLegacyMagicMenuItemProperties& InSpellEquiped) {
}

void UVMagicMenuViewModel::SetCurrentPage(ELegacyMagicMenuPage NewPage) {
}

void UVMagicMenuViewModel::ReplaceCurrentPageInventory(const TArray<FLegacyMagicMenuItemProperties>& NewItems) {
}

void UVMagicMenuViewModel::RegisterSendItemHoverHandler(int32 ItemIndex) {
}

void UVMagicMenuViewModel::RegisterSendClickOnItemHandler(int32 InButtonIndex) {
}

bool UVMagicMenuViewModel::IsSortReversed() const {
    return false;
}

bool UVMagicMenuViewModel::IsItemTypeOnPage(const ELegacyMagicMenuItemType Item, const ELegacyMagicMenuPage Page) const {
    return false;
}

float UVMagicMenuViewModel::GetSpellEffectiveness() const {
    return 0.0f;
}

FModernSpellEffectivenessProperties UVMagicMenuViewModel::GetSpellEfectivenessExplanation() const {
    return FModernSpellEffectivenessProperties{};
}

ELegacyMagicMenuSortType UVMagicMenuViewModel::GetSortType() const {
    return ELegacyMagicMenuSortType::Name;
}

TArray<FLegacyMagicMenuItemProperties> UVMagicMenuViewModel::GetInventory() const {
    return TArray<FLegacyMagicMenuItemProperties>();
}

TArray<FLegacyMagicMenuItemProperties> UVMagicMenuViewModel::GetFavoritesItems() const {
    return TArray<FLegacyMagicMenuItemProperties>();
}

FLegacyMagicMenuItemProperties UVMagicMenuViewModel::GetCurrentSpellEquiped() const {
    return FLegacyMagicMenuItemProperties{};
}

TArray<FLegacyMagicMenuItemProperties> UVMagicMenuViewModel::GetCurrentPageInventory() const {
    return TArray<FLegacyMagicMenuItemProperties>();
}

ELegacyMagicMenuPage UVMagicMenuViewModel::GetCurrentPage() const {
    return ELegacyMagicMenuPage::Self;
}


