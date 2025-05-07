#include "PixelFormatComponent.h"

UPixelFormatComponent::UPixelFormatComponent() {
    this->Type = PixelComponent::COMP_RED;
    this->Convention = PixelRepresentation::REP_NORM_INT;
    this->BitsPerChannel = 0;
    this->IsSigned = false;
}


