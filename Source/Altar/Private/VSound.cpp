#include "VSound.h"
#include "Components/AudioComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVSound::AVSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->AudioComponent = (UAudioComponent*)RootComponent;
    this->bOverrideSoundData = false;
    this->OverridenMinAttenuationDistance = 0;
    this->OverridenMaxAttenuationDistance = 0;
    this->OverridenFlags = 0;
    this->OverridenAttenuation = 0;
    this->SoundWaveRef = NULL;
}

void AVSound::ResetSoundData() {
}


