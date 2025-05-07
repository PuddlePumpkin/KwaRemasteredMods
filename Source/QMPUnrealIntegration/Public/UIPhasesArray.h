#pragma once
#include "CoreMinimal.h"
#include "UIPhasesArray.generated.h"

class UUIPhase;

USTRUCT(BlueprintType)
struct FUIPhasesArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUIPhase*> UIPhases;
    
    QMPUNREALINTEGRATION_API FUIPhasesArray();
};

