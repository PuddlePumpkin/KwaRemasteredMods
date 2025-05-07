#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VLocomotionCharacterAnimInstance.h"
#include "VLocomotionTurn.h"
#include "VLocomotionStandTurnAnimInstance.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVLocomotionStandTurnAnimInstance : public UVLocomotionCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> TurnInPlaceLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVLocomotionTurn AnimSet;
    
public:
    UVLocomotionStandTurnAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurningLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTurn() const;
    
};

