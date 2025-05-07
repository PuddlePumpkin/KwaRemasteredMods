#include "VModern_MapZoomSliderSmooth.h"

UVModern_MapZoomSliderSmooth::UVModern_MapZoomSliderSmooth() {
    this->bBelongToWorldMap = false;
    this->bIsSliderNavigationActionDisabled = false;
    this->SliderInputType = ESliderInputType::MouseWheel;
    this->MouseWheelMultiplier = 1.00f;
    this->SliderArrowsMultiplier = 0.50f;
    this->ControllerTriggersMultiplier = 0.50f;
}


