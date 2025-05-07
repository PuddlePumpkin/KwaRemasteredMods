#pragma once
#include "CoreMinimal.h"
#include "LegacyRechargeMenuGoldProperties.generated.h"

USTRUCT(BlueprintType)
struct FLegacyRechargeMenuGoldProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GoldRechargeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RechargeAllAmount;
    
    ALTAR_API FLegacyRechargeMenuGoldProperties();
};

