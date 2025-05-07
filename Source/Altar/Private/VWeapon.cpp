#include "VWeapon.h"
#include "VAltarAkComponent.h"
#include "VPhysicsControllerComponent.h"
#include "VTESObjectRefComponent.h"
#include "VTransformPairingComponent.h"

AVWeapon::AVWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TESRefComponent = CreateDefaultSubobject<UVTESObjectRefComponent>(TEXT("TESObjectRefComponent"));
    this->TransformPairingComponent = CreateDefaultSubobject<UVTransformPairingComponent>(TEXT("TransformPairingComponent"));
    this->PhysicsControllerComponent = CreateDefaultSubobject<UVPhysicsControllerComponent>(TEXT("PhysicsControllerComponent"));
    this->AkAudioComponent = CreateDefaultSubobject<UVAltarAkComponent>(TEXT("AkAudioComponent"));
    this->WeaponScalingAttribute = EVAttribute::Strength;
}

void AVWeapon::OnAttachmentUpdate_Implementation(USkeletalMeshComponent* TargetSkeletalMeshComponent, bool bIsDrawn) {
}

FGameplayTag AVWeapon::GetWeaponTag() const {
    return FGameplayTag{};
}

EVAttribute AVWeapon::GetWeaponScalingAttribute() const {
    return EVAttribute::Strength;
}

FName AVWeapon::GetSheathedAttachmentSocketName() const {
    return NAME_None;
}

FGameplayTag AVWeapon::GetLocomotionMovesetTag() const {
    return FGameplayTag{};
}

FName AVWeapon::GetDrawnAttachmentSocketName() const {
    return NAME_None;
}

void AVWeapon::DeactivateWeaponShadows() {
}

void AVWeapon::ActivateWeaponShadows() {
}


