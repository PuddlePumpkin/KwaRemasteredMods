#pragma once
#include "CoreMinimal.h"
#include "NiBSplineFloatInterpolator.h"
#include "NiBSplineCompFloatInterpolator.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBSplineCompFloatInterpolator : public UNiBSplineFloatInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfRange;
    
    UNiBSplineCompFloatInterpolator();

};

