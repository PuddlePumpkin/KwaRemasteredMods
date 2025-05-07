#include "VEnhancedAltarPlayerController.h"

AVEnhancedAltarPlayerController::AVEnhancedAltarPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CurrentRawMoveInputLength = 0.00f;
    this->CurrentMoveInputLength = 0.00f;
    this->CurrentMoveInputLengthBeforeScaling = 0.00f;
    this->PowerAttackInputTime = 0.30f;
    this->AutoAlignCameraTurnSpeedScale = 0.25f;
    this->HorseAutoAlignCameraAngleThreshold = 45.00f;
    this->HorseAutoAlignCameraDelay = 1.50f;
    this->SprintMinYMovementInput = -0.75f;
    this->SprintMaxYMovementInput = 0.75f;
    this->SprintMinXMovementInput = 0.50f;
    this->SprintXThresholdToForceDeactivation = -0.01f;
    this->MoveInputReleaseTimerBeforeDisablingSprintAndGallop = 0.40f;
    this->GallopMinYMovementInput = -0.75f;
    this->GallopMaxYMovementInput = 0.75f;
    this->GallopMinXMovementInput = 0.50f;
    this->GallopXThresholdToForceDeactivation = -0.01f;
    this->QuickSaveLoadEvent = NULL;
    this->DefaultMappingContext = NULL;
    this->MouseWheelInputAction = NULL;
    this->ToggleCharacterMenuInputAction = NULL;
    this->OpenRestMenuInputAction = NULL;
    this->OpenOptionsMenuInputAction = NULL;
    this->OpenStatsMenuInputAction = NULL;
    this->OpenInventoryMenuInputAction = NULL;
    this->OpenMagicMenuInputAction = NULL;
    this->OpenMapMenuInputAction = NULL;
    this->OpenQuestMenuInputAction = NULL;
    this->OpenHelpMenuInputAction = NULL;
    this->QuickSaveInputAction = NULL;
    this->QuickLoadInputAction = NULL;
    this->MovementMappingContext = NULL;
    this->MovementForwardInputAction = NULL;
    this->MovementBackwardInputAction = NULL;
    this->MovementLeftInputAction = NULL;
    this->MovementRightInputAction = NULL;
    this->TurnInputAction = NULL;
    this->LookUpInputAction = NULL;
    this->AutoMoveInputAction = NULL;
    this->JumpInputAction = NULL;
    this->CrouchInputAction = NULL;
    this->ToggleWalkInputAction = NULL;
    this->SprintInputAction = NULL;
    this->HorseWalkInputAction = NULL;
    this->HorseGallopInputAction = NULL;
    this->ShiftKeyInputAction = NULL;
    this->CombatActionsMappingContext = NULL;
    this->AttackInputAction = NULL;
    this->BlockInputAction = NULL;
    this->CastInputAction = NULL;
    this->ReadyItemInputAction = NULL;
    this->UndrawBowInputAction = NULL;
    this->TelekinesisMappingContext = NULL;
    this->PushItemInputAction = NULL;
    this->PullItemInputAction = NULL;
    this->ReleaseItemInputAction = NULL;
    this->LaunchItemInputAction = NULL;
    this->DrawWhileTelekinesisInputAction = NULL;
    this->UndrawWhileTelekinesisInputAction = NULL;
    this->ActionsMappingContext = NULL;
    this->ActivateInputAction = NULL;
    this->TogglePOVInputAction = NULL;
    this->GrabInputAction = NULL;
    this->QuickKeysMappingContext = NULL;
    this->QuickMenuInputAction = NULL;
    this->Quick1InputAction_Gamepad = NULL;
    this->Quick2InputAction_Gamepad = NULL;
    this->Quick3InputAction_Gamepad = NULL;
    this->Quick4InputAction_Gamepad = NULL;
    this->Quick5InputAction_Gamepad = NULL;
    this->Quick6InputAction_Gamepad = NULL;
    this->Quick7InputAction_Gamepad = NULL;
    this->Quick8InputAction_Gamepad = NULL;
    this->Quick1InputAction_Keyboard = NULL;
    this->Quick2InputAction_Keyboard = NULL;
    this->Quick3InputAction_Keyboard = NULL;
    this->Quick4InputAction_Keyboard = NULL;
    this->Quick5InputAction_Keyboard = NULL;
    this->Quick6InputAction_Keyboard = NULL;
    this->Quick7InputAction_Keyboard = NULL;
    this->Quick8InputAction_Keyboard = NULL;
    this->DebugMappingContext = NULL;
    this->ToggleUITexturePairingInputAction = NULL;
    this->TogglePrimaryGameLayoutDisplayInputAction = NULL;
    this->ShowDebugMenuInputAction = NULL;
    this->ShowPerformanceDebugInfoAction = NULL;
    this->ToggleDoCsvProfileAction = NULL;
    this->ToggleFPSChartAction = NULL;
}

void AVEnhancedAltarPlayerController::TurnInputCompleted() {
}

void AVEnhancedAltarPlayerController::TurnInput(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::ToggleWalk(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::ToggleSprint(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::ToggleSpellCastPressed() {
}

void AVEnhancedAltarPlayerController::ToggleSneak(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::TogglePOVInput_Released() {
}

void AVEnhancedAltarPlayerController::TogglePOVInput_Pressed() {
}

void AVEnhancedAltarPlayerController::ToggleHorseWalk(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::ToggleGrabPressed() {
}

void AVEnhancedAltarPlayerController::ToggleGallop(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::ToggleDrawWeaponReleased() {
}

void AVEnhancedAltarPlayerController::ToggleDrawWeaponPressed() {
}

void AVEnhancedAltarPlayerController::ToggleCharacterMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::ToggleCharacterMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::ToggleBlockReleased() {
}

void AVEnhancedAltarPlayerController::ToggleBlockPressed() {
}

void AVEnhancedAltarPlayerController::TelekinesisTryToPushItem_Released() {
}

void AVEnhancedAltarPlayerController::TelekinesisTryToPushItem_Pressed() {
}

void AVEnhancedAltarPlayerController::TelekinesisTryToPullItem_Released() {
}

void AVEnhancedAltarPlayerController::TelekinesisTryToPullItem_Pressed() {
}

void AVEnhancedAltarPlayerController::TelekinesisReleaseItem() {
}

void AVEnhancedAltarPlayerController::TelekinesisLaunchItem() {
}

void AVEnhancedAltarPlayerController::SwitchToUserInterfaceInputMapping(bool bDoRemoveQuickKeysInputMapping) {
}

void AVEnhancedAltarPlayerController::SwitchToGameInputMappings() {
}

void AVEnhancedAltarPlayerController::ShowDebugMenu() {
}

void AVEnhancedAltarPlayerController::ShiftKeyInput_Released() {
}

void AVEnhancedAltarPlayerController::ShiftKeyInput_Pressed() {
}

void AVEnhancedAltarPlayerController::SetBlockFlushPressedKeys(bool NewBlockFlushPressedKeys) {
}

void AVEnhancedAltarPlayerController::ReleaseGrab() {
}

void AVEnhancedAltarPlayerController::ReleaseAllQuickInputs() {
}

void AVEnhancedAltarPlayerController::ReadyItemInput_Released() {
}

void AVEnhancedAltarPlayerController::ReadyItemInput_Pressed() {
}

void AVEnhancedAltarPlayerController::QuickSaveInput_Released() {
}

void AVEnhancedAltarPlayerController::QuickSaveInput_Pressed() {
}

void AVEnhancedAltarPlayerController::QuickMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::QuickMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::QuickLoadInput_Released() {
}

void AVEnhancedAltarPlayerController::QuickLoadInput_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick8Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick8Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick7Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick7Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick6Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick6Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick5Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick5Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick4Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick4Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick3Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick3Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick2Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick2Input_Pressed() {
}

void AVEnhancedAltarPlayerController::Quick1Input_Released() {
}

void AVEnhancedAltarPlayerController::Quick1Input_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenStatsMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenStatsMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenRestMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenRestMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenQuestMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenQuestMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenOptionsMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenOptionsMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenMapMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenMapMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenMagicMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenMagicMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenInventoryMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenInventoryMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OpenHelpMenuInput_Released() {
}

void AVEnhancedAltarPlayerController::OpenHelpMenuInput_Pressed() {
}

void AVEnhancedAltarPlayerController::OnUndrawBowReleased() {
}

void AVEnhancedAltarPlayerController::OnLoadStarted() {
}

void AVEnhancedAltarPlayerController::OnLoadFinished() {
}

void AVEnhancedAltarPlayerController::OnDrawWeaponReleased() {
}

void AVEnhancedAltarPlayerController::OnAttackRequestReleased() {
}

void AVEnhancedAltarPlayerController::OnAttackRequestPressed() {
}

void AVEnhancedAltarPlayerController::MovementRightInput_Released() {
}

void AVEnhancedAltarPlayerController::MovementRightInput_Pressed(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::MovementLeftInput_Released() {
}

void AVEnhancedAltarPlayerController::MovementLeftInput_Pressed(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::MovementForwardInput_Released() {
}

void AVEnhancedAltarPlayerController::MovementForwardInput_Pressed(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::MovementBackwardInput_Released() {
}

void AVEnhancedAltarPlayerController::MovementBackwardInput_Pressed(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::MouseWheelUpInput(const FInputActionValue& Value) {
}

void AVEnhancedAltarPlayerController::LookUpInputCompleted() {
}

void AVEnhancedAltarPlayerController::LookUpInput(const FInputActionValue& Value) {
}

bool AVEnhancedAltarPlayerController::IsWalking() {
    return false;
}

bool AVEnhancedAltarPlayerController::IsInGameConfiguration() const {
    return false;
}

void AVEnhancedAltarPlayerController::HandleDeviceConnectionChange(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId) {
}

bool AVEnhancedAltarPlayerController::GetWantsToSprint() const {
    return false;
}

bool AVEnhancedAltarPlayerController::GetWantsToGallop() const {
    return false;
}

void AVEnhancedAltarPlayerController::DisableWalkToggle() {
}

void AVEnhancedAltarPlayerController::DisableSprintToggle() {
}

void AVEnhancedAltarPlayerController::DisableSneakToggle() {
}

void AVEnhancedAltarPlayerController::DisableGallopToggle() {
}

void AVEnhancedAltarPlayerController::DisableAutoMoveToggle() {
}

void AVEnhancedAltarPlayerController::CrouchInput_Released() {
}

void AVEnhancedAltarPlayerController::CrouchInput_Pressed() {
}

void AVEnhancedAltarPlayerController::CastInput_Released() {
}

void AVEnhancedAltarPlayerController::CastInput_Pressed() {
}

void AVEnhancedAltarPlayerController::BP_FlushPressedKeys() {
}

void AVEnhancedAltarPlayerController::BlockInput_Released() {
}

void AVEnhancedAltarPlayerController::BlockInput_Pressed() {
}

void AVEnhancedAltarPlayerController::AutoMoveInput_Pressed() {
}

void AVEnhancedAltarPlayerController::AttackInput_Released() {
}

void AVEnhancedAltarPlayerController::AttackInput_Pressed() {
}

void AVEnhancedAltarPlayerController::ActivateInput_Released() {
}

void AVEnhancedAltarPlayerController::ActivateInput_Pressed() {
}


