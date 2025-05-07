#include "VDoorTeleportMarker.h"
#include "Components/SceneComponent.h"

AVDoorTeleportMarker::AVDoorTeleportMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->FormRefID = -1;
}


