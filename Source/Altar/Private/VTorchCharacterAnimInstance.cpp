#include "VTorchCharacterAnimInstance.h"

UVTorchCharacterAnimInstance::UVTorchCharacterAnimInstance() {
    this->bIsHoldingTorch = false;
    this->bUseStandingTorchPose = false;
    this->bSwitchToHandPose = false;
}

void UVTorchCharacterAnimInstance::SetupTorchLayer(FTorchAnimationData InAnimSet) {
}

bool UVTorchCharacterAnimInstance::IsSneaking() const {
    return false;
}

bool UVTorchCharacterAnimInstance::IsBlocking() const {
    return false;
}

bool UVTorchCharacterAnimInstance::CanEnableTorchPose() const {
    return false;
}

bool UVTorchCharacterAnimInstance::CanDisableTorchPose() const {
    return false;
}


