#include "MovementManager.h"

UMovementManager::UMovementManager() {
    this->PlayerAIController = NULL;
}

void UMovementManager::OnAIMoveCompleted(FAIRequestID Request, TEnumAsByte<EPathFollowingResult::Type> Result) {
}


