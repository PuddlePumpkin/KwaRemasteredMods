#include "SteeringBehavior_NavAgentAvoidance.h"

USteeringBehavior_NavAgentAvoidance::USteeringBehavior_NavAgentAvoidance() {
    this->DetectionDistance = 1000.00f;
    this->IgnorePawnDotProductThreshold = -0.50f;
    this->SpacingDistance = 0.00f;
    this->MinSpeedNormalized = 0.03f;
    this->MinCollisionTime = 0.25f;
    this->bCanBrake = true;
    this->PawnSpatialIndexSubsystem = NULL;
    this->CharacterMovementComponent = NULL;
}


