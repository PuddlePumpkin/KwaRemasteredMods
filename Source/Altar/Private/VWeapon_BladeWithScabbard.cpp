#include "VWeapon_BladeWithScabbard.h"
#include "Components/StaticMeshComponent.h"

AVWeapon_BladeWithScabbard::AVWeapon_BladeWithScabbard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScabbardMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scabbard Mesh Component"));
    this->ScabbardMeshComponent->SetupAttachment(RootComponent);
}


