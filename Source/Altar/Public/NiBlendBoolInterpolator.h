#pragma once
#include "CoreMinimal.h"
#include "NiBlendInterpolator.h"
#include "NiBlendBoolInterpolator.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBlendBoolInterpolator : public UNiBlendInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    UNiBlendBoolInterpolator();

};

