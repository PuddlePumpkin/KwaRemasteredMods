#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "MorphWeight.generated.h"

class UNiInterpolator;

UCLASS(Blueprintable)
class ALTAR_API UMorphWeight : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiInterpolator* Interpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UMorphWeight();

};

