#pragma once
#include "CoreMinimal.h"
#include "PlayerNamePair.generated.h"

USTRUCT(BlueprintType)
struct FPlayerNamePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    ALTAR_API FPlayerNamePair();
};

