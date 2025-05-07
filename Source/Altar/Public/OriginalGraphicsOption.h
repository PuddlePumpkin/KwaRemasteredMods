#pragma once
#include "CoreMinimal.h"
#include "OriginalGraphicsOption.generated.h"

USTRUCT(BlueprintType)
struct FOriginalGraphicsOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Commands;
    
    ALTAR_API FOriginalGraphicsOption();
};

