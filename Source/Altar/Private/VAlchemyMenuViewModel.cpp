#include "VAlchemyMenuViewModel.h"

UVAlchemyMenuViewModel::UVAlchemyMenuViewModel() {
    this->PotionWeight = 0.00f;
    this->PotionPrice = 0;
    this->bIsCreateButtonEnable = false;
}

void UVAlchemyMenuViewModel::UpdateDisplayedItems() {
}

TArray<FModernItemEffectProperties> UVAlchemyMenuViewModel::SortEffectsListByName(TArray<FModernItemEffectProperties> Effects) {
    return TArray<FModernItemEffectProperties>();
}

void UVAlchemyMenuViewModel::SetPotionWeight(float NewWeight) {
}

void UVAlchemyMenuViewModel::SetPotionPrice(int32 NewPrice) {
}

void UVAlchemyMenuViewModel::SetPotionName(const FText& NewPotionName) {
}

void UVAlchemyMenuViewModel::SetPotionDefaultNameAndKey(const FText& NewLocalizedPotionName, const FText& AssiosiatedKey) {
}

void UVAlchemyMenuViewModel::SetItemsList(const TArray<FLegacyIngredientItemProperties>& NewIngredients) {
}

void UVAlchemyMenuViewModel::SetIngredientItems(const TArray<FLegacyIngredientItemProperties>& NewItems) {
}

void UVAlchemyMenuViewModel::SetEffectFiltersSelectedNames(const TArray<FString>& NewEffectFiltersSelected) {
}

void UVAlchemyMenuViewModel::SetCurrentItemEffects(const TArray<FModernItemEffectProperties>& NewEffectsProperties) {
}

void UVAlchemyMenuViewModel::SetCreateButtonEnable(bool bNewValue) {
}

void UVAlchemyMenuViewModel::SetApparatusProperties(const TArray<FModernApparatusProperties>& NewProperties) {
}

void UVAlchemyMenuViewModel::RegisterSendClickedItem(int32 ItemIndex) {
}

void UVAlchemyMenuViewModel::RegisterSendClickedIngredient(int32 Index) {
}

void UVAlchemyMenuViewModel::RegisterSendClickedExit() {
}

void UVAlchemyMenuViewModel::RegisterSendClickedCreate(FText NewPotionName) {
}

void UVAlchemyMenuViewModel::OnMustContainSelectedFiltersClicked() {
}

void UVAlchemyMenuViewModel::OnEffectFilterClicked(const FString& EffectName) {
}

void UVAlchemyMenuViewModel::OnClearAllFiltersClicked() {
}

bool UVAlchemyMenuViewModel::MustContainAllSelectedFilters() const {
    return false;
}

bool UVAlchemyMenuViewModel::HasEffectOnFilter(const FLegacyIngredientItemProperties& Item) const {
    return false;
}

float UVAlchemyMenuViewModel::GetPotionWeight() const {
    return 0.0f;
}

int32 UVAlchemyMenuViewModel::GetPotionPrice() const {
    return 0;
}

FText UVAlchemyMenuViewModel::GetPotionName() const {
    return FText::GetEmpty();
}

FText UVAlchemyMenuViewModel::GetPotionDefaultNameKey() const {
    return FText::GetEmpty();
}

FText UVAlchemyMenuViewModel::GetLocalizedPotionDefaultName() const {
    return FText::GetEmpty();
}

TArray<FLegacyIngredientItemProperties> UVAlchemyMenuViewModel::GetItemsList() const {
    return TArray<FLegacyIngredientItemProperties>();
}

TArray<FLegacyIngredientItemProperties> UVAlchemyMenuViewModel::GetIngredientItems() const {
    return TArray<FLegacyIngredientItemProperties>();
}

TArray<FString> UVAlchemyMenuViewModel::GetEffectFiltersSelectedNames() const {
    return TArray<FString>();
}

TArray<FModernItemEffectProperties> UVAlchemyMenuViewModel::GetCurrentItemEffects() const {
    return TArray<FModernItemEffectProperties>();
}

bool UVAlchemyMenuViewModel::GetCreateButtonEnable() const {
    return false;
}

TArray<FModernApparatusProperties> UVAlchemyMenuViewModel::GetApparatusProperties() const {
    return TArray<FModernApparatusProperties>();
}


