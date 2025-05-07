#include "VImmediateSound.h"
#include "Components/AudioComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVImmediateSound::AVImmediateSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->AudioComponent = (UAudioComponent*)RootComponent;
    this->SoundWaveRef = NULL;
}


