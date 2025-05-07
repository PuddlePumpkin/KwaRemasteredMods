#pragma once
#include "CoreMinimal.h"
#include "NiBSplineInterpolator.h"
#include "NiBSplineTransformInterpolator.generated.h"

class UNiQuatTransform;

UCLASS(Blueprintable)
class ALTAR_API UNiBSplineTransformInterpolator : public UNiBSplineInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiQuatTransform* Transform;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TranslationHandle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RotationHandle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ScaleHandle;
    
    UNiBSplineTransformInterpolator();

};

