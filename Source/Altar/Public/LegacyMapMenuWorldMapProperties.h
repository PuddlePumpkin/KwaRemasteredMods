#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacyMapMenuWorldMapProperties.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FLegacyMapMenuWorldMapProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMainWorld;
    
    ALTAR_API FLegacyMapMenuWorldMapProperties();
};

