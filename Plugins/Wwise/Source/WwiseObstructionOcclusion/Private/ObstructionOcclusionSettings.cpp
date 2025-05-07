#include "ObstructionOcclusionSettings.h"

UObstructionOcclusionSettings::UObstructionOcclusionSettings() {
    this->ObjectDimensionLowerBound = 50.00f;
    this->ObjectDimensionUpperBound = 400.00f;
    this->ObjectDimensionOmitCount = 1;
    this->MaxObjectsToAccount = 12;
    this->SameOutdoorRoomMin = 0.00f;
    this->SameOutdoorRoomMax = 0.00f;
    this->SameIndoorRoomMin = 0.00f;
    this->SameIndoorRoomMax = 0.00f;
    this->DifferentOutdoorRoomsMin = 0.00f;
    this->DifferentOutdoorRoomsMax = 0.00f;
    this->DifferentIndoorRoomsMin = 0.00f;
    this->DifferentIndoorRoomsMax = 0.70f;
    this->FromOutdoorToIndoorRoomMin = 0.00f;
    this->FromOutdoorToIndoorRoomMax = 0.70f;
    this->FromIndoorToOutdoorRoomMin = 0.00f;
    this->FromIndoorToOutdoorRoomMax = 0.70f;
}


