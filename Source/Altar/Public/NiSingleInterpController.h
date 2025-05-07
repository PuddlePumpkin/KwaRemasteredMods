#pragma once
#include "CoreMinimal.h"
#include "NiInterpController.h"
#include "NiSingleInterpController.generated.h"

class UNiInterpolator;

UCLASS(Blueprintable)
class ALTAR_API UNiSingleInterpController : public UNiInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiInterpolator* Interpolator;
    
    UNiSingleInterpController();

};

