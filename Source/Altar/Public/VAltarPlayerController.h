#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "EVPlayerPOVType.h"
#include "Templates/SubclassOf.h"
#include "VAltarPlayerController.generated.h"

class AActor;
class AVOblivionPlayerCharacter;
class AVPairedPawn;
class UCurveFloat;
class UDebugMenuWidget;

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVAltarPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPersonViewSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonViewSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadSensitivityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPersonCameraVerticalSensitivityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonCameraVerticalSensitivityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPersonCameraHorizontalSensitivityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonCameraHorizontalSensitivityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bIsLocomotionDebugModeEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AVPairedPawn*> HostileAIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FirstPersonRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ThirdPersonRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtHeadSocketName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtHeadSocketName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVPairedPawn> CameraTrackingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTrackingPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTrackingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTrackingRampUpEndThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTrackingRampDownStartThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCurveFloat> CameraTrackingRampUpSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCurveFloat> CameraTrackingRampDownSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTrackingExtraSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAllAxisOnCameraTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTrackingBaseSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugMenuWidget* DebugMenuWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPOVChangeLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputBridgePuppetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVPlayerPOVType POV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVPlayerPOVType WantedPOV;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrackedTargets[5];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDebugMenuWidget> DamageLogWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugMenuWidget* DamageLogWidget;
    
    AVAltarPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockAndRestorePOV();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleUITexturePairing();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleShowVRAMDebugInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowFPSDebugInfo(bool bShow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TogglePrimaryGameLayoutDisplay();
    
    UFUNCTION(BlueprintCallable)
    void ToggleOblivionWindow();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFPSChart();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDoCsvProfile();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchPOV(EVPlayerPOVType TargetPOV, bool bSetToNewDefaultState);
    
    UFUNCTION(BlueprintCallable)
    void StopCameraTracking();
    
    UFUNCTION(BlueprintCallable)
    void StartCameraTrackingOnPawn(AVPairedPawn* Target, float Duration, float SpeedMultiplier, float RampUpEndThreshold, float RampDownStartThreshold, UCurveFloat* RampUpSpeedMultiplierCurve, UCurveFloat* RampDownSpeedMultiplierCurve, bool AllAxis);
    
    UFUNCTION(BlueprintCallable)
    void StartAimingCrosshairAnimation(bool bIsDrawing);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRightThumbStickReleased();
    
    UFUNCTION(BlueprintCallable)
    void SetRightThumbStickPressed();
    
    UFUNCTION(BlueprintCallable)
    void SetLeftThumbStickReleased();
    
    UFUNCTION(BlueprintCallable)
    void SetLeftThumbStickPressed();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsNewGameLoadingFromMainMenu(bool bShouldBeNewGameLoadingFromMainMenu);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetControllerDesiredRotationRate(const FRotator& FirstPersonDesiredRotationRate, const FRotator& ThirdPersonDesiredRotationRate);
    
    UFUNCTION(BlueprintCallable)
    void RequestQuickLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUITexturePairingDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUITexturePairingActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocomotionDebugModeDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocomotionDebugModeActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpPressed(const FInputActionValue& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConsoleActivationStateChanged(bool Activated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHorseRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVOblivionPlayerCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLookAtRotationDialogue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLastInputRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGameplayCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredFOVDialogue() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceAndLockPOV(EVPlayerPOVType TargetPOV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVPairedPawn* FindCameraTrackingTarget(float MaxAngleDegrees, float MinDistance, float MaxDistance, TArray<AVPairedPawn*> PotentialTargets);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitVanityCamera();
    
    UFUNCTION(BlueprintCallable)
    void EnterVanityCamera();
    
    UFUNCTION(BlueprintCallable)
    void DisplayPerformanceDebugInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateUITexturePairing();
    
    UFUNCTION(BlueprintCallable)
    void ActivateUITexturePairing();
    
};

