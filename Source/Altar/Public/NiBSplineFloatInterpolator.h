#pragma once
#include "CoreMinimal.h"
#include "NiBSplineInterpolator.h"
#include "NiBSplineFloatInterpolator.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBSplineFloatInterpolator : public UNiBSplineInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Handle;
    
    UNiBSplineFloatInterpolator();

};

