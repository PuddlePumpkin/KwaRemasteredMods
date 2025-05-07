#pragma once
#include "CoreMinimal.h"
#include "LegacyEffectCost.generated.h"

USTRUCT(BlueprintType)
struct FLegacyEffectCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CastCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerGold;
    
    ALTAR_API FLegacyEffectCost();
};

