#include "VWeapon_Melee.h"
#include "Components/StaticMeshComponent.h"

AVWeapon_Melee::AVWeapon_Melee(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Mesh Component"));
    this->MainStaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->bIsTwoHanded = false;
}


