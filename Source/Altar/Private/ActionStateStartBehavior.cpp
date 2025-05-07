#include "ActionStateStartBehavior.h"

UActionStateStartBehavior::UActionStateStartBehavior() {
}

UActionStateStartBehavior* UActionStateStartBehavior::StartBehaviorFromTemplate(UVActorBehaviorBase* BehaviorTemplate, UVActorBehaviorBase*& StartedBehavior, UVAltarActionState* OuterState) {
    return NULL;
}

UActionStateStartBehavior* UActionStateStartBehavior::StartBehaviorFromTag(FGameplayTag BehaviorTag, UVActorBehaviorBase*& StartedBehavior, UVAltarActionState* OuterState) {
    return NULL;
}

void UActionStateStartBehavior::OnBehaviorEnded(bool bIsCanceled) {
}


