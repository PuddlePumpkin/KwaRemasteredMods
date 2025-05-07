#pragma once
#include "CoreMinimal.h"
#include "SimpleInAirAnimationData.h"
#include "VLayerCharacterAnimInstance.h"
#include "VSimpleInAirCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVSimpleInAirCharacterAnimInstance : public UVLayerCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleInAirAnimationData LayerData;
    
    UVSimpleInAirCharacterAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
};

