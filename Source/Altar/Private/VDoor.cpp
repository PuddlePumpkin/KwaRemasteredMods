#include "VDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "VAltarAkComponent.h"
#include "VAltarAkPortalComponent.h"
//#include "VAnimationObjectPairingComponent.h"
#include "VNavModifierComponent.h"
//#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVDoor::AVDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    //this->AnimationObjectPairingComponent = CreateDefaultSubobject<UVAnimationObjectPairingComponent>(TEXT("AnimationObjectPairingComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
    //this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->NavModifierComponent = CreateDefaultSubobject<UVNavModifierComponent>(TEXT("NavModifierComponent"));
    this->PortalBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PortalBoxComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->AkPortalComponent = CreateDefaultSubobject<UVAltarAkPortalComponent>(TEXT("AkPortalComponent"));
    this->LoadingBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("LoadingBoxComponent"));
    this->OpenSoundEvent = NULL;
    this->CloseSoundEvent = NULL;
    this->DelayBeforeTeleportation = 0.50f;
    this->NavlinkLength = 200.00f;
    this->bIsOpened = false;
    this->bIsDestroyed = false;
    this->bRefreshNavigationDataInBeginPlay = true;
    this->FixedOcclusionInterpolationDuration = 0.50f;
    this->AkAudioComponent->SetupAttachment(RootComponent);
    this->AkPortalComponent->SetupAttachment(PortalBoxComponent);
    this->LoadingBoxComponent->SetupAttachment(RootComponent);
    this->PortalBoxComponent->SetupAttachment(RootComponent);
}

void AVDoor::SetOpened_Implementation() {
}

void AVDoor::SetDestroyed_Implementation() {
}

void AVDoor::SetClosed_Implementation() {
}

void AVDoor::SetAnimationTickEnable_Delegate(bool bEnable) {
}


void AVDoor::OnOpen_Implementation() {
}

void AVDoor::OnEndOverlapPreLoadBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVDoor::OnClose_Implementation() {
}

void AVDoor::OnBeginOverlapPreLoadBox(UPrimitiveComponent* SourceComp, AActor* TargetActor, UPrimitiveComponent* TargetComp, int32 UnusedOtherBox, bool UnusedSweep, const FHitResult& EmptyHitResult) {
}


bool AVDoor::IsDestroyed() const {
    return false;
}

bool AVDoor::IsAnimated() const {
    return false;
}


