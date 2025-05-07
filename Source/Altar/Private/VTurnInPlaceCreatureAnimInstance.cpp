#include "VTurnInPlaceCreatureAnimInstance.h"

UVTurnInPlaceCreatureAnimInstance::UVTurnInPlaceCreatureAnimInstance() {
    this->BaseRootName = TEXT("Root");
    this->CharacterMoveComp = NULL;
    this->bUseBaseRootBone = false;
    this->TurnPlayRate = 1.00f;
    this->bIsTurningInCombat = false;
    this->bShouldTurnLeftWithSmallBlend = false;
    this->bShouldTurnLeftWithBigBlend = false;
    this->bShouldTurnRightWithSmallBlend = false;
    this->bShouldTurnRightWithBigBlend = false;
    this->bUseSmallBlends = true;
    this->bIsTurning = false;
}

void UVTurnInPlaceCreatureAnimInstance::OnTurnUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVTurnInPlaceCreatureAnimInstance::OnTurnStart(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVTurnInPlaceCreatureAnimInstance::OnTurnEnd(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}

void UVTurnInPlaceCreatureAnimInstance::OnNotTurnUpdate(const FAnimUpdateContext& Context, const FAnimNodeReference& Node) {
}


