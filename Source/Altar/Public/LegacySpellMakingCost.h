#pragma once
#include "CoreMinimal.h"
#include "LegacySpellMakingCost.generated.h"

USTRUCT(BlueprintType)
struct FLegacySpellMakingCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CastCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerGold;
    
    ALTAR_API FLegacySpellMakingCost();
};

