#pragma once
#include "CoreMinimal.h"
#include "VHorseRiderLocomotionStanding.h"
#include "VLocomotionHorseRiderAnimInstance.h"
#include "VGroundLocomotionHorseRiderAnimInstance.generated.h"

class UAnimSequence;
class UVGroundLocomotionHorseAnimInstance;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVGroundLocomotionHorseRiderAnimInstance : public UVLocomotionHorseRiderAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLean;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseRiderLocomotionStanding GroundLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGroundLocomotionHorseAnimInstance* HorseGroundLocoAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInSpecialIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlaySpecialIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimSequence> CurrentSpecialIdle;
    
public:
    UVGroundLocomotionHorseRiderAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetGroundLayerData(const FVHorseRiderLocomotionStanding& InGroundLayerData);
    
};

