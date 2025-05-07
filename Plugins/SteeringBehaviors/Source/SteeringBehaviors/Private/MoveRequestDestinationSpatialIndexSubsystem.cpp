#include "MoveRequestDestinationSpatialIndexSubsystem.h"

UMoveRequestDestinationSpatialIndexSubsystem::UMoveRequestDestinationSpatialIndexSubsystem() {
}

void UMoveRequestDestinationSpatialIndexSubsystem::RegisterMoveRequestDestination(const AAIController* AIController, const FAIRequestID& MoveRequestId) {
}

void UMoveRequestDestinationSpatialIndexSubsystem::OnControllerEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UMoveRequestDestinationSpatialIndexSubsystem::GetMoveRequestDestinationsInRadius(const FVector& SphereCenter, const double SphereRadius, TArray<FMoveRequestDestinationData>& MoveRequestDestinations) const {
}

FAIRequestID UMoveRequestDestinationSpatialIndexSubsystem::GetCurrentMoveRequestId(const AAIController* AIController) {
    return FAIRequestID{};
}


