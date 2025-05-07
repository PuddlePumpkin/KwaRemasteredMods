#pragma once
#include "CoreMinimal.h"
#include "QMPAIController.h"
#include "AltarQMPAIController.generated.h"

UCLASS(Blueprintable)
class ALTARQMP_API AAltarQMPAIController : public AQMPAIController {
    GENERATED_BODY()
public:
    AAltarQMPAIController(const FObjectInitializer& ObjectInitializer);

};

