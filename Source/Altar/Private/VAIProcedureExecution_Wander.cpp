#include "VAIProcedureExecution_Wander.h"
#include "VAIProcedureExecution_TRAVEL.h"

UVAIProcedureExecution_Wander::UVAIProcedureExecution_Wander() {
    this->InternalTravelProcedure = CreateDefaultSubobject<UVAIProcedureExecution_TRAVEL>(TEXT("ProcedureExecution_Travel_Internal"));
}

void UVAIProcedureExecution_Wander::OnSpecialIdleAnimationStopped() {
}

void UVAIProcedureExecution_Wander::OnSpecialIdleAnimationStarted(UAnimSequenceBase* AnimAsset) {
}


