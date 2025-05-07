#pragma once
#include "CoreMinimal.h"
#include "NifString.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FNifString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    FNifString();
};

