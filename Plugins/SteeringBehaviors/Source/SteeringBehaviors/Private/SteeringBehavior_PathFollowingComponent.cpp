#include "SteeringBehavior_PathFollowingComponent.h"

USteeringBehavior_PathFollowingComponent::USteeringBehavior_PathFollowingComponent() {
    this->MinInterest = 0.01f;
    this->DefaultLookAheadDistance = 200.00f;
    this->MaxLookAheadLocationCount = 5;
    this->LookAheadMaxTrajectoryAngle = 120.00f;
    this->FurthestLookAheadLocationInterest = 0.75f;
    this->bStopAtDestination = true;
    this->bCalculateTurnRate = false;
    this->AvoidanceDetectionDistance = 1000.00f;
    this->AvoidanceTimeDifferentVelocities = 2.00f;
    this->AvoidanceTimeSimilarVelocities = 0.25f;
    this->bAvoidanceIgnoreBlockingPawns = false;
    this->bCanGiveWay = true;
    this->GiveWayDuration = 5.00f;
    this->GiveWayPathLength2D = 75.00f;
    this->StopGiveWayPathLength2D = 150.00f;
    this->BacktrackPathLength2D = 400.00f;
    this->CharacterMovementComponent = NULL;
    this->PawnSpatialIndexSubsystem = NULL;
}


