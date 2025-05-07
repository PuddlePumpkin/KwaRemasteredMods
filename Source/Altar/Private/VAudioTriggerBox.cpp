#include "VAudioTriggerBox.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AVAudioTriggerBox::AVAudioTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->Box->SetupAttachment(RootComponent);
}

void AVAudioTriggerBox::ExitBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AVAudioTriggerBox::EnterBox(AActor* OverlappedActor, AActor* OtherActor) {
}


