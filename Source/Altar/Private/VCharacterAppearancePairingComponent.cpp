#include "VCharacterAppearancePairingComponent.h"

UVCharacterAppearancePairingComponent::UVCharacterAppearancePairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseProceduralHead = true;
    this->VampireLevel = 0;
}

void UVCharacterAppearancePairingComponent::SetVampireLevel(int32 NewVampireLevel) {
}

void UVCharacterAppearancePairingComponent::RemoveDisease(const UTESMagicItemForm* NewDiseaseForm) {
}

void UVCharacterAppearancePairingComponent::RefreshCharacterAppearance() {
}

void UVCharacterAppearancePairingComponent::ReapplyPhenotypeData(EVCharacterPhenotypeDataFilter Filter) {
}

bool UVCharacterAppearancePairingComponent::IsSick() const {
    return false;
}

bool UVCharacterAppearancePairingComponent::IsDiseaseActive(const UTESMagicItemForm* NewDiseaseForm) const {
    return false;
}

bool UVCharacterAppearancePairingComponent::IsAVampire() const {
    return false;
}

int32 UVCharacterAppearancePairingComponent::GetVampireLevel() const {
    return 0;
}

EVSenescenceModifiers UVCharacterAppearancePairingComponent::GetSenescenceModifier() const {
    return EVSenescenceModifiers::Sick;
}

void UVCharacterAppearancePairingComponent::CureAllDiseases() {
}

void UVCharacterAppearancePairingComponent::ApplySenescenceLevel(const USkeletalMeshComponent* SkeletalMesh, const UVSenescenceLevel* Level, EVSenescenceModifiers Modifiers, int32 MaterialIndex) {
}

void UVCharacterAppearancePairingComponent::AddNewDisease(const UTESMagicItemForm* NewDiseaseForm) {
}


