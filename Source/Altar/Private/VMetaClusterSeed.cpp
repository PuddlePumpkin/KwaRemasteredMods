#include "VMetaClusterSeed.h"
#include "Components/SceneComponent.h"

AVMetaClusterSeed::AVMetaClusterSeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
}


