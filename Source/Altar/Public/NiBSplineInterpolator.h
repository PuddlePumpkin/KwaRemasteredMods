#pragma once
#include "CoreMinimal.h"
#include "NiInterpolator.h"
#include "NiBSplineInterpolator.generated.h"

class UNiBSplineBasisData;
class UNiBSplineData;

UCLASS(Blueprintable)
class ALTAR_API UNiBSplineInterpolator : public UNiInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiBSplineData* SplineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiBSplineBasisData* BasisData;
    
    UNiBSplineInterpolator();

};

