#include "VAmmunition.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "VAltarAkComponent.h"
#include "VHitBoxComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVAmmunition::AVAmmunition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->HitBoxComponent = CreateDefaultSubobject<UVHitBoxComponent>(TEXT("Hit Box Component"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent0"));
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->OblivionArrowAge = 0.00f;
    this->AkAudioComponent->SetupAttachment(RootComponent);
    this->HitBoxComponent->SetupAttachment(RootComponent);
}

void AVAmmunition::ShootAmunition(AVPairedPawn* Shooter, const FVector& Direction, float Speed) {}

void AVAmmunition::SendCollide(float ArrowAgeMaxOnceCollided, AActor* CollidedActor) {
}

void AVAmmunition::OnStaticMeshEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVAmmunition::OnStaticMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVAmmunition::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AVAmmunition::OnArrowLoadedInLevel_Implementation() {
}

void AVAmmunition::Despawn() {
}

void AVAmmunition::Collide(const FHitResult& HitResult, const FVProjectilePenetrationSettings& PenetrationSettings, const AActor* TargetActor, const FVector& ImpactVelocity) {
}

void AVAmmunition::BeginPlay() {
}


