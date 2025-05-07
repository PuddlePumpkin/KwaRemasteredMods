#pragma once
#include "CoreMinimal.h"
#include "NiFloatInterpController.h"
#include "NiAlphaController.generated.h"

class UNiFloatData;

UCLASS(Blueprintable)
class ALTAR_API UNiAlphaController : public UNiFloatInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiFloatData* Data;
    
    UNiAlphaController();

};

