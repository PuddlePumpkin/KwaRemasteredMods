#include "VHumanoidHeadComponent.h"

UVHumanoidHeadComponent::UVHumanoidHeadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsLookingAtTarget = false;
    this->CurrentEyeHeading = 0.00f;
    this->CurrentEyePitch = 0.00f;
    this->bShouldHideHair = false;
    this->bShouldHideFacialHair = false;
}

void UVHumanoidHeadComponent::ShouldHideHair(bool bInShouldHideHair, bool bInHideFacialHair) {
}

void UVHumanoidHeadComponent::SetVisibilityOfFacialHair(EVFacialHairType FacialHair, bool bIsHairVisible) {
}

void UVHumanoidHeadComponent::InstantiateHairComponents(UVCharacterPhenotypeData* Phenotype) {
}

FDialogueEmotion UVHumanoidHeadComponent::GetEmotion() const {
    return FDialogueEmotion{};
}


