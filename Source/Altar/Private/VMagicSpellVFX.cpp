#include "VMagicSpellVFX.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "VHitBoxComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVMagicSpellVFX::AVMagicSpellVFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVHitBoxComponent>(TEXT("Hit Box Component"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->HitBoxComponent = (UVHitBoxComponent*)RootComponent;
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent0"));
    this->form = NULL;
    this->bIsCastingManager = false;
    this->bIsAreaEffectManager = false;
    this->bIsDestructionOrderdedByVFX = false;
    this->bIsDestructionOrderdedByOblivion = false;
    this->KindOfVFX = EVVFXType::Casting;
}

void AVMagicSpellVFX::SendVFXEndSignal(AActor* Blueprint) {
}

void AVMagicSpellVFX::OnSpellProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}


