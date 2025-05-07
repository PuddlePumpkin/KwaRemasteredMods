#include "VAIProcedureExecution_FOLLOW.h"

UVAIProcedureExecution_FOLLOW::UVAIProcedureExecution_FOLLOW() {
    this->NavigationQueryFilterClass = NULL;
}

AActor* UVAIProcedureExecution_FOLLOW::GetTargetActor() const {
    return NULL;
}

float UVAIProcedureExecution_FOLLOW::GetFollowDistance() const {
    return 0.0f;
}


