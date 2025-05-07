#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "EVGameplayHitboxBehaviour.h"
#include "EVHitSourceMaterial.h"
#include "EVHitSourceType.h"
#include "EVHitSourceWeaponType.h"
#include "ImpactSystemRowBase.h"
#include "VProjectilePenetrationSettings.h"
#include "VHitBoxComponent.generated.h"

class AActor;
class AVImpactSystemVFXBlueprint;
class UPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVHitBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVHitSourceMaterial HitSourceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVHitSourceWeaponType HitSourceWeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurationBetweenImpacts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGameplayHitboxBehaviour GameplayBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvironmentImpactHitForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCloudTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPhantom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContinuous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTriggerAgainstPawns;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVImpactSystemVFXBlueprint> ImpactBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackerActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TrappedActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TriggeringActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MaxDurationTimerHandle;
    
    UVHitBoxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnpauseHit();
    
    UFUNCTION(BlueprintCallable)
    void TriggerTrapEnd(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTrapBegin(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerImpactSystemFromRow(const FImpactSystemRowBase& ChosenRow, const FVector& ImpactPoint, const FVector& ImpactNormal);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerImpactSystemFromHitResult(const FHitResult& MaterialHitResult, const FHitResult& LocationHitResult, FVProjectilePenetrationSettings& OutProjectilePenetrationSettings);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerImpactSystem(const UPhysicalMaterial* PhysicalMaterial, const FVector& ImpactPoint, const FVector& ImpactNormal);
    
    UFUNCTION(BlueprintCallable)
    void StopHit();
    
    UFUNCTION(BlueprintCallable)
    void StartHit(EVHitSourceType HitSourceTypeParam, AActor* Attacker, TSoftClassPtr<AVImpactSystemVFXBlueprint> BlueprintClass, float Duration, bool bUseOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTriggerTarget(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox);
    
    UFUNCTION(BlueprintCallable)
    void PauseHit();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapTriggered(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& OverlapHitResult);
    
    UFUNCTION(BlueprintCallable)
    void AddTriggerTarget(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult);
    
    UFUNCTION(BlueprintCallable)
    void ActivateTriggers();
    
};

