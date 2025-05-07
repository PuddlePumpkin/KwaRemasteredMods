#pragma once
#include "CoreMinimal.h"
#include "LegacyEffectProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyEffectProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    ALTAR_API FLegacyEffectProperties();
};

