#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "QMPAIController.generated.h"

class APawn;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API AQMPAIController : public AAIController {
    GENERATED_BODY()
public:
    AQMPAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTargetControllerPossessionChange(APawn* OldPawn, APawn* NewPawn);
    
};

