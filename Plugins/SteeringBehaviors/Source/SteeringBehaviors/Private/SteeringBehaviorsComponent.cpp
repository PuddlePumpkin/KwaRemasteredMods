#include "SteeringBehaviorsComponent.h"
#include "SteeringBehavior_NavAgentAvoidance.h"
#include "SteeringBehavior_NavMeshAvoidance.h"
#include "Templates/SubclassOf.h"

USteeringBehaviorsComponent::USteeringBehaviorsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticObstacleAvoidanceBehavior = CreateDefaultSubobject<USteeringBehavior_NavMeshAvoidance>(TEXT("StaticObstacleAvoidanceBehavior"));
    this->DynamicObstacleAvoidanceBehavior = CreateDefaultSubobject<USteeringBehavior_NavAgentAvoidance>(TEXT("DynamicObstacleAvoidanceBehavior"));
    this->DefaultSteeringBehaviors.AddDefaulted(1);
    this->SteeringBehaviorSize = 32;
    this->DangerScoreMultiplier = -2.00f;
    this->MaxSpeedNormalizedScoreMultiplier = 0.50f;
    this->VelocityBiasMultiplier = 0.99f;
    this->VelocityBiasMinSpeedNormalized = 0.50f;
    this->VelocityBiasAngleTolerance = 0.00f;
    this->TeamAttitudesToAvoid.AddDefaulted(3);
    this->SteerInterpolationTime = 0.00f;
    this->DeactivateSteeringInterpolationDistance = 200.00f;
    this->AvoidanceTemporaryIgnoredDuration = 0.50f;
    this->bMultithreadedTick = true;
    this->bApplySteeringAutomatically = true;
    this->MoveFocusRotationInterpolationSpeed = 10.00f;
    this->bUseDynamicAvoidanceDeactivationFallback = true;
    this->DynamicAvoidanceDeactivationFallbackTimeThreshold = 6.00f;
    this->DynamicAvoidanceDeactivationFallbackDistanceThreshold = 100.00f;
    this->DynamicAvoidanceDeactivationFallbackLocationSampleRate = 0.15f;
    this->DynamicAvoidanceDeactivationFallbackDuration = 3.00f;
    this->bSteeringBehaviorsRelevant = true;
    this->AIController = NULL;
    this->Pawn = NULL;
    this->MovementComponent = NULL;
}

void USteeringBehaviorsComponent::SetSteeringBehaviorSize(const int32 NewSteeringBehaviorSize) {
}

void USteeringBehaviorsComponent::SetStaticAvoidanceEnabled(const bool bEnabled) {
}

void USteeringBehaviorsComponent::SetDynamicAvoidanceEnabled(const bool bEnabled) {
}

void USteeringBehaviorsComponent::SetAvoidanceIgnoredActor(const AActor* Actor, const bool bAvoidanceIgnored) {
}

bool USteeringBehaviorsComponent::RemoveSteeringBehaviorByClass(const TSubclassOf<USteeringBehavior> SteeringBehaviorClass) {
    return false;
}

void USteeringBehaviorsComponent::RemoveSteeringBehavior(const USteeringBehavior* SteeringBehavior) {
}

void USteeringBehaviorsComponent::OnPossessedPawnChanged(const APawn* OldPawn, const APawn* NewPawn) {
}

void USteeringBehaviorsComponent::OnAvoidanceIgnoredActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

bool USteeringBehaviorsComponent::IsStaticAvoidanceEnabled() const {
    return false;
}

bool USteeringBehaviorsComponent::IsDynamicAvoidanceEnabled() const {
    return false;
}

bool USteeringBehaviorsComponent::IsActorIgnoredForAvoidance(const AActor* Actor, const bool bAgentDeltaHeightIgnored, const bool bIncludeTemporaryIgnoredActors) const {
    return false;
}

FVector USteeringBehaviorsComponent::GetRequestedVelocity() const {
    return FVector{};
}

FVector USteeringBehaviorsComponent::GetMoveFocus() const {
    return FVector{};
}

USteeringBehavior* USteeringBehaviorsComponent::FindSteeringBehaviorByClass(const TSubclassOf<USteeringBehavior> SteeringBehaviorClass) const {
    return NULL;
}

USteeringBehavior* USteeringBehaviorsComponent::AddSteeringBehaviorByClass(const TSubclassOf<USteeringBehavior> SteeringBehaviorClass) {
    return NULL;
}

void USteeringBehaviorsComponent::AddSteeringBehavior(const USteeringBehavior* SteeringBehavior) {
}


