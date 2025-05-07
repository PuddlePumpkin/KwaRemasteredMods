#pragma once
#include "CoreMinimal.h"
#include "RaceData.generated.h"

USTRUCT(BlueprintType)
struct FRaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Height;
    
    ALTAR_API FRaceData();
};

