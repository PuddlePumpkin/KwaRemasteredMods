#include "LightRigTriggerVolume.h"

ALightRigTriggerVolume::ALightRigTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->LightRigDay = NULL;
    this->LightRigNight = NULL;
    this->NightBegin = 0;
    this->NightEnd = 0;
    this->LightRigIntensityFactor = 1.00f;
    this->bOverrideOffsetTimeBeforeDelete = false;
    this->OffsetTimeBeforeDelete = 3.00f;
    this->bOverrideTimeToReachIntensity = false;
    this->TimeToReachIntensity = 3.00f;
    this->bOverrideMinIntensityPercentage = false;
    this->MinIntensityPercentage = 0.00f;
    this->bOverrideFallOffIntensityFactor = false;
    this->FallOffIntensityFactor = 1.30f;
}

void ALightRigTriggerVolume::OnEndOverlap(AActor* Actor, AActor* OtherActor) {
}

void ALightRigTriggerVolume::OnBeginOverlap(AActor* Actor, AActor* OtherActor) {
}


