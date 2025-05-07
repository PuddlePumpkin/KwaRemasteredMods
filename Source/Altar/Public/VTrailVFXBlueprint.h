#pragma once
#include "CoreMinimal.h"
#include "VVFXBlueprint.h"
#include "VTrailVFXBlueprint.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ALTAR_API AVTrailVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVTrailVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(bool bIsPowerAttack, bool bIsUsingWeapon, const FName BoneNameUsedToAttack, const USceneComponent* WeaponRootComp);
    
};

