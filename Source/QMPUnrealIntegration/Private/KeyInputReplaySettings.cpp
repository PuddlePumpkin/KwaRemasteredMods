#include "KeyInputReplaySettings.h"

UKeyInputReplaySettings::UKeyInputReplaySettings() {
    this->IgnoreRecordKeys.AddDefaulted(1);
    this->ActionKeys.AddDefaulted(2);
    this->UIActionKeys.AddDefaulted(1);
    this->MaxResyncDistance = 1500.00f;
    this->MaxTimeWaitingForEvent = 30.00f;
    this->InteractionChannel = ECC_GameTraceChannel2;
    this->MinTimeToDetectInteraction = 0.15f;
    this->UseNavigationForPlayerMovement = true;
    this->HoldInputDelay = 0.30f;
    this->AllowedDistanceRatio = 3.00f;
    this->MovementDetectionSampleDelay = 0.20f;
    this->MovingDetectionSampleCount = 5;
    this->MovingDetectionDistance = 5;
    this->MovingDetectionDistanceSquared = 25;
    this->MaxChunkSize = 1048576;
    this->NbChunksInMemory = 2;
}


