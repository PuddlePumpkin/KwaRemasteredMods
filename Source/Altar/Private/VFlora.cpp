#include "VFlora.h"
#include "Components/StaticMeshComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"

AVFlora::AVFlora(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->bIsEmpty = false;
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
}



bool AVFlora::CanBePicked() const {
    return false;
}


