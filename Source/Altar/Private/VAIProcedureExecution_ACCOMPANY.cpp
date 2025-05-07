#include "VAIProcedureExecution_ACCOMPANY.h"
#include "VAIProcedureExecution_FOLLOW.h"

UVAIProcedureExecution_ACCOMPANY::UVAIProcedureExecution_ACCOMPANY() {
    this->InternalFollowProcedure = CreateDefaultSubobject<UVAIProcedureExecution_FOLLOW>(TEXT("ProcedureExecution_Follow_Internal_Accompany"));
}


