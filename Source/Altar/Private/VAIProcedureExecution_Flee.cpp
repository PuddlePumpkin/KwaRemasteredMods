#include "VAIProcedureExecution_Flee.h"
#include "VAIProcedureExecution_TRAVEL.h"

UVAIProcedureExecution_Flee::UVAIProcedureExecution_Flee() {
    this->InternalTravelProcedure = CreateDefaultSubobject<UVAIProcedureExecution_TRAVEL>(TEXT("ProcedureExecution_Travel_Internal"));
}


