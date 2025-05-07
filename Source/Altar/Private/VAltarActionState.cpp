#include "VAltarActionState.h"

UVAltarActionState::UVAltarActionState() {
    this->bIsActionStateFinished = false;
}

UVActorBehaviorBase* UVAltarActionState::CreateBehaviorFromTemplate(UVActorBehaviorBase* BehaviorTemplate) {
    return NULL;
}

UVActorBehaviorBase* UVAltarActionState::CreateBehaviorFromTag(FGameplayTag BehaviorTag) {
    return NULL;
}


