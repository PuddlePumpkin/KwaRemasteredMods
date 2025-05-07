#include "VContainer.h"
#include "Components/StaticMeshComponent.h"
#include "VAltarAkComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVContainer::AVContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->OpenSoundEvent = NULL;
    this->CloseSoundEvent = NULL;
    this->bIsAnimated = false;
    this->AkAudioComponent->SetupAttachment(RootComponent);
}



bool AVContainer::IsContainerUnlocked() const {
    return false;
}

bool AVContainer::IsContainerOpen() const {
    return false;
}


