#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiBlendInterpolator.h"
#include "NiBlendPoint3Interpolator.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiBlendPoint3Interpolator : public UNiBlendInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UNiBlendPoint3Interpolator();

};

