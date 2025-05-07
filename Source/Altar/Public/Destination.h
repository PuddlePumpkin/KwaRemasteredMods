#pragma once
#include "CoreMinimal.h"
#include "VFormPtr.h"
#include "Destination.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FDestination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVFormPtr Target;
    
    FDestination();
};

