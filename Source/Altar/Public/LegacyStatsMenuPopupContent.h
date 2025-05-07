#pragma once
#include "CoreMinimal.h"
#include "LegacyStatsMenuPopupContent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLegacyStatsMenuPopupContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HandToHandDamage;
    
    ALTAR_API FLegacyStatsMenuPopupContent();
};

