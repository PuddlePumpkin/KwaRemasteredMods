#include "VLevelChangeData.h"

UVLevelChangeData::UVLevelChangeData() {
    this->bIsFastTravelling = false;
    this->bIsSeamlessTravelling = false;
    this->bIsCurrentSubLevelLoaded = false;
    this->PersistentLevel = NULL;
}

void UVLevelChangeData::UpdateWeatherAudioTexture() {
}

void UVLevelChangeData::ReloadSaveAfterFadeToBlack() {
}

void UVLevelChangeData::QuickLoadSaveAfterFadeToBlack() {
}

void UVLevelChangeData::OnFadeToGameEndEventReceived() {
}

void UVLevelChangeData::OnFadeToGameBeginEventReceived() {
}

void UVLevelChangeData::OnFadeToGameAnimationOver() {
}

void UVLevelChangeData::OnFadeToBlackThroughDoorOver() {
}

void UVLevelChangeData::OnFadeToBlackOverBeforeFastTravel() {
}

void UVLevelChangeData::OnFadeToBlackInPlace() {
}

void UVLevelChangeData::OnFadeToBlackEndEventReceived(EVFadeTransitionType InType) {
}

void UVLevelChangeData::OnFadeToBlackBeginEventReceived() {
}

void UVLevelChangeData::OnFadeToBlackAnimationOverSeamless() {
}

void UVLevelChangeData::OnFadeToBlackAnimationOverAttach() {
}

void UVLevelChangeData::OnEndOfFadeToBlackInPlace() {
}

void UVLevelChangeData::GoToMainMenuAfterFadeToBlack() {
}

UVLevelChangeData* UVLevelChangeData::GetLevelChangeData(const UWorld* InWorld) {
    return NULL;
}

void UVLevelChangeData::CompleteShadowCacheRefresh() const {
}

void UVLevelChangeData::AfterFadeToBlackFromMoveTo() {
}


