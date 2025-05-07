#pragma once
#include "CoreMinimal.h"
#include "LegacyRepairAmount.generated.h"

USTRUCT(BlueprintType)
struct FLegacyRepairAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepairAmount;
    
    ALTAR_API FLegacyRepairAmount();
};

