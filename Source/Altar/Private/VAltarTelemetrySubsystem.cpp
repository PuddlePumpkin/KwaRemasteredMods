#include "VAltarTelemetrySubsystem.h"

UVAltarTelemetrySubsystem::UVAltarTelemetrySubsystem() {
    this->bIsInitialized = false;
    this->MinTimeBetweenPerformanceHeartbeatSends = 5.00f;
    this->ObserveEveryNumFrame = 1;
    this->bIgnoreAutoSavesForPerformanceHeartbeat = true;
    this->bDisablePerformanceHeartbeatInMainMenu = false;
    this->GreatFrameTimeThreshold = 16.70f;
    this->GoodFrameTimeThreshold = 30.00f;
    this->AcceptableFrameTimeThreshold = 33.00f;
    this->PoorFrameTimeThreshold = 40.00f;
    this->TimeBetweenCharacterPlaytimeUpdates = 1.00f;
    this->bIgnoreQuestEventsInMainMenu = true;
}

void UVAltarTelemetrySubsystem::OnSaveStarted(const UVAltarSaveGame* SaveGame) {
}

void UVAltarTelemetrySubsystem::OnSaveComplete(const UVAltarSaveGame* SaveGame) {
}

void UVAltarTelemetrySubsystem::OnFadeToGameEnd() {
}

void UVAltarTelemetrySubsystem::OnFadeToBlackBegin() {
}

void UVAltarTelemetrySubsystem::OnBISessionIDChanged(const FString& NewBISessionID) {
}

void UVAltarTelemetrySubsystem::OnAppActivationStateChanged(const bool bIsFocused) {
}

void UVAltarTelemetrySubsystem::ObserveCurrentFrameData() {
}


