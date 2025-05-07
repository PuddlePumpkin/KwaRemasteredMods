#include "VMapMenuViewModel.h"

UVMapMenuViewModel::UVMapMenuViewModel() {
    this->CurrentPage = ELegacyMapMenuPage::LocalMap;
    this->LocalMapMenuViewModel = NULL;
    this->WorldMapMenuViewModel = NULL;
}

void UVMapMenuViewModel::SetTitleProperties(const FLegacyMapMenuTitleProperties& NewTitleProperties) {
}

void UVMapMenuViewModel::SetQuests(const TArray<FLegacyMapMenuQuestProperties>& NewQuests) {
}

void UVMapMenuViewModel::SetQuestHistory(const TArray<FLegacyMapMenuQuestProperties>& NewQuestHistory) {
}

void UVMapMenuViewModel::SetCurrentPage(const ELegacyMapMenuPage NewPage) {
}

void UVMapMenuViewModel::SetActiveQuestData(const FLegacyMapMenuQuestProperties& NewActiveQuestData) {
}

void UVMapMenuViewModel::RegisterSendCurrentPageUpdatedHandler(const ELegacyMapMenuPage NewPage) {
}

void UVMapMenuViewModel::RegisterSendClickedQuestCompleted(int32 Value) {
}

void UVMapMenuViewModel::RegisterSendClickedQuest(int32 Value) {
}

void UVMapMenuViewModel::RegisterSendClickedMap() {
}

void UVMapMenuViewModel::RegisterSendClickedDetailedQuest(int32 Value) {
}

void UVMapMenuViewModel::RegisterSendClickedCurrentQuestHistory(int32 Value) {
}

void UVMapMenuViewModel::RegisterSendClickedBack() {
}

void UVMapMenuViewModel::HideMap() {
}

UVMapPageViewModel* UVMapMenuViewModel::GetWorldMapMenuViewModel() const {
    return NULL;
}

FLegacyMapMenuTitleProperties UVMapMenuViewModel::GetTitleProperties() const {
    return FLegacyMapMenuTitleProperties{};
}

TArray<FLegacyMapMenuQuestProperties> UVMapMenuViewModel::GetQuests() const {
    return TArray<FLegacyMapMenuQuestProperties>();
}

TArray<FLegacyMapMenuQuestProperties> UVMapMenuViewModel::GetQuestHistory() const {
    return TArray<FLegacyMapMenuQuestProperties>();
}

UVMapPageViewModel* UVMapMenuViewModel::GetLocalMapMenuViewModel() const {
    return NULL;
}

ELegacyMapMenuPage UVMapMenuViewModel::GetCurrentPage() const {
    return ELegacyMapMenuPage::LocalMap;
}

FLegacyMapMenuQuestProperties UVMapMenuViewModel::GetActiveQuestData() const {
    return FLegacyMapMenuQuestProperties{};
}

void UVMapMenuViewModel::DelayFastTravelRequestUntilFadeEnd(EVFadeTransitionType InFadeTransitionType) {
}


