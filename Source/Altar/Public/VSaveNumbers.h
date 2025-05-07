#pragma once
#include "CoreMinimal.h"
#include "VSaveNumbers.generated.h"

USTRUCT(BlueprintType)
struct FVSaveNumbers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoSaveCounter;
    
    ALTAR_API FVSaveNumbers();
};

