#pragma once
#include "CoreMinimal.h"
#include "VHorseRiderLocomotionJump.h"
#include "VLocomotionHorseRiderAnimInstance.h"
#include "VInAirLocomotionHorseRiderAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVInAirLocomotionHorseRiderAnimInstance : public UVLocomotionHorseRiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseRiderLocomotionJump JumpLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCanter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActingInPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRearing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpLoopUpSpeedRatio;
    
public:
    UVInAirLocomotionHorseRiderAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetJumpLayerData(const FVHorseRiderLocomotionJump& InJumpLayerData);
    
};

