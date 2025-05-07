#include "VParticleEffectPairingComponent.h"

UVParticleEffectPairingComponent::UVParticleEffectPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NiagaraComponent = NULL;
    this->bDoesAutoplay = false;
    this->bCanBeDestroyed = false;
    this->bIsPendingForDestruction = false;
}

void UVParticleEffectPairingComponent::TryToDestroyActor() {
}

void UVParticleEffectPairingComponent::TriggerVFX(const FString& SequenceName) {
}

void UVParticleEffectPairingComponent::StopVFX(bool bDoesStopImmediately) {
}

void UVParticleEffectPairingComponent::SetCanBeDestroyedToTrue() {
}

void UVParticleEffectPairingComponent::SetCanBeDestroyed(bool bInCanBeDestroyed) {
}

void UVParticleEffectPairingComponent::SetAutoplay(bool bInDoesAutoplay) {
}

void UVParticleEffectPairingComponent::OrderActorDestruction(bool bDoesStopEmitting) {
}

void UVParticleEffectPairingComponent::InitializeComponent() {
}

UNiagaraComponent* UVParticleEffectPairingComponent::GetNiagaraComponent() const {
    return NULL;
}

void UVParticleEffectPairingComponent::AttachVFX(const FString& VisualEffectKey, UNiagaraSystem* VisualEffect) {
}


