#include "StateMachinePlayAnimatedAction.h"

UStateMachinePlayAnimatedAction::UStateMachinePlayAnimatedAction() {
}

UStateMachinePlayAnimatedAction* UStateMachinePlayAnimatedAction::PlayDefaultAnimatedAction(AVPairedPawn* PairedPawn, UVPawnAnimatedAction*& Action) {
    return NULL;
}

UStateMachinePlayAnimatedAction* UStateMachinePlayAnimatedAction::PlayAnimatedAction(AVPairedPawn* PairedPawn, FGameplayTag ActionTag, UVPawnAnimatedAction*& Action, float DesiredDuration, int32 AnimationIndex) {
    return NULL;
}

void UStateMachinePlayAnimatedAction::OnAnimatedActionEnded(bool bIsCanceled) {
}


