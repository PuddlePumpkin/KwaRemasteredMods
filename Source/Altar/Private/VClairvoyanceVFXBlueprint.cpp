#include "VClairvoyanceVFXBlueprint.h"
#include "Components/SplineComponent.h"

AVClairvoyanceVFXBlueprint::AVClairvoyanceVFXBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->ClairvoyanceVFXNavigationQueryFilterClass = NULL;
    this->WaterNavAreaClass = NULL;
}




