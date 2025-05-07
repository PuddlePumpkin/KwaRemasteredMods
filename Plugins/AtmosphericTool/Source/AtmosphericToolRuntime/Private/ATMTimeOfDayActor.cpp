#include "ATMTimeOfDayActor.h"

AATMTimeOfDayActor::AATMTimeOfDayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StopTimeOfDay = false;
    this->StartTime = 0.00f;
    this->DayDuration = 10.00f;
}

void AATMTimeOfDayActor::NotifyReconstruction() {
}

bool AATMTimeOfDayActor::GetIsInitialized() {
    return false;
}


