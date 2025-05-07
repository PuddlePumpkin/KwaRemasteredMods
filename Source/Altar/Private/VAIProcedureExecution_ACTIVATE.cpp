#include "VAIProcedureExecution_ACTIVATE.h"
#include "VAIProcedureExecution_TRAVEL.h"

UVAIProcedureExecution_ACTIVATE::UVAIProcedureExecution_ACTIVATE() {
    this->InternalTravelProcedure = CreateDefaultSubobject<UVAIProcedureExecution_TRAVEL>(TEXT("ProcedureExecution_Travel_Internal_Activate"));
}

void UVAIProcedureExecution_ACTIVATE::OnSpecialIdleEnded() {
}

AActor* UVAIProcedureExecution_ACTIVATE::GetTargetActor() const {
    return NULL;
}

float UVAIProcedureExecution_ACTIVATE::GetActivationRadius() const {
    return 0.0f;
}


