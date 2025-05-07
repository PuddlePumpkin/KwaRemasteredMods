#include "PlaybackTraversal.h"
#include "Components/SceneComponent.h"

APlaybackTraversal::APlaybackTraversal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bPlaying = true;
    this->GlobalTime = 0.00f;
    this->LastRecordSave = NULL;
    this->MainRecordData = NULL;
    this->PrioritaryRecordData = NULL;
}


