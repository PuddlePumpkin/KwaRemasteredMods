#include "SteeringBehavior_DropOffLedge.h"

USteeringBehavior_DropOffLedge::USteeringBehavior_DropOffLedge() {
    this->MinLedgeHeight = 30.00f;
    this->MaxLedgeHeight = 600.00f;
    this->MaxLedgeHeightIncrement = 400.00f;
    this->MaxLedgeLength = 600.00f;
    this->MaxPathSegmentDistance = 1250.00f;
    this->MaxLedgeCrossingSpeed = 350.00f;
    this->MaxLedgeCrossingDuration = 4.00f;
    this->LedgeObstacleDetectionCollisionProfile = TEXT("Pawn");
    this->NavigationData = NULL;
}


