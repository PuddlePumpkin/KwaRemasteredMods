#include "VSaveGameDetails.h"

FVSaveGameDetails::FVSaveGameDetails() {
    this->SaveNumber = 0;
    this->PlayerLevel = 0;
    this->InGameDate = 0.00f;
    this->Type = EVSaveType::Manual;
    this->bIsESS = false;
    this->bNeedTheWholeGameDownloaded = false;
    this->bIsAchievementsDisabled = false;
}

