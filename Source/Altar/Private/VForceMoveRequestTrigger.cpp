#include "VForceMoveRequestTrigger.h"

AVForceMoveRequestTrigger::AVForceMoveRequestTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->AcceptanceRadius = 50.00f;
}


