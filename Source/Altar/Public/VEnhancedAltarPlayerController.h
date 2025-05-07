#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputActionValue.h"
#include "OnSwitchToGameInputMappingsDelegate.h"
#include "OnSwitchToUserInterfaceMappingsDelegate.h"
#include "VAltarPlayerController.h"
#include "VAudioPlayable.h"
#include "VEnhancedAltarPlayerController.generated.h"

class UAkAudioEvent;
class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable)
class ALTAR_API AVEnhancedAltarPlayerController : public AVAltarPlayerController, public IVAudioPlayable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentRawMoveAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRawMoveInputLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentMoveAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentMoveInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMoveInputLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMoveInputLengthBeforeScaling;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerAttackInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAlignCameraTurnSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseAutoAlignCameraAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorseAutoAlignCameraDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchToUserInterfaceMappings OnSwitchToUserInterfaceMappings;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchToGameInputMappings OnSwitchToGameInputMappings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMinYMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMaxYMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMinXMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintXThresholdToForceDeactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInputReleaseTimerBeforeDisablingSprintAndGallop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GallopMinYMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GallopMaxYMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GallopMinXMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GallopXThresholdToForceDeactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuickSaveLoadEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* DefaultMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MouseWheelInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleCharacterMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenRestMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenOptionsMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenStatsMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenInventoryMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenMagicMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenMapMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenQuestMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* OpenHelpMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* QuickSaveInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* QuickLoadInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* MovementMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MovementForwardInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MovementBackwardInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MovementLeftInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MovementRightInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* TurnInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LookUpInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* AutoMoveInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* JumpInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CrouchInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleWalkInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SprintInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* HorseWalkInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* HorseGallopInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ShiftKeyInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* CombatActionsMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* AttackInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* BlockInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CastInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ReadyItemInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* UndrawBowInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* TelekinesisMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* PushItemInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* PullItemInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ReleaseItemInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LaunchItemInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* DrawWhileTelekinesisInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* UndrawWhileTelekinesisInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* ActionsMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ActivateInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* TogglePOVInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* GrabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* QuickKeysMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* QuickMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick1InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick2InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick3InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick4InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick5InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick6InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick7InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick8InputAction_Gamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick1InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick2InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick3InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick4InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick5InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick6InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick7InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* Quick8InputAction_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* DebugMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleUITexturePairingInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* TogglePrimaryGameLayoutDisplayInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ShowDebugMenuInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ShowPerformanceDebugInfoAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleDoCsvProfileAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleFPSChartAction;
    
public:
    AVEnhancedAltarPlayerController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TurnInputCompleted();
    
    UFUNCTION(BlueprintCallable)
    void TurnInput(const FInputActionValue& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleWalk(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSprint(const FInputActionValue& Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void ToggleSpellCastPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleSneak(const FInputActionValue& Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void TogglePOVInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void TogglePOVInput_Pressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleHorseWalk(const FInputActionValue& Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void ToggleGrabPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleGallop(const FInputActionValue& Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void ToggleDrawWeaponReleased();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawWeaponPressed();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCharacterMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCharacterMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void ToggleBlockReleased();
    
    UFUNCTION(BlueprintCallable)
    void ToggleBlockPressed();
    
    UFUNCTION(BlueprintCallable)
    void TelekinesisTryToPushItem_Released();
    
    UFUNCTION(BlueprintCallable)
    void TelekinesisTryToPushItem_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void TelekinesisTryToPullItem_Released();
    
    UFUNCTION(BlueprintCallable)
    void TelekinesisTryToPullItem_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void TelekinesisReleaseItem();
    
    UFUNCTION(BlueprintCallable)
    void TelekinesisLaunchItem();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchToUserInterfaceInputMapping(bool bDoRemoveQuickKeysInputMapping);
    
    UFUNCTION(BlueprintCallable)
    void SwitchToGameInputMappings();
    
private:
    UFUNCTION(BlueprintCallable)
    void ShowDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void ShiftKeyInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void ShiftKeyInput_Pressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBlockFlushPressedKeys(bool NewBlockFlushPressedKeys);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReleaseGrab();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllQuickInputs();
    
    UFUNCTION(BlueprintCallable)
    void ReadyItemInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void ReadyItemInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void QuickSaveInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void QuickSaveInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void QuickMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void QuickMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void QuickLoadInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void QuickLoadInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick8Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick8Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick7Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick7Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick6Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick6Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick5Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick5Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick4Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick4Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick3Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick3Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick2Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick2Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void Quick1Input_Released();
    
    UFUNCTION(BlueprintCallable)
    void Quick1Input_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenStatsMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenStatsMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenRestMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenRestMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenQuestMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenQuestMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenOptionsMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenOptionsMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenMapMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenMapMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenMagicMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenMagicMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenInventoryMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenInventoryMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OpenHelpMenuInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void OpenHelpMenuInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void OnUndrawBowReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDrawWeaponReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackRequestReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackRequestPressed();
    
    UFUNCTION(BlueprintCallable)
    void MovementRightInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void MovementRightInput_Pressed(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void MovementLeftInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void MovementLeftInput_Pressed(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void MovementForwardInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void MovementForwardInput_Pressed(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void MovementBackwardInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void MovementBackwardInput_Pressed(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void MouseWheelUpInput(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void LookUpInputCompleted();
    
    UFUNCTION(BlueprintCallable)
    void LookUpInput(const FInputActionValue& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsWalking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGameConfiguration() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDeviceConnectionChange(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWantsToSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWantsToGallop() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableWalkToggle();
    
    UFUNCTION(BlueprintCallable)
    void DisableSprintToggle();
    
    UFUNCTION(BlueprintCallable)
    void DisableSneakToggle();
    
    UFUNCTION(BlueprintCallable)
    void DisableGallopToggle();
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoMoveToggle();
    
private:
    UFUNCTION(BlueprintCallable)
    void CrouchInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void CrouchInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void CastInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void CastInput_Pressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_FlushPressedKeys();
    
private:
    UFUNCTION(BlueprintCallable)
    void BlockInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void BlockInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void AutoMoveInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void AttackInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void AttackInput_Pressed();
    
    UFUNCTION(BlueprintCallable)
    void ActivateInput_Released();
    
    UFUNCTION(BlueprintCallable)
    void ActivateInput_Pressed();
    

    // Fix for true pure virtual functions not being implemented
};

