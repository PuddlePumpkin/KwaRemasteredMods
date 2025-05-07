#include "NavigationUISubsystem.h"

UNavigationUISubsystem::UNavigationUISubsystem() {
    this->MappingTable = NULL;
    this->RightThumbStickAxisValue_X = 0.00f;
    this->RightThumbStickAxisValue_Y = 0.00f;
    this->LeftThumbStickAxisValue_X = 0.00f;
    this->LeftThumbStickAxisValue_Y = 0.00f;
}

void UNavigationUISubsystem::StopNavigation() {
}

void UNavigationUISubsystem::StartNavigation(TScriptInterface<INavigationUIElement> DefaultNavigationElement, bool ImmediatelyFocus, UVAltarMenu* Menu) {
}

void UNavigationUISubsystem::NavigateTo(TScriptInterface<INavigationUIElement> DestinationElement) {
}

bool UNavigationUISubsystem::IsShiftKeyDown() const {
    return false;
}

bool UNavigationUISubsystem::IsGamepadActive() const {
    return false;
}

float UNavigationUISubsystem::GetRightThumbstickAxisValue_Y() const {
    return 0.0f;
}

float UNavigationUISubsystem::GetRightThumbstickAxisValue_X() const {
    return 0.0f;
}

float UNavigationUISubsystem::GetLeftThumbstickAxisValue_X() const {
    return 0.0f;
}

float UNavigationUISubsystem::GetLefthumbstickAxisValue_Y() const {
    return 0.0f;
}

ENavigationInputAction UNavigationUISubsystem::GetLastNavigationAction() const {
    return ENavigationInputAction::None;
}

UWidget* UNavigationUISubsystem::GetCurrentNavigationWidget() const {
    return NULL;
}

ECommonInputType UNavigationUISubsystem::GetCurrentInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}


