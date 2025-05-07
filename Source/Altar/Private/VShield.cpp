#include "VShield.h"
#include "Components/StaticMeshComponent.h"

AVShield::AVShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Mesh Component"));
    this->MainStaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}


