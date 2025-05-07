#pragma once
#include "CoreMinimal.h"
#include "VSprinting.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FVSprinting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sprint;
    
    ALTAR_API FVSprinting();
};

