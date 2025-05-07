#pragma once
#include "CoreMinimal.h"
#include "LegacyContainerMenuButtonData.generated.h"

USTRUCT(BlueprintType)
struct FLegacyContainerMenuButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTakeAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNegotiate;
    
    ALTAR_API FLegacyContainerMenuButtonData();
};

