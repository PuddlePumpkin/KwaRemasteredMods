#pragma once
#include "CoreMinimal.h"
#include "ModernRechargeMenuCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FModernRechargeMenuCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoldAmount;
    
    ALTAR_API FModernRechargeMenuCharacterData();
};

