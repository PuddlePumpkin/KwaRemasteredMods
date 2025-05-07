#include "VPairedCreature.h"
#include "VAltarSpringArmComponent.h"

AVPairedCreature::AVPairedCreature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rider = NULL;
    this->MountCameraSpringArmComponent = CreateDefaultSubobject<UVAltarSpringArmComponent>(TEXT("Mount Camera Spring Arm"));
    this->TurningAnimationsYawDeltaThreshold = 1.00f;
    this->MountCameraSpringArmComponent->SetupAttachment(FakeRoot);
}


