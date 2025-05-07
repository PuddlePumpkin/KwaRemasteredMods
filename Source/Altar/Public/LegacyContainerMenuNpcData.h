#pragma once
#include "CoreMinimal.h"
#include "LegacyContainerMenuNpcData.generated.h"

USTRUCT(BlueprintType)
struct FLegacyContainerMenuNpcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Gold;
    
    ALTAR_API FLegacyContainerMenuNpcData();
};

