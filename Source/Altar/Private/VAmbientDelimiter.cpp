#include "VAmbientDelimiter.h"
#include "Components/SplineComponent.h"

AVAmbientDelimiter::AVAmbientDelimiter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftAmbientEvent = NULL;
    this->RightAmbientEvent = NULL;
    this->StopDelimiterAmbientEvent = NULL;
    this->SplineWidth = 100.00f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
}


