#include "SteeringBehaviorsPathFollowingComponent.h"

USteeringBehaviorsPathFollowingComponent::USteeringBehaviorsPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanRepathAutomatically = true;
    this->RepathRaycastCooldownTime = 0.50f;
    this->SteeringBehaviorsComponent = NULL;
}


