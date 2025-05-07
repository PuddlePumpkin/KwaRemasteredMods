#include "VSpellMakingMenuViewModel.h"

UVSpellMakingMenuViewModel::UVSpellMakingMenuViewModel() {
    this->SortType = EOriginalInventoryMenuSortType::Name;
    this->bIsSortReversed = false;
    this->bIsRequiredEffectVisible = false;
}

void UVSpellMakingMenuViewModel::SetSpellMakingCost(const FLegacySpellMakingCost& Value) {
}

void UVSpellMakingMenuViewModel::SetSortType(const EOriginalInventoryMenuSortType& NewSortType) {
}

void UVSpellMakingMenuViewModel::SetRequiredEffectVisibility(bool bNewVisibility) {
}

void UVSpellMakingMenuViewModel::SetRequiredEffectsText(const FText& Value) {
}

void UVSpellMakingMenuViewModel::SetKnownEffectsItems(const TArray<FLegacyEffectsItemProperties>& Value) {
}

void UVSpellMakingMenuViewModel::SetIsSortReversed(bool bNewIsSortReversed) {
}

void UVSpellMakingMenuViewModel::RegisterSendClickedKnownEffect(int32 Index, bool bWantToDelete) {
}

void UVSpellMakingMenuViewModel::RegisterSendClickedExit() {
}

void UVSpellMakingMenuViewModel::RegisterSendClickedCreate(FText NewSpellName) {
}

void UVSpellMakingMenuViewModel::RegisterSendClickedAddedEffect(int32 Index, bool bWantToDelete) {
}

bool UVSpellMakingMenuViewModel::IsSortReversed() const {
    return false;
}

bool UVSpellMakingMenuViewModel::IsRequiredEffectVisible() const {
    return false;
}

FLegacySpellMakingCost UVSpellMakingMenuViewModel::GetSpellMakingCost() const {
    return FLegacySpellMakingCost{};
}

EOriginalInventoryMenuSortType UVSpellMakingMenuViewModel::GetSortType() const {
    return EOriginalInventoryMenuSortType::Name;
}

FText UVSpellMakingMenuViewModel::GetRequiredEffectsText() const {
    return FText::GetEmpty();
}

TArray<FLegacyEffectsItemProperties> UVSpellMakingMenuViewModel::GetKnownEffectsItems() const {
    return TArray<FLegacyEffectsItemProperties>();
}


