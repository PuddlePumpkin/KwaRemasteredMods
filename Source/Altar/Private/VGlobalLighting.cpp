#include "VGlobalLighting.h"

AVGlobalLighting::AVGlobalLighting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightRigBlueprintClassDay = NULL;
    this->LightRigBlueprintClassNight = NULL;
    this->NightBegin = 0;
    this->NightEnd = 0;
    this->bIsPostProcessUnbound = true;
    this->DetectionLightingSkylightIntensityCurve = NULL;
    this->bIgnoreDetectionLightingCurve = false;
}


