#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuLevelProgression.generated.h"

USTRUCT(BlueprintType)
struct FLegacyStatsMenuLevelProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelProgression;
    
    ALTAR_API FLegacyStatsMenuLevelProgression();
};

