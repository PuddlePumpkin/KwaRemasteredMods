#pragma once
#include "CoreMinimal.h"
#include "VLocomotionHorseAnimInstance.h"
#include "VInAirLocomotionHorseAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UVInAirLocomotionHorseAnimInstance : public UVLocomotionHorseAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCanterSpeedAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCanter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActingInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApexSpeedTriggerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpLoopUpSpeedRatio;
    
public:
    UVInAirLocomotionHorseAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStartJumpEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnStartJump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRearing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFalling() const;
    
};

