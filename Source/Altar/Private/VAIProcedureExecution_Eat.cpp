#include "VAIProcedureExecution_Eat.h"
#include "VAIProcedureExecution_ACTIVATE.h"

UVAIProcedureExecution_Eat::UVAIProcedureExecution_Eat() {
    this->InternalAcquireProcedure = NULL;
    this->InternalActivateProcedure = CreateDefaultSubobject<UVAIProcedureExecution_ACTIVATE>(TEXT("ProcedureExecution_Activate_Internal"));
}


