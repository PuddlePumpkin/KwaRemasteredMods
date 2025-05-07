#pragma once
#include "CoreMinimal.h"
#include "NiBlendInterpolator.h"
#include "NiBlendFloatInterpolator.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBlendFloatInterpolator : public UNiBlendInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UNiBlendFloatInterpolator();

};

