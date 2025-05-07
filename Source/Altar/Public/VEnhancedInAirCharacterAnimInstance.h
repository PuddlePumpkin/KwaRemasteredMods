#pragma once
#include "CoreMinimal.h"
#include "VEnhancedInAirAnimInstanceData.h"
#include "VLocomotionCharacterAnimInstance.h"
#include "VEnhancedInAirCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVEnhancedInAirCharacterAnimInstance : public UVLocomotionCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVEnhancedInAirAnimInstanceData LayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftFootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightFootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingJumpVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeftFootJump;
    
public:
    UVEnhancedInAirCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTryingToMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSneaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftFootJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLandingAdditiveAlpha() const;
    
};

