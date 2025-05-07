#include "VAltarSpringArmComponent.h"

UVAltarSpringArmComponent::UVAltarSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraRotationLagSpeedPitch = 0.00f;
    this->CameraRotationLagSpeedYaw = 0.00f;
}


