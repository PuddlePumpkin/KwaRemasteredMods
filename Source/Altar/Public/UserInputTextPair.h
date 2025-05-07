#pragma once
#include "CoreMinimal.h"
#include "UserInputTextPair.generated.h"

USTRUCT(BlueprintType)
struct FUserInputTextPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    ALTAR_API FUserInputTextPair();
};

