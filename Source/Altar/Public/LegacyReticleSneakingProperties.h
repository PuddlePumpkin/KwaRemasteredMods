#pragma once
#include "CoreMinimal.h"
#include "LegacyReticleSneakingProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyReticleSneakingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SneakingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    ALTAR_API FLegacyReticleSneakingProperties();
};

