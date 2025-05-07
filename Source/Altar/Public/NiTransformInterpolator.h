#pragma once
#include "CoreMinimal.h"
#include "NiKeyBasedInterpolator.h"
#include "NiTransformInterpolator.generated.h"

class UNiQuatTransform;
class UNiTransformData;

UCLASS(Blueprintable)
class ALTAR_API UNiTransformInterpolator : public UNiKeyBasedInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiQuatTransform* Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiTransformData* Data;
    
    UNiTransformInterpolator();

};

