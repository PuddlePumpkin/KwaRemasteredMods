#pragma once
#include "CoreMinimal.h"
#include "EVHitSourceMaterial.h"
#include "EVHitSourceType.h"
#include "VVFXBlueprint.h"
#include "VPawnSparkVFXBlueprint.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API AVPawnSparkVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVPawnSparkVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(bool bIsBlocked, float Damages, const AActor* Target, const AActor* Attacker, bool bDoesBeginInFirstPerson, EVHitSourceType HitSourceType, EVHitSourceMaterial HitSourceMaterial);
    
};

