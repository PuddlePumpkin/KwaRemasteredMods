#include "VSteeringBehaviorsComponent.h"

UVSteeringBehaviorsComponent::UVSteeringBehaviorsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSteeringBehaviors.AddDefaulted(3);
    this->TeamAttitudesToAvoid.AddDefaulted(3);
    this->bApplySteeringAutomatically = false;
}


