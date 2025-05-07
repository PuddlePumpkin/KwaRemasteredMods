#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EVBloodColor.h"
#include "EVHitSourceType.h"
#include "EVHitSourceWeaponType.h"
#include "VVFXBlueprint.h"
#include "VBloodSystemVFXBlueprint.generated.h"

class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVBloodSystemVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVBloodSystemVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(float Damages, EVBloodColor BloodColor, bool bIsUsingWeapon, AActor* Target, const AActor* Attacker, float TargetMaxHP, bool bDoesBeginInFirstPerson, EVHitSourceType HitSourceType, const UStaticMeshComponent* WeaponComp, const FVector_NetQuantizeNormal& ImpactNormal, EVHitSourceWeaponType HitWeaponType, FVector HitDirection);
    
};

