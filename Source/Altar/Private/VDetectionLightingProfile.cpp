#include "VDetectionLightingProfile.h"

UVDetectionLightingProfile::UVDetectionLightingProfile() {
    this->bIsIgnoredForDetection = false;
    this->bIgnoreSelfCollision = true;
    this->bOverrideObstructionLogic = false;
    this->bCanBeObstructed = true;
    this->ObstructionMultiplier = 1.00f;
    this->InverseSquaredFalloffAttenuationRadiusMultiplier = 1.50f;
    this->bUseCurveForIntensityOverride = true;
    this->LightIntensityOverTimeOverride = NULL;
    this->LightIntensityOverride = -340282346638528859811704183484516925440.00f;
    this->bUseCurveForIntensityMultiplier = true;
    this->LightIntensityMultiplierOverTime = NULL;
    this->LightIntensityMultiplier = 1.00f;
    this->bIgnoreSourceRadiusForDistanceAttenuation = false;
    this->DistanceAttenuationOverride = NULL;
    this->bIgnoreInnerConeForAngularAttenuation = false;
    this->AngularAttenuationOverride = NULL;
}


