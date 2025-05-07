#include "CompassIconMarker.h"

FCompassIconMarker::FCompassIconMarker() {
    this->Angle = 0.00f;
    this->Distance = 0.00f;
    this->bUser2 = false;
    this->Type = EModernMarkerType::None;
    this->bFastTravelEnabled = false;
    this->bUser9 = false;
    this->Depth = 0;
    this->bIsVisible = false;
    this->bIsThroughLoadDoor = false;
    this->bIsAQuestTarget = false;
    this->bIsThePlayerMarker = false;
}

