#pragma once
#include "CoreMinimal.h"
#include "NiBlendInterpolator.h"
#include "NiBlendTransformInterpolator.generated.h"

class UNiQuatTransform;

UCLASS(Blueprintable)
class ALTAR_API UNiBlendTransformInterpolator : public UNiBlendInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiQuatTransform* Value;
    
    UNiBlendTransformInterpolator();

};

