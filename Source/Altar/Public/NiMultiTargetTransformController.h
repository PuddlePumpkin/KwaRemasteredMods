#pragma once
#include "CoreMinimal.h"
#include "NiInterpController.h"
#include "NiMultiTargetTransformController.generated.h"

class UNiAvObject;

UCLASS(Blueprintable)
class ALTAR_API UNiMultiTargetTransformController : public UNiInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumExtraTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiAvObject*> ExtraTargets;
    
    UNiMultiTargetTransformController();

};

