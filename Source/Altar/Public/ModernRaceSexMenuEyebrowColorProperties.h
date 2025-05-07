#pragma once
#include "CoreMinimal.h"
#include "EyebrowColorProperty.h"
#include "ModernRaceSexMenuEyebrowColorProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernRaceSexMenuEyebrowColorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhenotypeColorKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhenotypeRednessKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEyebrowColorProperty> Options;
    
    ALTAR_API FModernRaceSexMenuEyebrowColorProperties();
};

