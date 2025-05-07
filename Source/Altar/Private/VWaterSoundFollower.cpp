#include "VWaterSoundFollower.h"
#include "VAltarAkComponent.h"

AVWaterSoundFollower::AVWaterSoundFollower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartWaterEvent = NULL;
    this->StopWaterEvent = NULL;
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
}

void AVWaterSoundFollower::OnLoadStarted() {
}

void AVWaterSoundFollower::OnLoadFinished() {
}


