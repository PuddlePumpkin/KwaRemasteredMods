#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVLocomotionType.h"
#include "VVFXBlueprint.h"
#include "VFootStepVFXBlueprint.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVFootStepVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVFootStepVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(EVLocomotionType LocomotionType, bool bDoesBeginInFirstPerson, FVector Velocity);
    
};

