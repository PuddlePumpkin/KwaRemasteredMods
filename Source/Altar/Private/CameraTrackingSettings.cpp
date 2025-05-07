#include "CameraTrackingSettings.h"

FCameraTrackingSettings::FCameraTrackingSettings() {
    this->MinTrackingAngle = 0.00f;
    this->MaxTrackingAngle = 0.00f;
    this->MinTrackingDistance = 0.00f;
    this->MaxTrackingDistance = 0.00f;
    this->CameraTrackingExtraSpeedMultiplier = 0.00f;
    this->CameraTrackingRampUpEndThreshold = 0.00f;
    this->CameraTrackingRampDownStartThreshold = 0.00f;
    this->bUseAllAxisOnCameraTracking = false;
    this->bUsePreventiveHitBox = false;
    this->bUsePreventiveAngle = false;
    this->HitBoxExpandValue = 0.00f;
}

