#include "VStatsMenuViewModel.h"

UVStatsMenuViewModel::UVStatsMenuViewModel() {
    this->CurrentPage = ELegacyStatsMenuPage::Attributes;
    this->AreDetailsDisplayed = true;
}

void UVStatsMenuViewModel::UpdateOneSkillItemProperties(const int32 Index, const FLegacyStatsMenuSkillItemUpdatableProperties& NewSkillItemProperties) {
}

void UVStatsMenuViewModel::SetSkillItemUpdatableProperties(const FLegacyStatsMenuSkillItemUpdatableProperties& NewSkillItemUpdatableProperties) {
}

void UVStatsMenuViewModel::SetSkillItemProperties(const TArray<FLegacyStatsMenuSkillItemProperties>& NewSkillItemProperties) {
}

void UVStatsMenuViewModel::SetSecondaryAttributes(const TMap<ELegacyStatsMenuPage2Items, FLegacyStatsMenuSecondaryAttribute>& NewAttributes) {
}

void UVStatsMenuViewModel::SetSecondaryAttribute(const ELegacyStatsMenuPage2Items Item, const FLegacyStatsMenuSecondaryAttribute& NewValue) {
}

void UVStatsMenuViewModel::SetPopupContent(const FLegacyStatsMenuPopupContent& NewPopUpContent) {
}

void UVStatsMenuViewModel::SetPlayerInfo(const FLegacyStatsMenuPlayerInfo& NewPlayerInfo) {
}

void UVStatsMenuViewModel::SetMiscItems(const TArray<FLegacyStatsMenuMiscItemProperties>& NewMiscItems) {
}

void UVStatsMenuViewModel::SetMagicka(const FLegacyStatsMenuPrimaryAttributeValues& NewMagicka) {
}

void UVStatsMenuViewModel::SetLevelProgression(const FLegacyStatsMenuLevelProgression& NewLevelProgression) {
}

void UVStatsMenuViewModel::SetHealth(const FLegacyStatsMenuPrimaryAttributeValues& NewHealth) {
}

void UVStatsMenuViewModel::SetFatigue(const FLegacyStatsMenuPrimaryAttributeValues& NewFatigue) {
}

void UVStatsMenuViewModel::SetFactions(const TArray<FLegacyStatsMenuFactionProperties>& NewFactions) {
}

void UVStatsMenuViewModel::SetCurrentPage(const ELegacyStatsMenuPage& NewCurrentPage) {
}

void UVStatsMenuViewModel::SetAreDetailsDisplayed(bool NewAreDetailsDisplayed) {
}

void UVStatsMenuViewModel::ResetHoverData() {
}

void UVStatsMenuViewModel::RegisterSendHoverOnItemHandler(ELegacyStatsMenuPage Page, int32 ItemIndex) {
}

FLegacyStatsMenuSkillItemUpdatableProperties UVStatsMenuViewModel::GetSkillItemUpdatableProperties() const {
    return FLegacyStatsMenuSkillItemUpdatableProperties{};
}

TArray<FLegacyStatsMenuSkillItemProperties> UVStatsMenuViewModel::GetSkillItemProperties() const {
    return TArray<FLegacyStatsMenuSkillItemProperties>();
}

TMap<ELegacyStatsMenuPage2Items, FLegacyStatsMenuSecondaryAttribute> UVStatsMenuViewModel::GetSecondaryAttributes() const {
    return TMap<ELegacyStatsMenuPage2Items, FLegacyStatsMenuSecondaryAttribute>();
}

FLegacyStatsMenuPopupContent UVStatsMenuViewModel::GetPopUpContent() const {
    return FLegacyStatsMenuPopupContent{};
}

FLegacyStatsMenuPlayerInfo UVStatsMenuViewModel::GetPlayerInfo() const {
    return FLegacyStatsMenuPlayerInfo{};
}

TArray<FLegacyStatsMenuMiscItemProperties> UVStatsMenuViewModel::GetMiscItems() const {
    return TArray<FLegacyStatsMenuMiscItemProperties>();
}

FLegacyStatsMenuPrimaryAttributeValues UVStatsMenuViewModel::GetMagicka() const {
    return FLegacyStatsMenuPrimaryAttributeValues{};
}

FLegacyStatsMenuLevelProgression UVStatsMenuViewModel::GetLevelProgression() const {
    return FLegacyStatsMenuLevelProgression{};
}

FLegacyStatsMenuPrimaryAttributeValues UVStatsMenuViewModel::GetHealth() const {
    return FLegacyStatsMenuPrimaryAttributeValues{};
}

FLegacyStatsMenuPrimaryAttributeValues UVStatsMenuViewModel::GetFatigue() const {
    return FLegacyStatsMenuPrimaryAttributeValues{};
}

TArray<FLegacyStatsMenuFactionProperties> UVStatsMenuViewModel::GetFactions() const {
    return TArray<FLegacyStatsMenuFactionProperties>();
}

ELegacyStatsMenuPage UVStatsMenuViewModel::GetCurrentPage() const {
    return ELegacyStatsMenuPage::Attributes;
}

bool UVStatsMenuViewModel::GetAreDetailsDisplayed() const {
    return false;
}


