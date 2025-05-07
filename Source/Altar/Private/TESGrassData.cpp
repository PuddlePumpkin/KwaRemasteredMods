#include "TESGrassData.h"

FTESGrassData::FTESGrassData() {
    this->Density = 0;
    this->MinSlopeDegrees = 0;
    this->MaxSlopeDegrees = 0;
    this->DistanceFromWaterLevel = 0;
    this->Underwater = GrassWaterState::GWS_ABOVE_ONLY_ATLEAST;
    this->PositionRange = 0.00f;
    this->HeightRange = 0.00f;
    this->ColorRange = 0.00f;
    this->WavePeriod = 0.00f;
    this->Flags = 0;
}

