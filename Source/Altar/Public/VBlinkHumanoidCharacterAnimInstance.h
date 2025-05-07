#pragma once
#include "CoreMinimal.h"
#include "VBlinkCharacterAnimInstance.h"
#include "VBlinkHumanoidCharacterAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class ALTAR_API UVBlinkHumanoidCharacterAnimInstance : public UVBlinkCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlinkAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlinkMorphTargetName;
    
public:
    UVBlinkHumanoidCharacterAnimInstance();

};

