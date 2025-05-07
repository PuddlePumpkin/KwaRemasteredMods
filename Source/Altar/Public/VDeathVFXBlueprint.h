#pragma once
#include "CoreMinimal.h"
#include "VVFXBlueprint.h"
#include "VDeathVFXBlueprint.generated.h"

class AVPairedPawn;

UCLASS(Blueprintable)
class ALTAR_API AVDeathVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVDeathVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(AVPairedPawn* Pawn);
    
};

