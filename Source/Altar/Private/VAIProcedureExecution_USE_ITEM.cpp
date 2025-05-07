#include "VAIProcedureExecution_USE_ITEM.h"
#include "VAIProcedureExecution_ACTIVATE.h"

UVAIProcedureExecution_USE_ITEM::UVAIProcedureExecution_USE_ITEM() {
    this->InternalActivateProcedure = CreateDefaultSubobject<UVAIProcedureExecution_ACTIVATE>(TEXT("ProcedureExecution_Activate_Internal"));
    this->TargetActor = NULL;
}

void UVAIProcedureExecution_USE_ITEM::SetUsedObjectFormId(int32 iUsedObjectFormId) {
}

void UVAIProcedureExecution_USE_ITEM::OnSpecialIdleEnded() {
}

float UVAIProcedureExecution_USE_ITEM::GetUsageRadius() const {
    return 0.0f;
}

int32 UVAIProcedureExecution_USE_ITEM::GetUsageCount() const {
    return 0;
}

AActor* UVAIProcedureExecution_USE_ITEM::GetTarget() const {
    return NULL;
}


