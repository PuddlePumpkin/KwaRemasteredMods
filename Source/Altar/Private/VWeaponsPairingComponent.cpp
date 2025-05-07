#include "VWeaponsPairingComponent.h"

UVWeaponsPairingComponent::UVWeaponsPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WantedStatusEffect = NULL;
    this->ArrowStaticMeshComponent = NULL;
    this->WeaponForm = NULL;
    this->WeaponActor = NULL;
    this->ShieldForm = NULL;
    this->ShieldActor = NULL;
    this->QuiverForm = NULL;
    this->QuiverActor = NULL;
    this->TorchActor = NULL;
}

void UVWeaponsPairingComponent::SetWeaponDrawn(bool bIsDrawn) {
}

void UVWeaponsPairingComponent::SetArrowMeshComponent(UStaticMeshComponent* NewArrowMeshComponent) {
}

void UVWeaponsPairingComponent::ReleaseArrow() {
}

bool UVWeaponsPairingComponent::IsWeaponDrawn() const {
    return false;
}

bool UVWeaponsPairingComponent::IsTorchHeld() const {
    return false;
}

bool UVWeaponsPairingComponent::IsQuiverAttached() const {
    return false;
}

bool UVWeaponsPairingComponent::HasShieldEquipped() const {
    return false;
}

float UVWeaponsPairingComponent::GetMainWeaponReach() const {
    return 0.0f;
}

FGameplayTag UVWeaponsPairingComponent::GetEquippedWeaponGameplayTag() const {
    return FGameplayTag{};
}

UTESObjectWEAP* UVWeaponsPairingComponent::GetEquippedWeaponForm() const {
    return NULL;
}

AVWeapon* UVWeaponsPairingComponent::GetEquippedWeaponActor() const {
    return NULL;
}

AActor* UVWeaponsPairingComponent::GetEquippedTorchActor() const {
    return NULL;
}

UTESObjectARMO* UVWeaponsPairingComponent::GetEquippedShieldForm() const {
    return NULL;
}

AVShield* UVWeaponsPairingComponent::GetEquippedShieldActor() const {
    return NULL;
}

UTESAmmo* UVWeaponsPairingComponent::GetEquippedQuiverForm() const {
    return NULL;
}

AVQuiver* UVWeaponsPairingComponent::GetEquippedQuiverActor() const {
    return NULL;
}

FTransform UVWeaponsPairingComponent::GetAttachedArrowLocation() const {
    return FTransform{};
}

void UVWeaponsPairingComponent::CallTextureEffectBroadcastStartOnWeapon(AVWeapon* Weapon) {
}

void UVWeaponsPairingComponent::CallTextureEffectBroadcastStartOnShield(AVShield* Shield, bool bEquipping) {
}

void UVWeaponsPairingComponent::CallTextureEffectBroadcastStartOnQuiver(AVQuiver* Quiver, bool bEquipping) {
}


