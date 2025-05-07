#include "VCameraSettingData.h"

FVCameraSettingData::FVCameraSettingData() {
    this->TransitionDuration = 0.00f;
    this->DesiredArmLength = 0.00f;
    this->DesiredOverrideFieldOfView = 0.00f;
    this->DesiredOffsetToAddFieldOfView = 0.00f;
    this->DesiredViewPitchMin = 0.00f;
    this->DesiredViewPitchMax = 0.00f;
    this->DesiredViewYawMin = 0.00f;
    this->DesiredViewYawMax = 0.00f;
    this->PositionLagSpeed = 0.00f;
    this->RotationLagSpeedPitch = 0.00f;
    this->RotationLagSpeedYaw = 0.00f;
    this->CameraLagMaxDistance = 0.00f;
}

