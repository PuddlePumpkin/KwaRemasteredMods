#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VBufferedInputTag.generated.h"

USTRUCT(BlueprintType)
struct FVBufferedInputTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingTime;
    
    ALTAR_API FVBufferedInputTag();
};

