#pragma once
#include "CoreMinimal.h"
#include "VHorseRiderLocomotionSwim.h"
#include "VLocomotionHorseRiderAnimInstance.h"
#include "VSwimLocomotionHorseRiderAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVSwimLocomotionHorseRiderAnimInstance : public UVLocomotionHorseRiderAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVHorseRiderLocomotionSwim SwimLayerData;
    
public:
    UVSwimLocomotionHorseRiderAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetSwimLayerData(const FVHorseRiderLocomotionSwim& InSwimLayerData);
    
};

