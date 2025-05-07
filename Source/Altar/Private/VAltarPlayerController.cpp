#include "VAltarPlayerController.h"
#include "VAltarPlayerCameraManager.h"

AVAltarPlayerController::AVAltarPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AVAltarPlayerCameraManager::StaticClass();
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->FirstPersonViewSensitivity = 0.40f;
    this->ThirdPersonViewSensitivity = 0.40f;
    this->ViewSensitivity = 5.00f;
    this->CursorSensitivity = 450.00f;
    this->GamepadSensitivityScale = 8.00f;
    this->FirstPersonCameraVerticalSensitivityScale = 2.00f;
    this->ThirdPersonCameraVerticalSensitivityScale = 2.00f;
    this->FirstPersonCameraHorizontalSensitivityScale = 2.00f;
    this->ThirdPersonCameraHorizontalSensitivityScale = 2.00f;
    this->bIsLocomotionDebugModeEnabled = false;
    this->LookAtHeadSocketName1 = TEXT("head");
    this->LookAtHeadSocketName2 = TEXT("Head_M");
    this->CameraTrackingPeriod = 0.00f;
    this->CameraTrackingDuration = 0.00f;
    this->CameraTrackingRampUpEndThreshold = 0.00f;
    this->CameraTrackingRampDownStartThreshold = 1.00f;
    this->CameraTrackingExtraSpeedMultiplier = 1.00f;
    this->bUseAllAxisOnCameraTracking = false;
    this->CameraTrackingBaseSpeed = 1.00f;
    this->DebugMenuWidget = NULL;
    this->bIsPOVChangeLocked = false;
    this->bInputBridgePuppetting = false;
    this->POV = EVPlayerPOVType::FirstPerson;
    this->WantedPOV = EVPlayerPOVType::ThirdPersonClose;
    this->TrackedTargets[0] = NULL;
    this->TrackedTargets[1] = NULL;
    this->TrackedTargets[2] = NULL;
    this->TrackedTargets[3] = NULL;
    this->TrackedTargets[4] = NULL;
    this->DamageLogWidgetClass = NULL;
    this->DamageLogWidget = NULL;
}

void AVAltarPlayerController::UnlockAndRestorePOV() {
}

void AVAltarPlayerController::ToggleUITexturePairing() {
}

void AVAltarPlayerController::ToggleShowVRAMDebugInfo(bool bShow) {
}

void AVAltarPlayerController::ToggleShowFPSDebugInfo(bool bShow) {
}

void AVAltarPlayerController::TogglePrimaryGameLayoutDisplay() {
}

void AVAltarPlayerController::ToggleOblivionWindow() {
}

void AVAltarPlayerController::ToggleFPSChart() {
}

void AVAltarPlayerController::ToggleDoCsvProfile() {
}

void AVAltarPlayerController::SwitchPOV(EVPlayerPOVType TargetPOV, bool bSetToNewDefaultState) {
}

void AVAltarPlayerController::StopCameraTracking() {
}

void AVAltarPlayerController::StartCameraTrackingOnPawn(AVPairedPawn* Target, float Duration, float SpeedMultiplier, float RampUpEndThreshold, float RampDownStartThreshold, UCurveFloat* RampUpSpeedMultiplierCurve, UCurveFloat* RampDownSpeedMultiplierCurve, bool AllAxis) {
}

void AVAltarPlayerController::StartAimingCrosshairAnimation(bool bIsDrawing) {
}

void AVAltarPlayerController::SetRightThumbStickReleased() {
}

void AVAltarPlayerController::SetRightThumbStickPressed() {
}

void AVAltarPlayerController::SetLeftThumbStickReleased() {
}

void AVAltarPlayerController::SetLeftThumbStickPressed() {
}

void AVAltarPlayerController::SetIsNewGameLoadingFromMainMenu(bool bShouldBeNewGameLoadingFromMainMenu) {
}

void AVAltarPlayerController::SetControllerDesiredRotationRate(const FRotator& FirstPersonDesiredRotationRate, const FRotator& ThirdPersonDesiredRotationRate) {
}

void AVAltarPlayerController::RequestQuickLoad() {
}





void AVAltarPlayerController::OnJumpPressed(const FInputActionValue& Value) {
}

void AVAltarPlayerController::OnConsoleActivationStateChanged(bool Activated) {
}

bool AVAltarPlayerController::IsHorseRiding() const {
    return false;
}

AVOblivionPlayerCharacter* AVAltarPlayerController::GetPlayerCharacter() const {
    return NULL;
}

FRotator AVAltarPlayerController::GetLookAtRotationDialogue() const {
    return FRotator{};
}

FRotator AVAltarPlayerController::GetLastInputRotation() const {
    return FRotator{};
}

AActor* AVAltarPlayerController::GetGameplayCamera() const {
    return NULL;
}

float AVAltarPlayerController::GetDesiredFOVDialogue() const {
    return 0.0f;
}

void AVAltarPlayerController::ForceAndLockPOV(EVPlayerPOVType TargetPOV) {
}

AVPairedPawn* AVAltarPlayerController::FindCameraTrackingTarget(float MaxAngleDegrees, float MinDistance, float MaxDistance, TArray<AVPairedPawn*> PotentialTargets) {
    return NULL;
}

void AVAltarPlayerController::ExitVanityCamera() {
}

void AVAltarPlayerController::EnterVanityCamera() {
}

void AVAltarPlayerController::DisplayPerformanceDebugInfo() {
}

void AVAltarPlayerController::DeactivateUITexturePairing() {
}

void AVAltarPlayerController::ActivateUITexturePairing() {
}


