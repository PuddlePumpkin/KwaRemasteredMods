#include "SteeringBehavior_NavMeshAvoidance.h"

USteeringBehavior_NavMeshAvoidance::USteeringBehavior_NavMeshAvoidance() {
    this->DetectionCollisionTime = 1.00f;
    this->CharacterMovementComponent = NULL;
    this->NavigationData = NULL;
}


