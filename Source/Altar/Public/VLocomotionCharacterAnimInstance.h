#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VLayerCharacterAnimInstance.h"
#include "VLocomotionCharacterAnimInstance.generated.h"

class UVPairedPawnMovementComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLocomotionCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPairedPawnMovementComponent* PairedPawnMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlendValues;
    
public:
    UVLocomotionCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpecialJumpStarted(FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMovingBackward() const;
    
};

