#include "VAIProcedureExecution_Pursue.h"
#include "VAIProcedureExecution_FOLLOW.h"

UVAIProcedureExecution_Pursue::UVAIProcedureExecution_Pursue() {
    this->InternalFollowProcedure = CreateDefaultSubobject<UVAIProcedureExecution_FOLLOW>(TEXT("ProcedureExecution_Follow_Internal"));
}

UVAIProcedureExecution_FOLLOW* UVAIProcedureExecution_Pursue::GetFollowProcedure() const {
    return NULL;
}


