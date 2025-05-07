#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AvoidanceTemporaryIgnoredActor.h"
#include "SteeringBehaviorData.h"
#include "Templates/SubclassOf.h"
#include "SteeringBehaviorsComponent.generated.h"

class AAIController;
class AActor;
class APawn;
class UPawnMovementComponent;
class USteeringBehavior;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STEERINGBEHAVIORS_API USteeringBehaviorsComponent : public UActorComponent, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USteeringBehavior* StaticObstacleAvoidanceBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USteeringBehavior* DynamicObstacleAvoidanceBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USteeringBehavior*> DefaultSteeringBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SteeringBehaviorSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DangerScoreMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSpeedNormalizedScoreMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VelocityBiasMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VelocityBiasMinSpeedNormalized;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VelocityBiasAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ETeamAttitude::Type>> TeamAttitudesToAvoid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SteerInterpolationTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DeactivateSteeringInterpolationDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AvoidanceTemporaryIgnoredDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultithreadedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplySteeringAutomatically;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoveFocusRotationInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDynamicAvoidanceDeactivationFallback;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DynamicAvoidanceDeactivationFallbackTimeThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DynamicAvoidanceDeactivationFallbackDistanceThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DynamicAvoidanceDeactivationFallbackLocationSampleRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DynamicAvoidanceDeactivationFallbackDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSteeringBehaviorData> SteeringBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSteeringBehaviorsRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AvoidanceIgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAvoidanceTemporaryIgnoredActor> AvoidanceTemporaryIgnoredActors;
    
public:
    USteeringBehaviorsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSteeringBehaviorSize(const int32 NewSteeringBehaviorSize);
    
    UFUNCTION(BlueprintCallable)
    void SetStaticAvoidanceEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicAvoidanceEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceIgnoredActor(const AActor* Actor, const bool bAvoidanceIgnored);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSteeringBehaviorByClass(const TSubclassOf<USteeringBehavior> SteeringBehaviorClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSteeringBehavior(const USteeringBehavior* SteeringBehavior);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnChanged(const APawn* OldPawn, const APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAvoidanceIgnoredActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaticAvoidanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamicAvoidanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorIgnoredForAvoidance(const AActor* Actor, const bool bAgentDeltaHeightIgnored, const bool bIncludeTemporaryIgnoredActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRequestedVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USteeringBehavior* FindSteeringBehaviorByClass(const TSubclassOf<USteeringBehavior> SteeringBehaviorClass) const;
    
    UFUNCTION(BlueprintCallable)
    USteeringBehavior* AddSteeringBehaviorByClass(const TSubclassOf<USteeringBehavior> SteeringBehaviorClass);
    
    UFUNCTION(BlueprintCallable)
    void AddSteeringBehavior(const USteeringBehavior* SteeringBehavior);
    

    // Fix for true pure virtual functions not being implemented
};

