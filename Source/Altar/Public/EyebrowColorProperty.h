#pragma once
#include "CoreMinimal.h"
#include "EyebrowColorProperty.generated.h"

USTRUCT(BlueprintType)
struct FEyebrowColorProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhenotypeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Redness;
    
    ALTAR_API FEyebrowColorProperty();
};

