#include "VAltarPlayerCameraManager.h"
#include "VStateMachineComponent.h"
#include "VAudioListener.h"

AVAltarPlayerCameraManager::AVAltarPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->OverridedEaseCurveTransition = NULL;
    this->OverridedTransitionDuration = -1.00f;
    this->AudioListener = CreateDefaultSubobject<UVAudioListener>(TEXT("AudioListener"));
    this->StateMachineComponent = CreateDefaultSubobject<UVStateMachineComponent>(TEXT("State Machine"));
    this->AudioListener->SetupAttachment(RootComponent);
}

void AVAltarPlayerCameraManager::UpdateDialogueCamera(float DeltaTime, bool bIsInPersuasion) {
}

void AVAltarPlayerCameraManager::UpdateCamera(float DeltaTime) {
}

void AVAltarPlayerCameraManager::TakeControlOfCameraPitch(bool bShouldTakeControl) {
}

void AVAltarPlayerCameraManager::StopVanityCameraTimer() {
}

void AVAltarPlayerCameraManager::SetVanityCameraTimer() {
}

void AVAltarPlayerCameraManager::SetDesiredOverridePitchAngle(float desiredAngle) {
}

void AVAltarPlayerCameraManager::SetCurrentCameraSetting(const FVCameraSettings& CameraSettingsRow) {
}

void AVAltarPlayerCameraManager::RestartFromPauseVanityCameraTimer() {
}

void AVAltarPlayerCameraManager::ResetFromInputVanityCameraTimer() {
}

void AVAltarPlayerCameraManager::OverrideTransitionEaseCurve(UCurveFloat* NewOverrideCurve) {
}

void AVAltarPlayerCameraManager::OverrideTransitionDuration(float NewOverrideDuration) {
}

void AVAltarPlayerCameraManager::OnCameraTagsChanged(const FGameplayTagContainer& CurrentTags, const FGameplayTagContainer& PreviousTags) {
}

bool AVAltarPlayerCameraManager::HasTagsToEnterVanityCamera() const {
    return false;
}

FGameplayTag AVAltarPlayerCameraManager::GetLastCameraTag() const {
    return FGameplayTag{};
}

FGameplayTag AVAltarPlayerCameraManager::GetCurrentCameraTag() const {
    return FGameplayTag{};
}

void AVAltarPlayerCameraManager::ForceSetDialogueFOV(float DesiredFOV, bool bIsInPersuasion) {
}

void AVAltarPlayerCameraManager::EnterDialogueCamera() {
}

void AVAltarPlayerCameraManager::ChangeCameraTags(const FGameplayTag& NewCameraTags) {
}

bool AVAltarPlayerCameraManager::CanEnterInVanityCamera() const {
    return false;
}


