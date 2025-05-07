#pragma once
#include "CoreMinimal.h"
#include "ColorProperty.h"
#include "ModernRaceSexMenuColorProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernRaceSexMenuColorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorProperty> Options;
    
    ALTAR_API FModernRaceSexMenuColorProperties();
};

