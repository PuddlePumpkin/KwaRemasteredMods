#pragma once
#include "CoreMinimal.h"
#include "LegacyMagicPopupEffectProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyMagicPopupEffectProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    ALTAR_API FLegacyMagicPopupEffectProperties();
};

