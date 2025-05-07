#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/HitResult.h"
#include "EVConstrainingMode.h"
#include "VAttachComponentData.h"
#include "VAudioPlayable.h"
#include "VBuoyancyComponent.h"
#include "VPhysicsAssetPose.h"
#include "VPhysicsControlSettings.h"
#include "VPhysicsSettingsAuthorityFlags.h"
#include "VPhysicsControllerComponent.generated.h"

class AActor;
class AWaterBody;
class UAkAudioEvent;
class UBoxComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVPhysicsControllerComponent : public UVBuoyancyComponent, public IVAudioPlayable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GlobalImpactEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPhysicsSettingsAuthorityFlags PhysicsSettingsAuthorityFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingCustomPhysicsControlSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPhysicsControlSettings PhysicsControlSettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> PhysicallySimulatedComponentReferencesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> PoseableComponentReferencesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomConstraintProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVConstrainingMode CustomConstrainingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomLockParentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomLockLeavesNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AWaterBody> InteractingWaterBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DebugBoxComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USkeletalMeshComponent>, FVPhysicsAssetPose> StoredPhysicsAssetPoses;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPrimitiveComponent>, FTransform> StoredWorldTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreCodeDrivenPhysicsSettingsAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerSimulatingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVConstrainingMode SimulationConstrainingMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UPrimitiveComponent>, FVAttachComponentData> AttachComponentDataMap;
    
public:
    UVPhysicsControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryOwnerPerformSnapToEnvironment(UPrimitiveComponent* Component, EComponentPhysicsStateChange StateChange);
    
private:
    UFUNCTION(BlueprintCallable)
    void RetrieveWaterBodyInfo(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentPhysicsStateChanged(UPrimitiveComponent* Component, EComponentPhysicsStateChange State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePontoons();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCollisionSoundOnHit(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleCollisionSoundOnBeginOverlap(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimitiveComponent*> FindWaterInteractiveComponents() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWaterBodyInfo(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeDampingValues(float DampingValuesMultiplier);
    

    // Fix for true pure virtual functions not being implemented
};

