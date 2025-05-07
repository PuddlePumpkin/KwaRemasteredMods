#include "VWeapon_Staff.h"
#include "Components/StaticMeshComponent.h"

AVWeapon_Staff::AVWeapon_Staff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Main Mesh Component"));
    this->MainStaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}

void AVWeapon_Staff::OnFire_Implementation() {
}

void AVWeapon_Staff::OnChargeUp_Implementation() {
}


