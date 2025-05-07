#include "DialogueSceneSubsystem.h"

UDialogueSceneSubsystem::UDialogueSceneSubsystem() {
    this->LightRigIntensityFactor = 1.00f;
    this->bOverrideOffsetTimeBeforeDelete = false;
    this->OffsetTimeBeforeDelete = 0.00f;
    this->bOverrideTimeToReachIntensity = false;
    this->TimeToReachIntensity = 0.00f;
    this->bOverrideMinIntensityPercentage = false;
    this->MinIntensityPercentage = 0.00f;
    this->bOverrideFallOffIntensityFactor = false;
    this->FallOffIntensityFactor = 0.00f;
    this->ApplyBetterShadowResolutionInDialogue = false;
}

AVLightRig* UDialogueSceneSubsystem::SpawnLightRigOnActor(AVPairedCharacter* TargetActor) {
    return NULL;
}

void UDialogueSceneSubsystem::RemoveLightRigOnActor(AVPairedCharacter* TargetActor) {
}


