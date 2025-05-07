#include "SteeringBehavior_MoveRequestDestinationAvoidance.h"

USteeringBehavior_MoveRequestDestinationAvoidance::USteeringBehavior_MoveRequestDestinationAvoidance() {
    this->QueryRadius = 250.00f;
    this->SpacingDistance = 0.00f;
    this->MinInterest = 0.05f;
    this->MaxInterest = 1.00f;
    this->MoveRequestDestinationSpatialIndexSubsystem = NULL;
}

void USteeringBehavior_MoveRequestDestinationAvoidance::SetPawnIgnored(const APawn* Pawn, const bool bIgnored) {
}

void USteeringBehavior_MoveRequestDestinationAvoidance::OnIgnoredActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


