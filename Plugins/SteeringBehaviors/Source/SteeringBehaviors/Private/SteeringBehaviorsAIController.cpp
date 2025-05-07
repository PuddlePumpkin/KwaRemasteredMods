#include "SteeringBehaviorsAIController.h"
#include "SteeringBehaviorsComponent.h"
#include "SteeringBehaviorsPathFollowingComponent.h"

ASteeringBehaviorsAIController::ASteeringBehaviorsAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USteeringBehaviorsPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->OffsetPathFromCornersDistance = 0.00f;
    this->SteeringBehaviorsComponent = CreateDefaultSubobject<USteeringBehaviorsComponent>(TEXT("SteeringBehaviorsComponent"));
}


