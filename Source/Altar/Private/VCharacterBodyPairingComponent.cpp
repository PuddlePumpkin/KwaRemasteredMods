#include "VCharacterBodyPairingComponent.h"
#include "Templates/SubclassOf.h"

UVCharacterBodyPairingComponent::UVCharacterBodyPairingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodySectionBitMask = 0;
}

void UVCharacterBodyPairingComponent::SetSlotCovered(EBipedModularBodySlot Slot, bool bIsCovered) {
}

void UVCharacterBodyPairingComponent::SetNakedOnSlot(EBipedModularBodySlot Slot) {
}

void UVCharacterBodyPairingComponent::RegisterSupportedSlot(EBipedModularBodySlot Slot) {
}

void UVCharacterBodyPairingComponent::RefreshBodyParts() {
}

bool UVCharacterBodyPairingComponent::IsSlotSupported(EBipedModularBodySlot Slot) const {
    return false;
}

bool UVCharacterBodyPairingComponent::IsSlotCovered(EBipedModularBodySlot Slot) const {
    return false;
}

TArray<EBipedModularBodySlot> UVCharacterBodyPairingComponent::GetSupportedSlots() const {
    return TArray<EBipedModularBodySlot>();
}

TSubclassOf<AVModularBodyPartBase> UVCharacterBodyPairingComponent::GetClassFromSlot(EBipedModularBodySlot Slot) {
    return NULL;
}

FVCharacterBodyPartProperties UVCharacterBodyPairingComponent::GetBodyPartProperties(EBipedModularBodySlot BodySlot) const {
    return FVCharacterBodyPartProperties{};
}

UTESForm* UVCharacterBodyPairingComponent::GetBodyPartForm(EBipedModularBodySlot Slot) const {
    return NULL;
}

void UVCharacterBodyPairingComponent::EquipFormOnSlot(EBipedModularBodySlot Slot, const UTESForm* form) {
}


