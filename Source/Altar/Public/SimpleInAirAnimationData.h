#pragma once
#include "CoreMinimal.h"
#include "SimpleInAirAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSimpleInAirAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* InAirLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Landing;
    
    ALTAR_API FSimpleInAirAnimationData();
};

