#include "PawnSpatialIndexSubsystem.h"

UPawnSpatialIndexSubsystem::UPawnSpatialIndexSubsystem() {
    this->IndexedPawnClasses.AddDefaulted(1);
}

void UPawnSpatialIndexSubsystem::UpdatePawnLocation(const APawn* Pawn) {
}

void UPawnSpatialIndexSubsystem::RemovePawn(const APawn* Pawn) {
}

void UPawnSpatialIndexSubsystem::OnActorSpawned(const AActor* ActorSpawned) {
}

void UPawnSpatialIndexSubsystem::OnActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPawnSpatialIndexSubsystem::BlueprintGetPawnsInRadius(const FVector& SphereCenter, const double SphereRadius, TArray<APawn*>& OutPawns) const {
}

void UPawnSpatialIndexSubsystem::AddPawn(const APawn* Pawn) {
}


