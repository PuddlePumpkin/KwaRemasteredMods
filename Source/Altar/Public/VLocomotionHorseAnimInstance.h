#pragma once
#include "CoreMinimal.h"
#include "VLocomotionCharacterAnimInstance.h"
#include "VLocomotionHorseAnimInstance.generated.h"

class AVPairedCreature;

UCLASS(Blueprintable, NonTransient)
class UVLocomotionHorseAnimInstance : public UVLocomotionCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanHorizontal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGallopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GallopForwardSpeedAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInGallop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRiderNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedCreature* Horse;
    
public:
    UVLocomotionHorseAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingBackward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTrot() const;
    
};

