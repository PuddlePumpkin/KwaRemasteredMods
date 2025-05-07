#pragma once
#include "CoreMinimal.h"
#include "TorchAnimationData.h"
#include "VLocomotionCharacterAnimInstance.h"
#include "VTorchCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVTorchCharacterAnimInstance : public UVLocomotionCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTorchAnimationData AnimSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoldingTorch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStandingTorchPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchToHandPose;
    
public:
    UVTorchCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetupTorchLayer(FTorchAnimationData InAnimSet);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSneaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnableTorchPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisableTorchPose() const;
    
};

