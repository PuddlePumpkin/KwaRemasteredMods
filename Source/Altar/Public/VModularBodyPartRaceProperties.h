#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartRaceProperties.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FVModularBodyPartRaceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialSlotToHide;
    
    FVModularBodyPartRaceProperties();
};

