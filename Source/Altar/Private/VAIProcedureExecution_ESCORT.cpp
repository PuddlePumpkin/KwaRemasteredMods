#include "VAIProcedureExecution_ESCORT.h"
#include "VAIProcedureExecution_TRAVEL.h"

UVAIProcedureExecution_ESCORT::UVAIProcedureExecution_ESCORT() {
    this->InternalTravelProcedure = CreateDefaultSubobject<UVAIProcedureExecution_TRAVEL>(TEXT("Escort_InternalTravelProcedure"));
}


