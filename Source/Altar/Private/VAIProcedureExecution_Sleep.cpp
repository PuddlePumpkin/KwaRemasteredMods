#include "VAIProcedureExecution_Sleep.h"
#include "VAIProcedureExecution_TRAVEL.h"

UVAIProcedureExecution_Sleep::UVAIProcedureExecution_Sleep() {
    this->InternalTravelProcedure = CreateDefaultSubobject<UVAIProcedureExecution_TRAVEL>(TEXT("ProcedureExecution_Travel_Internal"));
    this->TargetBedActor = NULL;
}

UVAIProcedureExecution_TRAVEL* UVAIProcedureExecution_Sleep::GetInternalProcedure() const {
    return NULL;
}


