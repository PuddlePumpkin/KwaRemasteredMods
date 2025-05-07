#include "VNavigableSlider.h"

UVNavigableSlider::UVNavigableSlider() {
    this->bIsWaiting = false;
    this->Slider = NULL;
    this->ValueModificationOnNavigationRate = 0.50f;
    this->MinNavigationRate = 0.03f;
    this->MultiplicatorOnNavigationRate = 0.90f;
}

float UVNavigableSlider::GetSliderValueAsPercentage(float Value) const {
    return 0.0f;
}

UAnalogSlider* UVNavigableSlider::GetSlider() const {
    return NULL;
}


