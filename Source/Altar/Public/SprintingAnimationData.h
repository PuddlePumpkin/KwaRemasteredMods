#pragma once
#include "CoreMinimal.h"
#include "SprintingAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSprintingAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sprint;
    
    ALTAR_API FSprintingAnimationData();
};

