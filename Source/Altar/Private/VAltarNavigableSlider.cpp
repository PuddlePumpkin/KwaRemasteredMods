#include "VAltarNavigableSlider.h"

UVAltarNavigableSlider::UVAltarNavigableSlider() {
    this->Handle = NULL;
    this->ValueLabel = NULL;
    this->DecreaseButton = NULL;
    this->IncreaseButton = NULL;
    this->SliderStepSize = 0.10f;
    this->SliderStartupValue = 0.50f;
    this->bLabelEnabled = true;
    this->MaximumFractionalDigits = 2;
    this->bIsButtonInputContinuous = true;
    this->bIsCapturingMouseWheelInput = false;
}

void UVAltarNavigableSlider::StartControllerValueIncrease() {
}

void UVAltarNavigableSlider::StartControllerValueDecrease() {
}

void UVAltarNavigableSlider::SetValue(float Value) {
}

void UVAltarNavigableSlider::OnIncreaseButtonReleased() {
}

void UVAltarNavigableSlider::OnIncreaseButtonPressed() {
}

void UVAltarNavigableSlider::OnDecreaseButtonReleased() {
}

void UVAltarNavigableSlider::OnDecreaseButtonPressed() {
}

void UVAltarNavigableSlider::InitializeSlider(float MinValue, float MaxValue, float StepSize, float StartupValue) {
}

void UVAltarNavigableSlider::IncreaseValue() {
}

void UVAltarNavigableSlider::HandleOnValueChanged(float NewValue) {
}

void UVAltarNavigableSlider::EndControllerValueIncrease() {
}

void UVAltarNavigableSlider::EndControllerValueDecrease() {
}

void UVAltarNavigableSlider::DecreaseValue() {
}


