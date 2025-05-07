#include "VAIProcedureExecution_Acquire.h"
#include "VAIProcedureExecution_ACTIVATE.h"

UVAIProcedureExecution_Acquire::UVAIProcedureExecution_Acquire() {
    this->InternalActivateProcedure = CreateDefaultSubobject<UVAIProcedureExecution_ACTIVATE>(TEXT("ProcedureExecution_Activate_Internal"));
}

UVAIProcedureExecution_ACTIVATE* UVAIProcedureExecution_Acquire::GetInternalActivateProcedure() const {
    return NULL;
}


