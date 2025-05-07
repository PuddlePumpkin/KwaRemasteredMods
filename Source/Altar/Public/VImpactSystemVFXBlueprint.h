#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EVHitSourceMaterial.h"
#include "EVHitSourceType.h"
#include "EVHitSourceWeaponType.h"
#include "VVFXBlueprint.h"
#include "VImpactSystemVFXBlueprint.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALTAR_API AVImpactSystemVFXBlueprint : public AVVFXBlueprint {
    GENERATED_BODY()
public:
    AVImpactSystemVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlay(const FVector_NetQuantizeNormal& ImpactNormal, EVHitSourceType HitSourceType, EVHitSourceMaterial HitSourceMaterial, bool bDoesBeginInFirstPerson, EVHitSourceWeaponType HitWeaponType, const UStaticMeshComponent* WeaponMesh, bool bIsUsingWeapon);
    
};

