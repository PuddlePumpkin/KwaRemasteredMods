#include "VActivable.h"
#include "Components/SkeletalMeshComponent.h"
#include "NavAreas/NavArea_Null.h"
#include "VAltarAkComponent.h"
#include "VAnimationObjectPairingComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVActivable::AVActivable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->AnimationObjectPairingComponent = CreateDefaultSubobject<UVAnimationObjectPairingComponent>(TEXT("AnimationObjectPairingComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->bDoesDetonateItsProjectilesAsSoonAsTheyAppear = false;
    this->bChangeNavModifierAreaOnOpenCloseState = false;
    this->OpenNavArea = NULL;
    this->CloseNavArea = UNavArea_Null::StaticClass();
    this->bShouldPhysicsWaitForCustomTrigger = false;
    this->bPortalStartsOpened = false;
    this->bForwardAnimationOpensPortal = true;
    this->bIsPortalOpened = false;
    this->OwnedNavModifierComponent = NULL;
    this->PortalComponent = NULL;
    this->AkAudioComponent->SetupAttachment(RootComponent);
}

void AVActivable::TriggerActivateForPhysics() {
}




