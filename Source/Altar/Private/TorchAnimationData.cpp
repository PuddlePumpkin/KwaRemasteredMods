#include "TorchAnimationData.h"

FTorchAnimationData::FTorchAnimationData() {
    this->TorchPose = NULL;
    this->TorchPoseSneak = NULL;
    this->TorchBlendSpace = NULL;
    this->TorchSneakBlendSpace = NULL;
    this->TorchBlendDepth = 0;
    this->TorchEquipBlendTime = 0.00f;
    this->TorchCrouchBlendTime = 0.00f;
}

