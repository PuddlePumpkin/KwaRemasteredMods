#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacyMapMenuLocalMapProperties.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLegacyMapMenuLocalMapProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredTextureSize;
    
    ALTAR_API FLegacyMapMenuLocalMapProperties();
};

