#pragma once
#include "CoreMinimal.h"
#include "VActorValue.generated.h"

USTRUCT(BlueprintType)
struct FVActorValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModifiedValue;
    
    ALTAR_API FVActorValue();
};

