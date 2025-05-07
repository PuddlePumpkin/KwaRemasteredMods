#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColorProperty.generated.h"

USTRUCT(BlueprintType)
struct FColorProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInRandomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmptyColor;
    
    ALTAR_API FColorProperty();
};

