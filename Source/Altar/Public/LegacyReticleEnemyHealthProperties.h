#pragma once
#include "CoreMinimal.h"
#include "LegacyReticleEnemyHealthProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyReticleEnemyHealthProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnimated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    ALTAR_API FLegacyReticleEnemyHealthProperties();
};

