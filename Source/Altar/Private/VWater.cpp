#include "VWater.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AVWater::AVWater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


