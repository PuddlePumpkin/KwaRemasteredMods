#include "VModernScrollbar.h"

UVModernScrollbar::UVModernScrollbar() {
    this->Handle = NULL;
    this->Slider = NULL;
}

void UVModernScrollbar::UpdateValueFromSlider(float Value) {
}

void UVModernScrollbar::SetValue(float NewValue) {
}

void UVModernScrollbar::SetProperties(const FModernScrollbarProperties& NewProperties) {
}



UAnalogSlider* UVModernScrollbar::GetSlider() const {
    return NULL;
}

FModernScrollbarProperties UVModernScrollbar::GetProperties() const {
    return FModernScrollbarProperties{};
}

UWidget* UVModernScrollbar::GetHandle() const {
    return NULL;
}


