#pragma once
#include "CoreMinimal.h"
#include "NiKeyBasedInterpolator.h"
#include "NiFloatInterpolator.generated.h"

class UNiFloatData;

UCLASS(Blueprintable)
class ALTAR_API UNiFloatInterpolator : public UNiKeyBasedInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiFloatData* Data;
    
    UNiFloatInterpolator();

};

