#include "NavMeshLandmarkMetaClustersSubsystem.h"

UNavMeshLandmarkMetaClustersSubsystem::UNavMeshLandmarkMetaClustersSubsystem() {
    this->NavMeshLandmarkTypes.AddDefaulted(3);
}

void UNavMeshLandmarkMetaClustersSubsystem::OnNavDataRegistered(const ANavigationData* NavData) {
}

void UNavMeshLandmarkMetaClustersSubsystem::OnLandmarkActorEndPlay(const AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


