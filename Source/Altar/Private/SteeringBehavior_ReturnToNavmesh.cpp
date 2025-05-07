#include "SteeringBehavior_ReturnToNavmesh.h"

USteeringBehavior_ReturnToNavmesh::USteeringBehavior_ReturnToNavmesh() {
    this->MinInterest = 0.01f;
    this->MaxInterest = 1.00f;
    this->MinTimeOutsideNavmeshToEnableBehavior = 1.00f;
    this->AdditionalDurationPerPoly = 1.00f;
    this->MaxDistanceToReturnToNavmesh = 2000.00f;
    this->MaxSpeedOutsideNavmesh = 150.00f;
    this->MaxDownStepHeightOutsideNavmesh = 100.00f;
    this->DisableDurationOnBecomeIrrelevant = 3.00f;
    this->ObstacleDetectionCollisionProfile = TEXT("Pawn");
    this->MaxReachabilityChecksPerFrame = 3;
    this->LowPriorityHeightDeltaThreshold = 200.00f;
    this->NavMeshDistanceTolerance = 10.00f;
    this->NavigationData = NULL;
}


