#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BlueprintParameters.h"
#include "EVCastType.h"
#include "EVSpellLevel.h"
#include "VVFXBlueprint.h"
#include "VMagicSpellVFXBlueprint.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ALTAR_API AVMagicSpellVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVMagicSpellVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(const FBlueprintParameters& Parameters, bool bIsTargetAnActor, AActor* CasterActor, bool bDoesBeginInFirstPerson, EVCastType CastType, int32 Magnitude, int32 Area, int32 Duration, const FVector_NetQuantizeNormal ImpactNormal, const FVector_NetQuantizeNormal Normal, EVSpellLevel Level, bool bIsTheEndOfTheEffect, bool bIsMainEffect, bool bIsSecondEffect, AActor* CollidedActor, UPrimitiveComponent* CollidedComponent);
    
};

