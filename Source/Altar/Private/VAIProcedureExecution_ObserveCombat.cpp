#include "VAIProcedureExecution_ObserveCombat.h"
#include "VAIProcedureExecution_TRAVEL.h"

UVAIProcedureExecution_ObserveCombat::UVAIProcedureExecution_ObserveCombat() {
    this->InternalTravelProcedure = CreateDefaultSubobject<UVAIProcedureExecution_TRAVEL>(TEXT("ProcedureExecution_Travel_Internal"));
}


