#include "VAIProcedureExecution_SummonCreatureDefend.h"
#include "VAIProcedureExecution_ACCOMPANY.h"
#include "VAIProcedureExecution_FOLLOW.h"

UVAIProcedureExecution_SummonCreatureDefend::UVAIProcedureExecution_SummonCreatureDefend() {
    this->InternalFollowProcedure = CreateDefaultSubobject<UVAIProcedureExecution_FOLLOW>(TEXT("ProcedureExecution_Follow_Internal"));
    this->InternalAccompanyProcedure = CreateDefaultSubobject<UVAIProcedureExecution_ACCOMPANY>(TEXT("ProcedureExecution_Accompany_Internal"));
}

UVAIProcedureExecution_FOLLOW* UVAIProcedureExecution_SummonCreatureDefend::GetFollowProcedure() const {
    return NULL;
}

UVAIProcedureExecution_ACCOMPANY* UVAIProcedureExecution_SummonCreatureDefend::GetAccompanyProcedure() const {
    return NULL;
}


