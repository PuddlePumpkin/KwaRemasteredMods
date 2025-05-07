#pragma once
#include "CoreMinimal.h"
#include "HintData.generated.h"

USTRUCT(BlueprintType)
struct FHintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    ALTAR_API FHintData();
};

