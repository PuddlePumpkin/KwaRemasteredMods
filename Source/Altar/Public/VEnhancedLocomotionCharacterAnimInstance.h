#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocomotionAnimationData.h"
#include "SprintingAnimationData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VEnhancedLocomotionCharacterAnimInstance.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVEnhancedLocomotionCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisRotationCurveName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PassiveForwardAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PassiveBackwardAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionAnimationData AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSprintingAnimationData SprintSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlendValues;
    
public:
    UVEnhancedLocomotionCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponDrawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
};

