#include "VLayerCharacterAnimInstance.h"

UVLayerCharacterAnimInstance::UVLayerCharacterAnimInstance() {
    this->MainAnimInstance = NULL;
    this->AnimLayerIndex = 0;
    this->AnimLayerPlayRate = 0.00f;
}

void UVLayerCharacterAnimInstance::UpdateActionDataFromArray(FGameplayTag ActionTag, const TArray<UAnimSequenceBase*>& ActionAnims) {
}

void UVLayerCharacterAnimInstance::UpdateActionData(FGameplayTag ActionTag, const UAnimSequenceBase* ActionAnim) {
}

void UVLayerCharacterAnimInstance::ScheduledPlayMontage(UAnimMontage* MontageToPlay, float InPlayRate, UAnimInstance* AnimInstance, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
}

bool UVLayerCharacterAnimInstance::IsInCombat() const {
    return false;
}

UAnimSequenceBase* UVLayerCharacterAnimInstance::GetSequenceFromArrayWithGivenIndexIfValid(int32 GameplayArrayIndex, const TArray<UAnimSequenceBase*>& ActionAnim) {
    return NULL;
}

UAnimMontage* UVLayerCharacterAnimInstance::GetMontageFromArrayWithGivenIndexIfValid(int32 GameplayArrayIndex, const TArray<UAnimMontage*>& MontageArray) {
    return NULL;
}

UVMainCharacterAnimInstance* UVLayerCharacterAnimInstance::GetMainAnimInstance() {
    return NULL;
}


