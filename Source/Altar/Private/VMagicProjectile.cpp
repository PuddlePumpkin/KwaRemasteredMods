#include "VMagicProjectile.h"
#include "Components/SceneComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVMagicProjectile::AVMagicProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
}


