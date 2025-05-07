#include "ProceduralInstanceActor.h"
#include "Components/SceneComponent.h"

AProceduralInstanceActor::AProceduralInstanceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Tags.AddDefaulted(1);
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}


