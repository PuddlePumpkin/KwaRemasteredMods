#include "VPhysicsControllerComponent.h"

UVPhysicsControllerComponent::UVPhysicsControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlobalImpactEvent = NULL;
    this->bIsUsingCustomPhysicsControlSettings = false;
    this->CustomConstraintProfile = TEXT("Paralyzed");
    this->CustomConstrainingMode = EVConstrainingMode::LockAllBodies;
    this->WaterLevel = 0.00f;
    this->DebugBoxComponent = NULL;
    this->bAreCodeDrivenPhysicsSettingsAllowed = false;
    this->bIsOwnerGrabbed = false;
    this->bIsOwnerDisabled = false;
    this->bIsOwnerSimulatingPhysics = false;
    this->SimulationConstrainingMode = EVConstrainingMode::Free;
}

void UVPhysicsControllerComponent::TryOwnerPerformSnapToEnvironment(UPrimitiveComponent* Component, EComponentPhysicsStateChange StateChange) {
}

void UVPhysicsControllerComponent::RetrieveWaterBodyInfo(AActor* OverlappedActor, AActor* OtherActor) {
}

void UVPhysicsControllerComponent::OnComponentPhysicsStateChanged(UPrimitiveComponent* Component, EComponentPhysicsStateChange State) {
}

bool UVPhysicsControllerComponent::IsOwnerDisabled() const {
    return false;
}

void UVPhysicsControllerComponent::InitializePontoons() {
}

void UVPhysicsControllerComponent::HandleCollisionSoundOnHit(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UVPhysicsControllerComponent::HandleCollisionSoundOnBeginOverlap(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult) {
}

TArray<UPrimitiveComponent*> UVPhysicsControllerComponent::FindWaterInteractiveComponents() const {
    return TArray<UPrimitiveComponent*>();
}

void UVPhysicsControllerComponent::ClearWaterBodyInfo(AActor* OverlappedActor, AActor* OtherActor) {
}

void UVPhysicsControllerComponent::ChangeDampingValues(float DampingValuesMultiplier) {
}


