#pragma once
#include "CoreMinimal.h"
#include "OriginalVideoOption.generated.h"

USTRUCT(BlueprintType)
struct FOriginalVideoOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Commands;
    
    ALTAR_API FOriginalVideoOption();
};

