#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ReactToFreezeInterface.h"
#include "VCameraSettingData.h"
#include "VCameraSettings.h"
#include "VAltarPlayerCameraManager.generated.h"

class UCurveFloat;
class UVAudioListener;
class UVStateMachineComponent;

UCLASS(Blueprintable, NonTransient)
class AVAltarPlayerCameraManager : public APlayerCameraManager, public IReactToFreezeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVCameraSettingData CurrentCameraSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OverridedEaseCurveTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridedTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAudioListener* AudioListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVStateMachineComponent* StateMachineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LastCameraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VanityCamAllowedActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VanityCamAllowedLocomotionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CameraShakeTimerHandle;
    
    AVAltarPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDialogueCamera(float DeltaTime, bool bIsInPersuasion);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCamera(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TakeControlOfCameraPitch(bool bShouldTakeControl);
    
    UFUNCTION(BlueprintCallable)
    void StopVanityCameraTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetVanityCameraTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredOverridePitchAngle(float desiredAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCameraSetting(const FVCameraSettings& CameraSettingsRow);
    
    UFUNCTION(BlueprintCallable)
    void RestartFromPauseVanityCameraTimer();
    
    UFUNCTION(BlueprintCallable)
    void ResetFromInputVanityCameraTimer();
    
    UFUNCTION(BlueprintCallable)
    void OverrideTransitionEaseCurve(UCurveFloat* NewOverrideCurve);
    
    UFUNCTION(BlueprintCallable)
    void OverrideTransitionDuration(float NewOverrideDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraTagsChanged(const FGameplayTagContainer& CurrentTags, const FGameplayTagContainer& PreviousTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTagsToEnterVanityCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLastCameraTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentCameraTag() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetDialogueFOV(float DesiredFOV, bool bIsInPersuasion);
    
    UFUNCTION(BlueprintCallable)
    void EnterDialogueCamera();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraTags(const FGameplayTag& NewCameraTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnterInVanityCamera() const;
    

    // Fix for true pure virtual functions not being implemented
};

